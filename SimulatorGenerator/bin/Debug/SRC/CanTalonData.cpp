#include "CanTalonDataInternal.h"

#include "NotifyCallbackHelpers.h"
#include "../PortsInternal.h"

using namespace hal;

CanTalonData hal::SimCanTalonData[SIZEINHERE];
void CanTalonData::ResetData() {
  m_profileParamSlot0_P = 0.0;
  m_profileParamSlot0_PCallbacks = nullptr;
  m_profileParamSlot0_I = 0.0;
  m_profileParamSlot0_ICallbacks = nullptr;
  m_profileParamSlot0_D = 0.0;
  m_profileParamSlot0_DCallbacks = nullptr;
  m_profileParamSlot0_F = 0.0;
  m_profileParamSlot0_FCallbacks = nullptr;
  m_profileParamSlot0_IZone = 0;
  m_profileParamSlot0_IZoneCallbacks = nullptr;
  m_profileParamSlot0_CloseLoopRampRate = 0;
  m_profileParamSlot0_CloseLoopRampRateCallbacks = nullptr;
  m_profileParamSlot1_P = 0.0;
  m_profileParamSlot1_PCallbacks = nullptr;
  m_profileParamSlot1_I = 0.0;
  m_profileParamSlot1_ICallbacks = nullptr;
  m_profileParamSlot1_D = 0.0;
  m_profileParamSlot1_DCallbacks = nullptr;
  m_profileParamSlot1_F = 0.0;
  m_profileParamSlot1_FCallbacks = nullptr;
  m_profileParamSlot1_IZone = 0;
  m_profileParamSlot1_IZoneCallbacks = nullptr;
  m_profileParamSlot1_CloseLoopRampRate = 0;
  m_profileParamSlot1_CloseLoopRampRateCallbacks = nullptr;
  m_profileParamSoftLimitForThreshold = 0.0;
  m_profileParamSoftLimitForThresholdCallbacks = nullptr;
  m_profileParamSoftLimitRevThreshold = 0.0;
  m_profileParamSoftLimitRevThresholdCallbacks = nullptr;
  m_profileParamSoftLimitForEnable = 0.0;
  m_profileParamSoftLimitForEnableCallbacks = nullptr;
  m_profileParamSoftLimitRevEnable = 0.0;
  m_profileParamSoftLimitRevEnableCallbacks = nullptr;
  m_onBoot_BrakeMode = 0.0;
  m_onBoot_BrakeModeCallbacks = nullptr;
  m_onBoot_LimitSwitch_Forward_NormallyClosed = 0.0;
  m_onBoot_LimitSwitch_Forward_NormallyClosedCallbacks = nullptr;
  m_onBoot_LimitSwitch_Reverse_NormallyClosed = 0.0;
  m_onBoot_LimitSwitch_Reverse_NormallyClosedCallbacks = nullptr;
  m_onBoot_LimitSwitch_Forward_Disable = 0.0;
  m_onBoot_LimitSwitch_Forward_DisableCallbacks = nullptr;
  m_onBoot_LimitSwitch_Reverse_Disable = 0.0;
  m_onBoot_LimitSwitch_Reverse_DisableCallbacks = nullptr;
  m_fault_OverTemp = 0.0;
  m_fault_OverTempCallbacks = nullptr;
  m_fault_UnderVoltage = 0.0;
  m_fault_UnderVoltageCallbacks = nullptr;
  m_fault_ForLim = 0.0;
  m_fault_ForLimCallbacks = nullptr;
  m_fault_RevLim = 0.0;
  m_fault_RevLimCallbacks = nullptr;
  m_fault_HardwareFailure = 0.0;
  m_fault_HardwareFailureCallbacks = nullptr;
  m_fault_ForSoftLim = 0.0;
  m_fault_ForSoftLimCallbacks = nullptr;
  m_fault_RevSoftLim = 0.0;
  m_fault_RevSoftLimCallbacks = nullptr;
  m_stckyFault_OverTemp = 0.0;
  m_stckyFault_OverTempCallbacks = nullptr;
  m_stckyFault_UnderVoltage = 0.0;
  m_stckyFault_UnderVoltageCallbacks = nullptr;
  m_stckyFault_ForLim = 0.0;
  m_stckyFault_ForLimCallbacks = nullptr;
  m_stckyFault_RevLim = 0.0;
  m_stckyFault_RevLimCallbacks = nullptr;
  m_stckyFault_ForSoftLim = 0.0;
  m_stckyFault_ForSoftLimCallbacks = nullptr;
  m_stckyFault_RevSoftLim = 0.0;
  m_stckyFault_RevSoftLimCallbacks = nullptr;
  m_appliedThrottle = 0.0;
  m_appliedThrottleCallbacks = nullptr;
  m_closeLoopErr = 0.0;
  m_closeLoopErrCallbacks = nullptr;
  m_feedbackDeviceSelect = 0.0;
  m_feedbackDeviceSelectCallbacks = nullptr;
  m_revMotDuringCloseLoopEn = false;
  m_revMotDuringCloseLoopEnCallbacks = nullptr;
  m_modeSelect = 0.0;
  m_modeSelectCallbacks = nullptr;
  m_profileSlotSelect = 0.0;
  m_profileSlotSelectCallbacks = nullptr;
  m_rampThrottle = 0.0;
  m_rampThrottleCallbacks = nullptr;
  m_revFeedbackSensor = false;
  m_revFeedbackSensorCallbacks = nullptr;
  m_limitSwitchEn = 0.0;
  m_limitSwitchEnCallbacks = nullptr;
  m_limitSwitchClosedFor = false;
  m_limitSwitchClosedForCallbacks = nullptr;
  m_limitSwitchClosedRev = false;
  m_limitSwitchClosedRevCallbacks = nullptr;
  m_sensorPosition = 0.0;
  m_sensorPositionCallbacks = nullptr;
  m_sensorVelocity = 0.0;
  m_sensorVelocityCallbacks = nullptr;
  m_current = 0.0;
  m_currentCallbacks = nullptr;
  m_brakeIsEnabled = false;
  m_brakeIsEnabledCallbacks = nullptr;
  m_encPosition = 0.0;
  m_encPositionCallbacks = nullptr;
  m_encVel = 0.0;
  m_encVelCallbacks = nullptr;
  m_encIndexRiseEvents = 0.0;
  m_encIndexRiseEventsCallbacks = nullptr;
  m_quadApin = 0.0;
  m_quadApinCallbacks = nullptr;
  m_quadBpin = 0.0;
  m_quadBpinCallbacks = nullptr;
  m_quadIdxpin = 0.0;
  m_quadIdxpinCallbacks = nullptr;
  m_analogInWithOv = 0.0;
  m_analogInWithOvCallbacks = nullptr;
  m_analogInVel = 0.0;
  m_analogInVelCallbacks = nullptr;
  m_temp = 0.0;
  m_tempCallbacks = nullptr;
  m_batteryV = 0.0;
  m_batteryVCallbacks = nullptr;
  m_resetCount = 0.0;
  m_resetCountCallbacks = nullptr;
  m_resetFlags = 0.0;
  m_resetFlagsCallbacks = nullptr;
  m_firmVers = 0.0;
  m_firmVersCallbacks = nullptr;
  m_settingsChanged = 0.0;
  m_settingsChangedCallbacks = nullptr;
  m_quadFilterEn = 0.0;
  m_quadFilterEnCallbacks = nullptr;
  m_pidIaccum = 0.0;
  m_pidIaccumCallbacks = nullptr;
  m_ainPosition = 0.0;
  m_ainPositionCallbacks = nullptr;
  m_profileParamSlot0_AllowableClosedLoopErr = 0.0;
  m_profileParamSlot0_AllowableClosedLoopErrCallbacks = nullptr;
  m_profileParamSlot1_AllowableClosedLoopErr = 0.0;
  m_profileParamSlot1_AllowableClosedLoopErrCallbacks = nullptr;
  m_numberEncoderCPR = 0.0;
  m_numberEncoderCPRCallbacks = nullptr;
  m_numberPotTurns = 0.0;
  m_numberPotTurnsCallbacks = nullptr;
  m_m_overrideLimitSwitch = 0.0;
  m_m_overrideLimitSwitchCallbacks = nullptr;
  m_m_overrideBrakeType = 0.0;
  m_m_overrideBrakeTypeCallbacks = nullptr;
  m_m_demand = 0.0;
  m_m_demandCallbacks = nullptr;
  m_m_percentVBusValue = 0.0;
  m_m_percentVBusValueCallbacks = nullptr;
  m_m_voltageCompensationRate = 0.0;
  m_m_voltageCompensationRateCallbacks = nullptr;
}

int32_t CanTalonData::RegisterProfileParamSlot0_PCallback(HAL_NotifyCallback callback, void* param, HAL_Bool initialNotify) {
  // Must return -1 on a null callback for error handling
  if (callback == nullptr) return -1;
  int32_t newUid = 0;
 {
    std::lock_guard<std::mutex> lock(m_registerMutex);
    m_profileParamSlot0_PCallbacks = RegisterCallback(m_profileParamSlot0_PCallbacks, "ProfileParamSlot0_P", callback, param, &newUid);
  }
  if (initialNotify) {
    // We know that the callback is not null because of earlier null check
    HAL_Value value = MakeDouble(GetProfileParamSlot0_P());
    callback("ProfileParamSlot0_P", param, &value);
  }
  return newUid;
}

void CanTalonData::CancelProfileParamSlot0_PCallback(int32_t uid) {
  m_profileParamSlot0_PCallbacks = CancelCallback(m_profileParamSlot0_PCallbacks, uid);
}

void CanTalonData::InvokeProfileParamSlot0_PCallback(HAL_Value value) {
  InvokeCallback(m_profileParamSlot0_PCallbacks, "ProfileParamSlot0_P", &value);
}

double CanTalonData::GetProfileParamSlot0_P() {
  return m_profileParamSlot0_P;
}

void CanTalonData::SetProfileParamSlot0_P(double profileParamSlot0_P) {
  double oldValue = m_profileParamSlot0_P.exchange(profileParamSlot0_P);
  if (oldValue != profileParamSlot0_P) {
    InvokeProfileParamSlot0_PCallback(MakeDouble(profileParamSlot0_P));
  }
}

int32_t CanTalonData::RegisterProfileParamSlot0_ICallback(HAL_NotifyCallback callback, void* param, HAL_Bool initialNotify) {
  // Must return -1 on a null callback for error handling
  if (callback == nullptr) return -1;
  int32_t newUid = 0;
 {
    std::lock_guard<std::mutex> lock(m_registerMutex);
    m_profileParamSlot0_ICallbacks = RegisterCallback(m_profileParamSlot0_ICallbacks, "ProfileParamSlot0_I", callback, param, &newUid);
  }
  if (initialNotify) {
    // We know that the callback is not null because of earlier null check
    HAL_Value value = MakeDouble(GetProfileParamSlot0_I());
    callback("ProfileParamSlot0_I", param, &value);
  }
  return newUid;
}

void CanTalonData::CancelProfileParamSlot0_ICallback(int32_t uid) {
  m_profileParamSlot0_ICallbacks = CancelCallback(m_profileParamSlot0_ICallbacks, uid);
}

void CanTalonData::InvokeProfileParamSlot0_ICallback(HAL_Value value) {
  InvokeCallback(m_profileParamSlot0_ICallbacks, "ProfileParamSlot0_I", &value);
}

double CanTalonData::GetProfileParamSlot0_I() {
  return m_profileParamSlot0_I;
}

void CanTalonData::SetProfileParamSlot0_I(double profileParamSlot0_I) {
  double oldValue = m_profileParamSlot0_I.exchange(profileParamSlot0_I);
  if (oldValue != profileParamSlot0_I) {
    InvokeProfileParamSlot0_ICallback(MakeDouble(profileParamSlot0_I));
  }
}

int32_t CanTalonData::RegisterProfileParamSlot0_DCallback(HAL_NotifyCallback callback, void* param, HAL_Bool initialNotify) {
  // Must return -1 on a null callback for error handling
  if (callback == nullptr) return -1;
  int32_t newUid = 0;
 {
    std::lock_guard<std::mutex> lock(m_registerMutex);
    m_profileParamSlot0_DCallbacks = RegisterCallback(m_profileParamSlot0_DCallbacks, "ProfileParamSlot0_D", callback, param, &newUid);
  }
  if (initialNotify) {
    // We know that the callback is not null because of earlier null check
    HAL_Value value = MakeDouble(GetProfileParamSlot0_D());
    callback("ProfileParamSlot0_D", param, &value);
  }
  return newUid;
}

void CanTalonData::CancelProfileParamSlot0_DCallback(int32_t uid) {
  m_profileParamSlot0_DCallbacks = CancelCallback(m_profileParamSlot0_DCallbacks, uid);
}

void CanTalonData::InvokeProfileParamSlot0_DCallback(HAL_Value value) {
  InvokeCallback(m_profileParamSlot0_DCallbacks, "ProfileParamSlot0_D", &value);
}

double CanTalonData::GetProfileParamSlot0_D() {
  return m_profileParamSlot0_D;
}

void CanTalonData::SetProfileParamSlot0_D(double profileParamSlot0_D) {
  double oldValue = m_profileParamSlot0_D.exchange(profileParamSlot0_D);
  if (oldValue != profileParamSlot0_D) {
    InvokeProfileParamSlot0_DCallback(MakeDouble(profileParamSlot0_D));
  }
}

int32_t CanTalonData::RegisterProfileParamSlot0_FCallback(HAL_NotifyCallback callback, void* param, HAL_Bool initialNotify) {
  // Must return -1 on a null callback for error handling
  if (callback == nullptr) return -1;
  int32_t newUid = 0;
 {
    std::lock_guard<std::mutex> lock(m_registerMutex);
    m_profileParamSlot0_FCallbacks = RegisterCallback(m_profileParamSlot0_FCallbacks, "ProfileParamSlot0_F", callback, param, &newUid);
  }
  if (initialNotify) {
    // We know that the callback is not null because of earlier null check
    HAL_Value value = MakeDouble(GetProfileParamSlot0_F());
    callback("ProfileParamSlot0_F", param, &value);
  }
  return newUid;
}

void CanTalonData::CancelProfileParamSlot0_FCallback(int32_t uid) {
  m_profileParamSlot0_FCallbacks = CancelCallback(m_profileParamSlot0_FCallbacks, uid);
}

void CanTalonData::InvokeProfileParamSlot0_FCallback(HAL_Value value) {
  InvokeCallback(m_profileParamSlot0_FCallbacks, "ProfileParamSlot0_F", &value);
}

double CanTalonData::GetProfileParamSlot0_F() {
  return m_profileParamSlot0_F;
}

void CanTalonData::SetProfileParamSlot0_F(double profileParamSlot0_F) {
  double oldValue = m_profileParamSlot0_F.exchange(profileParamSlot0_F);
  if (oldValue != profileParamSlot0_F) {
    InvokeProfileParamSlot0_FCallback(MakeDouble(profileParamSlot0_F));
  }
}

int32_t CanTalonData::RegisterProfileParamSlot0_IZoneCallback(HAL_NotifyCallback callback, void* param, HAL_Bool initialNotify) {
  // Must return -1 on a null callback for error handling
  if (callback == nullptr) return -1;
  int32_t newUid = 0;
 {
    std::lock_guard<std::mutex> lock(m_registerMutex);
    m_profileParamSlot0_IZoneCallbacks = RegisterCallback(m_profileParamSlot0_IZoneCallbacks, "ProfileParamSlot0_IZone", callback, param, &newUid);
  }
  if (initialNotify) {
    // We know that the callback is not null because of earlier null check
    HAL_Value value = MakeInt(GetProfileParamSlot0_IZone());
    callback("ProfileParamSlot0_IZone", param, &value);
  }
  return newUid;
}

void CanTalonData::CancelProfileParamSlot0_IZoneCallback(int32_t uid) {
  m_profileParamSlot0_IZoneCallbacks = CancelCallback(m_profileParamSlot0_IZoneCallbacks, uid);
}

void CanTalonData::InvokeProfileParamSlot0_IZoneCallback(HAL_Value value) {
  InvokeCallback(m_profileParamSlot0_IZoneCallbacks, "ProfileParamSlot0_IZone", &value);
}

int32_t CanTalonData::GetProfileParamSlot0_IZone() {
  return m_profileParamSlot0_IZone;
}

void CanTalonData::SetProfileParamSlot0_IZone(int32_t profileParamSlot0_IZone) {
  int32_t oldValue = m_profileParamSlot0_IZone.exchange(profileParamSlot0_IZone);
  if (oldValue != profileParamSlot0_IZone) {
    InvokeProfileParamSlot0_IZoneCallback(MakeInt(profileParamSlot0_IZone));
  }
}

int32_t CanTalonData::RegisterProfileParamSlot0_CloseLoopRampRateCallback(HAL_NotifyCallback callback, void* param, HAL_Bool initialNotify) {
  // Must return -1 on a null callback for error handling
  if (callback == nullptr) return -1;
  int32_t newUid = 0;
 {
    std::lock_guard<std::mutex> lock(m_registerMutex);
    m_profileParamSlot0_CloseLoopRampRateCallbacks = RegisterCallback(m_profileParamSlot0_CloseLoopRampRateCallbacks, "ProfileParamSlot0_CloseLoopRampRate", callback, param, &newUid);
  }
  if (initialNotify) {
    // We know that the callback is not null because of earlier null check
    HAL_Value value = MakeInt(GetProfileParamSlot0_CloseLoopRampRate());
    callback("ProfileParamSlot0_CloseLoopRampRate", param, &value);
  }
  return newUid;
}

void CanTalonData::CancelProfileParamSlot0_CloseLoopRampRateCallback(int32_t uid) {
  m_profileParamSlot0_CloseLoopRampRateCallbacks = CancelCallback(m_profileParamSlot0_CloseLoopRampRateCallbacks, uid);
}

void CanTalonData::InvokeProfileParamSlot0_CloseLoopRampRateCallback(HAL_Value value) {
  InvokeCallback(m_profileParamSlot0_CloseLoopRampRateCallbacks, "ProfileParamSlot0_CloseLoopRampRate", &value);
}

int32_t CanTalonData::GetProfileParamSlot0_CloseLoopRampRate() {
  return m_profileParamSlot0_CloseLoopRampRate;
}

void CanTalonData::SetProfileParamSlot0_CloseLoopRampRate(int32_t profileParamSlot0_CloseLoopRampRate) {
  int32_t oldValue = m_profileParamSlot0_CloseLoopRampRate.exchange(profileParamSlot0_CloseLoopRampRate);
  if (oldValue != profileParamSlot0_CloseLoopRampRate) {
    InvokeProfileParamSlot0_CloseLoopRampRateCallback(MakeInt(profileParamSlot0_CloseLoopRampRate));
  }
}

int32_t CanTalonData::RegisterProfileParamSlot1_PCallback(HAL_NotifyCallback callback, void* param, HAL_Bool initialNotify) {
  // Must return -1 on a null callback for error handling
  if (callback == nullptr) return -1;
  int32_t newUid = 0;
 {
    std::lock_guard<std::mutex> lock(m_registerMutex);
    m_profileParamSlot1_PCallbacks = RegisterCallback(m_profileParamSlot1_PCallbacks, "ProfileParamSlot1_P", callback, param, &newUid);
  }
  if (initialNotify) {
    // We know that the callback is not null because of earlier null check
    HAL_Value value = MakeDouble(GetProfileParamSlot1_P());
    callback("ProfileParamSlot1_P", param, &value);
  }
  return newUid;
}

void CanTalonData::CancelProfileParamSlot1_PCallback(int32_t uid) {
  m_profileParamSlot1_PCallbacks = CancelCallback(m_profileParamSlot1_PCallbacks, uid);
}

void CanTalonData::InvokeProfileParamSlot1_PCallback(HAL_Value value) {
  InvokeCallback(m_profileParamSlot1_PCallbacks, "ProfileParamSlot1_P", &value);
}

double CanTalonData::GetProfileParamSlot1_P() {
  return m_profileParamSlot1_P;
}

void CanTalonData::SetProfileParamSlot1_P(double profileParamSlot1_P) {
  double oldValue = m_profileParamSlot1_P.exchange(profileParamSlot1_P);
  if (oldValue != profileParamSlot1_P) {
    InvokeProfileParamSlot1_PCallback(MakeDouble(profileParamSlot1_P));
  }
}

int32_t CanTalonData::RegisterProfileParamSlot1_ICallback(HAL_NotifyCallback callback, void* param, HAL_Bool initialNotify) {
  // Must return -1 on a null callback for error handling
  if (callback == nullptr) return -1;
  int32_t newUid = 0;
 {
    std::lock_guard<std::mutex> lock(m_registerMutex);
    m_profileParamSlot1_ICallbacks = RegisterCallback(m_profileParamSlot1_ICallbacks, "ProfileParamSlot1_I", callback, param, &newUid);
  }
  if (initialNotify) {
    // We know that the callback is not null because of earlier null check
    HAL_Value value = MakeDouble(GetProfileParamSlot1_I());
    callback("ProfileParamSlot1_I", param, &value);
  }
  return newUid;
}

void CanTalonData::CancelProfileParamSlot1_ICallback(int32_t uid) {
  m_profileParamSlot1_ICallbacks = CancelCallback(m_profileParamSlot1_ICallbacks, uid);
}

void CanTalonData::InvokeProfileParamSlot1_ICallback(HAL_Value value) {
  InvokeCallback(m_profileParamSlot1_ICallbacks, "ProfileParamSlot1_I", &value);
}

double CanTalonData::GetProfileParamSlot1_I() {
  return m_profileParamSlot1_I;
}

void CanTalonData::SetProfileParamSlot1_I(double profileParamSlot1_I) {
  double oldValue = m_profileParamSlot1_I.exchange(profileParamSlot1_I);
  if (oldValue != profileParamSlot1_I) {
    InvokeProfileParamSlot1_ICallback(MakeDouble(profileParamSlot1_I));
  }
}

int32_t CanTalonData::RegisterProfileParamSlot1_DCallback(HAL_NotifyCallback callback, void* param, HAL_Bool initialNotify) {
  // Must return -1 on a null callback for error handling
  if (callback == nullptr) return -1;
  int32_t newUid = 0;
 {
    std::lock_guard<std::mutex> lock(m_registerMutex);
    m_profileParamSlot1_DCallbacks = RegisterCallback(m_profileParamSlot1_DCallbacks, "ProfileParamSlot1_D", callback, param, &newUid);
  }
  if (initialNotify) {
    // We know that the callback is not null because of earlier null check
    HAL_Value value = MakeDouble(GetProfileParamSlot1_D());
    callback("ProfileParamSlot1_D", param, &value);
  }
  return newUid;
}

void CanTalonData::CancelProfileParamSlot1_DCallback(int32_t uid) {
  m_profileParamSlot1_DCallbacks = CancelCallback(m_profileParamSlot1_DCallbacks, uid);
}

void CanTalonData::InvokeProfileParamSlot1_DCallback(HAL_Value value) {
  InvokeCallback(m_profileParamSlot1_DCallbacks, "ProfileParamSlot1_D", &value);
}

double CanTalonData::GetProfileParamSlot1_D() {
  return m_profileParamSlot1_D;
}

void CanTalonData::SetProfileParamSlot1_D(double profileParamSlot1_D) {
  double oldValue = m_profileParamSlot1_D.exchange(profileParamSlot1_D);
  if (oldValue != profileParamSlot1_D) {
    InvokeProfileParamSlot1_DCallback(MakeDouble(profileParamSlot1_D));
  }
}

int32_t CanTalonData::RegisterProfileParamSlot1_FCallback(HAL_NotifyCallback callback, void* param, HAL_Bool initialNotify) {
  // Must return -1 on a null callback for error handling
  if (callback == nullptr) return -1;
  int32_t newUid = 0;
 {
    std::lock_guard<std::mutex> lock(m_registerMutex);
    m_profileParamSlot1_FCallbacks = RegisterCallback(m_profileParamSlot1_FCallbacks, "ProfileParamSlot1_F", callback, param, &newUid);
  }
  if (initialNotify) {
    // We know that the callback is not null because of earlier null check
    HAL_Value value = MakeDouble(GetProfileParamSlot1_F());
    callback("ProfileParamSlot1_F", param, &value);
  }
  return newUid;
}

