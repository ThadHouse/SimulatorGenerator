#include "PCMDataInternal.h"

#include "NotifyCallbackHelpers.h"
#include "../PortsInternal.h"

using namespace hal;

PCMData hal::SimPCMData[1];
void PCMData::ResetData() {
  m_solenoidInitialized = false;
  m_solenoidInitializedCallbacks = nullptr;
  m_solenoidOutput = false;
  m_solenoidOutputCallbacks = nullptr;
  m_compressorInitialized = false;
  m_compressorInitializedCallbacks = nullptr;
  m_compressorOn = false;
  m_compressorOnCallbacks = nullptr;
  m_closeLoopEnabled = false;
  m_closeLoopEnabledCallbacks = nullptr;
  m_pressureSwitch = false;
  m_pressureSwitchCallbacks = nullptr;
  m_compressorCurrent = 0.0;
  m_compressorCurrentCallbacks = nullptr;
}

int32_t PCMData::RegisterSolenoidInitializedCallback(HAL_NotifyCallback callback, void* param, HAL_Bool initialNotify) {
  // Must return -1 on a null callback for error handling
  if (callback == nullptr) return -1;
  int32_t newUid = 0;
 {
    std::lock_guard<std::mutex> lock(m_registerMutex);
    m_solenoidInitializedCallbacks = RegisterCallback(m_solenoidInitializedCallbacks, "SolenoidInitialized", callback, param, &newUid);
  }
  if (initialNotify) {
    // We know that the callback is not null because of earlier null check
    HAL_Value value = MakeBoolean(GetSolenoidInitialized());
    callback("SolenoidInitialized", param, &value);
  }
  return newUid;
}

void PCMData::CancelSolenoidInitializedCallback(int32_t uid) {
  m_solenoidInitializedCallbacks = CancelCallback(m_solenoidInitializedCallbacks, uid);
}

void PCMData::InvokeSolenoidInitializedCallback(HAL_Value value) {
  InvokeCallback(m_solenoidInitializedCallbacks, "SolenoidInitialized", &value);
}

HAL_Bool PCMData::GetSolenoidInitialized() {
  return m_solenoidInitialized;
}

void PCMData::SetSolenoidInitialized(HAL_Bool solenoidInitialized) {
  HAL_Bool oldValue = m_solenoidInitialized.exchange(solenoidInitialized);
  if (oldValue != solenoidInitialized) {
    InvokeSolenoidInitializedCallback(MakeBoolean(solenoidInitialized));
  }
}

int32_t PCMData::RegisterSolenoidOutputCallback(HAL_NotifyCallback callback, void* param, HAL_Bool initialNotify) {
  // Must return -1 on a null callback for error handling
  if (callback == nullptr) return -1;
  int32_t newUid = 0;
 {
    std::lock_guard<std::mutex> lock(m_registerMutex);
    m_solenoidOutputCallbacks = RegisterCallback(m_solenoidOutputCallbacks, "SolenoidOutput", callback, param, &newUid);
  }
  if (initialNotify) {
    // We know that the callback is not null because of earlier null check
    HAL_Value value = MakeBoolean(GetSolenoidOutput());
    callback("SolenoidOutput", param, &value);
  }
  return newUid;
}

void PCMData::CancelSolenoidOutputCallback(int32_t uid) {
  m_solenoidOutputCallbacks = CancelCallback(m_solenoidOutputCallbacks, uid);
}

void PCMData::InvokeSolenoidOutputCallback(HAL_Value value) {
  InvokeCallback(m_solenoidOutputCallbacks, "SolenoidOutput", &value);
}

HAL_Bool PCMData::GetSolenoidOutput() {
  return m_solenoidOutput;
}

void PCMData::SetSolenoidOutput(HAL_Bool solenoidOutput) {
  HAL_Bool oldValue = m_solenoidOutput.exchange(solenoidOutput);
  if (oldValue != solenoidOutput) {
    InvokeSolenoidOutputCallback(MakeBoolean(solenoidOutput));
  }
}

