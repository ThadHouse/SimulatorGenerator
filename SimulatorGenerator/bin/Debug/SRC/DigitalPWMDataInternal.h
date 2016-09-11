#pragma once

#include <atomic>
#include <memory>

#include "MockData/DigitalPWMData.h"
#include "MockData/DataBase.h"

namespace hal {
class DigitalPWMData {
 public:
  int32_t RegisterInitializedCallback(HAL_NotifyCallback callback, void* param, HAL_Bool initialNotify);
  void CancelInitializedCallback(int32_t uid);
  void InvokeInitializedCallback(const HAL_Value* value);
  HAL_Bool GetInitialized();
  void SetInitialized(HAL_Bool initialized);

  int32_t RegisterDutyCycleCallback(HAL_NotifyCallback callback, void* param, HAL_Bool initialNotify);
  void CancelDutyCycleCallback(int32_t uid);
  void InvokeDutyCycleCallback(const HAL_Value* value);
  double GetDutyCycle();
  void SetDutyCycle(double dutyCycle);

  int32_t RegisterPinCallback(HAL_NotifyCallback callback, void* param, HAL_Bool initialNotify);
  void CancelPinCallback(int32_t uid);
  void InvokePinCallback(const HAL_Value* value);
  int32_t GetPin();
  void SetPin(int32_t pin);

  virtual void ResetData();
 private:
  std::atomic<HAL_Bool> m_initialized = false;
  std::shared_ptr<UidVector<NotifyListener>> m_initializedCallbacks = nullptr;
  std::atomic<double> m_dutyCycle = false;
  std::shared_ptr<UidVector<NotifyListener>> m_dutyCycleCallbacks = nullptr;
  std::atomic<int32_t> m_pin = 0;
  std::shared_ptr<UidVector<NotifyListener>> m_pinCallbacks = nullptr;
};
extern std::unique_ptr<std::shared_ptr<DigitalPWMData>[]> SimDigitalPWMData;
}