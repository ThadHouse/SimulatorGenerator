#include "RoboRioDataInternal.h"

#include "../PortsInternal.h"

using namespace hal;

std::unique_ptr<std::shared_ptr<RoboRioData>[]> hal::SimRoboRioData = std::make_unique<std::shared_ptr<RoboRioData>[]>(SIZEINHERE);
void RoboRioData::ResetData() {
  m_fPGAButton = false;
  m_fPGAButtonCallbacks = nullptr;
  m_vInVoltage = 0.0;
  m_vInVoltageCallbacks = nullptr;
  m_vInCurrent = 0.0;
  m_vInCurrentCallbacks = nullptr;
  m_userVoltage6V = 6.0;
  m_userVoltage6VCallbacks = nullptr;
  m_userCurrent6V = 0.0;
  m_userCurrent6VCallbacks = nullptr;
  m_userActive6V = false;
  m_userActive6VCallbacks = nullptr;
  m_userVoltage5V = 5.0;
  m_userVoltage5VCallbacks = nullptr;
  m_userCurrent5V = 0.0;
  m_userCurrent5VCallbacks = nullptr;
  m_userActive5V = false;
  m_userActive5VCallbacks = nullptr;
  m_userVoltage3V3 = 3.3;
  m_userVoltage3V3Callbacks = nullptr;
  m_userCurrent3V3 = 0.0;
  m_userCurrent3V3Callbacks = nullptr;
  m_userActive3V3 = false;
  m_userActive3V3Callbacks = nullptr;
  m_userFaults6V = 0;
  m_userFaults6VCallbacks = nullptr;
  m_userFaults5V = 0;
  m_userFaults5VCallbacks = nullptr;
  m_userFaults3V3 = 0;
  m_userFaults3V3Callbacks = nullptr;
}

int32_t RoboRioData::RegisterFPGAButtonCallback(HAL_NotifyCallback callback, void* param, HAL_Bool initialNotify) {
  // Return an invalid value on a null callback
  if (callback == nullptr) return -1;
  const char* variableName = "FPGAButton";
  auto newCallbacks = std::make_shared<UidVector<NotifyListener>>(*m_fPGAButtonCallbacks);
  int uid = newCallbacks->emplace_back(variableName, param, callback);
  if (initialNotify) {
    callback(variableName, param, &MakeBoolean(GetFPGAButton()));
  }
  m_activeCallbacks = newCallbacks;
  return uid;
}
void RoboRioData::CancelFPGAButtonCallback(int32_t uid) {
  auto newCallbacks = std::make_shared<UidVector<NotifyListener>>(*m_fPGAButtonCallbacks);
  newCallbacks->erase(uid);
  m_activeCallbacks = newCallbacks;
}
void RoboRioData::InvokeFPGAButtonCallback(const HAL_Value* value) {
  auto newCallbacks = m_fPGAButtonCallbacks;
  for (std::size_t i=0; i<newCallbacks->size(); ++i) {
    if (!(*newCallbacks)[i]) continue; //removed
    auto listener = (*newCallbacks)[i];
    listener.callback(listener.key.c_str(), listener.param, value);
  }
}

HAL_Bool RoboRioData::GetFPGAButton() {
  return m_fPGAButton;
}

void RoboRioData::SetFPGAButton(HAL_Bool fPGAButton) {
  HAL_Bool oldValue = m_fPGAButton.exchange(fPGAButton);
  if (oldValue != fPGAButton) {
    InvokeFPGAButtonCallback(&MakeBoolean(fPGAButton));
  }
}

int32_t RoboRioData::RegisterVInVoltageCallback(HAL_NotifyCallback callback, void* param, HAL_Bool initialNotify) {
  // Return an invalid value on a null callback
  if (callback == nullptr) return -1;
  const char* variableName = "VInVoltage";
  auto newCallbacks = std::make_shared<UidVector<NotifyListener>>(*m_vInVoltageCallbacks);
  int uid = newCallbacks->emplace_back(variableName, param, callback);
  if (initialNotify) {
    callback(variableName, param, &MakeDouble(GetVInVoltage()));
  }
  m_activeCallbacks = newCallbacks;
  return uid;
}
void RoboRioData::CancelVInVoltageCallback(int32_t uid) {
  auto newCallbacks = std::make_shared<UidVector<NotifyListener>>(*m_vInVoltageCallbacks);
  newCallbacks->erase(uid);
  m_activeCallbacks = newCallbacks;
}
void RoboRioData::InvokeVInVoltageCallback(const HAL_Value* value) {
  auto newCallbacks = m_vInVoltageCallbacks;
  for (std::size_t i=0; i<newCallbacks->size(); ++i) {
    if (!(*newCallbacks)[i]) continue; //removed
    auto listener = (*newCallbacks)[i];
    listener.callback(listener.key.c_str(), listener.param, value);
  }
}

double RoboRioData::GetVInVoltage() {
  return m_vInVoltage;
}

