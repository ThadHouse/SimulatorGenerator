#include "CanDataInternal.h"

#include "NotifyCallbackHelpers.h"
#include "../PortsInternal.h"

using namespace hal;

CanData hal::SimCanData[1];
void CanData::ResetData() {
  m_canSendMessage = 0.0;
  m_canSendMessageCallbacks = nullptr;
  m_canReceiveMessage = 0.0;
  m_canReceiveMessageCallbacks = nullptr;
  m_canOpenStream = 0.0;
  m_canOpenStreamCallbacks = nullptr;
  m_canCloseStream = 0.0;
  m_canCloseStreamCallbacks = nullptr;
  m_canReadStream = 0.0;
  m_canReadStreamCallbacks = nullptr;
  m_canGetCanStatus = 0.0;
  m_canGetCanStatusCallbacks = nullptr;
}

int32_t CanData::RegisterCanSendMessageCallback(HAL_NotifyCallback callback, void* param, HAL_Bool initialNotify) {
  // Must return -1 on a null callback for error handling
  if (callback == nullptr) return -1;
  int32_t newUid = 0;
 {
    std::lock_guard<std::mutex> lock(m_registerMutex);
    m_canSendMessageCallbacks = RegisterCallback(m_canSendMessageCallbacks, "CanSendMessage", callback, param, &newUid);
  }
  if (initialNotify) {
    // We know that the callback is not null because of earlier null check
    HAL_Value value = MakeDouble(GetCanSendMessage());
    callback("CanSendMessage", param, &value);
  }
  return newUid;
}

void CanData::CancelCanSendMessageCallback(int32_t uid) {
  m_canSendMessageCallbacks = CancelCallback(m_canSendMessageCallbacks, uid);
}

void CanData::InvokeCanSendMessageCallback(HAL_Value value) {
  InvokeCallback(m_canSendMessageCallbacks, "CanSendMessage", &value);
}

double CanData::GetCanSendMessage() {
  return m_canSendMessage;
}

void CanData::SetCanSendMessage(double canSendMessage) {
  double oldValue = m_canSendMessage.exchange(canSendMessage);
  if (oldValue != canSendMessage) {
    InvokeCanSendMessageCallback(MakeDouble(canSendMessage));
  }
}

int32_t CanData::RegisterCanReceiveMessageCallback(HAL_NotifyCallback callback, void* param, HAL_Bool initialNotify) {
  // Must return -1 on a null callback for error handling
  if (callback == nullptr) return -1;
  int32_t newUid = 0;
 {
    std::lock_guard<std::mutex> lock(m_registerMutex);
    m_canReceiveMessageCallbacks = RegisterCallback(m_canReceiveMessageCallbacks, "CanReceiveMessage", callback, param, &newUid);
  }
  if (initialNotify) {
    // We know that the callback is not null because of earlier null check
    HAL_Value value = MakeDouble(GetCanReceiveMessage());
    callback("CanReceiveMessage", param, &value);
  }
  return newUid;
}

void CanData::CancelCanReceiveMessageCallback(int32_t uid) {
  m_canReceiveMessageCallbacks = CancelCallback(m_canReceiveMessageCallbacks, uid);
}

void CanData::InvokeCanReceiveMessageCallback(HAL_Value value) {
  InvokeCallback(m_canReceiveMessageCallbacks, "CanReceiveMessage", &value);
}

double CanData::GetCanReceiveMessage() {
  return m_canReceiveMessage;
}

void CanData::SetCanReceiveMessage(double canReceiveMessage) {
  double oldValue = m_canReceiveMessage.exchange(canReceiveMessage);
  if (oldValue != canReceiveMessage) {
    InvokeCanReceiveMessageCallback(MakeDouble(canReceiveMessage));
  }
}

int32_t CanData::RegisterCanOpenStreamCallback(HAL_NotifyCallback callback, void* param, HAL_Bool initialNotify) {
  // Must return -1 on a null callback for error handling
  if (callback == nullptr) return -1;
  int32_t newUid = 0;
 {
    std::lock_guard<std::mutex> lock(m_registerMutex);
    m_canOpenStreamCallbacks = RegisterCallback(m_canOpenStreamCallbacks, "CanOpenStream", callback, param, &newUid);
  }
  if (initialNotify) {
    // We know that the callback is not null because of earlier null check
    HAL_Value value = MakeDouble(GetCanOpenStream());
    callback("CanOpenStream", param, &value);
  }
  return newUid;
}