void CanTalonData::CancelProfileParamSlot1_FCallback(int32_t uid) {
  m_profileParamSlot1_FCallbacks = CancelCallback(m_profileParamSlot1_FCallbacks, uid);
}

void CanTalonData::InvokeProfileParamSlot1_FCallback(HAL_Value value) {
  InvokeCallback(m_profileParamSlot1_FCallbacks, "ProfileParamSlot1_F", &value);
}

double CanTalonData::GetProfileParamSlot1_F() {
  return m_profileParamSlot1_F;
}

void CanTalonData::SetProfileParamSlot1_F(double profileParamSlot1_F) {
  double oldValue = m_profileParamSlot1_F.exchange(profileParamSlot1_F);
  if (oldValue != profileParamSlot1_F) {
    InvokeProfileParamSlot1_FCallback(MakeDouble(profileParamSlot1_F));
  }
}

int32_t CanTalonData::RegisterProfileParamSlot1_IZoneCallback(HAL_NotifyCallback callback, void* param, HAL_Bool initialNotify) {
  // Must return -1 on a null callback for error handling
  if (callback == nullptr) return -1;
  int32_t newUid = 0;
 {
    std::lock_guard<std::mutex> lock(m_registerMutex);
    m_profileParamSlot1_IZoneCallbacks = RegisterCallback(m_profileParamSlot1_IZoneCallbacks, "ProfileParamSlot1_IZone", callback, param, &newUid);
  }
  if (initialNotify) {
    // We know that the callback is not null because of earlier null check
    HAL_Value value = MakeInt(GetProfileParamSlot1_IZone());
    callback("ProfileParamSlot1_IZone", param, &value);
  }
  return newUid;
}

void CanTalonData::CancelProfileParamSlot1_IZoneCallback(int32_t uid) {
  m_profileParamSlot1_IZoneCallbacks = CancelCallback(m_profileParamSlot1_IZoneCallbacks, uid);
}

void CanTalonData::InvokeProfileParamSlot1_IZoneCallback(HAL_Value value) {
  InvokeCallback(m_profileParamSlot1_IZoneCallbacks, "ProfileParamSlot1_IZone", &value);
}

int32_t CanTalonData::GetProfileParamSlot1_IZone() {
  return m_profileParamSlot1_IZone;
}

void CanTalonData::SetProfileParamSlot1_IZone(int32_t profileParamSlot1_IZone) {
  int32_t oldValue = m_profileParamSlot1_IZone.exchange(profileParamSlot1_IZone);
  if (oldValue != profileParamSlot1_IZone) {
    InvokeProfileParamSlot1_IZoneCallback(MakeInt(profileParamSlot1_IZone));
  }
}

int32_t CanTalonData::RegisterProfileParamSlot1_CloseLoopRampRateCallback(HAL_NotifyCallback callback, void* param, HAL_Bool initialNotify) {
  // Must return -1 on a null callback for error handling
  if (callback == nullptr) return -1;
  int32_t newUid = 0;
 {
    std::lock_guard<std::mutex> lock(m_registerMutex);
    m_profileParamSlot1_CloseLoopRampRateCallbacks = RegisterCallback(m_profileParamSlot1_CloseLoopRampRateCallbacks, "ProfileParamSlot1_CloseLoopRampRate", callback, param, &newUid);
  }
  if (initialNotify) {
    // We know that the callback is not null because of earlier null check
    HAL_Value value = MakeInt(GetProfileParamSlot1_CloseLoopRampRate());
    callback("ProfileParamSlot1_CloseLoopRampRate", param, &value);
  }
  return newUid;
}

void CanTalonData::CancelProfileParamSlot1_CloseLoopRampRateCallback(int32_t uid) {
  m_profileParamSlot1_CloseLoopRampRateCallbacks = CancelCallback(m_profileParamSlot1_CloseLoopRampRateCallbacks, uid);
}

void CanTalonData::InvokeProfileParamSlot1_CloseLoopRampRateCallback(HAL_Value value) {
  InvokeCallback(m_profileParamSlot1_CloseLoopRampRateCallbacks, "ProfileParamSlot1_CloseLoopRampRate", &value);
}

int32_t CanTalonData::GetProfileParamSlot1_CloseLoopRampRate() {
  return m_profileParamSlot1_CloseLoopRampRate;
}

void CanTalonData::SetProfileParamSlot1_CloseLoopRampRate(int32_t profileParamSlot1_CloseLoopRampRate) {
  int32_t oldValue = m_profileParamSlot1_CloseLoopRampRate.exchange(profileParamSlot1_CloseLoopRampRate);
  if (oldValue != profileParamSlot1_CloseLoopRampRate) {
    InvokeProfileParamSlot1_CloseLoopRampRateCallback(MakeInt(profileParamSlot1_CloseLoopRampRate));
  }
}

int32_t CanTalonData::RegisterProfileParamSoftLimitForThresholdCallback(HAL_NotifyCallback callback, void* param, HAL_Bool initialNotify) {
  // Must return -1 on a null callback for error handling
  if (callback == nullptr) return -1;
  int32_t newUid = 0;
 {
    std::lock_guard<std::mutex> lock(m_registerMutex);
    m_profileParamSoftLimitForThresholdCallbacks = RegisterCallback(m_profileParamSoftLimitForThresholdCallbacks, "ProfileParamSoftLimitForThreshold", callback, param, &newUid);
  }
  if (initialNotify) {
    // We know that the callback is not null because of earlier null check
    HAL_Value value = MakeDouble(GetProfileParamSoftLimitForThreshold());
    callback("ProfileParamSoftLimitForThreshold", param, &value);
  }
  return newUid;
}

void CanTalonData::CancelProfileParamSoftLimitForThresholdCallback(int32_t uid) {
  m_profileParamSoftLimitForThresholdCallbacks = CancelCallback(m_profileParamSoftLimitForThresholdCallbacks, uid);
}

void CanTalonData::InvokeProfileParamSoftLimitForThresholdCallback(HAL_Value value) {
  InvokeCallback(m_profileParamSoftLimitForThresholdCallbacks, "ProfileParamSoftLimitForThreshold", &value);
}

double CanTalonData::GetProfileParamSoftLimitForThreshold() {
  return m_profileParamSoftLimitForThreshold;
}

void CanTalonData::SetProfileParamSoftLimitForThreshold(double profileParamSoftLimitForThreshold) {
  double oldValue = m_profileParamSoftLimitForThreshold.exchange(profileParamSoftLimitForThreshold);
  if (oldValue != profileParamSoftLimitForThreshold) {
    InvokeProfileParamSoftLimitForThresholdCallback(MakeDouble(profileParamSoftLimitForThreshold));
  }
}

int32_t CanTalonData::RegisterProfileParamSoftLimitRevThresholdCallback(HAL_NotifyCallback callback, void* param, HAL_Bool initialNotify) {
  // Must return -1 on a null callback for error handling
  if (callback == nullptr) return -1;
  int32_t newUid = 0;
 {
    std::lock_guard<std::mutex> lock(m_registerMutex);
    m_profileParamSoftLimitRevThresholdCallbacks = RegisterCallback(m_profileParamSoftLimitRevThresholdCallbacks, "ProfileParamSoftLimitRevThreshold", callback, param, &newUid);
  }
  if (initialNotify) {
    // We know that the callback is not null because of earlier null check
    HAL_Value value = MakeDouble(GetProfileParamSoftLimitRevThreshold());
    callback("ProfileParamSoftLimitRevThreshold", param, &value);
  }
  return newUid;
}

void CanTalonData::CancelProfileParamSoftLimitRevThresholdCallback(int32_t uid) {
  m_profileParamSoftLimitRevThresholdCallbacks = CancelCallback(m_profileParamSoftLimitRevThresholdCallbacks, uid);
}

void CanTalonData::InvokeProfileParamSoftLimitRevThresholdCallback(HAL_Value value) {
  InvokeCallback(m_profileParamSoftLimitRevThresholdCallbacks, "ProfileParamSoftLimitRevThreshold", &value);
}

double CanTalonData::GetProfileParamSoftLimitRevThreshold() {
  return m_profileParamSoftLimitRevThreshold;
}

void CanTalonData::SetProfileParamSoftLimitRevThreshold(double profileParamSoftLimitRevThreshold) {
  double oldValue = m_profileParamSoftLimitRevThreshold.exchange(profileParamSoftLimitRevThreshold);
  if (oldValue != profileParamSoftLimitRevThreshold) {
    InvokeProfileParamSoftLimitRevThresholdCallback(MakeDouble(profileParamSoftLimitRevThreshold));
  }
}

int32_t CanTalonData::RegisterProfileParamSoftLimitForEnableCallback(HAL_NotifyCallback callback, void* param, HAL_Bool initialNotify) {
  // Must return -1 on a null callback for error handling
  if (callback == nullptr) return -1;
  int32_t newUid = 0;
 {
    std::lock_guard<std::mutex> lock(m_registerMutex);
    m_profileParamSoftLimitForEnableCallbacks = RegisterCallback(m_profileParamSoftLimitForEnableCallbacks, "ProfileParamSoftLimitForEnable", callback, param, &newUid);
  }
  if (initialNotify) {
    // We know that the callback is not null because of earlier null check
    HAL_Value value = MakeDouble(GetProfileParamSoftLimitForEnable());
    callback("ProfileParamSoftLimitForEnable", param, &value);
  }
  return newUid;
}

void CanTalonData::CancelProfileParamSoftLimitForEnableCallback(int32_t uid) {
  m_profileParamSoftLimitForEnableCallbacks = CancelCallback(m_profileParamSoftLimitForEnableCallbacks, uid);
}

void CanTalonData::InvokeProfileParamSoftLimitForEnableCallback(HAL_Value value) {
  InvokeCallback(m_profileParamSoftLimitForEnableCallbacks, "ProfileParamSoftLimitForEnable", &value);
}

double CanTalonData::GetProfileParamSoftLimitForEnable() {
  return m_profileParamSoftLimitForEnable;
}

void CanTalonData::SetProfileParamSoftLimitForEnable(double profileParamSoftLimitForEnable) {
  double oldValue = m_profileParamSoftLimitForEnable.exchange(profileParamSoftLimitForEnable);
  if (oldValue != profileParamSoftLimitForEnable) {
    InvokeProfileParamSoftLimitForEnableCallback(MakeDouble(profileParamSoftLimitForEnable));
  }
}

int32_t CanTalonData::RegisterProfileParamSoftLimitRevEnableCallback(HAL_NotifyCallback callback, void* param, HAL_Bool initialNotify) {
  // Must return -1 on a null callback for error handling
  if (callback == nullptr) return -1;
  int32_t newUid = 0;
 {
    std::lock_guard<std::mutex> lock(m_registerMutex);
    m_profileParamSoftLimitRevEnableCallbacks = RegisterCallback(m_profileParamSoftLimitRevEnableCallbacks, "ProfileParamSoftLimitRevEnable", callback, param, &newUid);
  }
  if (initialNotify) {
    // We know that the callback is not null because of earlier null check
    HAL_Value value = MakeDouble(GetProfileParamSoftLimitRevEnable());
    callback("ProfileParamSoftLimitRevEnable", param, &value);
  }
  return newUid;
}

void CanTalonData::CancelProfileParamSoftLimitRevEnableCallback(int32_t uid) {
  m_profileParamSoftLimitRevEnableCallbacks = CancelCallback(m_profileParamSoftLimitRevEnableCallbacks, uid);
}

void CanTalonData::InvokeProfileParamSoftLimitRevEnableCallback(HAL_Value value) {
  InvokeCallback(m_profileParamSoftLimitRevEnableCallbacks, "ProfileParamSoftLimitRevEnable", &value);
}

double CanTalonData::GetProfileParamSoftLimitRevEnable() {
  return m_profileParamSoftLimitRevEnable;
}

void CanTalonData::SetProfileParamSoftLimitRevEnable(double profileParamSoftLimitRevEnable) {
  double oldValue = m_profileParamSoftLimitRevEnable.exchange(profileParamSoftLimitRevEnable);
  if (oldValue != profileParamSoftLimitRevEnable) {
    InvokeProfileParamSoftLimitRevEnableCallback(MakeDouble(profileParamSoftLimitRevEnable));
  }
}

int32_t CanTalonData::RegisterOnBoot_BrakeModeCallback(HAL_NotifyCallback callback, void* param, HAL_Bool initialNotify) {
  // Must return -1 on a null callback for error handling
  if (callback == nullptr) return -1;
  int32_t newUid = 0;
 {
    std::lock_guard<std::mutex> lock(m_registerMutex);
    m_onBoot_BrakeModeCallbacks = RegisterCallback(m_onBoot_BrakeModeCallbacks, "OnBoot_BrakeMode", callback, param, &newUid);
  }
  if (initialNotify) {
    // We know that the callback is not null because of earlier null check
    HAL_Value value = MakeDouble(GetOnBoot_BrakeMode());
    callback("OnBoot_BrakeMode", param, &value);
  }
  return newUid;
}

void CanTalonData::CancelOnBoot_BrakeModeCallback(int32_t uid) {
  m_onBoot_BrakeModeCallbacks = CancelCallback(m_onBoot_BrakeModeCallbacks, uid);
}

void CanTalonData::InvokeOnBoot_BrakeModeCallback(HAL_Value value) {
  InvokeCallback(m_onBoot_BrakeModeCallbacks, "OnBoot_BrakeMode", &value);
}

double CanTalonData::GetOnBoot_BrakeMode() {
  return m_onBoot_BrakeMode;
}

void CanTalonData::SetOnBoot_BrakeMode(double onBoot_BrakeMode) {
  double oldValue = m_onBoot_BrakeMode.exchange(onBoot_BrakeMode);
  if (oldValue != onBoot_BrakeMode) {
    InvokeOnBoot_BrakeModeCallback(MakeDouble(onBoot_BrakeMode));
  }
}

int32_t CanTalonData::RegisterOnBoot_LimitSwitch_Forward_NormallyClosedCallback(HAL_NotifyCallback callback, void* param, HAL_Bool initialNotify) {
  // Must return -1 on a null callback for error handling
  if (callback == nullptr) return -1;
  int32_t newUid = 0;
 {
    std::lock_guard<std::mutex> lock(m_registerMutex);
    m_onBoot_LimitSwitch_Forward_NormallyClosedCallbacks = RegisterCallback(m_onBoot_LimitSwitch_Forward_NormallyClosedCallbacks, "OnBoot_LimitSwitch_Forward_NormallyClosed", callback, param, &newUid);
  }
  if (initialNotify) {
    // We know that the callback is not null because of earlier null check
    HAL_Value value = MakeDouble(GetOnBoot_LimitSwitch_Forward_NormallyClosed());
    callback("OnBoot_LimitSwitch_Forward_NormallyClosed", param, &value);
  }
  return newUid;
}

void CanTalonData::CancelOnBoot_LimitSwitch_Forward_NormallyClosedCallback(int32_t uid) {
  m_onBoot_LimitSwitch_Forward_NormallyClosedCallbacks = CancelCallback(m_onBoot_LimitSwitch_Forward_NormallyClosedCallbacks, uid);
}

void CanTalonData::InvokeOnBoot_LimitSwitch_Forward_NormallyClosedCallback(HAL_Value value) {
  InvokeCallback(m_onBoot_LimitSwitch_Forward_NormallyClosedCallbacks, "OnBoot_LimitSwitch_Forward_NormallyClosed", &value);
}

double CanTalonData::GetOnBoot_LimitSwitch_Forward_NormallyClosed() {
  return m_onBoot_LimitSwitch_Forward_NormallyClosed;
}

void CanTalonData::SetOnBoot_LimitSwitch_Forward_NormallyClosed(double onBoot_LimitSwitch_Forward_NormallyClosed) {
  double oldValue = m_onBoot_LimitSwitch_Forward_NormallyClosed.exchange(onBoot_LimitSwitch_Forward_NormallyClosed);
  if (oldValue != onBoot_LimitSwitch_Forward_NormallyClosed) {
    InvokeOnBoot_LimitSwitch_Forward_NormallyClosedCallback(MakeDouble(onBoot_LimitSwitch_Forward_NormallyClosed));
  }
}

int32_t CanTalonData::RegisterOnBoot_LimitSwitch_Reverse_NormallyClosedCallback(HAL_NotifyCallback callback, void* param, HAL_Bool initialNotify) {
  // Must return -1 on a null callback for error handling
  if (callback == nullptr) return -1;
  int32_t newUid = 0;
 {
    std::lock_guard<std::mutex> lock(m_registerMutex);
    m_onBoot_LimitSwitch_Reverse_NormallyClosedCallbacks = RegisterCallback(m_onBoot_LimitSwitch_Reverse_NormallyClosedCallbacks, "OnBoot_LimitSwitch_Reverse_NormallyClosed", callback, param, &newUid);
  }
  if (initialNotify) {
    // We know that the callback is not null because of earlier null check
    HAL_Value value = MakeDouble(GetOnBoot_LimitSwitch_Reverse_NormallyClosed());
    callback("OnBoot_LimitSwitch_Reverse_NormallyClosed", param, &value);
  }
  return newUid;
}

void CanTalonData::CancelOnBoot_LimitSwitch_Reverse_NormallyClosedCallback(int32_t uid) {
  m_onBoot_LimitSwitch_Reverse_NormallyClosedCallbacks = CancelCallback(m_onBoot_LimitSwitch_Reverse_NormallyClosedCallbacks, uid);
}

void CanTalonData::InvokeOnBoot_LimitSwitch_Reverse_NormallyClosedCallback(HAL_Value value) {
  InvokeCallback(m_onBoot_LimitSwitch_Reverse_NormallyClosedCallbacks, "OnBoot_LimitSwitch_Reverse_NormallyClosed", &value);
}

double CanTalonData::GetOnBoot_LimitSwitch_Reverse_NormallyClosed() {
  return m_onBoot_LimitSwitch_Reverse_NormallyClosed;
}

void CanTalonData::SetOnBoot_LimitSwitch_Reverse_NormallyClosed(double onBoot_LimitSwitch_Reverse_NormallyClosed) {
  double oldValue = m_onBoot_LimitSwitch_Reverse_NormallyClosed.exchange(onBoot_LimitSwitch_Reverse_NormallyClosed);
  if (oldValue != onBoot_LimitSwitch_Reverse_NormallyClosed) {
    InvokeOnBoot_LimitSwitch_Reverse_NormallyClosedCallback(MakeDouble(onBoot_LimitSwitch_Reverse_NormallyClosed));
  }
}

int32_t CanTalonData::RegisterOnBoot_LimitSwitch_Forward_DisableCallback(HAL_NotifyCallback callback, void* param, HAL_Bool initialNotify) {
  // Must return -1 on a null callback for error handling
  if (callback == nullptr) return -1;
  int32_t newUid = 0;
 {
    std::lock_guard<std::mutex> lock(m_registerMutex);
    m_onBoot_LimitSwitch_Forward_DisableCallbacks = RegisterCallback(m_onBoot_LimitSwitch_Forward_DisableCallbacks, "OnBoot_LimitSwitch_Forward_Disable", callback, param, &newUid);
  }
  if (initialNotify) {
    // We know that the callback is not null because of earlier null check
    HAL_Value value = MakeDouble(GetOnBoot_LimitSwitch_Forward_Disable());
    callback("OnBoot_LimitSwitch_Forward_Disable", param, &value);
  }
  return newUid;
}

void CanTalonData::CancelOnBoot_LimitSwitch_Forward_DisableCallback(int32_t uid) {
  m_onBoot_LimitSwitch_Forward_DisableCallbacks = CancelCallback(m_onBoot_LimitSwitch_Forward_DisableCallbacks, uid);
}

void CanTalonData::InvokeOnBoot_LimitSwitch_Forward_DisableCallback(HAL_Value value) {
  InvokeCallback(m_onBoot_LimitSwitch_Forward_DisableCallbacks, "OnBoot_LimitSwitch_Forward_Disable", &value);
}

double CanTalonData::GetOnBoot_LimitSwitch_Forward_Disable() {
  return m_onBoot_LimitSwitch_Forward_Disable;
}

void CanTalonData::SetOnBoot_LimitSwitch_Forward_Disable(double onBoot_LimitSwitch_Forward_Disable) {
  double oldValue = m_onBoot_LimitSwitch_Forward_Disable.exchange(onBoot_LimitSwitch_Forward_Disable);
  if (oldValue != onBoot_LimitSwitch_Forward_Disable) {
    InvokeOnBoot_LimitSwitch_Forward_DisableCallback(MakeDouble(onBoot_LimitSwitch_Forward_Disable));
  }
}

int32_t CanTalonData::RegisterOnBoot_LimitSwitch_Reverse_DisableCallback(HAL_NotifyCallback callback, void* param, HAL_Bool initialNotify) {
  // Must return -1 on a null callback for error handling
  if (callback == nullptr) return -1;
  int32_t newUid = 0;
 {
    std::lock_guard<std::mutex> lock(m_registerMutex);
    m_onBoot_LimitSwitch_Reverse_DisableCallbacks = RegisterCallback(m_onBoot_LimitSwitch_Reverse_DisableCallbacks, "OnBoot_LimitSwitch_Reverse_Disable", callback, param, &newUid);
  }
  if (initialNotify) {
    // We know that the callback is not null because of earlier null check
    HAL_Value value = MakeDouble(GetOnBoot_LimitSwitch_Reverse_Disable());
    callback("OnBoot_LimitSwitch_Reverse_Disable", param, &value);
  }
  return newUid;
}

void CanTalonData::CancelOnBoot_LimitSwitch_Reverse_DisableCallback(int32_t uid) {
  m_onBoot_LimitSwitch_Reverse_DisableCallbacks = CancelCallback(m_onBoot_LimitSwitch_Reverse_DisableCallbacks, uid);
}

void CanTalonData::InvokeOnBoot_LimitSwitch_Reverse_DisableCallback(HAL_Value value) {
  InvokeCallback(m_onBoot_LimitSwitch_Reverse_DisableCallbacks, "OnBoot_LimitSwitch_Reverse_Disable", &value);
}

double CanTalonData::GetOnBoot_LimitSwitch_Reverse_Disable() {
  return m_onBoot_LimitSwitch_Reverse_Disable;
}

void CanTalonData::SetOnBoot_LimitSwitch_Reverse_Disable(double onBoot_LimitSwitch_Reverse_Disable) {
  double oldValue = m_onBoot_LimitSwitch_Reverse_Disable.exchange(onBoot_LimitSwitch_Reverse_Disable);
  if (oldValue != onBoot_LimitSwitch_Reverse_Disable) {
    InvokeOnBoot_LimitSwitch_Reverse_DisableCallback(MakeDouble(onBoot_LimitSwitch_Reverse_Disable));
  }
}

int32_t CanTalonData::RegisterFault_OverTempCallback(HAL_NotifyCallback callback, void* param, HAL_Bool initialNotify) {
  // Must return -1 on a null callback for error handling
  if (callback == nullptr) return -1;
  int32_t newUid = 0;
 {
    std::lock_guard<std::mutex> lock(m_registerMutex);
    m_fault_OverTempCallbacks = RegisterCallback(m_fault_OverTempCallbacks, "Fault_OverTemp", callback, param, &newUid);
  }
  if (initialNotify) {
    // We know that the callback is not null because of earlier null check
    HAL_Value value = MakeDouble(GetFault_OverTemp());
    callback("Fault_OverTemp", param, &value);
  }
  return newUid;
}

void CanTalonData::CancelFault_OverTempCallback(int32_t uid) {
  m_fault_OverTempCallbacks = CancelCallback(m_fault_OverTempCallbacks, uid);
}