void RoboRioData::SetVInVoltage(double vInVoltage) {
  double oldValue = m_vInVoltage.exchange(vInVoltage);
  if (oldValue != vInVoltage) {
    InvokeVInVoltageCallback(&MakeDouble(vInVoltage));
  }
}

int32_t RoboRioData::RegisterVInCurrentCallback(HAL_NotifyCallback callback, void* param, HAL_Bool initialNotify) {
  // Return an invalid value on a null callback
  if (callback == nullptr) return -1;
  const char* variableName = "VInCurrent";
  auto newCallbacks = std::make_shared<UidVector<NotifyListener>>(*m_vInCurrentCallbacks);
  int uid = newCallbacks->emplace_back(variableName, param, callback);
  if (initialNotify) {
    callback(variableName, param, &MakeDouble(GetVInCurrent()));
  }
  m_activeCallbacks = newCallbacks;
  return uid;
}
void RoboRioData::CancelVInCurrentCallback(int32_t uid) {
  auto newCallbacks = std::make_shared<UidVector<NotifyListener>>(*m_vInCurrentCallbacks);
  newCallbacks->erase(uid);
  m_activeCallbacks = newCallbacks;
}
void RoboRioData::InvokeVInCurrentCallback(const HAL_Value* value) {
  auto newCallbacks = m_vInCurrentCallbacks;
  for (std::size_t i=0; i<newCallbacks->size(); ++i) {
    if (!(*newCallbacks)[i]) continue; //removed
    auto listener = (*newCallbacks)[i];
    listener.callback(listener.key.c_str(), listener.param, value);
  }
}

double RoboRioData::GetVInCurrent() {
  return m_vInCurrent;
}

void RoboRioData::SetVInCurrent(double vInCurrent) {
  double oldValue = m_vInCurrent.exchange(vInCurrent);
  if (oldValue != vInCurrent) {
    InvokeVInCurrentCallback(&MakeDouble(vInCurrent));
  }
}

int32_t RoboRioData::RegisterUserVoltage6VCallback(HAL_NotifyCallback callback, void* param, HAL_Bool initialNotify) {
  // Return an invalid value on a null callback
  if (callback == nullptr) return -1;
  const char* variableName = "UserVoltage6V";
  auto newCallbacks = std::make_shared<UidVector<NotifyListener>>(*m_userVoltage6VCallbacks);
  int uid = newCallbacks->emplace_back(variableName, param, callback);
  if (initialNotify) {
    callback(variableName, param, &MakeDouble(GetUserVoltage6V()));
  }
  m_activeCallbacks = newCallbacks;
  return uid;
}
void RoboRioData::CancelUserVoltage6VCallback(int32_t uid) {
  auto newCallbacks = std::make_shared<UidVector<NotifyListener>>(*m_userVoltage6VCallbacks);
  newCallbacks->erase(uid);
  m_activeCallbacks = newCallbacks;
}
void RoboRioData::InvokeUserVoltage6VCallback(const HAL_Value* value) {
  auto newCallbacks = m_userVoltage6VCallbacks;
  for (std::size_t i=0; i<newCallbacks->size(); ++i) {
    if (!(*newCallbacks)[i]) continue; //removed
    auto listener = (*newCallbacks)[i];
    listener.callback(listener.key.c_str(), listener.param, value);
  }
}

double RoboRioData::GetUserVoltage6V() {
  return m_userVoltage6V;
}

void RoboRioData::SetUserVoltage6V(double userVoltage6V) {
  double oldValue = m_userVoltage6V.exchange(userVoltage6V);
  if (oldValue != userVoltage6V) {
    InvokeUserVoltage6VCallback(&MakeDouble(userVoltage6V));
  }
}

int32_t RoboRioData::RegisterUserCurrent6VCallback(HAL_NotifyCallback callback, void* param, HAL_Bool initialNotify) {
  // Return an invalid value on a null callback
  if (callback == nullptr) return -1;
  const char* variableName = "UserCurrent6V";
  auto newCallbacks = std::make_shared<UidVector<NotifyListener>>(*m_userCurrent6VCallbacks);
  int uid = newCallbacks->emplace_back(variableName, param, callback);
  if (initialNotify) {
    callback(variableName, param, &MakeDouble(GetUserCurrent6V()));
  }
  m_activeCallbacks = newCallbacks;
  return uid;
}
void RoboRioData::CancelUserCurrent6VCallback(int32_t uid) {
  auto newCallbacks = std::make_shared<UidVector<NotifyListener>>(*m_userCurrent6VCallbacks);
  newCallbacks->erase(uid);
  m_activeCallbacks = newCallbacks;
}
void RoboRioData::InvokeUserCurrent6VCallback(const HAL_Value* value) {
  auto newCallbacks = m_userCurrent6VCallbacks;
  for (std::size_t i=0; i<newCallbacks->size(); ++i) {
    if (!(*newCallbacks)[i]) continue; //removed
    auto listener = (*newCallbacks)[i];
    listener.callback(listener.key.c_str(), listener.param, value);
  }
}

