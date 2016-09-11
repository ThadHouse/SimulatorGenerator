#include "SPIAccelerometerDataInternal.h"

#include "../PortsInternal.h"

using namespace hal;

std::unique_ptr<std::shared_ptr<SPIAccelerometerData>[]> hal::SimSPIAccelerometerData = std::make_unique<std::shared_ptr<SPIAccelerometerData>[]>(SIZEINHERE);
void SPIAccelerometerData::ResetData() {
  m_active = false;
  m_activeCallbacks = nullptr;
  m_range = 0;
  m_rangeCallbacks = nullptr;
  m_x = 0.0;
  m_xCallbacks = nullptr;
  m_y = 0.0;
  m_yCallbacks = nullptr;
  m_z = 0.0;
  m_zCallbacks = nullptr;
}

int32_t SPIAccelerometerData::RegisterActiveCallback(HAL_NotifyCallback callback, void* param, HAL_Bool initialNotify) {
  // Return an invalid value on a null callback
  if (callback == nullptr) return -1;
  const char* variableName = "Active";
  auto newCallbacks = std::make_shared<UidVector<NotifyListener>>(*m_activeCallbacks);
  int uid = newCallbacks->emplace_back(variableName, param, callback);
  if (initialNotify) {
    callback(variableName, param, &MakeBoolean(GetActive()));
  }
  m_activeCallbacks = newCallbacks;
  return uid;
}
void SPIAccelerometerData::CancelActiveCallback(int32_t uid) {
  auto newCallbacks = std::make_shared<UidVector<NotifyListener>>(*m_activeCallbacks);
  newCallbacks->erase(uid);
  m_activeCallbacks = newCallbacks;
}
void SPIAccelerometerData::InvokeActiveCallback(const HAL_Value* value) {
  auto newCallbacks = m_activeCallbacks;
  for (std::size_t i=0; i<newCallbacks->size(); ++i) {
    if (!(*newCallbacks)[i]) continue; //removed
    auto listener = (*newCallbacks)[i];
    listener.callback(listener.key.c_str(), listener.param, value);
  }
}

HAL_Bool SPIAccelerometerData::GetActive() {
  return m_active;
}

void SPIAccelerometerData::SetActive(HAL_Bool active) {
  HAL_Bool oldValue = m_active.exchange(active);
  if (oldValue != active) {
    InvokeActiveCallback(&MakeBoolean(active));
  }
}

int32_t SPIAccelerometerData::RegisterRangeCallback(HAL_NotifyCallback callback, void* param, HAL_Bool initialNotify) {
  // Return an invalid value on a null callback
  if (callback == nullptr) return -1;
  const char* variableName = "Range";
  auto newCallbacks = std::make_shared<UidVector<NotifyListener>>(*m_rangeCallbacks);
  int uid = newCallbacks->emplace_back(variableName, param, callback);
  if (initialNotify) {
    callback(variableName, param, &MakeEnum(GetRange()));
  }
  m_activeCallbacks = newCallbacks;
  return uid;
}
void SPIAccelerometerData::CancelRangeCallback(int32_t uid) {
  auto newCallbacks = std::make_shared<UidVector<NotifyListener>>(*m_rangeCallbacks);
  newCallbacks->erase(uid);
  m_activeCallbacks = newCallbacks;
}
void SPIAccelerometerData::InvokeRangeCallback(const HAL_Value* value) {
  auto newCallbacks = m_rangeCallbacks;
  for (std::size_t i=0; i<newCallbacks->size(); ++i) {
    if (!(*newCallbacks)[i]) continue; //removed
    auto listener = (*newCallbacks)[i];
    listener.callback(listener.key.c_str(), listener.param, value);
  }
}

uint32_t8_t SPIAccelerometerData::GetRange() {
  return m_range;
}

void SPIAccelerometerData::SetRange(uint32_t8_t range) {
  uint32_t8_t oldValue = m_range.exchange(range);
  if (oldValue != range) {
    InvokeRangeCallback(&MakeEnum(range));
  }
}