int32_t PCMData::RegisterCompressorInitializedCallback(HAL_NotifyCallback callback, void* param, HAL_Bool initialNotify) {
  // Must return -1 on a null callback for error handling
  if (callback == nullptr) return -1;
  int32_t newUid = 0;
 {
    std::lock_guard<std::mutex> lock(m_registerMutex);
    m_compressorInitializedCallbacks = RegisterCallback(m_compressorInitializedCallbacks, "CompressorInitialized", callback, param, &newUid);
  }
  if (initialNotify) {
    // We know that the callback is not null because of earlier null check
    HAL_Value value = MakeBoolean(GetCompressorInitialized());
    callback("CompressorInitialized", param, &value);
  }
  return newUid;
}

void PCMData::CancelCompressorInitializedCallback(int32_t uid) {
  m_compressorInitializedCallbacks = CancelCallback(m_compressorInitializedCallbacks, uid);
}

void PCMData::InvokeCompressorInitializedCallback(HAL_Value value) {
  InvokeCallback(m_compressorInitializedCallbacks, "CompressorInitialized", &value);
}

HAL_Bool PCMData::GetCompressorInitialized() {
  return m_compressorInitialized;
}

void PCMData::SetCompressorInitialized(HAL_Bool compressorInitialized) {
  HAL_Bool oldValue = m_compressorInitialized.exchange(compressorInitialized);
  if (oldValue != compressorInitialized) {
    InvokeCompressorInitializedCallback(MakeBoolean(compressorInitialized));
  }
}

int32_t PCMData::RegisterCompressorOnCallback(HAL_NotifyCallback callback, void* param, HAL_Bool initialNotify) {
  // Must return -1 on a null callback for error handling
  if (callback == nullptr) return -1;
  int32_t newUid = 0;
 {
    std::lock_guard<std::mutex> lock(m_registerMutex);
    m_compressorOnCallbacks = RegisterCallback(m_compressorOnCallbacks, "CompressorOn", callback, param, &newUid);
  }
  if (initialNotify) {
    // We know that the callback is not null because of earlier null check
    HAL_Value value = MakeBoolean(GetCompressorOn());
    callback("CompressorOn", param, &value);
  }
  return newUid;
}

void PCMData::CancelCompressorOnCallback(int32_t uid) {
  m_compressorOnCallbacks = CancelCallback(m_compressorOnCallbacks, uid);
}

void PCMData::InvokeCompressorOnCallback(HAL_Value value) {
  InvokeCallback(m_compressorOnCallbacks, "CompressorOn", &value);
}

HAL_Bool PCMData::GetCompressorOn() {
  return m_compressorOn;
}

void PCMData::SetCompressorOn(HAL_Bool compressorOn) {
  HAL_Bool oldValue = m_compressorOn.exchange(compressorOn);
  if (oldValue != compressorOn) {
    InvokeCompressorOnCallback(MakeBoolean(compressorOn));
  }
}

int32_t PCMData::RegisterCloseLoopEnabledCallback(HAL_NotifyCallback callback, void* param, HAL_Bool initialNotify) {
  // Must return -1 on a null callback for error handling
  if (callback == nullptr) return -1;
  int32_t newUid = 0;
 {
    std::lock_guard<std::mutex> lock(m_registerMutex);
    m_closeLoopEnabledCallbacks = RegisterCallback(m_closeLoopEnabledCallbacks, "CloseLoopEnabled", callback, param, &newUid);
  }
  if (initialNotify) {
    // We know that the callback is not null because of earlier null check
    HAL_Value value = MakeBoolean(GetCloseLoopEnabled());
    callback("CloseLoopEnabled", param, &value);
  }
  return newUid;
}

void PCMData::CancelCloseLoopEnabledCallback(int32_t uid) {
  m_closeLoopEnabledCallbacks = CancelCallback(m_closeLoopEnabledCallbacks, uid);
}

