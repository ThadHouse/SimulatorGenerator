#include "AnalogInDataInternal.h"

#include "NotifyCallbackHelpers.h"
#include "../PortsInternal.h"

using namespace hal;

std::unique_ptr<std::shared_ptr<AnalogInData>[]> hal::SimAnalogInData = std::make_unique<std::shared_ptr<AnalogInData>[]>(SIZEINHERE);
void AnalogInData::ResetData() {
  m_initialized = false;
  m_initializedCallbacks = nullptr;
  m_averageBits = 7;
  m_averageBitsCallbacks = nullptr;
  m_oversampleBits = 0;
  m_oversampleBitsCallbacks = nullptr;
  m_voltage = 0.0;
  m_voltageCallbacks = nullptr;
  m_accumulatorInitialized = false;
  m_accumulatorInitializedCallbacks = nullptr;
  m_accumulatorValue = 0;
  m_accumulatorValueCallbacks = nullptr;
  m_accumulatorCount = 0;
  m_accumulatorCountCallbacks = nullptr;
  m_accumlatorCenter = 0;
  m_accumlatorCenterCallbacks = nullptr;
  m_accumlatorDeadband = 0;
  m_accumlatorDeadbandCallbacks = nullptr;
}

int32_t AnalogInData::RegisterInitializedCallback(HAL_NotifyCallback callback, void* param, HAL_Bool initialNotify) {
  HAL_Value* value = nullptr;
  if (initialNotify) value = &MakeBoolean(GetInitialized());
  int32_t newUid = 0;
  auto newCallbacks = RegisterCallback(m_initializedCallbacks, "Initialized", callback, param, value, &newUid);
  if (newCallbacks == nullptr) return newUid;
  m_initializedCallbacks = newCallbacks;
  return newUid;
}

void AnalogInData::CancelInitializedCallback(int32_t uid) {
  m_activeCallbacks = CancelCallback(m_initializedCallbacks, uid);
}

void AnalogInData::InvokeInitializedCallback(const HAL_Value* value) {
  InvokeCallback(m_initializedCallbacks, "Initialized", value);
}

HAL_Bool AnalogInData::GetInitialized() {
  return m_initialized;
}

void AnalogInData::SetInitialized(HAL_Bool initialized) {
  HAL_Bool oldValue = m_initialized.exchange(initialized);
  if (oldValue != initialized) {
    InvokeInitializedCallback(&MakeBoolean(initialized));
  }
}

int32_t AnalogInData::RegisterAverageBitsCallback(HAL_NotifyCallback callback, void* param, HAL_Bool initialNotify) {
  HAL_Value* value = nullptr;
  if (initialNotify) value = &MakeInt(GetAverageBits());
  int32_t newUid = 0;
  auto newCallbacks = RegisterCallback(m_averageBitsCallbacks, "AverageBits", callback, param, value, &newUid);
  if (newCallbacks == nullptr) return newUid;
  m_averageBitsCallbacks = newCallbacks;
  return newUid;
}

void AnalogInData::CancelAverageBitsCallback(int32_t uid) {
  m_activeCallbacks = CancelCallback(m_averageBitsCallbacks, uid);
}

void AnalogInData::InvokeAverageBitsCallback(const HAL_Value* value) {
  InvokeCallback(m_averageBitsCallbacks, "AverageBits", value);
}

int32_t AnalogInData::GetAverageBits() {
  return m_averageBits;
}

void AnalogInData::SetAverageBits(int32_t averageBits) {
  int32_t oldValue = m_averageBits.exchange(averageBits);
  if (oldValue != averageBits) {
    InvokeAverageBitsCallback(&MakeInt(averageBits));
  }
}

int32_t AnalogInData::RegisterOversampleBitsCallback(HAL_NotifyCallback callback, void* param, HAL_Bool initialNotify) {
  HAL_Value* value = nullptr;
  if (initialNotify) value = &MakeInt(GetOversampleBits());
  int32_t newUid = 0;
  auto newCallbacks = RegisterCallback(m_oversampleBitsCallbacks, "OversampleBits", callback, param, value, &newUid);
  if (newCallbacks == nullptr) return newUid;
  m_oversampleBitsCallbacks = newCallbacks;
  return newUid;
}

void AnalogInData::CancelOversampleBitsCallback(int32_t uid) {
  m_activeCallbacks = CancelCallback(m_oversampleBitsCallbacks, uid);
}

void AnalogInData::InvokeOversampleBitsCallback(const HAL_Value* value) {
  InvokeCallback(m_oversampleBitsCallbacks, "OversampleBits", value);
}

int32_t AnalogInData::GetOversampleBits() {
  return m_oversampleBits;
}

void AnalogInData::SetOversampleBits(int32_t oversampleBits) {
  int32_t oldValue = m_oversampleBits.exchange(oversampleBits);
  if (oldValue != oversampleBits) {
    InvokeOversampleBitsCallback(&MakeInt(oversampleBits));
  }
}