int32_t SPIAccelerometerData::RegisterXCallback(HAL_NotifyCallback callback, void* param, HAL_Bool initialNotify) {
  // Return an invalid value on a null callback
  if (callback == nullptr) return -1;
  const char* variableName = "X";
  auto newCallbacks = std::make_shared<UidVector<NotifyListener>>(*m_xCallbacks);
  int uid = newCallbacks->emplace_back(variableName, param, callback);
  if (initialNotify) {
    callback(variableName, param, &MakeDouble(GetX()));
  }
  m_activeCallbacks = newCallbacks;
  return uid;
}
void SPIAccelerometerData::CancelXCallback(int32_t uid) {
  auto newCallbacks = std::make_shared<UidVector<NotifyListener>>(*m_xCallbacks);
  newCallbacks->erase(uid);
  m_activeCallbacks = newCallbacks;
}
void SPIAccelerometerData::InvokeXCallback(const HAL_Value* value) {
  auto newCallbacks = m_xCallbacks;
  for (std::size_t i=0; i<newCallbacks->size(); ++i) {
    if (!(*newCallbacks)[i]) continue; //removed
    auto listener = (*newCallbacks)[i];
    listener.callback(listener.key.c_str(), listener.param, value);
  }
}

double SPIAccelerometerData::GetX() {
  return m_x;
}

void SPIAccelerometerData::SetX(double x) {
  double oldValue = m_x.exchange(x);
  if (oldValue != x) {
    InvokeXCallback(&MakeDouble(x));
  }
}

int32_t SPIAccelerometerData::RegisterYCallback(HAL_NotifyCallback callback, void* param, HAL_Bool initialNotify) {
  // Return an invalid value on a null callback
  if (callback == nullptr) return -1;
  const char* variableName = "Y";
  auto newCallbacks = std::make_shared<UidVector<NotifyListener>>(*m_yCallbacks);
  int uid = newCallbacks->emplace_back(variableName, param, callback);
  if (initialNotify) {
    callback(variableName, param, &MakeDouble(GetY()));
  }
  m_activeCallbacks = newCallbacks;
  return uid;
}
void SPIAccelerometerData::CancelYCallback(int32_t uid) {
  auto newCallbacks = std::make_shared<UidVector<NotifyListener>>(*m_yCallbacks);
  newCallbacks->erase(uid);
  m_activeCallbacks = newCallbacks;
}
void SPIAccelerometerData::InvokeYCallback(const HAL_Value* value) {
  auto newCallbacks = m_yCallbacks;
  for (std::size_t i=0; i<newCallbacks->size(); ++i) {
    if (!(*newCallbacks)[i]) continue; //removed
    auto listener = (*newCallbacks)[i];
    listener.callback(listener.key.c_str(), listener.param, value);
  }
}

double SPIAccelerometerData::GetY() {
  return m_y;
}

void SPIAccelerometerData::SetY(double y) {
  double oldValue = m_y.exchange(y);
  if (oldValue != y) {
    InvokeYCallback(&MakeDouble(y));
  }
}

int32_t SPIAccelerometerData::RegisterZCallback(HAL_NotifyCallback callback, void* param, HAL_Bool initialNotify) {
  // Return an invalid value on a null callback
  if (callback == nullptr) return -1;
  const char* variableName = "Z";
  auto newCallbacks = std::make_shared<UidVector<NotifyListener>>(*m_zCallbacks);
  int uid = newCallbacks->emplace_back(variableName, param, callback);
  if (initialNotify) {
    callback(variableName, param, &MakeDouble(GetZ()));
  }
  m_activeCallbacks = newCallbacks;
  return uid;
}
void SPIAccelerometerData::CancelZCallback(int32_t uid) {
  auto newCallbacks = std::make_shared<UidVector<NotifyListener>>(*m_zCallbacks);
  newCallbacks->erase(uid);
  m_activeCallbacks = newCallbacks;
}
void SPIAccelerometerData::InvokeZCallback(const HAL_Value* value) {
  auto newCallbacks = m_zCallbacks;
  for (std::size_t i=0; i<newCallbacks->size(); ++i) {
    if (!(*newCallbacks)[i]) continue; //removed
    auto listener = (*newCallbacks)[i];
    listener.callback(listener.key.c_str(), listener.param, value);
  }
}

