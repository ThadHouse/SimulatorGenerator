#include "edu_wpi_first_hal_sim_CanSim.h"
#include "MockData/CanData.h"
#include <jni.h>
#include "CallbackStore.h"

extern "C" {

JNIEXPORT jint JNICALL Java_edu_wpi_first_hal_sim_CanSim_registerCanSendMessageCallback
  (JNIEnv * env, jclass, jint index, jobject callback, jboolean initialNotify) {
  return sim::AllocateCallback(env, index, callback, initialNotify, &HALSIM_RegisterCanCanSendMessageCallback);
}

JNIEXPORT void JNICALL Java_edu_wpi_first_hal_sim_CanSim_cancelCanSendMessageCallback
  (JNIEnv * env, jclass, jint index, jint handle) {
  return sim::FreeCallback(env, handle, index, &HALSIM_CancelCanCanSendMessageCallback);
}

JNIEXPORT jdouble JNICALL Java_edu_wpi_first_hal_sim_CanSim_getCanSendMessage
  (JNIEnv *, jclass, jint index) {
  return HALSIM_GetCanCanSendMessage(index);
}

JNIEXPORT void JNICALL Java_edu_wpi_first_hal_sim_CanSim_setCanSendMessage
  (JNIEnv *, jclass, jint index, jdouble value) {
  HALSIM_SetCanCanSendMessage(index, value);
}

JNIEXPORT jint JNICALL Java_edu_wpi_first_hal_sim_CanSim_registerCanReceiveMessageCallback
  (JNIEnv * env, jclass, jint index, jobject callback, jboolean initialNotify) {
  return sim::AllocateCallback(env, index, callback, initialNotify, &HALSIM_RegisterCanCanReceiveMessageCallback);
}

JNIEXPORT void JNICALL Java_edu_wpi_first_hal_sim_CanSim_cancelCanReceiveMessageCallback
  (JNIEnv * env, jclass, jint index, jint handle) {
  return sim::FreeCallback(env, handle, index, &HALSIM_CancelCanCanReceiveMessageCallback);
}

JNIEXPORT jdouble JNICALL Java_edu_wpi_first_hal_sim_CanSim_getCanReceiveMessage
  (JNIEnv *, jclass, jint index) {
  return HALSIM_GetCanCanReceiveMessage(index);
}

JNIEXPORT void JNICALL Java_edu_wpi_first_hal_sim_CanSim_setCanReceiveMessage
  (JNIEnv *, jclass, jint index, jdouble value) {
  HALSIM_SetCanCanReceiveMessage(index, value);
}

JNIEXPORT jint JNICALL Java_edu_wpi_first_hal_sim_CanSim_registerCanOpenStreamCallback
  (JNIEnv * env, jclass, jint index, jobject callback, jboolean initialNotify) {
  return sim::AllocateCallback(env, index, callback, initialNotify, &HALSIM_RegisterCanCanOpenStreamCallback);
}

JNIEXPORT void JNICALL Java_edu_wpi_first_hal_sim_CanSim_cancelCanOpenStreamCallback
  (JNIEnv * env, jclass, jint index, jint handle) {
  return sim::FreeCallback(env, handle, index, &HALSIM_CancelCanCanOpenStreamCallback);
}

JNIEXPORT jdouble JNICALL Java_edu_wpi_first_hal_sim_CanSim_getCanOpenStream
  (JNIEnv *, jclass, jint index) {
  return HALSIM_GetCanCanOpenStream(index);
}

JNIEXPORT void JNICALL Java_edu_wpi_first_hal_sim_CanSim_setCanOpenStream
  (JNIEnv *, jclass, jint index, jdouble value) {
  HALSIM_SetCanCanOpenStream(index, value);
}

JNIEXPORT jint JNICALL Java_edu_wpi_first_hal_sim_CanSim_registerCanCloseStreamCallback
  (JNIEnv * env, jclass, jint index, jobject callback, jboolean initialNotify) {
  return sim::AllocateCallback(env, index, callback, initialNotify, &HALSIM_RegisterCanCanCloseStreamCallback);
}

JNIEXPORT void JNICALL Java_edu_wpi_first_hal_sim_CanSim_cancelCanCloseStreamCallback
  (JNIEnv * env, jclass, jint index, jint handle) {
  return sim::FreeCallback(env, handle, index, &HALSIM_CancelCanCanCloseStreamCallback);
}

JNIEXPORT jdouble JNICALL Java_edu_wpi_first_hal_sim_CanSim_getCanCloseStream
  (JNIEnv *, jclass, jint index) {
  return HALSIM_GetCanCanCloseStream(index);
}

JNIEXPORT void JNICALL Java_edu_wpi_first_hal_sim_CanSim_setCanCloseStream
  (JNIEnv *, jclass, jint index, jdouble value) {
  HALSIM_SetCanCanCloseStream(index, value);
}

JNIEXPORT jint JNICALL Java_edu_wpi_first_hal_sim_CanSim_registerCanReadStreamCallback
  (JNIEnv * env, jclass, jint index, jobject callback, jboolean initialNotify) {
  return sim::AllocateCallback(env, index, callback, initialNotify, &HALSIM_RegisterCanCanReadStreamCallback);
}

JNIEXPORT void JNICALL Java_edu_wpi_first_hal_sim_CanSim_cancelCanReadStreamCallback
  (JNIEnv * env, jclass, jint index, jint handle) {
  return sim::FreeCallback(env, handle, index, &HALSIM_CancelCanCanReadStreamCallback);
}

JNIEXPORT jdouble JNICALL Java_edu_wpi_first_hal_sim_CanSim_getCanReadStream
  (JNIEnv *, jclass, jint index) {
  return HALSIM_GetCanCanReadStream(index);
}

JNIEXPORT void JNICALL Java_edu_wpi_first_hal_sim_CanSim_setCanReadStream
  (JNIEnv *, jclass, jint index, jdouble value) {
  HALSIM_SetCanCanReadStream(index, value);
}

JNIEXPORT jint JNICALL Java_edu_wpi_first_hal_sim_CanSim_registerCanGetCanStatusCallback
  (JNIEnv * env, jclass, jint index, jobject callback, jboolean initialNotify) {
  return sim::AllocateCallback(env, index, callback, initialNotify, &HALSIM_RegisterCanCanGetCanStatusCallback);
}

JNIEXPORT void JNICALL Java_edu_wpi_first_hal_sim_CanSim_cancelCanGetCanStatusCallback
  (JNIEnv * env, jclass, jint index, jint handle) {
  return sim::FreeCallback(env, handle, index, &HALSIM_CancelCanCanGetCanStatusCallback);
}

JNIEXPORT jdouble JNICALL Java_edu_wpi_first_hal_sim_CanSim_getCanGetCanStatus
  (JNIEnv *, jclass, jint index) {
  return HALSIM_GetCanCanGetCanStatus(index);
}

JNIEXPORT void JNICALL Java_edu_wpi_first_hal_sim_CanSim_setCanGetCanStatus
  (JNIEnv *, jclass, jint index, jdouble value) {
  HALSIM_SetCanCanGetCanStatus(index, value);
}

JNIEXPORT void JNICALL Java_edu_wpi_first_hal_sim_CanSim_resetData
  (JNIEnv*, jclass, jint index) {
  HALSIM_ResetCanData(index);
}

}
