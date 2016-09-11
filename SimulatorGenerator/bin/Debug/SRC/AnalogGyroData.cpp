#include "AnalogGyroDataInternal.h"

#include "NotifyCallbackHelpers.h"
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
  HAL_Value* value = nullptr;
  if (initialNotify) value = &MakeDouble(GetAngle());
  int32_t newUid = 0;
  auto newCallbacks = RegisterCallback(m_angleCallbacks, "Angle", callback, param, value, &newUid);
  if (newCallbacks == nullptr) return newUid;
  m_angleCallbacks = newCallbacks;
  return newUid;
}

void AnalogGyroData::CancelAngleCallback(int32_t uid) {
  m_activeCallbacks = CancelCallback(m_angleCallbacks, uid);
}

void AnalogGyroData::InvokeAngleCallback(const HAL_Value* value) {
  InvokeCallback(m_angleCallbacks, "Angle", value);
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
  HAL_Value* value = nullptr;
  if (initialNotify) value = &MakeDouble(GetRate());
  int32_t newUid = 0;
  auto newCallbacks = RegisterCallback(m_rateCallbacks, "Rate", callback, param, value, &newUid);
  if (newCallbacks == nullptr) return newUid;
  m_rateCallbacks = newCallbacks;
  return newUid;
}

void AnalogGyroData::CancelRateCallback(int32_t uid) {
  m_activeCallbacks = CancelCallback(m_rateCallbacks, uid);
}

void AnalogGyroData::InvokeRateCallback(const HAL_Value* value) {
  InvokeCallback(m_rateCallbacks, "Rate", value);
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
  HAL_Value* value = nullptr;
  if (initialNotify) value = &MakeBoolean(GetInitialized());
  int32_t newUid = 0;
  auto newCallbacks = RegisterCallback(m_initializedCallbacks, "Initialized", callback, param, value, &newUid);
  if (newCallbacks == nullptr) return newUid;
  m_initializedCallbacks = newCallbacks;
  return newUid;
}

void AnalogGyroData::CancelInitializedCallback(int32_t uid) {
  m_activeCallbacks = CancelCallback(m_initializedCallbacks, uid);
}

void AnalogGyroData::InvokeInitializedCallback(const HAL_Value* value) {
  InvokeCallback(m_initializedCallbacks, "Initialized", value);
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
