#pragma once

#ifndef __FRC_ROBORIO__

#include "MockData/AnalogOutData.h"
#include <memory>
#include "CallbackStore.h"

namespace frc {
namespace sim {
class AnalogOutSim {
 public:
  AnalogOutSim(int index) {
    m_index = index;
  }

  std::unique_ptr<CallbackStore> RegisterVoltageCallback(NotifyCallback callback, bool initialNotify) {
    auto store = std::make_unique<CallbackStore>(m_index, -1, callback, &HALSIM_CancelAnalogOutVoltageCallback);
    store->setUid(HALSIM_RegisterAnalogOutVoltageCallback(m_index, &CallbackStoreThunk, store.get(), initialNotify));
    return std::move(store);
  }
  double GetVoltage() {
    return HALSIM_GetAnalogOutVoltage(m_index);
  }
  void SetVoltage(double voltage) {
    HALSIM_SetAnalogOutVoltage(m_index, voltage);
  }

  std::unique_ptr<CallbackStore> RegisterInitializedCallback(NotifyCallback callback, bool initialNotify) {
    auto store = std::make_unique<CallbackStore>(m_index, -1, callback, &HALSIM_CancelAnalogOutInitializedCallback);
    store->setUid(HALSIM_RegisterAnalogOutInitializedCallback(m_index, &CallbackStoreThunk, store.get(), initialNotify));
    return std::move(store);
  }
  bool GetInitialized() {
    return HALSIM_GetAnalogOutInitialized(m_index);
  }
  void SetInitialized(bool initialized) {
    HALSIM_SetAnalogOutInitialized(m_index, initialized);
  }

  void ResetData() {
    HALSIM_ResetAnalogOutData(m_index);
  }
 private:
  int m_index;
};
} // namespace sim
} // namespace frc
#endif // __FRC_ROBORIO__