int32_t AnalogInData::RegisterVoltageCallback(HAL_NotifyCallback callback, void* param, HAL_Bool initialNotify) {
  HAL_Value* value = nullptr;
  if (initialNotify) value = &MakeDouble(GetVoltage());
  int32_t newUid = 0;
  auto newCallbacks = RegisterCallback(m_voltageCallbacks, "Voltage", callback, param, value, &newUid);
  if (newCallbacks == nullptr) return newUid;
  m_voltageCallbacks = newCallbacks;
  return newUid;
}

void AnalogInData::CancelVoltageCallback(int32_t uid) {
  m_activeCallbacks = CancelCallback(m_voltageCallbacks, uid);
}

void AnalogInData::InvokeVoltageCallback(const HAL_Value* value) {
  InvokeCallback(m_voltageCallbacks, "Voltage", value);
}

double AnalogInData::GetVoltage() {
  return m_voltage;
}

void AnalogInData::SetVoltage(double voltage) {
  double oldValue = m_voltage.exchange(voltage);
  if (oldValue != voltage) {
    InvokeVoltageCallback(&MakeDouble(voltage));
  }
}

int32_t AnalogInData::RegisterAccumulatorInitializedCallback(HAL_NotifyCallback callback, void* param, HAL_Bool initialNotify) {
  HAL_Value* value = nullptr;
  if (initialNotify) value = &MakeBoolean(GetAccumulatorInitialized());
  int32_t newUid = 0;
  auto newCallbacks = RegisterCallback(m_accumulatorInitializedCallbacks, "AccumulatorInitialized", callback, param, value, &newUid);
  if (newCallbacks == nullptr) return newUid;
  m_accumulatorInitializedCallbacks = newCallbacks;
  return newUid;
}

void AnalogInData::CancelAccumulatorInitializedCallback(int32_t uid) {
  m_activeCallbacks = CancelCallback(m_accumulatorInitializedCallbacks, uid);
}

void AnalogInData::InvokeAccumulatorInitializedCallback(const HAL_Value* value) {
  InvokeCallback(m_accumulatorInitializedCallbacks, "AccumulatorInitialized", value);
}

HAL_Bool AnalogInData::GetAccumulatorInitialized() {
  return m_accumulatorInitialized;
}

void AnalogInData::SetAccumulatorInitialized(HAL_Bool accumulatorInitialized) {
  HAL_Bool oldValue = m_accumulatorInitialized.exchange(accumulatorInitialized);
  if (oldValue != accumulatorInitialized) {
    InvokeAccumulatorInitializedCallback(&MakeBoolean(accumulatorInitialized));
  }
}

int32_t AnalogInData::RegisterAccumulatorValueCallback(HAL_NotifyCallback callback, void* param, HAL_Bool initialNotify) {
  HAL_Value* value = nullptr;
  if (initialNotify) value = &MakeLong(GetAccumulatorValue());
  int32_t newUid = 0;
  auto newCallbacks = RegisterCallback(m_accumulatorValueCallbacks, "AccumulatorValue", callback, param, value, &newUid);
  if (newCallbacks == nullptr) return newUid;
  m_accumulatorValueCallbacks = newCallbacks;
  return newUid;
}

void AnalogInData::CancelAccumulatorValueCallback(int32_t uid) {
  m_activeCallbacks = CancelCallback(m_accumulatorValueCallbacks, uid);
}

void AnalogInData::InvokeAccumulatorValueCallback(const HAL_Value* value) {
  InvokeCallback(m_accumulatorValueCallbacks, "AccumulatorValue", value);
}

int64_t AnalogInData::GetAccumulatorValue() {
  return m_accumulatorValue;
}

void AnalogInData::SetAccumulatorValue(int64_t accumulatorValue) {
  int64_t oldValue = m_accumulatorValue.exchange(accumulatorValue);
  if (oldValue != accumulatorValue) {
    InvokeAccumulatorValueCallback(&MakeLong(accumulatorValue));
  }
}

int32_t AnalogInData::RegisterAccumulatorCountCallback(HAL_NotifyCallback callback, void* param, HAL_Bool initialNotify) {
  HAL_Value* value = nullptr;
  if (initialNotify) value = &MakeLong(GetAccumulatorCount());
  int32_t newUid = 0;
  auto newCallbacks = RegisterCallback(m_accumulatorCountCallbacks, "AccumulatorCount", callback, param, value, &newUid);
  if (newCallbacks == nullptr) return newUid;
  m_accumulatorCountCallbacks = newCallbacks;
  return newUid;
}

void AnalogInData::CancelAccumulatorCountCallback(int32_t uid) {
  m_activeCallbacks = CancelCallback(m_accumulatorCountCallbacks, uid);
}

