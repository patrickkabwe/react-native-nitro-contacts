///
/// JHybridNitroContactsSpec.cpp
/// This file was generated by nitrogen. DO NOT MODIFY THIS FILE.
/// https://github.com/mrousavy/nitro
/// Copyright © 2025 Marc Rousavy @ Margelo
///

#include "JHybridNitroContactsSpec.hpp"

// Forward declaration of `NitroContact` to properly resolve imports.
namespace margelo::nitro::nitrocontacts { struct NitroContact; }
// Forward declaration of `NitroAuthorizationStatus` to properly resolve imports.
namespace margelo::nitro::nitrocontacts { enum class NitroAuthorizationStatus; }

#include <NitroModules/Promise.hpp>
#include <vector>
#include "NitroContact.hpp"
#include <NitroModules/JPromise.hpp>
#include "JNitroContact.hpp"
#include <string>
#include <optional>
#include "NitroAuthorizationStatus.hpp"
#include "JNitroAuthorizationStatus.hpp"

namespace margelo::nitro::nitrocontacts {

  jni::local_ref<JHybridNitroContactsSpec::jhybriddata> JHybridNitroContactsSpec::initHybrid(jni::alias_ref<jhybridobject> jThis) {
    return makeCxxInstance(jThis);
  }

  void JHybridNitroContactsSpec::registerNatives() {
    registerHybrid({
      makeNativeMethod("initHybrid", JHybridNitroContactsSpec::initHybrid),
    });
  }

  size_t JHybridNitroContactsSpec::getExternalMemorySize() noexcept {
    static const auto method = _javaPart->getClass()->getMethod<jlong()>("getMemorySize");
    return method(_javaPart);
  }

  // Properties
  

  // Methods
  std::shared_ptr<Promise<std::vector<NitroContact>>> JHybridNitroContactsSpec::getContacts() {
    static const auto method = _javaPart->getClass()->getMethod<jni::local_ref<JPromise::javaobject>()>("getContacts");
    auto __result = method(_javaPart);
    return [&]() {
      auto __promise = Promise<std::vector<NitroContact>>::create();
      __result->cthis()->addOnResolvedListener([=](const jni::alias_ref<jni::JObject>& __boxedResult) {
        auto __result = jni::static_ref_cast<jni::JArrayClass<JNitroContact>>(__boxedResult);
        __promise->resolve([&]() {
          size_t __size = __result->size();
          std::vector<NitroContact> __vector;
          __vector.reserve(__size);
          for (size_t __i = 0; __i < __size; __i++) {
            auto __element = __result->getElement(__i);
            __vector.push_back(__element->toCpp());
          }
          return __vector;
        }());
      });
      __result->cthis()->addOnRejectedListener([=](const jni::alias_ref<jni::JThrowable>& __throwable) {
        jni::JniException __jniError(__throwable);
        __promise->reject(std::make_exception_ptr(__jniError));
      });
      return __promise;
    }();
  }
  std::shared_ptr<Promise<std::optional<NitroContact>>> JHybridNitroContactsSpec::getContact(const std::string& id) {
    static const auto method = _javaPart->getClass()->getMethod<jni::local_ref<JPromise::javaobject>(jni::alias_ref<jni::JString> /* id */)>("getContact");
    auto __result = method(_javaPart, jni::make_jstring(id));
    return [&]() {
      auto __promise = Promise<std::optional<NitroContact>>::create();
      __result->cthis()->addOnResolvedListener([=](const jni::alias_ref<jni::JObject>& __boxedResult) {
        auto __result = jni::static_ref_cast<JNitroContact>(__boxedResult);
        __promise->resolve(__result != nullptr ? std::make_optional(__result->toCpp()) : std::nullopt);
      });
      __result->cthis()->addOnRejectedListener([=](const jni::alias_ref<jni::JThrowable>& __throwable) {
        jni::JniException __jniError(__throwable);
        __promise->reject(std::make_exception_ptr(__jniError));
      });
      return __promise;
    }();
  }
  std::shared_ptr<Promise<bool>> JHybridNitroContactsSpec::requestPermission() {
    static const auto method = _javaPart->getClass()->getMethod<jni::local_ref<JPromise::javaobject>()>("requestPermission");
    auto __result = method(_javaPart);
    return [&]() {
      auto __promise = Promise<bool>::create();
      __result->cthis()->addOnResolvedListener([=](const jni::alias_ref<jni::JObject>& __boxedResult) {
        auto __result = jni::static_ref_cast<jni::JBoolean>(__boxedResult);
        __promise->resolve(static_cast<bool>(__result->value()));
      });
      __result->cthis()->addOnRejectedListener([=](const jni::alias_ref<jni::JThrowable>& __throwable) {
        jni::JniException __jniError(__throwable);
        __promise->reject(std::make_exception_ptr(__jniError));
      });
      return __promise;
    }();
  }
  std::shared_ptr<Promise<NitroAuthorizationStatus>> JHybridNitroContactsSpec::authorizationStatus() {
    static const auto method = _javaPart->getClass()->getMethod<jni::local_ref<JPromise::javaobject>()>("authorizationStatus");
    auto __result = method(_javaPart);
    return [&]() {
      auto __promise = Promise<NitroAuthorizationStatus>::create();
      __result->cthis()->addOnResolvedListener([=](const jni::alias_ref<jni::JObject>& __boxedResult) {
        auto __result = jni::static_ref_cast<JNitroAuthorizationStatus>(__boxedResult);
        __promise->resolve(__result->toCpp());
      });
      __result->cthis()->addOnRejectedListener([=](const jni::alias_ref<jni::JThrowable>& __throwable) {
        jni::JniException __jniError(__throwable);
        __promise->reject(std::make_exception_ptr(__jniError));
      });
      return __promise;
    }();
  }

} // namespace margelo::nitro::nitrocontacts
