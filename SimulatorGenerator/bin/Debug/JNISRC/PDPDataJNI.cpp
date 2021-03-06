#include "edu_wpi_first_hal_sim_mockdata_PDPDataJNI.h"
#include "MockData/PDPData.h"
#include <jni.h>
#include "CallbackStore.h"

extern "C" {

JNIEXPORT jint JNICALL Java_edu_wpi_first_hal_sim_mockdata_PDPDataJNI_registerInitializedCallback
  (JNIEnv * env, jclass, jint index, jobject callback, jboolean initialNotify) {
  return sim::AllocateCallback(env, index, callback, initialNotify, &HALSIM_RegisterPDPInitializedCallback);
}

JNIEXPORT void JNICALL Java_edu_wpi_first_hal_sim_mockdata_PDPDataJNI_cancelInitializedCallback
  (JNIEnv * env, jclass, jint index, jint handle) {
  return sim::FreeCallback(env, handle, index, &HALSIM_CancelPDPInitializedCallback);
}

JNIEXPORT jboolean JNICALL Java_edu_wpi_first_hal_sim_mockdata_PDPDataJNI_getInitialized
  (JNIEnv *, jclass, jint index) {
  return HALSIM_GetPDPInitialized(index);
}

JNIEXPORT void JNICALL Java_edu_wpi_first_hal_sim_mockdata_PDPDataJNI_setInitialized
  (JNIEnv *, jclass, jint index, jboolean value) {
  HALSIM_SetPDPInitialized(index, value);
}

JNIEXPORT jint JNICALL Java_edu_wpi_first_hal_sim_mockdata_PDPDataJNI_registerTemperatureCallback
  (JNIEnv * env, jclass, jint index, jobject callback, jboolean initialNotify) {
  return sim::AllocateCallback(env, index, callback, initialNotify, &HALSIM_RegisterPDPTemperatureCallback);
}

JNIEXPORT void JNICALL Java_edu_wpi_first_hal_sim_mockdata_PDPDataJNI_cancelTemperatureCallback
  (JNIEnv * env, jclass, jint index, jint handle) {
  return sim::FreeCallback(env, handle, index, &HALSIM_CancelPDPTemperatureCallback);
}

JNIEXPORT jdouble JNICALL Java_edu_wpi_first_hal_sim_mockdata_PDPDataJNI_getTemperature
  (JNIEnv *, jclass, jint index) {
  return HALSIM_GetPDPTemperature(index);
}

JNIEXPORT void JNICALL Java_edu_wpi_first_hal_sim_mockdata_PDPDataJNI_setTemperature
  (JNIEnv *, jclass, jint index, jdouble value) {
  HALSIM_SetPDPTemperature(index, value);
}

JNIEXPORT jint JNICALL Java_edu_wpi_first_hal_sim_mockdata_PDPDataJNI_registerVoltageCallback
  (JNIEnv * env, jclass, jint index, jobject callback, jboolean initialNotify) {
  return sim::AllocateCallback(env, index, callback, initialNotify, &HALSIM_RegisterPDPVoltageCallback);
}

JNIEXPORT void JNICALL Java_edu_wpi_first_hal_sim_mockdata_PDPDataJNI_cancelVoltageCallback
  (JNIEnv * env, jclass, jint index, jint handle) {
  return sim::FreeCallback(env, handle, index, &HALSIM_CancelPDPVoltageCallback);
}

JNIEXPORT jdouble JNICALL Java_edu_wpi_first_hal_sim_mockdata_PDPDataJNI_getVoltage
  (JNIEnv *, jclass, jint index) {
  return HALSIM_GetPDPVoltage(index);
}

JNIEXPORT void JNICALL Java_edu_wpi_first_hal_sim_mockdata_PDPDataJNI_setVoltage
  (JNIEnv *, jclass, jint index, jdouble value) {
  HALSIM_SetPDPVoltage(index, value);
}

JNIEXPORT jint JNICALL Java_edu_wpi_first_hal_sim_mockdata_PDPDataJNI_registerCurrentCallback
  (JNIEnv * env, jclass, jint index, jobject callback, jboolean initialNotify) {
  return sim::AllocateCallback(env, index, callback, initialNotify, &HALSIM_RegisterPDPCurrentCallback);
}

JNIEXPORT void JNICALL Java_edu_wpi_first_hal_sim_mockdata_PDPDataJNI_cancelCurrentCallback
  (JNIEnv * env, jclass, jint index, jint handle) {
  return sim::FreeCallback(env, handle, index, &HALSIM_CancelPDPCurrentCallback);
}

JNIEXPORT jdouble JNICALL Java_edu_wpi_first_hal_sim_mockdata_PDPDataJNI_getCurrent
  (JNIEnv *, jclass, jint index) {
  return HALSIM_GetPDPCurrent(index);
}

JNIEXPORT void JNICALL Java_edu_wpi_first_hal_sim_mockdata_PDPDataJNI_setCurrent
  (JNIEnv *, jclass, jint index, jdouble value) {
  HALSIM_SetPDPCurrent(index, value);
}

JNIEXPORT void JNICALL Java_edu_wpi_first_hal_sim_mockdata_PDPDataJNI_resetData
  (JNIEnv*, jclass, jint index) {
  HALSIM_ResetPDPData(index);
}

}