double RoboRioData::GetUserCurrent6V() {
  return m_userCurrent6V;
}

void RoboRioData::SetUserCurrent6V(double userCurrent6V) {
  double oldValue = m_userCurrent6V.exchange(userCurrent6V);
  if (oldValue != userCurrent6V) {
    InvokeUserCurrent6VCallback(&MakeDouble(userCurrent6V));
  }
}

int32_t RoboRioData::RegisterUserActive6VCallback(HAL_NotifyCallback callback, void* param, HAL_Bool initialNotify) {
  // Return an invalid value on a null callback
  if (callback == nullptr) return -1;
  const char* variableName = "UserActive6V";
  auto newCallbacks = std::make_shared<UidVector<NotifyListener>>(*m_userActive6VCallbacks);
  int uid = newCallbacks->emplace_back(variableName, param, callback);
  if (initialNotify) {
    callback(variableName, param, &MakeBoolean(GetUserActive6V()));
  }
  m_activeCallbacks = newCallbacks;
  return uid;
}
void RoboRioData::CancelUserActive6VCallback(int32_t uid) {
  auto newCallbacks = std::make_shared<UidVector<NotifyListener>>(*m_userActive6VCallbacks);
  newCallbacks->erase(uid);
  m_activeCallbacks = newCallbacks;
}
void RoboRioData::InvokeUserActive6VCallback(const HAL_Value* value) {
  auto newCallbacks = m_userActive6VCallbacks;
  for (std::size_t i=0; i<newCallbacks->size(); ++i) {
    if (!(*newCallbacks)[i]) continue; //removed
    auto listener = (*newCallbacks)[i];
    listener.callback(listener.key.c_str(), listener.param, value);
  }
}

HAL_Bool RoboRioData::GetUserActive6V() {
  return m_userActive6V;
}

void RoboRioData::SetUserActive6V(HAL_Bool userActive6V) {
  HAL_Bool oldValue = m_userActive6V.exchange(userActive6V);
  if (oldValue != userActive6V) {
    InvokeUserActive6VCallback(&MakeBoolean(userActive6V));
  }
}

int32_t RoboRioData::RegisterUserVoltage5VCallback(HAL_NotifyCallback callback, void* param, HAL_Bool initialNotify) {
  // Return an invalid value on a null callback
  if (callback == nullptr) return -1;
  const char* variableName = "UserVoltage5V";
  auto newCallbacks = std::make_shared<UidVector<NotifyListener>>(*m_userVoltage5VCallbacks);
  int uid = newCallbacks->emplace_back(variableName, param, callback);
  if (initialNotify) {
    callback(variableName, param, &MakeDouble(GetUserVoltage5V()));
  }
  m_activeCallbacks = newCallbacks;
  return uid;
}
void RoboRioData::CancelUserVoltage5VCallback(int32_t uid) {
  auto newCallbacks = std::make_shared<UidVector<NotifyListener>>(*m_userVoltage5VCallbacks);
  newCallbacks->erase(uid);
  m_activeCallbacks = newCallbacks;
}
void RoboRioData::InvokeUserVoltage5VCallback(const HAL_Value* value) {
  auto newCallbacks = m_userVoltage5VCallbacks;
  for (std::size_t i=0; i<newCallbacks->size(); ++i) {
    if (!(*newCallbacks)[i]) continue; //removed
    auto listener = (*newCallbacks)[i];
    listener.callback(listener.key.c_str(), listener.param, value);
  }
}

double RoboRioData::GetUserVoltage5V() {
  return m_userVoltage5V;
}

void RoboRioData::SetUserVoltage5V(double userVoltage5V) {
  double oldValue = m_userVoltage5V.exchange(userVoltage5V);
  if (oldValue != userVoltage5V) {
    InvokeUserVoltage5VCallback(&MakeDouble(userVoltage5V));
  }
}

int32_t RoboRioData::RegisterUserCurrent5VCallback(HAL_NotifyCallback callback, void* param, HAL_Bool initialNotify) {
  // Return an invalid value on a null callback
  if (callback == nullptr) return -1;
  const char* variableName = "UserCurrent5V";
  auto newCallbacks = std::make_shared<UidVector<NotifyListener>>(*m_userCurrent5VCallbacks);
  int uid = newCallbacks->emplace_back(variableName, param, callback);
  if (initialNotify) {
    callback(variableName, param, &MakeDouble(GetUserCurrent5V()));
  }
  m_activeCallbacks = newCallbacks;
  return uid;
}
void RoboRioData::CancelUserCurrent5VCallback(int32_t uid) {
  auto newCallbacks = std::make_shared<UidVector<NotifyListener>>(*m_userCurrent5VCallbacks);
  newCallbacks->erase(uid);
  m_activeCallbacks = newCallbacks;
}
void RoboRioData::InvokeUserCurrent5VCallback(const HAL_Value* value) {
  auto newCallbacks = m_userCurrent5VCallbacks;
  for (std::size_t i=0; i<newCallbacks->size(); ++i) {
    if (!(*newCallbacks)[i]) continue; //removed
    auto listener = (*newCallbacks)[i];
    listener.callback(listener.key.c_str(), listener.param, value);
  }
}

