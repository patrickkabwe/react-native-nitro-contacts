///
/// NitroContacts-Swift-Cxx-Bridge.hpp
/// This file was generated by nitrogen. DO NOT MODIFY THIS FILE.
/// https://github.com/mrousavy/nitro
/// Copyright © 2025 Marc Rousavy @ Margelo
///

#pragma once

// Forward declarations of C++ defined types
// Forward declaration of `HybridNitroContactsSpec` to properly resolve imports.
namespace margelo::nitro::nitrocontacts { class HybridNitroContactsSpec; }
// Forward declaration of `NitroAuthorizationStatus` to properly resolve imports.
namespace margelo::nitro::nitrocontacts { enum class NitroAuthorizationStatus; }
// Forward declaration of `NitroContact` to properly resolve imports.
namespace margelo::nitro::nitrocontacts { struct NitroContact; }

// Forward declarations of Swift defined types
// Forward declaration of `HybridNitroContactsSpec_cxx` to properly resolve imports.
namespace NitroContacts { class HybridNitroContactsSpec_cxx; }

// Include C++ defined types
#include "HybridNitroContactsSpec.hpp"
#include "NitroAuthorizationStatus.hpp"
#include "NitroContact.hpp"
#include <NitroModules/Promise.hpp>
#include <NitroModules/PromiseHolder.hpp>
#include <NitroModules/Result.hpp>
#include <exception>
#include <functional>
#include <memory>
#include <optional>
#include <string>
#include <vector>

/**
 * Contains specialized versions of C++ templated types so they can be accessed from Swift,
 * as well as helper functions to interact with those C++ types from Swift.
 */
namespace margelo::nitro::nitrocontacts::bridge::swift {

  // pragma MARK: std::vector<NitroContact>
  /**
   * Specialized version of `std::vector<NitroContact>`.
   */
  using std__vector_NitroContact_ = std::vector<NitroContact>;
  inline std::vector<NitroContact> create_std__vector_NitroContact_(size_t size) {
    std::vector<NitroContact> vector;
    vector.reserve(size);
    return vector;
  }
  
  // pragma MARK: std::shared_ptr<Promise<std::vector<NitroContact>>>
  /**
   * Specialized version of `std::shared_ptr<Promise<std::vector<NitroContact>>>`.
   */
  using std__shared_ptr_Promise_std__vector_NitroContact___ = std::shared_ptr<Promise<std::vector<NitroContact>>>;
  inline std::shared_ptr<Promise<std::vector<NitroContact>>> create_std__shared_ptr_Promise_std__vector_NitroContact___() {
    return Promise<std::vector<NitroContact>>::create();
  }
  inline PromiseHolder<std::vector<NitroContact>> wrap_std__shared_ptr_Promise_std__vector_NitroContact___(std::shared_ptr<Promise<std::vector<NitroContact>>> promise) {
    return PromiseHolder<std::vector<NitroContact>>(std::move(promise));
  }
  
  // pragma MARK: std::function<void(const std::vector<NitroContact>& /* result */)>
  /**
   * Specialized version of `std::function<void(const std::vector<NitroContact>&)>`.
   */
  using Func_void_std__vector_NitroContact_ = std::function<void(const std::vector<NitroContact>& /* result */)>;
  /**
   * Wrapper class for a `std::function<void(const std::vector<NitroContact>& / * result * /)>`, this can be used from Swift.
   */
  class Func_void_std__vector_NitroContact__Wrapper final {
  public:
    explicit Func_void_std__vector_NitroContact__Wrapper(std::function<void(const std::vector<NitroContact>& /* result */)>&& func): _function(std::make_shared<std::function<void(const std::vector<NitroContact>& /* result */)>>(std::move(func))) {}
    inline void call(std::vector<NitroContact> result) const {
      _function->operator()(result);
    }
  private:
    std::shared_ptr<std::function<void(const std::vector<NitroContact>& /* result */)>> _function;
  };
  Func_void_std__vector_NitroContact_ create_Func_void_std__vector_NitroContact_(void* _Nonnull swiftClosureWrapper);
  inline Func_void_std__vector_NitroContact__Wrapper wrap_Func_void_std__vector_NitroContact_(Func_void_std__vector_NitroContact_ value) {
    return Func_void_std__vector_NitroContact__Wrapper(std::move(value));
  }
  
