///
/// NitroAuthorizationStatus.hpp
/// This file was generated by nitrogen. DO NOT MODIFY THIS FILE.
/// https://github.com/mrousavy/nitro
/// Copyright © 2025 Marc Rousavy @ Margelo
///

#pragma once

#if __has_include(<NitroModules/NitroHash.hpp>)
#include <NitroModules/NitroHash.hpp>
#else
#error NitroModules cannot be found! Are you sure you installed NitroModules properly?
#endif
#if __has_include(<NitroModules/JSIConverter.hpp>)
#include <NitroModules/JSIConverter.hpp>
#else
#error NitroModules cannot be found! Are you sure you installed NitroModules properly?
#endif
#if __has_include(<NitroModules/NitroDefines.hpp>)
#include <NitroModules/NitroDefines.hpp>
#else
#error NitroModules cannot be found! Are you sure you installed NitroModules properly?
#endif

namespace margelo::nitro::nitrocontacts {

  /**
   * An enum which can be represented as a JavaScript union (NitroAuthorizationStatus).
   */
  enum class NitroAuthorizationStatus {
    AUTHORIZED      SWIFT_NAME(authorized) = 0,
    DENIED      SWIFT_NAME(denied) = 1,
    RESTRICTED      SWIFT_NAME(restricted) = 2,
    NOTDETERMINED      SWIFT_NAME(notdetermined) = 3,
    LIMITED      SWIFT_NAME(limited) = 4,
  } CLOSED_ENUM;

} // namespace margelo::nitro::nitrocontacts

namespace margelo::nitro {

  using namespace margelo::nitro::nitrocontacts;

  // C++ NitroAuthorizationStatus <> JS NitroAuthorizationStatus (union)
  template <>
  struct JSIConverter<NitroAuthorizationStatus> final {
    static inline NitroAuthorizationStatus fromJSI(jsi::Runtime& runtime, const jsi::Value& arg) {
      std::string unionValue = JSIConverter<std::string>::fromJSI(runtime, arg);
      switch (hashString(unionValue.c_str(), unionValue.size())) {
        case hashString("authorized"): return NitroAuthorizationStatus::AUTHORIZED;
        case hashString("denied"): return NitroAuthorizationStatus::DENIED;
        case hashString("restricted"): return NitroAuthorizationStatus::RESTRICTED;
        case hashString("notDetermined"): return NitroAuthorizationStatus::NOTDETERMINED;
        case hashString("limited"): return NitroAuthorizationStatus::LIMITED;
        default: [[unlikely]]
          throw std::invalid_argument("Cannot convert \"" + unionValue + "\" to enum NitroAuthorizationStatus - invalid value!");
      }
    }
    static inline jsi::Value toJSI(jsi::Runtime& runtime, NitroAuthorizationStatus arg) {
      switch (arg) {
        case NitroAuthorizationStatus::AUTHORIZED: return JSIConverter<std::string>::toJSI(runtime, "authorized");
        case NitroAuthorizationStatus::DENIED: return JSIConverter<std::string>::toJSI(runtime, "denied");
        case NitroAuthorizationStatus::RESTRICTED: return JSIConverter<std::string>::toJSI(runtime, "restricted");
        case NitroAuthorizationStatus::NOTDETERMINED: return JSIConverter<std::string>::toJSI(runtime, "notDetermined");
        case NitroAuthorizationStatus::LIMITED: return JSIConverter<std::string>::toJSI(runtime, "limited");
        default: [[unlikely]]
          throw std::invalid_argument("Cannot convert NitroAuthorizationStatus to JS - invalid value: "
                                    + std::to_string(static_cast<int>(arg)) + "!");
      }
    }
    static inline bool canConvert(jsi::Runtime& runtime, const jsi::Value& value) {
      if (!value.isString()) {
        return false;
      }
      std::string unionValue = JSIConverter<std::string>::fromJSI(runtime, value);
      switch (hashString(unionValue.c_str(), unionValue.size())) {
        case hashString("authorized"):
        case hashString("denied"):
        case hashString("restricted"):
        case hashString("notDetermined"):
        case hashString("limited"):
          return true;
        default:
          return false;
      }
    }
  };

} // namespace margelo::nitro
