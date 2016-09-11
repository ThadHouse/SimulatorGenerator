#pragma once

#include <atomic>
#include <memory>

#include "MockData/CanTalonData.h"
#include "MockData/NotifyDataBase.h"

namespace hal {
class CanTalonData {
 public:
  int32_t RegisterProfileParamSlot0_PCallback(HAL_NotifyCallback callback, void* param, HAL_Bool initialNotify);
  void CancelProfileParamSlot0_PCallback(int32_t uid);
  void InvokeProfileParamSlot0_PCallback(const HAL_Value* value);
  double GetProfileParamSlot0_P();
  void SetProfileParamSlot0_P(double profileParamSlot0_P);

  int32_t RegisterProfileParamSlot0_ICallback(HAL_NotifyCallback callback, void* param, HAL_Bool initialNotify);
  void CancelProfileParamSlot0_ICallback(int32_t uid);
  void InvokeProfileParamSlot0_ICallback(const HAL_Value* value);
  double GetProfileParamSlot0_I();
  void SetProfileParamSlot0_I(double profileParamSlot0_I);

  int32_t RegisterProfileParamSlot0_DCallback(HAL_NotifyCallback callback, void* param, HAL_Bool initialNotify);
  void CancelProfileParamSlot0_DCallback(int32_t uid);
  void InvokeProfileParamSlot0_DCallback(const HAL_Value* value);
  double GetProfileParamSlot0_D();
  void SetProfileParamSlot0_D(double profileParamSlot0_D);

  int32_t RegisterProfileParamSlot0_FCallback(HAL_NotifyCallback callback, void* param, HAL_Bool initialNotify);
  void CancelProfileParamSlot0_FCallback(int32_t uid);
  void InvokeProfileParamSlot0_FCallback(const HAL_Value* value);
  double GetProfileParamSlot0_F();
  void SetProfileParamSlot0_F(double profileParamSlot0_F);

  int32_t RegisterProfileParamSlot0_IZoneCallback(HAL_NotifyCallback callback, void* param, HAL_Bool initialNotify);
  void CancelProfileParamSlot0_IZoneCallback(int32_t uid);
  void InvokeProfileParamSlot0_IZoneCallback(const HAL_Value* value);
  int32_t GetProfileParamSlot0_IZone();
  void SetProfileParamSlot0_IZone(int32_t profileParamSlot0_IZone);

  int32_t RegisterProfileParamSlot0_CloseLoopRampRateCallback(HAL_NotifyCallback callback, void* param, HAL_Bool initialNotify);
  void CancelProfileParamSlot0_CloseLoopRampRateCallback(int32_t uid);
  void InvokeProfileParamSlot0_CloseLoopRampRateCallback(const HAL_Value* value);
  int32_t GetProfileParamSlot0_CloseLoopRampRate();
  void SetProfileParamSlot0_CloseLoopRampRate(int32_t profileParamSlot0_CloseLoopRampRate);

  int32_t RegisterProfileParamSlot1_PCallback(HAL_NotifyCallback callback, void* param, HAL_Bool initialNotify);
  void CancelProfileParamSlot1_PCallback(int32_t uid);
  void InvokeProfileParamSlot1_PCallback(const HAL_Value* value);
  double GetProfileParamSlot1_P();
  void SetProfileParamSlot1_P(double profileParamSlot1_P);

  int32_t RegisterProfileParamSlot1_ICallback(HAL_NotifyCallback callback, void* param, HAL_Bool initialNotify);
  void CancelProfileParamSlot1_ICallback(int32_t uid);
  void InvokeProfileParamSlot1_ICallback(const HAL_Value* value);
  double GetProfileParamSlot1_I();
  void SetProfileParamSlot1_I(double profileParamSlot1_I);

  int32_t RegisterProfileParamSlot1_DCallback(HAL_NotifyCallback callback, void* param, HAL_Bool initialNotify);
  void CancelProfileParamSlot1_DCallback(int32_t uid);
  void InvokeProfileParamSlot1_DCallback(const HAL_Value* value);
  double GetProfileParamSlot1_D();
  void SetProfileParamSlot1_D(double profileParamSlot1_D);

  int32_t RegisterProfileParamSlot1_FCallback(HAL_NotifyCallback callback, void* param, HAL_Bool initialNotify);
  void CancelProfileParamSlot1_FCallback(int32_t uid);
  void InvokeProfileParamSlot1_FCallback(const HAL_Value* value);
  double GetProfileParamSlot1_F();
  void SetProfileParamSlot1_F(double profileParamSlot1_F);

  int32_t RegisterProfileParamSlot1_IZoneCallback(HAL_NotifyCallback callback, void* param, HAL_Bool initialNotify);
  void CancelProfileParamSlot1_IZoneCallback(int32_t uid);
  void InvokeProfileParamSlot1_IZoneCallback(const HAL_Value* value);
  int32_t GetProfileParamSlot1_IZone();
  void SetProfileParamSlot1_IZone(int32_t profileParamSlot1_IZone);

  int32_t RegisterProfileParamSlot1_CloseLoopRampRateCallback(HAL_NotifyCallback callback, void* param, HAL_Bool initialNotify);
  void CancelProfileParamSlot1_CloseLoopRampRateCallback(int32_t uid);
  void InvokeProfileParamSlot1_CloseLoopRampRateCallback(const HAL_Value* value);
  int32_t GetProfileParamSlot1_CloseLoopRampRate();
  void SetProfileParamSlot1_CloseLoopRampRate(int32_t profileParamSlot1_CloseLoopRampRate);