void CanTalonData::InvokeFault_OverTempCallback(HAL_Value value) {
  InvokeCallback(m_fault_OverTempCallbacks, "Fault_OverTemp", &value);
}

double CanTalonData::GetFault_OverTemp() {
  return m_fault_OverTemp;
}

void CanTalonData::SetFault_OverTemp(double fault_OverTemp) {
  double oldValue = m_fault_OverTemp.exchange(fault_OverTemp);
  if (oldValue != fault_OverTemp) {
    InvokeFault_OverTempCallback(MakeDouble(fault_OverTemp));
  }
}

int32_t CanTalonData::RegisterFault_UnderVoltageCallback(HAL_NotifyCallback callback, void* param, HAL_Bool initialNotify) {
  // Must return -1 on a null callback for error handling
  if (callback == nullptr) return -1;
  int32_t newUid = 0;
 {
    std::lock_guard<std::mutex> lock(m_registerMutex);
    m_fault_UnderVoltageCallbacks = RegisterCallback(m_fault_UnderVoltageCallbacks, "Fault_UnderVoltage", callback, param, &newUid);
  }
  if (initialNotify) {
    // We know that the callback is not null because of earlier null check
    HAL_Value value = MakeDouble(GetFault_UnderVoltage());
    callback("Fault_UnderVoltage", param, &value);
  }
  return newUid;
}

void CanTalonData::CancelFault_UnderVoltageCallback(int32_t uid) {
  m_fault_UnderVoltageCallbacks = CancelCallback(m_fault_UnderVoltageCallbacks, uid);
}

void CanTalonData::InvokeFault_UnderVoltageCallback(HAL_Value value) {
  InvokeCallback(m_fault_UnderVoltageCallbacks, "Fault_UnderVoltage", &value);
}

double CanTalonData::GetFault_UnderVoltage() {
  return m_fault_UnderVoltage;
}

void CanTalonData::SetFault_UnderVoltage(double fault_UnderVoltage) {
  double oldValue = m_fault_UnderVoltage.exchange(fault_UnderVoltage);
  if (oldValue != fault_UnderVoltage) {
    InvokeFault_UnderVoltageCallback(MakeDouble(fault_UnderVoltage));
  }
}

int32_t CanTalonData::RegisterFault_ForLimCallback(HAL_NotifyCallback callback, void* param, HAL_Bool initialNotify) {
  // Must return -1 on a null callback for error handling
  if (callback == nullptr) return -1;
  int32_t newUid = 0;
 {
    std::lock_guard<std::mutex> lock(m_registerMutex);
    m_fault_ForLimCallbacks = RegisterCallback(m_fault_ForLimCallbacks, "Fault_ForLim", callback, param, &newUid);
  }
  if (initialNotify) {
    // We know that the callback is not null because of earlier null check
    HAL_Value value = MakeDouble(GetFault_ForLim());
    callback("Fault_ForLim", param, &value);
  }
  return newUid;
}

void CanTalonData::CancelFault_ForLimCallback(int32_t uid) {
  m_fault_ForLimCallbacks = CancelCallback(m_fault_ForLimCallbacks, uid);
}

void CanTalonData::InvokeFault_ForLimCallback(HAL_Value value) {
  InvokeCallback(m_fault_ForLimCallbacks, "Fault_ForLim", &value);
}

double CanTalonData::GetFault_ForLim() {
  return m_fault_ForLim;
}

void CanTalonData::SetFault_ForLim(double fault_ForLim) {
  double oldValue = m_fault_ForLim.exchange(fault_ForLim);
  if (oldValue != fault_ForLim) {
    InvokeFault_ForLimCallback(MakeDouble(fault_ForLim));
  }
}

int32_t CanTalonData::RegisterFault_RevLimCallback(HAL_NotifyCallback callback, void* param, HAL_Bool initialNotify) {
  // Must return -1 on a null callback for error handling
  if (callback == nullptr) return -1;
  int32_t newUid = 0;
 {
    std::lock_guard<std::mutex> lock(m_registerMutex);
    m_fault_RevLimCallbacks = RegisterCallback(m_fault_RevLimCallbacks, "Fault_RevLim", callback, param, &newUid);
  }
  if (initialNotify) {
    // We know that the callback is not null because of earlier null check
    HAL_Value value = MakeDouble(GetFault_RevLim());
    callback("Fault_RevLim", param, &value);
  }
  return newUid;
}

void CanTalonData::CancelFault_RevLimCallback(int32_t uid) {
  m_fault_RevLimCallbacks = CancelCallback(m_fault_RevLimCallbacks, uid);
}

void CanTalonData::InvokeFault_RevLimCallback(HAL_Value value) {
  InvokeCallback(m_fault_RevLimCallbacks, "Fault_RevLim", &value);
}

double CanTalonData::GetFault_RevLim() {
  return m_fault_RevLim;
}

void CanTalonData::SetFault_RevLim(double fault_RevLim) {
  double oldValue = m_fault_RevLim.exchange(fault_RevLim);
  if (oldValue != fault_RevLim) {
    InvokeFault_RevLimCallback(MakeDouble(fault_RevLim));
  }
}

int32_t CanTalonData::RegisterFault_HardwareFailureCallback(HAL_NotifyCallback callback, void* param, HAL_Bool initialNotify) {
  // Must return -1 on a null callback for error handling
  if (callback == nullptr) return -1;
  int32_t newUid = 0;
 {
    std::lock_guard<std::mutex> lock(m_registerMutex);
    m_fault_HardwareFailureCallbacks = RegisterCallback(m_fault_HardwareFailureCallbacks, "Fault_HardwareFailure", callback, param, &newUid);
  }
  if (initialNotify) {
    // We know that the callback is not null because of earlier null check
    HAL_Value value = MakeDouble(GetFault_HardwareFailure());
    callback("Fault_HardwareFailure", param, &value);
  }
  return newUid;
}

void CanTalonData::CancelFault_HardwareFailureCallback(int32_t uid) {
  m_fault_HardwareFailureCallbacks = CancelCallback(m_fault_HardwareFailureCallbacks, uid);
}

void CanTalonData::InvokeFault_HardwareFailureCallback(HAL_Value value) {
  InvokeCallback(m_fault_HardwareFailureCallbacks, "Fault_HardwareFailure", &value);
}

double CanTalonData::GetFault_HardwareFailure() {
  return m_fault_HardwareFailure;
}

void CanTalonData::SetFault_HardwareFailure(double fault_HardwareFailure) {
  double oldValue = m_fault_HardwareFailure.exchange(fault_HardwareFailure);
  if (oldValue != fault_HardwareFailure) {
    InvokeFault_HardwareFailureCallback(MakeDouble(fault_HardwareFailure));
  }
}

int32_t CanTalonData::RegisterFault_ForSoftLimCallback(HAL_NotifyCallback callback, void* param, HAL_Bool initialNotify) {
  // Must return -1 on a null callback for error handling
  if (callback == nullptr) return -1;
  int32_t newUid = 0;
 {
    std::lock_guard<std::mutex> lock(m_registerMutex);
    m_fault_ForSoftLimCallbacks = RegisterCallback(m_fault_ForSoftLimCallbacks, "Fault_ForSoftLim", callback, param, &newUid);
  }
  if (initialNotify) {
    // We know that the callback is not null because of earlier null check
    HAL_Value value = MakeDouble(GetFault_ForSoftLim());
    callback("Fault_ForSoftLim", param, &value);
  }
  return newUid;
}

void CanTalonData::CancelFault_ForSoftLimCallback(int32_t uid) {
  m_fault_ForSoftLimCallbacks = CancelCallback(m_fault_ForSoftLimCallbacks, uid);
}

void CanTalonData::InvokeFault_ForSoftLimCallback(HAL_Value value) {
  InvokeCallback(m_fault_ForSoftLimCallbacks, "Fault_ForSoftLim", &value);
}

double CanTalonData::GetFault_ForSoftLim() {
  return m_fault_ForSoftLim;
}

void CanTalonData::SetFault_ForSoftLim(double fault_ForSoftLim) {
  double oldValue = m_fault_ForSoftLim.exchange(fault_ForSoftLim);
  if (oldValue != fault_ForSoftLim) {
    InvokeFault_ForSoftLimCallback(MakeDouble(fault_ForSoftLim));
  }
}

int32_t CanTalonData::RegisterFault_RevSoftLimCallback(HAL_NotifyCallback callback, void* param, HAL_Bool initialNotify) {
  // Must return -1 on a null callback for error handling
  if (callback == nullptr) return -1;
  int32_t newUid = 0;
 {
    std::lock_guard<std::mutex> lock(m_registerMutex);
    m_fault_RevSoftLimCallbacks = RegisterCallback(m_fault_RevSoftLimCallbacks, "Fault_RevSoftLim", callback, param, &newUid);
  }
  if (initialNotify) {
    // We know that the callback is not null because of earlier null check
    HAL_Value value = MakeDouble(GetFault_RevSoftLim());
    callback("Fault_RevSoftLim", param, &value);
  }
  return newUid;
}

void CanTalonData::CancelFault_RevSoftLimCallback(int32_t uid) {
  m_fault_RevSoftLimCallbacks = CancelCallback(m_fault_RevSoftLimCallbacks, uid);
}

void CanTalonData::InvokeFault_RevSoftLimCallback(HAL_Value value) {
  InvokeCallback(m_fault_RevSoftLimCallbacks, "Fault_RevSoftLim", &value);
}

double CanTalonData::GetFault_RevSoftLim() {
  return m_fault_RevSoftLim;
}

void CanTalonData::SetFault_RevSoftLim(double fault_RevSoftLim) {
  double oldValue = m_fault_RevSoftLim.exchange(fault_RevSoftLim);
  if (oldValue != fault_RevSoftLim) {
    InvokeFault_RevSoftLimCallback(MakeDouble(fault_RevSoftLim));
  }
}

int32_t CanTalonData::RegisterStckyFault_OverTempCallback(HAL_NotifyCallback callback, void* param, HAL_Bool initialNotify) {
  // Must return -1 on a null callback for error handling
  if (callback == nullptr) return -1;
  int32_t newUid = 0;
 {
    std::lock_guard<std::mutex> lock(m_registerMutex);
    m_stckyFault_OverTempCallbacks = RegisterCallback(m_stckyFault_OverTempCallbacks, "StckyFault_OverTemp", callback, param, &newUid);
  }
  if (initialNotify) {
    // We know that the callback is not null because of earlier null check
    HAL_Value value = MakeDouble(GetStckyFault_OverTemp());
    callback("StckyFault_OverTemp", param, &value);
  }
  return newUid;
}

void CanTalonData::CancelStckyFault_OverTempCallback(int32_t uid) {
  m_stckyFault_OverTempCallbacks = CancelCallback(m_stckyFault_OverTempCallbacks, uid);
}

void CanTalonData::InvokeStckyFault_OverTempCallback(HAL_Value value) {
  InvokeCallback(m_stckyFault_OverTempCallbacks, "StckyFault_OverTemp", &value);
}

double CanTalonData::GetStckyFault_OverTemp() {
  return m_stckyFault_OverTemp;
}

void CanTalonData::SetStckyFault_OverTemp(double stckyFault_OverTemp) {
  double oldValue = m_stckyFault_OverTemp.exchange(stckyFault_OverTemp);
  if (oldValue != stckyFault_OverTemp) {
    InvokeStckyFault_OverTempCallback(MakeDouble(stckyFault_OverTemp));
  }
}

int32_t CanTalonData::RegisterStckyFault_UnderVoltageCallback(HAL_NotifyCallback callback, void* param, HAL_Bool initialNotify) {
  // Must return -1 on a null callback for error handling
  if (callback == nullptr) return -1;
  int32_t newUid = 0;
 {
    std::lock_guard<std::mutex> lock(m_registerMutex);
    m_stckyFault_UnderVoltageCallbacks = RegisterCallback(m_stckyFault_UnderVoltageCallbacks, "StckyFault_UnderVoltage", callback, param, &newUid);
  }
  if (initialNotify) {
    // We know that the callback is not null because of earlier null check
    HAL_Value value = MakeDouble(GetStckyFault_UnderVoltage());
    callback("StckyFault_UnderVoltage", param, &value);
  }
  return newUid;
}

void CanTalonData::CancelStckyFault_UnderVoltageCallback(int32_t uid) {
  m_stckyFault_UnderVoltageCallbacks = CancelCallback(m_stckyFault_UnderVoltageCallbacks, uid);
}

void CanTalonData::InvokeStckyFault_UnderVoltageCallback(HAL_Value value) {
  InvokeCallback(m_stckyFault_UnderVoltageCallbacks, "StckyFault_UnderVoltage", &value);
}

double CanTalonData::GetStckyFault_UnderVoltage() {
  return m_stckyFault_UnderVoltage;
}

void CanTalonData::SetStckyFault_UnderVoltage(double stckyFault_UnderVoltage) {
  double oldValue = m_stckyFault_UnderVoltage.exchange(stckyFault_UnderVoltage);
  if (oldValue != stckyFault_UnderVoltage) {
    InvokeStckyFault_UnderVoltageCallback(MakeDouble(stckyFault_UnderVoltage));
  }
}

int32_t CanTalonData::RegisterStckyFault_ForLimCallback(HAL_NotifyCallback callback, void* param, HAL_Bool initialNotify) {
  // Must return -1 on a null callback for error handling
  if (callback == nullptr) return -1;
  int32_t newUid = 0;
 {
    std::lock_guard<std::mutex> lock(m_registerMutex);
    m_stckyFault_ForLimCallbacks = RegisterCallback(m_stckyFault_ForLimCallbacks, "StckyFault_ForLim", callback, param, &newUid);
  }
  if (initialNotify) {
    // We know that the callback is not null because of earlier null check
    HAL_Value value = MakeDouble(GetStckyFault_ForLim());
    callback("StckyFault_ForLim", param, &value);
  }
  return newUid;
}

void CanTalonData::CancelStckyFault_ForLimCallback(int32_t uid) {
  m_stckyFault_ForLimCallbacks = CancelCallback(m_stckyFault_ForLimCallbacks, uid);
}

void CanTalonData::InvokeStckyFault_ForLimCallback(HAL_Value value) {
  InvokeCallback(m_stckyFault_ForLimCallbacks, "StckyFault_ForLim", &value);
}

double CanTalonData::GetStckyFault_ForLim() {
  return m_stckyFault_ForLim;
}

void CanTalonData::SetStckyFault_ForLim(double stckyFault_ForLim) {
  double oldValue = m_stckyFault_ForLim.exchange(stckyFault_ForLim);
  if (oldValue != stckyFault_ForLim) {
    InvokeStckyFault_ForLimCallback(MakeDouble(stckyFault_ForLim));
  }
}

int32_t CanTalonData::RegisterStckyFault_RevLimCallback(HAL_NotifyCallback callback, void* param, HAL_Bool initialNotify) {
  // Must return -1 on a null callback for error handling
  if (callback == nullptr) return -1;
  int32_t newUid = 0;
 {
    std::lock_guard<std::mutex> lock(m_registerMutex);
    m_stckyFault_RevLimCallbacks = RegisterCallback(m_stckyFault_RevLimCallbacks, "StckyFault_RevLim", callback, param, &newUid);
  }
  if (initialNotify) {
    // We know that the callback is not null because of earlier null check
    HAL_Value value = MakeDouble(GetStckyFault_RevLim());
    callback("StckyFault_RevLim", param, &value);
  }
  return newUid;
}

void CanTalonData::CancelStckyFault_RevLimCallback(int32_t uid) {
  m_stckyFault_RevLimCallbacks = CancelCallback(m_stckyFault_RevLimCallbacks, uid);
}

void CanTalonData::InvokeStckyFault_RevLimCallback(HAL_Value value) {
  InvokeCallback(m_stckyFault_RevLimCallbacks, "StckyFault_RevLim", &value);
}

double CanTalonData::GetStckyFault_RevLim() {
  return m_stckyFault_RevLim;
}

void CanTalonData::SetStckyFault_RevLim(double stckyFault_RevLim) {
  double oldValue = m_stckyFault_RevLim.exchange(stckyFault_RevLim);
  if (oldValue != stckyFault_RevLim) {
    InvokeStckyFault_RevLimCallback(MakeDouble(stckyFault_RevLim));
  }
}

int32_t CanTalonData::RegisterStckyFault_ForSoftLimCallback(HAL_NotifyCallback callback, void* param, HAL_Bool initialNotify) {
  // Must return -1 on a null callback for error handling
  if (callback == nullptr) return -1;
  int32_t newUid = 0;
 {
    std::lock_guard<std::mutex> lock(m_registerMutex);
    m_stckyFault_ForSoftLimCallbacks = RegisterCallback(m_stckyFault_ForSoftLimCallbacks, "StckyFault_ForSoftLim", callback, param, &newUid);
  }
  if (initialNotify) {
    // We know that the callback is not null because of earlier null check
    HAL_Value value = MakeDouble(GetStckyFault_ForSoftLim());
    callback("StckyFault_ForSoftLim", param, &value);
  }
  return newUid;
}

void CanTalonData::CancelStckyFault_ForSoftLimCallback(int32_t uid) {
  m_stckyFault_ForSoftLimCallbacks = CancelCallback(m_stckyFault_ForSoftLimCallbacks, uid);
}

void CanTalonData::InvokeStckyFault_ForSoftLimCallback(HAL_Value value) {
  InvokeCallback(m_stckyFault_ForSoftLimCallbacks, "StckyFault_ForSoftLim", &value);
}

double CanTalonData::GetStckyFault_ForSoftLim() {
  return m_stckyFault_ForSoftLim;
}

void CanTalonData::SetStckyFault_ForSoftLim(double stckyFault_ForSoftLim) {
  double oldValue = m_stckyFault_ForSoftLim.exchange(stckyFault_ForSoftLim);
  if (oldValue != stckyFault_ForSoftLim) {
    InvokeStckyFault_ForSoftLimCallback(MakeDouble(stckyFault_ForSoftLim));
  }
}

int32_t CanTalonData::RegisterStckyFault_RevSoftLimCallback(HAL_NotifyCallback callback, void* param, HAL_Bool initialNotify) {
  // Must return -1 on a null callback for error handling
  if (callback == nullptr) return -1;
  int32_t newUid = 0;
 {
    std::lock_guard<std::mutex> lock(m_registerMutex);
    m_stckyFault_RevSoftLimCallbacks = RegisterCallback(m_stckyFault_RevSoftLimCallbacks, "StckyFault_RevSoftLim", callback, param, &newUid);
  }
  if (initialNotify) {
    // We know that the callback is not null because of earlier null check
    HAL_Value value = MakeDouble(GetStckyFault_RevSoftLim());
    callback("StckyFault_RevSoftLim", param, &value);
  }
  return newUid;
}

void CanTalonData::CancelStckyFault_RevSoftLimCallback(int32_t uid) {
  m_stckyFault_RevSoftLimCallbacks = CancelCallback(m_stckyFault_RevSoftLimCallbacks, uid);
}

void CanTalonData::InvokeStckyFault_RevSoftLimCallback(HAL_Value value) {
  InvokeCallback(m_stckyFault_RevSoftLimCallbacks, "StckyFault_RevSoftLim", &value);
}

double CanTalonData::GetStckyFault_RevSoftLim() {
  return m_stckyFault_RevSoftLim;
}

void CanTalonData::SetStckyFault_RevSoftLim(double stckyFault_RevSoftLim) {
  double oldValue = m_stckyFault_RevSoftLim.exchange(stckyFault_RevSoftLim);
  if (oldValue != stckyFault_RevSoftLim) {
    InvokeStckyFault_RevSoftLimCallback(MakeDouble(stckyFault_RevSoftLim));
  }
}

int32_t CanTalonData::RegisterAppliedThrottleCallback(HAL_NotifyCallback callback, void* param, HAL_Bool initialNotify) {
  // Must return -1 on a null callback for error handling
  if (callback == nullptr) return -1;
  int32_t newUid = 0;
 {
    std::lock_guard<std::mutex> lock(m_registerMutex);
    m_appliedThrottleCallbacks = RegisterCallback(m_appliedThrottleCallbacks, "AppliedThrottle", callback, param, &newUid);
  }
  if (initialNotify) {
    // We know that the callback is not null because of earlier null check
    HAL_Value value = MakeDouble(GetAppliedThrottle());
    callback("AppliedThrottle", param, &value);
  }
  return newUid;
}

void CanTalonData::CancelAppliedThrottleCallback(int32_t uid) {
  m_appliedThrottleCallbacks = CancelCallback(m_appliedThrottleCallbacks, uid);
}

void CanTalonData::InvokeAppliedThrottleCallback(HAL_Value value) {
  InvokeCallback(m_appliedThrottleCallbacks, "AppliedThrottle", &value);
}

double CanTalonData::GetAppliedThrottle() {
  return m_appliedThrottle;
}

void CanTalonData::SetAppliedThrottle(double appliedThrottle) {
  double oldValue = m_appliedThrottle.exchange(appliedThrottle);
  if (oldValue != appliedThrottle) {
    InvokeAppliedThrottleCallback(MakeDouble(appliedThrottle));
  }
}

int32_t CanTalonData::RegisterCloseLoopErrCallback(HAL_NotifyCallback callback, void* param, HAL_Bool initialNotify) {
  // Must return -1 on a null callback for error handling
  if (callback == nullptr) return -1;
  int32_t newUid = 0;
 {
    std::lock_guard<std::mutex> lock(m_registerMutex);
    m_closeLoopErrCallbacks = RegisterCallback(m_closeLoopErrCallbacks, "CloseLoopErr", callback, param, &newUid);
  }
  if (initialNotify) {
    // We know that the callback is not null because of earlier null check
    HAL_Value value = MakeDouble(GetCloseLoopErr());
    callback("CloseLoopErr", param, &value);
  }
  return newUid;
}

void CanTalonData::CancelCloseLoopErrCallback(int32_t uid) {
  m_closeLoopErrCallbacks = CancelCallback(m_closeLoopErrCallbacks, uid);
}

void CanTalonData::InvokeCloseLoopErrCallback(HAL_Value value) {
  InvokeCallback(m_closeLoopErrCallbacks, "CloseLoopErr", &value);
}

double CanTalonData::GetCloseLoopErr() {
  return m_closeLoopErr;
}

void CanTalonData::SetCloseLoopErr(double closeLoopErr) {
  double oldValue = m_closeLoopErr.exchange(closeLoopErr);
  if (oldValue != closeLoopErr) {
    InvokeCloseLoopErrCallback(MakeDouble(closeLoopErr));
  }
}

int32_t CanTalonData::RegisterFeedbackDeviceSelectCallback(HAL_NotifyCallback callback, void* param, HAL_Bool initialNotify) {
  // Must return -1 on a null callback for error handling
  if (callback == nullptr) return -1;
  int32_t newUid = 0;
 {
    std::lock_guard<std::mutex> lock(m_registerMutex);
    m_feedbackDeviceSelectCallbacks = RegisterCallback(m_feedbackDeviceSelectCallbacks, "FeedbackDeviceSelect", callback, param, &newUid);
  }
  if (initialNotify) {
    // We know that the callback is not null because of earlier null check
    HAL_Value value = MakeDouble(GetFeedbackDeviceSelect());
    callback("FeedbackDeviceSelect", param, &value);
  }
  return newUid;
}

void CanTalonData::CancelFeedbackDeviceSelectCallback(int32_t uid) {
  m_feedbackDeviceSelectCallbacks = CancelCallback(m_feedbackDeviceSelectCallbacks, uid);
}

void CanTalonData::InvokeFeedbackDeviceSelectCallback(HAL_Value value) {
  InvokeCallback(m_feedbackDeviceSelectCallbacks, "FeedbackDeviceSelect", &value);
}

double CanTalonData::GetFeedbackDeviceSelect() {
  return m_feedbackDeviceSelect;
}

void CanTalonData::SetFeedbackDeviceSelect(double feedbackDeviceSelect) {
  double oldValue = m_feedbackDeviceSelect.exchange(feedbackDeviceSelect);
  if (oldValue != feedbackDeviceSelect) {
    InvokeFeedbackDeviceSelectCallback(MakeDouble(feedbackDeviceSelect));
  }
}

