#include "AnalogGyroDataInternal.h"

#include "../PortsInternal.h"

using namespace hal;

std::unique_ptr<std::shared_ptr<AnalogGyroData>[]> hal::SimAnalogGyroData = std::make_unique<std::shared_ptr<AnalogGyroData>[]>(SIZEINHERE);
void AnalogGyroData::ResetData() {
  m_angle = 0.0;
  m_angleCallbacks = nullptr;
  m_rate = 0.0;
  m_rateCallbacks = nullptr;
  m_initialized = false;
  m_initializedCallbacks = nullptr;
}

int32_t AnalogGyroData::RegisterAngleCallback(HAL_NotifyCallback callback, void* param, HAL_Bool initialNotify) {
  // Return an invalid value on a null callback
  if (callback == nullptr) return -1;
  const char* variableName = "Angle";
  auto newCallbacks = std::make_shared<UidVector<NotifyListener>>(*m_angleCallbacks);
  int uid = newCallbacks->emplace_back(variableName, param, callback);
  if (initialNotify) {
    callback(variableName, param, &MakeDouble(GetAngle()));
  }
  m_activeCallbacks = newCallbacks;
  return uid;
}
void AnalogGyroData::CancelAngleCallback(int32_t uid) {
  auto newCallbacks = std::make_shared<UidVector<NotifyListener>>(*m_angleCallbacks);
  newCallbacks->erase(uid);
  m_activeCallbacks = newCallbacks;
}
void AnalogGyroData::InvokeAngleCallback(const HAL_Value* value) {
  auto newCallbacks = m_angleCallbacks;
  for (std::size_t i=0; i<newCallbacks->size(); ++i) {
    if (!(*newCallbacks)[i]) continue; //removed
    auto listener = (*newCallbacks)[i];
    listener.callback(listener.key.c_str(), listener.param, value);
  }
}

double AnalogGyroData::GetAngle() {
  return m_angle;
}

void AnalogGyroData::SetAngle(double angle) {
  double oldValue = m_angle.exchange(angle);
  if (oldValue != angle) {
    InvokeAngleCallback(&MakeDouble(angle));
  }
}

int32_t AnalogGyroData::RegisterRateCallback(HAL_NotifyCallback callback, void* param, HAL_Bool initialNotify) {
  // Return an invalid value on a null callback
  if (callback == nullptr) return -1;
  const char* variableName = "Rate";
  auto newCallbacks = std::make_shared<UidVector<NotifyListener>>(*m_rateCallbacks);
  int uid = newCallbacks->emplace_back(variableName, param, callback);
  if (initialNotify) {
    callback(variableName, param, &MakeDouble(GetRate()));
  }
  m_activeCallbacks = newCallbacks;
  return uid;
}
void AnalogGyroData::CancelRateCallback(int32_t uid) {
  auto newCallbacks = std::make_shared<UidVector<NotifyListener>>(*m_rateCallbacks);
  newCallbacks->erase(uid);
  m_activeCallbacks = newCallbacks;
}
void AnalogGyroData::InvokeRateCallback(const HAL_Value* value) {
  auto newCallbacks = m_rateCallbacks;
  for (std::size_t i=0; i<newCallbacks->size(); ++i) {
    if (!(*newCallbacks)[i]) continue; //removed
    auto listener = (*newCallbacks)[i];
    listener.callback(listener.key.c_str(), listener.param, value);
  }
}

double AnalogGyroData::GetRate() {
  return m_rate;
}

void AnalogGyroData::SetRate(double rate) {
  double oldValue = m_rate.exchange(rate);
  if (oldValue != rate) {
    InvokeRateCallback(&MakeDouble(rate));
  }
}

int32_t AnalogGyroData::RegisterInitializedCallback(HAL_NotifyCallback callback, void* param, HAL_Bool initialNotify) {
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
void AnalogGyroData::CancelInitializedCallback(int32_t uid) {
  auto newCallbacks = std::make_shared<UidVector<NotifyListener>>(*m_initializedCallbacks);
  newCallbacks->erase(uid);
  m_activeCallbacks = newCallbacks;
}
void AnalogGyroData::InvokeInitializedCallback(const HAL_Value* value) {
  auto newCallbacks = m_initializedCallbacks;
  for (std::size_t i=0; i<newCallbacks->size(); ++i) {
    if (!(*newCallbacks)[i]) continue; //removed
    auto listener = (*newCallbacks)[i];
    listener.callback(listener.key.c_str(), listener.param, value);
  }
}

HAL_Bool AnalogGyroData::GetInitialized() {
  return m_initialized;
}

void AnalogGyroData::SetInitialized(HAL_Bool initialized) {
  HAL_Bool oldValue = m_initialized.exchange(initialized);
  if (oldValue != initialized) {
    InvokeInitializedCallback(&MakeBoolean(initialized));
  }
}

extern "C" {
int32_t HALSIM_RegisterAnalogGyroAngleCallback(int32_t index, HAL_NotifyCallback callback, void* param, HAL_Bool initialNotify) {
  return SimAnalogGyroData[index]->RegisterAngleCallback(callback, param, initialNotify);
}

void HALSIM_CancelAnalogGyroAngleCallback(int32_t index, int32_t uid) {
  SimAnalogGyroData[index]->CancelAngleCallback(uid);
}

double HALSIM_GetAnalogGyroAngle(int32_t index) {
  return SimAnalogGyroData[index]->GetAngle();
}

void HALSIM_SetAnalogGyroAngle(int32_t index, double angle) {
  SimAnalogGyroData[index]->SetAngle(angle);
}

int32_t HALSIM_RegisterAnalogGyroRateCallback(int32_t index, HAL_NotifyCallback callback, void* param, HAL_Bool initialNotify) {
  return SimAnalogGyroData[index]->RegisterRateCallback(callback, param, initialNotify);
}

void HALSIM_CancelAnalogGyroRateCallback(int32_t index, int32_t uid) {
  SimAnalogGyroData[index]->CancelRateCallback(uid);
}

double HALSIM_GetAnalogGyroRate(int32_t index) {
  return SimAnalogGyroData[index]->GetRate();
}

void HALSIM_SetAnalogGyroRate(int32_t index, double rate) {
  SimAnalogGyroData[index]->SetRate(rate);
}

int32_t HALSIM_RegisterAnalogGyroInitializedCallback(int32_t index, HAL_NotifyCallback callback, void* param, HAL_Bool initialNotify) {
  return SimAnalogGyroData[index]->RegisterInitializedCallback(callback, param, initialNotify);
}

void HALSIM_CancelAnalogGyroInitializedCallback(int32_t index, int32_t uid) {
  SimAnalogGyroData[index]->CancelInitializedCallback(uid);
}

HAL_Bool HALSIM_GetAnalogGyroInitialized(int32_t index) {
  return SimAnalogGyroData[index]->GetInitialized();
}

}
