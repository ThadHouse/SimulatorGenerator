#pragma once

#include <atomic>
#include <memory>

#include "MockData/PCMData.h"
#include "MockData/NotifyListenerVector.h"

namespace hal {
class PCMData {
 public:
  int32_t RegisterSolenoidInitializedCallback(HAL_NotifyCallback callback, void* param, HAL_Bool initialNotify);
  void CancelSolenoidInitializedCallback(int32_t uid);
  void InvokeSolenoidInitializedCallback(HAL_Value value);
  HAL_Bool GetSolenoidInitialized();
  void SetSolenoidInitialized(HAL_Bool solenoidInitialized);

  int32_t RegisterSolenoidOutputCallback(HAL_NotifyCallback callback, void* param, HAL_Bool initialNotify);
  void CancelSolenoidOutputCallback(int32_t uid);
  void InvokeSolenoidOutputCallback(HAL_Value value);
  HAL_Bool GetSolenoidOutput();
  void SetSolenoidOutput(HAL_Bool solenoidOutput);

  int32_t RegisterCompressorInitializedCallback(HAL_NotifyCallback callback, void* param, HAL_Bool initialNotify);
  void CancelCompressorInitializedCallback(int32_t uid);
  void InvokeCompressorInitializedCallback(HAL_Value value);
  HAL_Bool GetCompressorInitialized();
  void SetCompressorInitialized(HAL_Bool compressorInitialized);

  int32_t RegisterCompressorOnCallback(HAL_NotifyCallback callback, void* param, HAL_Bool initialNotify);
  void CancelCompressorOnCallback(int32_t uid);
  void InvokeCompressorOnCallback(HAL_Value value);
  HAL_Bool GetCompressorOn();
  void SetCompressorOn(HAL_Bool compressorOn);

  int32_t RegisterClosedLoopEnabledCallback(HAL_NotifyCallback callback, void* param, HAL_Bool initialNotify);
  void CancelClosedLoopEnabledCallback(int32_t uid);
  void InvokeClosedLoopEnabledCallback(HAL_Value value);
  HAL_Bool GetClosedLoopEnabled();
  void SetClosedLoopEnabled(HAL_Bool closedLoopEnabled);

  int32_t RegisterPressureSwitchCallback(HAL_NotifyCallback callback, void* param, HAL_Bool initialNotify);
  void CancelPressureSwitchCallback(int32_t uid);
  void InvokePressureSwitchCallback(HAL_Value value);
  HAL_Bool GetPressureSwitch();
  void SetPressureSwitch(HAL_Bool pressureSwitch);

  int32_t RegisterCompressorCurrentCallback(HAL_NotifyCallback callback, void* param, HAL_Bool initialNotify);
  void CancelCompressorCurrentCallback(int32_t uid);
  void InvokeCompressorCurrentCallback(HAL_Value value);
  double GetCompressorCurrent();
  void SetCompressorCurrent(double compressorCurrent);

  virtual void ResetData();
 private:
  std::mutex m_registerMutex;
  std::atomic<HAL_Bool> m_solenoidInitialized {false};
  std::shared_ptr<NotifyListenerVector> m_solenoidInitializedCallbacks = nullptr;
  std::atomic<HAL_Bool> m_solenoidOutput {false};
  std::shared_ptr<NotifyListenerVector> m_solenoidOutputCallbacks = nullptr;
  std::atomic<HAL_Bool> m_compressorInitialized {false};
  std::shared_ptr<NotifyListenerVector> m_compressorInitializedCallbacks = nullptr;
  std::atomic<HAL_Bool> m_compressorOn {false};
  std::shared_ptr<NotifyListenerVector> m_compressorOnCallbacks = nullptr;
  std::atomic<HAL_Bool> m_closedLoopEnabled {false};
  std::shared_ptr<NotifyListenerVector> m_closedLoopEnabledCallbacks = nullptr;
  std::atomic<HAL_Bool> m_pressureSwitch {false};
  std::shared_ptr<NotifyListenerVector> m_pressureSwitchCallbacks = nullptr;
  std::atomic<double> m_compressorCurrent {0.0};
  std::shared_ptr<NotifyListenerVector> m_compressorCurrentCallbacks = nullptr;
};
extern PCMData SimPCMData[];
}