int32_t CanTalonData::RegisterRevMotDuringCloseLoopEnCallback(HAL_NotifyCallback callback, void* param, HAL_Bool initialNotify) {
  // Must return -1 on a null callback for error handling
  if (callback == nullptr) return -1;
  int32_t newUid = 0;
 {
    std::lock_guard<std::mutex> lock(m_registerMutex);
    m_revMotDuringCloseLoopEnCallbacks = RegisterCallback(m_revMotDuringCloseLoopEnCallbacks, "RevMotDuringCloseLoopEn", callback, param, &newUid);
  }
  if (initialNotify) {
    // We know that the callback is not null because of earlier null check
    HAL_Value value = MakeBoolean(GetRevMotDuringCloseLoopEn());
    callback("RevMotDuringCloseLoopEn", param, &value);
  }
  return newUid;
}

void CanTalonData::CancelRevMotDuringCloseLoopEnCallback(int32_t uid) {
  m_revMotDuringCloseLoopEnCallbacks = CancelCallback(m_revMotDuringCloseLoopEnCallbacks, uid);
}

void CanTalonData::InvokeRevMotDuringCloseLoopEnCallback(HAL_Value value) {
  InvokeCallback(m_revMotDuringCloseLoopEnCallbacks, "RevMotDuringCloseLoopEn", &value);
}

HAL_Bool CanTalonData::GetRevMotDuringCloseLoopEn() {
  return m_revMotDuringCloseLoopEn;
}

void CanTalonData::SetRevMotDuringCloseLoopEn(HAL_Bool revMotDuringCloseLoopEn) {
  HAL_Bool oldValue = m_revMotDuringCloseLoopEn.exchange(revMotDuringCloseLoopEn);
  if (oldValue != revMotDuringCloseLoopEn) {
    InvokeRevMotDuringCloseLoopEnCallback(MakeBoolean(revMotDuringCloseLoopEn));
  }
}

int32_t CanTalonData::RegisterModeSelectCallback(HAL_NotifyCallback callback, void* param, HAL_Bool initialNotify) {
  // Must return -1 on a null callback for error handling
  if (callback == nullptr) return -1;
  int32_t newUid = 0;
 {
    std::lock_guard<std::mutex> lock(m_registerMutex);
    m_modeSelectCallbacks = RegisterCallback(m_modeSelectCallbacks, "ModeSelect", callback, param, &newUid);
  }
  if (initialNotify) {
    // We know that the callback is not null because of earlier null check
    HAL_Value value = MakeDouble(GetModeSelect());
    callback("ModeSelect", param, &value);
  }
  return newUid;
}

void CanTalonData::CancelModeSelectCallback(int32_t uid) {
  m_modeSelectCallbacks = CancelCallback(m_modeSelectCallbacks, uid);
}

void CanTalonData::InvokeModeSelectCallback(HAL_Value value) {
  InvokeCallback(m_modeSelectCallbacks, "ModeSelect", &value);
}

double CanTalonData::GetModeSelect() {
  return m_modeSelect;
}

void CanTalonData::SetModeSelect(double modeSelect) {
  double oldValue = m_modeSelect.exchange(modeSelect);
  if (oldValue != modeSelect) {
    InvokeModeSelectCallback(MakeDouble(modeSelect));
  }
}

int32_t CanTalonData::RegisterProfileSlotSelectCallback(HAL_NotifyCallback callback, void* param, HAL_Bool initialNotify) {
  // Must return -1 on a null callback for error handling
  if (callback == nullptr) return -1;
  int32_t newUid = 0;
 {
    std::lock_guard<std::mutex> lock(m_registerMutex);
    m_profileSlotSelectCallbacks = RegisterCallback(m_profileSlotSelectCallbacks, "ProfileSlotSelect", callback, param, &newUid);
  }
  if (initialNotify) {
    // We know that the callback is not null because of earlier null check
    HAL_Value value = MakeDouble(GetProfileSlotSelect());
    callback("ProfileSlotSelect", param, &value);
  }
  return newUid;
}

void CanTalonData::CancelProfileSlotSelectCallback(int32_t uid) {
  m_profileSlotSelectCallbacks = CancelCallback(m_profileSlotSelectCallbacks, uid);
}

void CanTalonData::InvokeProfileSlotSelectCallback(HAL_Value value) {
  InvokeCallback(m_profileSlotSelectCallbacks, "ProfileSlotSelect", &value);
}

double CanTalonData::GetProfileSlotSelect() {
  return m_profileSlotSelect;
}

void CanTalonData::SetProfileSlotSelect(double profileSlotSelect) {
  double oldValue = m_profileSlotSelect.exchange(profileSlotSelect);
  if (oldValue != profileSlotSelect) {
    InvokeProfileSlotSelectCallback(MakeDouble(profileSlotSelect));
  }
}

int32_t CanTalonData::RegisterRampThrottleCallback(HAL_NotifyCallback callback, void* param, HAL_Bool initialNotify) {
  // Must return -1 on a null callback for error handling
  if (callback == nullptr) return -1;
  int32_t newUid = 0;
 {
    std::lock_guard<std::mutex> lock(m_registerMutex);
    m_rampThrottleCallbacks = RegisterCallback(m_rampThrottleCallbacks, "RampThrottle", callback, param, &newUid);
  }
  if (initialNotify) {
    // We know that the callback is not null because of earlier null check
    HAL_Value value = MakeDouble(GetRampThrottle());
    callback("RampThrottle", param, &value);
  }
  return newUid;
}

void CanTalonData::CancelRampThrottleCallback(int32_t uid) {
  m_rampThrottleCallbacks = CancelCallback(m_rampThrottleCallbacks, uid);
}

void CanTalonData::InvokeRampThrottleCallback(HAL_Value value) {
  InvokeCallback(m_rampThrottleCallbacks, "RampThrottle", &value);
}

double CanTalonData::GetRampThrottle() {
  return m_rampThrottle;
}

void CanTalonData::SetRampThrottle(double rampThrottle) {
  double oldValue = m_rampThrottle.exchange(rampThrottle);
  if (oldValue != rampThrottle) {
    InvokeRampThrottleCallback(MakeDouble(rampThrottle));
  }
}

int32_t CanTalonData::RegisterRevFeedbackSensorCallback(HAL_NotifyCallback callback, void* param, HAL_Bool initialNotify) {
  // Must return -1 on a null callback for error handling
  if (callback == nullptr) return -1;
  int32_t newUid = 0;
 {
    std::lock_guard<std::mutex> lock(m_registerMutex);
    m_revFeedbackSensorCallbacks = RegisterCallback(m_revFeedbackSensorCallbacks, "RevFeedbackSensor", callback, param, &newUid);
  }
  if (initialNotify) {
    // We know that the callback is not null because of earlier null check
    HAL_Value value = MakeBoolean(GetRevFeedbackSensor());
    callback("RevFeedbackSensor", param, &value);
  }
  return newUid;
}

void CanTalonData::CancelRevFeedbackSensorCallback(int32_t uid) {
  m_revFeedbackSensorCallbacks = CancelCallback(m_revFeedbackSensorCallbacks, uid);
}

void CanTalonData::InvokeRevFeedbackSensorCallback(HAL_Value value) {
  InvokeCallback(m_revFeedbackSensorCallbacks, "RevFeedbackSensor", &value);
}

HAL_Bool CanTalonData::GetRevFeedbackSensor() {
  return m_revFeedbackSensor;
}

void CanTalonData::SetRevFeedbackSensor(HAL_Bool revFeedbackSensor) {
  HAL_Bool oldValue = m_revFeedbackSensor.exchange(revFeedbackSensor);
  if (oldValue != revFeedbackSensor) {
    InvokeRevFeedbackSensorCallback(MakeBoolean(revFeedbackSensor));
  }
}

int32_t CanTalonData::RegisterLimitSwitchEnCallback(HAL_NotifyCallback callback, void* param, HAL_Bool initialNotify) {
  // Must return -1 on a null callback for error handling
  if (callback == nullptr) return -1;
  int32_t newUid = 0;
 {
    std::lock_guard<std::mutex> lock(m_registerMutex);
    m_limitSwitchEnCallbacks = RegisterCallback(m_limitSwitchEnCallbacks, "LimitSwitchEn", callback, param, &newUid);
  }
  if (initialNotify) {
    // We know that the callback is not null because of earlier null check
    HAL_Value value = MakeDouble(GetLimitSwitchEn());
    callback("LimitSwitchEn", param, &value);
  }
  return newUid;
}

void CanTalonData::CancelLimitSwitchEnCallback(int32_t uid) {
  m_limitSwitchEnCallbacks = CancelCallback(m_limitSwitchEnCallbacks, uid);
}

void CanTalonData::InvokeLimitSwitchEnCallback(HAL_Value value) {
  InvokeCallback(m_limitSwitchEnCallbacks, "LimitSwitchEn", &value);
}

double CanTalonData::GetLimitSwitchEn() {
  return m_limitSwitchEn;
}

void CanTalonData::SetLimitSwitchEn(double limitSwitchEn) {
  double oldValue = m_limitSwitchEn.exchange(limitSwitchEn);
  if (oldValue != limitSwitchEn) {
    InvokeLimitSwitchEnCallback(MakeDouble(limitSwitchEn));
  }
}

int32_t CanTalonData::RegisterLimitSwitchClosedForCallback(HAL_NotifyCallback callback, void* param, HAL_Bool initialNotify) {
  // Must return -1 on a null callback for error handling
  if (callback == nullptr) return -1;
  int32_t newUid = 0;
 {
    std::lock_guard<std::mutex> lock(m_registerMutex);
    m_limitSwitchClosedForCallbacks = RegisterCallback(m_limitSwitchClosedForCallbacks, "LimitSwitchClosedFor", callback, param, &newUid);
  }
  if (initialNotify) {
    // We know that the callback is not null because of earlier null check
    HAL_Value value = MakeBoolean(GetLimitSwitchClosedFor());
    callback("LimitSwitchClosedFor", param, &value);
  }
  return newUid;
}

void CanTalonData::CancelLimitSwitchClosedForCallback(int32_t uid) {
  m_limitSwitchClosedForCallbacks = CancelCallback(m_limitSwitchClosedForCallbacks, uid);
}

void CanTalonData::InvokeLimitSwitchClosedForCallback(HAL_Value value) {
  InvokeCallback(m_limitSwitchClosedForCallbacks, "LimitSwitchClosedFor", &value);
}

HAL_Bool CanTalonData::GetLimitSwitchClosedFor() {
  return m_limitSwitchClosedFor;
}

void CanTalonData::SetLimitSwitchClosedFor(HAL_Bool limitSwitchClosedFor) {
  HAL_Bool oldValue = m_limitSwitchClosedFor.exchange(limitSwitchClosedFor);
  if (oldValue != limitSwitchClosedFor) {
    InvokeLimitSwitchClosedForCallback(MakeBoolean(limitSwitchClosedFor));
  }
}

int32_t CanTalonData::RegisterLimitSwitchClosedRevCallback(HAL_NotifyCallback callback, void* param, HAL_Bool initialNotify) {
  // Must return -1 on a null callback for error handling
  if (callback == nullptr) return -1;
  int32_t newUid = 0;
 {
    std::lock_guard<std::mutex> lock(m_registerMutex);
    m_limitSwitchClosedRevCallbacks = RegisterCallback(m_limitSwitchClosedRevCallbacks, "LimitSwitchClosedRev", callback, param, &newUid);
  }
  if (initialNotify) {
    // We know that the callback is not null because of earlier null check
    HAL_Value value = MakeBoolean(GetLimitSwitchClosedRev());
    callback("LimitSwitchClosedRev", param, &value);
  }
  return newUid;
}

void CanTalonData::CancelLimitSwitchClosedRevCallback(int32_t uid) {
  m_limitSwitchClosedRevCallbacks = CancelCallback(m_limitSwitchClosedRevCallbacks, uid);
}

void CanTalonData::InvokeLimitSwitchClosedRevCallback(HAL_Value value) {
  InvokeCallback(m_limitSwitchClosedRevCallbacks, "LimitSwitchClosedRev", &value);
}

HAL_Bool CanTalonData::GetLimitSwitchClosedRev() {
  return m_limitSwitchClosedRev;
}

void CanTalonData::SetLimitSwitchClosedRev(HAL_Bool limitSwitchClosedRev) {
  HAL_Bool oldValue = m_limitSwitchClosedRev.exchange(limitSwitchClosedRev);
  if (oldValue != limitSwitchClosedRev) {
    InvokeLimitSwitchClosedRevCallback(MakeBoolean(limitSwitchClosedRev));
  }
}

int32_t CanTalonData::RegisterSensorPositionCallback(HAL_NotifyCallback callback, void* param, HAL_Bool initialNotify) {
  // Must return -1 on a null callback for error handling
  if (callback == nullptr) return -1;
  int32_t newUid = 0;
 {
    std::lock_guard<std::mutex> lock(m_registerMutex);
    m_sensorPositionCallbacks = RegisterCallback(m_sensorPositionCallbacks, "SensorPosition", callback, param, &newUid);
  }
  if (initialNotify) {
    // We know that the callback is not null because of earlier null check
    HAL_Value value = MakeDouble(GetSensorPosition());
    callback("SensorPosition", param, &value);
  }
  return newUid;
}

void CanTalonData::CancelSensorPositionCallback(int32_t uid) {
  m_sensorPositionCallbacks = CancelCallback(m_sensorPositionCallbacks, uid);
}

void CanTalonData::InvokeSensorPositionCallback(HAL_Value value) {
  InvokeCallback(m_sensorPositionCallbacks, "SensorPosition", &value);
}

double CanTalonData::GetSensorPosition() {
  return m_sensorPosition;
}

void CanTalonData::SetSensorPosition(double sensorPosition) {
  double oldValue = m_sensorPosition.exchange(sensorPosition);
  if (oldValue != sensorPosition) {
    InvokeSensorPositionCallback(MakeDouble(sensorPosition));
  }
}

int32_t CanTalonData::RegisterSensorVelocityCallback(HAL_NotifyCallback callback, void* param, HAL_Bool initialNotify) {
  // Must return -1 on a null callback for error handling
  if (callback == nullptr) return -1;
  int32_t newUid = 0;
 {
    std::lock_guard<std::mutex> lock(m_registerMutex);
    m_sensorVelocityCallbacks = RegisterCallback(m_sensorVelocityCallbacks, "SensorVelocity", callback, param, &newUid);
  }
  if (initialNotify) {
    // We know that the callback is not null because of earlier null check
    HAL_Value value = MakeDouble(GetSensorVelocity());
    callback("SensorVelocity", param, &value);
  }
  return newUid;
}

void CanTalonData::CancelSensorVelocityCallback(int32_t uid) {
  m_sensorVelocityCallbacks = CancelCallback(m_sensorVelocityCallbacks, uid);
}

void CanTalonData::InvokeSensorVelocityCallback(HAL_Value value) {
  InvokeCallback(m_sensorVelocityCallbacks, "SensorVelocity", &value);
}

double CanTalonData::GetSensorVelocity() {
  return m_sensorVelocity;
}

void CanTalonData::SetSensorVelocity(double sensorVelocity) {
  double oldValue = m_sensorVelocity.exchange(sensorVelocity);
  if (oldValue != sensorVelocity) {
    InvokeSensorVelocityCallback(MakeDouble(sensorVelocity));
  }
}

int32_t CanTalonData::RegisterCurrentCallback(HAL_NotifyCallback callback, void* param, HAL_Bool initialNotify) {
  // Must return -1 on a null callback for error handling
  if (callback == nullptr) return -1;
  int32_t newUid = 0;
 {
    std::lock_guard<std::mutex> lock(m_registerMutex);
    m_currentCallbacks = RegisterCallback(m_currentCallbacks, "Current", callback, param, &newUid);
  }
  if (initialNotify) {
    // We know that the callback is not null because of earlier null check
    HAL_Value value = MakeDouble(GetCurrent());
    callback("Current", param, &value);
  }
  return newUid;
}

void CanTalonData::CancelCurrentCallback(int32_t uid) {
  m_currentCallbacks = CancelCallback(m_currentCallbacks, uid);
}

void CanTalonData::InvokeCurrentCallback(HAL_Value value) {
  InvokeCallback(m_currentCallbacks, "Current", &value);
}

double CanTalonData::GetCurrent() {
  return m_current;
}

void CanTalonData::SetCurrent(double current) {
  double oldValue = m_current.exchange(current);
  if (oldValue != current) {
    InvokeCurrentCallback(MakeDouble(current));
  }
}

int32_t CanTalonData::RegisterBrakeIsEnabledCallback(HAL_NotifyCallback callback, void* param, HAL_Bool initialNotify) {
  // Must return -1 on a null callback for error handling
  if (callback == nullptr) return -1;
  int32_t newUid = 0;
 {
    std::lock_guard<std::mutex> lock(m_registerMutex);
    m_brakeIsEnabledCallbacks = RegisterCallback(m_brakeIsEnabledCallbacks, "BrakeIsEnabled", callback, param, &newUid);
  }
  if (initialNotify) {
    // We know that the callback is not null because of earlier null check
    HAL_Value value = MakeBoolean(GetBrakeIsEnabled());
    callback("BrakeIsEnabled", param, &value);
  }
  return newUid;
}

void CanTalonData::CancelBrakeIsEnabledCallback(int32_t uid) {
  m_brakeIsEnabledCallbacks = CancelCallback(m_brakeIsEnabledCallbacks, uid);
}

void CanTalonData::InvokeBrakeIsEnabledCallback(HAL_Value value) {
  InvokeCallback(m_brakeIsEnabledCallbacks, "BrakeIsEnabled", &value);
}

HAL_Bool CanTalonData::GetBrakeIsEnabled() {
  return m_brakeIsEnabled;
}

void CanTalonData::SetBrakeIsEnabled(HAL_Bool brakeIsEnabled) {
  HAL_Bool oldValue = m_brakeIsEnabled.exchange(brakeIsEnabled);
  if (oldValue != brakeIsEnabled) {
    InvokeBrakeIsEnabledCallback(MakeBoolean(brakeIsEnabled));
  }
}

int32_t CanTalonData::RegisterEncPositionCallback(HAL_NotifyCallback callback, void* param, HAL_Bool initialNotify) {
  // Must return -1 on a null callback for error handling
  if (callback == nullptr) return -1;
  int32_t newUid = 0;
 {
    std::lock_guard<std::mutex> lock(m_registerMutex);
    m_encPositionCallbacks = RegisterCallback(m_encPositionCallbacks, "EncPosition", callback, param, &newUid);
  }
  if (initialNotify) {
    // We know that the callback is not null because of earlier null check
    HAL_Value value = MakeDouble(GetEncPosition());
    callback("EncPosition", param, &value);
  }
  return newUid;
}

void CanTalonData::CancelEncPositionCallback(int32_t uid) {
  m_encPositionCallbacks = CancelCallback(m_encPositionCallbacks, uid);
}

void CanTalonData::InvokeEncPositionCallback(HAL_Value value) {
  InvokeCallback(m_encPositionCallbacks, "EncPosition", &value);
}

double CanTalonData::GetEncPosition() {
  return m_encPosition;
}

void CanTalonData::SetEncPosition(double encPosition) {
  double oldValue = m_encPosition.exchange(encPosition);
  if (oldValue != encPosition) {
    InvokeEncPositionCallback(MakeDouble(encPosition));
  }
}

int32_t CanTalonData::RegisterEncVelCallback(HAL_NotifyCallback callback, void* param, HAL_Bool initialNotify) {
  // Must return -1 on a null callback for error handling
  if (callback == nullptr) return -1;
  int32_t newUid = 0;
 {
    std::lock_guard<std::mutex> lock(m_registerMutex);
    m_encVelCallbacks = RegisterCallback(m_encVelCallbacks, "EncVel", callback, param, &newUid);
  }
  if (initialNotify) {
    // We know that the callback is not null because of earlier null check
    HAL_Value value = MakeDouble(GetEncVel());
    callback("EncVel", param, &value);
  }
  return newUid;
}

void CanTalonData::CancelEncVelCallback(int32_t uid) {
  m_encVelCallbacks = CancelCallback(m_encVelCallbacks, uid);
}

void CanTalonData::InvokeEncVelCallback(HAL_Value value) {
  InvokeCallback(m_encVelCallbacks, "EncVel", &value);
}

double CanTalonData::GetEncVel() {
  return m_encVel;
}

void CanTalonData::SetEncVel(double encVel) {
  double oldValue = m_encVel.exchange(encVel);
  if (oldValue != encVel) {
    InvokeEncVelCallback(MakeDouble(encVel));
  }
}

int32_t CanTalonData::RegisterEncIndexRiseEventsCallback(HAL_NotifyCallback callback, void* param, HAL_Bool initialNotify) {
  // Must return -1 on a null callback for error handling
  if (callback == nullptr) return -1;
  int32_t newUid = 0;
 {
    std::lock_guard<std::mutex> lock(m_registerMutex);
    m_encIndexRiseEventsCallbacks = RegisterCallback(m_encIndexRiseEventsCallbacks, "EncIndexRiseEvents", callback, param, &newUid);
  }
  if (initialNotify) {
    // We know that the callback is not null because of earlier null check
    HAL_Value value = MakeDouble(GetEncIndexRiseEvents());
    callback("EncIndexRiseEvents", param, &value);
  }
  return newUid;
}

void CanTalonData::CancelEncIndexRiseEventsCallback(int32_t uid) {
  m_encIndexRiseEventsCallbacks = CancelCallback(m_encIndexRiseEventsCallbacks, uid);
}

void CanTalonData::InvokeEncIndexRiseEventsCallback(HAL_Value value) {
  InvokeCallback(m_encIndexRiseEventsCallbacks, "EncIndexRiseEvents", &value);
}

double CanTalonData::GetEncIndexRiseEvents() {
  return m_encIndexRiseEvents;
}

void CanTalonData::SetEncIndexRiseEvents(double encIndexRiseEvents) {
  double oldValue = m_encIndexRiseEvents.exchange(encIndexRiseEvents);
  if (oldValue != encIndexRiseEvents) {
    InvokeEncIndexRiseEventsCallback(MakeDouble(encIndexRiseEvents));
  }
}

int32_t CanTalonData::RegisterQuadApinCallback(HAL_NotifyCallback callback, void* param, HAL_Bool initialNotify) {
  // Must return -1 on a null callback for error handling
  if (callback == nullptr) return -1;
  int32_t newUid = 0;
 {
    std::lock_guard<std::mutex> lock(m_registerMutex);
    m_quadApinCallbacks = RegisterCallback(m_quadApinCallbacks, "QuadApin", callback, param, &newUid);
  }
  if (initialNotify) {
    // We know that the callback is not null because of earlier null check
    HAL_Value value = MakeDouble(GetQuadApin());
    callback("QuadApin", param, &value);
  }
  return newUid;
}

void CanTalonData::CancelQuadApinCallback(int32_t uid) {
  m_quadApinCallbacks = CancelCallback(m_quadApinCallbacks, uid);
}

void CanTalonData::InvokeQuadApinCallback(HAL_Value value) {
  InvokeCallback(m_quadApinCallbacks, "QuadApin", &value);
}

double CanTalonData::GetQuadApin() {
  return m_quadApin;
}

void CanTalonData::SetQuadApin(double quadApin) {
  double oldValue = m_quadApin.exchange(quadApin);
  if (oldValue != quadApin) {
    InvokeQuadApinCallback(MakeDouble(quadApin));
  }
}

int32_t CanTalonData::RegisterQuadBpinCallback(HAL_NotifyCallback callback, void* param, HAL_Bool initialNotify) {
  // Must return -1 on a null callback for error handling
  if (callback == nullptr) return -1;
  int32_t newUid = 0;
 {
    std::lock_guard<std::mutex> lock(m_registerMutex);
    m_quadBpinCallbacks = RegisterCallback(m_quadBpinCallbacks, "QuadBpin", callback, param, &newUid);
  }
  if (initialNotify) {
    // We know that the callback is not null because of earlier null check
    HAL_Value value = MakeDouble(GetQuadBpin());
    callback("QuadBpin", param, &value);
  }
  return newUid;
}