void CanData::CancelCanOpenStreamCallback(int32_t uid) {
  m_canOpenStreamCallbacks = CancelCallback(m_canOpenStreamCallbacks, uid);
}

void CanData::InvokeCanOpenStreamCallback(HAL_Value value) {
  InvokeCallback(m_canOpenStreamCallbacks, "CanOpenStream", &value);
}

double CanData::GetCanOpenStream() {
  return m_canOpenStream;
}

void CanData::SetCanOpenStream(double canOpenStream) {
  double oldValue = m_canOpenStream.exchange(canOpenStream);
  if (oldValue != canOpenStream) {
    InvokeCanOpenStreamCallback(MakeDouble(canOpenStream));
  }
}

int32_t CanData::RegisterCanCloseStreamCallback(HAL_NotifyCallback callback, void* param, HAL_Bool initialNotify) {
  // Must return -1 on a null callback for error handling
  if (callback == nullptr) return -1;
  int32_t newUid = 0;
 {
    std::lock_guard<std::mutex> lock(m_registerMutex);
    m_canCloseStreamCallbacks = RegisterCallback(m_canCloseStreamCallbacks, "CanCloseStream", callback, param, &newUid);
  }
  if (initialNotify) {
    // We know that the callback is not null because of earlier null check
    HAL_Value value = MakeDouble(GetCanCloseStream());
    callback("CanCloseStream", param, &value);
  }
  return newUid;
}

void CanData::CancelCanCloseStreamCallback(int32_t uid) {
  m_canCloseStreamCallbacks = CancelCallback(m_canCloseStreamCallbacks, uid);
}

void CanData::InvokeCanCloseStreamCallback(HAL_Value value) {
  InvokeCallback(m_canCloseStreamCallbacks, "CanCloseStream", &value);
}

double CanData::GetCanCloseStream() {
  return m_canCloseStream;
}

void CanData::SetCanCloseStream(double canCloseStream) {
  double oldValue = m_canCloseStream.exchange(canCloseStream);
  if (oldValue != canCloseStream) {
    InvokeCanCloseStreamCallback(MakeDouble(canCloseStream));
  }
}

int32_t CanData::RegisterCanReadStreamCallback(HAL_NotifyCallback callback, void* param, HAL_Bool initialNotify) {
  // Must return -1 on a null callback for error handling
  if (callback == nullptr) return -1;
  int32_t newUid = 0;
 {
    std::lock_guard<std::mutex> lock(m_registerMutex);
    m_canReadStreamCallbacks = RegisterCallback(m_canReadStreamCallbacks, "CanReadStream", callback, param, &newUid);
  }
  if (initialNotify) {
    // We know that the callback is not null because of earlier null check
    HAL_Value value = MakeDouble(GetCanReadStream());
    callback("CanReadStream", param, &value);
  }
  return newUid;
}

void CanData::CancelCanReadStreamCallback(int32_t uid) {
  m_canReadStreamCallbacks = CancelCallback(m_canReadStreamCallbacks, uid);
}

void CanData::InvokeCanReadStreamCallback(HAL_Value value) {
  InvokeCallback(m_canReadStreamCallbacks, "CanReadStream", &value);
}

double CanData::GetCanReadStream() {
  return m_canReadStream;
}

void CanData::SetCanReadStream(double canReadStream) {
  double oldValue = m_canReadStream.exchange(canReadStream);
  if (oldValue != canReadStream) {
    InvokeCanReadStreamCallback(MakeDouble(canReadStream));
  }
}

int32_t CanData::RegisterCanGetCanStatusCallback(HAL_NotifyCallback callback, void* param, HAL_Bool initialNotify) {
  // Must return -1 on a null callback for error handling
  if (callback == nullptr) return -1;
  int32_t newUid = 0;
 {
    std::lock_guard<std::mutex> lock(m_registerMutex);
    m_canGetCanStatusCallbacks = RegisterCallback(m_canGetCanStatusCallbacks, "CanGetCanStatus", callback, param, &newUid);
  }
  if (initialNotify) {
    // We know that the callback is not null because of earlier null check
    HAL_Value value = MakeDouble(GetCanGetCanStatus());
    callback("CanGetCanStatus", param, &value);
  }
  return newUid;
}

