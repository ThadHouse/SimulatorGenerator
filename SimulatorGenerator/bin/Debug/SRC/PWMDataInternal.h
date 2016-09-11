#pragma once

#include <atomic>
#include <memory>

#include "MockData/PWMData.h"
#include "MockData/NotifyListenerVector.h"

namespace hal {
class PWMData {
 public:
  int32_t RegisterInitializedCallback(HAL_NotifyCallback callback, void* param, HAL_Bool initialNotify);
  void CancelInitializedCallback(int32_t uid);
  void InvokeInitializedCallback(HAL_Value value);
  bool GetInitialized();
  void SetInitialized(bool initialized);

  int32_t RegisterRawValueCallback(HAL_NotifyCallback callback, void* param, HAL_Bool initialNotify);
  void CancelRawValueCallback(int32_t uid);
  void InvokeRawValueCallback(HAL_Value value);
  int GetRawValue();
  void SetRawValue(int rawValue);

  int32_t RegisterSpeedCallback(HAL_NotifyCallback callback, void* param, HAL_Bool initialNotify);
  void CancelSpeedCallback(int32_t uid);
  void InvokeSpeedCallback(HAL_Value value);
  double GetSpeed();
  void SetSpeed(double speed);

  int32_t RegisterPositionCallback(HAL_NotifyCallback callback, void* param, HAL_Bool initialNotify);
  void CancelPositionCallback(int32_t uid);
  void InvokePositionCallback(HAL_Value value);
  double GetPosition();
  void SetPosition(double position);

  int32_t RegisterPeriodScaleCallback(HAL_NotifyCallback callback, void* param, HAL_Bool initialNotify);
  void CancelPeriodScaleCallback(int32_t uid);
  void InvokePeriodScaleCallback(HAL_Value value);
  int GetPeriodScale();
  void SetPeriodScale(int periodScale);

  int32_t RegisterZeroLatchCallback(HAL_NotifyCallback callback, void* param, HAL_Bool initialNotify);
  void CancelZeroLatchCallback(int32_t uid);
  void InvokeZeroLatchCallback(HAL_Value value);
  bool GetZeroLatch();
  void SetZeroLatch(bool zeroLatch);

  virtual void ResetData();
 private:
  std::mutex m_registerMutex;
  std::atomic<bool> m_initialized = false;
  std::shared_ptr<NotifyListenerVector> m_initializedCallbacks = nullptr;
  std::atomic<int> m_rawValue = 0;
  std::shared_ptr<NotifyListenerVector> m_rawValueCallbacks = nullptr;
  std::atomic<double> m_speed = 0;
  std::shared_ptr<NotifyListenerVector> m_speedCallbacks = nullptr;
  std::atomic<double> m_position = 0;
  std::shared_ptr<NotifyListenerVector> m_positionCallbacks = nullptr;
  std::atomic<int> m_periodScale = 0;
  std::shared_ptr<NotifyListenerVector> m_periodScaleCallbacks = nullptr;
  std::atomic<bool> m_zeroLatch = false;
  std::shared_ptr<NotifyListenerVector> m_zeroLatchCallbacks = nullptr;
};
extern PWMData SimPWMData[];
}
