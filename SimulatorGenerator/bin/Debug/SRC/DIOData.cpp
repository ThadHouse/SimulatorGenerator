#include "DIODataInternal.h"

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
void DIOData::CancelInitializedCallback(int32_t uid) {
  auto newCallbacks = std::make_shared<UidVector<NotifyListener>>(*m_initializedCallbacks);
  newCallbacks->erase(uid);
  m_activeCallbacks = newCallbacks;
}
void DIOData::InvokeInitializedCallback(const HAL_Value* value) {
  auto newCallbacks = m_initializedCallbacks;
  for (std::size_t i=0; i<newCallbacks->size(); ++i) {
    if (!(*newCallbacks)[i]) continue; //removed
    auto listener = (*newCallbacks)[i];
    listener.callback(listener.key.c_str(), listener.param, value);
  }
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
  // Return an invalid value on a null callback
  if (callback == nullptr) return -1;
  const char* variableName = "Value";
  auto newCallbacks = std::make_shared<UidVector<NotifyListener>>(*m_valueCallbacks);
  int uid = newCallbacks->emplace_back(variableName, param, callback);
  if (initialNotify) {
    callback(variableName, param, &MakeBoolean(GetValue()));
  }
  m_activeCallbacks = newCallbacks;
  return uid;
}
void DIOData::CancelValueCallback(int32_t uid) {
  auto newCallbacks = std::make_shared<UidVector<NotifyListener>>(*m_valueCallbacks);
  newCallbacks->erase(uid);
  m_activeCallbacks = newCallbacks;
}
void DIOData::InvokeValueCallback(const HAL_Value* value) {
  auto newCallbacks = m_valueCallbacks;
  for (std::size_t i=0; i<newCallbacks->size(); ++i) {
    if (!(*newCallbacks)[i]) continue; //removed
    auto listener = (*newCallbacks)[i];
    listener.callback(listener.key.c_str(), listener.param, value);
  }
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
  // Return an invalid value on a null callback
  if (callback == nullptr) return -1;
  const char* variableName = "PulseLength";
  auto newCallbacks = std::make_shared<UidVector<NotifyListener>>(*m_pulseLengthCallbacks);
  int uid = newCallbacks->emplace_back(variableName, param, callback);
  if (initialNotify) {
    callback(variableName, param, &MakeDouble(GetPulseLength()));
  }
  m_activeCallbacks = newCallbacks;
  return uid;
}
void DIOData::CancelPulseLengthCallback(int32_t uid) {
  auto newCallbacks = std::make_shared<UidVector<NotifyListener>>(*m_pulseLengthCallbacks);
  newCallbacks->erase(uid);
  m_activeCallbacks = newCallbacks;
}
void DIOData::InvokePulseLengthCallback(const HAL_Value* value) {
  auto newCallbacks = m_pulseLengthCallbacks;
  for (std::size_t i=0; i<newCallbacks->size(); ++i) {
    if (!(*newCallbacks)[i]) continue; //removed
    auto listener = (*newCallbacks)[i];
    listener.callback(listener.key.c_str(), listener.param, value);
  }
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
  // Return an invalid value on a null callback
  if (callback == nullptr) return -1;
  const char* variableName = "IsInput";
  auto newCallbacks = std::make_shared<UidVector<NotifyListener>>(*m_isInputCallbacks);
  int uid = newCallbacks->emplace_back(variableName, param, callback);
  if (initialNotify) {
    callback(variableName, param, &MakeBoolean(GetIsInput()));
  }
  m_activeCallbacks = newCallbacks;
  return uid;
}
void DIOData::CancelIsInputCallback(int32_t uid) {
  auto newCallbacks = std::make_shared<UidVector<NotifyListener>>(*m_isInputCallbacks);
  newCallbacks->erase(uid);
  m_activeCallbacks = newCallbacks;
}
void DIOData::InvokeIsInputCallback(const HAL_Value* value) {
  auto newCallbacks = m_isInputCallbacks;
  for (std::size_t i=0; i<newCallbacks->size(); ++i) {
    if (!(*newCallbacks)[i]) continue; //removed
    auto listener = (*newCallbacks)[i];
    listener.callback(listener.key.c_str(), listener.param, value);
  }
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
  // Return an invalid value on a null callback
  if (callback == nullptr) return -1;
  const char* variableName = "FilterIndex";
  auto newCallbacks = std::make_shared<UidVector<NotifyListener>>(*m_filterIndexCallbacks);
  int uid = newCallbacks->emplace_back(variableName, param, callback);
  if (initialNotify) {
    callback(variableName, param, &MakeInt(GetFilterIndex()));
  }
  m_activeCallbacks = newCallbacks;
  return uid;
}
void DIOData::CancelFilterIndexCallback(int32_t uid) {
  auto newCallbacks = std::make_shared<UidVector<NotifyListener>>(*m_filterIndexCallbacks);
  newCallbacks->erase(uid);
  m_activeCallbacks = newCallbacks;
}
void DIOData::InvokeFilterIndexCallback(const HAL_Value* value) {
  auto newCallbacks = m_filterIndexCallbacks;
  for (std::size_t i=0; i<newCallbacks->size(); ++i) {
    if (!(*newCallbacks)[i]) continue; //removed
    auto listener = (*newCallbacks)[i];
    listener.callback(listener.key.c_str(), listener.param, value);
  }
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
