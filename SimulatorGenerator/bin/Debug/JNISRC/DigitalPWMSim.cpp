#include "edu_wpi_first_hal_sim_DigitalPWMSim.h"
#include "MockData/DigitalPWMData.h"
#include <jni.h>
#include "CallbackStore.h"

extern "C" {

JNIEXPORT jint JNICALL Java_edu_wpi_first_hal_sim_DigitalPWMSim_registerInitializedCallback
  (JNIEnv * env, jclass, jint index, jobject callback, jboolean initialNotify) {
  return sim::AllocateCallback(env, index, callback, initialNotify, &HALSIM_RegisterDigitalPWMInitializedCallback);
}

JNIEXPORT void JNICALL Java_edu_wpi_first_hal_sim_DigitalPWMSim_cancelInitializedCallback
  (JNIEnv * env, jclass, jint index, jint handle) {
  return sim::FreeCallback(env, handle, index, &HALSIM_CancelDigitalPWMInitializedCallback);
}

JNIEXPORT jboolean JNICALL Java_edu_wpi_first_hal_sim_DigitalPWMSim_getInitialized
  (JNIEnv *, jclass, jint index) {
  return HALSIM_GetDigitalPWMInitialized(index);
}

JNIEXPORT void JNICALL Java_edu_wpi_first_hal_sim_DigitalPWMSim_setInitialized
  (JNIEnv *, jclass, jint index, jboolean value) {
  HALSIM_SetDigitalPWMInitialized(index, value);
}

JNIEXPORT jint JNICALL Java_edu_wpi_first_hal_sim_DigitalPWMSim_registerDutyCycleCallback
  (JNIEnv * env, jclass, jint index, jobject callback, jboolean initialNotify) {
  return sim::AllocateCallback(env, index, callback, initialNotify, &HALSIM_RegisterDigitalPWMDutyCycleCallback);
}

JNIEXPORT void JNICALL Java_edu_wpi_first_hal_sim_DigitalPWMSim_cancelDutyCycleCallback
  (JNIEnv * env, jclass, jint index, jint handle) {
  return sim::FreeCallback(env, handle, index, &HALSIM_CancelDigitalPWMDutyCycleCallback);
}

JNIEXPORT jdouble JNICALL Java_edu_wpi_first_hal_sim_DigitalPWMSim_getDutyCycle
  (JNIEnv *, jclass, jint index) {
  return HALSIM_GetDigitalPWMDutyCycle(index);
}

JNIEXPORT void JNICALL Java_edu_wpi_first_hal_sim_DigitalPWMSim_setDutyCycle
  (JNIEnv *, jclass, jint index, jdouble value) {
  HALSIM_SetDigitalPWMDutyCycle(index, value);
}

JNIEXPORT jint JNICALL Java_edu_wpi_first_hal_sim_DigitalPWMSim_registerPinCallback
  (JNIEnv * env, jclass, jint index, jobject callback, jboolean initialNotify) {
  return sim::AllocateCallback(env, index, callback, initialNotify, &HALSIM_RegisterDigitalPWMPinCallback);
}

JNIEXPORT void JNICALL Java_edu_wpi_first_hal_sim_DigitalPWMSim_cancelPinCallback
  (JNIEnv * env, jclass, jint index, jint handle) {
  return sim::FreeCallback(env, handle, index, &HALSIM_CancelDigitalPWMPinCallback);
}

JNIEXPORT jint JNICALL Java_edu_wpi_first_hal_sim_DigitalPWMSim_getPin
  (JNIEnv *, jclass, jint index) {
  return HALSIM_GetDigitalPWMPin(index);
}

JNIEXPORT void JNICALL Java_edu_wpi_first_hal_sim_DigitalPWMSim_setPin
  (JNIEnv *, jclass, jint index, jint value) {
  HALSIM_SetDigitalPWMPin(index, value);
}

JNIEXPORT void JNICALL Java_edu_wpi_first_hal_sim_DigitalPWMSim_resetData
  (JNIEnv*, jclass, jint index) {
  HALSIM_ResetDigitalPWMData(index);
}

}