void AnalogInData::InvokeAccumulatorCountCallback(const HAL_Value* value) {
  InvokeCallback(m_accumulatorCountCallbacks, "AccumulatorCount", value);
}

int64_t AnalogInData::GetAccumulatorCount() {
  return m_accumulatorCount;
}

void AnalogInData::SetAccumulatorCount(int64_t accumulatorCount) {
  int64_t oldValue = m_accumulatorCount.exchange(accumulatorCount);
  if (oldValue != accumulatorCount) {
    InvokeAccumulatorCountCallback(&MakeLong(accumulatorCount));
  }
}

int32_t AnalogInData::RegisterAccumlatorCenterCallback(HAL_NotifyCallback callback, void* param, HAL_Bool initialNotify) {
  HAL_Value* value = nullptr;
  if (initialNotify) value = &MakeInt(GetAccumlatorCenter());
  int32_t newUid = 0;
  auto newCallbacks = RegisterCallback(m_accumlatorCenterCallbacks, "AccumlatorCenter", callback, param, value, &newUid);
  if (newCallbacks == nullptr) return newUid;
  m_accumlatorCenterCallbacks = newCallbacks;
  return newUid;
}

void AnalogInData::CancelAccumlatorCenterCallback(int32_t uid) {
  m_activeCallbacks = CancelCallback(m_accumlatorCenterCallbacks, uid);
}

void AnalogInData::InvokeAccumlatorCenterCallback(const HAL_Value* value) {
  InvokeCallback(m_accumlatorCenterCallbacks, "AccumlatorCenter", value);
}

int32_t AnalogInData::GetAccumlatorCenter() {
  return m_accumlatorCenter;
}

void AnalogInData::SetAccumlatorCenter(int32_t accumlatorCenter) {
  int32_t oldValue = m_accumlatorCenter.exchange(accumlatorCenter);
  if (oldValue != accumlatorCenter) {
    InvokeAccumlatorCenterCallback(&MakeInt(accumlatorCenter));
  }
}

int32_t AnalogInData::RegisterAccumlatorDeadbandCallback(HAL_NotifyCallback callback, void* param, HAL_Bool initialNotify) {
  HAL_Value* value = nullptr;
  if (initialNotify) value = &MakeInt(GetAccumlatorDeadband());
  int32_t newUid = 0;
  auto newCallbacks = RegisterCallback(m_accumlatorDeadbandCallbacks, "AccumlatorDeadband", callback, param, value, &newUid);
  if (newCallbacks == nullptr) return newUid;
  m_accumlatorDeadbandCallbacks = newCallbacks;
  return newUid;
}

void AnalogInData::CancelAccumlatorDeadbandCallback(int32_t uid) {
  m_activeCallbacks = CancelCallback(m_accumlatorDeadbandCallbacks, uid);
}

void AnalogInData::InvokeAccumlatorDeadbandCallback(const HAL_Value* value) {
  InvokeCallback(m_accumlatorDeadbandCallbacks, "AccumlatorDeadband", value);
}

int32_t AnalogInData::GetAccumlatorDeadband() {
  return m_accumlatorDeadband;
}

void AnalogInData::SetAccumlatorDeadband(int32_t accumlatorDeadband) {
  int32_t oldValue = m_accumlatorDeadband.exchange(accumlatorDeadband);
  if (oldValue != accumlatorDeadband) {
    InvokeAccumlatorDeadbandCallback(&MakeInt(accumlatorDeadband));
  }
}

