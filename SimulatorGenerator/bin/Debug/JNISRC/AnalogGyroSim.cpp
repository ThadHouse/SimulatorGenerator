#include "edu_wpi_first_hal_sim_AnalogGyroSim.h"
#include "MockData/AnalogGyroData.h"
#include <jni.h>
#include "CallbackStore.h"

extern "C" {

JNIEXPORT jint JNICALL Java_edu_wpi_first_hal_sim_AnalogGyroSim_registerAngleCallback
  (JNIEnv * env, jclass, jint index, jobject callback, jboolean initialNotify) {
  return sim::AllocateCallback(env, index, callback, initialNotify, &HALSIM_RegisterAnalogGyroAngleCallback);
}

JNIEXPORT void JNICALL Java_edu_wpi_first_hal_sim_AnalogGyroSim_cancelAngleCallback
  (JNIEnv * env, jclass, jint index, jint handle) {
  return sim::FreeCallback(env, handle, index, &HALSIM_CancelAnalogGyroAngleCallback);
}

JNIEXPORT jdouble JNICALL Java_edu_wpi_first_hal_sim_AnalogGyroSim_getAngle
  (JNIEnv *, jclass, jint index) {
  return HALSIM_GetAnalogGyroAngle(index);
}

JNIEXPORT void JNICALL Java_edu_wpi_first_hal_sim_AnalogGyroSim_setAngle
  (JNIEnv *, jclass, jint index, jdouble value) {
  HALSIM_SetAnalogGyroAngle(index, value);
}

JNIEXPORT jint JNICALL Java_edu_wpi_first_hal_sim_AnalogGyroSim_registerRateCallback
  (JNIEnv * env, jclass, jint index, jobject callback, jboolean initialNotify) {
  return sim::AllocateCallback(env, index, callback, initialNotify, &HALSIM_RegisterAnalogGyroRateCallback);
}

JNIEXPORT void JNICALL Java_edu_wpi_first_hal_sim_AnalogGyroSim_cancelRateCallback
  (JNIEnv * env, jclass, jint index, jint handle) {
  return sim::FreeCallback(env, handle, index, &HALSIM_CancelAnalogGyroRateCallback);
}

JNIEXPORT jdouble JNICALL Java_edu_wpi_first_hal_sim_AnalogGyroSim_getRate
  (JNIEnv *, jclass, jint index) {
  return HALSIM_GetAnalogGyroRate(index);
}

JNIEXPORT void JNICALL Java_edu_wpi_first_hal_sim_AnalogGyroSim_setRate
  (JNIEnv *, jclass, jint index, jdouble value) {
  HALSIM_SetAnalogGyroRate(index, value);
}

JNIEXPORT jint JNICALL Java_edu_wpi_first_hal_sim_AnalogGyroSim_registerInitializedCallback
  (JNIEnv * env, jclass, jint index, jobject callback, jboolean initialNotify) {
  return sim::AllocateCallback(env, index, callback, initialNotify, &HALSIM_RegisterAnalogGyroInitializedCallback);
}

JNIEXPORT void JNICALL Java_edu_wpi_first_hal_sim_AnalogGyroSim_cancelInitializedCallback
  (JNIEnv * env, jclass, jint index, jint handle) {
  return sim::FreeCallback(env, handle, index, &HALSIM_CancelAnalogGyroInitializedCallback);
}

JNIEXPORT jboolean JNICALL Java_edu_wpi_first_hal_sim_AnalogGyroSim_getInitialized
  (JNIEnv *, jclass, jint index) {
  return HALSIM_GetAnalogGyroInitialized(index);
}

JNIEXPORT void JNICALL Java_edu_wpi_first_hal_sim_AnalogGyroSim_setInitialized
  (JNIEnv *, jclass, jint index, jboolean value) {
  HALSIM_SetAnalogGyroInitialized(index, value);
}

JNIEXPORT void JNICALL Java_edu_wpi_first_hal_sim_AnalogGyroSim_resetData
  (JNIEnv*, jclass, jint index) {
  HALSIM_ResetAnalogGyroData(index);
}

}