void CanTalonData::CancelQuadBpinCallback(int32_t uid) {
  m_quadBpinCallbacks = CancelCallback(m_quadBpinCallbacks, uid);
}

void CanTalonData::InvokeQuadBpinCallback(HAL_Value value) {
  InvokeCallback(m_quadBpinCallbacks, "QuadBpin", &value);
}

double CanTalonData::GetQuadBpin() {
  return m_quadBpin;
}

void CanTalonData::SetQuadBpin(double quadBpin) {
  double oldValue = m_quadBpin.exchange(quadBpin);
  if (oldValue != quadBpin) {
    InvokeQuadBpinCallback(MakeDouble(quadBpin));
  }
}

int32_t CanTalonData::RegisterQuadIdxpinCallback(HAL_NotifyCallback callback, void* param, HAL_Bool initialNotify) {
  // Must return -1 on a null callback for error handling
  if (callback == nullptr) return -1;
  int32_t newUid = 0;
 {
    std::lock_guard<std::mutex> lock(m_registerMutex);
    m_quadIdxpinCallbacks = RegisterCallback(m_quadIdxpinCallbacks, "QuadIdxpin", callback, param, &newUid);
  }
  if (initialNotify) {
    // We know that the callback is not null because of earlier null check
    HAL_Value value = MakeDouble(GetQuadIdxpin());
    callback("QuadIdxpin", param, &value);
  }
  return newUid;
}

void CanTalonData::CancelQuadIdxpinCallback(int32_t uid) {
  m_quadIdxpinCallbacks = CancelCallback(m_quadIdxpinCallbacks, uid);
}

void CanTalonData::InvokeQuadIdxpinCallback(HAL_Value value) {
  InvokeCallback(m_quadIdxpinCallbacks, "QuadIdxpin", &value);
}

double CanTalonData::GetQuadIdxpin() {
  return m_quadIdxpin;
}

void CanTalonData::SetQuadIdxpin(double quadIdxpin) {
  double oldValue = m_quadIdxpin.exchange(quadIdxpin);
  if (oldValue != quadIdxpin) {
    InvokeQuadIdxpinCallback(MakeDouble(quadIdxpin));
  }
}

int32_t CanTalonData::RegisterAnalogInWithOvCallback(HAL_NotifyCallback callback, void* param, HAL_Bool initialNotify) {
  // Must return -1 on a null callback for error handling
  if (callback == nullptr) return -1;
  int32_t newUid = 0;
 {
    std::lock_guard<std::mutex> lock(m_registerMutex);
    m_analogInWithOvCallbacks = RegisterCallback(m_analogInWithOvCallbacks, "AnalogInWithOv", callback, param, &newUid);
  }
  if (initialNotify) {
    // We know that the callback is not null because of earlier null check
    HAL_Value value = MakeDouble(GetAnalogInWithOv());
    callback("AnalogInWithOv", param, &value);
  }
  return newUid;
}

void CanTalonData::CancelAnalogInWithOvCallback(int32_t uid) {
  m_analogInWithOvCallbacks = CancelCallback(m_analogInWithOvCallbacks, uid);
}

void CanTalonData::InvokeAnalogInWithOvCallback(HAL_Value value) {
  InvokeCallback(m_analogInWithOvCallbacks, "AnalogInWithOv", &value);
}

double CanTalonData::GetAnalogInWithOv() {
  return m_analogInWithOv;
}

void CanTalonData::SetAnalogInWithOv(double analogInWithOv) {
  double oldValue = m_analogInWithOv.exchange(analogInWithOv);
  if (oldValue != analogInWithOv) {
    InvokeAnalogInWithOvCallback(MakeDouble(analogInWithOv));
  }
}

int32_t CanTalonData::RegisterAnalogInVelCallback(HAL_NotifyCallback callback, void* param, HAL_Bool initialNotify) {
  // Must return -1 on a null callback for error handling
  if (callback == nullptr) return -1;
  int32_t newUid = 0;
 {
    std::lock_guard<std::mutex> lock(m_registerMutex);
    m_analogInVelCallbacks = RegisterCallback(m_analogInVelCallbacks, "AnalogInVel", callback, param, &newUid);
  }
  if (initialNotify) {
    // We know that the callback is not null because of earlier null check
    HAL_Value value = MakeDouble(GetAnalogInVel());
    callback("AnalogInVel", param, &value);
  }
  return newUid;
}

void CanTalonData::CancelAnalogInVelCallback(int32_t uid) {
  m_analogInVelCallbacks = CancelCallback(m_analogInVelCallbacks, uid);
}

void CanTalonData::InvokeAnalogInVelCallback(HAL_Value value) {
  InvokeCallback(m_analogInVelCallbacks, "AnalogInVel", &value);
}

double CanTalonData::GetAnalogInVel() {
  return m_analogInVel;
}

void CanTalonData::SetAnalogInVel(double analogInVel) {
  double oldValue = m_analogInVel.exchange(analogInVel);
  if (oldValue != analogInVel) {
    InvokeAnalogInVelCallback(MakeDouble(analogInVel));
  }
}

int32_t CanTalonData::RegisterTempCallback(HAL_NotifyCallback callback, void* param, HAL_Bool initialNotify) {
  // Must return -1 on a null callback for error handling
  if (callback == nullptr) return -1;
  int32_t newUid = 0;
 {
    std::lock_guard<std::mutex> lock(m_registerMutex);
    m_tempCallbacks = RegisterCallback(m_tempCallbacks, "Temp", callback, param, &newUid);
  }
  if (initialNotify) {
    // We know that the callback is not null because of earlier null check
    HAL_Value value = MakeDouble(GetTemp());
    callback("Temp", param, &value);
  }
  return newUid;
}

void CanTalonData::CancelTempCallback(int32_t uid) {
  m_tempCallbacks = CancelCallback(m_tempCallbacks, uid);
}

void CanTalonData::InvokeTempCallback(HAL_Value value) {
  InvokeCallback(m_tempCallbacks, "Temp", &value);
}

double CanTalonData::GetTemp() {
  return m_temp;
}

void CanTalonData::SetTemp(double temp) {
  double oldValue = m_temp.exchange(temp);
  if (oldValue != temp) {
    InvokeTempCallback(MakeDouble(temp));
  }
}

int32_t CanTalonData::RegisterBatteryVCallback(HAL_NotifyCallback callback, void* param, HAL_Bool initialNotify) {
  // Must return -1 on a null callback for error handling
  if (callback == nullptr) return -1;
  int32_t newUid = 0;
 {
    std::lock_guard<std::mutex> lock(m_registerMutex);
    m_batteryVCallbacks = RegisterCallback(m_batteryVCallbacks, "BatteryV", callback, param, &newUid);
  }
  if (initialNotify) {
    // We know that the callback is not null because of earlier null check
    HAL_Value value = MakeDouble(GetBatteryV());
    callback("BatteryV", param, &value);
  }
  return newUid;
}

void CanTalonData::CancelBatteryVCallback(int32_t uid) {
  m_batteryVCallbacks = CancelCallback(m_batteryVCallbacks, uid);
}

void CanTalonData::InvokeBatteryVCallback(HAL_Value value) {
  InvokeCallback(m_batteryVCallbacks, "BatteryV", &value);
}

double CanTalonData::GetBatteryV() {
  return m_batteryV;
}

void CanTalonData::SetBatteryV(double batteryV) {
  double oldValue = m_batteryV.exchange(batteryV);
  if (oldValue != batteryV) {
    InvokeBatteryVCallback(MakeDouble(batteryV));
  }
}

int32_t CanTalonData::RegisterResetCountCallback(HAL_NotifyCallback callback, void* param, HAL_Bool initialNotify) {
  // Must return -1 on a null callback for error handling
  if (callback == nullptr) return -1;
  int32_t newUid = 0;
 {
    std::lock_guard<std::mutex> lock(m_registerMutex);
    m_resetCountCallbacks = RegisterCallback(m_resetCountCallbacks, "ResetCount", callback, param, &newUid);
  }
  if (initialNotify) {
    // We know that the callback is not null because of earlier null check
    HAL_Value value = MakeDouble(GetResetCount());
    callback("ResetCount", param, &value);
  }
  return newUid;
}

void CanTalonData::CancelResetCountCallback(int32_t uid) {
  m_resetCountCallbacks = CancelCallback(m_resetCountCallbacks, uid);
}

void CanTalonData::InvokeResetCountCallback(HAL_Value value) {
  InvokeCallback(m_resetCountCallbacks, "ResetCount", &value);
}

double CanTalonData::GetResetCount() {
  return m_resetCount;
}

void CanTalonData::SetResetCount(double resetCount) {
  double oldValue = m_resetCount.exchange(resetCount);
  if (oldValue != resetCount) {
    InvokeResetCountCallback(MakeDouble(resetCount));
  }
}

int32_t CanTalonData::RegisterResetFlagsCallback(HAL_NotifyCallback callback, void* param, HAL_Bool initialNotify) {
  // Must return -1 on a null callback for error handling
  if (callback == nullptr) return -1;
  int32_t newUid = 0;
 {
    std::lock_guard<std::mutex> lock(m_registerMutex);
    m_resetFlagsCallbacks = RegisterCallback(m_resetFlagsCallbacks, "ResetFlags", callback, param, &newUid);
  }
  if (initialNotify) {
    // We know that the callback is not null because of earlier null check
    HAL_Value value = MakeDouble(GetResetFlags());
    callback("ResetFlags", param, &value);
  }
  return newUid;
}

void CanTalonData::CancelResetFlagsCallback(int32_t uid) {
  m_resetFlagsCallbacks = CancelCallback(m_resetFlagsCallbacks, uid);
}

void CanTalonData::InvokeResetFlagsCallback(HAL_Value value) {
  InvokeCallback(m_resetFlagsCallbacks, "ResetFlags", &value);
}

double CanTalonData::GetResetFlags() {
  return m_resetFlags;
}

void CanTalonData::SetResetFlags(double resetFlags) {
  double oldValue = m_resetFlags.exchange(resetFlags);
  if (oldValue != resetFlags) {
    InvokeResetFlagsCallback(MakeDouble(resetFlags));
  }
}

int32_t CanTalonData::RegisterFirmVersCallback(HAL_NotifyCallback callback, void* param, HAL_Bool initialNotify) {
  // Must return -1 on a null callback for error handling
  if (callback == nullptr) return -1;
  int32_t newUid = 0;
 {
    std::lock_guard<std::mutex> lock(m_registerMutex);
    m_firmVersCallbacks = RegisterCallback(m_firmVersCallbacks, "FirmVers", callback, param, &newUid);
  }
  if (initialNotify) {
    // We know that the callback is not null because of earlier null check
    HAL_Value value = MakeDouble(GetFirmVers());
    callback("FirmVers", param, &value);
  }
  return newUid;
}

void CanTalonData::CancelFirmVersCallback(int32_t uid) {
  m_firmVersCallbacks = CancelCallback(m_firmVersCallbacks, uid);
}

void CanTalonData::InvokeFirmVersCallback(HAL_Value value) {
  InvokeCallback(m_firmVersCallbacks, "FirmVers", &value);
}

double CanTalonData::GetFirmVers() {
  return m_firmVers;
}

void CanTalonData::SetFirmVers(double firmVers) {
  double oldValue = m_firmVers.exchange(firmVers);
  if (oldValue != firmVers) {
    InvokeFirmVersCallback(MakeDouble(firmVers));
  }
}

int32_t CanTalonData::RegisterSettingsChangedCallback(HAL_NotifyCallback callback, void* param, HAL_Bool initialNotify) {
  // Must return -1 on a null callback for error handling
  if (callback == nullptr) return -1;
  int32_t newUid = 0;
 {
    std::lock_guard<std::mutex> lock(m_registerMutex);
    m_settingsChangedCallbacks = RegisterCallback(m_settingsChangedCallbacks, "SettingsChanged", callback, param, &newUid);
  }
  if (initialNotify) {
    // We know that the callback is not null because of earlier null check
    HAL_Value value = MakeDouble(GetSettingsChanged());
    callback("SettingsChanged", param, &value);
  }
  return newUid;
}

void CanTalonData::CancelSettingsChangedCallback(int32_t uid) {
  m_settingsChangedCallbacks = CancelCallback(m_settingsChangedCallbacks, uid);
}

void CanTalonData::InvokeSettingsChangedCallback(HAL_Value value) {
  InvokeCallback(m_settingsChangedCallbacks, "SettingsChanged", &value);
}

double CanTalonData::GetSettingsChanged() {
  return m_settingsChanged;
}

void CanTalonData::SetSettingsChanged(double settingsChanged) {
  double oldValue = m_settingsChanged.exchange(settingsChanged);
  if (oldValue != settingsChanged) {
    InvokeSettingsChangedCallback(MakeDouble(settingsChanged));
  }
}

int32_t CanTalonData::RegisterQuadFilterEnCallback(HAL_NotifyCallback callback, void* param, HAL_Bool initialNotify) {
  // Must return -1 on a null callback for error handling
  if (callback == nullptr) return -1;
  int32_t newUid = 0;
 {
    std::lock_guard<std::mutex> lock(m_registerMutex);
    m_quadFilterEnCallbacks = RegisterCallback(m_quadFilterEnCallbacks, "QuadFilterEn", callback, param, &newUid);
  }
  if (initialNotify) {
    // We know that the callback is not null because of earlier null check
    HAL_Value value = MakeDouble(GetQuadFilterEn());
    callback("QuadFilterEn", param, &value);
  }
  return newUid;
}

void CanTalonData::CancelQuadFilterEnCallback(int32_t uid) {
  m_quadFilterEnCallbacks = CancelCallback(m_quadFilterEnCallbacks, uid);
}

void CanTalonData::InvokeQuadFilterEnCallback(HAL_Value value) {
  InvokeCallback(m_quadFilterEnCallbacks, "QuadFilterEn", &value);
}

double CanTalonData::GetQuadFilterEn() {
  return m_quadFilterEn;
}

void CanTalonData::SetQuadFilterEn(double quadFilterEn) {
  double oldValue = m_quadFilterEn.exchange(quadFilterEn);
  if (oldValue != quadFilterEn) {
    InvokeQuadFilterEnCallback(MakeDouble(quadFilterEn));
  }
}

int32_t CanTalonData::RegisterPidIaccumCallback(HAL_NotifyCallback callback, void* param, HAL_Bool initialNotify) {
  // Must return -1 on a null callback for error handling
  if (callback == nullptr) return -1;
  int32_t newUid = 0;
 {
    std::lock_guard<std::mutex> lock(m_registerMutex);
    m_pidIaccumCallbacks = RegisterCallback(m_pidIaccumCallbacks, "PidIaccum", callback, param, &newUid);
  }
  if (initialNotify) {
    // We know that the callback is not null because of earlier null check
    HAL_Value value = MakeDouble(GetPidIaccum());
    callback("PidIaccum", param, &value);
  }
  return newUid;
}

void CanTalonData::CancelPidIaccumCallback(int32_t uid) {
  m_pidIaccumCallbacks = CancelCallback(m_pidIaccumCallbacks, uid);
}

void CanTalonData::InvokePidIaccumCallback(HAL_Value value) {
  InvokeCallback(m_pidIaccumCallbacks, "PidIaccum", &value);
}

double CanTalonData::GetPidIaccum() {
  return m_pidIaccum;
}

void CanTalonData::SetPidIaccum(double pidIaccum) {
  double oldValue = m_pidIaccum.exchange(pidIaccum);
  if (oldValue != pidIaccum) {
    InvokePidIaccumCallback(MakeDouble(pidIaccum));
  }
}

int32_t CanTalonData::RegisterAinPositionCallback(HAL_NotifyCallback callback, void* param, HAL_Bool initialNotify) {
  // Must return -1 on a null callback for error handling
  if (callback == nullptr) return -1;
  int32_t newUid = 0;
 {
    std::lock_guard<std::mutex> lock(m_registerMutex);
    m_ainPositionCallbacks = RegisterCallback(m_ainPositionCallbacks, "AinPosition", callback, param, &newUid);
  }
  if (initialNotify) {
    // We know that the callback is not null because of earlier null check
    HAL_Value value = MakeDouble(GetAinPosition());
    callback("AinPosition", param, &value);
  }
  return newUid;
}

void CanTalonData::CancelAinPositionCallback(int32_t uid) {
  m_ainPositionCallbacks = CancelCallback(m_ainPositionCallbacks, uid);
}

void CanTalonData::InvokeAinPositionCallback(HAL_Value value) {
  InvokeCallback(m_ainPositionCallbacks, "AinPosition", &value);
}

double CanTalonData::GetAinPosition() {
  return m_ainPosition;
}

void CanTalonData::SetAinPosition(double ainPosition) {
  double oldValue = m_ainPosition.exchange(ainPosition);
  if (oldValue != ainPosition) {
    InvokeAinPositionCallback(MakeDouble(ainPosition));
  }
}

int32_t CanTalonData::RegisterProfileParamSlot0_AllowableClosedLoopErrCallback(HAL_NotifyCallback callback, void* param, HAL_Bool initialNotify) {
  // Must return -1 on a null callback for error handling
  if (callback == nullptr) return -1;
  int32_t newUid = 0;
 {
    std::lock_guard<std::mutex> lock(m_registerMutex);
    m_profileParamSlot0_AllowableClosedLoopErrCallbacks = RegisterCallback(m_profileParamSlot0_AllowableClosedLoopErrCallbacks, "ProfileParamSlot0_AllowableClosedLoopErr", callback, param, &newUid);
  }
  if (initialNotify) {
    // We know that the callback is not null because of earlier null check
    HAL_Value value = MakeDouble(GetProfileParamSlot0_AllowableClosedLoopErr());
    callback("ProfileParamSlot0_AllowableClosedLoopErr", param, &value);
  }
  return newUid;
}

void CanTalonData::CancelProfileParamSlot0_AllowableClosedLoopErrCallback(int32_t uid) {
  m_profileParamSlot0_AllowableClosedLoopErrCallbacks = CancelCallback(m_profileParamSlot0_AllowableClosedLoopErrCallbacks, uid);
}

void CanTalonData::InvokeProfileParamSlot0_AllowableClosedLoopErrCallback(HAL_Value value) {
  InvokeCallback(m_profileParamSlot0_AllowableClosedLoopErrCallbacks, "ProfileParamSlot0_AllowableClosedLoopErr", &value);
}

double CanTalonData::GetProfileParamSlot0_AllowableClosedLoopErr() {
  return m_profileParamSlot0_AllowableClosedLoopErr;
}

void CanTalonData::SetProfileParamSlot0_AllowableClosedLoopErr(double profileParamSlot0_AllowableClosedLoopErr) {
  double oldValue = m_profileParamSlot0_AllowableClosedLoopErr.exchange(profileParamSlot0_AllowableClosedLoopErr);
  if (oldValue != profileParamSlot0_AllowableClosedLoopErr) {
    InvokeProfileParamSlot0_AllowableClosedLoopErrCallback(MakeDouble(profileParamSlot0_AllowableClosedLoopErr));
  }
}

int32_t CanTalonData::RegisterProfileParamSlot1_AllowableClosedLoopErrCallback(HAL_NotifyCallback callback, void* param, HAL_Bool initialNotify) {
  // Must return -1 on a null callback for error handling
  if (callback == nullptr) return -1;
  int32_t newUid = 0;
 {
    std::lock_guard<std::mutex> lock(m_registerMutex);
    m_profileParamSlot1_AllowableClosedLoopErrCallbacks = RegisterCallback(m_profileParamSlot1_AllowableClosedLoopErrCallbacks, "ProfileParamSlot1_AllowableClosedLoopErr", callback, param, &newUid);
  }
  if (initialNotify) {
    // We know that the callback is not null because of earlier null check
    HAL_Value value = MakeDouble(GetProfileParamSlot1_AllowableClosedLoopErr());
    callback("ProfileParamSlot1_AllowableClosedLoopErr", param, &value);
  }
  return newUid;
}

void CanTalonData::CancelProfileParamSlot1_AllowableClosedLoopErrCallback(int32_t uid) {
  m_profileParamSlot1_AllowableClosedLoopErrCallbacks = CancelCallback(m_profileParamSlot1_AllowableClosedLoopErrCallbacks, uid);
}

void CanTalonData::InvokeProfileParamSlot1_AllowableClosedLoopErrCallback(HAL_Value value) {
  InvokeCallback(m_profileParamSlot1_AllowableClosedLoopErrCallbacks, "ProfileParamSlot1_AllowableClosedLoopErr", &value);
}

double CanTalonData::GetProfileParamSlot1_AllowableClosedLoopErr() {
  return m_profileParamSlot1_AllowableClosedLoopErr;
}

void CanTalonData::SetProfileParamSlot1_AllowableClosedLoopErr(double profileParamSlot1_AllowableClosedLoopErr) {
  double oldValue = m_profileParamSlot1_AllowableClosedLoopErr.exchange(profileParamSlot1_AllowableClosedLoopErr);
  if (oldValue != profileParamSlot1_AllowableClosedLoopErr) {
    InvokeProfileParamSlot1_AllowableClosedLoopErrCallback(MakeDouble(profileParamSlot1_AllowableClosedLoopErr));
  }
}

int32_t CanTalonData::RegisterNumberEncoderCPRCallback(HAL_NotifyCallback callback, void* param, HAL_Bool initialNotify) {
  // Must return -1 on a null callback for error handling
  if (callback == nullptr) return -1;
  int32_t newUid = 0;
 {
    std::lock_guard<std::mutex> lock(m_registerMutex);
    m_numberEncoderCPRCallbacks = RegisterCallback(m_numberEncoderCPRCallbacks, "NumberEncoderCPR", callback, param, &newUid);
  }
  if (initialNotify) {
    // We know that the callback is not null because of earlier null check
    HAL_Value value = MakeDouble(GetNumberEncoderCPR());
    callback("NumberEncoderCPR", param, &value);
  }
  return newUid;
}

void CanTalonData::CancelNumberEncoderCPRCallback(int32_t uid) {
  m_numberEncoderCPRCallbacks = CancelCallback(m_numberEncoderCPRCallbacks, uid);
}

void CanTalonData::InvokeNumberEncoderCPRCallback(HAL_Value value) {
  InvokeCallback(m_numberEncoderCPRCallbacks, "NumberEncoderCPR", &value);
}

double CanTalonData::GetNumberEncoderCPR() {
  return m_numberEncoderCPR;
}

void CanTalonData::SetNumberEncoderCPR(double numberEncoderCPR) {
  double oldValue = m_numberEncoderCPR.exchange(numberEncoderCPR);
  if (oldValue != numberEncoderCPR) {
    InvokeNumberEncoderCPRCallback(MakeDouble(numberEncoderCPR));
  }
}

int32_t CanTalonData::RegisterNumberPotTurnsCallback(HAL_NotifyCallback callback, void* param, HAL_Bool initialNotify) {
  // Must return -1 on a null callback for error handling
  if (callback == nullptr) return -1;
  int32_t newUid = 0;
 {
    std::lock_guard<std::mutex> lock(m_registerMutex);
    m_numberPotTurnsCallbacks = RegisterCallback(m_numberPotTurnsCallbacks, "NumberPotTurns", callback, param, &newUid);
  }
  if (initialNotify) {
    // We know that the callback is not null because of earlier null check
    HAL_Value value = MakeDouble(GetNumberPotTurns());
    callback("NumberPotTurns", param, &value);
  }
  return newUid;
}

void CanTalonData::CancelNumberPotTurnsCallback(int32_t uid) {
  m_numberPotTurnsCallbacks = CancelCallback(m_numberPotTurnsCallbacks, uid);
}

void CanTalonData::InvokeNumberPotTurnsCallback(HAL_Value value) {
  InvokeCallback(m_numberPotTurnsCallbacks, "NumberPotTurns", &value);
}

