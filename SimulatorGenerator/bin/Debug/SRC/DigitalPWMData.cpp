#include "DigitalPWMDataInternal.h"

#include "../PortsInternal.h"

using namespace hal;

std::unique_ptr<std::shared_ptr<DigitalPWMData>[]> hal::SimDigitalPWMData = std::make_unique<std::shared_ptr<DigitalPWMData>[]>(SIZEINHERE);
void DigitalPWMData::ResetData() {
  m_initialized = false;
  m_initializedCallbacks = nullptr;
  m_dutyCycle = false;
  m_dutyCycleCallbacks = nullptr;
  m_pin = 0;
  m_pinCallbacks = nullptr;
}

int32_t DigitalPWMData::RegisterInitializedCallback(HAL_NotifyCallback callback, void* param, HAL_Bool initialNotify) {
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
void DigitalPWMData::CancelInitializedCallback(int32_t uid) {
  auto newCallbacks = std::make_shared<UidVector<NotifyListener>>(*m_initializedCallbacks);
  newCallbacks->erase(uid);
  m_activeCallbacks = newCallbacks;
}
void DigitalPWMData::InvokeInitializedCallback(const HAL_Value* value) {
  auto newCallbacks = m_initializedCallbacks;
  for (std::size_t i=0; i<newCallbacks->size(); ++i) {
    if (!(*newCallbacks)[i]) continue; //removed
    auto listener = (*newCallbacks)[i];
    listener.callback(listener.key.c_str(), listener.param, value);
  }
}

HAL_Bool DigitalPWMData::GetInitialized() {
  return m_initialized;
}

void DigitalPWMData::SetInitialized(HAL_Bool initialized) {
  HAL_Bool oldValue = m_initialized.exchange(initialized);
  if (oldValue != initialized) {
    InvokeInitializedCallback(&MakeBoolean(initialized));
  }
}

int32_t DigitalPWMData::RegisterDutyCycleCallback(HAL_NotifyCallback callback, void* param, HAL_Bool initialNotify) {
  // Return an invalid value on a null callback
  if (callback == nullptr) return -1;
  const char* variableName = "DutyCycle";
  auto newCallbacks = std::make_shared<UidVector<NotifyListener>>(*m_dutyCycleCallbacks);
  int uid = newCallbacks->emplace_back(variableName, param, callback);
  if (initialNotify) {
    callback(variableName, param, &MakeDouble(GetDutyCycle()));
  }
  m_activeCallbacks = newCallbacks;
  return uid;
}
void DigitalPWMData::CancelDutyCycleCallback(int32_t uid) {
  auto newCallbacks = std::make_shared<UidVector<NotifyListener>>(*m_dutyCycleCallbacks);
  newCallbacks->erase(uid);
  m_activeCallbacks = newCallbacks;
}
void DigitalPWMData::InvokeDutyCycleCallback(const HAL_Value* value) {
  auto newCallbacks = m_dutyCycleCallbacks;
  for (std::size_t i=0; i<newCallbacks->size(); ++i) {
    if (!(*newCallbacks)[i]) continue; //removed
    auto listener = (*newCallbacks)[i];
    listener.callback(listener.key.c_str(), listener.param, value);
  }
}

double DigitalPWMData::GetDutyCycle() {
  return m_dutyCycle;
}

void DigitalPWMData::SetDutyCycle(double dutyCycle) {
  double oldValue = m_dutyCycle.exchange(dutyCycle);
  if (oldValue != dutyCycle) {
    InvokeDutyCycleCallback(&MakeDouble(dutyCycle));
  }
}

int32_t DigitalPWMData::RegisterPinCallback(HAL_NotifyCallback callback, void* param, HAL_Bool initialNotify) {
  // Return an invalid value on a null callback
  if (callback == nullptr) return -1;
  const char* variableName = "Pin";
  auto newCallbacks = std::make_shared<UidVector<NotifyListener>>(*m_pinCallbacks);
  int uid = newCallbacks->emplace_back(variableName, param, callback);
  if (initialNotify) {
    callback(variableName, param, &MakeInt(GetPin()));
  }
  m_activeCallbacks = newCallbacks;
  return uid;
}
void DigitalPWMData::CancelPinCallback(int32_t uid) {
  auto newCallbacks = std::make_shared<UidVector<NotifyListener>>(*m_pinCallbacks);
  newCallbacks->erase(uid);
  m_activeCallbacks = newCallbacks;
}
void DigitalPWMData::InvokePinCallback(const HAL_Value* value) {
  auto newCallbacks = m_pinCallbacks;
  for (std::size_t i=0; i<newCallbacks->size(); ++i) {
    if (!(*newCallbacks)[i]) continue; //removed
    auto listener = (*newCallbacks)[i];
    listener.callback(listener.key.c_str(), listener.param, value);
  }
}

int32_t DigitalPWMData::GetPin() {
  return m_pin;
}

void DigitalPWMData::SetPin(int32_t pin) {
  int32_t oldValue = m_pin.exchange(pin);
  if (oldValue != pin) {
    InvokePinCallback(&MakeInt(pin));
  }
}

extern "C" {
int32_t HALSIM_RegisterDigitalPWMInitializedCallback(int32_t index, HAL_NotifyCallback callback, void* param, HAL_Bool initialNotify) {
  return SimDigitalPWMData[index]->RegisterInitializedCallback(callback, param, initialNotify);
}

void HALSIM_CancelDigitalPWMInitializedCallback(int32_t index, int32_t uid) {
  SimDigitalPWMData[index]->CancelInitializedCallback(uid);
}

HAL_Bool HALSIM_GetDigitalPWMInitialized(int32_t index) {
  return SimDigitalPWMData[index]->GetInitialized();
}

int32_t HALSIM_RegisterDigitalPWMDutyCycleCallback(int32_t index, HAL_NotifyCallback callback, void* param, HAL_Bool initialNotify) {
  return SimDigitalPWMData[index]->RegisterDutyCycleCallback(callback, param, initialNotify);
}

void HALSIM_CancelDigitalPWMDutyCycleCallback(int32_t index, int32_t uid) {
  SimDigitalPWMData[index]->CancelDutyCycleCallback(uid);
}

double HALSIM_GetDigitalPWMDutyCycle(int32_t index) {
  return SimDigitalPWMData[index]->GetDutyCycle();
}

int32_t HALSIM_RegisterDigitalPWMPinCallback(int32_t index, HAL_NotifyCallback callback, void* param, HAL_Bool initialNotify) {
  return SimDigitalPWMData[index]->RegisterPinCallback(callback, param, initialNotify);
}

void HALSIM_CancelDigitalPWMPinCallback(int32_t index, int32_t uid) {
  SimDigitalPWMData[index]->CancelPinCallback(uid);
}

int32_t HALSIM_GetDigitalPWMPin(int32_t index) {
  return SimDigitalPWMData[index]->GetPin();
}

}
