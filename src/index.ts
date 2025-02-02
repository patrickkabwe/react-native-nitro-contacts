import { NitroModules } from 'react-native-nitro-modules'
import type { NitroContacts as NitroContactsSpec } from './specs/nitro-contacts.nitro'

export const NitroContacts =
  NitroModules.createHybridObject<NitroContactsSpec>('NitroContacts')