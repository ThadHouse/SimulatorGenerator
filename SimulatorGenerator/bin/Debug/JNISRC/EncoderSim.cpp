#include "edu_wpi_first_hal_sim_EncoderSim.h"
#include "MockData/EncoderData.h"
#include <jni.h>
#include "CallbackStore.h"

extern "C" {

JNIEXPORT jint JNICALL Java_edu_wpi_first_hal_sim_EncoderSim_registerInitializedCallback
  (JNIEnv * env, jclass, jint index, jobject callback, jboolean initialNotify) {
  return sim::AllocateCallback(env, index, callback, initialNotify, &HALSIM_RegisterEncoderInitializedCallback);
}

JNIEXPORT void JNICALL Java_edu_wpi_first_hal_sim_EncoderSim_cancelInitializedCallback
  (JNIEnv * env, jclass, jint index, jint handle) {
  return sim::FreeCallback(env, handle, index, &HALSIM_CancelEncoderInitializedCallback);
}

JNIEXPORT jboolean JNICALL Java_edu_wpi_first_hal_sim_EncoderSim_getInitialized
  (JNIEnv *, jclass, jint index) {
  return HALSIM_GetEncoderInitialized(index);
}

JNIEXPORT void JNICALL Java_edu_wpi_first_hal_sim_EncoderSim_setInitialized
  (JNIEnv *, jclass, jint index, jboolean value) {
  HALSIM_SetEncoderInitialized(index, value);
}

JNIEXPORT jint JNICALL Java_edu_wpi_first_hal_sim_EncoderSim_registerCountCallback
  (JNIEnv * env, jclass, jint index, jobject callback, jboolean initialNotify) {
  return sim::AllocateCallback(env, index, callback, initialNotify, &HALSIM_RegisterEncoderCountCallback);
}

JNIEXPORT void JNICALL Java_edu_wpi_first_hal_sim_EncoderSim_cancelCountCallback
  (JNIEnv * env, jclass, jint index, jint handle) {
  return sim::FreeCallback(env, handle, index, &HALSIM_CancelEncoderCountCallback);
}

JNIEXPORT jint JNICALL Java_edu_wpi_first_hal_sim_EncoderSim_getCount
  (JNIEnv *, jclass, jint index) {
  return HALSIM_GetEncoderCount(index);
}

JNIEXPORT void JNICALL Java_edu_wpi_first_hal_sim_EncoderSim_setCount
  (JNIEnv *, jclass, jint index, jint value) {
  HALSIM_SetEncoderCount(index, value);
}

JNIEXPORT jint JNICALL Java_edu_wpi_first_hal_sim_EncoderSim_registerPeriodCallback
  (JNIEnv * env, jclass, jint index, jobject callback, jboolean initialNotify) {
  return sim::AllocateCallback(env, index, callback, initialNotify, &HALSIM_RegisterEncoderPeriodCallback);
}

JNIEXPORT void JNICALL Java_edu_wpi_first_hal_sim_EncoderSim_cancelPeriodCallback
  (JNIEnv * env, jclass, jint index, jint handle) {
  return sim::FreeCallback(env, handle, index, &HALSIM_CancelEncoderPeriodCallback);
}

JNIEXPORT jdouble JNICALL Java_edu_wpi_first_hal_sim_EncoderSim_getPeriod
  (JNIEnv *, jclass, jint index) {
  return HALSIM_GetEncoderPeriod(index);
}

JNIEXPORT void JNICALL Java_edu_wpi_first_hal_sim_EncoderSim_setPeriod
  (JNIEnv *, jclass, jint index, jdouble value) {
  HALSIM_SetEncoderPeriod(index, value);
}

JNIEXPORT jint JNICALL Java_edu_wpi_first_hal_sim_EncoderSim_registerResetCallback
  (JNIEnv * env, jclass, jint index, jobject callback, jboolean initialNotify) {
  return sim::AllocateCallback(env, index, callback, initialNotify, &HALSIM_RegisterEncoderResetCallback);
}

JNIEXPORT void JNICALL Java_edu_wpi_first_hal_sim_EncoderSim_cancelResetCallback
  (JNIEnv * env, jclass, jint index, jint handle) {
  return sim::FreeCallback(env, handle, index, &HALSIM_CancelEncoderResetCallback);
}

JNIEXPORT jboolean JNICALL Java_edu_wpi_first_hal_sim_EncoderSim_getReset
  (JNIEnv *, jclass, jint index) {
  return HALSIM_GetEncoderReset(index);
}

JNIEXPORT void JNICALL Java_edu_wpi_first_hal_sim_EncoderSim_setReset
  (JNIEnv *, jclass, jint index, jboolean value) {
  HALSIM_SetEncoderReset(index, value);
}

JNIEXPORT jint JNICALL Java_edu_wpi_first_hal_sim_EncoderSim_registerMaxPeriodCallback
  (JNIEnv * env, jclass, jint index, jobject callback, jboolean initialNotify) {
  return sim::AllocateCallback(env, index, callback, initialNotify, &HALSIM_RegisterEncoderMaxPeriodCallback);
}

JNIEXPORT void JNICALL Java_edu_wpi_first_hal_sim_EncoderSim_cancelMaxPeriodCallback
  (JNIEnv * env, jclass, jint index, jint handle) {
  return sim::FreeCallback(env, handle, index, &HALSIM_CancelEncoderMaxPeriodCallback);
}

JNIEXPORT jdouble JNICALL Java_edu_wpi_first_hal_sim_EncoderSim_getMaxPeriod
  (JNIEnv *, jclass, jint index) {
  return HALSIM_GetEncoderMaxPeriod(index);
}

JNIEXPORT void JNICALL Java_edu_wpi_first_hal_sim_EncoderSim_setMaxPeriod
  (JNIEnv *, jclass, jint index, jdouble value) {
  HALSIM_SetEncoderMaxPeriod(index, value);
}

JNIEXPORT jint JNICALL Java_edu_wpi_first_hal_sim_EncoderSim_registerDirectionCallback
  (JNIEnv * env, jclass, jint index, jobject callback, jboolean initialNotify) {
  return sim::AllocateCallback(env, index, callback, initialNotify, &HALSIM_RegisterEncoderDirectionCallback);
}

JNIEXPORT void JNICALL Java_edu_wpi_first_hal_sim_EncoderSim_cancelDirectionCallback
  (JNIEnv * env, jclass, jint index, jint handle) {
  return sim::FreeCallback(env, handle, index, &HALSIM_CancelEncoderDirectionCallback);
}

JNIEXPORT jboolean JNICALL Java_edu_wpi_first_hal_sim_EncoderSim_getDirection
  (JNIEnv *, jclass, jint index) {
  return HALSIM_GetEncoderDirection(index);
}

JNIEXPORT void JNICALL Java_edu_wpi_first_hal_sim_EncoderSim_setDirection
  (JNIEnv *, jclass, jint index, jboolean value) {
  HALSIM_SetEncoderDirection(index, value);
}

JNIEXPORT jint JNICALL Java_edu_wpi_first_hal_sim_EncoderSim_registerReverseDirectionCallback
  (JNIEnv * env, jclass, jint index, jobject callback, jboolean initialNotify) {
  return sim::AllocateCallback(env, index, callback, initialNotify, &HALSIM_RegisterEncoderReverseDirectionCallback);
}

JNIEXPORT void JNICALL Java_edu_wpi_first_hal_sim_EncoderSim_cancelReverseDirectionCallback
  (JNIEnv * env, jclass, jint index, jint handle) {
  return sim::FreeCallback(env, handle, index, &HALSIM_CancelEncoderReverseDirectionCallback);
}

JNIEXPORT jboolean JNICALL Java_edu_wpi_first_hal_sim_EncoderSim_getReverseDirection
  (JNIEnv *, jclass, jint index) {
  return HALSIM_GetEncoderReverseDirection(index);
}

JNIEXPORT void JNICALL Java_edu_wpi_first_hal_sim_EncoderSim_setReverseDirection
  (JNIEnv *, jclass, jint index, jboolean value) {
  HALSIM_SetEncoderReverseDirection(index, value);
}

JNIEXPORT jint JNICALL Java_edu_wpi_first_hal_sim_EncoderSim_registerSamplesToAverageCallback
  (JNIEnv * env, jclass, jint index, jobject callback, jboolean initialNotify) {
  return sim::AllocateCallback(env, index, callback, initialNotify, &HALSIM_RegisterEncoderSamplesToAverageCallback);
}

JNIEXPORT void JNICALL Java_edu_wpi_first_hal_sim_EncoderSim_cancelSamplesToAverageCallback
  (JNIEnv * env, jclass, jint index, jint handle) {
  return sim::FreeCallback(env, handle, index, &HALSIM_CancelEncoderSamplesToAverageCallback);
}

JNIEXPORT jint JNICALL Java_edu_wpi_first_hal_sim_EncoderSim_getSamplesToAverage
  (JNIEnv *, jclass, jint index) {
  return HALSIM_GetEncoderSamplesToAverage(index);
}

JNIEXPORT void JNICALL Java_edu_wpi_first_hal_sim_EncoderSim_setSamplesToAverage
  (JNIEnv *, jclass, jint index, jint value) {
  HALSIM_SetEncoderSamplesToAverage(index, value);
}

JNIEXPORT void JNICALL Java_edu_wpi_first_hal_sim_EncoderSim_resetData
  (JNIEnv*, jclass, jint index) {
  HALSIM_ResetEncoderData(index);
}

}