  int32_t RegisterProfileParamSoftLimitForThresholdCallback(HAL_NotifyCallback callback, void* param, HAL_Bool initialNotify);
  void CancelProfileParamSoftLimitForThresholdCallback(int32_t uid);
  void InvokeProfileParamSoftLimitForThresholdCallback(const HAL_Value* value);
  double GetProfileParamSoftLimitForThreshold();
  void SetProfileParamSoftLimitForThreshold(double profileParamSoftLimitForThreshold);

  int32_t RegisterProfileParamSoftLimitRevThresholdCallback(HAL_NotifyCallback callback, void* param, HAL_Bool initialNotify);
  void CancelProfileParamSoftLimitRevThresholdCallback(int32_t uid);
  void InvokeProfileParamSoftLimitRevThresholdCallback(const HAL_Value* value);
  double GetProfileParamSoftLimitRevThreshold();
  void SetProfileParamSoftLimitRevThreshold(double profileParamSoftLimitRevThreshold);

  int32_t RegisterProfileParamSoftLimitForEnableCallback(HAL_NotifyCallback callback, void* param, HAL_Bool initialNotify);
  void CancelProfileParamSoftLimitForEnableCallback(int32_t uid);
  void InvokeProfileParamSoftLimitForEnableCallback(const HAL_Value* value);
  double GetProfileParamSoftLimitForEnable();
  void SetProfileParamSoftLimitForEnable(double profileParamSoftLimitForEnable);

  int32_t RegisterProfileParamSoftLimitRevEnableCallback(HAL_NotifyCallback callback, void* param, HAL_Bool initialNotify);
  void CancelProfileParamSoftLimitRevEnableCallback(int32_t uid);
  void InvokeProfileParamSoftLimitRevEnableCallback(const HAL_Value* value);
  double GetProfileParamSoftLimitRevEnable();
  void SetProfileParamSoftLimitRevEnable(double profileParamSoftLimitRevEnable);

  int32_t RegisterOnBoot_BrakeModeCallback(HAL_NotifyCallback callback, void* param, HAL_Bool initialNotify);
  void CancelOnBoot_BrakeModeCallback(int32_t uid);
  void InvokeOnBoot_BrakeModeCallback(const HAL_Value* value);
  double GetOnBoot_BrakeMode();
  void SetOnBoot_BrakeMode(double onBoot_BrakeMode);

  int32_t RegisterOnBoot_LimitSwitch_Forward_NormallyClosedCallback(HAL_NotifyCallback callback, void* param, HAL_Bool initialNotify);
  void CancelOnBoot_LimitSwitch_Forward_NormallyClosedCallback(int32_t uid);
  void InvokeOnBoot_LimitSwitch_Forward_NormallyClosedCallback(const HAL_Value* value);
  double GetOnBoot_LimitSwitch_Forward_NormallyClosed();
  void SetOnBoot_LimitSwitch_Forward_NormallyClosed(double onBoot_LimitSwitch_Forward_NormallyClosed);

  int32_t RegisterOnBoot_LimitSwitch_Reverse_NormallyClosedCallback(HAL_NotifyCallback callback, void* param, HAL_Bool initialNotify);
  void CancelOnBoot_LimitSwitch_Reverse_NormallyClosedCallback(int32_t uid);
  void InvokeOnBoot_LimitSwitch_Reverse_NormallyClosedCallback(const HAL_Value* value);
  double GetOnBoot_LimitSwitch_Reverse_NormallyClosed();
  void SetOnBoot_LimitSwitch_Reverse_NormallyClosed(double onBoot_LimitSwitch_Reverse_NormallyClosed);

  int32_t RegisterOnBoot_LimitSwitch_Forward_DisableCallback(HAL_NotifyCallback callback, void* param, HAL_Bool initialNotify);
  void CancelOnBoot_LimitSwitch_Forward_DisableCallback(int32_t uid);
  void InvokeOnBoot_LimitSwitch_Forward_DisableCallback(const HAL_Value* value);
  double GetOnBoot_LimitSwitch_Forward_Disable();
  void SetOnBoot_LimitSwitch_Forward_Disable(double onBoot_LimitSwitch_Forward_Disable);

  int32_t RegisterOnBoot_LimitSwitch_Reverse_DisableCallback(HAL_NotifyCallback callback, void* param, HAL_Bool initialNotify);
  void CancelOnBoot_LimitSwitch_Reverse_DisableCallback(int32_t uid);
  void InvokeOnBoot_LimitSwitch_Reverse_DisableCallback(const HAL_Value* value);
  double GetOnBoot_LimitSwitch_Reverse_Disable();
  void SetOnBoot_LimitSwitch_Reverse_Disable(double onBoot_LimitSwitch_Reverse_Disable);

  int32_t RegisterFault_OverTempCallback(HAL_NotifyCallback callback, void* param, HAL_Bool initialNotify);
  void CancelFault_OverTempCallback(int32_t uid);
  void InvokeFault_OverTempCallback(const HAL_Value* value);
  double GetFault_OverTemp();
  void SetFault_OverTemp(double fault_OverTemp);

  int32_t RegisterFault_UnderVoltageCallback(HAL_NotifyCallback callback, void* param, HAL_Bool initialNotify);
  void CancelFault_UnderVoltageCallback(int32_t uid);
  void InvokeFault_UnderVoltageCallback(const HAL_Value* value);
  double GetFault_UnderVoltage();
  void SetFault_UnderVoltage(double fault_UnderVoltage);

  int32_t RegisterFault_ForLimCallback(HAL_NotifyCallback callback, void* param, HAL_Bool initialNotify);
  void CancelFault_ForLimCallback(int32_t uid);
  void InvokeFault_ForLimCallback(const HAL_Value* value);
  double GetFault_ForLim();
  void SetFault_ForLim(double fault_ForLim);

