#include "edu_wpi_first_hal_sim_PCMSim.h"
#include "MockData/PCMData.h"
#include <jni.h>
#include "CallbackStore.h"

extern "C" {

JNIEXPORT jint JNICALL Java_edu_wpi_first_hal_sim_PCMSim_registerSolenoidInitializedCallback
  (JNIEnv * env, jclass, jint index, jobject callback, jboolean initialNotify) {
  return sim::AllocateCallback(env, index, callback, initialNotify, &HALSIM_RegisterPCMSolenoidInitializedCallback);
}

JNIEXPORT void JNICALL Java_edu_wpi_first_hal_sim_PCMSim_cancelSolenoidInitializedCallback
  (JNIEnv * env, jclass, jint index, jint handle) {
  return sim::FreeCallback(env, handle, index, &HALSIM_CancelPCMSolenoidInitializedCallback);
}

JNIEXPORT jboolean JNICALL Java_edu_wpi_first_hal_sim_PCMSim_getSolenoidInitialized
  (JNIEnv *, jclass, jint index) {
  return HALSIM_GetPCMSolenoidInitialized(index);
}

JNIEXPORT void JNICALL Java_edu_wpi_first_hal_sim_PCMSim_setSolenoidInitialized
  (JNIEnv *, jclass, jint index, jboolean value) {
  HALSIM_SetPCMSolenoidInitialized(index, value);
}

JNIEXPORT jint JNICALL Java_edu_wpi_first_hal_sim_PCMSim_registerSolenoidOutputCallback
  (JNIEnv * env, jclass, jint index, jobject callback, jboolean initialNotify) {
  return sim::AllocateCallback(env, index, callback, initialNotify, &HALSIM_RegisterPCMSolenoidOutputCallback);
}

JNIEXPORT void JNICALL Java_edu_wpi_first_hal_sim_PCMSim_cancelSolenoidOutputCallback
  (JNIEnv * env, jclass, jint index, jint handle) {
  return sim::FreeCallback(env, handle, index, &HALSIM_CancelPCMSolenoidOutputCallback);
}

JNIEXPORT jboolean JNICALL Java_edu_wpi_first_hal_sim_PCMSim_getSolenoidOutput
  (JNIEnv *, jclass, jint index) {
  return HALSIM_GetPCMSolenoidOutput(index);
}

JNIEXPORT void JNICALL Java_edu_wpi_first_hal_sim_PCMSim_setSolenoidOutput
  (JNIEnv *, jclass, jint index, jboolean value) {
  HALSIM_SetPCMSolenoidOutput(index, value);
}

JNIEXPORT jint JNICALL Java_edu_wpi_first_hal_sim_PCMSim_registerCompressorInitializedCallback
  (JNIEnv * env, jclass, jint index, jobject callback, jboolean initialNotify) {
  return sim::AllocateCallback(env, index, callback, initialNotify, &HALSIM_RegisterPCMCompressorInitializedCallback);
}

JNIEXPORT void JNICALL Java_edu_wpi_first_hal_sim_PCMSim_cancelCompressorInitializedCallback
  (JNIEnv * env, jclass, jint index, jint handle) {
  return sim::FreeCallback(env, handle, index, &HALSIM_CancelPCMCompressorInitializedCallback);
}

JNIEXPORT jboolean JNICALL Java_edu_wpi_first_hal_sim_PCMSim_getCompressorInitialized
  (JNIEnv *, jclass, jint index) {
  return HALSIM_GetPCMCompressorInitialized(index);
}

JNIEXPORT void JNICALL Java_edu_wpi_first_hal_sim_PCMSim_setCompressorInitialized
  (JNIEnv *, jclass, jint index, jboolean value) {
  HALSIM_SetPCMCompressorInitialized(index, value);
}

JNIEXPORT jint JNICALL Java_edu_wpi_first_hal_sim_PCMSim_registerCompressorOnCallback
  (JNIEnv * env, jclass, jint index, jobject callback, jboolean initialNotify) {
  return sim::AllocateCallback(env, index, callback, initialNotify, &HALSIM_RegisterPCMCompressorOnCallback);
}

JNIEXPORT void JNICALL Java_edu_wpi_first_hal_sim_PCMSim_cancelCompressorOnCallback
  (JNIEnv * env, jclass, jint index, jint handle) {
  return sim::FreeCallback(env, handle, index, &HALSIM_CancelPCMCompressorOnCallback);
}

JNIEXPORT jboolean JNICALL Java_edu_wpi_first_hal_sim_PCMSim_getCompressorOn
  (JNIEnv *, jclass, jint index) {
  return HALSIM_GetPCMCompressorOn(index);
}

JNIEXPORT void JNICALL Java_edu_wpi_first_hal_sim_PCMSim_setCompressorOn
  (JNIEnv *, jclass, jint index, jboolean value) {
  HALSIM_SetPCMCompressorOn(index, value);
}

JNIEXPORT jint JNICALL Java_edu_wpi_first_hal_sim_PCMSim_registerCloseLoopEnabledCallback
  (JNIEnv * env, jclass, jint index, jobject callback, jboolean initialNotify) {
  return sim::AllocateCallback(env, index, callback, initialNotify, &HALSIM_RegisterPCMCloseLoopEnabledCallback);
}

JNIEXPORT void JNICALL Java_edu_wpi_first_hal_sim_PCMSim_cancelCloseLoopEnabledCallback
  (JNIEnv * env, jclass, jint index, jint handle) {
  return sim::FreeCallback(env, handle, index, &HALSIM_CancelPCMCloseLoopEnabledCallback);
}

JNIEXPORT jboolean JNICALL Java_edu_wpi_first_hal_sim_PCMSim_getCloseLoopEnabled
  (JNIEnv *, jclass, jint index) {
  return HALSIM_GetPCMCloseLoopEnabled(index);
}

JNIEXPORT void JNICALL Java_edu_wpi_first_hal_sim_PCMSim_setCloseLoopEnabled
  (JNIEnv *, jclass, jint index, jboolean value) {
  HALSIM_SetPCMCloseLoopEnabled(index, value);
}

JNIEXPORT jint JNICALL Java_edu_wpi_first_hal_sim_PCMSim_registerPressureSwitchCallback
  (JNIEnv * env, jclass, jint index, jobject callback, jboolean initialNotify) {
  return sim::AllocateCallback(env, index, callback, initialNotify, &HALSIM_RegisterPCMPressureSwitchCallback);
}

JNIEXPORT void JNICALL Java_edu_wpi_first_hal_sim_PCMSim_cancelPressureSwitchCallback
  (JNIEnv * env, jclass, jint index, jint handle) {
  return sim::FreeCallback(env, handle, index, &HALSIM_CancelPCMPressureSwitchCallback);
}

JNIEXPORT jboolean JNICALL Java_edu_wpi_first_hal_sim_PCMSim_getPressureSwitch
  (JNIEnv *, jclass, jint index) {
  return HALSIM_GetPCMPressureSwitch(index);
}

JNIEXPORT void JNICALL Java_edu_wpi_first_hal_sim_PCMSim_setPressureSwitch
  (JNIEnv *, jclass, jint index, jboolean value) {
  HALSIM_SetPCMPressureSwitch(index, value);
}

JNIEXPORT jint JNICALL Java_edu_wpi_first_hal_sim_PCMSim_registerCompressorCurrentCallback
  (JNIEnv * env, jclass, jint index, jobject callback, jboolean initialNotify) {
  return sim::AllocateCallback(env, index, callback, initialNotify, &HALSIM_RegisterPCMCompressorCurrentCallback);
}

JNIEXPORT void JNICALL Java_edu_wpi_first_hal_sim_PCMSim_cancelCompressorCurrentCallback
  (JNIEnv * env, jclass, jint index, jint handle) {
  return sim::FreeCallback(env, handle, index, &HALSIM_CancelPCMCompressorCurrentCallback);
}

JNIEXPORT jdouble JNICALL Java_edu_wpi_first_hal_sim_PCMSim_getCompressorCurrent
  (JNIEnv *, jclass, jint index) {
  return HALSIM_GetPCMCompressorCurrent(index);
}

JNIEXPORT void JNICALL Java_edu_wpi_first_hal_sim_PCMSim_setCompressorCurrent
  (JNIEnv *, jclass, jint index, jdouble value) {
  HALSIM_SetPCMCompressorCurrent(index, value);
}

JNIEXPORT void JNICALL Java_edu_wpi_first_hal_sim_PCMSim_resetData
  (JNIEnv*, jclass, jint index) {
  HALSIM_ResetPCMData(index);
}

}
