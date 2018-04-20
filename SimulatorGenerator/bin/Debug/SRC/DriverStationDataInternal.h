#pragma once

#include <atomic>
#include <memory>

#include "MockData/DriverStationData.h"
#include "MockData/NotifyListenerVector.h"

namespace hal {
class DriverStationData {
 public:
  int32_t RegisterEnabledCallback(HAL_NotifyCallback callback, void* param, HAL_Bool initialNotify);
  void CancelEnabledCallback(int32_t uid);
  void InvokeEnabledCallback(HAL_Value value);
  HAL_Bool GetEnabled();
  void SetEnabled(HAL_Bool enabled);

  int32_t RegisterAutonomousCallback(HAL_NotifyCallback callback, void* param, HAL_Bool initialNotify);
  void CancelAutonomousCallback(int32_t uid);
  void InvokeAutonomousCallback(HAL_Value value);
  HAL_Bool GetAutonomous();
  void SetAutonomous(HAL_Bool autonomous);

  int32_t RegisterTestCallback(HAL_NotifyCallback callback, void* param, HAL_Bool initialNotify);
  void CancelTestCallback(int32_t uid);
  void InvokeTestCallback(HAL_Value value);
  HAL_Bool GetTest();
  void SetTest(HAL_Bool test);

  int32_t RegisterEStopCallback(HAL_NotifyCallback callback, void* param, HAL_Bool initialNotify);
  void CancelEStopCallback(int32_t uid);
  void InvokeEStopCallback(HAL_Value value);
  HAL_Bool GetEStop();
  void SetEStop(HAL_Bool eStop);

  int32_t RegisterFmsAttachedCallback(HAL_NotifyCallback callback, void* param, HAL_Bool initialNotify);
  void CancelFmsAttachedCallback(int32_t uid);
  void InvokeFmsAttachedCallback(HAL_Value value);
  HAL_Bool GetFmsAttached();
  void SetFmsAttached(HAL_Bool fmsAttached);

  int32_t RegisterDsAttachedCallback(HAL_NotifyCallback callback, void* param, HAL_Bool initialNotify);
  void CancelDsAttachedCallback(int32_t uid);
  void InvokeDsAttachedCallback(HAL_Value value);
  HAL_Bool GetDsAttached();
  void SetDsAttached(HAL_Bool dsAttached);

  virtual void ResetData();
 private:
  std::mutex m_registerMutex;
  std::atomic<HAL_Bool> m_enabled {false};
  std::shared_ptr<NotifyListenerVector> m_enabledCallbacks = nullptr;
  std::atomic<HAL_Bool> m_autonomous {false};
  std::shared_ptr<NotifyListenerVector> m_autonomousCallbacks = nullptr;
  std::atomic<HAL_Bool> m_test {false};
  std::shared_ptr<NotifyListenerVector> m_testCallbacks = nullptr;
  std::atomic<HAL_Bool> m_eStop {false};
  std::shared_ptr<NotifyListenerVector> m_eStopCallbacks = nullptr;
  std::atomic<HAL_Bool> m_fmsAttached {false};
  std::shared_ptr<NotifyListenerVector> m_fmsAttachedCallbacks = nullptr;
  std::atomic<HAL_Bool> m_dsAttached {false};
  std::shared_ptr<NotifyListenerVector> m_dsAttachedCallbacks = nullptr;
};
extern DriverStationData SimDriverStationData[];
}
