#include "AnalogOutDataInternal.h"

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
  // Return an invalid value on a null callback
  if (callback == nullptr) return -1;
  const char* variableName = "Voltage";
  auto newCallbacks = std::make_shared<UidVector<NotifyListener>>(*m_voltageCallbacks);
  int uid = newCallbacks->emplace_back(variableName, param, callback);
  if (initialNotify) {
    callback(variableName, param, &MakeDouble(GetVoltage()));
  }
  m_activeCallbacks = newCallbacks;
  return uid;
}
void AnalogOutData::CancelVoltageCallback(int32_t uid) {
  auto newCallbacks = std::make_shared<UidVector<NotifyListener>>(*m_voltageCallbacks);
  newCallbacks->erase(uid);
  m_activeCallbacks = newCallbacks;
}
void AnalogOutData::InvokeVoltageCallback(const HAL_Value* value) {
  auto newCallbacks = m_voltageCallbacks;
  for (std::size_t i=0; i<newCallbacks->size(); ++i) {
    if (!(*newCallbacks)[i]) continue; //removed
    auto listener = (*newCallbacks)[i];
    listener.callback(listener.key.c_str(), listener.param, value);
  }
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
  // Return an invalid value on a null callback
  if (callback == nullptr) return -1;
  const char* variableName = "Initialized";
  auto newCallbacks = std::make_shared<UidVector<NotifyListener>>(*m_initializedCallbacks);
  int uid = newCallbacks->emplace_back(variableName, param, callback);
  if (initialNotify) {
    callback(variableName, param, &MakeBoolean(GetInitialized()));
  }
  m_activeCallbacks = newCallbacks;
  return uid;
}
void AnalogOutData::CancelInitializedCallback(int32_t uid) {
  auto newCallbacks = std::make_shared<UidVector<NotifyListener>>(*m_initializedCallbacks);
  newCallbacks->erase(uid);
  m_activeCallbacks = newCallbacks;
}
void AnalogOutData::InvokeInitializedCallback(const HAL_Value* value) {
  auto newCallbacks = m_initializedCallbacks;
  for (std::size_t i=0; i<newCallbacks->size(); ++i) {
    if (!(*newCallbacks)[i]) continue; //removed
    auto listener = (*newCallbacks)[i];
    listener.callback(listener.key.c_str(), listener.param, value);
  }
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