double RoboRioData::GetUserCurrent5V() {
  return m_userCurrent5V;
}

void RoboRioData::SetUserCurrent5V(double userCurrent5V) {
  double oldValue = m_userCurrent5V.exchange(userCurrent5V);
  if (oldValue != userCurrent5V) {
    InvokeUserCurrent5VCallback(&MakeDouble(userCurrent5V));
  }
}

int32_t RoboRioData::RegisterUserActive5VCallback(HAL_NotifyCallback callback, void* param, HAL_Bool initialNotify) {
  // Return an invalid value on a null callback
  if (callback == nullptr) return -1;
  const char* variableName = "UserActive5V";
  auto newCallbacks = std::make_shared<UidVector<NotifyListener>>(*m_userActive5VCallbacks);
  int uid = newCallbacks->emplace_back(variableName, param, callback);
  if (initialNotify) {
    callback(variableName, param, &MakeBoolean(GetUserActive5V()));
  }
  m_activeCallbacks = newCallbacks;
  return uid;
}
void RoboRioData::CancelUserActive5VCallback(int32_t uid) {
  auto newCallbacks = std::make_shared<UidVector<NotifyListener>>(*m_userActive5VCallbacks);
  newCallbacks->erase(uid);
  m_activeCallbacks = newCallbacks;
}
void RoboRioData::InvokeUserActive5VCallback(const HAL_Value* value) {
  auto newCallbacks = m_userActive5VCallbacks;
  for (std::size_t i=0; i<newCallbacks->size(); ++i) {
    if (!(*newCallbacks)[i]) continue; //removed
    auto listener = (*newCallbacks)[i];
    listener.callback(listener.key.c_str(), listener.param, value);
  }
}

HAL_Bool RoboRioData::GetUserActive5V() {
  return m_userActive5V;
}

void RoboRioData::SetUserActive5V(HAL_Bool userActive5V) {
  HAL_Bool oldValue = m_userActive5V.exchange(userActive5V);
  if (oldValue != userActive5V) {
    InvokeUserActive5VCallback(&MakeBoolean(userActive5V));
  }
}

int32_t RoboRioData::RegisterUserVoltage3V3Callback(HAL_NotifyCallback callback, void* param, HAL_Bool initialNotify) {
  // Return an invalid value on a null callback
  if (callback == nullptr) return -1;
  const char* variableName = "UserVoltage3V3";
  auto newCallbacks = std::make_shared<UidVector<NotifyListener>>(*m_userVoltage3V3Callbacks);
  int uid = newCallbacks->emplace_back(variableName, param, callback);
  if (initialNotify) {
    callback(variableName, param, &MakeDouble(GetUserVoltage3V3()));
  }
  m_activeCallbacks = newCallbacks;
  return uid;
}
void RoboRioData::CancelUserVoltage3V3Callback(int32_t uid) {
  auto newCallbacks = std::make_shared<UidVector<NotifyListener>>(*m_userVoltage3V3Callbacks);
  newCallbacks->erase(uid);
  m_activeCallbacks = newCallbacks;
}
void RoboRioData::InvokeUserVoltage3V3Callback(const HAL_Value* value) {
  auto newCallbacks = m_userVoltage3V3Callbacks;
  for (std::size_t i=0; i<newCallbacks->size(); ++i) {
    if (!(*newCallbacks)[i]) continue; //removed
    auto listener = (*newCallbacks)[i];
    listener.callback(listener.key.c_str(), listener.param, value);
  }
}

double RoboRioData::GetUserVoltage3V3() {
  return m_userVoltage3V3;
}

void RoboRioData::SetUserVoltage3V3(double userVoltage3V3) {
  double oldValue = m_userVoltage3V3.exchange(userVoltage3V3);
  if (oldValue != userVoltage3V3) {
    InvokeUserVoltage3V3Callback(&MakeDouble(userVoltage3V3));
  }
}

int32_t RoboRioData::RegisterUserCurrent3V3Callback(HAL_NotifyCallback callback, void* param, HAL_Bool initialNotify) {
  // Return an invalid value on a null callback
  if (callback == nullptr) return -1;
  const char* variableName = "UserCurrent3V3";
  auto newCallbacks = std::make_shared<UidVector<NotifyListener>>(*m_userCurrent3V3Callbacks);
  int uid = newCallbacks->emplace_back(variableName, param, callback);
  if (initialNotify) {
    callback(variableName, param, &MakeDouble(GetUserCurrent3V3()));
  }
  m_activeCallbacks = newCallbacks;
  return uid;
}
void RoboRioData::CancelUserCurrent3V3Callback(int32_t uid) {
  auto newCallbacks = std::make_shared<UidVector<NotifyListener>>(*m_userCurrent3V3Callbacks);
  newCallbacks->erase(uid);
  m_activeCallbacks = newCallbacks;
}
void RoboRioData::InvokeUserCurrent3V3Callback(const HAL_Value* value) {
  auto newCallbacks = m_userCurrent3V3Callbacks;
  for (std::size_t i=0; i<newCallbacks->size(); ++i) {
    if (!(*newCallbacks)[i]) continue; //removed
    auto listener = (*newCallbacks)[i];
    listener.callback(listener.key.c_str(), listener.param, value);
  }
}