  int32_t RegisterFault_RevLimCallback(HAL_NotifyCallback callback, void* param, HAL_Bool initialNotify);
  void CancelFault_RevLimCallback(int32_t uid);
  void InvokeFault_RevLimCallback(const HAL_Value* value);
  double GetFault_RevLim();
  void SetFault_RevLim(double fault_RevLim);

  int32_t RegisterFault_HardwareFailureCallback(HAL_NotifyCallback callback, void* param, HAL_Bool initialNotify);
  void CancelFault_HardwareFailureCallback(int32_t uid);
  void InvokeFault_HardwareFailureCallback(const HAL_Value* value);
  double GetFault_HardwareFailure();
  void SetFault_HardwareFailure(double fault_HardwareFailure);

  int32_t RegisterFault_ForSoftLimCallback(HAL_NotifyCallback callback, void* param, HAL_Bool initialNotify);
  void CancelFault_ForSoftLimCallback(int32_t uid);
  void InvokeFault_ForSoftLimCallback(const HAL_Value* value);
  double GetFault_ForSoftLim();
  void SetFault_ForSoftLim(double fault_ForSoftLim);

  int32_t RegisterFault_RevSoftLimCallback(HAL_NotifyCallback callback, void* param, HAL_Bool initialNotify);
  void CancelFault_RevSoftLimCallback(int32_t uid);
  void InvokeFault_RevSoftLimCallback(const HAL_Value* value);
  double GetFault_RevSoftLim();
  void SetFault_RevSoftLim(double fault_RevSoftLim);

  int32_t RegisterStckyFault_OverTempCallback(HAL_NotifyCallback callback, void* param, HAL_Bool initialNotify);
  void CancelStckyFault_OverTempCallback(int32_t uid);
  void InvokeStckyFault_OverTempCallback(const HAL_Value* value);
  double GetStckyFault_OverTemp();
  void SetStckyFault_OverTemp(double stckyFault_OverTemp);

  int32_t RegisterStckyFault_UnderVoltageCallback(HAL_NotifyCallback callback, void* param, HAL_Bool initialNotify);
  void CancelStckyFault_UnderVoltageCallback(int32_t uid);
  void InvokeStckyFault_UnderVoltageCallback(const HAL_Value* value);
  double GetStckyFault_UnderVoltage();
  void SetStckyFault_UnderVoltage(double stckyFault_UnderVoltage);

  int32_t RegisterStckyFault_ForLimCallback(HAL_NotifyCallback callback, void* param, HAL_Bool initialNotify);
  void CancelStckyFault_ForLimCallback(int32_t uid);
  void InvokeStckyFault_ForLimCallback(const HAL_Value* value);
  double GetStckyFault_ForLim();
  void SetStckyFault_ForLim(double stckyFault_ForLim);

  int32_t RegisterStckyFault_RevLimCallback(HAL_NotifyCallback callback, void* param, HAL_Bool initialNotify);
  void CancelStckyFault_RevLimCallback(int32_t uid);
  void InvokeStckyFault_RevLimCallback(const HAL_Value* value);
  double GetStckyFault_RevLim();
  void SetStckyFault_RevLim(double stckyFault_RevLim);

  int32_t RegisterStckyFault_ForSoftLimCallback(HAL_NotifyCallback callback, void* param, HAL_Bool initialNotify);
  void CancelStckyFault_ForSoftLimCallback(int32_t uid);
  void InvokeStckyFault_ForSoftLimCallback(const HAL_Value* value);
  double GetStckyFault_ForSoftLim();
  void SetStckyFault_ForSoftLim(double stckyFault_ForSoftLim);

  int32_t RegisterStckyFault_RevSoftLimCallback(HAL_NotifyCallback callback, void* param, HAL_Bool initialNotify);
  void CancelStckyFault_RevSoftLimCallback(int32_t uid);
  void InvokeStckyFault_RevSoftLimCallback(const HAL_Value* value);
  double GetStckyFault_RevSoftLim();
  void SetStckyFault_RevSoftLim(double stckyFault_RevSoftLim);

  int32_t RegisterAppliedThrottleCallback(HAL_NotifyCallback callback, void* param, HAL_Bool initialNotify);
  void CancelAppliedThrottleCallback(int32_t uid);
  void InvokeAppliedThrottleCallback(const HAL_Value* value);
  double GetAppliedThrottle();
  void SetAppliedThrottle(double appliedThrottle);

  int32_t RegisterCloseLoopErrCallback(HAL_NotifyCallback callback, void* param, HAL_Bool initialNotify);
  void CancelCloseLoopErrCallback(int32_t uid);
  void InvokeCloseLoopErrCallback(const HAL_Value* value);
  double GetCloseLoopErr();
  void SetCloseLoopErr(double closeLoopErr);

  int32_t RegisterFeedbackDeviceSelectCallback(HAL_NotifyCallback callback, void* param, HAL_Bool initialNotify);
  void CancelFeedbackDeviceSelectCallback(int32_t uid);
  void InvokeFeedbackDeviceSelectCallback(const HAL_Value* value);
  double GetFeedbackDeviceSelect();
  void SetFeedbackDeviceSelect(double feedbackDeviceSelect);

  int32_t RegisterRevMotDuringCloseLoopEnCallback(HAL_NotifyCallback callback, void* param, HAL_Bool initialNotify);
  void CancelRevMotDuringCloseLoopEnCallback(int32_t uid);
  void InvokeRevMotDuringCloseLoopEnCallback(const HAL_Value* value);
  HAL_Bool GetRevMotDuringCloseLoopEn();
  void SetRevMotDuringCloseLoopEn(HAL_Bool revMotDuringCloseLoopEn);

