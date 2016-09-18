#include "PDPDataInternal.h"

#include "NotifyCallbackHelpers.h"
#include "../PortsInternal.h"

using namespace hal;

PDPData hal::SimPDPData[1];
void PDPData::ResetData() {
  m_initialized = false;
  m_initializedCallbacks = nullptr;
  m_temperature = 0.0;
  m_temperatureCallbacks = nullptr;
  m_voltage = 12.0;
  m_voltageCallbacks = nullptr;
  m_current = 0.0;
  m_currentCallbacks = nullptr;
}

int32_t PDPData::RegisterInitializedCallback(HAL_NotifyCallback callback, void* param, HAL_Bool initialNotify) {
  // Must return -1 on a null callback for error handling
  if (callback == nullptr) return -1;
  int32_t newUid = 0;
 {
    std::lock_guard<std::mutex> lock(m_registerMutex);
    m_initializedCallbacks = RegisterCallback(m_initializedCallbacks, "Initialized", callback, param, &newUid);
  }
  if (initialNotify) {
    // We know that the callback is not null because of earlier null check
    HAL_Value value = MakeBoolean(GetInitialized());
    callback("Initialized", param, &value);
  }
  return newUid;
}

void PDPData::CancelInitializedCallback(int32_t uid) {
  m_initializedCallbacks = CancelCallback(m_initializedCallbacks, uid);
}

void PDPData::InvokeInitializedCallback(HAL_Value value) {
  InvokeCallback(m_initializedCallbacks, "Initialized", &value);
}

HAL_Bool PDPData::GetInitialized() {
  return m_initialized;
}

void PDPData::SetInitialized(HAL_Bool initialized) {
  HAL_Bool oldValue = m_initialized.exchange(initialized);
  if (oldValue != initialized) {
    InvokeInitializedCallback(MakeBoolean(initialized));
  }
}

int32_t PDPData::RegisterTemperatureCallback(HAL_NotifyCallback callback, void* param, HAL_Bool initialNotify) {
  // Must return -1 on a null callback for error handling
  if (callback == nullptr) return -1;
  int32_t newUid = 0;
 {
    std::lock_guard<std::mutex> lock(m_registerMutex);
    m_temperatureCallbacks = RegisterCallback(m_temperatureCallbacks, "Temperature", callback, param, &newUid);
  }
  if (initialNotify) {
    // We know that the callback is not null because of earlier null check
    HAL_Value value = MakeDouble(GetTemperature());
    callback("Temperature", param, &value);
  }
  return newUid;
}

void PDPData::CancelTemperatureCallback(int32_t uid) {
  m_temperatureCallbacks = CancelCallback(m_temperatureCallbacks, uid);
}

void PDPData::InvokeTemperatureCallback(HAL_Value value) {
  InvokeCallback(m_temperatureCallbacks, "Temperature", &value);
}

double PDPData::GetTemperature() {
  return m_temperature;
}

void PDPData::SetTemperature(double temperature) {
  double oldValue = m_temperature.exchange(temperature);
  if (oldValue != temperature) {
    InvokeTemperatureCallback(MakeDouble(temperature));
  }
}

int32_t PDPData::RegisterVoltageCallback(HAL_NotifyCallback callback, void* param, HAL_Bool initialNotify) {
  // Must return -1 on a null callback for error handling
  if (callback == nullptr) return -1;
  int32_t newUid = 0;
 {
    std::lock_guard<std::mutex> lock(m_registerMutex);
    m_voltageCallbacks = RegisterCallback(m_voltageCallbacks, "Voltage", callback, param, &newUid);
  }
  if (initialNotify) {
    // We know that the callback is not null because of earlier null check
    HAL_Value value = MakeDouble(GetVoltage());
    callback("Voltage", param, &value);
  }
  return newUid;
}

void PDPData::CancelVoltageCallback(int32_t uid) {
  m_voltageCallbacks = CancelCallback(m_voltageCallbacks, uid);
}

void PDPData::InvokeVoltageCallback(HAL_Value value) {
  InvokeCallback(m_voltageCallbacks, "Voltage", &value);
}

