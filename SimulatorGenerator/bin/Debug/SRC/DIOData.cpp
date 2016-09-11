#include "DIODataInternal.h"

#include "NotifyCallbackHelpers.h"
#include "../PortsInternal.h"

using namespace hal;

std::unique_ptr<std::shared_ptr<DIOData>[]> hal::SimDIOData = std::make_unique<std::shared_ptr<DIOData>[]>(SIZEINHERE);
void DIOData::ResetData() {
  m_initialized = false;
  m_initializedCallbacks = nullptr;
  m_value = true;
  m_valueCallbacks = nullptr;
  m_pulseLength = 0.0;
  m_pulseLengthCallbacks = nullptr;
  m_isInput = true;
  m_isInputCallbacks = nullptr;
  m_filterIndex = -1;
  m_filterIndexCallbacks = nullptr;
}

int32_t DIOData::RegisterInitializedCallback(HAL_NotifyCallback callback, void* param, HAL_Bool initialNotify) {
  HAL_Value* value = nullptr;
  if (initialNotify) value = &MakeBoolean(GetInitialized());
  int32_t newUid = 0;
  auto newCallbacks = RegisterCallback(m_initializedCallbacks, "Initialized", callback, param, value, &newUid);
  if (newCallbacks == nullptr) return newUid;
  m_initializedCallbacks = newCallbacks;
  return newUid;
}

void DIOData::CancelInitializedCallback(int32_t uid) {
  m_activeCallbacks = CancelCallback(m_initializedCallbacks, uid);
}

void DIOData::InvokeInitializedCallback(const HAL_Value* value) {
  InvokeCallback(m_initializedCallbacks, "Initialized", value);
}

HAL_Bool DIOData::GetInitialized() {
  return m_initialized;
}

void DIOData::SetInitialized(HAL_Bool initialized) {
  HAL_Bool oldValue = m_initialized.exchange(initialized);
  if (oldValue != initialized) {
    InvokeInitializedCallback(&MakeBoolean(initialized));
  }
}

int32_t DIOData::RegisterValueCallback(HAL_NotifyCallback callback, void* param, HAL_Bool initialNotify) {
  HAL_Value* value = nullptr;
  if (initialNotify) value = &MakeBoolean(GetValue());
  int32_t newUid = 0;
  auto newCallbacks = RegisterCallback(m_valueCallbacks, "Value", callback, param, value, &newUid);
  if (newCallbacks == nullptr) return newUid;
  m_valueCallbacks = newCallbacks;
  return newUid;
}

void DIOData::CancelValueCallback(int32_t uid) {
  m_activeCallbacks = CancelCallback(m_valueCallbacks, uid);
}

void DIOData::InvokeValueCallback(const HAL_Value* value) {
  InvokeCallback(m_valueCallbacks, "Value", value);
}

HAL_Bool DIOData::GetValue() {
  return m_value;
}

void DIOData::SetValue(HAL_Bool value) {
  HAL_Bool oldValue = m_value.exchange(value);
  if (oldValue != value) {
    InvokeValueCallback(&MakeBoolean(value));
  }
}

int32_t DIOData::RegisterPulseLengthCallback(HAL_NotifyCallback callback, void* param, HAL_Bool initialNotify) {
  HAL_Value* value = nullptr;
  if (initialNotify) value = &MakeDouble(GetPulseLength());
  int32_t newUid = 0;
  auto newCallbacks = RegisterCallback(m_pulseLengthCallbacks, "PulseLength", callback, param, value, &newUid);
  if (newCallbacks == nullptr) return newUid;
  m_pulseLengthCallbacks = newCallbacks;
  return newUid;
}

void DIOData::CancelPulseLengthCallback(int32_t uid) {
  m_activeCallbacks = CancelCallback(m_pulseLengthCallbacks, uid);
}

void DIOData::InvokePulseLengthCallback(const HAL_Value* value) {
  InvokeCallback(m_pulseLengthCallbacks, "PulseLength", value);
}

double DIOData::GetPulseLength() {
  return m_pulseLength;
}

void DIOData::SetPulseLength(double pulseLength) {
  double oldValue = m_pulseLength.exchange(pulseLength);
  if (oldValue != pulseLength) {
    InvokePulseLengthCallback(&MakeDouble(pulseLength));
  }
}

int32_t DIOData::RegisterIsInputCallback(HAL_NotifyCallback callback, void* param, HAL_Bool initialNotify) {
  HAL_Value* value = nullptr;
  if (initialNotify) value = &MakeBoolean(GetIsInput());
  int32_t newUid = 0;
  auto newCallbacks = RegisterCallback(m_isInputCallbacks, "IsInput", callback, param, value, &newUid);
  if (newCallbacks == nullptr) return newUid;
  m_isInputCallbacks = newCallbacks;
  return newUid;
}

