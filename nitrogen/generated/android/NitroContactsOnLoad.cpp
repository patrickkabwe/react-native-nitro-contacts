///
/// NitroContactsOnLoad.cpp
/// This file was generated by nitrogen. DO NOT MODIFY THIS FILE.
/// https://github.com/mrousavy/nitro
/// Copyright © 2025 Marc Rousavy @ Margelo
///

#ifndef BUILDING_NITROCONTACTS_WITH_GENERATED_CMAKE_PROJECT
#error NitroContactsOnLoad.cpp is not being built with the autogenerated CMakeLists.txt project. Is a different CMakeLists.txt building this?
#endif

#include "NitroContactsOnLoad.hpp"

#include <jni.h>
#include <fbjni/fbjni.h>
#include <NitroModules/HybridObjectRegistry.hpp>

#include "JHybridNitroContactsSpec.hpp"
#include <NitroModules/JNISharedPtr.hpp>
#include <NitroModules/DefaultConstructableObject.hpp>

namespace margelo::nitro::nitrocontacts {

int initialize(JavaVM* vm) {
  using namespace margelo::nitro;
  using namespace margelo::nitro::nitrocontacts;
  using namespace facebook;

  return facebook::jni::initialize(vm, [] {
    // Register native JNI methods
    margelo::nitro::nitrocontacts::JHybridNitroContactsSpec::registerNatives();

    // Register Nitro Hybrid Objects
    HybridObjectRegistry::registerHybridObjectConstructor(
      "NitroContacts",
      []() -> std::shared_ptr<HybridObject> {
        static DefaultConstructableObject<JHybridNitroContactsSpec::javaobject> object("com/nitrocontacts/HybridNitroContacts");
        auto instance = object.create();
        auto globalRef = jni::make_global(instance);
        return JNISharedPtr::make_shared_from_jni<JHybridNitroContactsSpec>(globalRef);
      }
    );
  });
}

} // namespace margelo::nitro::nitrocontacts
