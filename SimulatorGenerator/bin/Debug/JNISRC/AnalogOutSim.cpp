#include "edu_wpi_first_hal_sim_AnalogOutSim.h"
#include "MockData/AnalogOutData.h"
#include <jni.h>
#include "CallbackStore.h"

extern "C" {

JNIEXPORT jint JNICALL Java_edu_wpi_first_hal_sim_AnalogOutSim_registerVoltageCallback
  (JNIEnv * env, jclass, jint index, jobject callback, jboolean initialNotify) {
  return sim::AllocateCallback(env, index, callback, initialNotify, &HALSIM_RegisterAnalogOutVoltageCallback);
}

JNIEXPORT void JNICALL Java_edu_wpi_first_hal_sim_AnalogOutSim_cancelVoltageCallback
  (JNIEnv * env, jclass, jint index, jint handle) {
  return sim::FreeCallback(env, handle, index, &HALSIM_CancelAnalogOutVoltageCallback);
}

JNIEXPORT jdouble JNICALL Java_edu_wpi_first_hal_sim_AnalogOutSim_getVoltage
  (JNIEnv *, jclass, jint index) {
  return HALSIM_GetAnalogOutVoltage(index);
}

JNIEXPORT void JNICALL Java_edu_wpi_first_hal_sim_AnalogOutSim_setVoltage
  (JNIEnv *, jclass, jint index, jdouble value) {
  HALSIM_SetAnalogOutVoltage(index, value);
}

JNIEXPORT jint JNICALL Java_edu_wpi_first_hal_sim_AnalogOutSim_registerInitializedCallback
  (JNIEnv * env, jclass, jint index, jobject callback, jboolean initialNotify) {
  return sim::AllocateCallback(env, index, callback, initialNotify, &HALSIM_RegisterAnalogOutInitializedCallback);
}

JNIEXPORT void JNICALL Java_edu_wpi_first_hal_sim_AnalogOutSim_cancelInitializedCallback
  (JNIEnv * env, jclass, jint index, jint handle) {
  return sim::FreeCallback(env, handle, index, &HALSIM_CancelAnalogOutInitializedCallback);
}

JNIEXPORT jboolean JNICALL Java_edu_wpi_first_hal_sim_AnalogOutSim_getInitialized
  (JNIEnv *, jclass, jint index) {
  return HALSIM_GetAnalogOutInitialized(index);
}

JNIEXPORT void JNICALL Java_edu_wpi_first_hal_sim_AnalogOutSim_setInitialized
  (JNIEnv *, jclass, jint index, jboolean value) {
  HALSIM_SetAnalogOutInitialized(index, value);
}

JNIEXPORT void JNICALL Java_edu_wpi_first_hal_sim_AnalogOutSim_resetData
  (JNIEnv*, jclass, jint index) {
  HALSIM_ResetAnalogOutData(index);
}

}
