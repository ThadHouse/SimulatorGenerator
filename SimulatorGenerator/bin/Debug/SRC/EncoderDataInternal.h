#pragma once

#include <atomic>
#include <memory>

#include "MockData/EncoderData.h"
#include "MockData/NotifyDataBase.h"

namespace hal {
class EncoderData {
 public:
  int32_t RegisterInitializedCallback(HAL_NotifyCallback callback, void* param, HAL_Bool initialNotify);
  void CancelInitializedCallback(int32_t uid);
  void InvokeInitializedCallback(const HAL_Value* value);
  HAL_Bool GetInitialized();
  void SetInitialized(HAL_Bool initialized);

  int32_t RegisterCountCallback(HAL_NotifyCallback callback, void* param, HAL_Bool initialNotify);
  void CancelCountCallback(int32_t uid);
  void InvokeCountCallback(const HAL_Value* value);
  int32_t GetCount();
  void SetCount(int32_t count);

  int32_t RegisterPeriodCallback(HAL_NotifyCallback callback, void* param, HAL_Bool initialNotify);
  void CancelPeriodCallback(int32_t uid);
  void InvokePeriodCallback(const HAL_Value* value);
  double GetPeriod();
  void SetPeriod(double period);

  int32_t RegisterResetCallback(HAL_NotifyCallback callback, void* param, HAL_Bool initialNotify);
  void CancelResetCallback(int32_t uid);
  void InvokeResetCallback(const HAL_Value* value);
  HAL_Bool GetReset();
  void SetReset(HAL_Bool reset);

  int32_t RegisterMaxPeriodCallback(HAL_NotifyCallback callback, void* param, HAL_Bool initialNotify);
  void CancelMaxPeriodCallback(int32_t uid);
  void InvokeMaxPeriodCallback(const HAL_Value* value);
  double GetMaxPeriod();
  void SetMaxPeriod(double maxPeriod);

  int32_t RegisterDirectionCallback(HAL_NotifyCallback callback, void* param, HAL_Bool initialNotify);
  void CancelDirectionCallback(int32_t uid);
  void InvokeDirectionCallback(const HAL_Value* value);
  HAL_Bool GetDirection();
  void SetDirection(HAL_Bool direction);

  int32_t RegisterReverseDirectionCallback(HAL_NotifyCallback callback, void* param, HAL_Bool initialNotify);
  void CancelReverseDirectionCallback(int32_t uid);
  void InvokeReverseDirectionCallback(const HAL_Value* value);
  HAL_Bool GetReverseDirection();
  void SetReverseDirection(HAL_Bool reverseDirection);

  int32_t RegisterSamplesToAverageCallback(HAL_NotifyCallback callback, void* param, HAL_Bool initialNotify);
  void CancelSamplesToAverageCallback(int32_t uid);
  void InvokeSamplesToAverageCallback(const HAL_Value* value);
  int32_t GetSamplesToAverage();
  void SetSamplesToAverage(int32_t samplesToAverage);

  virtual void ResetData();
 private:
  std::atomic<HAL_Bool> m_initialized = false;
  std::shared_ptr<UidVector<NotifyListener>> m_initializedCallbacks = nullptr;
  std::atomic<int32_t> m_count = 0;
  std::shared_ptr<UidVector<NotifyListener>> m_countCallbacks = nullptr;
  std::atomic<double> m_period = std::numeric_limits<double>::max();
  std::shared_ptr<UidVector<NotifyListener>> m_periodCallbacks = nullptr;
  std::atomic<HAL_Bool> m_reset = false;
  std::shared_ptr<UidVector<NotifyListener>> m_resetCallbacks = nullptr;
  std::atomic<double> m_maxPeriod = 0;
  std::shared_ptr<UidVector<NotifyListener>> m_maxPeriodCallbacks = nullptr;
  std::atomic<HAL_Bool> m_direction = false;
  std::shared_ptr<UidVector<NotifyListener>> m_directionCallbacks = nullptr;
  std::atomic<HAL_Bool> m_reverseDirection = false;
  std::shared_ptr<UidVector<NotifyListener>> m_reverseDirectionCallbacks = nullptr;
  std::atomic<int32_t> m_samplesToAverage = 0;
  std::shared_ptr<UidVector<NotifyListener>> m_samplesToAverageCallbacks = nullptr;
};
extern std::unique_ptr<std::shared_ptr<EncoderData>[]> SimEncoderData;
}
