#include "PWMDataInternal.h"

#include "../PortsInternal.h"

using namespace hal;

std::unique_ptr<std::shared_ptr<PWMData>[]> hal::SimPWMData = std::make_unique<std::shared_ptr<PWMData>[]>(SIZEINHERE);
void PWMData::ResetData() {
  m_initialized = false;
  m_initializedCallbacks = nullptr;
  m_rawValue = 0;
  m_rawValueCallbacks = nullptr;
  m_speed = 0;
  m_speedCallbacks = nullptr;
  m_position = 0;
  m_positionCallbacks = nullptr;
  m_periodScale = 0;
  m_periodScaleCallbacks = nullptr;
  m_zeroLatch = false;
  m_zeroLatchCallbacks = nullptr;
}

int32_t PWMData::RegisterInitializedCallback(HAL_NotifyCallback callback, void* param, HAL_Bool initialNotify) {
  // Return an invalid value on a null callback
  if (callback == nullptr) return -1;
  const char* variableName = "Initialized";
  auto newCallbacks = std::make_shared<UidVector<NotifyListener>>(*m_initializedCallbacks);
  int uid = newCallbacks->emplace_back(variableName, param, callback);
  if (initialNotify) {
    callback(variableName, param, &MakeEnum(GetInitialized()));
  }
  m_activeCallbacks = newCallbacks;
  return uid;
}
void PWMData::CancelInitializedCallback(int32_t uid) {
  auto newCallbacks = std::make_shared<UidVector<NotifyListener>>(*m_initializedCallbacks);
  newCallbacks->erase(uid);
  m_activeCallbacks = newCallbacks;
}
void PWMData::InvokeInitializedCallback(const HAL_Value* value) {
  auto newCallbacks = m_initializedCallbacks;
  for (std::size_t i=0; i<newCallbacks->size(); ++i) {
    if (!(*newCallbacks)[i]) continue; //removed
    auto listener = (*newCallbacks)[i];
    listener.callback(listener.key.c_str(), listener.param, value);
  }
}

bool PWMData::GetInitialized() {
  return m_initialized;
}

void PWMData::SetInitialized(bool initialized) {
  bool oldValue = m_initialized.exchange(initialized);
  if (oldValue != initialized) {
    InvokeInitializedCallback(&MakeEnum(initialized));
  }
}

int32_t PWMData::RegisterRawValueCallback(HAL_NotifyCallback callback, void* param, HAL_Bool initialNotify) {
  // Return an invalid value on a null callback
  if (callback == nullptr) return -1;
  const char* variableName = "RawValue";
  auto newCallbacks = std::make_shared<UidVector<NotifyListener>>(*m_rawValueCallbacks);
  int uid = newCallbacks->emplace_back(variableName, param, callback);
  if (initialNotify) {
    callback(variableName, param, &MakeEnum(GetRawValue()));
  }
  m_activeCallbacks = newCallbacks;
  return uid;
}
void PWMData::CancelRawValueCallback(int32_t uid) {
  auto newCallbacks = std::make_shared<UidVector<NotifyListener>>(*m_rawValueCallbacks);
  newCallbacks->erase(uid);
  m_activeCallbacks = newCallbacks;
}
void PWMData::InvokeRawValueCallback(const HAL_Value* value) {
  auto newCallbacks = m_rawValueCallbacks;
  for (std::size_t i=0; i<newCallbacks->size(); ++i) {
    if (!(*newCallbacks)[i]) continue; //removed
    auto listener = (*newCallbacks)[i];
    listener.callback(listener.key.c_str(), listener.param, value);
  }
}

int PWMData::GetRawValue() {
  return m_rawValue;
}

void PWMData::SetRawValue(int rawValue) {
  int oldValue = m_rawValue.exchange(rawValue);
  if (oldValue != rawValue) {
    InvokeRawValueCallback(&MakeEnum(rawValue));
  }
}

int32_t PWMData::RegisterSpeedCallback(HAL_NotifyCallback callback, void* param, HAL_Bool initialNotify) {
  // Return an invalid value on a null callback
  if (callback == nullptr) return -1;
  const char* variableName = "Speed";
  auto newCallbacks = std::make_shared<UidVector<NotifyListener>>(*m_speedCallbacks);
  int uid = newCallbacks->emplace_back(variableName, param, callback);
  if (initialNotify) {
    callback(variableName, param, &MakeDouble(GetSpeed()));
  }
  m_activeCallbacks = newCallbacks;
  return uid;
}
void PWMData::CancelSpeedCallback(int32_t uid) {
  auto newCallbacks = std::make_shared<UidVector<NotifyListener>>(*m_speedCallbacks);
  newCallbacks->erase(uid);
  m_activeCallbacks = newCallbacks;
}
void PWMData::InvokeSpeedCallback(const HAL_Value* value) {
  auto newCallbacks = m_speedCallbacks;
  for (std::size_t i=0; i<newCallbacks->size(); ++i) {
    if (!(*newCallbacks)[i]) continue; //removed
    auto listener = (*newCallbacks)[i];
    listener.callback(listener.key.c_str(), listener.param, value);
  }
}

