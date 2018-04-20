#include "edu_wpi_first_hal_sim_AnalogInSim.h"
#include "MockData/AnalogInData.h"
#include <jni.h>
#include "CallbackStore.h"

extern "C" {

JNIEXPORT jint JNICALL Java_edu_wpi_first_hal_sim_AnalogInSim_registerInitializedCallback
  (JNIEnv * env, jclass, jint index, jobject callback, jboolean initialNotify) {
  return sim::AllocateCallback(env, index, callback, initialNotify, &HALSIM_RegisterAnalogInInitializedCallback);
}

JNIEXPORT void JNICALL Java_edu_wpi_first_hal_sim_AnalogInSim_cancelInitializedCallback
  (JNIEnv * env, jclass, jint index, jint handle) {
  return sim::FreeCallback(env, handle, index, &HALSIM_CancelAnalogInInitializedCallback);
}

JNIEXPORT jboolean JNICALL Java_edu_wpi_first_hal_sim_AnalogInSim_getInitialized
  (JNIEnv *, jclass, jint index) {
  return HALSIM_GetAnalogInInitialized(index);
}

JNIEXPORT void JNICALL Java_edu_wpi_first_hal_sim_AnalogInSim_setInitialized
  (JNIEnv *, jclass, jint index, jboolean value) {
  HALSIM_SetAnalogInInitialized(index, value);
}

JNIEXPORT jint JNICALL Java_edu_wpi_first_hal_sim_AnalogInSim_registerAverageBitsCallback
  (JNIEnv * env, jclass, jint index, jobject callback, jboolean initialNotify) {
  return sim::AllocateCallback(env, index, callback, initialNotify, &HALSIM_RegisterAnalogInAverageBitsCallback);
}

JNIEXPORT void JNICALL Java_edu_wpi_first_hal_sim_AnalogInSim_cancelAverageBitsCallback
  (JNIEnv * env, jclass, jint index, jint handle) {
  return sim::FreeCallback(env, handle, index, &HALSIM_CancelAnalogInAverageBitsCallback);
}

JNIEXPORT jint JNICALL Java_edu_wpi_first_hal_sim_AnalogInSim_getAverageBits
  (JNIEnv *, jclass, jint index) {
  return HALSIM_GetAnalogInAverageBits(index);
}

JNIEXPORT void JNICALL Java_edu_wpi_first_hal_sim_AnalogInSim_setAverageBits
  (JNIEnv *, jclass, jint index, jint value) {
  HALSIM_SetAnalogInAverageBits(index, value);
}

JNIEXPORT jint JNICALL Java_edu_wpi_first_hal_sim_AnalogInSim_registerOversampleBitsCallback
  (JNIEnv * env, jclass, jint index, jobject callback, jboolean initialNotify) {
  return sim::AllocateCallback(env, index, callback, initialNotify, &HALSIM_RegisterAnalogInOversampleBitsCallback);
}

JNIEXPORT void JNICALL Java_edu_wpi_first_hal_sim_AnalogInSim_cancelOversampleBitsCallback
  (JNIEnv * env, jclass, jint index, jint handle) {
  return sim::FreeCallback(env, handle, index, &HALSIM_CancelAnalogInOversampleBitsCallback);
}

JNIEXPORT jint JNICALL Java_edu_wpi_first_hal_sim_AnalogInSim_getOversampleBits
  (JNIEnv *, jclass, jint index) {
  return HALSIM_GetAnalogInOversampleBits(index);
}

JNIEXPORT void JNICALL Java_edu_wpi_first_hal_sim_AnalogInSim_setOversampleBits
  (JNIEnv *, jclass, jint index, jint value) {
  HALSIM_SetAnalogInOversampleBits(index, value);
}

JNIEXPORT jint JNICALL Java_edu_wpi_first_hal_sim_AnalogInSim_registerVoltageCallback
  (JNIEnv * env, jclass, jint index, jobject callback, jboolean initialNotify) {
  return sim::AllocateCallback(env, index, callback, initialNotify, &HALSIM_RegisterAnalogInVoltageCallback);
}

JNIEXPORT void JNICALL Java_edu_wpi_first_hal_sim_AnalogInSim_cancelVoltageCallback
  (JNIEnv * env, jclass, jint index, jint handle) {
  return sim::FreeCallback(env, handle, index, &HALSIM_CancelAnalogInVoltageCallback);
}

JNIEXPORT jdouble JNICALL Java_edu_wpi_first_hal_sim_AnalogInSim_getVoltage
  (JNIEnv *, jclass, jint index) {
  return HALSIM_GetAnalogInVoltage(index);
}

JNIEXPORT void JNICALL Java_edu_wpi_first_hal_sim_AnalogInSim_setVoltage
  (JNIEnv *, jclass, jint index, jdouble value) {
  HALSIM_SetAnalogInVoltage(index, value);
}

JNIEXPORT jint JNICALL Java_edu_wpi_first_hal_sim_AnalogInSim_registerAccumulatorInitializedCallback
  (JNIEnv * env, jclass, jint index, jobject callback, jboolean initialNotify) {
  return sim::AllocateCallback(env, index, callback, initialNotify, &HALSIM_RegisterAnalogInAccumulatorInitializedCallback);
}

JNIEXPORT void JNICALL Java_edu_wpi_first_hal_sim_AnalogInSim_cancelAccumulatorInitializedCallback
  (JNIEnv * env, jclass, jint index, jint handle) {
  return sim::FreeCallback(env, handle, index, &HALSIM_CancelAnalogInAccumulatorInitializedCallback);
}

JNIEXPORT jboolean JNICALL Java_edu_wpi_first_hal_sim_AnalogInSim_getAccumulatorInitialized
  (JNIEnv *, jclass, jint index) {
  return HALSIM_GetAnalogInAccumulatorInitialized(index);
}

JNIEXPORT void JNICALL Java_edu_wpi_first_hal_sim_AnalogInSim_setAccumulatorInitialized
  (JNIEnv *, jclass, jint index, jboolean value) {
  HALSIM_SetAnalogInAccumulatorInitialized(index, value);
}

JNIEXPORT jint JNICALL Java_edu_wpi_first_hal_sim_AnalogInSim_registerAccumulatorValueCallback
  (JNIEnv * env, jclass, jint index, jobject callback, jboolean initialNotify) {
  return sim::AllocateCallback(env, index, callback, initialNotify, &HALSIM_RegisterAnalogInAccumulatorValueCallback);
}

JNIEXPORT void JNICALL Java_edu_wpi_first_hal_sim_AnalogInSim_cancelAccumulatorValueCallback
  (JNIEnv * env, jclass, jint index, jint handle) {
  return sim::FreeCallback(env, handle, index, &HALSIM_CancelAnalogInAccumulatorValueCallback);
}

JNIEXPORT jlong JNICALL Java_edu_wpi_first_hal_sim_AnalogInSim_getAccumulatorValue
  (JNIEnv *, jclass, jint index) {
  return HALSIM_GetAnalogInAccumulatorValue(index);
}

JNIEXPORT void JNICALL Java_edu_wpi_first_hal_sim_AnalogInSim_setAccumulatorValue
  (JNIEnv *, jclass, jint index, jlong value) {
  HALSIM_SetAnalogInAccumulatorValue(index, value);
}

JNIEXPORT jint JNICALL Java_edu_wpi_first_hal_sim_AnalogInSim_registerAccumulatorCountCallback
  (JNIEnv * env, jclass, jint index, jobject callback, jboolean initialNotify) {
  return sim::AllocateCallback(env, index, callback, initialNotify, &HALSIM_RegisterAnalogInAccumulatorCountCallback);
}

JNIEXPORT void JNICALL Java_edu_wpi_first_hal_sim_AnalogInSim_cancelAccumulatorCountCallback
  (JNIEnv * env, jclass, jint index, jint handle) {
  return sim::FreeCallback(env, handle, index, &HALSIM_CancelAnalogInAccumulatorCountCallback);
}

JNIEXPORT jlong JNICALL Java_edu_wpi_first_hal_sim_AnalogInSim_getAccumulatorCount
  (JNIEnv *, jclass, jint index) {
  return HALSIM_GetAnalogInAccumulatorCount(index);
}

JNIEXPORT void JNICALL Java_edu_wpi_first_hal_sim_AnalogInSim_setAccumulatorCount
  (JNIEnv *, jclass, jint index, jlong value) {
  HALSIM_SetAnalogInAccumulatorCount(index, value);
}

JNIEXPORT jint JNICALL Java_edu_wpi_first_hal_sim_AnalogInSim_registerAccumulatorCenterCallback
  (JNIEnv * env, jclass, jint index, jobject callback, jboolean initialNotify) {
  return sim::AllocateCallback(env, index, callback, initialNotify, &HALSIM_RegisterAnalogInAccumulatorCenterCallback);
}

JNIEXPORT void JNICALL Java_edu_wpi_first_hal_sim_AnalogInSim_cancelAccumulatorCenterCallback
  (JNIEnv * env, jclass, jint index, jint handle) {
  return sim::FreeCallback(env, handle, index, &HALSIM_CancelAnalogInAccumulatorCenterCallback);
}

JNIEXPORT jint JNICALL Java_edu_wpi_first_hal_sim_AnalogInSim_getAccumulatorCenter
  (JNIEnv *, jclass, jint index) {
  return HALSIM_GetAnalogInAccumulatorCenter(index);
}

JNIEXPORT void JNICALL Java_edu_wpi_first_hal_sim_AnalogInSim_setAccumulatorCenter
  (JNIEnv *, jclass, jint index, jint value) {
  HALSIM_SetAnalogInAccumulatorCenter(index, value);
}

JNIEXPORT jint JNICALL Java_edu_wpi_first_hal_sim_AnalogInSim_registerAccumulatorDeadbandCallback
  (JNIEnv * env, jclass, jint index, jobject callback, jboolean initialNotify) {
  return sim::AllocateCallback(env, index, callback, initialNotify, &HALSIM_RegisterAnalogInAccumulatorDeadbandCallback);
}

JNIEXPORT void JNICALL Java_edu_wpi_first_hal_sim_AnalogInSim_cancelAccumulatorDeadbandCallback
  (JNIEnv * env, jclass, jint index, jint handle) {
  return sim::FreeCallback(env, handle, index, &HALSIM_CancelAnalogInAccumulatorDeadbandCallback);
}

JNIEXPORT jint JNICALL Java_edu_wpi_first_hal_sim_AnalogInSim_getAccumulatorDeadband
  (JNIEnv *, jclass, jint index) {
  return HALSIM_GetAnalogInAccumulatorDeadband(index);
}

JNIEXPORT void JNICALL Java_edu_wpi_first_hal_sim_AnalogInSim_setAccumulatorDeadband
  (JNIEnv *, jclass, jint index, jint value) {
  HALSIM_SetAnalogInAccumulatorDeadband(index, value);
}

JNIEXPORT void JNICALL Java_edu_wpi_first_hal_sim_AnalogInSim_resetData
  (JNIEnv*, jclass, jint index) {
  HALSIM_ResetAnalogInData(index);
}

}
