#pragma once

#include "HAL/HAL.h"
#include "NotifyListener.h"

#ifdef __cplusplus
extern "C" {
#endif

void HALSIM_ResetCanTalonData(int32_t index);
int32_t HALSIM_RegisterCanTalonProfileParamSlot0_PCallback(int32_t index, HAL_NotifyCallback callback, void* param, HAL_Bool initialNotify);
void HALSIM_CancelCanTalonProfileParamSlot0_PCallback(int32_t index, int32_t uid);
double HALSIM_GetCanTalonProfileParamSlot0_P(int32_t index);
void HALSIM_SetCanTalonProfileParamSlot0_P(int32_t index, double profileParamSlot0_P);

int32_t HALSIM_RegisterCanTalonProfileParamSlot0_ICallback(int32_t index, HAL_NotifyCallback callback, void* param, HAL_Bool initialNotify);
void HALSIM_CancelCanTalonProfileParamSlot0_ICallback(int32_t index, int32_t uid);
double HALSIM_GetCanTalonProfileParamSlot0_I(int32_t index);
void HALSIM_SetCanTalonProfileParamSlot0_I(int32_t index, double profileParamSlot0_I);

int32_t HALSIM_RegisterCanTalonProfileParamSlot0_DCallback(int32_t index, HAL_NotifyCallback callback, void* param, HAL_Bool initialNotify);
void HALSIM_CancelCanTalonProfileParamSlot0_DCallback(int32_t index, int32_t uid);
double HALSIM_GetCanTalonProfileParamSlot0_D(int32_t index);
void HALSIM_SetCanTalonProfileParamSlot0_D(int32_t index, double profileParamSlot0_D);

int32_t HALSIM_RegisterCanTalonProfileParamSlot0_FCallback(int32_t index, HAL_NotifyCallback callback, void* param, HAL_Bool initialNotify);
void HALSIM_CancelCanTalonProfileParamSlot0_FCallback(int32_t index, int32_t uid);
double HALSIM_GetCanTalonProfileParamSlot0_F(int32_t index);
void HALSIM_SetCanTalonProfileParamSlot0_F(int32_t index, double profileParamSlot0_F);

int32_t HALSIM_RegisterCanTalonProfileParamSlot0_IZoneCallback(int32_t index, HAL_NotifyCallback callback, void* param, HAL_Bool initialNotify);
void HALSIM_CancelCanTalonProfileParamSlot0_IZoneCallback(int32_t index, int32_t uid);
int32_t HALSIM_GetCanTalonProfileParamSlot0_IZone(int32_t index);
void HALSIM_SetCanTalonProfileParamSlot0_IZone(int32_t index, int32_t profileParamSlot0_IZone);

int32_t HALSIM_RegisterCanTalonProfileParamSlot0_CloseLoopRampRateCallback(int32_t index, HAL_NotifyCallback callback, void* param, HAL_Bool initialNotify);
void HALSIM_CancelCanTalonProfileParamSlot0_CloseLoopRampRateCallback(int32_t index, int32_t uid);
int32_t HALSIM_GetCanTalonProfileParamSlot0_CloseLoopRampRate(int32_t index);
void HALSIM_SetCanTalonProfileParamSlot0_CloseLoopRampRate(int32_t index, int32_t profileParamSlot0_CloseLoopRampRate);

int32_t HALSIM_RegisterCanTalonProfileParamSlot1_PCallback(int32_t index, HAL_NotifyCallback callback, void* param, HAL_Bool initialNotify);
void HALSIM_CancelCanTalonProfileParamSlot1_PCallback(int32_t index, int32_t uid);
double HALSIM_GetCanTalonProfileParamSlot1_P(int32_t index);
void HALSIM_SetCanTalonProfileParamSlot1_P(int32_t index, double profileParamSlot1_P);

int32_t HALSIM_RegisterCanTalonProfileParamSlot1_ICallback(int32_t index, HAL_NotifyCallback callback, void* param, HAL_Bool initialNotify);
void HALSIM_CancelCanTalonProfileParamSlot1_ICallback(int32_t index, int32_t uid);
double HALSIM_GetCanTalonProfileParamSlot1_I(int32_t index);
void HALSIM_SetCanTalonProfileParamSlot1_I(int32_t index, double profileParamSlot1_I);

int32_t HALSIM_RegisterCanTalonProfileParamSlot1_DCallback(int32_t index, HAL_NotifyCallback callback, void* param, HAL_Bool initialNotify);
void HALSIM_CancelCanTalonProfileParamSlot1_DCallback(int32_t index, int32_t uid);
double HALSIM_GetCanTalonProfileParamSlot1_D(int32_t index);
void HALSIM_SetCanTalonProfileParamSlot1_D(int32_t index, double profileParamSlot1_D);

int32_t HALSIM_RegisterCanTalonProfileParamSlot1_FCallback(int32_t index, HAL_NotifyCallback callback, void* param, HAL_Bool initialNotify);
void HALSIM_CancelCanTalonProfileParamSlot1_FCallback(int32_t index, int32_t uid);
double HALSIM_GetCanTalonProfileParamSlot1_F(int32_t index);
void HALSIM_SetCanTalonProfileParamSlot1_F(int32_t index, double profileParamSlot1_F);

int32_t HALSIM_RegisterCanTalonProfileParamSlot1_IZoneCallback(int32_t index, HAL_NotifyCallback callback, void* param, HAL_Bool initialNotify);
void HALSIM_CancelCanTalonProfileParamSlot1_IZoneCallback(int32_t index, int32_t uid);
int32_t HALSIM_GetCanTalonProfileParamSlot1_IZone(int32_t index);
void HALSIM_SetCanTalonProfileParamSlot1_IZone(int32_t index, int32_t profileParamSlot1_IZone);

int32_t HALSIM_RegisterCanTalonProfileParamSlot1_CloseLoopRampRateCallback(int32_t index, HAL_NotifyCallback callback, void* param, HAL_Bool initialNotify);
void HALSIM_CancelCanTalonProfileParamSlot1_CloseLoopRampRateCallback(int32_t index, int32_t uid);
int32_t HALSIM_GetCanTalonProfileParamSlot1_CloseLoopRampRate(int32_t index);
void HALSIM_SetCanTalonProfileParamSlot1_CloseLoopRampRate(int32_t index, int32_t profileParamSlot1_CloseLoopRampRate);

int32_t HALSIM_RegisterCanTalonProfileParamSoftLimitForThresholdCallback(int32_t index, HAL_NotifyCallback callback, void* param, HAL_Bool initialNotify);
void HALSIM_CancelCanTalonProfileParamSoftLimitForThresholdCallback(int32_t index, int32_t uid);
double HALSIM_GetCanTalonProfileParamSoftLimitForThreshold(int32_t index);
void HALSIM_SetCanTalonProfileParamSoftLimitForThreshold(int32_t index, double profileParamSoftLimitForThreshold);

int32_t HALSIM_RegisterCanTalonProfileParamSoftLimitRevThresholdCallback(int32_t index, HAL_NotifyCallback callback, void* param, HAL_Bool initialNotify);
void HALSIM_CancelCanTalonProfileParamSoftLimitRevThresholdCallback(int32_t index, int32_t uid);
double HALSIM_GetCanTalonProfileParamSoftLimitRevThreshold(int32_t index);
void HALSIM_SetCanTalonProfileParamSoftLimitRevThreshold(int32_t index, double profileParamSoftLimitRevThreshold);

int32_t HALSIM_RegisterCanTalonProfileParamSoftLimitForEnableCallback(int32_t index, HAL_NotifyCallback callback, void* param, HAL_Bool initialNotify);
void HALSIM_CancelCanTalonProfileParamSoftLimitForEnableCallback(int32_t index, int32_t uid);
double HALSIM_GetCanTalonProfileParamSoftLimitForEnable(int32_t index);
void HALSIM_SetCanTalonProfileParamSoftLimitForEnable(int32_t index, double profileParamSoftLimitForEnable);

int32_t HALSIM_RegisterCanTalonProfileParamSoftLimitRevEnableCallback(int32_t index, HAL_NotifyCallback callback, void* param, HAL_Bool initialNotify);
void HALSIM_CancelCanTalonProfileParamSoftLimitRevEnableCallback(int32_t index, int32_t uid);
double HALSIM_GetCanTalonProfileParamSoftLimitRevEnable(int32_t index);
void HALSIM_SetCanTalonProfileParamSoftLimitRevEnable(int32_t index, double profileParamSoftLimitRevEnable);

int32_t HALSIM_RegisterCanTalonOnBoot_BrakeModeCallback(int32_t index, HAL_NotifyCallback callback, void* param, HAL_Bool initialNotify);
void HALSIM_CancelCanTalonOnBoot_BrakeModeCallback(int32_t index, int32_t uid);
double HALSIM_GetCanTalonOnBoot_BrakeMode(int32_t index);
void HALSIM_SetCanTalonOnBoot_BrakeMode(int32_t index, double onBoot_BrakeMode);

int32_t HALSIM_RegisterCanTalonOnBoot_LimitSwitch_Forward_NormallyClosedCallback(int32_t index, HAL_NotifyCallback callback, void* param, HAL_Bool initialNotify);
void HALSIM_CancelCanTalonOnBoot_LimitSwitch_Forward_NormallyClosedCallback(int32_t index, int32_t uid);
double HALSIM_GetCanTalonOnBoot_LimitSwitch_Forward_NormallyClosed(int32_t index);
void HALSIM_SetCanTalonOnBoot_LimitSwitch_Forward_NormallyClosed(int32_t index, double onBoot_LimitSwitch_Forward_NormallyClosed);

int32_t HALSIM_RegisterCanTalonOnBoot_LimitSwitch_Reverse_NormallyClosedCallback(int32_t index, HAL_NotifyCallback callback, void* param, HAL_Bool initialNotify);
void HALSIM_CancelCanTalonOnBoot_LimitSwitch_Reverse_NormallyClosedCallback(int32_t index, int32_t uid);
double HALSIM_GetCanTalonOnBoot_LimitSwitch_Reverse_NormallyClosed(int32_t index);
void HALSIM_SetCanTalonOnBoot_LimitSwitch_Reverse_NormallyClosed(int32_t index, double onBoot_LimitSwitch_Reverse_NormallyClosed);

int32_t HALSIM_RegisterCanTalonOnBoot_LimitSwitch_Forward_DisableCallback(int32_t index, HAL_NotifyCallback callback, void* param, HAL_Bool initialNotify);
void HALSIM_CancelCanTalonOnBoot_LimitSwitch_Forward_DisableCallback(int32_t index, int32_t uid);
double HALSIM_GetCanTalonOnBoot_LimitSwitch_Forward_Disable(int32_t index);
void HALSIM_SetCanTalonOnBoot_LimitSwitch_Forward_Disable(int32_t index, double onBoot_LimitSwitch_Forward_Disable);

int32_t HALSIM_RegisterCanTalonOnBoot_LimitSwitch_Reverse_DisableCallback(int32_t index, HAL_NotifyCallback callback, void* param, HAL_Bool initialNotify);
void HALSIM_CancelCanTalonOnBoot_LimitSwitch_Reverse_DisableCallback(int32_t index, int32_t uid);
double HALSIM_GetCanTalonOnBoot_LimitSwitch_Reverse_Disable(int32_t index);
void HALSIM_SetCanTalonOnBoot_LimitSwitch_Reverse_Disable(int32_t index, double onBoot_LimitSwitch_Reverse_Disable);

int32_t HALSIM_RegisterCanTalonFault_OverTempCallback(int32_t index, HAL_NotifyCallback callback, void* param, HAL_Bool initialNotify);
void HALSIM_CancelCanTalonFault_OverTempCallback(int32_t index, int32_t uid);
double HALSIM_GetCanTalonFault_OverTemp(int32_t index);
void HALSIM_SetCanTalonFault_OverTemp(int32_t index, double fault_OverTemp);

int32_t HALSIM_RegisterCanTalonFault_UnderVoltageCallback(int32_t index, HAL_NotifyCallback callback, void* param, HAL_Bool initialNotify);
void HALSIM_CancelCanTalonFault_UnderVoltageCallback(int32_t index, int32_t uid);
double HALSIM_GetCanTalonFault_UnderVoltage(int32_t index);
void HALSIM_SetCanTalonFault_UnderVoltage(int32_t index, double fault_UnderVoltage);

int32_t HALSIM_RegisterCanTalonFault_ForLimCallback(int32_t index, HAL_NotifyCallback callback, void* param, HAL_Bool initialNotify);
void HALSIM_CancelCanTalonFault_ForLimCallback(int32_t index, int32_t uid);
double HALSIM_GetCanTalonFault_ForLim(int32_t index);
void HALSIM_SetCanTalonFault_ForLim(int32_t index, double fault_ForLim);

int32_t HALSIM_RegisterCanTalonFault_RevLimCallback(int32_t index, HAL_NotifyCallback callback, void* param, HAL_Bool initialNotify);
void HALSIM_CancelCanTalonFault_RevLimCallback(int32_t index, int32_t uid);
double HALSIM_GetCanTalonFault_RevLim(int32_t index);
void HALSIM_SetCanTalonFault_RevLim(int32_t index, double fault_RevLim);

int32_t HALSIM_RegisterCanTalonFault_HardwareFailureCallback(int32_t index, HAL_NotifyCallback callback, void* param, HAL_Bool initialNotify);
void HALSIM_CancelCanTalonFault_HardwareFailureCallback(int32_t index, int32_t uid);
double HALSIM_GetCanTalonFault_HardwareFailure(int32_t index);
void HALSIM_SetCanTalonFault_HardwareFailure(int32_t index, double fault_HardwareFailure);

int32_t HALSIM_RegisterCanTalonFault_ForSoftLimCallback(int32_t index, HAL_NotifyCallback callback, void* param, HAL_Bool initialNotify);
void HALSIM_CancelCanTalonFault_ForSoftLimCallback(int32_t index, int32_t uid);
double HALSIM_GetCanTalonFault_ForSoftLim(int32_t index);
void HALSIM_SetCanTalonFault_ForSoftLim(int32_t index, double fault_ForSoftLim);

int32_t HALSIM_RegisterCanTalonFault_RevSoftLimCallback(int32_t index, HAL_NotifyCallback callback, void* param, HAL_Bool initialNotify);
void HALSIM_CancelCanTalonFault_RevSoftLimCallback(int32_t index, int32_t uid);
double HALSIM_GetCanTalonFault_RevSoftLim(int32_t index);
void HALSIM_SetCanTalonFault_RevSoftLim(int32_t index, double fault_RevSoftLim);

int32_t HALSIM_RegisterCanTalonStckyFault_OverTempCallback(int32_t index, HAL_NotifyCallback callback, void* param, HAL_Bool initialNotify);
void HALSIM_CancelCanTalonStckyFault_OverTempCallback(int32_t index, int32_t uid);
double HALSIM_GetCanTalonStckyFault_OverTemp(int32_t index);
void HALSIM_SetCanTalonStckyFault_OverTemp(int32_t index, double stckyFault_OverTemp);

int32_t HALSIM_RegisterCanTalonStckyFault_UnderVoltageCallback(int32_t index, HAL_NotifyCallback callback, void* param, HAL_Bool initialNotify);
void HALSIM_CancelCanTalonStckyFault_UnderVoltageCallback(int32_t index, int32_t uid);
double HALSIM_GetCanTalonStckyFault_UnderVoltage(int32_t index);
void HALSIM_SetCanTalonStckyFault_UnderVoltage(int32_t index, double stckyFault_UnderVoltage);

int32_t HALSIM_RegisterCanTalonStckyFault_ForLimCallback(int32_t index, HAL_NotifyCallback callback, void* param, HAL_Bool initialNotify);
void HALSIM_CancelCanTalonStckyFault_ForLimCallback(int32_t index, int32_t uid);
double HALSIM_GetCanTalonStckyFault_ForLim(int32_t index);
void HALSIM_SetCanTalonStckyFault_ForLim(int32_t index, double stckyFault_ForLim);

int32_t HALSIM_RegisterCanTalonStckyFault_RevLimCallback(int32_t index, HAL_NotifyCallback callback, void* param, HAL_Bool initialNotify);
void HALSIM_CancelCanTalonStckyFault_RevLimCallback(int32_t index, int32_t uid);
double HALSIM_GetCanTalonStckyFault_RevLim(int32_t index);
void HALSIM_SetCanTalonStckyFault_RevLim(int32_t index, double stckyFault_RevLim);

int32_t HALSIM_RegisterCanTalonStckyFault_ForSoftLimCallback(int32_t index, HAL_NotifyCallback callback, void* param, HAL_Bool initialNotify);
void HALSIM_CancelCanTalonStckyFault_ForSoftLimCallback(int32_t index, int32_t uid);
double HALSIM_GetCanTalonStckyFault_ForSoftLim(int32_t index);
void HALSIM_SetCanTalonStckyFault_ForSoftLim(int32_t index, double stckyFault_ForSoftLim);

int32_t HALSIM_RegisterCanTalonStckyFault_RevSoftLimCallback(int32_t index, HAL_NotifyCallback callback, void* param, HAL_Bool initialNotify);
void HALSIM_CancelCanTalonStckyFault_RevSoftLimCallback(int32_t index, int32_t uid);
double HALSIM_GetCanTalonStckyFault_RevSoftLim(int32_t index);
void HALSIM_SetCanTalonStckyFault_RevSoftLim(int32_t index, double stckyFault_RevSoftLim);

int32_t HALSIM_RegisterCanTalonAppliedThrottleCallback(int32_t index, HAL_NotifyCallback callback, void* param, HAL_Bool initialNotify);
void HALSIM_CancelCanTalonAppliedThrottleCallback(int32_t index, int32_t uid);
double HALSIM_GetCanTalonAppliedThrottle(int32_t index);
void HALSIM_SetCanTalonAppliedThrottle(int32_t index, double appliedThrottle);

int32_t HALSIM_RegisterCanTalonCloseLoopErrCallback(int32_t index, HAL_NotifyCallback callback, void* param, HAL_Bool initialNotify);
void HALSIM_CancelCanTalonCloseLoopErrCallback(int32_t index, int32_t uid);
double HALSIM_GetCanTalonCloseLoopErr(int32_t index);
void HALSIM_SetCanTalonCloseLoopErr(int32_t index, double closeLoopErr);

int32_t HALSIM_RegisterCanTalonFeedbackDeviceSelectCallback(int32_t index, HAL_NotifyCallback callback, void* param, HAL_Bool initialNotify);
void HALSIM_CancelCanTalonFeedbackDeviceSelectCallback(int32_t index, int32_t uid);
double HALSIM_GetCanTalonFeedbackDeviceSelect(int32_t index);
void HALSIM_SetCanTalonFeedbackDeviceSelect(int32_t index, double feedbackDeviceSelect);

int32_t HALSIM_RegisterCanTalonRevMotDuringCloseLoopEnCallback(int32_t index, HAL_NotifyCallback callback, void* param, HAL_Bool initialNotify);
void HALSIM_CancelCanTalonRevMotDuringCloseLoopEnCallback(int32_t index, int32_t uid);
HAL_Bool HALSIM_GetCanTalonRevMotDuringCloseLoopEn(int32_t index);
void HALSIM_SetCanTalonRevMotDuringCloseLoopEn(int32_t index, HAL_Bool revMotDuringCloseLoopEn);

int32_t HALSIM_RegisterCanTalonModeSelectCallback(int32_t index, HAL_NotifyCallback callback, void* param, HAL_Bool initialNotify);
void HALSIM_CancelCanTalonModeSelectCallback(int32_t index, int32_t uid);
double HALSIM_GetCanTalonModeSelect(int32_t index);
void HALSIM_SetCanTalonModeSelect(int32_t index, double modeSelect);

int32_t HALSIM_RegisterCanTalonProfileSlotSelectCallback(int32_t index, HAL_NotifyCallback callback, void* param, HAL_Bool initialNotify);
void HALSIM_CancelCanTalonProfileSlotSelectCallback(int32_t index, int32_t uid);
double HALSIM_GetCanTalonProfileSlotSelect(int32_t index);
void HALSIM_SetCanTalonProfileSlotSelect(int32_t index, double profileSlotSelect);

int32_t HALSIM_RegisterCanTalonRampThrottleCallback(int32_t index, HAL_NotifyCallback callback, void* param, HAL_Bool initialNotify);
void HALSIM_CancelCanTalonRampThrottleCallback(int32_t index, int32_t uid);
double HALSIM_GetCanTalonRampThrottle(int32_t index);
void HALSIM_SetCanTalonRampThrottle(int32_t index, double rampThrottle);

int32_t HALSIM_RegisterCanTalonRevFeedbackSensorCallback(int32_t index, HAL_NotifyCallback callback, void* param, HAL_Bool initialNotify);
void HALSIM_CancelCanTalonRevFeedbackSensorCallback(int32_t index, int32_t uid);
HAL_Bool HALSIM_GetCanTalonRevFeedbackSensor(int32_t index);
void HALSIM_SetCanTalonRevFeedbackSensor(int32_t index, HAL_Bool revFeedbackSensor);

int32_t HALSIM_RegisterCanTalonLimitSwitchEnCallback(int32_t index, HAL_NotifyCallback callback, void* param, HAL_Bool initialNotify);
void HALSIM_CancelCanTalonLimitSwitchEnCallback(int32_t index, int32_t uid);
double HALSIM_GetCanTalonLimitSwitchEn(int32_t index);
void HALSIM_SetCanTalonLimitSwitchEn(int32_t index, double limitSwitchEn);

int32_t HALSIM_RegisterCanTalonLimitSwitchClosedForCallback(int32_t index, HAL_NotifyCallback callback, void* param, HAL_Bool initialNotify);
void HALSIM_CancelCanTalonLimitSwitchClosedForCallback(int32_t index, int32_t uid);
HAL_Bool HALSIM_GetCanTalonLimitSwitchClosedFor(int32_t index);
void HALSIM_SetCanTalonLimitSwitchClosedFor(int32_t index, HAL_Bool limitSwitchClosedFor);

int32_t HALSIM_RegisterCanTalonLimitSwitchClosedRevCallback(int32_t index, HAL_NotifyCallback callback, void* param, HAL_Bool initialNotify);
void HALSIM_CancelCanTalonLimitSwitchClosedRevCallback(int32_t index, int32_t uid);
HAL_Bool HALSIM_GetCanTalonLimitSwitchClosedRev(int32_t index);
void HALSIM_SetCanTalonLimitSwitchClosedRev(int32_t index, HAL_Bool limitSwitchClosedRev);

int32_t HALSIM_RegisterCanTalonSensorPositionCallback(int32_t index, HAL_NotifyCallback callback, void* param, HAL_Bool initialNotify);
void HALSIM_CancelCanTalonSensorPositionCallback(int32_t index, int32_t uid);
double HALSIM_GetCanTalonSensorPosition(int32_t index);
void HALSIM_SetCanTalonSensorPosition(int32_t index, double sensorPosition);

int32_t HALSIM_RegisterCanTalonSensorVelocityCallback(int32_t index, HAL_NotifyCallback callback, void* param, HAL_Bool initialNotify);
void HALSIM_CancelCanTalonSensorVelocityCallback(int32_t index, int32_t uid);
double HALSIM_GetCanTalonSensorVelocity(int32_t index);
void HALSIM_SetCanTalonSensorVelocity(int32_t index, double sensorVelocity);

int32_t HALSIM_RegisterCanTalonCurrentCallback(int32_t index, HAL_NotifyCallback callback, void* param, HAL_Bool initialNotify);
void HALSIM_CancelCanTalonCurrentCallback(int32_t index, int32_t uid);
double HALSIM_GetCanTalonCurrent(int32_t index);
void HALSIM_SetCanTalonCurrent(int32_t index, double current);

int32_t HALSIM_RegisterCanTalonBrakeIsEnabledCallback(int32_t index, HAL_NotifyCallback callback, void* param, HAL_Bool initialNotify);
void HALSIM_CancelCanTalonBrakeIsEnabledCallback(int32_t index, int32_t uid);
HAL_Bool HALSIM_GetCanTalonBrakeIsEnabled(int32_t index);
void HALSIM_SetCanTalonBrakeIsEnabled(int32_t index, HAL_Bool brakeIsEnabled);

int32_t HALSIM_RegisterCanTalonEncPositionCallback(int32_t index, HAL_NotifyCallback callback, void* param, HAL_Bool initialNotify);
void HALSIM_CancelCanTalonEncPositionCallback(int32_t index, int32_t uid);
double HALSIM_GetCanTalonEncPosition(int32_t index);
void HALSIM_SetCanTalonEncPosition(int32_t index, double encPosition);

int32_t HALSIM_RegisterCanTalonEncVelCallback(int32_t index, HAL_NotifyCallback callback, void* param, HAL_Bool initialNotify);
void HALSIM_CancelCanTalonEncVelCallback(int32_t index, int32_t uid);
double HALSIM_GetCanTalonEncVel(int32_t index);
void HALSIM_SetCanTalonEncVel(int32_t index, double encVel);

int32_t HALSIM_RegisterCanTalonEncIndexRiseEventsCallback(int32_t index, HAL_NotifyCallback callback, void* param, HAL_Bool initialNotify);
void HALSIM_CancelCanTalonEncIndexRiseEventsCallback(int32_t index, int32_t uid);
double HALSIM_GetCanTalonEncIndexRiseEvents(int32_t index);
void HALSIM_SetCanTalonEncIndexRiseEvents(int32_t index, double encIndexRiseEvents);

int32_t HALSIM_RegisterCanTalonQuadApinCallback(int32_t index, HAL_NotifyCallback callback, void* param, HAL_Bool initialNotify);
void HALSIM_CancelCanTalonQuadApinCallback(int32_t index, int32_t uid);
double HALSIM_GetCanTalonQuadApin(int32_t index);
void HALSIM_SetCanTalonQuadApin(int32_t index, double quadApin);

int32_t HALSIM_RegisterCanTalonQuadBpinCallback(int32_t index, HAL_NotifyCallback callback, void* param, HAL_Bool initialNotify);
void HALSIM_CancelCanTalonQuadBpinCallback(int32_t index, int32_t uid);
double HALSIM_GetCanTalonQuadBpin(int32_t index);
void HALSIM_SetCanTalonQuadBpin(int32_t index, double quadBpin);

int32_t HALSIM_RegisterCanTalonQuadIdxpinCallback(int32_t index, HAL_NotifyCallback callback, void* param, HAL_Bool initialNotify);
void HALSIM_CancelCanTalonQuadIdxpinCallback(int32_t index, int32_t uid);
double HALSIM_GetCanTalonQuadIdxpin(int32_t index);
void HALSIM_SetCanTalonQuadIdxpin(int32_t index, double quadIdxpin);

int32_t HALSIM_RegisterCanTalonAnalogInWithOvCallback(int32_t index, HAL_NotifyCallback callback, void* param, HAL_Bool initialNotify);
void HALSIM_CancelCanTalonAnalogInWithOvCallback(int32_t index, int32_t uid);
double HALSIM_GetCanTalonAnalogInWithOv(int32_t index);
void HALSIM_SetCanTalonAnalogInWithOv(int32_t index, double analogInWithOv);

int32_t HALSIM_RegisterCanTalonAnalogInVelCallback(int32_t index, HAL_NotifyCallback callback, void* param, HAL_Bool initialNotify);
void HALSIM_CancelCanTalonAnalogInVelCallback(int32_t index, int32_t uid);
double HALSIM_GetCanTalonAnalogInVel(int32_t index);
void HALSIM_SetCanTalonAnalogInVel(int32_t index, double analogInVel);

int32_t HALSIM_RegisterCanTalonTempCallback(int32_t index, HAL_NotifyCallback callback, void* param, HAL_Bool initialNotify);
void HALSIM_CancelCanTalonTempCallback(int32_t index, int32_t uid);
double HALSIM_GetCanTalonTemp(int32_t index);
void HALSIM_SetCanTalonTemp(int32_t index, double temp);

int32_t HALSIM_RegisterCanTalonBatteryVCallback(int32_t index, HAL_NotifyCallback callback, void* param, HAL_Bool initialNotify);
void HALSIM_CancelCanTalonBatteryVCallback(int32_t index, int32_t uid);
double HALSIM_GetCanTalonBatteryV(int32_t index);
void HALSIM_SetCanTalonBatteryV(int32_t index, double batteryV);

int32_t HALSIM_RegisterCanTalonResetCountCallback(int32_t index, HAL_NotifyCallback callback, void* param, HAL_Bool initialNotify);
void HALSIM_CancelCanTalonResetCountCallback(int32_t index, int32_t uid);
double HALSIM_GetCanTalonResetCount(int32_t index);
void HALSIM_SetCanTalonResetCount(int32_t index, double resetCount);

int32_t HALSIM_RegisterCanTalonResetFlagsCallback(int32_t index, HAL_NotifyCallback callback, void* param, HAL_Bool initialNotify);
void HALSIM_CancelCanTalonResetFlagsCallback(int32_t index, int32_t uid);
double HALSIM_GetCanTalonResetFlags(int32_t index);
void HALSIM_SetCanTalonResetFlags(int32_t index, double resetFlags);

int32_t HALSIM_RegisterCanTalonFirmVersCallback(int32_t index, HAL_NotifyCallback callback, void* param, HAL_Bool initialNotify);
void HALSIM_CancelCanTalonFirmVersCallback(int32_t index, int32_t uid);
double HALSIM_GetCanTalonFirmVers(int32_t index);
void HALSIM_SetCanTalonFirmVers(int32_t index, double firmVers);

int32_t HALSIM_RegisterCanTalonSettingsChangedCallback(int32_t index, HAL_NotifyCallback callback, void* param, HAL_Bool initialNotify);
void HALSIM_CancelCanTalonSettingsChangedCallback(int32_t index, int32_t uid);
double HALSIM_GetCanTalonSettingsChanged(int32_t index);
void HALSIM_SetCanTalonSettingsChanged(int32_t index, double settingsChanged);

int32_t HALSIM_RegisterCanTalonQuadFilterEnCallback(int32_t index, HAL_NotifyCallback callback, void* param, HAL_Bool initialNotify);
void HALSIM_CancelCanTalonQuadFilterEnCallback(int32_t index, int32_t uid);
double HALSIM_GetCanTalonQuadFilterEn(int32_t index);
void HALSIM_SetCanTalonQuadFilterEn(int32_t index, double quadFilterEn);

int32_t HALSIM_RegisterCanTalonPidIaccumCallback(int32_t index, HAL_NotifyCallback callback, void* param, HAL_Bool initialNotify);
void HALSIM_CancelCanTalonPidIaccumCallback(int32_t index, int32_t uid);
double HALSIM_GetCanTalonPidIaccum(int32_t index);
void HALSIM_SetCanTalonPidIaccum(int32_t index, double pidIaccum);

int32_t HALSIM_RegisterCanTalonAinPositionCallback(int32_t index, HAL_NotifyCallback callback, void* param, HAL_Bool initialNotify);
void HALSIM_CancelCanTalonAinPositionCallback(int32_t index, int32_t uid);
double HALSIM_GetCanTalonAinPosition(int32_t index);
void HALSIM_SetCanTalonAinPosition(int32_t index, double ainPosition);

int32_t HALSIM_RegisterCanTalonProfileParamSlot0_AllowableClosedLoopErrCallback(int32_t index, HAL_NotifyCallback callback, void* param, HAL_Bool initialNotify);
void HALSIM_CancelCanTalonProfileParamSlot0_AllowableClosedLoopErrCallback(int32_t index, int32_t uid);
double HALSIM_GetCanTalonProfileParamSlot0_AllowableClosedLoopErr(int32_t index);
void HALSIM_SetCanTalonProfileParamSlot0_AllowableClosedLoopErr(int32_t index, double profileParamSlot0_AllowableClosedLoopErr);

int32_t HALSIM_RegisterCanTalonProfileParamSlot1_AllowableClosedLoopErrCallback(int32_t index, HAL_NotifyCallback callback, void* param, HAL_Bool initialNotify);
void HALSIM_CancelCanTalonProfileParamSlot1_AllowableClosedLoopErrCallback(int32_t index, int32_t uid);
double HALSIM_GetCanTalonProfileParamSlot1_AllowableClosedLoopErr(int32_t index);
void HALSIM_SetCanTalonProfileParamSlot1_AllowableClosedLoopErr(int32_t index, double profileParamSlot1_AllowableClosedLoopErr);

int32_t HALSIM_RegisterCanTalonNumberEncoderCPRCallback(int32_t index, HAL_NotifyCallback callback, void* param, HAL_Bool initialNotify);
void HALSIM_CancelCanTalonNumberEncoderCPRCallback(int32_t index, int32_t uid);
double HALSIM_GetCanTalonNumberEncoderCPR(int32_t index);
void HALSIM_SetCanTalonNumberEncoderCPR(int32_t index, double numberEncoderCPR);

int32_t HALSIM_RegisterCanTalonNumberPotTurnsCallback(int32_t index, HAL_NotifyCallback callback, void* param, HAL_Bool initialNotify);
void HALSIM_CancelCanTalonNumberPotTurnsCallback(int32_t index, int32_t uid);
double HALSIM_GetCanTalonNumberPotTurns(int32_t index);
void HALSIM_SetCanTalonNumberPotTurns(int32_t index, double numberPotTurns);

int32_t HALSIM_RegisterCanTalonm_overrideLimitSwitchCallback(int32_t index, HAL_NotifyCallback callback, void* param, HAL_Bool initialNotify);
void HALSIM_CancelCanTalonm_overrideLimitSwitchCallback(int32_t index, int32_t uid);
double HALSIM_GetCanTalonm_overrideLimitSwitch(int32_t index);
void HALSIM_SetCanTalonm_overrideLimitSwitch(int32_t index, double m_overrideLimitSwitch);

int32_t HALSIM_RegisterCanTalonm_overrideBrakeTypeCallback(int32_t index, HAL_NotifyCallback callback, void* param, HAL_Bool initialNotify);
void HALSIM_CancelCanTalonm_overrideBrakeTypeCallback(int32_t index, int32_t uid);
double HALSIM_GetCanTalonm_overrideBrakeType(int32_t index);
void HALSIM_SetCanTalonm_overrideBrakeType(int32_t index, double m_overrideBrakeType);

int32_t HALSIM_RegisterCanTalonm_demandCallback(int32_t index, HAL_NotifyCallback callback, void* param, HAL_Bool initialNotify);
void HALSIM_CancelCanTalonm_demandCallback(int32_t index, int32_t uid);
double HALSIM_GetCanTalonm_demand(int32_t index);
void HALSIM_SetCanTalonm_demand(int32_t index, double m_demand);

int32_t HALSIM_RegisterCanTalonm_percentVBusValueCallback(int32_t index, HAL_NotifyCallback callback, void* param, HAL_Bool initialNotify);
void HALSIM_CancelCanTalonm_percentVBusValueCallback(int32_t index, int32_t uid);
double HALSIM_GetCanTalonm_percentVBusValue(int32_t index);
void HALSIM_SetCanTalonm_percentVBusValue(int32_t index, double m_percentVBusValue);

int32_t HALSIM_RegisterCanTalonm_voltageCompensationRateCallback(int32_t index, HAL_NotifyCallback callback, void* param, HAL_Bool initialNotify);
void HALSIM_CancelCanTalonm_voltageCompensationRateCallback(int32_t index, int32_t uid);
double HALSIM_GetCanTalonm_voltageCompensationRate(int32_t index);
void HALSIM_SetCanTalonm_voltageCompensationRate(int32_t index, double m_voltageCompensationRate);

#ifdef __cplusplus
}
#endif

