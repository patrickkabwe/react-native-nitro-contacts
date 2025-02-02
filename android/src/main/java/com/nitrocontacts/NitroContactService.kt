package com.nitrocontacts

import android.provider.ContactsContract
import android.util.Log
import com.facebook.react.bridge.ReactApplicationContext
import com.margelo.nitro.nitrocontacts.NitroContact

class NitroContactService(private val context: ReactApplicationContext?) {

    fun getAll(): Array<NitroContact> {
        val contentResolver = context?.contentResolver.let {
            it ?: throw Error("ContentResolver is null")
        }
        val projection = arrayOf(
            ContactsContract.CommonDataKinds.Phone.CONTACT_ID,
        )
        val cursor = contentResolver.query(
            ContactsContract.CommonDataKinds.Phone.CONTENT_URI,
            projection,
            null,
            null,
            null,
        )
        val contacts = mutableListOf<NitroContact>()

        cursor?.use {
            val idIndex = cursor.getColumnIndex(ContactsContract.CommonDataKinds.Phone.CONTACT_ID)

            while (cursor.moveToNext()) {
                val id = cursor.getString(idIndex)
                contacts.add(NitroContact(id))
            }
        }

        cursor?.close()
        return contacts.toTypedArray()
    }

    fun getById(contactId: String): NitroContact? {
        val contentResolver = context?.contentResolver.let {
            it ?: throw Error("ContentResolver is null")
        }
        val projection = arrayOf(
            ContactsContract.CommonDataKinds.Phone.CONTACT_ID,
        )
        val cursor = contentResolver.query(
            ContactsContract.CommonDataKinds.Phone.CONTENT_URI,
            projection,
            ContactsContract.CommonDataKinds.Phone.CONTACT_ID +" = ?",
            arrayOf(contactId),
            null,
        )
        var contact: NitroContact? = null

        cursor?.use {
            val idIndex = cursor.getColumnIndex(ContactsContract.CommonDataKinds.Phone.CONTACT_ID)

            if (cursor.moveToFirst()) {
                val id = cursor.getString(idIndex)
                contact = NitroContact(id)
            }
        }

        cursor?.close()
        return contact
    }

    companion object {
        const val TAG = "HybridNitroContacts"
    }
}