double RoboRioData::GetUserCurrent3V3() {
  return m_userCurrent3V3;
}

void RoboRioData::SetUserCurrent3V3(double userCurrent3V3) {
  double oldValue = m_userCurrent3V3.exchange(userCurrent3V3);
  if (oldValue != userCurrent3V3) {
    InvokeUserCurrent3V3Callback(&MakeDouble(userCurrent3V3));
  }
}

int32_t RoboRioData::RegisterUserActive3V3Callback(HAL_NotifyCallback callback, void* param, HAL_Bool initialNotify) {
  // Return an invalid value on a null callback
  if (callback == nullptr) return -1;
  const char* variableName = "UserActive3V3";
  auto newCallbacks = std::make_shared<UidVector<NotifyListener>>(*m_userActive3V3Callbacks);
  int uid = newCallbacks->emplace_back(variableName, param, callback);
  if (initialNotify) {
    callback(variableName, param, &MakeBoolean(GetUserActive3V3()));
  }
  m_activeCallbacks = newCallbacks;
  return uid;
}
void RoboRioData::CancelUserActive3V3Callback(int32_t uid) {
  auto newCallbacks = std::make_shared<UidVector<NotifyListener>>(*m_userActive3V3Callbacks);
  newCallbacks->erase(uid);
  m_activeCallbacks = newCallbacks;
}
void RoboRioData::InvokeUserActive3V3Callback(const HAL_Value* value) {
  auto newCallbacks = m_userActive3V3Callbacks;
  for (std::size_t i=0; i<newCallbacks->size(); ++i) {
    if (!(*newCallbacks)[i]) continue; //removed
    auto listener = (*newCallbacks)[i];
    listener.callback(listener.key.c_str(), listener.param, value);
  }
}

HAL_Bool RoboRioData::GetUserActive3V3() {
  return m_userActive3V3;
}

void RoboRioData::SetUserActive3V3(HAL_Bool userActive3V3) {
  HAL_Bool oldValue = m_userActive3V3.exchange(userActive3V3);
  if (oldValue != userActive3V3) {
    InvokeUserActive3V3Callback(&MakeBoolean(userActive3V3));
  }
}

int32_t RoboRioData::RegisterUserFaults6VCallback(HAL_NotifyCallback callback, void* param, HAL_Bool initialNotify) {
  // Return an invalid value on a null callback
  if (callback == nullptr) return -1;
  const char* variableName = "UserFaults6V";
  auto newCallbacks = std::make_shared<UidVector<NotifyListener>>(*m_userFaults6VCallbacks);
  int uid = newCallbacks->emplace_back(variableName, param, callback);
  if (initialNotify) {
    callback(variableName, param, &MakeInt(GetUserFaults6V()));
  }
  m_activeCallbacks = newCallbacks;
  return uid;
}
void RoboRioData::CancelUserFaults6VCallback(int32_t uid) {
  auto newCallbacks = std::make_shared<UidVector<NotifyListener>>(*m_userFaults6VCallbacks);
  newCallbacks->erase(uid);
  m_activeCallbacks = newCallbacks;
}
void RoboRioData::InvokeUserFaults6VCallback(const HAL_Value* value) {
  auto newCallbacks = m_userFaults6VCallbacks;
  for (std::size_t i=0; i<newCallbacks->size(); ++i) {
    if (!(*newCallbacks)[i]) continue; //removed
    auto listener = (*newCallbacks)[i];
    listener.callback(listener.key.c_str(), listener.param, value);
  }
}

int32_t RoboRioData::GetUserFaults6V() {
  return m_userFaults6V;
}

void RoboRioData::SetUserFaults6V(int32_t userFaults6V) {
  int32_t oldValue = m_userFaults6V.exchange(userFaults6V);
  if (oldValue != userFaults6V) {
    InvokeUserFaults6VCallback(&MakeInt(userFaults6V));
  }
}