double CanTalonData::GetNumberPotTurns() {
  return m_numberPotTurns;
}

void CanTalonData::SetNumberPotTurns(double numberPotTurns) {
  double oldValue = m_numberPotTurns.exchange(numberPotTurns);
  if (oldValue != numberPotTurns) {
    InvokeNumberPotTurnsCallback(MakeDouble(numberPotTurns));
  }
}

int32_t CanTalonData::Registerm_overrideLimitSwitchCallback(HAL_NotifyCallback callback, void* param, HAL_Bool initialNotify) {
  // Must return -1 on a null callback for error handling
  if (callback == nullptr) return -1;
  int32_t newUid = 0;
 {
    std::lock_guard<std::mutex> lock(m_registerMutex);
    m_m_overrideLimitSwitchCallbacks = RegisterCallback(m_m_overrideLimitSwitchCallbacks, "m_overrideLimitSwitch", callback, param, &newUid);
  }
  if (initialNotify) {
    // We know that the callback is not null because of earlier null check
    HAL_Value value = MakeDouble(Getm_overrideLimitSwitch());
    callback("m_overrideLimitSwitch", param, &value);
  }
  return newUid;
}

void CanTalonData::Cancelm_overrideLimitSwitchCallback(int32_t uid) {
  m_m_overrideLimitSwitchCallbacks = CancelCallback(m_m_overrideLimitSwitchCallbacks, uid);
}

void CanTalonData::Invokem_overrideLimitSwitchCallback(HAL_Value value) {
  InvokeCallback(m_m_overrideLimitSwitchCallbacks, "m_overrideLimitSwitch", &value);
}

double CanTalonData::Getm_overrideLimitSwitch() {
  return m_m_overrideLimitSwitch;
}

void CanTalonData::Setm_overrideLimitSwitch(double m_overrideLimitSwitch) {
  double oldValue = m_m_overrideLimitSwitch.exchange(m_overrideLimitSwitch);
  if (oldValue != m_overrideLimitSwitch) {
    Invokem_overrideLimitSwitchCallback(MakeDouble(m_overrideLimitSwitch));
  }
}

int32_t CanTalonData::Registerm_overrideBrakeTypeCallback(HAL_NotifyCallback callback, void* param, HAL_Bool initialNotify) {
  // Must return -1 on a null callback for error handling
  if (callback == nullptr) return -1;
  int32_t newUid = 0;
 {
    std::lock_guard<std::mutex> lock(m_registerMutex);
    m_m_overrideBrakeTypeCallbacks = RegisterCallback(m_m_overrideBrakeTypeCallbacks, "m_overrideBrakeType", callback, param, &newUid);
  }
  if (initialNotify) {
    // We know that the callback is not null because of earlier null check
    HAL_Value value = MakeDouble(Getm_overrideBrakeType());
    callback("m_overrideBrakeType", param, &value);
  }
  return newUid;
}

void CanTalonData::Cancelm_overrideBrakeTypeCallback(int32_t uid) {
  m_m_overrideBrakeTypeCallbacks = CancelCallback(m_m_overrideBrakeTypeCallbacks, uid);
}

void CanTalonData::Invokem_overrideBrakeTypeCallback(HAL_Value value) {
  InvokeCallback(m_m_overrideBrakeTypeCallbacks, "m_overrideBrakeType", &value);
}

double CanTalonData::Getm_overrideBrakeType() {
  return m_m_overrideBrakeType;
}

void CanTalonData::Setm_overrideBrakeType(double m_overrideBrakeType) {
  double oldValue = m_m_overrideBrakeType.exchange(m_overrideBrakeType);
  if (oldValue != m_overrideBrakeType) {
    Invokem_overrideBrakeTypeCallback(MakeDouble(m_overrideBrakeType));
  }
}

int32_t CanTalonData::Registerm_demandCallback(HAL_NotifyCallback callback, void* param, HAL_Bool initialNotify) {
  // Must return -1 on a null callback for error handling
  if (callback == nullptr) return -1;
  int32_t newUid = 0;
 {
    std::lock_guard<std::mutex> lock(m_registerMutex);
    m_m_demandCallbacks = RegisterCallback(m_m_demandCallbacks, "m_demand", callback, param, &newUid);
  }
  if (initialNotify) {
    // We know that the callback is not null because of earlier null check
    HAL_Value value = MakeDouble(Getm_demand());
    callback("m_demand", param, &value);
  }
  return newUid;
}

void CanTalonData::Cancelm_demandCallback(int32_t uid) {
  m_m_demandCallbacks = CancelCallback(m_m_demandCallbacks, uid);
}

void CanTalonData::Invokem_demandCallback(HAL_Value value) {
  InvokeCallback(m_m_demandCallbacks, "m_demand", &value);
}

double CanTalonData::Getm_demand() {
  return m_m_demand;
}

void CanTalonData::Setm_demand(double m_demand) {
  double oldValue = m_m_demand.exchange(m_demand);
  if (oldValue != m_demand) {
    Invokem_demandCallback(MakeDouble(m_demand));
  }
}

int32_t CanTalonData::Registerm_percentVBusValueCallback(HAL_NotifyCallback callback, void* param, HAL_Bool initialNotify) {
  // Must return -1 on a null callback for error handling
  if (callback == nullptr) return -1;
  int32_t newUid = 0;
 {
    std::lock_guard<std::mutex> lock(m_registerMutex);
    m_m_percentVBusValueCallbacks = RegisterCallback(m_m_percentVBusValueCallbacks, "m_percentVBusValue", callback, param, &newUid);
  }
  if (initialNotify) {
    // We know that the callback is not null because of earlier null check
    HAL_Value value = MakeDouble(Getm_percentVBusValue());
    callback("m_percentVBusValue", param, &value);
  }
  return newUid;
}

void CanTalonData::Cancelm_percentVBusValueCallback(int32_t uid) {
  m_m_percentVBusValueCallbacks = CancelCallback(m_m_percentVBusValueCallbacks, uid);
}

void CanTalonData::Invokem_percentVBusValueCallback(HAL_Value value) {
  InvokeCallback(m_m_percentVBusValueCallbacks, "m_percentVBusValue", &value);
}

double CanTalonData::Getm_percentVBusValue() {
  return m_m_percentVBusValue;
}

void CanTalonData::Setm_percentVBusValue(double m_percentVBusValue) {
  double oldValue = m_m_percentVBusValue.exchange(m_percentVBusValue);
  if (oldValue != m_percentVBusValue) {
    Invokem_percentVBusValueCallback(MakeDouble(m_percentVBusValue));
  }
}

int32_t CanTalonData::Registerm_voltageCompensationRateCallback(HAL_NotifyCallback callback, void* param, HAL_Bool initialNotify) {
  // Must return -1 on a null callback for error handling
  if (callback == nullptr) return -1;
  int32_t newUid = 0;
 {
    std::lock_guard<std::mutex> lock(m_registerMutex);
    m_m_voltageCompensationRateCallbacks = RegisterCallback(m_m_voltageCompensationRateCallbacks, "m_voltageCompensationRate", callback, param, &newUid);
  }
  if (initialNotify) {
    // We know that the callback is not null because of earlier null check
    HAL_Value value = MakeDouble(Getm_voltageCompensationRate());
    callback("m_voltageCompensationRate", param, &value);
  }
  return newUid;
}

void CanTalonData::Cancelm_voltageCompensationRateCallback(int32_t uid) {
  m_m_voltageCompensationRateCallbacks = CancelCallback(m_m_voltageCompensationRateCallbacks, uid);
}

void CanTalonData::Invokem_voltageCompensationRateCallback(HAL_Value value) {
  InvokeCallback(m_m_voltageCompensationRateCallbacks, "m_voltageCompensationRate", &value);
}

double CanTalonData::Getm_voltageCompensationRate() {
  return m_m_voltageCompensationRate;
}

void CanTalonData::Setm_voltageCompensationRate(double m_voltageCompensationRate) {
  double oldValue = m_m_voltageCompensationRate.exchange(m_voltageCompensationRate);
  if (oldValue != m_voltageCompensationRate) {
    Invokem_voltageCompensationRateCallback(MakeDouble(m_voltageCompensationRate));
  }
}

