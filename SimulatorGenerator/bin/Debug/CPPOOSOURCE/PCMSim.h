#pragma once

#ifndef __FRC_ROBORIO__

#include "MockData/PCMData.h"
#include <memory>
#include "CallbackStore.h"

namespace frc {
namespace sim {
class PCMSim {
 public:
  PCMSim(int index) {
    m_index = index;
  }

  std::unique_ptr<CallbackStore> RegisterSolenoidInitializedCallback(NotifyCallback callback, bool initialNotify) {
    auto store = std::make_unique<CallbackStore>(m_index, -1, callback, &HALSIM_CancelPCMSolenoidInitializedCallback);
    store->setUid(HALSIM_RegisterPCMSolenoidInitializedCallback(m_index, &CallbackStoreThunk, store.get(), initialNotify));
    return std::move(store);
  }
  bool GetSolenoidInitialized() {
    return HALSIM_GetPCMSolenoidInitialized(m_index);
  }
  void SetSolenoidInitialized(bool solenoidInitialized) {
    HALSIM_SetPCMSolenoidInitialized(m_index, solenoidInitialized);
  }

  std::unique_ptr<CallbackStore> RegisterSolenoidOutputCallback(NotifyCallback callback, bool initialNotify) {
    auto store = std::make_unique<CallbackStore>(m_index, -1, callback, &HALSIM_CancelPCMSolenoidOutputCallback);
    store->setUid(HALSIM_RegisterPCMSolenoidOutputCallback(m_index, &CallbackStoreThunk, store.get(), initialNotify));
    return std::move(store);
  }
  bool GetSolenoidOutput() {
    return HALSIM_GetPCMSolenoidOutput(m_index);
  }
  void SetSolenoidOutput(bool solenoidOutput) {
    HALSIM_SetPCMSolenoidOutput(m_index, solenoidOutput);
  }

  std::unique_ptr<CallbackStore> RegisterCompressorInitializedCallback(NotifyCallback callback, bool initialNotify) {
    auto store = std::make_unique<CallbackStore>(m_index, -1, callback, &HALSIM_CancelPCMCompressorInitializedCallback);
    store->setUid(HALSIM_RegisterPCMCompressorInitializedCallback(m_index, &CallbackStoreThunk, store.get(), initialNotify));
    return std::move(store);
  }
  bool GetCompressorInitialized() {
    return HALSIM_GetPCMCompressorInitialized(m_index);
  }
  void SetCompressorInitialized(bool compressorInitialized) {
    HALSIM_SetPCMCompressorInitialized(m_index, compressorInitialized);
  }

  std::unique_ptr<CallbackStore> RegisterCompressorOnCallback(NotifyCallback callback, bool initialNotify) {
    auto store = std::make_unique<CallbackStore>(m_index, -1, callback, &HALSIM_CancelPCMCompressorOnCallback);
    store->setUid(HALSIM_RegisterPCMCompressorOnCallback(m_index, &CallbackStoreThunk, store.get(), initialNotify));
    return std::move(store);
  }
  bool GetCompressorOn() {
    return HALSIM_GetPCMCompressorOn(m_index);
  }
  void SetCompressorOn(bool compressorOn) {
    HALSIM_SetPCMCompressorOn(m_index, compressorOn);
  }

  std::unique_ptr<CallbackStore> RegisterClosedLoopEnabledCallback(NotifyCallback callback, bool initialNotify) {
    auto store = std::make_unique<CallbackStore>(m_index, -1, callback, &HALSIM_CancelPCMClosedLoopEnabledCallback);
    store->setUid(HALSIM_RegisterPCMClosedLoopEnabledCallback(m_index, &CallbackStoreThunk, store.get(), initialNotify));
    return std::move(store);
  }
  bool GetClosedLoopEnabled() {
    return HALSIM_GetPCMClosedLoopEnabled(m_index);
  }
  void SetClosedLoopEnabled(bool closedLoopEnabled) {
    HALSIM_SetPCMClosedLoopEnabled(m_index, closedLoopEnabled);
  }

  std::unique_ptr<CallbackStore> RegisterPressureSwitchCallback(NotifyCallback callback, bool initialNotify) {
    auto store = std::make_unique<CallbackStore>(m_index, -1, callback, &HALSIM_CancelPCMPressureSwitchCallback);
    store->setUid(HALSIM_RegisterPCMPressureSwitchCallback(m_index, &CallbackStoreThunk, store.get(), initialNotify));
    return std::move(store);
  }
  bool GetPressureSwitch() {
    return HALSIM_GetPCMPressureSwitch(m_index);
  }
  void SetPressureSwitch(bool pressureSwitch) {
    HALSIM_SetPCMPressureSwitch(m_index, pressureSwitch);
  }

  std::unique_ptr<CallbackStore> RegisterCompressorCurrentCallback(NotifyCallback callback, bool initialNotify) {
    auto store = std::make_unique<CallbackStore>(m_index, -1, callback, &HALSIM_CancelPCMCompressorCurrentCallback);
    store->setUid(HALSIM_RegisterPCMCompressorCurrentCallback(m_index, &CallbackStoreThunk, store.get(), initialNotify));
    return std::move(store);
  }
  double GetCompressorCurrent() {
    return HALSIM_GetPCMCompressorCurrent(m_index);
  }
  void SetCompressorCurrent(double compressorCurrent) {
    HALSIM_SetPCMCompressorCurrent(m_index, compressorCurrent);
  }

  void ResetData() {
    HALSIM_ResetPCMData(m_index);
  }
 private:
  int m_index;
};
} // namespace sim
} // namespace frc
#endif // __FRC_ROBORIO__
