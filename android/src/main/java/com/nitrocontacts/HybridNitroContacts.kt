package com.nitrocontacts

import android.util.Log
import com.margelo.nitro.NitroModules
import com.margelo.nitro.core.Promise
import com.margelo.nitro.nitrocontacts.HybridNitroContactsSpec
import com.margelo.nitro.nitrocontacts.NitroAuthorizationStatus
import com.margelo.nitro.nitrocontacts.NitroContact

class HybridNitroContacts: HybridNitroContactsSpec() {
    private val context = NitroModules.applicationContext
    private val contactService = NitroContactService(context)

    override fun getContacts(): Promise<Array<NitroContact>> {
       return Promise.async {
           try {
               contactService.getAll()
           } catch (error: Exception) {
               Log.d(TAG, error.message.toString())
               throw Error(error)
           }
       }
    }

    override fun getContact(id: String): Promise<NitroContact?> {
        return Promise.async {
            try {
                contactService.getById(id)
            } catch (error: Exception) {
                Log.d(TAG, error.message.toString())
                throw Error(error)
            }
        }
    }

    override fun authorizationStatus(): Promise<NitroAuthorizationStatus> {

        // IOS only always returns AUTHORIZED
        return Promise.async {
            NitroAuthorizationStatus.AUTHORIZED
        }
    }

    override fun requestPermission(): Promise<Boolean> {
        return Promise.async {
            true
        }
    }

    companion object {
        const val TAG = "HybridNitroContacts"
    }
}
