#pragma once

#ifndef __FRC_ROBORIO__

#include "MockData/AnalogInData.h"
#include <memory>
#include "CallbackStore.h"

namespace frc {
namespace sim {
class AnalogInSim {
 public:
  AnalogInSim(int index) {
    m_index = index;
  }

  std::unique_ptr<CallbackStore> RegisterInitializedCallback(NotifyCallback callback, bool initialNotify) {
    auto store = std::make_unique<CallbackStore>(m_index, -1, callback, &HALSIM_CancelAnalogInInitializedCallback);
    store->setUid(HALSIM_RegisterAnalogInInitializedCallback(m_index, &CallbackStoreThunk, store.get(), initialNotify));
    return std::move(store);
  }
  bool GetInitialized() {
    return HALSIM_GetAnalogInInitialized(m_index);
  }
  void SetInitialized(bool initialized) {
    HALSIM_SetAnalogInInitialized(m_index, initialized);
  }

  std::unique_ptr<CallbackStore> RegisterAverageBitsCallback(NotifyCallback callback, bool initialNotify) {
    auto store = std::make_unique<CallbackStore>(m_index, -1, callback, &HALSIM_CancelAnalogInAverageBitsCallback);
    store->setUid(HALSIM_RegisterAnalogInAverageBitsCallback(m_index, &CallbackStoreThunk, store.get(), initialNotify));
    return std::move(store);
  }
  int GetAverageBits() {
    return HALSIM_GetAnalogInAverageBits(m_index);
  }
  void SetAverageBits(int averageBits) {
    HALSIM_SetAnalogInAverageBits(m_index, averageBits);
  }

  std::unique_ptr<CallbackStore> RegisterOversampleBitsCallback(NotifyCallback callback, bool initialNotify) {
    auto store = std::make_unique<CallbackStore>(m_index, -1, callback, &HALSIM_CancelAnalogInOversampleBitsCallback);
    store->setUid(HALSIM_RegisterAnalogInOversampleBitsCallback(m_index, &CallbackStoreThunk, store.get(), initialNotify));
    return std::move(store);
  }
  int GetOversampleBits() {
    return HALSIM_GetAnalogInOversampleBits(m_index);
  }
  void SetOversampleBits(int oversampleBits) {
    HALSIM_SetAnalogInOversampleBits(m_index, oversampleBits);
  }

  std::unique_ptr<CallbackStore> RegisterVoltageCallback(NotifyCallback callback, bool initialNotify) {
    auto store = std::make_unique<CallbackStore>(m_index, -1, callback, &HALSIM_CancelAnalogInVoltageCallback);
    store->setUid(HALSIM_RegisterAnalogInVoltageCallback(m_index, &CallbackStoreThunk, store.get(), initialNotify));
    return std::move(store);
  }
  double GetVoltage() {
    return HALSIM_GetAnalogInVoltage(m_index);
  }
  void SetVoltage(double voltage) {
    HALSIM_SetAnalogInVoltage(m_index, voltage);
  }

  std::unique_ptr<CallbackStore> RegisterAccumulatorInitializedCallback(NotifyCallback callback, bool initialNotify) {
    auto store = std::make_unique<CallbackStore>(m_index, -1, callback, &HALSIM_CancelAnalogInAccumulatorInitializedCallback);
    store->setUid(HALSIM_RegisterAnalogInAccumulatorInitializedCallback(m_index, &CallbackStoreThunk, store.get(), initialNotify));
    return std::move(store);
  }
  bool GetAccumulatorInitialized() {
    return HALSIM_GetAnalogInAccumulatorInitialized(m_index);
  }
  void SetAccumulatorInitialized(bool accumulatorInitialized) {
    HALSIM_SetAnalogInAccumulatorInitialized(m_index, accumulatorInitialized);
  }

  std::unique_ptr<CallbackStore> RegisterAccumulatorValueCallback(NotifyCallback callback, bool initialNotify) {
    auto store = std::make_unique<CallbackStore>(m_index, -1, callback, &HALSIM_CancelAnalogInAccumulatorValueCallback);
    store->setUid(HALSIM_RegisterAnalogInAccumulatorValueCallback(m_index, &CallbackStoreThunk, store.get(), initialNotify));
    return std::move(store);
  }
  int64_t GetAccumulatorValue() {
    return HALSIM_GetAnalogInAccumulatorValue(m_index);
  }
  void SetAccumulatorValue(int64_t accumulatorValue) {
    HALSIM_SetAnalogInAccumulatorValue(m_index, accumulatorValue);
  }

  std::unique_ptr<CallbackStore> RegisterAccumulatorCountCallback(NotifyCallback callback, bool initialNotify) {
    auto store = std::make_unique<CallbackStore>(m_index, -1, callback, &HALSIM_CancelAnalogInAccumulatorCountCallback);
    store->setUid(HALSIM_RegisterAnalogInAccumulatorCountCallback(m_index, &CallbackStoreThunk, store.get(), initialNotify));
    return std::move(store);
  }
  int64_t GetAccumulatorCount() {
    return HALSIM_GetAnalogInAccumulatorCount(m_index);
  }
  void SetAccumulatorCount(int64_t accumulatorCount) {
    HALSIM_SetAnalogInAccumulatorCount(m_index, accumulatorCount);
  }

  std::unique_ptr<CallbackStore> RegisterAccumulatorCenterCallback(NotifyCallback callback, bool initialNotify) {
    auto store = std::make_unique<CallbackStore>(m_index, -1, callback, &HALSIM_CancelAnalogInAccumulatorCenterCallback);
    store->setUid(HALSIM_RegisterAnalogInAccumulatorCenterCallback(m_index, &CallbackStoreThunk, store.get(), initialNotify));
    return std::move(store);
  }
  int GetAccumulatorCenter() {
    return HALSIM_GetAnalogInAccumulatorCenter(m_index);
  }
  void SetAccumulatorCenter(int accumulatorCenter) {
    HALSIM_SetAnalogInAccumulatorCenter(m_index, accumulatorCenter);
  }

  std::unique_ptr<CallbackStore> RegisterAccumulatorDeadbandCallback(NotifyCallback callback, bool initialNotify) {
    auto store = std::make_unique<CallbackStore>(m_index, -1, callback, &HALSIM_CancelAnalogInAccumulatorDeadbandCallback);
    store->setUid(HALSIM_RegisterAnalogInAccumulatorDeadbandCallback(m_index, &CallbackStoreThunk, store.get(), initialNotify));
    return std::move(store);
  }
  int GetAccumulatorDeadband() {
    return HALSIM_GetAnalogInAccumulatorDeadband(m_index);
  }
  void SetAccumulatorDeadband(int accumulatorDeadband) {
    HALSIM_SetAnalogInAccumulatorDeadband(m_index, accumulatorDeadband);
  }

  void ResetData() {
    HALSIM_ResetAnalogInData(m_index);
  }
 private:
  int m_index;
};
} // namespace sim
} // namespace frc
#endif // __FRC_ROBORIO__
