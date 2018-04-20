#pragma once

#include <atomic>
#include <memory>

#include "MockData/CanData.h"
#include "MockData/NotifyListenerVector.h"

namespace hal {
class CanData {
 public:
  int32_t RegisterCanSendMessageCallback(HAL_NotifyCallback callback, void* param, HAL_Bool initialNotify);
  void CancelCanSendMessageCallback(int32_t uid);
  void InvokeCanSendMessageCallback(HAL_Value value);
  double GetCanSendMessage();
  void SetCanSendMessage(double canSendMessage);

  int32_t RegisterCanReceiveMessageCallback(HAL_NotifyCallback callback, void* param, HAL_Bool initialNotify);
  void CancelCanReceiveMessageCallback(int32_t uid);
  void InvokeCanReceiveMessageCallback(HAL_Value value);
  double GetCanReceiveMessage();
  void SetCanReceiveMessage(double canReceiveMessage);

  int32_t RegisterCanOpenStreamCallback(HAL_NotifyCallback callback, void* param, HAL_Bool initialNotify);
  void CancelCanOpenStreamCallback(int32_t uid);
  void InvokeCanOpenStreamCallback(HAL_Value value);
  double GetCanOpenStream();
  void SetCanOpenStream(double canOpenStream);

  int32_t RegisterCanCloseStreamCallback(HAL_NotifyCallback callback, void* param, HAL_Bool initialNotify);
  void CancelCanCloseStreamCallback(int32_t uid);
  void InvokeCanCloseStreamCallback(HAL_Value value);
  double GetCanCloseStream();
  void SetCanCloseStream(double canCloseStream);

  int32_t RegisterCanReadStreamCallback(HAL_NotifyCallback callback, void* param, HAL_Bool initialNotify);
  void CancelCanReadStreamCallback(int32_t uid);
  void InvokeCanReadStreamCallback(HAL_Value value);
  double GetCanReadStream();
  void SetCanReadStream(double canReadStream);

  int32_t RegisterCanGetCanStatusCallback(HAL_NotifyCallback callback, void* param, HAL_Bool initialNotify);
  void CancelCanGetCanStatusCallback(int32_t uid);
  void InvokeCanGetCanStatusCallback(HAL_Value value);
  double GetCanGetCanStatus();
  void SetCanGetCanStatus(double canGetCanStatus);

  virtual void ResetData();
 private:
  std::mutex m_registerMutex;
  std::atomic<double> m_canSendMessage {0.0};
  std::shared_ptr<NotifyListenerVector> m_canSendMessageCallbacks = nullptr;
  std::atomic<double> m_canReceiveMessage {0.0};
  std::shared_ptr<NotifyListenerVector> m_canReceiveMessageCallbacks = nullptr;
  std::atomic<double> m_canOpenStream {0.0};
  std::shared_ptr<NotifyListenerVector> m_canOpenStreamCallbacks = nullptr;
  std::atomic<double> m_canCloseStream {0.0};
  std::shared_ptr<NotifyListenerVector> m_canCloseStreamCallbacks = nullptr;
  std::atomic<double> m_canReadStream {0.0};
  std::shared_ptr<NotifyListenerVector> m_canReadStreamCallbacks = nullptr;
  std::atomic<double> m_canGetCanStatus {0.0};
  std::shared_ptr<NotifyListenerVector> m_canGetCanStatusCallbacks = nullptr;
};
extern CanData SimCanData[];
}
