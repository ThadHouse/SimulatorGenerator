#include "edu_wpi_first_hal_sim_DriverStationSim.h"
#include "MockData/DriverStationData.h"
#include <jni.h>
#include "CallbackStore.h"

extern "C" {

JNIEXPORT jint JNICALL Java_edu_wpi_first_hal_sim_DriverStationSim_registerEnabledCallback
  (JNIEnv * env, jclass, jint index, jobject callback, jboolean initialNotify) {
  return sim::AllocateCallback(env, index, callback, initialNotify, &HALSIM_RegisterDriverStationEnabledCallback);
}

JNIEXPORT void JNICALL Java_edu_wpi_first_hal_sim_DriverStationSim_cancelEnabledCallback
  (JNIEnv * env, jclass, jint index, jint handle) {
  return sim::FreeCallback(env, handle, index, &HALSIM_CancelDriverStationEnabledCallback);
}

JNIEXPORT jboolean JNICALL Java_edu_wpi_first_hal_sim_DriverStationSim_getEnabled
  (JNIEnv *, jclass, jint index) {
  return HALSIM_GetDriverStationEnabled(index);
}

JNIEXPORT void JNICALL Java_edu_wpi_first_hal_sim_DriverStationSim_setEnabled
  (JNIEnv *, jclass, jint index, jboolean value) {
  HALSIM_SetDriverStationEnabled(index, value);
}

JNIEXPORT jint JNICALL Java_edu_wpi_first_hal_sim_DriverStationSim_registerAutonomousCallback
  (JNIEnv * env, jclass, jint index, jobject callback, jboolean initialNotify) {
  return sim::AllocateCallback(env, index, callback, initialNotify, &HALSIM_RegisterDriverStationAutonomousCallback);
}

JNIEXPORT void JNICALL Java_edu_wpi_first_hal_sim_DriverStationSim_cancelAutonomousCallback
  (JNIEnv * env, jclass, jint index, jint handle) {
  return sim::FreeCallback(env, handle, index, &HALSIM_CancelDriverStationAutonomousCallback);
}

JNIEXPORT jboolean JNICALL Java_edu_wpi_first_hal_sim_DriverStationSim_getAutonomous
  (JNIEnv *, jclass, jint index) {
  return HALSIM_GetDriverStationAutonomous(index);
}

JNIEXPORT void JNICALL Java_edu_wpi_first_hal_sim_DriverStationSim_setAutonomous
  (JNIEnv *, jclass, jint index, jboolean value) {
  HALSIM_SetDriverStationAutonomous(index, value);
}

JNIEXPORT jint JNICALL Java_edu_wpi_first_hal_sim_DriverStationSim_registerTestCallback
  (JNIEnv * env, jclass, jint index, jobject callback, jboolean initialNotify) {
  return sim::AllocateCallback(env, index, callback, initialNotify, &HALSIM_RegisterDriverStationTestCallback);
}

JNIEXPORT void JNICALL Java_edu_wpi_first_hal_sim_DriverStationSim_cancelTestCallback
  (JNIEnv * env, jclass, jint index, jint handle) {
  return sim::FreeCallback(env, handle, index, &HALSIM_CancelDriverStationTestCallback);
}

JNIEXPORT jboolean JNICALL Java_edu_wpi_first_hal_sim_DriverStationSim_getTest
  (JNIEnv *, jclass, jint index) {
  return HALSIM_GetDriverStationTest(index);
}

JNIEXPORT void JNICALL Java_edu_wpi_first_hal_sim_DriverStationSim_setTest
  (JNIEnv *, jclass, jint index, jboolean value) {
  HALSIM_SetDriverStationTest(index, value);
}

JNIEXPORT jint JNICALL Java_edu_wpi_first_hal_sim_DriverStationSim_registerEStopCallback
  (JNIEnv * env, jclass, jint index, jobject callback, jboolean initialNotify) {
  return sim::AllocateCallback(env, index, callback, initialNotify, &HALSIM_RegisterDriverStationEStopCallback);
}

JNIEXPORT void JNICALL Java_edu_wpi_first_hal_sim_DriverStationSim_cancelEStopCallback
  (JNIEnv * env, jclass, jint index, jint handle) {
  return sim::FreeCallback(env, handle, index, &HALSIM_CancelDriverStationEStopCallback);
}

JNIEXPORT jboolean JNICALL Java_edu_wpi_first_hal_sim_DriverStationSim_getEStop
  (JNIEnv *, jclass, jint index) {
  return HALSIM_GetDriverStationEStop(index);
}

JNIEXPORT void JNICALL Java_edu_wpi_first_hal_sim_DriverStationSim_setEStop
  (JNIEnv *, jclass, jint index, jboolean value) {
  HALSIM_SetDriverStationEStop(index, value);
}

JNIEXPORT jint JNICALL Java_edu_wpi_first_hal_sim_DriverStationSim_registerFmsAttachedCallback
  (JNIEnv * env, jclass, jint index, jobject callback, jboolean initialNotify) {
  return sim::AllocateCallback(env, index, callback, initialNotify, &HALSIM_RegisterDriverStationFmsAttachedCallback);
}

JNIEXPORT void JNICALL Java_edu_wpi_first_hal_sim_DriverStationSim_cancelFmsAttachedCallback
  (JNIEnv * env, jclass, jint index, jint handle) {
  return sim::FreeCallback(env, handle, index, &HALSIM_CancelDriverStationFmsAttachedCallback);
}

JNIEXPORT jboolean JNICALL Java_edu_wpi_first_hal_sim_DriverStationSim_getFmsAttached
  (JNIEnv *, jclass, jint index) {
  return HALSIM_GetDriverStationFmsAttached(index);
}

JNIEXPORT void JNICALL Java_edu_wpi_first_hal_sim_DriverStationSim_setFmsAttached
  (JNIEnv *, jclass, jint index, jboolean value) {
  HALSIM_SetDriverStationFmsAttached(index, value);
}

JNIEXPORT jint JNICALL Java_edu_wpi_first_hal_sim_DriverStationSim_registerDsAttachedCallback
  (JNIEnv * env, jclass, jint index, jobject callback, jboolean initialNotify) {
  return sim::AllocateCallback(env, index, callback, initialNotify, &HALSIM_RegisterDriverStationDsAttachedCallback);
}

JNIEXPORT void JNICALL Java_edu_wpi_first_hal_sim_DriverStationSim_cancelDsAttachedCallback
  (JNIEnv * env, jclass, jint index, jint handle) {
  return sim::FreeCallback(env, handle, index, &HALSIM_CancelDriverStationDsAttachedCallback);
}

JNIEXPORT jboolean JNICALL Java_edu_wpi_first_hal_sim_DriverStationSim_getDsAttached
  (JNIEnv *, jclass, jint index) {
  return HALSIM_GetDriverStationDsAttached(index);
}

JNIEXPORT void JNICALL Java_edu_wpi_first_hal_sim_DriverStationSim_setDsAttached
  (JNIEnv *, jclass, jint index, jboolean value) {
  HALSIM_SetDriverStationDsAttached(index, value);
}

JNIEXPORT void JNICALL Java_edu_wpi_first_hal_sim_DriverStationSim_resetData
  (JNIEnv*, jclass, jint index) {
  HALSIM_ResetDriverStationData(index);
}

}