extern "C" {
void HALSIM_ResetCanTalonData(int32_t index) {
  SimCanTalonData[index].ResetData();
}

int32_t HALSIM_RegisterCanTalonProfileParamSlot0_PCallback(int32_t index, HAL_NotifyCallback callback, void* param, HAL_Bool initialNotify) {
  return SimCanTalonData[index].RegisterProfileParamSlot0_PCallback(callback, param, initialNotify);
}

void HALSIM_CancelCanTalonProfileParamSlot0_PCallback(int32_t index, int32_t uid) {
  SimCanTalonData[index].CancelProfileParamSlot0_PCallback(uid);
}

double HALSIM_GetCanTalonProfileParamSlot0_P(int32_t index) {
  return SimCanTalonData[index].GetProfileParamSlot0_P();
}

void HALSIM_SetCanTalonProfileParamSlot0_P(int32_t index, double profileParamSlot0_P) {
  SimCanTalonData[index].SetProfileParamSlot0_P(profileParamSlot0_P);
}

int32_t HALSIM_RegisterCanTalonProfileParamSlot0_ICallback(int32_t index, HAL_NotifyCallback callback, void* param, HAL_Bool initialNotify) {
  return SimCanTalonData[index].RegisterProfileParamSlot0_ICallback(callback, param, initialNotify);
}

void HALSIM_CancelCanTalonProfileParamSlot0_ICallback(int32_t index, int32_t uid) {
  SimCanTalonData[index].CancelProfileParamSlot0_ICallback(uid);
}

double HALSIM_GetCanTalonProfileParamSlot0_I(int32_t index) {
  return SimCanTalonData[index].GetProfileParamSlot0_I();
}

void HALSIM_SetCanTalonProfileParamSlot0_I(int32_t index, double profileParamSlot0_I) {
  SimCanTalonData[index].SetProfileParamSlot0_I(profileParamSlot0_I);
}

int32_t HALSIM_RegisterCanTalonProfileParamSlot0_DCallback(int32_t index, HAL_NotifyCallback callback, void* param, HAL_Bool initialNotify) {
  return SimCanTalonData[index].RegisterProfileParamSlot0_DCallback(callback, param, initialNotify);
}

void HALSIM_CancelCanTalonProfileParamSlot0_DCallback(int32_t index, int32_t uid) {
  SimCanTalonData[index].CancelProfileParamSlot0_DCallback(uid);
}

double HALSIM_GetCanTalonProfileParamSlot0_D(int32_t index) {
  return SimCanTalonData[index].GetProfileParamSlot0_D();
}

void HALSIM_SetCanTalonProfileParamSlot0_D(int32_t index, double profileParamSlot0_D) {
  SimCanTalonData[index].SetProfileParamSlot0_D(profileParamSlot0_D);
}

int32_t HALSIM_RegisterCanTalonProfileParamSlot0_FCallback(int32_t index, HAL_NotifyCallback callback, void* param, HAL_Bool initialNotify) {
  return SimCanTalonData[index].RegisterProfileParamSlot0_FCallback(callback, param, initialNotify);
}

void HALSIM_CancelCanTalonProfileParamSlot0_FCallback(int32_t index, int32_t uid) {
  SimCanTalonData[index].CancelProfileParamSlot0_FCallback(uid);
}

double HALSIM_GetCanTalonProfileParamSlot0_F(int32_t index) {
  return SimCanTalonData[index].GetProfileParamSlot0_F();
}

void HALSIM_SetCanTalonProfileParamSlot0_F(int32_t index, double profileParamSlot0_F) {
  SimCanTalonData[index].SetProfileParamSlot0_F(profileParamSlot0_F);
}

int32_t HALSIM_RegisterCanTalonProfileParamSlot0_IZoneCallback(int32_t index, HAL_NotifyCallback callback, void* param, HAL_Bool initialNotify) {
  return SimCanTalonData[index].RegisterProfileParamSlot0_IZoneCallback(callback, param, initialNotify);
}

void HALSIM_CancelCanTalonProfileParamSlot0_IZoneCallback(int32_t index, int32_t uid) {
  SimCanTalonData[index].CancelProfileParamSlot0_IZoneCallback(uid);
}

int32_t HALSIM_GetCanTalonProfileParamSlot0_IZone(int32_t index) {
  return SimCanTalonData[index].GetProfileParamSlot0_IZone();
}

void HALSIM_SetCanTalonProfileParamSlot0_IZone(int32_t index, int32_t profileParamSlot0_IZone) {
  SimCanTalonData[index].SetProfileParamSlot0_IZone(profileParamSlot0_IZone);
}

int32_t HALSIM_RegisterCanTalonProfileParamSlot0_CloseLoopRampRateCallback(int32_t index, HAL_NotifyCallback callback, void* param, HAL_Bool initialNotify) {
  return SimCanTalonData[index].RegisterProfileParamSlot0_CloseLoopRampRateCallback(callback, param, initialNotify);
}

void HALSIM_CancelCanTalonProfileParamSlot0_CloseLoopRampRateCallback(int32_t index, int32_t uid) {
  SimCanTalonData[index].CancelProfileParamSlot0_CloseLoopRampRateCallback(uid);
}

int32_t HALSIM_GetCanTalonProfileParamSlot0_CloseLoopRampRate(int32_t index) {
  return SimCanTalonData[index].GetProfileParamSlot0_CloseLoopRampRate();
}

void HALSIM_SetCanTalonProfileParamSlot0_CloseLoopRampRate(int32_t index, int32_t profileParamSlot0_CloseLoopRampRate) {
  SimCanTalonData[index].SetProfileParamSlot0_CloseLoopRampRate(profileParamSlot0_CloseLoopRampRate);
}

int32_t HALSIM_RegisterCanTalonProfileParamSlot1_PCallback(int32_t index, HAL_NotifyCallback callback, void* param, HAL_Bool initialNotify) {
  return SimCanTalonData[index].RegisterProfileParamSlot1_PCallback(callback, param, initialNotify);
}

void HALSIM_CancelCanTalonProfileParamSlot1_PCallback(int32_t index, int32_t uid) {
  SimCanTalonData[index].CancelProfileParamSlot1_PCallback(uid);
}

double HALSIM_GetCanTalonProfileParamSlot1_P(int32_t index) {
  return SimCanTalonData[index].GetProfileParamSlot1_P();
}

void HALSIM_SetCanTalonProfileParamSlot1_P(int32_t index, double profileParamSlot1_P) {
  SimCanTalonData[index].SetProfileParamSlot1_P(profileParamSlot1_P);
}

int32_t HALSIM_RegisterCanTalonProfileParamSlot1_ICallback(int32_t index, HAL_NotifyCallback callback, void* param, HAL_Bool initialNotify) {
  return SimCanTalonData[index].RegisterProfileParamSlot1_ICallback(callback, param, initialNotify);
}

void HALSIM_CancelCanTalonProfileParamSlot1_ICallback(int32_t index, int32_t uid) {
  SimCanTalonData[index].CancelProfileParamSlot1_ICallback(uid);
}

double HALSIM_GetCanTalonProfileParamSlot1_I(int32_t index) {
  return SimCanTalonData[index].GetProfileParamSlot1_I();
}

void HALSIM_SetCanTalonProfileParamSlot1_I(int32_t index, double profileParamSlot1_I) {
  SimCanTalonData[index].SetProfileParamSlot1_I(profileParamSlot1_I);
}

int32_t HALSIM_RegisterCanTalonProfileParamSlot1_DCallback(int32_t index, HAL_NotifyCallback callback, void* param, HAL_Bool initialNotify) {
  return SimCanTalonData[index].RegisterProfileParamSlot1_DCallback(callback, param, initialNotify);
}

void HALSIM_CancelCanTalonProfileParamSlot1_DCallback(int32_t index, int32_t uid) {
  SimCanTalonData[index].CancelProfileParamSlot1_DCallback(uid);
}

double HALSIM_GetCanTalonProfileParamSlot1_D(int32_t index) {
  return SimCanTalonData[index].GetProfileParamSlot1_D();
}

void HALSIM_SetCanTalonProfileParamSlot1_D(int32_t index, double profileParamSlot1_D) {
  SimCanTalonData[index].SetProfileParamSlot1_D(profileParamSlot1_D);
}

int32_t HALSIM_RegisterCanTalonProfileParamSlot1_FCallback(int32_t index, HAL_NotifyCallback callback, void* param, HAL_Bool initialNotify) {
  return SimCanTalonData[index].RegisterProfileParamSlot1_FCallback(callback, param, initialNotify);
}

void HALSIM_CancelCanTalonProfileParamSlot1_FCallback(int32_t index, int32_t uid) {
  SimCanTalonData[index].CancelProfileParamSlot1_FCallback(uid);
}

double HALSIM_GetCanTalonProfileParamSlot1_F(int32_t index) {
  return SimCanTalonData[index].GetProfileParamSlot1_F();
}

void HALSIM_SetCanTalonProfileParamSlot1_F(int32_t index, double profileParamSlot1_F) {
  SimCanTalonData[index].SetProfileParamSlot1_F(profileParamSlot1_F);
}

int32_t HALSIM_RegisterCanTalonProfileParamSlot1_IZoneCallback(int32_t index, HAL_NotifyCallback callback, void* param, HAL_Bool initialNotify) {
  return SimCanTalonData[index].RegisterProfileParamSlot1_IZoneCallback(callback, param, initialNotify);
}

void HALSIM_CancelCanTalonProfileParamSlot1_IZoneCallback(int32_t index, int32_t uid) {
  SimCanTalonData[index].CancelProfileParamSlot1_IZoneCallback(uid);
}

int32_t HALSIM_GetCanTalonProfileParamSlot1_IZone(int32_t index) {
  return SimCanTalonData[index].GetProfileParamSlot1_IZone();
}

void HALSIM_SetCanTalonProfileParamSlot1_IZone(int32_t index, int32_t profileParamSlot1_IZone) {
  SimCanTalonData[index].SetProfileParamSlot1_IZone(profileParamSlot1_IZone);
}

int32_t HALSIM_RegisterCanTalonProfileParamSlot1_CloseLoopRampRateCallback(int32_t index, HAL_NotifyCallback callback, void* param, HAL_Bool initialNotify) {
  return SimCanTalonData[index].RegisterProfileParamSlot1_CloseLoopRampRateCallback(callback, param, initialNotify);
}

void HALSIM_CancelCanTalonProfileParamSlot1_CloseLoopRampRateCallback(int32_t index, int32_t uid) {
  SimCanTalonData[index].CancelProfileParamSlot1_CloseLoopRampRateCallback(uid);
}

int32_t HALSIM_GetCanTalonProfileParamSlot1_CloseLoopRampRate(int32_t index) {
  return SimCanTalonData[index].GetProfileParamSlot1_CloseLoopRampRate();
}

void HALSIM_SetCanTalonProfileParamSlot1_CloseLoopRampRate(int32_t index, int32_t profileParamSlot1_CloseLoopRampRate) {
  SimCanTalonData[index].SetProfileParamSlot1_CloseLoopRampRate(profileParamSlot1_CloseLoopRampRate);
}

int32_t HALSIM_RegisterCanTalonProfileParamSoftLimitForThresholdCallback(int32_t index, HAL_NotifyCallback callback, void* param, HAL_Bool initialNotify) {
  return SimCanTalonData[index].RegisterProfileParamSoftLimitForThresholdCallback(callback, param, initialNotify);
}

void HALSIM_CancelCanTalonProfileParamSoftLimitForThresholdCallback(int32_t index, int32_t uid) {
  SimCanTalonData[index].CancelProfileParamSoftLimitForThresholdCallback(uid);
}

double HALSIM_GetCanTalonProfileParamSoftLimitForThreshold(int32_t index) {
  return SimCanTalonData[index].GetProfileParamSoftLimitForThreshold();
}

void HALSIM_SetCanTalonProfileParamSoftLimitForThreshold(int32_t index, double profileParamSoftLimitForThreshold) {
  SimCanTalonData[index].SetProfileParamSoftLimitForThreshold(profileParamSoftLimitForThreshold);
}

int32_t HALSIM_RegisterCanTalonProfileParamSoftLimitRevThresholdCallback(int32_t index, HAL_NotifyCallback callback, void* param, HAL_Bool initialNotify) {
  return SimCanTalonData[index].RegisterProfileParamSoftLimitRevThresholdCallback(callback, param, initialNotify);
}

void HALSIM_CancelCanTalonProfileParamSoftLimitRevThresholdCallback(int32_t index, int32_t uid) {
  SimCanTalonData[index].CancelProfileParamSoftLimitRevThresholdCallback(uid);
}

double HALSIM_GetCanTalonProfileParamSoftLimitRevThreshold(int32_t index) {
  return SimCanTalonData[index].GetProfileParamSoftLimitRevThreshold();
}

void HALSIM_SetCanTalonProfileParamSoftLimitRevThreshold(int32_t index, double profileParamSoftLimitRevThreshold) {
  SimCanTalonData[index].SetProfileParamSoftLimitRevThreshold(profileParamSoftLimitRevThreshold);
}

int32_t HALSIM_RegisterCanTalonProfileParamSoftLimitForEnableCallback(int32_t index, HAL_NotifyCallback callback, void* param, HAL_Bool initialNotify) {
  return SimCanTalonData[index].RegisterProfileParamSoftLimitForEnableCallback(callback, param, initialNotify);
}

void HALSIM_CancelCanTalonProfileParamSoftLimitForEnableCallback(int32_t index, int32_t uid) {
  SimCanTalonData[index].CancelProfileParamSoftLimitForEnableCallback(uid);
}

double HALSIM_GetCanTalonProfileParamSoftLimitForEnable(int32_t index) {
  return SimCanTalonData[index].GetProfileParamSoftLimitForEnable();
}

void HALSIM_SetCanTalonProfileParamSoftLimitForEnable(int32_t index, double profileParamSoftLimitForEnable) {
  SimCanTalonData[index].SetProfileParamSoftLimitForEnable(profileParamSoftLimitForEnable);
}

int32_t HALSIM_RegisterCanTalonProfileParamSoftLimitRevEnableCallback(int32_t index, HAL_NotifyCallback callback, void* param, HAL_Bool initialNotify) {
  return SimCanTalonData[index].RegisterProfileParamSoftLimitRevEnableCallback(callback, param, initialNotify);
}

void HALSIM_CancelCanTalonProfileParamSoftLimitRevEnableCallback(int32_t index, int32_t uid) {
  SimCanTalonData[index].CancelProfileParamSoftLimitRevEnableCallback(uid);
}

double HALSIM_GetCanTalonProfileParamSoftLimitRevEnable(int32_t index) {
  return SimCanTalonData[index].GetProfileParamSoftLimitRevEnable();
}

void HALSIM_SetCanTalonProfileParamSoftLimitRevEnable(int32_t index, double profileParamSoftLimitRevEnable) {
  SimCanTalonData[index].SetProfileParamSoftLimitRevEnable(profileParamSoftLimitRevEnable);
}

int32_t HALSIM_RegisterCanTalonOnBoot_BrakeModeCallback(int32_t index, HAL_NotifyCallback callback, void* param, HAL_Bool initialNotify) {
  return SimCanTalonData[index].RegisterOnBoot_BrakeModeCallback(callback, param, initialNotify);
}

void HALSIM_CancelCanTalonOnBoot_BrakeModeCallback(int32_t index, int32_t uid) {
  SimCanTalonData[index].CancelOnBoot_BrakeModeCallback(uid);
}

double HALSIM_GetCanTalonOnBoot_BrakeMode(int32_t index) {
  return SimCanTalonData[index].GetOnBoot_BrakeMode();
}

void HALSIM_SetCanTalonOnBoot_BrakeMode(int32_t index, double onBoot_BrakeMode) {
  SimCanTalonData[index].SetOnBoot_BrakeMode(onBoot_BrakeMode);
}

int32_t HALSIM_RegisterCanTalonOnBoot_LimitSwitch_Forward_NormallyClosedCallback(int32_t index, HAL_NotifyCallback callback, void* param, HAL_Bool initialNotify) {
  return SimCanTalonData[index].RegisterOnBoot_LimitSwitch_Forward_NormallyClosedCallback(callback, param, initialNotify);
}

void HALSIM_CancelCanTalonOnBoot_LimitSwitch_Forward_NormallyClosedCallback(int32_t index, int32_t uid) {
  SimCanTalonData[index].CancelOnBoot_LimitSwitch_Forward_NormallyClosedCallback(uid);
}

double HALSIM_GetCanTalonOnBoot_LimitSwitch_Forward_NormallyClosed(int32_t index) {
  return SimCanTalonData[index].GetOnBoot_LimitSwitch_Forward_NormallyClosed();
}

void HALSIM_SetCanTalonOnBoot_LimitSwitch_Forward_NormallyClosed(int32_t index, double onBoot_LimitSwitch_Forward_NormallyClosed) {
  SimCanTalonData[index].SetOnBoot_LimitSwitch_Forward_NormallyClosed(onBoot_LimitSwitch_Forward_NormallyClosed);
}

int32_t HALSIM_RegisterCanTalonOnBoot_LimitSwitch_Reverse_NormallyClosedCallback(int32_t index, HAL_NotifyCallback callback, void* param, HAL_Bool initialNotify) {
  return SimCanTalonData[index].RegisterOnBoot_LimitSwitch_Reverse_NormallyClosedCallback(callback, param, initialNotify);
}

void HALSIM_CancelCanTalonOnBoot_LimitSwitch_Reverse_NormallyClosedCallback(int32_t index, int32_t uid) {
  SimCanTalonData[index].CancelOnBoot_LimitSwitch_Reverse_NormallyClosedCallback(uid);
}

double HALSIM_GetCanTalonOnBoot_LimitSwitch_Reverse_NormallyClosed(int32_t index) {
  return SimCanTalonData[index].GetOnBoot_LimitSwitch_Reverse_NormallyClosed();
}

void HALSIM_SetCanTalonOnBoot_LimitSwitch_Reverse_NormallyClosed(int32_t index, double onBoot_LimitSwitch_Reverse_NormallyClosed) {
  SimCanTalonData[index].SetOnBoot_LimitSwitch_Reverse_NormallyClosed(onBoot_LimitSwitch_Reverse_NormallyClosed);
}

int32_t HALSIM_RegisterCanTalonOnBoot_LimitSwitch_Forward_DisableCallback(int32_t index, HAL_NotifyCallback callback, void* param, HAL_Bool initialNotify) {
  return SimCanTalonData[index].RegisterOnBoot_LimitSwitch_Forward_DisableCallback(callback, param, initialNotify);
}

void HALSIM_CancelCanTalonOnBoot_LimitSwitch_Forward_DisableCallback(int32_t index, int32_t uid) {
  SimCanTalonData[index].CancelOnBoot_LimitSwitch_Forward_DisableCallback(uid);
}

double HALSIM_GetCanTalonOnBoot_LimitSwitch_Forward_Disable(int32_t index) {
  return SimCanTalonData[index].GetOnBoot_LimitSwitch_Forward_Disable();
}

void HALSIM_SetCanTalonOnBoot_LimitSwitch_Forward_Disable(int32_t index, double onBoot_LimitSwitch_Forward_Disable) {
  SimCanTalonData[index].SetOnBoot_LimitSwitch_Forward_Disable(onBoot_LimitSwitch_Forward_Disable);
}

int32_t HALSIM_RegisterCanTalonOnBoot_LimitSwitch_Reverse_DisableCallback(int32_t index, HAL_NotifyCallback callback, void* param, HAL_Bool initialNotify) {
  return SimCanTalonData[index].RegisterOnBoot_LimitSwitch_Reverse_DisableCallback(callback, param, initialNotify);
}

void HALSIM_CancelCanTalonOnBoot_LimitSwitch_Reverse_DisableCallback(int32_t index, int32_t uid) {
  SimCanTalonData[index].CancelOnBoot_LimitSwitch_Reverse_DisableCallback(uid);
}

double HALSIM_GetCanTalonOnBoot_LimitSwitch_Reverse_Disable(int32_t index) {
  return SimCanTalonData[index].GetOnBoot_LimitSwitch_Reverse_Disable();
}

void HALSIM_SetCanTalonOnBoot_LimitSwitch_Reverse_Disable(int32_t index, double onBoot_LimitSwitch_Reverse_Disable) {
  SimCanTalonData[index].SetOnBoot_LimitSwitch_Reverse_Disable(onBoot_LimitSwitch_Reverse_Disable);
}

int32_t HALSIM_RegisterCanTalonFault_OverTempCallback(int32_t index, HAL_NotifyCallback callback, void* param, HAL_Bool initialNotify) {
  return SimCanTalonData[index].RegisterFault_OverTempCallback(callback, param, initialNotify);
}

void HALSIM_CancelCanTalonFault_OverTempCallback(int32_t index, int32_t uid) {
  SimCanTalonData[index].CancelFault_OverTempCallback(uid);
}

double HALSIM_GetCanTalonFault_OverTemp(int32_t index) {
  return SimCanTalonData[index].GetFault_OverTemp();
}

void HALSIM_SetCanTalonFault_OverTemp(int32_t index, double fault_OverTemp) {
  SimCanTalonData[index].SetFault_OverTemp(fault_OverTemp);
}

int32_t HALSIM_RegisterCanTalonFault_UnderVoltageCallback(int32_t index, HAL_NotifyCallback callback, void* param, HAL_Bool initialNotify) {
  return SimCanTalonData[index].RegisterFault_UnderVoltageCallback(callback, param, initialNotify);
}

void HALSIM_CancelCanTalonFault_UnderVoltageCallback(int32_t index, int32_t uid) {
  SimCanTalonData[index].CancelFault_UnderVoltageCallback(uid);
}

double HALSIM_GetCanTalonFault_UnderVoltage(int32_t index) {
  return SimCanTalonData[index].GetFault_UnderVoltage();
}

void HALSIM_SetCanTalonFault_UnderVoltage(int32_t index, double fault_UnderVoltage) {
  SimCanTalonData[index].SetFault_UnderVoltage(fault_UnderVoltage);
}

int32_t HALSIM_RegisterCanTalonFault_ForLimCallback(int32_t index, HAL_NotifyCallback callback, void* param, HAL_Bool initialNotify) {
  return SimCanTalonData[index].RegisterFault_ForLimCallback(callback, param, initialNotify);
}

void HALSIM_CancelCanTalonFault_ForLimCallback(int32_t index, int32_t uid) {
  SimCanTalonData[index].CancelFault_ForLimCallback(uid);
}

double HALSIM_GetCanTalonFault_ForLim(int32_t index) {
  return SimCanTalonData[index].GetFault_ForLim();
}

void HALSIM_SetCanTalonFault_ForLim(int32_t index, double fault_ForLim) {
  SimCanTalonData[index].SetFault_ForLim(fault_ForLim);
}

int32_t HALSIM_RegisterCanTalonFault_RevLimCallback(int32_t index, HAL_NotifyCallback callback, void* param, HAL_Bool initialNotify) {
  return SimCanTalonData[index].RegisterFault_RevLimCallback(callback, param, initialNotify);
}

void HALSIM_CancelCanTalonFault_RevLimCallback(int32_t index, int32_t uid) {
  SimCanTalonData[index].CancelFault_RevLimCallback(uid);
}

double HALSIM_GetCanTalonFault_RevLim(int32_t index) {
  return SimCanTalonData[index].GetFault_RevLim();
}

void HALSIM_SetCanTalonFault_RevLim(int32_t index, double fault_RevLim) {
  SimCanTalonData[index].SetFault_RevLim(fault_RevLim);
}

int32_t HALSIM_RegisterCanTalonFault_HardwareFailureCallback(int32_t index, HAL_NotifyCallback callback, void* param, HAL_Bool initialNotify) {
  return SimCanTalonData[index].RegisterFault_HardwareFailureCallback(callback, param, initialNotify);
}

void HALSIM_CancelCanTalonFault_HardwareFailureCallback(int32_t index, int32_t uid) {
  SimCanTalonData[index].CancelFault_HardwareFailureCallback(uid);
}

double HALSIM_GetCanTalonFault_HardwareFailure(int32_t index) {
  return SimCanTalonData[index].GetFault_HardwareFailure();
}

void HALSIM_SetCanTalonFault_HardwareFailure(int32_t index, double fault_HardwareFailure) {
  SimCanTalonData[index].SetFault_HardwareFailure(fault_HardwareFailure);
}

int32_t HALSIM_RegisterCanTalonFault_ForSoftLimCallback(int32_t index, HAL_NotifyCallback callback, void* param, HAL_Bool initialNotify) {
  return SimCanTalonData[index].RegisterFault_ForSoftLimCallback(callback, param, initialNotify);
}

void HALSIM_CancelCanTalonFault_ForSoftLimCallback(int32_t index, int32_t uid) {
  SimCanTalonData[index].CancelFault_ForSoftLimCallback(uid);
}

double HALSIM_GetCanTalonFault_ForSoftLim(int32_t index) {
  return SimCanTalonData[index].GetFault_ForSoftLim();
}

void HALSIM_SetCanTalonFault_ForSoftLim(int32_t index, double fault_ForSoftLim) {
  SimCanTalonData[index].SetFault_ForSoftLim(fault_ForSoftLim);
}

int32_t HALSIM_RegisterCanTalonFault_RevSoftLimCallback(int32_t index, HAL_NotifyCallback callback, void* param, HAL_Bool initialNotify) {
  return SimCanTalonData[index].RegisterFault_RevSoftLimCallback(callback, param, initialNotify);
}

void HALSIM_CancelCanTalonFault_RevSoftLimCallback(int32_t index, int32_t uid) {
  SimCanTalonData[index].CancelFault_RevSoftLimCallback(uid);
}

double HALSIM_GetCanTalonFault_RevSoftLim(int32_t index) {
  return SimCanTalonData[index].GetFault_RevSoftLim();
}

void HALSIM_SetCanTalonFault_RevSoftLim(int32_t index, double fault_RevSoftLim) {
  SimCanTalonData[index].SetFault_RevSoftLim(fault_RevSoftLim);
}

int32_t HALSIM_RegisterCanTalonStckyFault_OverTempCallback(int32_t index, HAL_NotifyCallback callback, void* param, HAL_Bool initialNotify) {
  return SimCanTalonData[index].RegisterStckyFault_OverTempCallback(callback, param, initialNotify);
}

void HALSIM_CancelCanTalonStckyFault_OverTempCallback(int32_t index, int32_t uid) {
  SimCanTalonData[index].CancelStckyFault_OverTempCallback(uid);
}

double HALSIM_GetCanTalonStckyFault_OverTemp(int32_t index) {
  return SimCanTalonData[index].GetStckyFault_OverTemp();
}

void HALSIM_SetCanTalonStckyFault_OverTemp(int32_t index, double stckyFault_OverTemp) {
  SimCanTalonData[index].SetStckyFault_OverTemp(stckyFault_OverTemp);
}

int32_t HALSIM_RegisterCanTalonStckyFault_UnderVoltageCallback(int32_t index, HAL_NotifyCallback callback, void* param, HAL_Bool initialNotify) {
  return SimCanTalonData[index].RegisterStckyFault_UnderVoltageCallback(callback, param, initialNotify);
}

void HALSIM_CancelCanTalonStckyFault_UnderVoltageCallback(int32_t index, int32_t uid) {
  SimCanTalonData[index].CancelStckyFault_UnderVoltageCallback(uid);
}

double HALSIM_GetCanTalonStckyFault_UnderVoltage(int32_t index) {
  return SimCanTalonData[index].GetStckyFault_UnderVoltage();
}

void HALSIM_SetCanTalonStckyFault_UnderVoltage(int32_t index, double stckyFault_UnderVoltage) {
  SimCanTalonData[index].SetStckyFault_UnderVoltage(stckyFault_UnderVoltage);
}

int32_t HALSIM_RegisterCanTalonStckyFault_ForLimCallback(int32_t index, HAL_NotifyCallback callback, void* param, HAL_Bool initialNotify) {
  return SimCanTalonData[index].RegisterStckyFault_ForLimCallback(callback, param, initialNotify);
}

void HALSIM_CancelCanTalonStckyFault_ForLimCallback(int32_t index, int32_t uid) {
  SimCanTalonData[index].CancelStckyFault_ForLimCallback(uid);
}

double HALSIM_GetCanTalonStckyFault_ForLim(int32_t index) {
  return SimCanTalonData[index].GetStckyFault_ForLim();
}

void HALSIM_SetCanTalonStckyFault_ForLim(int32_t index, double stckyFault_ForLim) {
  SimCanTalonData[index].SetStckyFault_ForLim(stckyFault_ForLim);
}

int32_t HALSIM_RegisterCanTalonStckyFault_RevLimCallback(int32_t index, HAL_NotifyCallback callback, void* param, HAL_Bool initialNotify) {
  return SimCanTalonData[index].RegisterStckyFault_RevLimCallback(callback, param, initialNotify);
}

void HALSIM_CancelCanTalonStckyFault_RevLimCallback(int32_t index, int32_t uid) {
  SimCanTalonData[index].CancelStckyFault_RevLimCallback(uid);
}

double HALSIM_GetCanTalonStckyFault_RevLim(int32_t index) {
  return SimCanTalonData[index].GetStckyFault_RevLim();
}

void HALSIM_SetCanTalonStckyFault_RevLim(int32_t index, double stckyFault_RevLim) {
  SimCanTalonData[index].SetStckyFault_RevLim(stckyFault_RevLim);
}

int32_t HALSIM_RegisterCanTalonStckyFault_ForSoftLimCallback(int32_t index, HAL_NotifyCallback callback, void* param, HAL_Bool initialNotify) {
  return SimCanTalonData[index].RegisterStckyFault_ForSoftLimCallback(callback, param, initialNotify);
}

void HALSIM_CancelCanTalonStckyFault_ForSoftLimCallback(int32_t index, int32_t uid) {
  SimCanTalonData[index].CancelStckyFault_ForSoftLimCallback(uid);
}

double HALSIM_GetCanTalonStckyFault_ForSoftLim(int32_t index) {
  return SimCanTalonData[index].GetStckyFault_ForSoftLim();
}

void HALSIM_SetCanTalonStckyFault_ForSoftLim(int32_t index, double stckyFault_ForSoftLim) {
  SimCanTalonData[index].SetStckyFault_ForSoftLim(stckyFault_ForSoftLim);
}

int32_t HALSIM_RegisterCanTalonStckyFault_RevSoftLimCallback(int32_t index, HAL_NotifyCallback callback, void* param, HAL_Bool initialNotify) {
  return SimCanTalonData[index].RegisterStckyFault_RevSoftLimCallback(callback, param, initialNotify);
}

void HALSIM_CancelCanTalonStckyFault_RevSoftLimCallback(int32_t index, int32_t uid) {
  SimCanTalonData[index].CancelStckyFault_RevSoftLimCallback(uid);
}

double HALSIM_GetCanTalonStckyFault_RevSoftLim(int32_t index) {
  return SimCanTalonData[index].GetStckyFault_RevSoftLim();
}

void HALSIM_SetCanTalonStckyFault_RevSoftLim(int32_t index, double stckyFault_RevSoftLim) {
  SimCanTalonData[index].SetStckyFault_RevSoftLim(stckyFault_RevSoftLim);
}

int32_t HALSIM_RegisterCanTalonAppliedThrottleCallback(int32_t index, HAL_NotifyCallback callback, void* param, HAL_Bool initialNotify) {
  return SimCanTalonData[index].RegisterAppliedThrottleCallback(callback, param, initialNotify);
}

void HALSIM_CancelCanTalonAppliedThrottleCallback(int32_t index, int32_t uid) {
  SimCanTalonData[index].CancelAppliedThrottleCallback(uid);
}

double HALSIM_GetCanTalonAppliedThrottle(int32_t index) {
  return SimCanTalonData[index].GetAppliedThrottle();
}

void HALSIM_SetCanTalonAppliedThrottle(int32_t index, double appliedThrottle) {
  SimCanTalonData[index].SetAppliedThrottle(appliedThrottle);
}

int32_t HALSIM_RegisterCanTalonCloseLoopErrCallback(int32_t index, HAL_NotifyCallback callback, void* param, HAL_Bool initialNotify) {
  return SimCanTalonData[index].RegisterCloseLoopErrCallback(callback, param, initialNotify);
}

void HALSIM_CancelCanTalonCloseLoopErrCallback(int32_t index, int32_t uid) {
  SimCanTalonData[index].CancelCloseLoopErrCallback(uid);
}

double HALSIM_GetCanTalonCloseLoopErr(int32_t index) {
  return SimCanTalonData[index].GetCloseLoopErr();
}

void HALSIM_SetCanTalonCloseLoopErr(int32_t index, double closeLoopErr) {
  SimCanTalonData[index].SetCloseLoopErr(closeLoopErr);
}

int32_t HALSIM_RegisterCanTalonFeedbackDeviceSelectCallback(int32_t index, HAL_NotifyCallback callback, void* param, HAL_Bool initialNotify) {
  return SimCanTalonData[index].RegisterFeedbackDeviceSelectCallback(callback, param, initialNotify);
}

void HALSIM_CancelCanTalonFeedbackDeviceSelectCallback(int32_t index, int32_t uid) {
  SimCanTalonData[index].CancelFeedbackDeviceSelectCallback(uid);
}

double HALSIM_GetCanTalonFeedbackDeviceSelect(int32_t index) {
  return SimCanTalonData[index].GetFeedbackDeviceSelect();
}

void HALSIM_SetCanTalonFeedbackDeviceSelect(int32_t index, double feedbackDeviceSelect) {
  SimCanTalonData[index].SetFeedbackDeviceSelect(feedbackDeviceSelect);
}

int32_t HALSIM_RegisterCanTalonRevMotDuringCloseLoopEnCallback(int32_t index, HAL_NotifyCallback callback, void* param, HAL_Bool initialNotify) {
  return SimCanTalonData[index].RegisterRevMotDuringCloseLoopEnCallback(callback, param, initialNotify);
}

void HALSIM_CancelCanTalonRevMotDuringCloseLoopEnCallback(int32_t index, int32_t uid) {
  SimCanTalonData[index].CancelRevMotDuringCloseLoopEnCallback(uid);
}

HAL_Bool HALSIM_GetCanTalonRevMotDuringCloseLoopEn(int32_t index) {
  return SimCanTalonData[index].GetRevMotDuringCloseLoopEn();
}

void HALSIM_SetCanTalonRevMotDuringCloseLoopEn(int32_t index, HAL_Bool revMotDuringCloseLoopEn) {
  SimCanTalonData[index].SetRevMotDuringCloseLoopEn(revMotDuringCloseLoopEn);
}

int32_t HALSIM_RegisterCanTalonModeSelectCallback(int32_t index, HAL_NotifyCallback callback, void* param, HAL_Bool initialNotify) {
  return SimCanTalonData[index].RegisterModeSelectCallback(callback, param, initialNotify);
}

void HALSIM_CancelCanTalonModeSelectCallback(int32_t index, int32_t uid) {
  SimCanTalonData[index].CancelModeSelectCallback(uid);
}

double HALSIM_GetCanTalonModeSelect(int32_t index) {
  return SimCanTalonData[index].GetModeSelect();
}

void HALSIM_SetCanTalonModeSelect(int32_t index, double modeSelect) {
  SimCanTalonData[index].SetModeSelect(modeSelect);
}

int32_t HALSIM_RegisterCanTalonProfileSlotSelectCallback(int32_t index, HAL_NotifyCallback callback, void* param, HAL_Bool initialNotify) {
  return SimCanTalonData[index].RegisterProfileSlotSelectCallback(callback, param, initialNotify);
}

void HALSIM_CancelCanTalonProfileSlotSelectCallback(int32_t index, int32_t uid) {
  SimCanTalonData[index].CancelProfileSlotSelectCallback(uid);
}

double HALSIM_GetCanTalonProfileSlotSelect(int32_t index) {
  return SimCanTalonData[index].GetProfileSlotSelect();
}

void HALSIM_SetCanTalonProfileSlotSelect(int32_t index, double profileSlotSelect) {
  SimCanTalonData[index].SetProfileSlotSelect(profileSlotSelect);
}

int32_t HALSIM_RegisterCanTalonRampThrottleCallback(int32_t index, HAL_NotifyCallback callback, void* param, HAL_Bool initialNotify) {
  return SimCanTalonData[index].RegisterRampThrottleCallback(callback, param, initialNotify);
}

void HALSIM_CancelCanTalonRampThrottleCallback(int32_t index, int32_t uid) {
  SimCanTalonData[index].CancelRampThrottleCallback(uid);
}

double HALSIM_GetCanTalonRampThrottle(int32_t index) {
  return SimCanTalonData[index].GetRampThrottle();
}

void HALSIM_SetCanTalonRampThrottle(int32_t index, double rampThrottle) {
  SimCanTalonData[index].SetRampThrottle(rampThrottle);
}

int32_t HALSIM_RegisterCanTalonRevFeedbackSensorCallback(int32_t index, HAL_NotifyCallback callback, void* param, HAL_Bool initialNotify) {
  return SimCanTalonData[index].RegisterRevFeedbackSensorCallback(callback, param, initialNotify);
}

void HALSIM_CancelCanTalonRevFeedbackSensorCallback(int32_t index, int32_t uid) {
  SimCanTalonData[index].CancelRevFeedbackSensorCallback(uid);
}

HAL_Bool HALSIM_GetCanTalonRevFeedbackSensor(int32_t index) {
  return SimCanTalonData[index].GetRevFeedbackSensor();
}

void HALSIM_SetCanTalonRevFeedbackSensor(int32_t index, HAL_Bool revFeedbackSensor) {
  SimCanTalonData[index].SetRevFeedbackSensor(revFeedbackSensor);
}

int32_t HALSIM_RegisterCanTalonLimitSwitchEnCallback(int32_t index, HAL_NotifyCallback callback, void* param, HAL_Bool initialNotify) {
  return SimCanTalonData[index].RegisterLimitSwitchEnCallback(callback, param, initialNotify);
}

void HALSIM_CancelCanTalonLimitSwitchEnCallback(int32_t index, int32_t uid) {
  SimCanTalonData[index].CancelLimitSwitchEnCallback(uid);
}

double HALSIM_GetCanTalonLimitSwitchEn(int32_t index) {
  return SimCanTalonData[index].GetLimitSwitchEn();
}

void HALSIM_SetCanTalonLimitSwitchEn(int32_t index, double limitSwitchEn) {
  SimCanTalonData[index].SetLimitSwitchEn(limitSwitchEn);
}

int32_t HALSIM_RegisterCanTalonLimitSwitchClosedForCallback(int32_t index, HAL_NotifyCallback callback, void* param, HAL_Bool initialNotify) {
  return SimCanTalonData[index].RegisterLimitSwitchClosedForCallback(callback, param, initialNotify);
}

void HALSIM_CancelCanTalonLimitSwitchClosedForCallback(int32_t index, int32_t uid) {
  SimCanTalonData[index].CancelLimitSwitchClosedForCallback(uid);
}

HAL_Bool HALSIM_GetCanTalonLimitSwitchClosedFor(int32_t index) {
  return SimCanTalonData[index].GetLimitSwitchClosedFor();
}

void HALSIM_SetCanTalonLimitSwitchClosedFor(int32_t index, HAL_Bool limitSwitchClosedFor) {
  SimCanTalonData[index].SetLimitSwitchClosedFor(limitSwitchClosedFor);
}

int32_t HALSIM_RegisterCanTalonLimitSwitchClosedRevCallback(int32_t index, HAL_NotifyCallback callback, void* param, HAL_Bool initialNotify) {
  return SimCanTalonData[index].RegisterLimitSwitchClosedRevCallback(callback, param, initialNotify);
}

void HALSIM_CancelCanTalonLimitSwitchClosedRevCallback(int32_t index, int32_t uid) {
  SimCanTalonData[index].CancelLimitSwitchClosedRevCallback(uid);
}

HAL_Bool HALSIM_GetCanTalonLimitSwitchClosedRev(int32_t index) {
  return SimCanTalonData[index].GetLimitSwitchClosedRev();
}

void HALSIM_SetCanTalonLimitSwitchClosedRev(int32_t index, HAL_Bool limitSwitchClosedRev) {
  SimCanTalonData[index].SetLimitSwitchClosedRev(limitSwitchClosedRev);
}

int32_t HALSIM_RegisterCanTalonSensorPositionCallback(int32_t index, HAL_NotifyCallback callback, void* param, HAL_Bool initialNotify) {
  return SimCanTalonData[index].RegisterSensorPositionCallback(callback, param, initialNotify);
}

void HALSIM_CancelCanTalonSensorPositionCallback(int32_t index, int32_t uid) {
  SimCanTalonData[index].CancelSensorPositionCallback(uid);
}

double HALSIM_GetCanTalonSensorPosition(int32_t index) {
  return SimCanTalonData[index].GetSensorPosition();
}

void HALSIM_SetCanTalonSensorPosition(int32_t index, double sensorPosition) {
  SimCanTalonData[index].SetSensorPosition(sensorPosition);
}

int32_t HALSIM_RegisterCanTalonSensorVelocityCallback(int32_t index, HAL_NotifyCallback callback, void* param, HAL_Bool initialNotify) {
  return SimCanTalonData[index].RegisterSensorVelocityCallback(callback, param, initialNotify);
}

void HALSIM_CancelCanTalonSensorVelocityCallback(int32_t index, int32_t uid) {
  SimCanTalonData[index].CancelSensorVelocityCallback(uid);
}

double HALSIM_GetCanTalonSensorVelocity(int32_t index) {
  return SimCanTalonData[index].GetSensorVelocity();
}

void HALSIM_SetCanTalonSensorVelocity(int32_t index, double sensorVelocity) {
  SimCanTalonData[index].SetSensorVelocity(sensorVelocity);
}

int32_t HALSIM_RegisterCanTalonCurrentCallback(int32_t index, HAL_NotifyCallback callback, void* param, HAL_Bool initialNotify) {
  return SimCanTalonData[index].RegisterCurrentCallback(callback, param, initialNotify);
}

void HALSIM_CancelCanTalonCurrentCallback(int32_t index, int32_t uid) {
  SimCanTalonData[index].CancelCurrentCallback(uid);
}

double HALSIM_GetCanTalonCurrent(int32_t index) {
  return SimCanTalonData[index].GetCurrent();
}

void HALSIM_SetCanTalonCurrent(int32_t index, double current) {
  SimCanTalonData[index].SetCurrent(current);
}

int32_t HALSIM_RegisterCanTalonBrakeIsEnabledCallback(int32_t index, HAL_NotifyCallback callback, void* param, HAL_Bool initialNotify) {
  return SimCanTalonData[index].RegisterBrakeIsEnabledCallback(callback, param, initialNotify);
}

void HALSIM_CancelCanTalonBrakeIsEnabledCallback(int32_t index, int32_t uid) {
  SimCanTalonData[index].CancelBrakeIsEnabledCallback(uid);
}

HAL_Bool HALSIM_GetCanTalonBrakeIsEnabled(int32_t index) {
  return SimCanTalonData[index].GetBrakeIsEnabled();
}

void HALSIM_SetCanTalonBrakeIsEnabled(int32_t index, HAL_Bool brakeIsEnabled) {
  SimCanTalonData[index].SetBrakeIsEnabled(brakeIsEnabled);
}

int32_t HALSIM_RegisterCanTalonEncPositionCallback(int32_t index, HAL_NotifyCallback callback, void* param, HAL_Bool initialNotify) {
  return SimCanTalonData[index].RegisterEncPositionCallback(callback, param, initialNotify);
}

void HALSIM_CancelCanTalonEncPositionCallback(int32_t index, int32_t uid) {
  SimCanTalonData[index].CancelEncPositionCallback(uid);
}

double HALSIM_GetCanTalonEncPosition(int32_t index) {
  return SimCanTalonData[index].GetEncPosition();
}

void HALSIM_SetCanTalonEncPosition(int32_t index, double encPosition) {
  SimCanTalonData[index].SetEncPosition(encPosition);
}

int32_t HALSIM_RegisterCanTalonEncVelCallback(int32_t index, HAL_NotifyCallback callback, void* param, HAL_Bool initialNotify) {
  return SimCanTalonData[index].RegisterEncVelCallback(callback, param, initialNotify);
}

void HALSIM_CancelCanTalonEncVelCallback(int32_t index, int32_t uid) {
  SimCanTalonData[index].CancelEncVelCallback(uid);
}

double HALSIM_GetCanTalonEncVel(int32_t index) {
  return SimCanTalonData[index].GetEncVel();
}

void HALSIM_SetCanTalonEncVel(int32_t index, double encVel) {
  SimCanTalonData[index].SetEncVel(encVel);
}

int32_t HALSIM_RegisterCanTalonEncIndexRiseEventsCallback(int32_t index, HAL_NotifyCallback callback, void* param, HAL_Bool initialNotify) {
  return SimCanTalonData[index].RegisterEncIndexRiseEventsCallback(callback, param, initialNotify);
}

void HALSIM_CancelCanTalonEncIndexRiseEventsCallback(int32_t index, int32_t uid) {
  SimCanTalonData[index].CancelEncIndexRiseEventsCallback(uid);
}

double HALSIM_GetCanTalonEncIndexRiseEvents(int32_t index) {
  return SimCanTalonData[index].GetEncIndexRiseEvents();
}

void HALSIM_SetCanTalonEncIndexRiseEvents(int32_t index, double encIndexRiseEvents) {
  SimCanTalonData[index].SetEncIndexRiseEvents(encIndexRiseEvents);
}

int32_t HALSIM_RegisterCanTalonQuadApinCallback(int32_t index, HAL_NotifyCallback callback, void* param, HAL_Bool initialNotify) {
  return SimCanTalonData[index].RegisterQuadApinCallback(callback, param, initialNotify);
}

void HALSIM_CancelCanTalonQuadApinCallback(int32_t index, int32_t uid) {
  SimCanTalonData[index].CancelQuadApinCallback(uid);
}

double HALSIM_GetCanTalonQuadApin(int32_t index) {
  return SimCanTalonData[index].GetQuadApin();
}

void HALSIM_SetCanTalonQuadApin(int32_t index, double quadApin) {
  SimCanTalonData[index].SetQuadApin(quadApin);
}

int32_t HALSIM_RegisterCanTalonQuadBpinCallback(int32_t index, HAL_NotifyCallback callback, void* param, HAL_Bool initialNotify) {
  return SimCanTalonData[index].RegisterQuadBpinCallback(callback, param, initialNotify);
}

void HALSIM_CancelCanTalonQuadBpinCallback(int32_t index, int32_t uid) {
  SimCanTalonData[index].CancelQuadBpinCallback(uid);
}

double HALSIM_GetCanTalonQuadBpin(int32_t index) {
  return SimCanTalonData[index].GetQuadBpin();
}

void HALSIM_SetCanTalonQuadBpin(int32_t index, double quadBpin) {
  SimCanTalonData[index].SetQuadBpin(quadBpin);
}

int32_t HALSIM_RegisterCanTalonQuadIdxpinCallback(int32_t index, HAL_NotifyCallback callback, void* param, HAL_Bool initialNotify) {
  return SimCanTalonData[index].RegisterQuadIdxpinCallback(callback, param, initialNotify);
}

void HALSIM_CancelCanTalonQuadIdxpinCallback(int32_t index, int32_t uid) {
  SimCanTalonData[index].CancelQuadIdxpinCallback(uid);
}

double HALSIM_GetCanTalonQuadIdxpin(int32_t index) {
  return SimCanTalonData[index].GetQuadIdxpin();
}

void HALSIM_SetCanTalonQuadIdxpin(int32_t index, double quadIdxpin) {
  SimCanTalonData[index].SetQuadIdxpin(quadIdxpin);
}

int32_t HALSIM_RegisterCanTalonAnalogInWithOvCallback(int32_t index, HAL_NotifyCallback callback, void* param, HAL_Bool initialNotify) {
  return SimCanTalonData[index].RegisterAnalogInWithOvCallback(callback, param, initialNotify);
}

void HALSIM_CancelCanTalonAnalogInWithOvCallback(int32_t index, int32_t uid) {
  SimCanTalonData[index].CancelAnalogInWithOvCallback(uid);
}

double HALSIM_GetCanTalonAnalogInWithOv(int32_t index) {
  return SimCanTalonData[index].GetAnalogInWithOv();
}

void HALSIM_SetCanTalonAnalogInWithOv(int32_t index, double analogInWithOv) {
  SimCanTalonData[index].SetAnalogInWithOv(analogInWithOv);
}

int32_t HALSIM_RegisterCanTalonAnalogInVelCallback(int32_t index, HAL_NotifyCallback callback, void* param, HAL_Bool initialNotify) {
  return SimCanTalonData[index].RegisterAnalogInVelCallback(callback, param, initialNotify);
}

void HALSIM_CancelCanTalonAnalogInVelCallback(int32_t index, int32_t uid) {
  SimCanTalonData[index].CancelAnalogInVelCallback(uid);
}

double HALSIM_GetCanTalonAnalogInVel(int32_t index) {
  return SimCanTalonData[index].GetAnalogInVel();
}

void HALSIM_SetCanTalonAnalogInVel(int32_t index, double analogInVel) {
  SimCanTalonData[index].SetAnalogInVel(analogInVel);
}

int32_t HALSIM_RegisterCanTalonTempCallback(int32_t index, HAL_NotifyCallback callback, void* param, HAL_Bool initialNotify) {
  return SimCanTalonData[index].RegisterTempCallback(callback, param, initialNotify);
}

void HALSIM_CancelCanTalonTempCallback(int32_t index, int32_t uid) {
  SimCanTalonData[index].CancelTempCallback(uid);
}

double HALSIM_GetCanTalonTemp(int32_t index) {
  return SimCanTalonData[index].GetTemp();
}

void HALSIM_SetCanTalonTemp(int32_t index, double temp) {
  SimCanTalonData[index].SetTemp(temp);
}

int32_t HALSIM_RegisterCanTalonBatteryVCallback(int32_t index, HAL_NotifyCallback callback, void* param, HAL_Bool initialNotify) {
  return SimCanTalonData[index].RegisterBatteryVCallback(callback, param, initialNotify);
}

void HALSIM_CancelCanTalonBatteryVCallback(int32_t index, int32_t uid) {
  SimCanTalonData[index].CancelBatteryVCallback(uid);
}

double HALSIM_GetCanTalonBatteryV(int32_t index) {
  return SimCanTalonData[index].GetBatteryV();
}

void HALSIM_SetCanTalonBatteryV(int32_t index, double batteryV) {
  SimCanTalonData[index].SetBatteryV(batteryV);
}

int32_t HALSIM_RegisterCanTalonResetCountCallback(int32_t index, HAL_NotifyCallback callback, void* param, HAL_Bool initialNotify) {
  return SimCanTalonData[index].RegisterResetCountCallback(callback, param, initialNotify);
}

void HALSIM_CancelCanTalonResetCountCallback(int32_t index, int32_t uid) {
  SimCanTalonData[index].CancelResetCountCallback(uid);
}

double HALSIM_GetCanTalonResetCount(int32_t index) {
  return SimCanTalonData[index].GetResetCount();
}

void HALSIM_SetCanTalonResetCount(int32_t index, double resetCount) {
  SimCanTalonData[index].SetResetCount(resetCount);
}

int32_t HALSIM_RegisterCanTalonResetFlagsCallback(int32_t index, HAL_NotifyCallback callback, void* param, HAL_Bool initialNotify) {
  return SimCanTalonData[index].RegisterResetFlagsCallback(callback, param, initialNotify);
}

void HALSIM_CancelCanTalonResetFlagsCallback(int32_t index, int32_t uid) {
  SimCanTalonData[index].CancelResetFlagsCallback(uid);
}

double HALSIM_GetCanTalonResetFlags(int32_t index) {
  return SimCanTalonData[index].GetResetFlags();
}

void HALSIM_SetCanTalonResetFlags(int32_t index, double resetFlags) {
  SimCanTalonData[index].SetResetFlags(resetFlags);
}

int32_t HALSIM_RegisterCanTalonFirmVersCallback(int32_t index, HAL_NotifyCallback callback, void* param, HAL_Bool initialNotify) {
  return SimCanTalonData[index].RegisterFirmVersCallback(callback, param, initialNotify);
}

void HALSIM_CancelCanTalonFirmVersCallback(int32_t index, int32_t uid) {
  SimCanTalonData[index].CancelFirmVersCallback(uid);
}

double HALSIM_GetCanTalonFirmVers(int32_t index) {
  return SimCanTalonData[index].GetFirmVers();
}

void HALSIM_SetCanTalonFirmVers(int32_t index, double firmVers) {
  SimCanTalonData[index].SetFirmVers(firmVers);
}

int32_t HALSIM_RegisterCanTalonSettingsChangedCallback(int32_t index, HAL_NotifyCallback callback, void* param, HAL_Bool initialNotify) {
  return SimCanTalonData[index].RegisterSettingsChangedCallback(callback, param, initialNotify);
}

void HALSIM_CancelCanTalonSettingsChangedCallback(int32_t index, int32_t uid) {
  SimCanTalonData[index].CancelSettingsChangedCallback(uid);
}

double HALSIM_GetCanTalonSettingsChanged(int32_t index) {
  return SimCanTalonData[index].GetSettingsChanged();
}

void HALSIM_SetCanTalonSettingsChanged(int32_t index, double settingsChanged) {
  SimCanTalonData[index].SetSettingsChanged(settingsChanged);
}

int32_t HALSIM_RegisterCanTalonQuadFilterEnCallback(int32_t index, HAL_NotifyCallback callback, void* param, HAL_Bool initialNotify) {
  return SimCanTalonData[index].RegisterQuadFilterEnCallback(callback, param, initialNotify);
}

void HALSIM_CancelCanTalonQuadFilterEnCallback(int32_t index, int32_t uid) {
  SimCanTalonData[index].CancelQuadFilterEnCallback(uid);
}

double HALSIM_GetCanTalonQuadFilterEn(int32_t index) {
  return SimCanTalonData[index].GetQuadFilterEn();
}

void HALSIM_SetCanTalonQuadFilterEn(int32_t index, double quadFilterEn) {
  SimCanTalonData[index].SetQuadFilterEn(quadFilterEn);
}

int32_t HALSIM_RegisterCanTalonPidIaccumCallback(int32_t index, HAL_NotifyCallback callback, void* param, HAL_Bool initialNotify) {
  return SimCanTalonData[index].RegisterPidIaccumCallback(callback, param, initialNotify);
}

void HALSIM_CancelCanTalonPidIaccumCallback(int32_t index, int32_t uid) {
  SimCanTalonData[index].CancelPidIaccumCallback(uid);
}

double HALSIM_GetCanTalonPidIaccum(int32_t index) {
  return SimCanTalonData[index].GetPidIaccum();
}

void HALSIM_SetCanTalonPidIaccum(int32_t index, double pidIaccum) {
  SimCanTalonData[index].SetPidIaccum(pidIaccum);
}

int32_t HALSIM_RegisterCanTalonAinPositionCallback(int32_t index, HAL_NotifyCallback callback, void* param, HAL_Bool initialNotify) {
  return SimCanTalonData[index].RegisterAinPositionCallback(callback, param, initialNotify);
}

void HALSIM_CancelCanTalonAinPositionCallback(int32_t index, int32_t uid) {
  SimCanTalonData[index].CancelAinPositionCallback(uid);
}

double HALSIM_GetCanTalonAinPosition(int32_t index) {
  return SimCanTalonData[index].GetAinPosition();
}

void HALSIM_SetCanTalonAinPosition(int32_t index, double ainPosition) {
  SimCanTalonData[index].SetAinPosition(ainPosition);
}

int32_t HALSIM_RegisterCanTalonProfileParamSlot0_AllowableClosedLoopErrCallback(int32_t index, HAL_NotifyCallback callback, void* param, HAL_Bool initialNotify) {
  return SimCanTalonData[index].RegisterProfileParamSlot0_AllowableClosedLoopErrCallback(callback, param, initialNotify);
}

void HALSIM_CancelCanTalonProfileParamSlot0_AllowableClosedLoopErrCallback(int32_t index, int32_t uid) {
  SimCanTalonData[index].CancelProfileParamSlot0_AllowableClosedLoopErrCallback(uid);
}

double HALSIM_GetCanTalonProfileParamSlot0_AllowableClosedLoopErr(int32_t index) {
  return SimCanTalonData[index].GetProfileParamSlot0_AllowableClosedLoopErr();
}

void HALSIM_SetCanTalonProfileParamSlot0_AllowableClosedLoopErr(int32_t index, double profileParamSlot0_AllowableClosedLoopErr) {
  SimCanTalonData[index].SetProfileParamSlot0_AllowableClosedLoopErr(profileParamSlot0_AllowableClosedLoopErr);
}

int32_t HALSIM_RegisterCanTalonProfileParamSlot1_AllowableClosedLoopErrCallback(int32_t index, HAL_NotifyCallback callback, void* param, HAL_Bool initialNotify) {
  return SimCanTalonData[index].RegisterProfileParamSlot1_AllowableClosedLoopErrCallback(callback, param, initialNotify);
}

void HALSIM_CancelCanTalonProfileParamSlot1_AllowableClosedLoopErrCallback(int32_t index, int32_t uid) {
  SimCanTalonData[index].CancelProfileParamSlot1_AllowableClosedLoopErrCallback(uid);
}

double HALSIM_GetCanTalonProfileParamSlot1_AllowableClosedLoopErr(int32_t index) {
  return SimCanTalonData[index].GetProfileParamSlot1_AllowableClosedLoopErr();
}

void HALSIM_SetCanTalonProfileParamSlot1_AllowableClosedLoopErr(int32_t index, double profileParamSlot1_AllowableClosedLoopErr) {
  SimCanTalonData[index].SetProfileParamSlot1_AllowableClosedLoopErr(profileParamSlot1_AllowableClosedLoopErr);
}

int32_t HALSIM_RegisterCanTalonNumberEncoderCPRCallback(int32_t index, HAL_NotifyCallback callback, void* param, HAL_Bool initialNotify) {
  return SimCanTalonData[index].RegisterNumberEncoderCPRCallback(callback, param, initialNotify);
}

void HALSIM_CancelCanTalonNumberEncoderCPRCallback(int32_t index, int32_t uid) {
  SimCanTalonData[index].CancelNumberEncoderCPRCallback(uid);
}

double HALSIM_GetCanTalonNumberEncoderCPR(int32_t index) {
  return SimCanTalonData[index].GetNumberEncoderCPR();
}

void HALSIM_SetCanTalonNumberEncoderCPR(int32_t index, double numberEncoderCPR) {
  SimCanTalonData[index].SetNumberEncoderCPR(numberEncoderCPR);
}

int32_t HALSIM_RegisterCanTalonNumberPotTurnsCallback(int32_t index, HAL_NotifyCallback callback, void* param, HAL_Bool initialNotify) {
  return SimCanTalonData[index].RegisterNumberPotTurnsCallback(callback, param, initialNotify);
}

void HALSIM_CancelCanTalonNumberPotTurnsCallback(int32_t index, int32_t uid) {
  SimCanTalonData[index].CancelNumberPotTurnsCallback(uid);
}

double HALSIM_GetCanTalonNumberPotTurns(int32_t index) {
  return SimCanTalonData[index].GetNumberPotTurns();
}

void HALSIM_SetCanTalonNumberPotTurns(int32_t index, double numberPotTurns) {
  SimCanTalonData[index].SetNumberPotTurns(numberPotTurns);
}

int32_t HALSIM_RegisterCanTalonm_overrideLimitSwitchCallback(int32_t index, HAL_NotifyCallback callback, void* param, HAL_Bool initialNotify) {
  return SimCanTalonData[index].Registerm_overrideLimitSwitchCallback(callback, param, initialNotify);
}

void HALSIM_CancelCanTalonm_overrideLimitSwitchCallback(int32_t index, int32_t uid) {
  SimCanTalonData[index].Cancelm_overrideLimitSwitchCallback(uid);
}

double HALSIM_GetCanTalonm_overrideLimitSwitch(int32_t index) {
  return SimCanTalonData[index].Getm_overrideLimitSwitch();
}

void HALSIM_SetCanTalonm_overrideLimitSwitch(int32_t index, double m_overrideLimitSwitch) {
  SimCanTalonData[index].Setm_overrideLimitSwitch(m_overrideLimitSwitch);
}

int32_t HALSIM_RegisterCanTalonm_overrideBrakeTypeCallback(int32_t index, HAL_NotifyCallback callback, void* param, HAL_Bool initialNotify) {
  return SimCanTalonData[index].Registerm_overrideBrakeTypeCallback(callback, param, initialNotify);
}

void HALSIM_CancelCanTalonm_overrideBrakeTypeCallback(int32_t index, int32_t uid) {
  SimCanTalonData[index].Cancelm_overrideBrakeTypeCallback(uid);
}

double HALSIM_GetCanTalonm_overrideBrakeType(int32_t index) {
  return SimCanTalonData[index].Getm_overrideBrakeType();
}

void HALSIM_SetCanTalonm_overrideBrakeType(int32_t index, double m_overrideBrakeType) {
  SimCanTalonData[index].Setm_overrideBrakeType(m_overrideBrakeType);
}

int32_t HALSIM_RegisterCanTalonm_demandCallback(int32_t index, HAL_NotifyCallback callback, void* param, HAL_Bool initialNotify) {
  return SimCanTalonData[index].Registerm_demandCallback(callback, param, initialNotify);
}

void HALSIM_CancelCanTalonm_demandCallback(int32_t index, int32_t uid) {
  SimCanTalonData[index].Cancelm_demandCallback(uid);
}

double HALSIM_GetCanTalonm_demand(int32_t index) {
  return SimCanTalonData[index].Getm_demand();
}

void HALSIM_SetCanTalonm_demand(int32_t index, double m_demand) {
  SimCanTalonData[index].Setm_demand(m_demand);
}

int32_t HALSIM_RegisterCanTalonm_percentVBusValueCallback(int32_t index, HAL_NotifyCallback callback, void* param, HAL_Bool initialNotify) {
  return SimCanTalonData[index].Registerm_percentVBusValueCallback(callback, param, initialNotify);
}

void HALSIM_CancelCanTalonm_percentVBusValueCallback(int32_t index, int32_t uid) {
  SimCanTalonData[index].Cancelm_percentVBusValueCallback(uid);
}

double HALSIM_GetCanTalonm_percentVBusValue(int32_t index) {
  return SimCanTalonData[index].Getm_percentVBusValue();
}

void HALSIM_SetCanTalonm_percentVBusValue(int32_t index, double m_percentVBusValue) {
  SimCanTalonData[index].Setm_percentVBusValue(m_percentVBusValue);
}

int32_t HALSIM_RegisterCanTalonm_voltageCompensationRateCallback(int32_t index, HAL_NotifyCallback callback, void* param, HAL_Bool initialNotify) {
  return SimCanTalonData[index].Registerm_voltageCompensationRateCallback(callback, param, initialNotify);
}

void HALSIM_CancelCanTalonm_voltageCompensationRateCallback(int32_t index, int32_t uid) {
  SimCanTalonData[index].Cancelm_voltageCompensationRateCallback(uid);
}

double HALSIM_GetCanTalonm_voltageCompensationRate(int32_t index) {
  return SimCanTalonData[index].Getm_voltageCompensationRate();
}

void HALSIM_SetCanTalonm_voltageCompensationRate(int32_t index, double m_voltageCompensationRate) {
  SimCanTalonData[index].Setm_voltageCompensationRate(m_voltageCompensationRate);
}

}
