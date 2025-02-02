package com.nitrocontacts

import com.margelo.nitro.nitrocontacts.HybridNitroContactsSpec

class HybridNitroContacts: HybridNitroContactsSpec() {
    override val memorySize: Long
        get() = 5
    
    override fun sum(num1: Double, num2: Double): Double {
        return num1 + num2
    }
}
