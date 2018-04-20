#include "edu_wpi_first_hal_sim_AnalogTriggerSim.h"
#include "MockData/AnalogTriggerData.h"
#include <jni.h>
#include "CallbackStore.h"

extern "C" {

JNIEXPORT jint JNICALL Java_edu_wpi_first_hal_sim_AnalogTriggerSim_registerInitializedCallback
  (JNIEnv * env, jclass, jint index, jobject callback, jboolean initialNotify) {
  return sim::AllocateCallback(env, index, callback, initialNotify, &HALSIM_RegisterAnalogTriggerInitializedCallback);
}

JNIEXPORT void JNICALL Java_edu_wpi_first_hal_sim_AnalogTriggerSim_cancelInitializedCallback
  (JNIEnv * env, jclass, jint index, jint handle) {
  return sim::FreeCallback(env, handle, index, &HALSIM_CancelAnalogTriggerInitializedCallback);
}

JNIEXPORT jboolean JNICALL Java_edu_wpi_first_hal_sim_AnalogTriggerSim_getInitialized
  (JNIEnv *, jclass, jint index) {
  return HALSIM_GetAnalogTriggerInitialized(index);
}

JNIEXPORT void JNICALL Java_edu_wpi_first_hal_sim_AnalogTriggerSim_setInitialized
  (JNIEnv *, jclass, jint index, jboolean value) {
  HALSIM_SetAnalogTriggerInitialized(index, value);
}

JNIEXPORT jint JNICALL Java_edu_wpi_first_hal_sim_AnalogTriggerSim_registerTriggerLowerBoundCallback
  (JNIEnv * env, jclass, jint index, jobject callback, jboolean initialNotify) {
  return sim::AllocateCallback(env, index, callback, initialNotify, &HALSIM_RegisterAnalogTriggerTriggerLowerBoundCallback);
}

JNIEXPORT void JNICALL Java_edu_wpi_first_hal_sim_AnalogTriggerSim_cancelTriggerLowerBoundCallback
  (JNIEnv * env, jclass, jint index, jint handle) {
  return sim::FreeCallback(env, handle, index, &HALSIM_CancelAnalogTriggerTriggerLowerBoundCallback);
}

JNIEXPORT jdouble JNICALL Java_edu_wpi_first_hal_sim_AnalogTriggerSim_getTriggerLowerBound
  (JNIEnv *, jclass, jint index) {
  return HALSIM_GetAnalogTriggerTriggerLowerBound(index);
}

JNIEXPORT void JNICALL Java_edu_wpi_first_hal_sim_AnalogTriggerSim_setTriggerLowerBound
  (JNIEnv *, jclass, jint index, jdouble value) {
  HALSIM_SetAnalogTriggerTriggerLowerBound(index, value);
}

JNIEXPORT jint JNICALL Java_edu_wpi_first_hal_sim_AnalogTriggerSim_registerTriggerUpperBoundCallback
  (JNIEnv * env, jclass, jint index, jobject callback, jboolean initialNotify) {
  return sim::AllocateCallback(env, index, callback, initialNotify, &HALSIM_RegisterAnalogTriggerTriggerUpperBoundCallback);
}

JNIEXPORT void JNICALL Java_edu_wpi_first_hal_sim_AnalogTriggerSim_cancelTriggerUpperBoundCallback
  (JNIEnv * env, jclass, jint index, jint handle) {
  return sim::FreeCallback(env, handle, index, &HALSIM_CancelAnalogTriggerTriggerUpperBoundCallback);
}

JNIEXPORT jdouble JNICALL Java_edu_wpi_first_hal_sim_AnalogTriggerSim_getTriggerUpperBound
  (JNIEnv *, jclass, jint index) {
  return HALSIM_GetAnalogTriggerTriggerUpperBound(index);
}

JNIEXPORT void JNICALL Java_edu_wpi_first_hal_sim_AnalogTriggerSim_setTriggerUpperBound
  (JNIEnv *, jclass, jint index, jdouble value) {
  HALSIM_SetAnalogTriggerTriggerUpperBound(index, value);
}

JNIEXPORT void JNICALL Java_edu_wpi_first_hal_sim_AnalogTriggerSim_resetData
  (JNIEnv*, jclass, jint index) {
  HALSIM_ResetAnalogTriggerData(index);
}

}