int32_t RoboRioData::RegisterUserFaults5VCallback(HAL_NotifyCallback callback, void* param, HAL_Bool initialNotify) {
  // Return an invalid value on a null callback
  if (callback == nullptr) return -1;
  const char* variableName = "UserFaults5V";
  auto newCallbacks = std::make_shared<UidVector<NotifyListener>>(*m_userFaults5VCallbacks);
  int uid = newCallbacks->emplace_back(variableName, param, callback);
  if (initialNotify) {
    callback(variableName, param, &MakeInt(GetUserFaults5V()));
  }
  m_activeCallbacks = newCallbacks;
  return uid;
}
void RoboRioData::CancelUserFaults5VCallback(int32_t uid) {
  auto newCallbacks = std::make_shared<UidVector<NotifyListener>>(*m_userFaults5VCallbacks);
  newCallbacks->erase(uid);
  m_activeCallbacks = newCallbacks;
}
void RoboRioData::InvokeUserFaults5VCallback(const HAL_Value* value) {
  auto newCallbacks = m_userFaults5VCallbacks;
  for (std::size_t i=0; i<newCallbacks->size(); ++i) {
    if (!(*newCallbacks)[i]) continue; //removed
    auto listener = (*newCallbacks)[i];
    listener.callback(listener.key.c_str(), listener.param, value);
  }
}

int32_t RoboRioData::GetUserFaults5V() {
  return m_userFaults5V;
}

void RoboRioData::SetUserFaults5V(int32_t userFaults5V) {
  int32_t oldValue = m_userFaults5V.exchange(userFaults5V);
  if (oldValue != userFaults5V) {
    InvokeUserFaults5VCallback(&MakeInt(userFaults5V));
  }
}

int32_t RoboRioData::RegisterUserFaults3V3Callback(HAL_NotifyCallback callback, void* param, HAL_Bool initialNotify) {
  // Return an invalid value on a null callback
  if (callback == nullptr) return -1;
  const char* variableName = "UserFaults3V3";
  auto newCallbacks = std::make_shared<UidVector<NotifyListener>>(*m_userFaults3V3Callbacks);
  int uid = newCallbacks->emplace_back(variableName, param, callback);
  if (initialNotify) {
    callback(variableName, param, &MakeInt(GetUserFaults3V3()));
  }
  m_activeCallbacks = newCallbacks;
  return uid;
}
void RoboRioData::CancelUserFaults3V3Callback(int32_t uid) {
  auto newCallbacks = std::make_shared<UidVector<NotifyListener>>(*m_userFaults3V3Callbacks);
  newCallbacks->erase(uid);
  m_activeCallbacks = newCallbacks;
}
void RoboRioData::InvokeUserFaults3V3Callback(const HAL_Value* value) {
  auto newCallbacks = m_userFaults3V3Callbacks;
  for (std::size_t i=0; i<newCallbacks->size(); ++i) {
    if (!(*newCallbacks)[i]) continue; //removed
    auto listener = (*newCallbacks)[i];
    listener.callback(listener.key.c_str(), listener.param, value);
  }
}

int32_t RoboRioData::GetUserFaults3V3() {
  return m_userFaults3V3;
}

void RoboRioData::SetUserFaults3V3(int32_t userFaults3V3) {
  int32_t oldValue = m_userFaults3V3.exchange(userFaults3V3);
  if (oldValue != userFaults3V3) {
    InvokeUserFaults3V3Callback(&MakeInt(userFaults3V3));
  }
}

