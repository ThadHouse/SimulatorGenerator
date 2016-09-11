#pragma once

#include <atomic>
#include <memory>

#include "MockData/AnalogGyroData.h"
#include "MockData/NotifyDataBase.h"

namespace hal {
class AnalogGyroData {
 public:
  int32_t RegisterAngleCallback(HAL_NotifyCallback callback, void* param, HAL_Bool initialNotify);
  void CancelAngleCallback(int32_t uid);
  void InvokeAngleCallback(const HAL_Value* value);
  double GetAngle();
  void SetAngle(double angle);

  int32_t RegisterRateCallback(HAL_NotifyCallback callback, void* param, HAL_Bool initialNotify);
  void CancelRateCallback(int32_t uid);
  void InvokeRateCallback(const HAL_Value* value);
  double GetRate();
  void SetRate(double rate);

  int32_t RegisterInitializedCallback(HAL_NotifyCallback callback, void* param, HAL_Bool initialNotify);
  void CancelInitializedCallback(int32_t uid);
  void InvokeInitializedCallback(const HAL_Value* value);
  HAL_Bool GetInitialized();
  void SetInitialized(HAL_Bool initialized);

  virtual void ResetData();
 private:
  std::atomic<double> m_angle = 0.0;
  std::shared_ptr<UidVector<NotifyListener>> m_angleCallbacks = nullptr;
  std::atomic<double> m_rate = 0.0;
  std::shared_ptr<UidVector<NotifyListener>> m_rateCallbacks = nullptr;
  std::atomic<HAL_Bool> m_initialized = false;
  std::shared_ptr<UidVector<NotifyListener>> m_initializedCallbacks = nullptr;
};
extern std::unique_ptr<std::shared_ptr<AnalogGyroData>[]> SimAnalogGyroData;
}
