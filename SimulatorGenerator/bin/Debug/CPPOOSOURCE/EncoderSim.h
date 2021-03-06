#pragma once

#ifndef __FRC_ROBORIO__

#include "MockData/EncoderData.h"
#include <memory>
#include "CallbackStore.h"

namespace frc {
namespace sim {
class EncoderSim {
 public:
  EncoderSim(int index) {
    m_index = index;
  }

  std::unique_ptr<CallbackStore> RegisterInitializedCallback(NotifyCallback callback, bool initialNotify) {
    auto store = std::make_unique<CallbackStore>(m_index, -1, callback, &HALSIM_CancelEncoderInitializedCallback);
    store->setUid(HALSIM_RegisterEncoderInitializedCallback(m_index, &CallbackStoreThunk, store.get(), initialNotify));
    return std::move(store);
  }
  bool GetInitialized() {
    return HALSIM_GetEncoderInitialized(m_index);
  }
  void SetInitialized(bool initialized) {
    HALSIM_SetEncoderInitialized(m_index, initialized);
  }

  std::unique_ptr<CallbackStore> RegisterCountCallback(NotifyCallback callback, bool initialNotify) {
    auto store = std::make_unique<CallbackStore>(m_index, -1, callback, &HALSIM_CancelEncoderCountCallback);
    store->setUid(HALSIM_RegisterEncoderCountCallback(m_index, &CallbackStoreThunk, store.get(), initialNotify));
    return std::move(store);
  }
  int GetCount() {
    return HALSIM_GetEncoderCount(m_index);
  }
  void SetCount(int count) {
    HALSIM_SetEncoderCount(m_index, count);
  }

  std::unique_ptr<CallbackStore> RegisterPeriodCallback(NotifyCallback callback, bool initialNotify) {
    auto store = std::make_unique<CallbackStore>(m_index, -1, callback, &HALSIM_CancelEncoderPeriodCallback);
    store->setUid(HALSIM_RegisterEncoderPeriodCallback(m_index, &CallbackStoreThunk, store.get(), initialNotify));
    return std::move(store);
  }
  double GetPeriod() {
    return HALSIM_GetEncoderPeriod(m_index);
  }
  void SetPeriod(double period) {
    HALSIM_SetEncoderPeriod(m_index, period);
  }

  std::unique_ptr<CallbackStore> RegisterResetCallback(NotifyCallback callback, bool initialNotify) {
    auto store = std::make_unique<CallbackStore>(m_index, -1, callback, &HALSIM_CancelEncoderResetCallback);
    store->setUid(HALSIM_RegisterEncoderResetCallback(m_index, &CallbackStoreThunk, store.get(), initialNotify));
    return std::move(store);
  }
  bool GetReset() {
    return HALSIM_GetEncoderReset(m_index);
  }
  void SetReset(bool reset) {
    HALSIM_SetEncoderReset(m_index, reset);
  }

  std::unique_ptr<CallbackStore> RegisterMaxPeriodCallback(NotifyCallback callback, bool initialNotify) {
    auto store = std::make_unique<CallbackStore>(m_index, -1, callback, &HALSIM_CancelEncoderMaxPeriodCallback);
    store->setUid(HALSIM_RegisterEncoderMaxPeriodCallback(m_index, &CallbackStoreThunk, store.get(), initialNotify));
    return std::move(store);
  }
  double GetMaxPeriod() {
    return HALSIM_GetEncoderMaxPeriod(m_index);
  }
  void SetMaxPeriod(double maxPeriod) {
    HALSIM_SetEncoderMaxPeriod(m_index, maxPeriod);
  }

  std::unique_ptr<CallbackStore> RegisterDirectionCallback(NotifyCallback callback, bool initialNotify) {
    auto store = std::make_unique<CallbackStore>(m_index, -1, callback, &HALSIM_CancelEncoderDirectionCallback);
    store->setUid(HALSIM_RegisterEncoderDirectionCallback(m_index, &CallbackStoreThunk, store.get(), initialNotify));
    return std::move(store);
  }
  bool GetDirection() {
    return HALSIM_GetEncoderDirection(m_index);
  }
  void SetDirection(bool direction) {
    HALSIM_SetEncoderDirection(m_index, direction);
  }

  std::unique_ptr<CallbackStore> RegisterReverseDirectionCallback(NotifyCallback callback, bool initialNotify) {
    auto store = std::make_unique<CallbackStore>(m_index, -1, callback, &HALSIM_CancelEncoderReverseDirectionCallback);
    store->setUid(HALSIM_RegisterEncoderReverseDirectionCallback(m_index, &CallbackStoreThunk, store.get(), initialNotify));
    return std::move(store);
  }
  bool GetReverseDirection() {
    return HALSIM_GetEncoderReverseDirection(m_index);
  }
  void SetReverseDirection(bool reverseDirection) {
    HALSIM_SetEncoderReverseDirection(m_index, reverseDirection);
  }

  std::unique_ptr<CallbackStore> RegisterSamplesToAverageCallback(NotifyCallback callback, bool initialNotify) {
    auto store = std::make_unique<CallbackStore>(m_index, -1, callback, &HALSIM_CancelEncoderSamplesToAverageCallback);
    store->setUid(HALSIM_RegisterEncoderSamplesToAverageCallback(m_index, &CallbackStoreThunk, store.get(), initialNotify));
    return std::move(store);
  }
  int GetSamplesToAverage() {
    return HALSIM_GetEncoderSamplesToAverage(m_index);
  }
  void SetSamplesToAverage(int samplesToAverage) {
    HALSIM_SetEncoderSamplesToAverage(m_index, samplesToAverage);
  }

  void ResetData() {
    HALSIM_ResetEncoderData(m_index);
  }
 private:
  int m_index;
};
} // namespace sim
} // namespace frc
#endif // __FRC_ROBORIO__