extern "C" {
int32_t HALSIM_RegisterRoboRioFPGAButtonCallback(int32_t index, HAL_NotifyCallback callback, void* param, HAL_Bool initialNotify) {
  return SimRoboRioData[index]->RegisterFPGAButtonCallback(callback, param, initialNotify);
}

void HALSIM_CancelRoboRioFPGAButtonCallback(int32_t index, int32_t uid) {
  SimRoboRioData[index]->CancelFPGAButtonCallback(uid);
}

HAL_Bool HALSIM_GetRoboRioFPGAButton(int32_t index) {
  return SimRoboRioData[index]->GetFPGAButton();
}

void HALSIM_SetRoboRioFPGAButton(int32_t index, HAL_Bool fPGAButton) {
  SimRoboRioData[index]->SetFPGAButton(fPGAButton);
}

int32_t HALSIM_RegisterRoboRioVInVoltageCallback(int32_t index, HAL_NotifyCallback callback, void* param, HAL_Bool initialNotify) {
  return SimRoboRioData[index]->RegisterVInVoltageCallback(callback, param, initialNotify);
}

void HALSIM_CancelRoboRioVInVoltageCallback(int32_t index, int32_t uid) {
  SimRoboRioData[index]->CancelVInVoltageCallback(uid);
}

double HALSIM_GetRoboRioVInVoltage(int32_t index) {
  return SimRoboRioData[index]->GetVInVoltage();
}

void HALSIM_SetRoboRioVInVoltage(int32_t index, double vInVoltage) {
  SimRoboRioData[index]->SetVInVoltage(vInVoltage);
}

int32_t HALSIM_RegisterRoboRioVInCurrentCallback(int32_t index, HAL_NotifyCallback callback, void* param, HAL_Bool initialNotify) {
  return SimRoboRioData[index]->RegisterVInCurrentCallback(callback, param, initialNotify);
}

void HALSIM_CancelRoboRioVInCurrentCallback(int32_t index, int32_t uid) {
  SimRoboRioData[index]->CancelVInCurrentCallback(uid);
}

double HALSIM_GetRoboRioVInCurrent(int32_t index) {
  return SimRoboRioData[index]->GetVInCurrent();
}

void HALSIM_SetRoboRioVInCurrent(int32_t index, double vInCurrent) {
  SimRoboRioData[index]->SetVInCurrent(vInCurrent);
}

int32_t HALSIM_RegisterRoboRioUserVoltage6VCallback(int32_t index, HAL_NotifyCallback callback, void* param, HAL_Bool initialNotify) {
  return SimRoboRioData[index]->RegisterUserVoltage6VCallback(callback, param, initialNotify);
}

void HALSIM_CancelRoboRioUserVoltage6VCallback(int32_t index, int32_t uid) {
  SimRoboRioData[index]->CancelUserVoltage6VCallback(uid);
}

double HALSIM_GetRoboRioUserVoltage6V(int32_t index) {
  return SimRoboRioData[index]->GetUserVoltage6V();
}

void HALSIM_SetRoboRioUserVoltage6V(int32_t index, double userVoltage6V) {
  SimRoboRioData[index]->SetUserVoltage6V(userVoltage6V);
}

int32_t HALSIM_RegisterRoboRioUserCurrent6VCallback(int32_t index, HAL_NotifyCallback callback, void* param, HAL_Bool initialNotify) {
  return SimRoboRioData[index]->RegisterUserCurrent6VCallback(callback, param, initialNotify);
}

void HALSIM_CancelRoboRioUserCurrent6VCallback(int32_t index, int32_t uid) {
  SimRoboRioData[index]->CancelUserCurrent6VCallback(uid);
}

double HALSIM_GetRoboRioUserCurrent6V(int32_t index) {
  return SimRoboRioData[index]->GetUserCurrent6V();
}

void HALSIM_SetRoboRioUserCurrent6V(int32_t index, double userCurrent6V) {
  SimRoboRioData[index]->SetUserCurrent6V(userCurrent6V);
}

int32_t HALSIM_RegisterRoboRioUserActive6VCallback(int32_t index, HAL_NotifyCallback callback, void* param, HAL_Bool initialNotify) {
  return SimRoboRioData[index]->RegisterUserActive6VCallback(callback, param, initialNotify);
}

void HALSIM_CancelRoboRioUserActive6VCallback(int32_t index, int32_t uid) {
  SimRoboRioData[index]->CancelUserActive6VCallback(uid);
}

HAL_Bool HALSIM_GetRoboRioUserActive6V(int32_t index) {
  return SimRoboRioData[index]->GetUserActive6V();
}

void HALSIM_SetRoboRioUserActive6V(int32_t index, HAL_Bool userActive6V) {
  SimRoboRioData[index]->SetUserActive6V(userActive6V);
}

int32_t HALSIM_RegisterRoboRioUserVoltage5VCallback(int32_t index, HAL_NotifyCallback callback, void* param, HAL_Bool initialNotify) {
  return SimRoboRioData[index]->RegisterUserVoltage5VCallback(callback, param, initialNotify);
}

void HALSIM_CancelRoboRioUserVoltage5VCallback(int32_t index, int32_t uid) {
  SimRoboRioData[index]->CancelUserVoltage5VCallback(uid);
}

double HALSIM_GetRoboRioUserVoltage5V(int32_t index) {
  return SimRoboRioData[index]->GetUserVoltage5V();
}

void HALSIM_SetRoboRioUserVoltage5V(int32_t index, double userVoltage5V) {
  SimRoboRioData[index]->SetUserVoltage5V(userVoltage5V);
}

int32_t HALSIM_RegisterRoboRioUserCurrent5VCallback(int32_t index, HAL_NotifyCallback callback, void* param, HAL_Bool initialNotify) {
  return SimRoboRioData[index]->RegisterUserCurrent5VCallback(callback, param, initialNotify);
}

void HALSIM_CancelRoboRioUserCurrent5VCallback(int32_t index, int32_t uid) {
  SimRoboRioData[index]->CancelUserCurrent5VCallback(uid);
}

double HALSIM_GetRoboRioUserCurrent5V(int32_t index) {
  return SimRoboRioData[index]->GetUserCurrent5V();
}

void HALSIM_SetRoboRioUserCurrent5V(int32_t index, double userCurrent5V) {
  SimRoboRioData[index]->SetUserCurrent5V(userCurrent5V);
}

int32_t HALSIM_RegisterRoboRioUserActive5VCallback(int32_t index, HAL_NotifyCallback callback, void* param, HAL_Bool initialNotify) {
  return SimRoboRioData[index]->RegisterUserActive5VCallback(callback, param, initialNotify);
}

void HALSIM_CancelRoboRioUserActive5VCallback(int32_t index, int32_t uid) {
  SimRoboRioData[index]->CancelUserActive5VCallback(uid);
}

HAL_Bool HALSIM_GetRoboRioUserActive5V(int32_t index) {
  return SimRoboRioData[index]->GetUserActive5V();
}

void HALSIM_SetRoboRioUserActive5V(int32_t index, HAL_Bool userActive5V) {
  SimRoboRioData[index]->SetUserActive5V(userActive5V);
}

int32_t HALSIM_RegisterRoboRioUserVoltage3V3Callback(int32_t index, HAL_NotifyCallback callback, void* param, HAL_Bool initialNotify) {
  return SimRoboRioData[index]->RegisterUserVoltage3V3Callback(callback, param, initialNotify);
}

void HALSIM_CancelRoboRioUserVoltage3V3Callback(int32_t index, int32_t uid) {
  SimRoboRioData[index]->CancelUserVoltage3V3Callback(uid);
}

double HALSIM_GetRoboRioUserVoltage3V3(int32_t index) {
  return SimRoboRioData[index]->GetUserVoltage3V3();
}

void HALSIM_SetRoboRioUserVoltage3V3(int32_t index, double userVoltage3V3) {
  SimRoboRioData[index]->SetUserVoltage3V3(userVoltage3V3);
}

int32_t HALSIM_RegisterRoboRioUserCurrent3V3Callback(int32_t index, HAL_NotifyCallback callback, void* param, HAL_Bool initialNotify) {
  return SimRoboRioData[index]->RegisterUserCurrent3V3Callback(callback, param, initialNotify);
}

void HALSIM_CancelRoboRioUserCurrent3V3Callback(int32_t index, int32_t uid) {
  SimRoboRioData[index]->CancelUserCurrent3V3Callback(uid);
}

double HALSIM_GetRoboRioUserCurrent3V3(int32_t index) {
  return SimRoboRioData[index]->GetUserCurrent3V3();
}

void HALSIM_SetRoboRioUserCurrent3V3(int32_t index, double userCurrent3V3) {
  SimRoboRioData[index]->SetUserCurrent3V3(userCurrent3V3);
}

int32_t HALSIM_RegisterRoboRioUserActive3V3Callback(int32_t index, HAL_NotifyCallback callback, void* param, HAL_Bool initialNotify) {
  return SimRoboRioData[index]->RegisterUserActive3V3Callback(callback, param, initialNotify);
}

void HALSIM_CancelRoboRioUserActive3V3Callback(int32_t index, int32_t uid) {
  SimRoboRioData[index]->CancelUserActive3V3Callback(uid);
}

HAL_Bool HALSIM_GetRoboRioUserActive3V3(int32_t index) {
  return SimRoboRioData[index]->GetUserActive3V3();
}

void HALSIM_SetRoboRioUserActive3V3(int32_t index, HAL_Bool userActive3V3) {
  SimRoboRioData[index]->SetUserActive3V3(userActive3V3);
}

int32_t HALSIM_RegisterRoboRioUserFaults6VCallback(int32_t index, HAL_NotifyCallback callback, void* param, HAL_Bool initialNotify) {
  return SimRoboRioData[index]->RegisterUserFaults6VCallback(callback, param, initialNotify);
}

void HALSIM_CancelRoboRioUserFaults6VCallback(int32_t index, int32_t uid) {
  SimRoboRioData[index]->CancelUserFaults6VCallback(uid);
}

int32_t HALSIM_GetRoboRioUserFaults6V(int32_t index) {
  return SimRoboRioData[index]->GetUserFaults6V();
}

void HALSIM_SetRoboRioUserFaults6V(int32_t index, int32_t userFaults6V) {
  SimRoboRioData[index]->SetUserFaults6V(userFaults6V);
}

int32_t HALSIM_RegisterRoboRioUserFaults5VCallback(int32_t index, HAL_NotifyCallback callback, void* param, HAL_Bool initialNotify) {
  return SimRoboRioData[index]->RegisterUserFaults5VCallback(callback, param, initialNotify);
}

void HALSIM_CancelRoboRioUserFaults5VCallback(int32_t index, int32_t uid) {
  SimRoboRioData[index]->CancelUserFaults5VCallback(uid);
}

int32_t HALSIM_GetRoboRioUserFaults5V(int32_t index) {
  return SimRoboRioData[index]->GetUserFaults5V();
}

void HALSIM_SetRoboRioUserFaults5V(int32_t index, int32_t userFaults5V) {
  SimRoboRioData[index]->SetUserFaults5V(userFaults5V);
}

int32_t HALSIM_RegisterRoboRioUserFaults3V3Callback(int32_t index, HAL_NotifyCallback callback, void* param, HAL_Bool initialNotify) {
  return SimRoboRioData[index]->RegisterUserFaults3V3Callback(callback, param, initialNotify);
}

void HALSIM_CancelRoboRioUserFaults3V3Callback(int32_t index, int32_t uid) {
  SimRoboRioData[index]->CancelUserFaults3V3Callback(uid);
}

int32_t HALSIM_GetRoboRioUserFaults3V3(int32_t index) {
  return SimRoboRioData[index]->GetUserFaults3V3();
}

void HALSIM_SetRoboRioUserFaults3V3(int32_t index, int32_t userFaults3V3) {
  SimRoboRioData[index]->SetUserFaults3V3(userFaults3V3);
}

}