  int32_t RegisterModeSelectCallback(HAL_NotifyCallback callback, void* param, HAL_Bool initialNotify);
  void CancelModeSelectCallback(int32_t uid);
  void InvokeModeSelectCallback(const HAL_Value* value);
  double GetModeSelect();
  void SetModeSelect(double modeSelect);

  int32_t RegisterProfileSlotSelectCallback(HAL_NotifyCallback callback, void* param, HAL_Bool initialNotify);
  void CancelProfileSlotSelectCallback(int32_t uid);
  void InvokeProfileSlotSelectCallback(const HAL_Value* value);
  double GetProfileSlotSelect();
  void SetProfileSlotSelect(double profileSlotSelect);

  int32_t RegisterRampThrottleCallback(HAL_NotifyCallback callback, void* param, HAL_Bool initialNotify);
  void CancelRampThrottleCallback(int32_t uid);
  void InvokeRampThrottleCallback(const HAL_Value* value);
  double GetRampThrottle();
  void SetRampThrottle(double rampThrottle);

  int32_t RegisterRevFeedbackSensorCallback(HAL_NotifyCallback callback, void* param, HAL_Bool initialNotify);
  void CancelRevFeedbackSensorCallback(int32_t uid);
  void InvokeRevFeedbackSensorCallback(const HAL_Value* value);
  HAL_Bool GetRevFeedbackSensor();
  void SetRevFeedbackSensor(HAL_Bool revFeedbackSensor);

  int32_t RegisterLimitSwitchEnCallback(HAL_NotifyCallback callback, void* param, HAL_Bool initialNotify);
  void CancelLimitSwitchEnCallback(int32_t uid);
  void InvokeLimitSwitchEnCallback(const HAL_Value* value);
  double GetLimitSwitchEn();
  void SetLimitSwitchEn(double limitSwitchEn);

  int32_t RegisterLimitSwitchClosedForCallback(HAL_NotifyCallback callback, void* param, HAL_Bool initialNotify);
  void CancelLimitSwitchClosedForCallback(int32_t uid);
  void InvokeLimitSwitchClosedForCallback(const HAL_Value* value);
  HAL_Bool GetLimitSwitchClosedFor();
  void SetLimitSwitchClosedFor(HAL_Bool limitSwitchClosedFor);

  int32_t RegisterLimitSwitchClosedRevCallback(HAL_NotifyCallback callback, void* param, HAL_Bool initialNotify);
  void CancelLimitSwitchClosedRevCallback(int32_t uid);
  void InvokeLimitSwitchClosedRevCallback(const HAL_Value* value);
  HAL_Bool GetLimitSwitchClosedRev();
  void SetLimitSwitchClosedRev(HAL_Bool limitSwitchClosedRev);

  int32_t RegisterSensorPositionCallback(HAL_NotifyCallback callback, void* param, HAL_Bool initialNotify);
  void CancelSensorPositionCallback(int32_t uid);
  void InvokeSensorPositionCallback(const HAL_Value* value);
  double GetSensorPosition();
  void SetSensorPosition(double sensorPosition);

  int32_t RegisterSensorVelocityCallback(HAL_NotifyCallback callback, void* param, HAL_Bool initialNotify);
  void CancelSensorVelocityCallback(int32_t uid);
  void InvokeSensorVelocityCallback(const HAL_Value* value);
  double GetSensorVelocity();
  void SetSensorVelocity(double sensorVelocity);

  int32_t RegisterCurrentCallback(HAL_NotifyCallback callback, void* param, HAL_Bool initialNotify);
  void CancelCurrentCallback(int32_t uid);
  void InvokeCurrentCallback(const HAL_Value* value);
  double GetCurrent();
  void SetCurrent(double current);

  int32_t RegisterBrakeIsEnabledCallback(HAL_NotifyCallback callback, void* param, HAL_Bool initialNotify);
  void CancelBrakeIsEnabledCallback(int32_t uid);
  void InvokeBrakeIsEnabledCallback(const HAL_Value* value);
  HAL_Bool GetBrakeIsEnabled();
  void SetBrakeIsEnabled(HAL_Bool brakeIsEnabled);

  int32_t RegisterEncPositionCallback(HAL_NotifyCallback callback, void* param, HAL_Bool initialNotify);
  void CancelEncPositionCallback(int32_t uid);
  void InvokeEncPositionCallback(const HAL_Value* value);
  double GetEncPosition();
  void SetEncPosition(double encPosition);

  int32_t RegisterEncVelCallback(HAL_NotifyCallback callback, void* param, HAL_Bool initialNotify);
  void CancelEncVelCallback(int32_t uid);
  void InvokeEncVelCallback(const HAL_Value* value);
  double GetEncVel();
  void SetEncVel(double encVel);

  int32_t RegisterEncIndexRiseEventsCallback(HAL_NotifyCallback callback, void* param, HAL_Bool initialNotify);
  void CancelEncIndexRiseEventsCallback(int32_t uid);
  void InvokeEncIndexRiseEventsCallback(const HAL_Value* value);
  double GetEncIndexRiseEvents();
  void SetEncIndexRiseEvents(double encIndexRiseEvents);

  int32_t RegisterQuadApinCallback(HAL_NotifyCallback callback, void* param, HAL_Bool initialNotify);
  void CancelQuadApinCallback(int32_t uid);
  void InvokeQuadApinCallback(const HAL_Value* value);
  double GetQuadApin();
  void SetQuadApin(double quadApin);