  // pragma MARK: std::function<void(const std::exception_ptr& /* error */)>
  /**
   * Specialized version of `std::function<void(const std::exception_ptr&)>`.
   */
  using Func_void_std__exception_ptr = std::function<void(const std::exception_ptr& /* error */)>;
  /**
   * Wrapper class for a `std::function<void(const std::exception_ptr& / * error * /)>`, this can be used from Swift.
   */
  class Func_void_std__exception_ptr_Wrapper final {
  public:
    explicit Func_void_std__exception_ptr_Wrapper(std::function<void(const std::exception_ptr& /* error */)>&& func): _function(std::make_shared<std::function<void(const std::exception_ptr& /* error */)>>(std::move(func))) {}
    inline void call(std::exception_ptr error) const {
      _function->operator()(error);
    }
  private:
    std::shared_ptr<std::function<void(const std::exception_ptr& /* error */)>> _function;
  };
  Func_void_std__exception_ptr create_Func_void_std__exception_ptr(void* _Nonnull swiftClosureWrapper);
  inline Func_void_std__exception_ptr_Wrapper wrap_Func_void_std__exception_ptr(Func_void_std__exception_ptr value) {
    return Func_void_std__exception_ptr_Wrapper(std::move(value));
  }
  
  // pragma MARK: std::optional<NitroContact>
  /**
   * Specialized version of `std::optional<NitroContact>`.
   */
  using std__optional_NitroContact_ = std::optional<NitroContact>;
  inline std::optional<NitroContact> create_std__optional_NitroContact_(const NitroContact& value) {
    return std::optional<NitroContact>(value);
  }
  
  // pragma MARK: std::shared_ptr<Promise<std::optional<NitroContact>>>
  /**
   * Specialized version of `std::shared_ptr<Promise<std::optional<NitroContact>>>`.
   */
  using std__shared_ptr_Promise_std__optional_NitroContact___ = std::shared_ptr<Promise<std::optional<NitroContact>>>;
  inline std::shared_ptr<Promise<std::optional<NitroContact>>> create_std__shared_ptr_Promise_std__optional_NitroContact___() {
    return Promise<std::optional<NitroContact>>::create();
  }
  inline PromiseHolder<std::optional<NitroContact>> wrap_std__shared_ptr_Promise_std__optional_NitroContact___(std::shared_ptr<Promise<std::optional<NitroContact>>> promise) {
    return PromiseHolder<std::optional<NitroContact>>(std::move(promise));
  }
  
  // pragma MARK: std::function<void(const std::optional<NitroContact>& /* result */)>
  /**
   * Specialized version of `std::function<void(const std::optional<NitroContact>&)>`.
   */
  using Func_void_std__optional_NitroContact_ = std::function<void(const std::optional<NitroContact>& /* result */)>;
  /**
   * Wrapper class for a `std::function<void(const std::optional<NitroContact>& / * result * /)>`, this can be used from Swift.
   */
  class Func_void_std__optional_NitroContact__Wrapper final {
  public:
    explicit Func_void_std__optional_NitroContact__Wrapper(std::function<void(const std::optional<NitroContact>& /* result */)>&& func): _function(std::make_shared<std::function<void(const std::optional<NitroContact>& /* result */)>>(std::move(func))) {}
    inline void call(std::optional<NitroContact> result) const {
      _function->operator()(result);
    }
  private:
    std::shared_ptr<std::function<void(const std::optional<NitroContact>& /* result */)>> _function;
  };
  Func_void_std__optional_NitroContact_ create_Func_void_std__optional_NitroContact_(void* _Nonnull swiftClosureWrapper);
  inline Func_void_std__optional_NitroContact__Wrapper wrap_Func_void_std__optional_NitroContact_(Func_void_std__optional_NitroContact_ value) {
    return Func_void_std__optional_NitroContact__Wrapper(std::move(value));
  }
  
  // pragma MARK: std::shared_ptr<Promise<bool>>
  /**
   * Specialized version of `std::shared_ptr<Promise<bool>>`.
   */
  using std__shared_ptr_Promise_bool__ = std::shared_ptr<Promise<bool>>;
  inline std::shared_ptr<Promise<bool>> create_std__shared_ptr_Promise_bool__() {
    return Promise<bool>::create();
  }
  inline PromiseHolder<bool> wrap_std__shared_ptr_Promise_bool__(std::shared_ptr<Promise<bool>> promise) {
    return PromiseHolder<bool>(std::move(promise));
  }
  
