#pragma once

#ifndef __FRC_ROBORIO__

#include "MockData/DriverStationData.h"
#include <memory>
#include "CallbackStore.h"

namespace frc {
namespace sim {
class DriverStationSim {
 public:
  DriverStationSim(int index) {
    m_index = index;
  }

  std::unique_ptr<CallbackStore> RegisterEnabledCallback(NotifyCallback callback, bool initialNotify) {
    auto store = std::make_unique<CallbackStore>(m_index, -1, callback, &HALSIM_CancelDriverStationEnabledCallback);
    store->setUid(HALSIM_RegisterDriverStationEnabledCallback(m_index, &CallbackStoreThunk, store.get(), initialNotify));
    return std::move(store);
  }
  bool GetEnabled() {
    return HALSIM_GetDriverStationEnabled(m_index);
  }
  void SetEnabled(bool enabled) {
    HALSIM_SetDriverStationEnabled(m_index, enabled);
  }

  std::unique_ptr<CallbackStore> RegisterAutonomousCallback(NotifyCallback callback, bool initialNotify) {
    auto store = std::make_unique<CallbackStore>(m_index, -1, callback, &HALSIM_CancelDriverStationAutonomousCallback);
    store->setUid(HALSIM_RegisterDriverStationAutonomousCallback(m_index, &CallbackStoreThunk, store.get(), initialNotify));
    return std::move(store);
  }
  bool GetAutonomous() {
    return HALSIM_GetDriverStationAutonomous(m_index);
  }
  void SetAutonomous(bool autonomous) {
    HALSIM_SetDriverStationAutonomous(m_index, autonomous);
  }

  std::unique_ptr<CallbackStore> RegisterTestCallback(NotifyCallback callback, bool initialNotify) {
    auto store = std::make_unique<CallbackStore>(m_index, -1, callback, &HALSIM_CancelDriverStationTestCallback);
    store->setUid(HALSIM_RegisterDriverStationTestCallback(m_index, &CallbackStoreThunk, store.get(), initialNotify));
    return std::move(store);
  }
  bool GetTest() {
    return HALSIM_GetDriverStationTest(m_index);
  }
  void SetTest(bool test) {
    HALSIM_SetDriverStationTest(m_index, test);
  }

  std::unique_ptr<CallbackStore> RegisterEStopCallback(NotifyCallback callback, bool initialNotify) {
    auto store = std::make_unique<CallbackStore>(m_index, -1, callback, &HALSIM_CancelDriverStationEStopCallback);
    store->setUid(HALSIM_RegisterDriverStationEStopCallback(m_index, &CallbackStoreThunk, store.get(), initialNotify));
    return std::move(store);
  }
  bool GetEStop() {
    return HALSIM_GetDriverStationEStop(m_index);
  }
  void SetEStop(bool eStop) {
    HALSIM_SetDriverStationEStop(m_index, eStop);
  }

  std::unique_ptr<CallbackStore> RegisterFmsAttachedCallback(NotifyCallback callback, bool initialNotify) {
    auto store = std::make_unique<CallbackStore>(m_index, -1, callback, &HALSIM_CancelDriverStationFmsAttachedCallback);
    store->setUid(HALSIM_RegisterDriverStationFmsAttachedCallback(m_index, &CallbackStoreThunk, store.get(), initialNotify));
    return std::move(store);
  }
  bool GetFmsAttached() {
    return HALSIM_GetDriverStationFmsAttached(m_index);
  }
  void SetFmsAttached(bool fmsAttached) {
    HALSIM_SetDriverStationFmsAttached(m_index, fmsAttached);
  }

  std::unique_ptr<CallbackStore> RegisterDsAttachedCallback(NotifyCallback callback, bool initialNotify) {
    auto store = std::make_unique<CallbackStore>(m_index, -1, callback, &HALSIM_CancelDriverStationDsAttachedCallback);
    store->setUid(HALSIM_RegisterDriverStationDsAttachedCallback(m_index, &CallbackStoreThunk, store.get(), initialNotify));
    return std::move(store);
  }
  bool GetDsAttached() {
    return HALSIM_GetDriverStationDsAttached(m_index);
  }
  void SetDsAttached(bool dsAttached) {
    HALSIM_SetDriverStationDsAttached(m_index, dsAttached);
  }

  void ResetData() {
    HALSIM_ResetDriverStationData(m_index);
  }
 private:
  int m_index;
};
} // namespace sim
} // namespace frc
#endif // __FRC_ROBORIO__
