#pragma once

#include "HAL/HAL.h"
#include "NotifyListener.h"

#ifdef __cplusplus
extern "C" {
#endif

void HALSIM_ResetDIOData(int32_t index);
int32_t HALSIM_RegisterDIOInitializedCallback(int32_t index, HAL_NotifyCallback callback, void* param, HAL_Bool initialNotify);
void HALSIM_CancelDIOInitializedCallback(int32_t index, int32_t uid);
HAL_Bool HALSIM_GetDIOInitialized(int32_t index);

int32_t HALSIM_RegisterDIOValueCallback(int32_t index, HAL_NotifyCallback callback, void* param, HAL_Bool initialNotify);
void HALSIM_CancelDIOValueCallback(int32_t index, int32_t uid);
HAL_Bool HALSIM_GetDIOValue(int32_t index);
void HALSIM_SetDIOValue(int32_t index, HAL_Bool value);

int32_t HALSIM_RegisterDIOPulseLengthCallback(int32_t index, HAL_NotifyCallback callback, void* param, HAL_Bool initialNotify);
void HALSIM_CancelDIOPulseLengthCallback(int32_t index, int32_t uid);
double HALSIM_GetDIOPulseLength(int32_t index);

int32_t HALSIM_RegisterDIOIsInputCallback(int32_t index, HAL_NotifyCallback callback, void* param, HAL_Bool initialNotify);
void HALSIM_CancelDIOIsInputCallback(int32_t index, int32_t uid);
HAL_Bool HALSIM_GetDIOIsInput(int32_t index);

int32_t HALSIM_RegisterDIOFilterIndexCallback(int32_t index, HAL_NotifyCallback callback, void* param, HAL_Bool initialNotify);
void HALSIM_CancelDIOFilterIndexCallback(int32_t index, int32_t uid);
int32_t HALSIM_GetDIOFilterIndex(int32_t index);

#ifdef __cplusplus
}
#endif