double PDPData::GetVoltage() {
  return m_voltage;
}

void PDPData::SetVoltage(double voltage) {
  double oldValue = m_voltage.exchange(voltage);
  if (oldValue != voltage) {
    InvokeVoltageCallback(MakeDouble(voltage));
  }
}

int32_t PDPData::RegisterCurrentCallback(HAL_NotifyCallback callback, void* param, HAL_Bool initialNotify) {
  // Must return -1 on a null callback for error handling
  if (callback == nullptr) return -1;
  int32_t newUid = 0;
 {
    std::lock_guard<std::mutex> lock(m_registerMutex);
    m_currentCallbacks = RegisterCallback(m_currentCallbacks, "Current", callback, param, &newUid);
  }
  if (initialNotify) {
    // We know that the callback is not null because of earlier null check
    HAL_Value value = MakeDouble(GetCurrent());
    callback("Current", param, &value);
  }
  return newUid;
}

void PDPData::CancelCurrentCallback(int32_t uid) {
  m_currentCallbacks = CancelCallback(m_currentCallbacks, uid);
}

void PDPData::InvokeCurrentCallback(HAL_Value value) {
  InvokeCallback(m_currentCallbacks, "Current", &value);
}

double PDPData::GetCurrent() {
  return m_current;
}

void PDPData::SetCurrent(double current) {
  double oldValue = m_current.exchange(current);
  if (oldValue != current) {
    InvokeCurrentCallback(MakeDouble(current));
  }
}

extern "C" {
void HALSIM_ResetPDPData(int32_t index) {
  SimPDPData[index].ResetData();
}

int32_t HALSIM_RegisterPDPInitializedCallback(int32_t index, HAL_NotifyCallback callback, void* param, HAL_Bool initialNotify) {
  return SimPDPData[index].RegisterInitializedCallback(callback, param, initialNotify);
}

void HALSIM_CancelPDPInitializedCallback(int32_t index, int32_t uid) {
  SimPDPData[index].CancelInitializedCallback(uid);
}

HAL_Bool HALSIM_GetPDPInitialized(int32_t index) {
  return SimPDPData[index].GetInitialized();
}

int32_t HALSIM_RegisterPDPTemperatureCallback(int32_t index, HAL_NotifyCallback callback, void* param, HAL_Bool initialNotify) {
  return SimPDPData[index].RegisterTemperatureCallback(callback, param, initialNotify);
}

void HALSIM_CancelPDPTemperatureCallback(int32_t index, int32_t uid) {
  SimPDPData[index].CancelTemperatureCallback(uid);
}

double HALSIM_GetPDPTemperature(int32_t index) {
  return SimPDPData[index].GetTemperature();
}

void HALSIM_SetPDPTemperature(int32_t index, double temperature) {
  SimPDPData[index].SetTemperature(temperature);
}

int32_t HALSIM_RegisterPDPVoltageCallback(int32_t index, HAL_NotifyCallback callback, void* param, HAL_Bool initialNotify) {
  return SimPDPData[index].RegisterVoltageCallback(callback, param, initialNotify);
}

void HALSIM_CancelPDPVoltageCallback(int32_t index, int32_t uid) {
  SimPDPData[index].CancelVoltageCallback(uid);
}

double HALSIM_GetPDPVoltage(int32_t index) {
  return SimPDPData[index].GetVoltage();
}

void HALSIM_SetPDPVoltage(int32_t index, double voltage) {
  SimPDPData[index].SetVoltage(voltage);
}

int32_t HALSIM_RegisterPDPCurrentCallback(int32_t index, HAL_NotifyCallback callback, void* param, HAL_Bool initialNotify) {
  return SimPDPData[index].RegisterCurrentCallback(callback, param, initialNotify);
}

void HALSIM_CancelPDPCurrentCallback(int32_t index, int32_t uid) {
  SimPDPData[index].CancelCurrentCallback(uid);
}

double HALSIM_GetPDPCurrent(int32_t index) {
  return SimPDPData[index].GetCurrent();
}

void HALSIM_SetPDPCurrent(int32_t index, double current) {
  SimPDPData[index].SetCurrent(current);
}

}
