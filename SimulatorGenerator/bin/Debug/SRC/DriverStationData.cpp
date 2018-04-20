#include "DriverStationDataInternal.h"

#include "NotifyCallbackHelpers.h"
#include "../PortsInternal.h"

using namespace hal;

DriverStationData hal::SimDriverStationData[1];
void DriverStationData::ResetData() {
  m_enabled = false;
  m_enabledCallbacks = nullptr;
  m_autonomous = false;
  m_autonomousCallbacks = nullptr;
  m_test = false;
  m_testCallbacks = nullptr;
  m_eStop = false;
  m_eStopCallbacks = nullptr;
  m_fmsAttached = false;
  m_fmsAttachedCallbacks = nullptr;
  m_dsAttached = false;
  m_dsAttachedCallbacks = nullptr;
}

int32_t DriverStationData::RegisterEnabledCallback(HAL_NotifyCallback callback, void* param, HAL_Bool initialNotify) {
  // Must return -1 on a null callback for error handling
  if (callback == nullptr) return -1;
  int32_t newUid = 0;
 {
    std::lock_guard<std::mutex> lock(m_registerMutex);
    m_enabledCallbacks = RegisterCallback(m_enabledCallbacks, "Enabled", callback, param, &newUid);
  }
  if (initialNotify) {
    // We know that the callback is not null because of earlier null check
    HAL_Value value = MakeBoolean(GetEnabled());
    callback("Enabled", param, &value);
  }
  return newUid;
}

void DriverStationData::CancelEnabledCallback(int32_t uid) {
  m_enabledCallbacks = CancelCallback(m_enabledCallbacks, uid);
}

void DriverStationData::InvokeEnabledCallback(HAL_Value value) {
  InvokeCallback(m_enabledCallbacks, "Enabled", &value);
}

HAL_Bool DriverStationData::GetEnabled() {
  return m_enabled;
}

void DriverStationData::SetEnabled(HAL_Bool enabled) {
  HAL_Bool oldValue = m_enabled.exchange(enabled);
  if (oldValue != enabled) {
    InvokeEnabledCallback(MakeBoolean(enabled));
  }
}

int32_t DriverStationData::RegisterAutonomousCallback(HAL_NotifyCallback callback, void* param, HAL_Bool initialNotify) {
  // Must return -1 on a null callback for error handling
  if (callback == nullptr) return -1;
  int32_t newUid = 0;
 {
    std::lock_guard<std::mutex> lock(m_registerMutex);
    m_autonomousCallbacks = RegisterCallback(m_autonomousCallbacks, "Autonomous", callback, param, &newUid);
  }
  if (initialNotify) {
    // We know that the callback is not null because of earlier null check
    HAL_Value value = MakeBoolean(GetAutonomous());
    callback("Autonomous", param, &value);
  }
  return newUid;
}

void DriverStationData::CancelAutonomousCallback(int32_t uid) {
  m_autonomousCallbacks = CancelCallback(m_autonomousCallbacks, uid);
}

void DriverStationData::InvokeAutonomousCallback(HAL_Value value) {
  InvokeCallback(m_autonomousCallbacks, "Autonomous", &value);
}

HAL_Bool DriverStationData::GetAutonomous() {
  return m_autonomous;
}

void DriverStationData::SetAutonomous(HAL_Bool autonomous) {
  HAL_Bool oldValue = m_autonomous.exchange(autonomous);
  if (oldValue != autonomous) {
    InvokeAutonomousCallback(MakeBoolean(autonomous));
  }
}

int32_t DriverStationData::RegisterTestCallback(HAL_NotifyCallback callback, void* param, HAL_Bool initialNotify) {
  // Must return -1 on a null callback for error handling
  if (callback == nullptr) return -1;
  int32_t newUid = 0;
 {
    std::lock_guard<std::mutex> lock(m_registerMutex);
    m_testCallbacks = RegisterCallback(m_testCallbacks, "Test", callback, param, &newUid);
  }
  if (initialNotify) {
    // We know that the callback is not null because of earlier null check
    HAL_Value value = MakeBoolean(GetTest());
    callback("Test", param, &value);
  }
  return newUid;
}

