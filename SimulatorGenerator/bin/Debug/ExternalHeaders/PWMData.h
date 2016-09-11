#pragma once

#include "HAL/HAL.h"
#include "NotifyListener.h"

#ifdef __cplusplus
extern "C" {
#endif

void HALSIM_ResetPWMData(int32_t index);
int32_t HALSIM_RegisterPWMInitializedCallback(int32_t index, HAL_NotifyCallback callback, void* param, HAL_Bool initialNotify);
void HALSIM_CancelPWMInitializedCallback(int32_t index, int32_t uid);
bool HALSIM_GetPWMInitialized(int32_t index);

int32_t HALSIM_RegisterPWMRawValueCallback(int32_t index, HAL_NotifyCallback callback, void* param, HAL_Bool initialNotify);
void HALSIM_CancelPWMRawValueCallback(int32_t index, int32_t uid);
int HALSIM_GetPWMRawValue(int32_t index);
void HALSIM_SetPWMRawValue(int32_t index, int rawValue);

int32_t HALSIM_RegisterPWMSpeedCallback(int32_t index, HAL_NotifyCallback callback, void* param, HAL_Bool initialNotify);
void HALSIM_CancelPWMSpeedCallback(int32_t index, int32_t uid);
double HALSIM_GetPWMSpeed(int32_t index);
void HALSIM_SetPWMSpeed(int32_t index, double speed);

int32_t HALSIM_RegisterPWMPositionCallback(int32_t index, HAL_NotifyCallback callback, void* param, HAL_Bool initialNotify);
void HALSIM_CancelPWMPositionCallback(int32_t index, int32_t uid);
double HALSIM_GetPWMPosition(int32_t index);
void HALSIM_SetPWMPosition(int32_t index, double position);

int32_t HALSIM_RegisterPWMPeriodScaleCallback(int32_t index, HAL_NotifyCallback callback, void* param, HAL_Bool initialNotify);
void HALSIM_CancelPWMPeriodScaleCallback(int32_t index, int32_t uid);
int HALSIM_GetPWMPeriodScale(int32_t index);

int32_t HALSIM_RegisterPWMZeroLatchCallback(int32_t index, HAL_NotifyCallback callback, void* param, HAL_Bool initialNotify);
void HALSIM_CancelPWMZeroLatchCallback(int32_t index, int32_t uid);
bool HALSIM_GetPWMZeroLatch(int32_t index);

#ifdef __cplusplus
}
#endif

