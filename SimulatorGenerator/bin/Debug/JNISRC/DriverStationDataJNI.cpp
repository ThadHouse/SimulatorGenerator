#include "edu_wpi_first_hal_sim_mockdata_DriverStationDataJNI.h"
#include "MockData/DriverStationData.h"
#include <jni.h>
#include "CallbackStore.h"

extern "C" {

JNIEXPORT jint JNICALL Java_edu_wpi_first_hal_sim_mockdata_DriverStationDataJNI_registerEnabledCallback
  (JNIEnv * env, jclass, jint index, jobject callback, jboolean initialNotify) {
  return sim::AllocateCallback(env, index, callback, initialNotify, &HALSIM_RegisterDriverStationEnabledCallback);
}

JNIEXPORT void JNICALL Java_edu_wpi_first_hal_sim_mockdata_DriverStationDataJNI_cancelEnabledCallback
  (JNIEnv * env, jclass, jint index, jint handle) {
  return sim::FreeCallback(env, handle, index, &HALSIM_CancelDriverStationEnabledCallback);
}

JNIEXPORT jboolean JNICALL Java_edu_wpi_first_hal_sim_mockdata_DriverStationDataJNI_getEnabled
  (JNIEnv *, jclass, jint index) {
  return HALSIM_GetDriverStationEnabled(index);
}

JNIEXPORT void JNICALL Java_edu_wpi_first_hal_sim_mockdata_DriverStationDataJNI_setEnabled
  (JNIEnv *, jclass, jint index, jboolean value) {
  HALSIM_SetDriverStationEnabled(index, value);
}

JNIEXPORT jint JNICALL Java_edu_wpi_first_hal_sim_mockdata_DriverStationDataJNI_registerAutonomousCallback
  (JNIEnv * env, jclass, jint index, jobject callback, jboolean initialNotify) {
  return sim::AllocateCallback(env, index, callback, initialNotify, &HALSIM_RegisterDriverStationAutonomousCallback);
}

JNIEXPORT void JNICALL Java_edu_wpi_first_hal_sim_mockdata_DriverStationDataJNI_cancelAutonomousCallback
  (JNIEnv * env, jclass, jint index, jint handle) {
  return sim::FreeCallback(env, handle, index, &HALSIM_CancelDriverStationAutonomousCallback);
}

JNIEXPORT jboolean JNICALL Java_edu_wpi_first_hal_sim_mockdata_DriverStationDataJNI_getAutonomous
  (JNIEnv *, jclass, jint index) {
  return HALSIM_GetDriverStationAutonomous(index);
}

JNIEXPORT void JNICALL Java_edu_wpi_first_hal_sim_mockdata_DriverStationDataJNI_setAutonomous
  (JNIEnv *, jclass, jint index, jboolean value) {
  HALSIM_SetDriverStationAutonomous(index, value);
}

JNIEXPORT jint JNICALL Java_edu_wpi_first_hal_sim_mockdata_DriverStationDataJNI_registerTestCallback
  (JNIEnv * env, jclass, jint index, jobject callback, jboolean initialNotify) {
  return sim::AllocateCallback(env, index, callback, initialNotify, &HALSIM_RegisterDriverStationTestCallback);
}

JNIEXPORT void JNICALL Java_edu_wpi_first_hal_sim_mockdata_DriverStationDataJNI_cancelTestCallback
  (JNIEnv * env, jclass, jint index, jint handle) {
  return sim::FreeCallback(env, handle, index, &HALSIM_CancelDriverStationTestCallback);
}

JNIEXPORT jboolean JNICALL Java_edu_wpi_first_hal_sim_mockdata_DriverStationDataJNI_getTest
  (JNIEnv *, jclass, jint index) {
  return HALSIM_GetDriverStationTest(index);
}

JNIEXPORT void JNICALL Java_edu_wpi_first_hal_sim_mockdata_DriverStationDataJNI_setTest
  (JNIEnv *, jclass, jint index, jboolean value) {
  HALSIM_SetDriverStationTest(index, value);
}

JNIEXPORT jint JNICALL Java_edu_wpi_first_hal_sim_mockdata_DriverStationDataJNI_registerEStopCallback
  (JNIEnv * env, jclass, jint index, jobject callback, jboolean initialNotify) {
  return sim::AllocateCallback(env, index, callback, initialNotify, &HALSIM_RegisterDriverStationEStopCallback);
}

JNIEXPORT void JNICALL Java_edu_wpi_first_hal_sim_mockdata_DriverStationDataJNI_cancelEStopCallback
  (JNIEnv * env, jclass, jint index, jint handle) {
  return sim::FreeCallback(env, handle, index, &HALSIM_CancelDriverStationEStopCallback);
}

JNIEXPORT jboolean JNICALL Java_edu_wpi_first_hal_sim_mockdata_DriverStationDataJNI_getEStop
  (JNIEnv *, jclass, jint index) {
  return HALSIM_GetDriverStationEStop(index);
}

JNIEXPORT void JNICALL Java_edu_wpi_first_hal_sim_mockdata_DriverStationDataJNI_setEStop
  (JNIEnv *, jclass, jint index, jboolean value) {
  HALSIM_SetDriverStationEStop(index, value);
}

JNIEXPORT jint JNICALL Java_edu_wpi_first_hal_sim_mockdata_DriverStationDataJNI_registerFmsAttachedCallback
  (JNIEnv * env, jclass, jint index, jobject callback, jboolean initialNotify) {
  return sim::AllocateCallback(env, index, callback, initialNotify, &HALSIM_RegisterDriverStationFmsAttachedCallback);
}

JNIEXPORT void JNICALL Java_edu_wpi_first_hal_sim_mockdata_DriverStationDataJNI_cancelFmsAttachedCallback
  (JNIEnv * env, jclass, jint index, jint handle) {
  return sim::FreeCallback(env, handle, index, &HALSIM_CancelDriverStationFmsAttachedCallback);
}

JNIEXPORT jboolean JNICALL Java_edu_wpi_first_hal_sim_mockdata_DriverStationDataJNI_getFmsAttached
  (JNIEnv *, jclass, jint index) {
  return HALSIM_GetDriverStationFmsAttached(index);
}

JNIEXPORT void JNICALL Java_edu_wpi_first_hal_sim_mockdata_DriverStationDataJNI_setFmsAttached
  (JNIEnv *, jclass, jint index, jboolean value) {
  HALSIM_SetDriverStationFmsAttached(index, value);
}

JNIEXPORT jint JNICALL Java_edu_wpi_first_hal_sim_mockdata_DriverStationDataJNI_registerDsAttachedCallback
  (JNIEnv * env, jclass, jint index, jobject callback, jboolean initialNotify) {
  return sim::AllocateCallback(env, index, callback, initialNotify, &HALSIM_RegisterDriverStationDsAttachedCallback);
}

JNIEXPORT void JNICALL Java_edu_wpi_first_hal_sim_mockdata_DriverStationDataJNI_cancelDsAttachedCallback
  (JNIEnv * env, jclass, jint index, jint handle) {
  return sim::FreeCallback(env, handle, index, &HALSIM_CancelDriverStationDsAttachedCallback);
}

JNIEXPORT jboolean JNICALL Java_edu_wpi_first_hal_sim_mockdata_DriverStationDataJNI_getDsAttached
  (JNIEnv *, jclass, jint index) {
  return HALSIM_GetDriverStationDsAttached(index);
}

JNIEXPORT void JNICALL Java_edu_wpi_first_hal_sim_mockdata_DriverStationDataJNI_setDsAttached
  (JNIEnv *, jclass, jint index, jboolean value) {
  HALSIM_SetDriverStationDsAttached(index, value);
}

JNIEXPORT void JNICALL Java_edu_wpi_first_hal_sim_mockdata_DriverStationDataJNI_resetData
  (JNIEnv*, jclass, jint index) {
  HALSIM_ResetDriverStationData(index);
}

}
