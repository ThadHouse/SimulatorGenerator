#pragma once

#ifndef __FRC_ROBORIO__

#include "MockData/CanData.h"
#include <memory>
#include "CallbackStore.h"

namespace frc {
namespace sim {
class CanSim {
 public:
  CanSim(int index) {
    m_index = index;
  }

  std::unique_ptr<CallbackStore> RegisterCanSendMessageCallback(NotifyCallback callback, bool initialNotify) {
    auto store = std::make_unique<CallbackStore>(m_index, -1, callback, &HALSIM_CancelCanCanSendMessageCallback);
    store->setUid(HALSIM_RegisterCanCanSendMessageCallback(m_index, &CallbackStoreThunk, store.get(), initialNotify));
    return std::move(store);
  }
  double GetCanSendMessage() {
    return HALSIM_GetCanCanSendMessage(m_index);
  }
  void SetCanSendMessage(double canSendMessage) {
    HALSIM_SetCanCanSendMessage(m_index, canSendMessage);
  }

  std::unique_ptr<CallbackStore> RegisterCanReceiveMessageCallback(NotifyCallback callback, bool initialNotify) {
    auto store = std::make_unique<CallbackStore>(m_index, -1, callback, &HALSIM_CancelCanCanReceiveMessageCallback);
    store->setUid(HALSIM_RegisterCanCanReceiveMessageCallback(m_index, &CallbackStoreThunk, store.get(), initialNotify));
    return std::move(store);
  }
  double GetCanReceiveMessage() {
    return HALSIM_GetCanCanReceiveMessage(m_index);
  }
  void SetCanReceiveMessage(double canReceiveMessage) {
    HALSIM_SetCanCanReceiveMessage(m_index, canReceiveMessage);
  }

  std::unique_ptr<CallbackStore> RegisterCanOpenStreamCallback(NotifyCallback callback, bool initialNotify) {
    auto store = std::make_unique<CallbackStore>(m_index, -1, callback, &HALSIM_CancelCanCanOpenStreamCallback);
    store->setUid(HALSIM_RegisterCanCanOpenStreamCallback(m_index, &CallbackStoreThunk, store.get(), initialNotify));
    return std::move(store);
  }
  double GetCanOpenStream() {
    return HALSIM_GetCanCanOpenStream(m_index);
  }
  void SetCanOpenStream(double canOpenStream) {
    HALSIM_SetCanCanOpenStream(m_index, canOpenStream);
  }

  std::unique_ptr<CallbackStore> RegisterCanCloseStreamCallback(NotifyCallback callback, bool initialNotify) {
    auto store = std::make_unique<CallbackStore>(m_index, -1, callback, &HALSIM_CancelCanCanCloseStreamCallback);
    store->setUid(HALSIM_RegisterCanCanCloseStreamCallback(m_index, &CallbackStoreThunk, store.get(), initialNotify));
    return std::move(store);
  }
  double GetCanCloseStream() {
    return HALSIM_GetCanCanCloseStream(m_index);
  }
  void SetCanCloseStream(double canCloseStream) {
    HALSIM_SetCanCanCloseStream(m_index, canCloseStream);
  }

  std::unique_ptr<CallbackStore> RegisterCanReadStreamCallback(NotifyCallback callback, bool initialNotify) {
    auto store = std::make_unique<CallbackStore>(m_index, -1, callback, &HALSIM_CancelCanCanReadStreamCallback);
    store->setUid(HALSIM_RegisterCanCanReadStreamCallback(m_index, &CallbackStoreThunk, store.get(), initialNotify));
    return std::move(store);
  }
  double GetCanReadStream() {
    return HALSIM_GetCanCanReadStream(m_index);
  }
  void SetCanReadStream(double canReadStream) {
    HALSIM_SetCanCanReadStream(m_index, canReadStream);
  }

  std::unique_ptr<CallbackStore> RegisterCanGetCanStatusCallback(NotifyCallback callback, bool initialNotify) {
    auto store = std::make_unique<CallbackStore>(m_index, -1, callback, &HALSIM_CancelCanCanGetCanStatusCallback);
    store->setUid(HALSIM_RegisterCanCanGetCanStatusCallback(m_index, &CallbackStoreThunk, store.get(), initialNotify));
    return std::move(store);
  }
  double GetCanGetCanStatus() {
    return HALSIM_GetCanCanGetCanStatus(m_index);
  }
  void SetCanGetCanStatus(double canGetCanStatus) {
    HALSIM_SetCanCanGetCanStatus(m_index, canGetCanStatus);
  }

  void ResetData() {
    HALSIM_ResetCanData(m_index);
  }
 private:
  int m_index;
};
} // namespace sim
} // namespace frc
#endif // __FRC_ROBORIO__
