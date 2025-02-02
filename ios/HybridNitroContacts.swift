import Foundation
import NitroModules
import Contacts

class HybridNitroContacts: HybridNitroContactsSpec {
    let contactService: ContactServiceDelegate = ContactService()
    
    func getContacts() throws -> Promise<[NitroContact]>{
        return .async{
            do {
                return try await self.contactService.getAll()
            } catch {
                throw error
            }
        }
    }
    
    func getContact(id: String) throws -> Promise<NitroContact?>{
        return .async{
            do {
                return try await self.contactService.getById(contactId: id)
            } catch {
                throw error
            }
        }
    }
    
    func requestPermission() throws -> Promise<Bool> {
        return .async {
            do {
                return try await CNContactStore().requestAccess(for: .contacts)
            } catch {
                throw error
            }
        }
    }
    
    func authorizationStatus() throws -> Promise<NitroAuthorizationStatus> {
        return .async {
            let status = CNContactStore.authorizationStatus(for: .contacts)
            switch status {
            case .notDetermined:
                return .notdetermined
            case .authorized:
                return .authorized
            case .denied:
                return .denied
            case .restricted:
                return .restricted
            case .limited:
                return .limited
            @unknown default:
                fatalError()
            }
        }
    }
}