extern "C" {
int32_t HALSIM_RegisterAnalogInInitializedCallback(int32_t index, HAL_NotifyCallback callback, void* param, HAL_Bool initialNotify) {
  return SimAnalogInData[index]->RegisterInitializedCallback(callback, param, initialNotify);
}

void HALSIM_CancelAnalogInInitializedCallback(int32_t index, int32_t uid) {
  SimAnalogInData[index]->CancelInitializedCallback(uid);
}

HAL_Bool HALSIM_GetAnalogInInitialized(int32_t index) {
  return SimAnalogInData[index]->GetInitialized();
}

int32_t HALSIM_RegisterAnalogInAverageBitsCallback(int32_t index, HAL_NotifyCallback callback, void* param, HAL_Bool initialNotify) {
  return SimAnalogInData[index]->RegisterAverageBitsCallback(callback, param, initialNotify);
}

void HALSIM_CancelAnalogInAverageBitsCallback(int32_t index, int32_t uid) {
  SimAnalogInData[index]->CancelAverageBitsCallback(uid);
}

int32_t HALSIM_GetAnalogInAverageBits(int32_t index) {
  return SimAnalogInData[index]->GetAverageBits();
}

int32_t HALSIM_RegisterAnalogInOversampleBitsCallback(int32_t index, HAL_NotifyCallback callback, void* param, HAL_Bool initialNotify) {
  return SimAnalogInData[index]->RegisterOversampleBitsCallback(callback, param, initialNotify);
}

void HALSIM_CancelAnalogInOversampleBitsCallback(int32_t index, int32_t uid) {
  SimAnalogInData[index]->CancelOversampleBitsCallback(uid);
}

int32_t HALSIM_GetAnalogInOversampleBits(int32_t index) {
  return SimAnalogInData[index]->GetOversampleBits();
}

int32_t HALSIM_RegisterAnalogInVoltageCallback(int32_t index, HAL_NotifyCallback callback, void* param, HAL_Bool initialNotify) {
  return SimAnalogInData[index]->RegisterVoltageCallback(callback, param, initialNotify);
}

void HALSIM_CancelAnalogInVoltageCallback(int32_t index, int32_t uid) {
  SimAnalogInData[index]->CancelVoltageCallback(uid);
}

double HALSIM_GetAnalogInVoltage(int32_t index) {
  return SimAnalogInData[index]->GetVoltage();
}

void HALSIM_SetAnalogInVoltage(int32_t index, double voltage) {
  SimAnalogInData[index]->SetVoltage(voltage);
}

int32_t HALSIM_RegisterAnalogInAccumulatorInitializedCallback(int32_t index, HAL_NotifyCallback callback, void* param, HAL_Bool initialNotify) {
  return SimAnalogInData[index]->RegisterAccumulatorInitializedCallback(callback, param, initialNotify);
}

void HALSIM_CancelAnalogInAccumulatorInitializedCallback(int32_t index, int32_t uid) {
  SimAnalogInData[index]->CancelAccumulatorInitializedCallback(uid);
}

HAL_Bool HALSIM_GetAnalogInAccumulatorInitialized(int32_t index) {
  return SimAnalogInData[index]->GetAccumulatorInitialized();
}

int32_t HALSIM_RegisterAnalogInAccumulatorValueCallback(int32_t index, HAL_NotifyCallback callback, void* param, HAL_Bool initialNotify) {
  return SimAnalogInData[index]->RegisterAccumulatorValueCallback(callback, param, initialNotify);
}

void HALSIM_CancelAnalogInAccumulatorValueCallback(int32_t index, int32_t uid) {
  SimAnalogInData[index]->CancelAccumulatorValueCallback(uid);
}

int64_t HALSIM_GetAnalogInAccumulatorValue(int32_t index) {
  return SimAnalogInData[index]->GetAccumulatorValue();
}

void HALSIM_SetAnalogInAccumulatorValue(int32_t index, int64_t accumulatorValue) {
  SimAnalogInData[index]->SetAccumulatorValue(accumulatorValue);
}

int32_t HALSIM_RegisterAnalogInAccumulatorCountCallback(int32_t index, HAL_NotifyCallback callback, void* param, HAL_Bool initialNotify) {
  return SimAnalogInData[index]->RegisterAccumulatorCountCallback(callback, param, initialNotify);
}

void HALSIM_CancelAnalogInAccumulatorCountCallback(int32_t index, int32_t uid) {
  SimAnalogInData[index]->CancelAccumulatorCountCallback(uid);
}

int64_t HALSIM_GetAnalogInAccumulatorCount(int32_t index) {
  return SimAnalogInData[index]->GetAccumulatorCount();
}

void HALSIM_SetAnalogInAccumulatorCount(int32_t index, int64_t accumulatorCount) {
  SimAnalogInData[index]->SetAccumulatorCount(accumulatorCount);
}

int32_t HALSIM_RegisterAnalogInAccumlatorCenterCallback(int32_t index, HAL_NotifyCallback callback, void* param, HAL_Bool initialNotify) {
  return SimAnalogInData[index]->RegisterAccumlatorCenterCallback(callback, param, initialNotify);
}

void HALSIM_CancelAnalogInAccumlatorCenterCallback(int32_t index, int32_t uid) {
  SimAnalogInData[index]->CancelAccumlatorCenterCallback(uid);
}

int32_t HALSIM_GetAnalogInAccumlatorCenter(int32_t index) {
  return SimAnalogInData[index]->GetAccumlatorCenter();
}

int32_t HALSIM_RegisterAnalogInAccumlatorDeadbandCallback(int32_t index, HAL_NotifyCallback callback, void* param, HAL_Bool initialNotify) {
  return SimAnalogInData[index]->RegisterAccumlatorDeadbandCallback(callback, param, initialNotify);
}

void HALSIM_CancelAnalogInAccumlatorDeadbandCallback(int32_t index, int32_t uid) {
  SimAnalogInData[index]->CancelAccumlatorDeadbandCallback(uid);
}

int32_t HALSIM_GetAnalogInAccumlatorDeadband(int32_t index) {
  return SimAnalogInData[index]->GetAccumlatorDeadband();
}

}