double PWMData::GetSpeed() {
  return m_speed;
}

void PWMData::SetSpeed(double speed) {
  double oldValue = m_speed.exchange(speed);
  if (oldValue != speed) {
    InvokeSpeedCallback(&MakeDouble(speed));
  }
}

int32_t PWMData::RegisterPositionCallback(HAL_NotifyCallback callback, void* param, HAL_Bool initialNotify) {
  // Return an invalid value on a null callback
  if (callback == nullptr) return -1;
  const char* variableName = "Position";
  auto newCallbacks = std::make_shared<UidVector<NotifyListener>>(*m_positionCallbacks);
  int uid = newCallbacks->emplace_back(variableName, param, callback);
  if (initialNotify) {
    callback(variableName, param, &MakeDouble(GetPosition()));
  }
  m_activeCallbacks = newCallbacks;
  return uid;
}
void PWMData::CancelPositionCallback(int32_t uid) {
  auto newCallbacks = std::make_shared<UidVector<NotifyListener>>(*m_positionCallbacks);
  newCallbacks->erase(uid);
  m_activeCallbacks = newCallbacks;
}
void PWMData::InvokePositionCallback(const HAL_Value* value) {
  auto newCallbacks = m_positionCallbacks;
  for (std::size_t i=0; i<newCallbacks->size(); ++i) {
    if (!(*newCallbacks)[i]) continue; //removed
    auto listener = (*newCallbacks)[i];
    listener.callback(listener.key.c_str(), listener.param, value);
  }
}

double PWMData::GetPosition() {
  return m_position;
}

void PWMData::SetPosition(double position) {
  double oldValue = m_position.exchange(position);
  if (oldValue != position) {
    InvokePositionCallback(&MakeDouble(position));
  }
}

int32_t PWMData::RegisterPeriodScaleCallback(HAL_NotifyCallback callback, void* param, HAL_Bool initialNotify) {
  // Return an invalid value on a null callback
  if (callback == nullptr) return -1;
  const char* variableName = "PeriodScale";
  auto newCallbacks = std::make_shared<UidVector<NotifyListener>>(*m_periodScaleCallbacks);
  int uid = newCallbacks->emplace_back(variableName, param, callback);
  if (initialNotify) {
    callback(variableName, param, &MakeEnum(GetPeriodScale()));
  }
  m_activeCallbacks = newCallbacks;
  return uid;
}
void PWMData::CancelPeriodScaleCallback(int32_t uid) {
  auto newCallbacks = std::make_shared<UidVector<NotifyListener>>(*m_periodScaleCallbacks);
  newCallbacks->erase(uid);
  m_activeCallbacks = newCallbacks;
}
void PWMData::InvokePeriodScaleCallback(const HAL_Value* value) {
  auto newCallbacks = m_periodScaleCallbacks;
  for (std::size_t i=0; i<newCallbacks->size(); ++i) {
    if (!(*newCallbacks)[i]) continue; //removed
    auto listener = (*newCallbacks)[i];
    listener.callback(listener.key.c_str(), listener.param, value);
  }
}

int PWMData::GetPeriodScale() {
  return m_periodScale;
}

void PWMData::SetPeriodScale(int periodScale) {
  int oldValue = m_periodScale.exchange(periodScale);
  if (oldValue != periodScale) {
    InvokePeriodScaleCallback(&MakeEnum(periodScale));
  }
}

int32_t PWMData::RegisterZeroLatchCallback(HAL_NotifyCallback callback, void* param, HAL_Bool initialNotify) {
  // Return an invalid value on a null callback
  if (callback == nullptr) return -1;
  const char* variableName = "ZeroLatch";
  auto newCallbacks = std::make_shared<UidVector<NotifyListener>>(*m_zeroLatchCallbacks);
  int uid = newCallbacks->emplace_back(variableName, param, callback);
  if (initialNotify) {
    callback(variableName, param, &MakeEnum(GetZeroLatch()));
  }
  m_activeCallbacks = newCallbacks;
  return uid;
}
void PWMData::CancelZeroLatchCallback(int32_t uid) {
  auto newCallbacks = std::make_shared<UidVector<NotifyListener>>(*m_zeroLatchCallbacks);
  newCallbacks->erase(uid);
  m_activeCallbacks = newCallbacks;
}
void PWMData::InvokeZeroLatchCallback(const HAL_Value* value) {
  auto newCallbacks = m_zeroLatchCallbacks;
  for (std::size_t i=0; i<newCallbacks->size(); ++i) {
    if (!(*newCallbacks)[i]) continue; //removed
    auto listener = (*newCallbacks)[i];
    listener.callback(listener.key.c_str(), listener.param, value);
  }
}

