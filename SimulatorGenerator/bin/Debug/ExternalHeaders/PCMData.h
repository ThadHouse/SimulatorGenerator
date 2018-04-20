#pragma once

#include "HAL/HAL.h"
#include "NotifyListener.h"

#ifdef __cplusplus
extern "C" {
#endif

void HALSIM_ResetPCMData(int32_t index);
int32_t HALSIM_RegisterPCMSolenoidInitializedCallback(int32_t index, HAL_NotifyCallback callback, void* param, HAL_Bool initialNotify);
void HALSIM_CancelPCMSolenoidInitializedCallback(int32_t index, int32_t uid);
HAL_Bool HALSIM_GetPCMSolenoidInitialized(int32_t index);

int32_t HALSIM_RegisterPCMSolenoidOutputCallback(int32_t index, HAL_NotifyCallback callback, void* param, HAL_Bool initialNotify);
void HALSIM_CancelPCMSolenoidOutputCallback(int32_t index, int32_t uid);
HAL_Bool HALSIM_GetPCMSolenoidOutput(int32_t index);

int32_t HALSIM_RegisterPCMCompressorInitializedCallback(int32_t index, HAL_NotifyCallback callback, void* param, HAL_Bool initialNotify);
void HALSIM_CancelPCMCompressorInitializedCallback(int32_t index, int32_t uid);
HAL_Bool HALSIM_GetPCMCompressorInitialized(int32_t index);

int32_t HALSIM_RegisterPCMCompressorOnCallback(int32_t index, HAL_NotifyCallback callback, void* param, HAL_Bool initialNotify);
void HALSIM_CancelPCMCompressorOnCallback(int32_t index, int32_t uid);
HAL_Bool HALSIM_GetPCMCompressorOn(int32_t index);

int32_t HALSIM_RegisterPCMCloseLoopEnabledCallback(int32_t index, HAL_NotifyCallback callback, void* param, HAL_Bool initialNotify);
void HALSIM_CancelPCMCloseLoopEnabledCallback(int32_t index, int32_t uid);
HAL_Bool HALSIM_GetPCMCloseLoopEnabled(int32_t index);

int32_t HALSIM_RegisterPCMPressureSwitchCallback(int32_t index, HAL_NotifyCallback callback, void* param, HAL_Bool initialNotify);
void HALSIM_CancelPCMPressureSwitchCallback(int32_t index, int32_t uid);
HAL_Bool HALSIM_GetPCMPressureSwitch(int32_t index);

int32_t HALSIM_RegisterPCMCompressorCurrentCallback(int32_t index, HAL_NotifyCallback callback, void* param, HAL_Bool initialNotify);
void HALSIM_CancelPCMCompressorCurrentCallback(int32_t index, int32_t uid);
double HALSIM_GetPCMCompressorCurrent(int32_t index);

#ifdef __cplusplus
}
#endif

