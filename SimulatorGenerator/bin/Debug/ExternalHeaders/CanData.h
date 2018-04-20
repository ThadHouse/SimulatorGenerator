#pragma once

#include "HAL/HAL.h"
#include "NotifyListener.h"

#ifdef __cplusplus
extern "C" {
#endif

void HALSIM_ResetCanData(int32_t index);
int32_t HALSIM_RegisterCanCanSendMessageCallback(int32_t index, HAL_NotifyCallback callback, void* param, HAL_Bool initialNotify);
void HALSIM_CancelCanCanSendMessageCallback(int32_t index, int32_t uid);
double HALSIM_GetCanCanSendMessage(int32_t index);

int32_t HALSIM_RegisterCanCanReceiveMessageCallback(int32_t index, HAL_NotifyCallback callback, void* param, HAL_Bool initialNotify);
void HALSIM_CancelCanCanReceiveMessageCallback(int32_t index, int32_t uid);
double HALSIM_GetCanCanReceiveMessage(int32_t index);

int32_t HALSIM_RegisterCanCanOpenStreamCallback(int32_t index, HAL_NotifyCallback callback, void* param, HAL_Bool initialNotify);
void HALSIM_CancelCanCanOpenStreamCallback(int32_t index, int32_t uid);
double HALSIM_GetCanCanOpenStream(int32_t index);

int32_t HALSIM_RegisterCanCanCloseStreamCallback(int32_t index, HAL_NotifyCallback callback, void* param, HAL_Bool initialNotify);
void HALSIM_CancelCanCanCloseStreamCallback(int32_t index, int32_t uid);
double HALSIM_GetCanCanCloseStream(int32_t index);

int32_t HALSIM_RegisterCanCanReadStreamCallback(int32_t index, HAL_NotifyCallback callback, void* param, HAL_Bool initialNotify);
void HALSIM_CancelCanCanReadStreamCallback(int32_t index, int32_t uid);
double HALSIM_GetCanCanReadStream(int32_t index);

int32_t HALSIM_RegisterCanCanGetCanStatusCallback(int32_t index, HAL_NotifyCallback callback, void* param, HAL_Bool initialNotify);
void HALSIM_CancelCanCanGetCanStatusCallback(int32_t index, int32_t uid);
double HALSIM_GetCanCanGetCanStatus(int32_t index);

#ifdef __cplusplus
}
#endif