  int32_t RegisterQuadBpinCallback(HAL_NotifyCallback callback, void* param, HAL_Bool initialNotify);
  void CancelQuadBpinCallback(int32_t uid);
  void InvokeQuadBpinCallback(const HAL_Value* value);
  double GetQuadBpin();
  void SetQuadBpin(double quadBpin);

  int32_t RegisterQuadIdxpinCallback(HAL_NotifyCallback callback, void* param, HAL_Bool initialNotify);
  void CancelQuadIdxpinCallback(int32_t uid);
  void InvokeQuadIdxpinCallback(const HAL_Value* value);
  double GetQuadIdxpin();
  void SetQuadIdxpin(double quadIdxpin);

  int32_t RegisterAnalogInWithOvCallback(HAL_NotifyCallback callback, void* param, HAL_Bool initialNotify);
  void CancelAnalogInWithOvCallback(int32_t uid);
  void InvokeAnalogInWithOvCallback(const HAL_Value* value);
  double GetAnalogInWithOv();
  void SetAnalogInWithOv(double analogInWithOv);

  int32_t RegisterAnalogInVelCallback(HAL_NotifyCallback callback, void* param, HAL_Bool initialNotify);
  void CancelAnalogInVelCallback(int32_t uid);
  void InvokeAnalogInVelCallback(const HAL_Value* value);
  double GetAnalogInVel();
  void SetAnalogInVel(double analogInVel);

  int32_t RegisterTempCallback(HAL_NotifyCallback callback, void* param, HAL_Bool initialNotify);
  void CancelTempCallback(int32_t uid);
  void InvokeTempCallback(const HAL_Value* value);
  double GetTemp();
  void SetTemp(double temp);

  int32_t RegisterBatteryVCallback(HAL_NotifyCallback callback, void* param, HAL_Bool initialNotify);
  void CancelBatteryVCallback(int32_t uid);
  void InvokeBatteryVCallback(const HAL_Value* value);
  double GetBatteryV();
  void SetBatteryV(double batteryV);

  int32_t RegisterResetCountCallback(HAL_NotifyCallback callback, void* param, HAL_Bool initialNotify);
  void CancelResetCountCallback(int32_t uid);
  void InvokeResetCountCallback(const HAL_Value* value);
  double GetResetCount();
  void SetResetCount(double resetCount);

  int32_t RegisterResetFlagsCallback(HAL_NotifyCallback callback, void* param, HAL_Bool initialNotify);
  void CancelResetFlagsCallback(int32_t uid);
  void InvokeResetFlagsCallback(const HAL_Value* value);
  double GetResetFlags();
  void SetResetFlags(double resetFlags);

  int32_t RegisterFirmVersCallback(HAL_NotifyCallback callback, void* param, HAL_Bool initialNotify);
  void CancelFirmVersCallback(int32_t uid);
  void InvokeFirmVersCallback(const HAL_Value* value);
  double GetFirmVers();
  void SetFirmVers(double firmVers);

  int32_t RegisterSettingsChangedCallback(HAL_NotifyCallback callback, void* param, HAL_Bool initialNotify);
  void CancelSettingsChangedCallback(int32_t uid);
  void InvokeSettingsChangedCallback(const HAL_Value* value);
  double GetSettingsChanged();
  void SetSettingsChanged(double settingsChanged);

  int32_t RegisterQuadFilterEnCallback(HAL_NotifyCallback callback, void* param, HAL_Bool initialNotify);
  void CancelQuadFilterEnCallback(int32_t uid);
  void InvokeQuadFilterEnCallback(const HAL_Value* value);
  double GetQuadFilterEn();
  void SetQuadFilterEn(double quadFilterEn);

  int32_t RegisterPidIaccumCallback(HAL_NotifyCallback callback, void* param, HAL_Bool initialNotify);
  void CancelPidIaccumCallback(int32_t uid);
  void InvokePidIaccumCallback(const HAL_Value* value);
  double GetPidIaccum();
  void SetPidIaccum(double pidIaccum);

  int32_t RegisterAinPositionCallback(HAL_NotifyCallback callback, void* param, HAL_Bool initialNotify);
  void CancelAinPositionCallback(int32_t uid);
  void InvokeAinPositionCallback(const HAL_Value* value);
  double GetAinPosition();
  void SetAinPosition(double ainPosition);

  int32_t RegisterProfileParamSlot0_AllowableClosedLoopErrCallback(HAL_NotifyCallback callback, void* param, HAL_Bool initialNotify);
  void CancelProfileParamSlot0_AllowableClosedLoopErrCallback(int32_t uid);
  void InvokeProfileParamSlot0_AllowableClosedLoopErrCallback(const HAL_Value* value);
  double GetProfileParamSlot0_AllowableClosedLoopErr();
  void SetProfileParamSlot0_AllowableClosedLoopErr(double profileParamSlot0_AllowableClosedLoopErr);

  int32_t RegisterProfileParamSlot1_AllowableClosedLoopErrCallback(HAL_NotifyCallback callback, void* param, HAL_Bool initialNotify);
  void CancelProfileParamSlot1_AllowableClosedLoopErrCallback(int32_t uid);
  void InvokeProfileParamSlot1_AllowableClosedLoopErrCallback(const HAL_Value* value);
  double GetProfileParamSlot1_AllowableClosedLoopErr();
  void SetProfileParamSlot1_AllowableClosedLoopErr(double profileParamSlot1_AllowableClosedLoopErr);

