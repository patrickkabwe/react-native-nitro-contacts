import { type HybridObject } from 'react-native-nitro-modules'
import type { NitroContact, NitroAuthorizationStatus } from '../types'

export interface NitroContacts extends HybridObject<{ ios: 'swift', android: 'kotlin' }> {
    getContacts(): Promise<NitroContact[]>
    // getContactsWithoutPhotos(): Promise<Contact[]>
    getContact(id: string): Promise<NitroContact | null>
    // saveContact(contact: Contact): Promise<void>
    requestPermission(): Promise<boolean>
    authorizationStatus(): Promise<NitroAuthorizationStatus>
}