void DriverStationData::CancelTestCallback(int32_t uid) {
  m_testCallbacks = CancelCallback(m_testCallbacks, uid);
}

void DriverStationData::InvokeTestCallback(HAL_Value value) {
  InvokeCallback(m_testCallbacks, "Test", &value);
}

HAL_Bool DriverStationData::GetTest() {
  return m_test;
}

void DriverStationData::SetTest(HAL_Bool test) {
  HAL_Bool oldValue = m_test.exchange(test);
  if (oldValue != test) {
    InvokeTestCallback(MakeBoolean(test));
  }
}

int32_t DriverStationData::RegisterEStopCallback(HAL_NotifyCallback callback, void* param, HAL_Bool initialNotify) {
  // Must return -1 on a null callback for error handling
  if (callback == nullptr) return -1;
  int32_t newUid = 0;
 {
    std::lock_guard<std::mutex> lock(m_registerMutex);
    m_eStopCallbacks = RegisterCallback(m_eStopCallbacks, "EStop", callback, param, &newUid);
  }
  if (initialNotify) {
    // We know that the callback is not null because of earlier null check
    HAL_Value value = MakeBoolean(GetEStop());
    callback("EStop", param, &value);
  }
  return newUid;
}

void DriverStationData::CancelEStopCallback(int32_t uid) {
  m_eStopCallbacks = CancelCallback(m_eStopCallbacks, uid);
}

void DriverStationData::InvokeEStopCallback(HAL_Value value) {
  InvokeCallback(m_eStopCallbacks, "EStop", &value);
}

HAL_Bool DriverStationData::GetEStop() {
  return m_eStop;
}

void DriverStationData::SetEStop(HAL_Bool eStop) {
  HAL_Bool oldValue = m_eStop.exchange(eStop);
  if (oldValue != eStop) {
    InvokeEStopCallback(MakeBoolean(eStop));
  }
}

int32_t DriverStationData::RegisterFmsAttachedCallback(HAL_NotifyCallback callback, void* param, HAL_Bool initialNotify) {
  // Must return -1 on a null callback for error handling
  if (callback == nullptr) return -1;
  int32_t newUid = 0;
 {
    std::lock_guard<std::mutex> lock(m_registerMutex);
    m_fmsAttachedCallbacks = RegisterCallback(m_fmsAttachedCallbacks, "FmsAttached", callback, param, &newUid);
  }
  if (initialNotify) {
    // We know that the callback is not null because of earlier null check
    HAL_Value value = MakeBoolean(GetFmsAttached());
    callback("FmsAttached", param, &value);
  }
  return newUid;
}

void DriverStationData::CancelFmsAttachedCallback(int32_t uid) {
  m_fmsAttachedCallbacks = CancelCallback(m_fmsAttachedCallbacks, uid);
}

void DriverStationData::InvokeFmsAttachedCallback(HAL_Value value) {
  InvokeCallback(m_fmsAttachedCallbacks, "FmsAttached", &value);
}

HAL_Bool DriverStationData::GetFmsAttached() {
  return m_fmsAttached;
}

void DriverStationData::SetFmsAttached(HAL_Bool fmsAttached) {
  HAL_Bool oldValue = m_fmsAttached.exchange(fmsAttached);
  if (oldValue != fmsAttached) {
    InvokeFmsAttachedCallback(MakeBoolean(fmsAttached));
  }
}

int32_t DriverStationData::RegisterDsAttachedCallback(HAL_NotifyCallback callback, void* param, HAL_Bool initialNotify) {
  // Must return -1 on a null callback for error handling
  if (callback == nullptr) return -1;
  int32_t newUid = 0;
 {
    std::lock_guard<std::mutex> lock(m_registerMutex);
    m_dsAttachedCallbacks = RegisterCallback(m_dsAttachedCallbacks, "DsAttached", callback, param, &newUid);
  }
  if (initialNotify) {
    // We know that the callback is not null because of earlier null check
    HAL_Value value = MakeBoolean(GetDsAttached());
    callback("DsAttached", param, &value);
  }
  return newUid;
}

void DriverStationData::CancelDsAttachedCallback(int32_t uid) {
  m_dsAttachedCallbacks = CancelCallback(m_dsAttachedCallbacks, uid);
}