void DIOData::CancelIsInputCallback(int32_t uid) {
  m_activeCallbacks = CancelCallback(m_isInputCallbacks, uid);
}

void DIOData::InvokeIsInputCallback(const HAL_Value* value) {
  InvokeCallback(m_isInputCallbacks, "IsInput", value);
}

HAL_Bool DIOData::GetIsInput() {
  return m_isInput;
}

void DIOData::SetIsInput(HAL_Bool isInput) {
  HAL_Bool oldValue = m_isInput.exchange(isInput);
  if (oldValue != isInput) {
    InvokeIsInputCallback(&MakeBoolean(isInput));
  }
}

int32_t DIOData::RegisterFilterIndexCallback(HAL_NotifyCallback callback, void* param, HAL_Bool initialNotify) {
  HAL_Value* value = nullptr;
  if (initialNotify) value = &MakeInt(GetFilterIndex());
  int32_t newUid = 0;
  auto newCallbacks = RegisterCallback(m_filterIndexCallbacks, "FilterIndex", callback, param, value, &newUid);
  if (newCallbacks == nullptr) return newUid;
  m_filterIndexCallbacks = newCallbacks;
  return newUid;
}

void DIOData::CancelFilterIndexCallback(int32_t uid) {
  m_activeCallbacks = CancelCallback(m_filterIndexCallbacks, uid);
}

void DIOData::InvokeFilterIndexCallback(const HAL_Value* value) {
  InvokeCallback(m_filterIndexCallbacks, "FilterIndex", value);
}

int32_t DIOData::GetFilterIndex() {
  return m_filterIndex;
}

void DIOData::SetFilterIndex(int32_t filterIndex) {
  int32_t oldValue = m_filterIndex.exchange(filterIndex);
  if (oldValue != filterIndex) {
    InvokeFilterIndexCallback(&MakeInt(filterIndex));
  }
}

extern "C" {
int32_t HALSIM_RegisterDIOInitializedCallback(int32_t index, HAL_NotifyCallback callback, void* param, HAL_Bool initialNotify) {
  return SimDIOData[index]->RegisterInitializedCallback(callback, param, initialNotify);
}

void HALSIM_CancelDIOInitializedCallback(int32_t index, int32_t uid) {
  SimDIOData[index]->CancelInitializedCallback(uid);
}

HAL_Bool HALSIM_GetDIOInitialized(int32_t index) {
  return SimDIOData[index]->GetInitialized();
}

int32_t HALSIM_RegisterDIOValueCallback(int32_t index, HAL_NotifyCallback callback, void* param, HAL_Bool initialNotify) {
  return SimDIOData[index]->RegisterValueCallback(callback, param, initialNotify);
}

void HALSIM_CancelDIOValueCallback(int32_t index, int32_t uid) {
  SimDIOData[index]->CancelValueCallback(uid);
}

HAL_Bool HALSIM_GetDIOValue(int32_t index) {
  return SimDIOData[index]->GetValue();
}

void HALSIM_SetDIOValue(int32_t index, HAL_Bool value) {
  SimDIOData[index]->SetValue(value);
}

int32_t HALSIM_RegisterDIOPulseLengthCallback(int32_t index, HAL_NotifyCallback callback, void* param, HAL_Bool initialNotify) {
  return SimDIOData[index]->RegisterPulseLengthCallback(callback, param, initialNotify);
}

void HALSIM_CancelDIOPulseLengthCallback(int32_t index, int32_t uid) {
  SimDIOData[index]->CancelPulseLengthCallback(uid);
}

double HALSIM_GetDIOPulseLength(int32_t index) {
  return SimDIOData[index]->GetPulseLength();
}

int32_t HALSIM_RegisterDIOIsInputCallback(int32_t index, HAL_NotifyCallback callback, void* param, HAL_Bool initialNotify) {
  return SimDIOData[index]->RegisterIsInputCallback(callback, param, initialNotify);
}

void HALSIM_CancelDIOIsInputCallback(int32_t index, int32_t uid) {
  SimDIOData[index]->CancelIsInputCallback(uid);
}

HAL_Bool HALSIM_GetDIOIsInput(int32_t index) {
  return SimDIOData[index]->GetIsInput();
}

int32_t HALSIM_RegisterDIOFilterIndexCallback(int32_t index, HAL_NotifyCallback callback, void* param, HAL_Bool initialNotify) {
  return SimDIOData[index]->RegisterFilterIndexCallback(callback, param, initialNotify);
}

void HALSIM_CancelDIOFilterIndexCallback(int32_t index, int32_t uid) {
  SimDIOData[index]->CancelFilterIndexCallback(uid);
}

int32_t HALSIM_GetDIOFilterIndex(int32_t index) {
  return SimDIOData[index]->GetFilterIndex();
}

}