  // pragma MARK: std::function<void(bool /* result */)>
  /**
   * Specialized version of `std::function<void(bool)>`.
   */
  using Func_void_bool = std::function<void(bool /* result */)>;
  /**
   * Wrapper class for a `std::function<void(bool / * result * /)>`, this can be used from Swift.
   */
  class Func_void_bool_Wrapper final {
  public:
    explicit Func_void_bool_Wrapper(std::function<void(bool /* result */)>&& func): _function(std::make_shared<std::function<void(bool /* result */)>>(std::move(func))) {}
    inline void call(bool result) const {
      _function->operator()(result);
    }
  private:
    std::shared_ptr<std::function<void(bool /* result */)>> _function;
  };
  Func_void_bool create_Func_void_bool(void* _Nonnull swiftClosureWrapper);
  inline Func_void_bool_Wrapper wrap_Func_void_bool(Func_void_bool value) {
    return Func_void_bool_Wrapper(std::move(value));
  }
  
  // pragma MARK: std::shared_ptr<Promise<NitroAuthorizationStatus>>
  /**
   * Specialized version of `std::shared_ptr<Promise<NitroAuthorizationStatus>>`.
   */
  using std__shared_ptr_Promise_NitroAuthorizationStatus__ = std::shared_ptr<Promise<NitroAuthorizationStatus>>;
  inline std::shared_ptr<Promise<NitroAuthorizationStatus>> create_std__shared_ptr_Promise_NitroAuthorizationStatus__() {
    return Promise<NitroAuthorizationStatus>::create();
  }
  inline PromiseHolder<NitroAuthorizationStatus> wrap_std__shared_ptr_Promise_NitroAuthorizationStatus__(std::shared_ptr<Promise<NitroAuthorizationStatus>> promise) {
    return PromiseHolder<NitroAuthorizationStatus>(std::move(promise));
  }
  
  // pragma MARK: std::function<void(NitroAuthorizationStatus /* result */)>
  /**
   * Specialized version of `std::function<void(NitroAuthorizationStatus)>`.
   */
  using Func_void_NitroAuthorizationStatus = std::function<void(NitroAuthorizationStatus /* result */)>;
  /**
   * Wrapper class for a `std::function<void(NitroAuthorizationStatus / * result * /)>`, this can be used from Swift.
   */
  class Func_void_NitroAuthorizationStatus_Wrapper final {
  public:
    explicit Func_void_NitroAuthorizationStatus_Wrapper(std::function<void(NitroAuthorizationStatus /* result */)>&& func): _function(std::make_shared<std::function<void(NitroAuthorizationStatus /* result */)>>(std::move(func))) {}
    inline void call(int result) const {
      _function->operator()(static_cast<NitroAuthorizationStatus>(result));
    }
  private:
    std::shared_ptr<std::function<void(NitroAuthorizationStatus /* result */)>> _function;
  };
  Func_void_NitroAuthorizationStatus create_Func_void_NitroAuthorizationStatus(void* _Nonnull swiftClosureWrapper);
  inline Func_void_NitroAuthorizationStatus_Wrapper wrap_Func_void_NitroAuthorizationStatus(Func_void_NitroAuthorizationStatus value) {
    return Func_void_NitroAuthorizationStatus_Wrapper(std::move(value));
  }
  
  // pragma MARK: std::shared_ptr<margelo::nitro::nitrocontacts::HybridNitroContactsSpec>
  /**
   * Specialized version of `std::shared_ptr<margelo::nitro::nitrocontacts::HybridNitroContactsSpec>`.
   */
  using std__shared_ptr_margelo__nitro__nitrocontacts__HybridNitroContactsSpec_ = std::shared_ptr<margelo::nitro::nitrocontacts::HybridNitroContactsSpec>;
  std::shared_ptr<margelo::nitro::nitrocontacts::HybridNitroContactsSpec> create_std__shared_ptr_margelo__nitro__nitrocontacts__HybridNitroContactsSpec_(void* _Nonnull swiftUnsafePointer);
  void* _Nonnull get_std__shared_ptr_margelo__nitro__nitrocontacts__HybridNitroContactsSpec_(std__shared_ptr_margelo__nitro__nitrocontacts__HybridNitroContactsSpec_ cppType);
  