  int32_t RegisterNumberEncoderCPRCallback(HAL_NotifyCallback callback, void* param, HAL_Bool initialNotify);
  void CancelNumberEncoderCPRCallback(int32_t uid);
  void InvokeNumberEncoderCPRCallback(const HAL_Value* value);
  double GetNumberEncoderCPR();
  void SetNumberEncoderCPR(double numberEncoderCPR);

  int32_t RegisterNumberPotTurnsCallback(HAL_NotifyCallback callback, void* param, HAL_Bool initialNotify);
  void CancelNumberPotTurnsCallback(int32_t uid);
  void InvokeNumberPotTurnsCallback(const HAL_Value* value);
  double GetNumberPotTurns();
  void SetNumberPotTurns(double numberPotTurns);

  int32_t Registerm_overrideLimitSwitchCallback(HAL_NotifyCallback callback, void* param, HAL_Bool initialNotify);
  void Cancelm_overrideLimitSwitchCallback(int32_t uid);
  void Invokem_overrideLimitSwitchCallback(const HAL_Value* value);
  double Getm_overrideLimitSwitch();
  void Setm_overrideLimitSwitch(double m_overrideLimitSwitch);

  int32_t Registerm_overrideBrakeTypeCallback(HAL_NotifyCallback callback, void* param, HAL_Bool initialNotify);
  void Cancelm_overrideBrakeTypeCallback(int32_t uid);
  void Invokem_overrideBrakeTypeCallback(const HAL_Value* value);
  double Getm_overrideBrakeType();
  void Setm_overrideBrakeType(double m_overrideBrakeType);

  int32_t Registerm_demandCallback(HAL_NotifyCallback callback, void* param, HAL_Bool initialNotify);
  void Cancelm_demandCallback(int32_t uid);
  void Invokem_demandCallback(const HAL_Value* value);
  double Getm_demand();
  void Setm_demand(double m_demand);

  int32_t Registerm_percentVBusValueCallback(HAL_NotifyCallback callback, void* param, HAL_Bool initialNotify);
  void Cancelm_percentVBusValueCallback(int32_t uid);
  void Invokem_percentVBusValueCallback(const HAL_Value* value);
  double Getm_percentVBusValue();
  void Setm_percentVBusValue(double m_percentVBusValue);

  int32_t Registerm_voltageCompensationRateCallback(HAL_NotifyCallback callback, void* param, HAL_Bool initialNotify);
  void Cancelm_voltageCompensationRateCallback(int32_t uid);
  void Invokem_voltageCompensationRateCallback(const HAL_Value* value);
  double Getm_voltageCompensationRate();
  void Setm_voltageCompensationRate(double m_voltageCompensationRate);

