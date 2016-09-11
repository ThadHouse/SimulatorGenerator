#include "AnalogOutDataInternal.h"

#include "NotifyCallbackHelpers.h"
#include "../PortsInternal.h"

using namespace hal;

std::unique_ptr<std::shared_ptr<AnalogOutData>[]> hal::SimAnalogOutData = std::make_unique<std::shared_ptr<AnalogOutData>[]>(SIZEINHERE);
void AnalogOutData::ResetData() {
  m_voltage = 0.0;
  m_voltageCallbacks = nullptr;
  m_initialized = 0.0;
  m_initializedCallbacks = nullptr;
}

int32_t AnalogOutData::RegisterVoltageCallback(HAL_NotifyCallback callback, void* param, HAL_Bool initialNotify) {
  HAL_Value* value = nullptr;
  if (initialNotify) value = &MakeDouble(GetVoltage());
  int32_t newUid = 0;
  auto newCallbacks = RegisterCallback(m_voltageCallbacks, "Voltage", callback, param, value, &newUid);
  if (newCallbacks == nullptr) return newUid;
  m_voltageCallbacks = newCallbacks;
  return newUid;
}

void AnalogOutData::CancelVoltageCallback(int32_t uid) {
  m_activeCallbacks = CancelCallback(m_voltageCallbacks, uid);
}

void AnalogOutData::InvokeVoltageCallback(const HAL_Value* value) {
  InvokeCallback(m_voltageCallbacks, "Voltage", value);
}

double AnalogOutData::GetVoltage() {
  return m_voltage;
}

void AnalogOutData::SetVoltage(double voltage) {
  double oldValue = m_voltage.exchange(voltage);
  if (oldValue != voltage) {
    InvokeVoltageCallback(&MakeDouble(voltage));
  }
}

int32_t AnalogOutData::RegisterInitializedCallback(HAL_NotifyCallback callback, void* param, HAL_Bool initialNotify) {
  HAL_Value* value = nullptr;
  if (initialNotify) value = &MakeBoolean(GetInitialized());
  int32_t newUid = 0;
  auto newCallbacks = RegisterCallback(m_initializedCallbacks, "Initialized", callback, param, value, &newUid);
  if (newCallbacks == nullptr) return newUid;
  m_initializedCallbacks = newCallbacks;
  return newUid;
}

void AnalogOutData::CancelInitializedCallback(int32_t uid) {
  m_activeCallbacks = CancelCallback(m_initializedCallbacks, uid);
}

void AnalogOutData::InvokeInitializedCallback(const HAL_Value* value) {
  InvokeCallback(m_initializedCallbacks, "Initialized", value);
}

HAL_Bool AnalogOutData::GetInitialized() {
  return m_initialized;
}

void AnalogOutData::SetInitialized(HAL_Bool initialized) {
  HAL_Bool oldValue = m_initialized.exchange(initialized);
  if (oldValue != initialized) {
    InvokeInitializedCallback(&MakeBoolean(initialized));
  }
}

extern "C" {
int32_t HALSIM_RegisterAnalogOutVoltageCallback(int32_t index, HAL_NotifyCallback callback, void* param, HAL_Bool initialNotify) {
  return SimAnalogOutData[index]->RegisterVoltageCallback(callback, param, initialNotify);
}

void HALSIM_CancelAnalogOutVoltageCallback(int32_t index, int32_t uid) {
  SimAnalogOutData[index]->CancelVoltageCallback(uid);
}

double HALSIM_GetAnalogOutVoltage(int32_t index) {
  return SimAnalogOutData[index]->GetVoltage();
}

int32_t HALSIM_RegisterAnalogOutInitializedCallback(int32_t index, HAL_NotifyCallback callback, void* param, HAL_Bool initialNotify) {
  return SimAnalogOutData[index]->RegisterInitializedCallback(callback, param, initialNotify);
}

void HALSIM_CancelAnalogOutInitializedCallback(int32_t index, int32_t uid) {
  SimAnalogOutData[index]->CancelInitializedCallback(uid);
}

HAL_Bool HALSIM_GetAnalogOutInitialized(int32_t index) {
  return SimAnalogOutData[index]->GetInitialized();
}

}
