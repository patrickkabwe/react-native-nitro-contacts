///
/// JNitroContact.hpp
/// This file was generated by nitrogen. DO NOT MODIFY THIS FILE.
/// https://github.com/mrousavy/nitro
/// Copyright © 2025 Marc Rousavy @ Margelo
///

#pragma once

#include <fbjni/fbjni.h>
#include "NitroContact.hpp"

#include <string>

namespace margelo::nitro::nitrocontacts {

  using namespace facebook;

  /**
   * The C++ JNI bridge between the C++ struct "NitroContact" and the the Kotlin data class "NitroContact".
   */
  struct JNitroContact final: public jni::JavaClass<JNitroContact> {
  public:
    static auto constexpr kJavaDescriptor = "Lcom/margelo/nitro/nitrocontacts/NitroContact;";

  public:
    /**
     * Convert this Java/Kotlin-based struct to the C++ struct NitroContact by copying all values to C++.
     */
    [[maybe_unused]]
    [[nodiscard]]
    NitroContact toCpp() const {
      static const auto clazz = javaClassStatic();
      static const auto fieldId = clazz->getField<jni::JString>("id");
      jni::local_ref<jni::JString> id = this->getFieldValue(fieldId);
      return NitroContact(
        id->toStdString()
      );
    }

  public:
    /**
     * Create a Java/Kotlin-based struct by copying all values from the given C++ struct to Java.
     */
    [[maybe_unused]]
    static jni::local_ref<JNitroContact::javaobject> fromCpp(const NitroContact& value) {
      return newInstance(
        jni::make_jstring(value.id)
      );
    }
  };

} // namespace margelo::nitro::nitrocontacts
