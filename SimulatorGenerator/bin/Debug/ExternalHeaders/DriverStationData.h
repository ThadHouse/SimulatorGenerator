#pragma once

#include "HAL/HAL.h"
#include "NotifyListener.h"

#ifdef __cplusplus
extern "C" {
#endif

void HALSIM_ResetDriverStationData(int32_t index);
int32_t HALSIM_RegisterDriverStationEnabledCallback(int32_t index, HAL_NotifyCallback callback, void* param, HAL_Bool initialNotify);
void HALSIM_CancelDriverStationEnabledCallback(int32_t index, int32_t uid);
HAL_Bool HALSIM_GetDriverStationEnabled(int32_t index);

int32_t HALSIM_RegisterDriverStationAutonomousCallback(int32_t index, HAL_NotifyCallback callback, void* param, HAL_Bool initialNotify);
void HALSIM_CancelDriverStationAutonomousCallback(int32_t index, int32_t uid);
HAL_Bool HALSIM_GetDriverStationAutonomous(int32_t index);

int32_t HALSIM_RegisterDriverStationTestCallback(int32_t index, HAL_NotifyCallback callback, void* param, HAL_Bool initialNotify);
void HALSIM_CancelDriverStationTestCallback(int32_t index, int32_t uid);
HAL_Bool HALSIM_GetDriverStationTest(int32_t index);

int32_t HALSIM_RegisterDriverStationEStopCallback(int32_t index, HAL_NotifyCallback callback, void* param, HAL_Bool initialNotify);
void HALSIM_CancelDriverStationEStopCallback(int32_t index, int32_t uid);
HAL_Bool HALSIM_GetDriverStationEStop(int32_t index);

int32_t HALSIM_RegisterDriverStationFmsAttachedCallback(int32_t index, HAL_NotifyCallback callback, void* param, HAL_Bool initialNotify);
void HALSIM_CancelDriverStationFmsAttachedCallback(int32_t index, int32_t uid);
HAL_Bool HALSIM_GetDriverStationFmsAttached(int32_t index);

int32_t HALSIM_RegisterDriverStationDsAttachedCallback(int32_t index, HAL_NotifyCallback callback, void* param, HAL_Bool initialNotify);
void HALSIM_CancelDriverStationDsAttachedCallback(int32_t index, int32_t uid);
HAL_Bool HALSIM_GetDriverStationDsAttached(int32_t index);

#ifdef __cplusplus
}
#endif