void PCMData::InvokeCloseLoopEnabledCallback(HAL_Value value) {
  InvokeCallback(m_closeLoopEnabledCallbacks, "CloseLoopEnabled", &value);
}

HAL_Bool PCMData::GetCloseLoopEnabled() {
  return m_closeLoopEnabled;
}

void PCMData::SetCloseLoopEnabled(HAL_Bool closeLoopEnabled) {
  HAL_Bool oldValue = m_closeLoopEnabled.exchange(closeLoopEnabled);
  if (oldValue != closeLoopEnabled) {
    InvokeCloseLoopEnabledCallback(MakeBoolean(closeLoopEnabled));
  }
}

int32_t PCMData::RegisterPressureSwitchCallback(HAL_NotifyCallback callback, void* param, HAL_Bool initialNotify) {
  // Must return -1 on a null callback for error handling
  if (callback == nullptr) return -1;
  int32_t newUid = 0;
 {
    std::lock_guard<std::mutex> lock(m_registerMutex);
    m_pressureSwitchCallbacks = RegisterCallback(m_pressureSwitchCallbacks, "PressureSwitch", callback, param, &newUid);
  }
  if (initialNotify) {
    // We know that the callback is not null because of earlier null check
    HAL_Value value = MakeBoolean(GetPressureSwitch());
    callback("PressureSwitch", param, &value);
  }
  return newUid;
}

void PCMData::CancelPressureSwitchCallback(int32_t uid) {
  m_pressureSwitchCallbacks = CancelCallback(m_pressureSwitchCallbacks, uid);
}

void PCMData::InvokePressureSwitchCallback(HAL_Value value) {
  InvokeCallback(m_pressureSwitchCallbacks, "PressureSwitch", &value);
}

HAL_Bool PCMData::GetPressureSwitch() {
  return m_pressureSwitch;
}

void PCMData::SetPressureSwitch(HAL_Bool pressureSwitch) {
  HAL_Bool oldValue = m_pressureSwitch.exchange(pressureSwitch);
  if (oldValue != pressureSwitch) {
    InvokePressureSwitchCallback(MakeBoolean(pressureSwitch));
  }
}

int32_t PCMData::RegisterCompressorCurrentCallback(HAL_NotifyCallback callback, void* param, HAL_Bool initialNotify) {
  // Must return -1 on a null callback for error handling
  if (callback == nullptr) return -1;
  int32_t newUid = 0;
 {
    std::lock_guard<std::mutex> lock(m_registerMutex);
    m_compressorCurrentCallbacks = RegisterCallback(m_compressorCurrentCallbacks, "CompressorCurrent", callback, param, &newUid);
  }
  if (initialNotify) {
    // We know that the callback is not null because of earlier null check
    HAL_Value value = MakeDouble(GetCompressorCurrent());
    callback("CompressorCurrent", param, &value);
  }
  return newUid;
}

void PCMData::CancelCompressorCurrentCallback(int32_t uid) {
  m_compressorCurrentCallbacks = CancelCallback(m_compressorCurrentCallbacks, uid);
}

void PCMData::InvokeCompressorCurrentCallback(HAL_Value value) {
  InvokeCallback(m_compressorCurrentCallbacks, "CompressorCurrent", &value);
}

double PCMData::GetCompressorCurrent() {
  return m_compressorCurrent;
}

void PCMData::SetCompressorCurrent(double compressorCurrent) {
  double oldValue = m_compressorCurrent.exchange(compressorCurrent);
  if (oldValue != compressorCurrent) {
    InvokeCompressorCurrentCallback(MakeDouble(compressorCurrent));
  }
}