void CanData::CancelCanGetCanStatusCallback(int32_t uid) {
  m_canGetCanStatusCallbacks = CancelCallback(m_canGetCanStatusCallbacks, uid);
}

void CanData::InvokeCanGetCanStatusCallback(HAL_Value value) {
  InvokeCallback(m_canGetCanStatusCallbacks, "CanGetCanStatus", &value);
}

double CanData::GetCanGetCanStatus() {
  return m_canGetCanStatus;
}

void CanData::SetCanGetCanStatus(double canGetCanStatus) {
  double oldValue = m_canGetCanStatus.exchange(canGetCanStatus);
  if (oldValue != canGetCanStatus) {
    InvokeCanGetCanStatusCallback(MakeDouble(canGetCanStatus));
  }
}

extern "C" {
void HALSIM_ResetCanData(int32_t index) {
  SimCanData[index].ResetData();
}

int32_t HALSIM_RegisterCanCanSendMessageCallback(int32_t index, HAL_NotifyCallback callback, void* param, HAL_Bool initialNotify) {
  return SimCanData[index].RegisterCanSendMessageCallback(callback, param, initialNotify);
}

void HALSIM_CancelCanCanSendMessageCallback(int32_t index, int32_t uid) {
  SimCanData[index].CancelCanSendMessageCallback(uid);
}

double HALSIM_GetCanCanSendMessage(int32_t index) {
  return SimCanData[index].GetCanSendMessage();
}

int32_t HALSIM_RegisterCanCanReceiveMessageCallback(int32_t index, HAL_NotifyCallback callback, void* param, HAL_Bool initialNotify) {
  return SimCanData[index].RegisterCanReceiveMessageCallback(callback, param, initialNotify);
}

void HALSIM_CancelCanCanReceiveMessageCallback(int32_t index, int32_t uid) {
  SimCanData[index].CancelCanReceiveMessageCallback(uid);
}

double HALSIM_GetCanCanReceiveMessage(int32_t index) {
  return SimCanData[index].GetCanReceiveMessage();
}

int32_t HALSIM_RegisterCanCanOpenStreamCallback(int32_t index, HAL_NotifyCallback callback, void* param, HAL_Bool initialNotify) {
  return SimCanData[index].RegisterCanOpenStreamCallback(callback, param, initialNotify);
}

void HALSIM_CancelCanCanOpenStreamCallback(int32_t index, int32_t uid) {
  SimCanData[index].CancelCanOpenStreamCallback(uid);
}

double HALSIM_GetCanCanOpenStream(int32_t index) {
  return SimCanData[index].GetCanOpenStream();
}

int32_t HALSIM_RegisterCanCanCloseStreamCallback(int32_t index, HAL_NotifyCallback callback, void* param, HAL_Bool initialNotify) {
  return SimCanData[index].RegisterCanCloseStreamCallback(callback, param, initialNotify);
}

void HALSIM_CancelCanCanCloseStreamCallback(int32_t index, int32_t uid) {
  SimCanData[index].CancelCanCloseStreamCallback(uid);
}

double HALSIM_GetCanCanCloseStream(int32_t index) {
  return SimCanData[index].GetCanCloseStream();
}

int32_t HALSIM_RegisterCanCanReadStreamCallback(int32_t index, HAL_NotifyCallback callback, void* param, HAL_Bool initialNotify) {
  return SimCanData[index].RegisterCanReadStreamCallback(callback, param, initialNotify);
}

void HALSIM_CancelCanCanReadStreamCallback(int32_t index, int32_t uid) {
  SimCanData[index].CancelCanReadStreamCallback(uid);
}

double HALSIM_GetCanCanReadStream(int32_t index) {
  return SimCanData[index].GetCanReadStream();
}

int32_t HALSIM_RegisterCanCanGetCanStatusCallback(int32_t index, HAL_NotifyCallback callback, void* param, HAL_Bool initialNotify) {
  return SimCanData[index].RegisterCanGetCanStatusCallback(callback, param, initialNotify);
}

void HALSIM_CancelCanCanGetCanStatusCallback(int32_t index, int32_t uid) {
  SimCanData[index].CancelCanGetCanStatusCallback(uid);
}

double HALSIM_GetCanCanGetCanStatus(int32_t index) {
  return SimCanData[index].GetCanGetCanStatus();
}

}
