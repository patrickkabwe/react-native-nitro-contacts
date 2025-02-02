//
//  ContactService.swift
//  Pods
//
//  Created by Patrick Kabwe on 02/02/2025.
//

import Foundation
import UIKit
import Contacts

protocol ContactServiceDelegate {
    func getAll() async throws -> [NitroContact]
    func getById(contactId id: String) async throws -> NitroContact?
}

actor ContactService: NSObject, ContactServiceDelegate {
    private let contactStore = CNContactStore()
    
    func getAll() throws -> [NitroContact] {
        let container = contactStore.defaultContainerIdentifier()
        let predicate = CNContact.predicateForContactsInContainer(withIdentifier: container)
        let keysToFetch = [CNContactGivenNameKey, CNContactFamilyNameKey] as [CNKeyDescriptor]
        let contacts = try contactStore.unifiedContacts(matching: predicate, keysToFetch: keysToFetch)
        let transformedContacts: [NitroContact] = contacts.map {
            .init(
                id: $0.identifier
            )
        }
        return transformedContacts
    }
    
    func getById(contactId id: String) throws -> NitroContact? {
        let contact = try contactStore.unifiedContact(withIdentifier: id, keysToFetch: [])
        if !contact.isKeyAvailable(CNContactIdentifierKey) {
            return nil
        }
        let transformedContact: NitroContact = .init(
            id: contact.identifier
        )
        return transformedContact
    }
    
}