  // pragma MARK: std::weak_ptr<margelo::nitro::nitrocontacts::HybridNitroContactsSpec>
  using std__weak_ptr_margelo__nitro__nitrocontacts__HybridNitroContactsSpec_ = std::weak_ptr<margelo::nitro::nitrocontacts::HybridNitroContactsSpec>;
  inline std__weak_ptr_margelo__nitro__nitrocontacts__HybridNitroContactsSpec_ weakify_std__shared_ptr_margelo__nitro__nitrocontacts__HybridNitroContactsSpec_(const std::shared_ptr<margelo::nitro::nitrocontacts::HybridNitroContactsSpec>& strong) { return strong; }
  
  // pragma MARK: Result<std::shared_ptr<Promise<std::vector<NitroContact>>>>
  using Result_std__shared_ptr_Promise_std__vector_NitroContact____ = Result<std::shared_ptr<Promise<std::vector<NitroContact>>>>;
  inline Result_std__shared_ptr_Promise_std__vector_NitroContact____ create_Result_std__shared_ptr_Promise_std__vector_NitroContact____(const std::shared_ptr<Promise<std::vector<NitroContact>>>& value) {
    return Result<std::shared_ptr<Promise<std::vector<NitroContact>>>>::withValue(value);
  }
  inline Result_std__shared_ptr_Promise_std__vector_NitroContact____ create_Result_std__shared_ptr_Promise_std__vector_NitroContact____(const std::exception_ptr& error) {
    return Result<std::shared_ptr<Promise<std::vector<NitroContact>>>>::withError(error);
  }
  
  // pragma MARK: Result<std::shared_ptr<Promise<std::optional<NitroContact>>>>
  using Result_std__shared_ptr_Promise_std__optional_NitroContact____ = Result<std::shared_ptr<Promise<std::optional<NitroContact>>>>;
  inline Result_std__shared_ptr_Promise_std__optional_NitroContact____ create_Result_std__shared_ptr_Promise_std__optional_NitroContact____(const std::shared_ptr<Promise<std::optional<NitroContact>>>& value) {
    return Result<std::shared_ptr<Promise<std::optional<NitroContact>>>>::withValue(value);
  }
  inline Result_std__shared_ptr_Promise_std__optional_NitroContact____ create_Result_std__shared_ptr_Promise_std__optional_NitroContact____(const std::exception_ptr& error) {
    return Result<std::shared_ptr<Promise<std::optional<NitroContact>>>>::withError(error);
  }
  
  // pragma MARK: Result<std::shared_ptr<Promise<bool>>>
  using Result_std__shared_ptr_Promise_bool___ = Result<std::shared_ptr<Promise<bool>>>;
  inline Result_std__shared_ptr_Promise_bool___ create_Result_std__shared_ptr_Promise_bool___(const std::shared_ptr<Promise<bool>>& value) {
    return Result<std::shared_ptr<Promise<bool>>>::withValue(value);
  }
  inline Result_std__shared_ptr_Promise_bool___ create_Result_std__shared_ptr_Promise_bool___(const std::exception_ptr& error) {
    return Result<std::shared_ptr<Promise<bool>>>::withError(error);
  }
  
  // pragma MARK: Result<std::shared_ptr<Promise<NitroAuthorizationStatus>>>
  using Result_std__shared_ptr_Promise_NitroAuthorizationStatus___ = Result<std::shared_ptr<Promise<NitroAuthorizationStatus>>>;
  inline Result_std__shared_ptr_Promise_NitroAuthorizationStatus___ create_Result_std__shared_ptr_Promise_NitroAuthorizationStatus___(const std::shared_ptr<Promise<NitroAuthorizationStatus>>& value) {
    return Result<std::shared_ptr<Promise<NitroAuthorizationStatus>>>::withValue(value);
  }
  inline Result_std__shared_ptr_Promise_NitroAuthorizationStatus___ create_Result_std__shared_ptr_Promise_NitroAuthorizationStatus___(const std::exception_ptr& error) {
    return Result<std::shared_ptr<Promise<NitroAuthorizationStatus>>>::withError(error);
  }

} // namespace margelo::nitro::nitrocontacts::bridge::swift