double SPIAccelerometerData::GetZ() {
  return m_z;
}

void SPIAccelerometerData::SetZ(double z) {
  double oldValue = m_z.exchange(z);
  if (oldValue != z) {
    InvokeZCallback(&MakeDouble(z));
  }
}

extern "C" {
int32_t HALSIM_RegisterSPIAccelerometerActiveCallback(int32_t index, HAL_NotifyCallback callback, void* param, HAL_Bool initialNotify) {
  return SimSPIAccelerometerData[index]->RegisterActiveCallback(callback, param, initialNotify);
}

void HALSIM_CancelSPIAccelerometerActiveCallback(int32_t index, int32_t uid) {
  SimSPIAccelerometerData[index]->CancelActiveCallback(uid);
}

HAL_Bool HALSIM_GetSPIAccelerometerActive(int32_t index) {
  return SimSPIAccelerometerData[index]->GetActive();
}

int32_t HALSIM_RegisterSPIAccelerometerRangeCallback(int32_t index, HAL_NotifyCallback callback, void* param, HAL_Bool initialNotify) {
  return SimSPIAccelerometerData[index]->RegisterRangeCallback(callback, param, initialNotify);
}

void HALSIM_CancelSPIAccelerometerRangeCallback(int32_t index, int32_t uid) {
  SimSPIAccelerometerData[index]->CancelRangeCallback(uid);
}

uint32_t8_t HALSIM_GetSPIAccelerometerRange(int32_t index) {
  return SimSPIAccelerometerData[index]->GetRange();
}

int32_t HALSIM_RegisterSPIAccelerometerXCallback(int32_t index, HAL_NotifyCallback callback, void* param, HAL_Bool initialNotify) {
  return SimSPIAccelerometerData[index]->RegisterXCallback(callback, param, initialNotify);
}

void HALSIM_CancelSPIAccelerometerXCallback(int32_t index, int32_t uid) {
  SimSPIAccelerometerData[index]->CancelXCallback(uid);
}

double HALSIM_GetSPIAccelerometerX(int32_t index) {
  return SimSPIAccelerometerData[index]->GetX();
}

void HALSIM_SetSPIAccelerometerX(int32_t index, double x) {
  SimSPIAccelerometerData[index]->SetX(x);
}

int32_t HALSIM_RegisterSPIAccelerometerYCallback(int32_t index, HAL_NotifyCallback callback, void* param, HAL_Bool initialNotify) {
  return SimSPIAccelerometerData[index]->RegisterYCallback(callback, param, initialNotify);
}

void HALSIM_CancelSPIAccelerometerYCallback(int32_t index, int32_t uid) {
  SimSPIAccelerometerData[index]->CancelYCallback(uid);
}

double HALSIM_GetSPIAccelerometerY(int32_t index) {
  return SimSPIAccelerometerData[index]->GetY();
}

void HALSIM_SetSPIAccelerometerY(int32_t index, double y) {
  SimSPIAccelerometerData[index]->SetY(y);
}

int32_t HALSIM_RegisterSPIAccelerometerZCallback(int32_t index, HAL_NotifyCallback callback, void* param, HAL_Bool initialNotify) {
  return SimSPIAccelerometerData[index]->RegisterZCallback(callback, param, initialNotify);
}

void HALSIM_CancelSPIAccelerometerZCallback(int32_t index, int32_t uid) {
  SimSPIAccelerometerData[index]->CancelZCallback(uid);
}

double HALSIM_GetSPIAccelerometerZ(int32_t index) {
  return SimSPIAccelerometerData[index]->GetZ();
}

void HALSIM_SetSPIAccelerometerZ(int32_t index, double z) {
  SimSPIAccelerometerData[index]->SetZ(z);
}

}