extern "C" {
void HALSIM_ResetPCMData(int32_t index) {
  SimPCMData[index].ResetData();
}

int32_t HALSIM_RegisterPCMSolenoidInitializedCallback(int32_t index, HAL_NotifyCallback callback, void* param, HAL_Bool initialNotify) {
  return SimPCMData[index].RegisterSolenoidInitializedCallback(callback, param, initialNotify);
}

void HALSIM_CancelPCMSolenoidInitializedCallback(int32_t index, int32_t uid) {
  SimPCMData[index].CancelSolenoidInitializedCallback(uid);
}

HAL_Bool HALSIM_GetPCMSolenoidInitialized(int32_t index) {
  return SimPCMData[index].GetSolenoidInitialized();
}

int32_t HALSIM_RegisterPCMSolenoidOutputCallback(int32_t index, HAL_NotifyCallback callback, void* param, HAL_Bool initialNotify) {
  return SimPCMData[index].RegisterSolenoidOutputCallback(callback, param, initialNotify);
}

void HALSIM_CancelPCMSolenoidOutputCallback(int32_t index, int32_t uid) {
  SimPCMData[index].CancelSolenoidOutputCallback(uid);
}

HAL_Bool HALSIM_GetPCMSolenoidOutput(int32_t index) {
  return SimPCMData[index].GetSolenoidOutput();
}

int32_t HALSIM_RegisterPCMCompressorInitializedCallback(int32_t index, HAL_NotifyCallback callback, void* param, HAL_Bool initialNotify) {
  return SimPCMData[index].RegisterCompressorInitializedCallback(callback, param, initialNotify);
}

void HALSIM_CancelPCMCompressorInitializedCallback(int32_t index, int32_t uid) {
  SimPCMData[index].CancelCompressorInitializedCallback(uid);
}

HAL_Bool HALSIM_GetPCMCompressorInitialized(int32_t index) {
  return SimPCMData[index].GetCompressorInitialized();
}

int32_t HALSIM_RegisterPCMCompressorOnCallback(int32_t index, HAL_NotifyCallback callback, void* param, HAL_Bool initialNotify) {
  return SimPCMData[index].RegisterCompressorOnCallback(callback, param, initialNotify);
}

void HALSIM_CancelPCMCompressorOnCallback(int32_t index, int32_t uid) {
  SimPCMData[index].CancelCompressorOnCallback(uid);
}

HAL_Bool HALSIM_GetPCMCompressorOn(int32_t index) {
  return SimPCMData[index].GetCompressorOn();
}

int32_t HALSIM_RegisterPCMCloseLoopEnabledCallback(int32_t index, HAL_NotifyCallback callback, void* param, HAL_Bool initialNotify) {
  return SimPCMData[index].RegisterCloseLoopEnabledCallback(callback, param, initialNotify);
}

void HALSIM_CancelPCMCloseLoopEnabledCallback(int32_t index, int32_t uid) {
  SimPCMData[index].CancelCloseLoopEnabledCallback(uid);
}

HAL_Bool HALSIM_GetPCMCloseLoopEnabled(int32_t index) {
  return SimPCMData[index].GetCloseLoopEnabled();
}

int32_t HALSIM_RegisterPCMPressureSwitchCallback(int32_t index, HAL_NotifyCallback callback, void* param, HAL_Bool initialNotify) {
  return SimPCMData[index].RegisterPressureSwitchCallback(callback, param, initialNotify);
}

void HALSIM_CancelPCMPressureSwitchCallback(int32_t index, int32_t uid) {
  SimPCMData[index].CancelPressureSwitchCallback(uid);
}

HAL_Bool HALSIM_GetPCMPressureSwitch(int32_t index) {
  return SimPCMData[index].GetPressureSwitch();
}

int32_t HALSIM_RegisterPCMCompressorCurrentCallback(int32_t index, HAL_NotifyCallback callback, void* param, HAL_Bool initialNotify) {
  return SimPCMData[index].RegisterCompressorCurrentCallback(callback, param, initialNotify);
}

void HALSIM_CancelPCMCompressorCurrentCallback(int32_t index, int32_t uid) {
  SimPCMData[index].CancelCompressorCurrentCallback(uid);
}

double HALSIM_GetPCMCompressorCurrent(int32_t index) {
  return SimPCMData[index].GetCompressorCurrent();
}

}
