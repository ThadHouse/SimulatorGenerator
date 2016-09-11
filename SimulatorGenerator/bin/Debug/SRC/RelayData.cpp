#include "RelayDataInternal.h"

#include "../PortsInternal.h"

using namespace hal;

std::unique_ptr<std::shared_ptr<RelayData>[]> hal::SimRelayData = std::make_unique<std::shared_ptr<RelayData>[]>(SIZEINHERE);
void RelayData::ResetData() {
  m_initialized = false;
  m_initializedCallbacks = nullptr;
  m_forward = false;
  m_forwardCallbacks = nullptr;
  m_reverse = false;
  m_reverseCallbacks = nullptr;
}

int32_t RelayData::RegisterInitializedCallback(HAL_NotifyCallback callback, void* param, HAL_Bool initialNotify) {
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
void RelayData::CancelInitializedCallback(int32_t uid) {
  auto newCallbacks = std::make_shared<UidVector<NotifyListener>>(*m_initializedCallbacks);
  newCallbacks->erase(uid);
  m_activeCallbacks = newCallbacks;
}
void RelayData::InvokeInitializedCallback(const HAL_Value* value) {
  auto newCallbacks = m_initializedCallbacks;
  for (std::size_t i=0; i<newCallbacks->size(); ++i) {
    if (!(*newCallbacks)[i]) continue; //removed
    auto listener = (*newCallbacks)[i];
    listener.callback(listener.key.c_str(), listener.param, value);
  }
}

HAL_Bool RelayData::GetInitialized() {
  return m_initialized;
}

void RelayData::SetInitialized(HAL_Bool initialized) {
  HAL_Bool oldValue = m_initialized.exchange(initialized);
  if (oldValue != initialized) {
    InvokeInitializedCallback(&MakeBoolean(initialized));
  }
}

int32_t RelayData::RegisterForwardCallback(HAL_NotifyCallback callback, void* param, HAL_Bool initialNotify) {
  // Return an invalid value on a null callback
  if (callback == nullptr) return -1;
  const char* variableName = "Forward";
  auto newCallbacks = std::make_shared<UidVector<NotifyListener>>(*m_forwardCallbacks);
  int uid = newCallbacks->emplace_back(variableName, param, callback);
  if (initialNotify) {
    callback(variableName, param, &MakeBoolean(GetForward()));
  }
  m_activeCallbacks = newCallbacks;
  return uid;
}
void RelayData::CancelForwardCallback(int32_t uid) {
  auto newCallbacks = std::make_shared<UidVector<NotifyListener>>(*m_forwardCallbacks);
  newCallbacks->erase(uid);
  m_activeCallbacks = newCallbacks;
}
void RelayData::InvokeForwardCallback(const HAL_Value* value) {
  auto newCallbacks = m_forwardCallbacks;
  for (std::size_t i=0; i<newCallbacks->size(); ++i) {
    if (!(*newCallbacks)[i]) continue; //removed
    auto listener = (*newCallbacks)[i];
    listener.callback(listener.key.c_str(), listener.param, value);
  }
}

HAL_Bool RelayData::GetForward() {
  return m_forward;
}

void RelayData::SetForward(HAL_Bool forward) {
  HAL_Bool oldValue = m_forward.exchange(forward);
  if (oldValue != forward) {
    InvokeForwardCallback(&MakeBoolean(forward));
  }
}

int32_t RelayData::RegisterReverseCallback(HAL_NotifyCallback callback, void* param, HAL_Bool initialNotify) {
  // Return an invalid value on a null callback
  if (callback == nullptr) return -1;
  const char* variableName = "Reverse";
  auto newCallbacks = std::make_shared<UidVector<NotifyListener>>(*m_reverseCallbacks);
  int uid = newCallbacks->emplace_back(variableName, param, callback);
  if (initialNotify) {
    callback(variableName, param, &MakeBoolean(GetReverse()));
  }
  m_activeCallbacks = newCallbacks;
  return uid;
}
void RelayData::CancelReverseCallback(int32_t uid) {
  auto newCallbacks = std::make_shared<UidVector<NotifyListener>>(*m_reverseCallbacks);
  newCallbacks->erase(uid);
  m_activeCallbacks = newCallbacks;
}
void RelayData::InvokeReverseCallback(const HAL_Value* value) {
  auto newCallbacks = m_reverseCallbacks;
  for (std::size_t i=0; i<newCallbacks->size(); ++i) {
    if (!(*newCallbacks)[i]) continue; //removed
    auto listener = (*newCallbacks)[i];
    listener.callback(listener.key.c_str(), listener.param, value);
  }
}

HAL_Bool RelayData::GetReverse() {
  return m_reverse;
}

void RelayData::SetReverse(HAL_Bool reverse) {
  HAL_Bool oldValue = m_reverse.exchange(reverse);
  if (oldValue != reverse) {
    InvokeReverseCallback(&MakeBoolean(reverse));
  }
}

extern "C" {
int32_t HALSIM_RegisterRelayInitializedCallback(int32_t index, HAL_NotifyCallback callback, void* param, HAL_Bool initialNotify) {
  return SimRelayData[index]->RegisterInitializedCallback(callback, param, initialNotify);
}

void HALSIM_CancelRelayInitializedCallback(int32_t index, int32_t uid) {
  SimRelayData[index]->CancelInitializedCallback(uid);
}

HAL_Bool HALSIM_GetRelayInitialized(int32_t index) {
  return SimRelayData[index]->GetInitialized();
}

int32_t HALSIM_RegisterRelayForwardCallback(int32_t index, HAL_NotifyCallback callback, void* param, HAL_Bool initialNotify) {
  return SimRelayData[index]->RegisterForwardCallback(callback, param, initialNotify);
}

void HALSIM_CancelRelayForwardCallback(int32_t index, int32_t uid) {
  SimRelayData[index]->CancelForwardCallback(uid);
}

HAL_Bool HALSIM_GetRelayForward(int32_t index) {
  return SimRelayData[index]->GetForward();
}

int32_t HALSIM_RegisterRelayReverseCallback(int32_t index, HAL_NotifyCallback callback, void* param, HAL_Bool initialNotify) {
  return SimRelayData[index]->RegisterReverseCallback(callback, param, initialNotify);
}

void HALSIM_CancelRelayReverseCallback(int32_t index, int32_t uid) {
  SimRelayData[index]->CancelReverseCallback(uid);
}

HAL_Bool HALSIM_GetRelayReverse(int32_t index) {
  return SimRelayData[index]->GetReverse();
}

}
