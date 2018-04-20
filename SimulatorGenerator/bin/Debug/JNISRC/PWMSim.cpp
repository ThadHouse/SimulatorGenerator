#include "edu_wpi_first_hal_sim_PWMSim.h"
#include "MockData/PWMData.h"
#include <jni.h>
#include "CallbackStore.h"

extern "C" {

JNIEXPORT jint JNICALL Java_edu_wpi_first_hal_sim_PWMSim_registerInitializedCallback
  (JNIEnv * env, jclass, jint index, jobject callback, jboolean initialNotify) {
  return sim::AllocateCallback(env, index, callback, initialNotify, &HALSIM_RegisterPWMInitializedCallback);
}

JNIEXPORT void JNICALL Java_edu_wpi_first_hal_sim_PWMSim_cancelInitializedCallback
  (JNIEnv * env, jclass, jint index, jint handle) {
  return sim::FreeCallback(env, handle, index, &HALSIM_CancelPWMInitializedCallback);
}

JNIEXPORT jboolean JNICALL Java_edu_wpi_first_hal_sim_PWMSim_getInitialized
  (JNIEnv *, jclass, jint index) {
  return HALSIM_GetPWMInitialized(index);
}

JNIEXPORT void JNICALL Java_edu_wpi_first_hal_sim_PWMSim_setInitialized
  (JNIEnv *, jclass, jint index, jboolean value) {
  HALSIM_SetPWMInitialized(index, value);
}

JNIEXPORT jint JNICALL Java_edu_wpi_first_hal_sim_PWMSim_registerRawValueCallback
  (JNIEnv * env, jclass, jint index, jobject callback, jboolean initialNotify) {
  return sim::AllocateCallback(env, index, callback, initialNotify, &HALSIM_RegisterPWMRawValueCallback);
}

JNIEXPORT void JNICALL Java_edu_wpi_first_hal_sim_PWMSim_cancelRawValueCallback
  (JNIEnv * env, jclass, jint index, jint handle) {
  return sim::FreeCallback(env, handle, index, &HALSIM_CancelPWMRawValueCallback);
}

JNIEXPORT jint JNICALL Java_edu_wpi_first_hal_sim_PWMSim_getRawValue
  (JNIEnv *, jclass, jint index) {
  return HALSIM_GetPWMRawValue(index);
}

JNIEXPORT void JNICALL Java_edu_wpi_first_hal_sim_PWMSim_setRawValue
  (JNIEnv *, jclass, jint index, jint value) {
  HALSIM_SetPWMRawValue(index, value);
}

JNIEXPORT jint JNICALL Java_edu_wpi_first_hal_sim_PWMSim_registerSpeedCallback
  (JNIEnv * env, jclass, jint index, jobject callback, jboolean initialNotify) {
  return sim::AllocateCallback(env, index, callback, initialNotify, &HALSIM_RegisterPWMSpeedCallback);
}

JNIEXPORT void JNICALL Java_edu_wpi_first_hal_sim_PWMSim_cancelSpeedCallback
  (JNIEnv * env, jclass, jint index, jint handle) {
  return sim::FreeCallback(env, handle, index, &HALSIM_CancelPWMSpeedCallback);
}

JNIEXPORT jdouble JNICALL Java_edu_wpi_first_hal_sim_PWMSim_getSpeed
  (JNIEnv *, jclass, jint index) {
  return HALSIM_GetPWMSpeed(index);
}

JNIEXPORT void JNICALL Java_edu_wpi_first_hal_sim_PWMSim_setSpeed
  (JNIEnv *, jclass, jint index, jdouble value) {
  HALSIM_SetPWMSpeed(index, value);
}

JNIEXPORT jint JNICALL Java_edu_wpi_first_hal_sim_PWMSim_registerPositionCallback
  (JNIEnv * env, jclass, jint index, jobject callback, jboolean initialNotify) {
  return sim::AllocateCallback(env, index, callback, initialNotify, &HALSIM_RegisterPWMPositionCallback);
}

JNIEXPORT void JNICALL Java_edu_wpi_first_hal_sim_PWMSim_cancelPositionCallback
  (JNIEnv * env, jclass, jint index, jint handle) {
  return sim::FreeCallback(env, handle, index, &HALSIM_CancelPWMPositionCallback);
}

JNIEXPORT jdouble JNICALL Java_edu_wpi_first_hal_sim_PWMSim_getPosition
  (JNIEnv *, jclass, jint index) {
  return HALSIM_GetPWMPosition(index);
}

JNIEXPORT void JNICALL Java_edu_wpi_first_hal_sim_PWMSim_setPosition
  (JNIEnv *, jclass, jint index, jdouble value) {
  HALSIM_SetPWMPosition(index, value);
}

JNIEXPORT jint JNICALL Java_edu_wpi_first_hal_sim_PWMSim_registerPeriodScaleCallback
  (JNIEnv * env, jclass, jint index, jobject callback, jboolean initialNotify) {
  return sim::AllocateCallback(env, index, callback, initialNotify, &HALSIM_RegisterPWMPeriodScaleCallback);
}

JNIEXPORT void JNICALL Java_edu_wpi_first_hal_sim_PWMSim_cancelPeriodScaleCallback
  (JNIEnv * env, jclass, jint index, jint handle) {
  return sim::FreeCallback(env, handle, index, &HALSIM_CancelPWMPeriodScaleCallback);
}

JNIEXPORT jint JNICALL Java_edu_wpi_first_hal_sim_PWMSim_getPeriodScale
  (JNIEnv *, jclass, jint index) {
  return HALSIM_GetPWMPeriodScale(index);
}

JNIEXPORT void JNICALL Java_edu_wpi_first_hal_sim_PWMSim_setPeriodScale
  (JNIEnv *, jclass, jint index, jint value) {
  HALSIM_SetPWMPeriodScale(index, value);
}

JNIEXPORT jint JNICALL Java_edu_wpi_first_hal_sim_PWMSim_registerZeroLatchCallback
  (JNIEnv * env, jclass, jint index, jobject callback, jboolean initialNotify) {
  return sim::AllocateCallback(env, index, callback, initialNotify, &HALSIM_RegisterPWMZeroLatchCallback);
}

JNIEXPORT void JNICALL Java_edu_wpi_first_hal_sim_PWMSim_cancelZeroLatchCallback
  (JNIEnv * env, jclass, jint index, jint handle) {
  return sim::FreeCallback(env, handle, index, &HALSIM_CancelPWMZeroLatchCallback);
}

JNIEXPORT jboolean JNICALL Java_edu_wpi_first_hal_sim_PWMSim_getZeroLatch
  (JNIEnv *, jclass, jint index) {
  return HALSIM_GetPWMZeroLatch(index);
}

JNIEXPORT void JNICALL Java_edu_wpi_first_hal_sim_PWMSim_setZeroLatch
  (JNIEnv *, jclass, jint index, jboolean value) {
  HALSIM_SetPWMZeroLatch(index, value);
}

JNIEXPORT void JNICALL Java_edu_wpi_first_hal_sim_PWMSim_resetData
  (JNIEnv*, jclass, jint index) {
  HALSIM_ResetPWMData(index);
}

}