bool PWMData::GetZeroLatch() {
  return m_zeroLatch;
}

void PWMData::SetZeroLatch(bool zeroLatch) {
  bool oldValue = m_zeroLatch.exchange(zeroLatch);
  if (oldValue != zeroLatch) {
    InvokeZeroLatchCallback(&MakeEnum(zeroLatch));
  }
}

extern "C" {
int32_t HALSIM_RegisterPWMInitializedCallback(int32_t index, HAL_NotifyCallback callback, void* param, HAL_Bool initialNotify) {
  return SimPWMData[index]->RegisterInitializedCallback(callback, param, initialNotify);
}

void HALSIM_CancelPWMInitializedCallback(int32_t index, int32_t uid) {
  SimPWMData[index]->CancelInitializedCallback(uid);
}

bool HALSIM_GetPWMInitialized(int32_t index) {
  return SimPWMData[index]->GetInitialized();
}

int32_t HALSIM_RegisterPWMRawValueCallback(int32_t index, HAL_NotifyCallback callback, void* param, HAL_Bool initialNotify) {
  return SimPWMData[index]->RegisterRawValueCallback(callback, param, initialNotify);
}

void HALSIM_CancelPWMRawValueCallback(int32_t index, int32_t uid) {
  SimPWMData[index]->CancelRawValueCallback(uid);
}

int HALSIM_GetPWMRawValue(int32_t index) {
  return SimPWMData[index]->GetRawValue();
}

void HALSIM_SetPWMRawValue(int32_t index, int rawValue) {
  SimPWMData[index]->SetRawValue(rawValue);
}

int32_t HALSIM_RegisterPWMSpeedCallback(int32_t index, HAL_NotifyCallback callback, void* param, HAL_Bool initialNotify) {
  return SimPWMData[index]->RegisterSpeedCallback(callback, param, initialNotify);
}

void HALSIM_CancelPWMSpeedCallback(int32_t index, int32_t uid) {
  SimPWMData[index]->CancelSpeedCallback(uid);
}

double HALSIM_GetPWMSpeed(int32_t index) {
  return SimPWMData[index]->GetSpeed();
}

void HALSIM_SetPWMSpeed(int32_t index, double speed) {
  SimPWMData[index]->SetSpeed(speed);
}

int32_t HALSIM_RegisterPWMPositionCallback(int32_t index, HAL_NotifyCallback callback, void* param, HAL_Bool initialNotify) {
  return SimPWMData[index]->RegisterPositionCallback(callback, param, initialNotify);
}

void HALSIM_CancelPWMPositionCallback(int32_t index, int32_t uid) {
  SimPWMData[index]->CancelPositionCallback(uid);
}

double HALSIM_GetPWMPosition(int32_t index) {
  return SimPWMData[index]->GetPosition();
}

void HALSIM_SetPWMPosition(int32_t index, double position) {
  SimPWMData[index]->SetPosition(position);
}

int32_t HALSIM_RegisterPWMPeriodScaleCallback(int32_t index, HAL_NotifyCallback callback, void* param, HAL_Bool initialNotify) {
  return SimPWMData[index]->RegisterPeriodScaleCallback(callback, param, initialNotify);
}

void HALSIM_CancelPWMPeriodScaleCallback(int32_t index, int32_t uid) {
  SimPWMData[index]->CancelPeriodScaleCallback(uid);
}

int HALSIM_GetPWMPeriodScale(int32_t index) {
  return SimPWMData[index]->GetPeriodScale();
}

int32_t HALSIM_RegisterPWMZeroLatchCallback(int32_t index, HAL_NotifyCallback callback, void* param, HAL_Bool initialNotify) {
  return SimPWMData[index]->RegisterZeroLatchCallback(callback, param, initialNotify);
}

void HALSIM_CancelPWMZeroLatchCallback(int32_t index, int32_t uid) {
  SimPWMData[index]->CancelZeroLatchCallback(uid);
}

bool HALSIM_GetPWMZeroLatch(int32_t index) {
  return SimPWMData[index]->GetZeroLatch();
}

}
