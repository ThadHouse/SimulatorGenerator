#pragma once

#ifndef __FRC_ROBORIO__

#include "MockData/PWMData.h"
#include <memory>
#include "CallbackStore.h"

namespace frc {
namespace sim {
class PWMSim {
 public:
  PWMSim(int index) {
    m_index = index;
  }

  std::unique_ptr<CallbackStore> RegisterInitializedCallback(NotifyCallback callback, bool initialNotify) {
    auto store = std::make_unique<CallbackStore>(m_index, -1, callback, &HALSIM_CancelPWMInitializedCallback);
    store->setUid(HALSIM_RegisterPWMInitializedCallback(m_index, &CallbackStoreThunk, store.get(), initialNotify));
    return std::move(store);
  }
  bool GetInitialized() {
    return HALSIM_GetPWMInitialized(m_index);
  }
  void SetInitialized(bool initialized) {
    HALSIM_SetPWMInitialized(m_index, initialized);
  }

  std::unique_ptr<CallbackStore> RegisterRawValueCallback(NotifyCallback callback, bool initialNotify) {
    auto store = std::make_unique<CallbackStore>(m_index, -1, callback, &HALSIM_CancelPWMRawValueCallback);
    store->setUid(HALSIM_RegisterPWMRawValueCallback(m_index, &CallbackStoreThunk, store.get(), initialNotify));
    return std::move(store);
  }
  int GetRawValue() {
    return HALSIM_GetPWMRawValue(m_index);
  }
  void SetRawValue(int rawValue) {
    HALSIM_SetPWMRawValue(m_index, rawValue);
  }

  std::unique_ptr<CallbackStore> RegisterSpeedCallback(NotifyCallback callback, bool initialNotify) {
    auto store = std::make_unique<CallbackStore>(m_index, -1, callback, &HALSIM_CancelPWMSpeedCallback);
    store->setUid(HALSIM_RegisterPWMSpeedCallback(m_index, &CallbackStoreThunk, store.get(), initialNotify));
    return std::move(store);
  }
  double GetSpeed() {
    return HALSIM_GetPWMSpeed(m_index);
  }
  void SetSpeed(double speed) {
    HALSIM_SetPWMSpeed(m_index, speed);
  }

  std::unique_ptr<CallbackStore> RegisterPositionCallback(NotifyCallback callback, bool initialNotify) {
    auto store = std::make_unique<CallbackStore>(m_index, -1, callback, &HALSIM_CancelPWMPositionCallback);
    store->setUid(HALSIM_RegisterPWMPositionCallback(m_index, &CallbackStoreThunk, store.get(), initialNotify));
    return std::move(store);
  }
  double GetPosition() {
    return HALSIM_GetPWMPosition(m_index);
  }
  void SetPosition(double position) {
    HALSIM_SetPWMPosition(m_index, position);
  }

  std::unique_ptr<CallbackStore> RegisterPeriodScaleCallback(NotifyCallback callback, bool initialNotify) {
    auto store = std::make_unique<CallbackStore>(m_index, -1, callback, &HALSIM_CancelPWMPeriodScaleCallback);
    store->setUid(HALSIM_RegisterPWMPeriodScaleCallback(m_index, &CallbackStoreThunk, store.get(), initialNotify));
    return std::move(store);
  }
  int GetPeriodScale() {
    return HALSIM_GetPWMPeriodScale(m_index);
  }
  void SetPeriodScale(int periodScale) {
    HALSIM_SetPWMPeriodScale(m_index, periodScale);
  }

  std::unique_ptr<CallbackStore> RegisterZeroLatchCallback(NotifyCallback callback, bool initialNotify) {
    auto store = std::make_unique<CallbackStore>(m_index, -1, callback, &HALSIM_CancelPWMZeroLatchCallback);
    store->setUid(HALSIM_RegisterPWMZeroLatchCallback(m_index, &CallbackStoreThunk, store.get(), initialNotify));
    return std::move(store);
  }
  bool GetZeroLatch() {
    return HALSIM_GetPWMZeroLatch(m_index);
  }
  void SetZeroLatch(bool zeroLatch) {
    HALSIM_SetPWMZeroLatch(m_index, zeroLatch);
  }

  void ResetData() {
    HALSIM_ResetPWMData(m_index);
  }
 private:
  int m_index;
};
} // namespace sim
} // namespace frc
#endif // __FRC_ROBORIO__