void DriverStationData::InvokeDsAttachedCallback(HAL_Value value) {
  InvokeCallback(m_dsAttachedCallbacks, "DsAttached", &value);
}

HAL_Bool DriverStationData::GetDsAttached() {
  return m_dsAttached;
}

void DriverStationData::SetDsAttached(HAL_Bool dsAttached) {
  HAL_Bool oldValue = m_dsAttached.exchange(dsAttached);
  if (oldValue != dsAttached) {
    InvokeDsAttachedCallback(MakeBoolean(dsAttached));
  }
}

extern "C" {
void HALSIM_ResetDriverStationData(int32_t index) {
  SimDriverStationData[index].ResetData();
}

int32_t HALSIM_RegisterDriverStationEnabledCallback(int32_t index, HAL_NotifyCallback callback, void* param, HAL_Bool initialNotify) {
  return SimDriverStationData[index].RegisterEnabledCallback(callback, param, initialNotify);
}

void HALSIM_CancelDriverStationEnabledCallback(int32_t index, int32_t uid) {
  SimDriverStationData[index].CancelEnabledCallback(uid);
}

HAL_Bool HALSIM_GetDriverStationEnabled(int32_t index) {
  return SimDriverStationData[index].GetEnabled();
}

int32_t HALSIM_RegisterDriverStationAutonomousCallback(int32_t index, HAL_NotifyCallback callback, void* param, HAL_Bool initialNotify) {
  return SimDriverStationData[index].RegisterAutonomousCallback(callback, param, initialNotify);
}

void HALSIM_CancelDriverStationAutonomousCallback(int32_t index, int32_t uid) {
  SimDriverStationData[index].CancelAutonomousCallback(uid);
}

HAL_Bool HALSIM_GetDriverStationAutonomous(int32_t index) {
  return SimDriverStationData[index].GetAutonomous();
}

int32_t HALSIM_RegisterDriverStationTestCallback(int32_t index, HAL_NotifyCallback callback, void* param, HAL_Bool initialNotify) {
  return SimDriverStationData[index].RegisterTestCallback(callback, param, initialNotify);
}

void HALSIM_CancelDriverStationTestCallback(int32_t index, int32_t uid) {
  SimDriverStationData[index].CancelTestCallback(uid);
}

HAL_Bool HALSIM_GetDriverStationTest(int32_t index) {
  return SimDriverStationData[index].GetTest();
}

int32_t HALSIM_RegisterDriverStationEStopCallback(int32_t index, HAL_NotifyCallback callback, void* param, HAL_Bool initialNotify) {
  return SimDriverStationData[index].RegisterEStopCallback(callback, param, initialNotify);
}

void HALSIM_CancelDriverStationEStopCallback(int32_t index, int32_t uid) {
  SimDriverStationData[index].CancelEStopCallback(uid);
}

HAL_Bool HALSIM_GetDriverStationEStop(int32_t index) {
  return SimDriverStationData[index].GetEStop();
}

int32_t HALSIM_RegisterDriverStationFmsAttachedCallback(int32_t index, HAL_NotifyCallback callback, void* param, HAL_Bool initialNotify) {
  return SimDriverStationData[index].RegisterFmsAttachedCallback(callback, param, initialNotify);
}

void HALSIM_CancelDriverStationFmsAttachedCallback(int32_t index, int32_t uid) {
  SimDriverStationData[index].CancelFmsAttachedCallback(uid);
}

HAL_Bool HALSIM_GetDriverStationFmsAttached(int32_t index) {
  return SimDriverStationData[index].GetFmsAttached();
}

int32_t HALSIM_RegisterDriverStationDsAttachedCallback(int32_t index, HAL_NotifyCallback callback, void* param, HAL_Bool initialNotify) {
  return SimDriverStationData[index].RegisterDsAttachedCallback(callback, param, initialNotify);
}

void HALSIM_CancelDriverStationDsAttachedCallback(int32_t index, int32_t uid) {
  SimDriverStationData[index].CancelDsAttachedCallback(uid);
}

HAL_Bool HALSIM_GetDriverStationDsAttached(int32_t index) {
  return SimDriverStationData[index].GetDsAttached();
}

}