  virtual void ResetData();
 private:
  std::atomic<double> m_profileParamSlot0_P = 0.0;
  std::shared_ptr<UidVector<NotifyListener>> m_profileParamSlot0_PCallbacks = nullptr;
  std::atomic<double> m_profileParamSlot0_I = 0.0;
  std::shared_ptr<UidVector<NotifyListener>> m_profileParamSlot0_ICallbacks = nullptr;
  std::atomic<double> m_profileParamSlot0_D = 0.0;
  std::shared_ptr<UidVector<NotifyListener>> m_profileParamSlot0_DCallbacks = nullptr;
  std::atomic<double> m_profileParamSlot0_F = 0.0;
  std::shared_ptr<UidVector<NotifyListener>> m_profileParamSlot0_FCallbacks = nullptr;
  std::atomic<int32_t> m_profileParamSlot0_IZone = 0;
  std::shared_ptr<UidVector<NotifyListener>> m_profileParamSlot0_IZoneCallbacks = nullptr;
  std::atomic<int32_t> m_profileParamSlot0_CloseLoopRampRate = 0;
  std::shared_ptr<UidVector<NotifyListener>> m_profileParamSlot0_CloseLoopRampRateCallbacks = nullptr;
  std::atomic<double> m_profileParamSlot1_P = 0.0;
  std::shared_ptr<UidVector<NotifyListener>> m_profileParamSlot1_PCallbacks = nullptr;
  std::atomic<double> m_profileParamSlot1_I = 0.0;
  std::shared_ptr<UidVector<NotifyListener>> m_profileParamSlot1_ICallbacks = nullptr;
  std::atomic<double> m_profileParamSlot1_D = 0.0;
  std::shared_ptr<UidVector<NotifyListener>> m_profileParamSlot1_DCallbacks = nullptr;
  std::atomic<double> m_profileParamSlot1_F = 0.0;
  std::shared_ptr<UidVector<NotifyListener>> m_profileParamSlot1_FCallbacks = nullptr;
  std::atomic<int32_t> m_profileParamSlot1_IZone = 0;
  std::shared_ptr<UidVector<NotifyListener>> m_profileParamSlot1_IZoneCallbacks = nullptr;
  std::atomic<int32_t> m_profileParamSlot1_CloseLoopRampRate = 0;
  std::shared_ptr<UidVector<NotifyListener>> m_profileParamSlot1_CloseLoopRampRateCallbacks = nullptr;
  std::atomic<double> m_profileParamSoftLimitForThreshold = 0.0;
  std::shared_ptr<UidVector<NotifyListener>> m_profileParamSoftLimitForThresholdCallbacks = nullptr;
  std::atomic<double> m_profileParamSoftLimitRevThreshold = 0.0;
  std::shared_ptr<UidVector<NotifyListener>> m_profileParamSoftLimitRevThresholdCallbacks = nullptr;
  std::atomic<double> m_profileParamSoftLimitForEnable = 0.0;
  std::shared_ptr<UidVector<NotifyListener>> m_profileParamSoftLimitForEnableCallbacks = nullptr;
  std::atomic<double> m_profileParamSoftLimitRevEnable = 0.0;
  std::shared_ptr<UidVector<NotifyListener>> m_profileParamSoftLimitRevEnableCallbacks = nullptr;
  std::atomic<double> m_onBoot_BrakeMode = 0.0;
  std::shared_ptr<UidVector<NotifyListener>> m_onBoot_BrakeModeCallbacks = nullptr;
  std::atomic<double> m_onBoot_LimitSwitch_Forward_NormallyClosed = 0.0;
  std::shared_ptr<UidVector<NotifyListener>> m_onBoot_LimitSwitch_Forward_NormallyClosedCallbacks = nullptr;
  std::atomic<double> m_onBoot_LimitSwitch_Reverse_NormallyClosed = 0.0;
  std::shared_ptr<UidVector<NotifyListener>> m_onBoot_LimitSwitch_Reverse_NormallyClosedCallbacks = nullptr;
  std::atomic<double> m_onBoot_LimitSwitch_Forward_Disable = 0.0;
  std::shared_ptr<UidVector<NotifyListener>> m_onBoot_LimitSwitch_Forward_DisableCallbacks = nullptr;
  std::atomic<double> m_onBoot_LimitSwitch_Reverse_Disable = 0.0;
  std::shared_ptr<UidVector<NotifyListener>> m_onBoot_LimitSwitch_Reverse_DisableCallbacks = nullptr;
  std::atomic<double> m_fault_OverTemp = 0.0;
  std::shared_ptr<UidVector<NotifyListener>> m_fault_OverTempCallbacks = nullptr;
  std::atomic<double> m_fault_UnderVoltage = 0.0;
  std::shared_ptr<UidVector<NotifyListener>> m_fault_UnderVoltageCallbacks = nullptr;
  std::atomic<double> m_fault_ForLim = 0.0;
  std::shared_ptr<UidVector<NotifyListener>> m_fault_ForLimCallbacks = nullptr;
  std::atomic<double> m_fault_RevLim = 0.0;
  std::shared_ptr<UidVector<NotifyListener>> m_fault_RevLimCallbacks = nullptr;
  std::atomic<double> m_fault_HardwareFailure = 0.0;
  std::shared_ptr<UidVector<NotifyListener>> m_fault_HardwareFailureCallbacks = nullptr;
  std::atomic<double> m_fault_ForSoftLim = 0.0;
  std::shared_ptr<UidVector<NotifyListener>> m_fault_ForSoftLimCallbacks = nullptr;
  std::atomic<double> m_fault_RevSoftLim = 0.0;
  std::shared_ptr<UidVector<NotifyListener>> m_fault_RevSoftLimCallbacks = nullptr;
  std::atomic<double> m_stckyFault_OverTemp = 0.0;
  std::shared_ptr<UidVector<NotifyListener>> m_stckyFault_OverTempCallbacks = nullptr;
  std::atomic<double> m_stckyFault_UnderVoltage = 0.0;
  std::shared_ptr<UidVector<NotifyListener>> m_stckyFault_UnderVoltageCallbacks = nullptr;
  std::atomic<double> m_stckyFault_ForLim = 0.0;
  std::shared_ptr<UidVector<NotifyListener>> m_stckyFault_ForLimCallbacks = nullptr;
  std::atomic<double> m_stckyFault_RevLim = 0.0;
  std::shared_ptr<UidVector<NotifyListener>> m_stckyFault_RevLimCallbacks = nullptr;
  std::atomic<double> m_stckyFault_ForSoftLim = 0.0;
  std::shared_ptr<UidVector<NotifyListener>> m_stckyFault_ForSoftLimCallbacks = nullptr;
  std::atomic<double> m_stckyFault_RevSoftLim = 0.0;
  std::shared_ptr<UidVector<NotifyListener>> m_stckyFault_RevSoftLimCallbacks = nullptr;
  std::atomic<double> m_appliedThrottle = 0.0;
  std::shared_ptr<UidVector<NotifyListener>> m_appliedThrottleCallbacks = nullptr;
  std::atomic<double> m_closeLoopErr = 0.0;
  std::shared_ptr<UidVector<NotifyListener>> m_closeLoopErrCallbacks = nullptr;
  std::atomic<double> m_feedbackDeviceSelect = 0.0;
  std::shared_ptr<UidVector<NotifyListener>> m_feedbackDeviceSelectCallbacks = nullptr;
  std::atomic<HAL_Bool> m_revMotDuringCloseLoopEn = false;
  std::shared_ptr<UidVector<NotifyListener>> m_revMotDuringCloseLoopEnCallbacks = nullptr;
  std::atomic<double> m_modeSelect = 0.0;
  std::shared_ptr<UidVector<NotifyListener>> m_modeSelectCallbacks = nullptr;
  std::atomic<double> m_profileSlotSelect = 0.0;
  std::shared_ptr<UidVector<NotifyListener>> m_profileSlotSelectCallbacks = nullptr;
  std::atomic<double> m_rampThrottle = 0.0;
  std::shared_ptr<UidVector<NotifyListener>> m_rampThrottleCallbacks = nullptr;
  std::atomic<HAL_Bool> m_revFeedbackSensor = false;
  std::shared_ptr<UidVector<NotifyListener>> m_revFeedbackSensorCallbacks = nullptr;
  std::atomic<double> m_limitSwitchEn = 0.0;
  std::shared_ptr<UidVector<NotifyListener>> m_limitSwitchEnCallbacks = nullptr;
  std::atomic<HAL_Bool> m_limitSwitchClosedFor = false;
  std::shared_ptr<UidVector<NotifyListener>> m_limitSwitchClosedForCallbacks = nullptr;
  std::atomic<HAL_Bool> m_limitSwitchClosedRev = false;
  std::shared_ptr<UidVector<NotifyListener>> m_limitSwitchClosedRevCallbacks = nullptr;
  std::atomic<double> m_sensorPosition = 0.0;
  std::shared_ptr<UidVector<NotifyListener>> m_sensorPositionCallbacks = nullptr;
  std::atomic<double> m_sensorVelocity = 0.0;
  std::shared_ptr<UidVector<NotifyListener>> m_sensorVelocityCallbacks = nullptr;
  std::atomic<double> m_current = 0.0;
  std::shared_ptr<UidVector<NotifyListener>> m_currentCallbacks = nullptr;
  std::atomic<HAL_Bool> m_brakeIsEnabled = false;
  std::shared_ptr<UidVector<NotifyListener>> m_brakeIsEnabledCallbacks = nullptr;
  std::atomic<double> m_encPosition = 0.0;
  std::shared_ptr<UidVector<NotifyListener>> m_encPositionCallbacks = nullptr;
  std::atomic<double> m_encVel = 0.0;
  std::shared_ptr<UidVector<NotifyListener>> m_encVelCallbacks = nullptr;
  std::atomic<double> m_encIndexRiseEvents = 0.0;
  std::shared_ptr<UidVector<NotifyListener>> m_encIndexRiseEventsCallbacks = nullptr;
  std::atomic<double> m_quadApin = 0.0;
  std::shared_ptr<UidVector<NotifyListener>> m_quadApinCallbacks = nullptr;
  std::atomic<double> m_quadBpin = 0.0;
  std::shared_ptr<UidVector<NotifyListener>> m_quadBpinCallbacks = nullptr;
  std::atomic<double> m_quadIdxpin = 0.0;
  std::shared_ptr<UidVector<NotifyListener>> m_quadIdxpinCallbacks = nullptr;
  std::atomic<double> m_analogInWithOv = 0.0;
  std::shared_ptr<UidVector<NotifyListener>> m_analogInWithOvCallbacks = nullptr;
  std::atomic<double> m_analogInVel = 0.0;
  std::shared_ptr<UidVector<NotifyListener>> m_analogInVelCallbacks = nullptr;
  std::atomic<double> m_temp = 0.0;
  std::shared_ptr<UidVector<NotifyListener>> m_tempCallbacks = nullptr;
  std::atomic<double> m_batteryV = 0.0;
  std::shared_ptr<UidVector<NotifyListener>> m_batteryVCallbacks = nullptr;
  std::atomic<double> m_resetCount = 0.0;
  std::shared_ptr<UidVector<NotifyListener>> m_resetCountCallbacks = nullptr;
  std::atomic<double> m_resetFlags = 0.0;
  std::shared_ptr<UidVector<NotifyListener>> m_resetFlagsCallbacks = nullptr;
  std::atomic<double> m_firmVers = 0.0;
  std::shared_ptr<UidVector<NotifyListener>> m_firmVersCallbacks = nullptr;
  std::atomic<double> m_settingsChanged = 0.0;
  std::shared_ptr<UidVector<NotifyListener>> m_settingsChangedCallbacks = nullptr;
  std::atomic<double> m_quadFilterEn = 0.0;
  std::shared_ptr<UidVector<NotifyListener>> m_quadFilterEnCallbacks = nullptr;
  std::atomic<double> m_pidIaccum = 0.0;
  std::shared_ptr<UidVector<NotifyListener>> m_pidIaccumCallbacks = nullptr;
  std::atomic<double> m_ainPosition = 0.0;
  std::shared_ptr<UidVector<NotifyListener>> m_ainPositionCallbacks = nullptr;
  std::atomic<double> m_profileParamSlot0_AllowableClosedLoopErr = 0.0;
  std::shared_ptr<UidVector<NotifyListener>> m_profileParamSlot0_AllowableClosedLoopErrCallbacks = nullptr;
  std::atomic<double> m_profileParamSlot1_AllowableClosedLoopErr = 0.0;
  std::shared_ptr<UidVector<NotifyListener>> m_profileParamSlot1_AllowableClosedLoopErrCallbacks = nullptr;
  std::atomic<double> m_numberEncoderCPR = 0.0;
  std::shared_ptr<UidVector<NotifyListener>> m_numberEncoderCPRCallbacks = nullptr;
  std::atomic<double> m_numberPotTurns = 0.0;
  std::shared_ptr<UidVector<NotifyListener>> m_numberPotTurnsCallbacks = nullptr;
  std::atomic<double> m_m_overrideLimitSwitch = 0.0;
  std::shared_ptr<UidVector<NotifyListener>> m_m_overrideLimitSwitchCallbacks = nullptr;
  std::atomic<double> m_m_overrideBrakeType = 0.0;
  std::shared_ptr<UidVector<NotifyListener>> m_m_overrideBrakeTypeCallbacks = nullptr;
  std::atomic<double> m_m_demand = 0.0;
  std::shared_ptr<UidVector<NotifyListener>> m_m_demandCallbacks = nullptr;
  std::atomic<double> m_m_percentVBusValue = 0.0;
  std::shared_ptr<UidVector<NotifyListener>> m_m_percentVBusValueCallbacks = nullptr;
  std::atomic<double> m_m_voltageCompensationRate = 0.0;
  std::shared_ptr<UidVector<NotifyListener>> m_m_voltageCompensationRateCallbacks = nullptr;
};
extern std::unique_ptr<std::shared_ptr<CanTalonData>[]> SimCanTalonData;
}
