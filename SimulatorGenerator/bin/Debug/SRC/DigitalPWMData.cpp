#include "DigitalPWMDataInternal.h"

#include "NotifyCallbackHelpers.h"
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
  HAL_Value* value = nullptr;
  if (initialNotify) value = &MakeBoolean(GetInitialized());
  int32_t newUid = 0;
  auto newCallbacks = RegisterCallback(m_initializedCallbacks, "Initialized", callback, param, value, &newUid);
  if (newCallbacks == nullptr) return newUid;
  m_initializedCallbacks = newCallbacks;
  return newUid;
}

void DigitalPWMData::CancelInitializedCallback(int32_t uid) {
  m_activeCallbacks = CancelCallback(m_initializedCallbacks, uid);
}

void DigitalPWMData::InvokeInitializedCallback(const HAL_Value* value) {
  InvokeCallback(m_initializedCallbacks, "Initialized", value);
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
  HAL_Value* value = nullptr;
  if (initialNotify) value = &MakeDouble(GetDutyCycle());
  int32_t newUid = 0;
  auto newCallbacks = RegisterCallback(m_dutyCycleCallbacks, "DutyCycle", callback, param, value, &newUid);
  if (newCallbacks == nullptr) return newUid;
  m_dutyCycleCallbacks = newCallbacks;
  return newUid;
}

void DigitalPWMData::CancelDutyCycleCallback(int32_t uid) {
  m_activeCallbacks = CancelCallback(m_dutyCycleCallbacks, uid);
}

void DigitalPWMData::InvokeDutyCycleCallback(const HAL_Value* value) {
  InvokeCallback(m_dutyCycleCallbacks, "DutyCycle", value);
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
  HAL_Value* value = nullptr;
  if (initialNotify) value = &MakeInt(GetPin());
  int32_t newUid = 0;
  auto newCallbacks = RegisterCallback(m_pinCallbacks, "Pin", callback, param, value, &newUid);
  if (newCallbacks == nullptr) return newUid;
  m_pinCallbacks = newCallbacks;
  return newUid;
}

void DigitalPWMData::CancelPinCallback(int32_t uid) {
  m_activeCallbacks = CancelCallback(m_pinCallbacks, uid);
}

void DigitalPWMData::InvokePinCallback(const HAL_Value* value) {
  InvokeCallback(m_pinCallbacks, "Pin", value);
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
