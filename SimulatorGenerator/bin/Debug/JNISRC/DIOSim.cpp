#include "edu_wpi_first_hal_sim_DIOSim.h"
#include "MockData/DIOData.h"
#include <jni.h>
#include "CallbackStore.h"

extern "C" {

JNIEXPORT jint JNICALL Java_edu_wpi_first_hal_sim_DIOSim_registerInitializedCallback
  (JNIEnv * env, jclass, jint index, jobject callback, jboolean initialNotify) {
  return sim::AllocateCallback(env, index, callback, initialNotify, &HALSIM_RegisterDIOInitializedCallback);
}

JNIEXPORT void JNICALL Java_edu_wpi_first_hal_sim_DIOSim_cancelInitializedCallback
  (JNIEnv * env, jclass, jint index, jint handle) {
  return sim::FreeCallback(env, handle, index, &HALSIM_CancelDIOInitializedCallback);
}

JNIEXPORT jboolean JNICALL Java_edu_wpi_first_hal_sim_DIOSim_getInitialized
  (JNIEnv *, jclass, jint index) {
  return HALSIM_GetDIOInitialized(index);
}

JNIEXPORT void JNICALL Java_edu_wpi_first_hal_sim_DIOSim_setInitialized
  (JNIEnv *, jclass, jint index, jboolean value) {
  HALSIM_SetDIOInitialized(index, value);
}

JNIEXPORT jint JNICALL Java_edu_wpi_first_hal_sim_DIOSim_registerValueCallback
  (JNIEnv * env, jclass, jint index, jobject callback, jboolean initialNotify) {
  return sim::AllocateCallback(env, index, callback, initialNotify, &HALSIM_RegisterDIOValueCallback);
}

JNIEXPORT void JNICALL Java_edu_wpi_first_hal_sim_DIOSim_cancelValueCallback
  (JNIEnv * env, jclass, jint index, jint handle) {
  return sim::FreeCallback(env, handle, index, &HALSIM_CancelDIOValueCallback);
}

JNIEXPORT jboolean JNICALL Java_edu_wpi_first_hal_sim_DIOSim_getValue
  (JNIEnv *, jclass, jint index) {
  return HALSIM_GetDIOValue(index);
}

JNIEXPORT void JNICALL Java_edu_wpi_first_hal_sim_DIOSim_setValue
  (JNIEnv *, jclass, jint index, jboolean value) {
  HALSIM_SetDIOValue(index, value);
}

JNIEXPORT jint JNICALL Java_edu_wpi_first_hal_sim_DIOSim_registerPulseLengthCallback
  (JNIEnv * env, jclass, jint index, jobject callback, jboolean initialNotify) {
  return sim::AllocateCallback(env, index, callback, initialNotify, &HALSIM_RegisterDIOPulseLengthCallback);
}

JNIEXPORT void JNICALL Java_edu_wpi_first_hal_sim_DIOSim_cancelPulseLengthCallback
  (JNIEnv * env, jclass, jint index, jint handle) {
  return sim::FreeCallback(env, handle, index, &HALSIM_CancelDIOPulseLengthCallback);
}

JNIEXPORT jdouble JNICALL Java_edu_wpi_first_hal_sim_DIOSim_getPulseLength
  (JNIEnv *, jclass, jint index) {
  return HALSIM_GetDIOPulseLength(index);
}

JNIEXPORT void JNICALL Java_edu_wpi_first_hal_sim_DIOSim_setPulseLength
  (JNIEnv *, jclass, jint index, jdouble value) {
  HALSIM_SetDIOPulseLength(index, value);
}

JNIEXPORT jint JNICALL Java_edu_wpi_first_hal_sim_DIOSim_registerIsInputCallback
  (JNIEnv * env, jclass, jint index, jobject callback, jboolean initialNotify) {
  return sim::AllocateCallback(env, index, callback, initialNotify, &HALSIM_RegisterDIOIsInputCallback);
}

JNIEXPORT void JNICALL Java_edu_wpi_first_hal_sim_DIOSim_cancelIsInputCallback
  (JNIEnv * env, jclass, jint index, jint handle) {
  return sim::FreeCallback(env, handle, index, &HALSIM_CancelDIOIsInputCallback);
}

JNIEXPORT jboolean JNICALL Java_edu_wpi_first_hal_sim_DIOSim_getIsInput
  (JNIEnv *, jclass, jint index) {
  return HALSIM_GetDIOIsInput(index);
}

JNIEXPORT void JNICALL Java_edu_wpi_first_hal_sim_DIOSim_setIsInput
  (JNIEnv *, jclass, jint index, jboolean value) {
  HALSIM_SetDIOIsInput(index, value);
}

JNIEXPORT jint JNICALL Java_edu_wpi_first_hal_sim_DIOSim_registerFilterIndexCallback
  (JNIEnv * env, jclass, jint index, jobject callback, jboolean initialNotify) {
  return sim::AllocateCallback(env, index, callback, initialNotify, &HALSIM_RegisterDIOFilterIndexCallback);
}

JNIEXPORT void JNICALL Java_edu_wpi_first_hal_sim_DIOSim_cancelFilterIndexCallback
  (JNIEnv * env, jclass, jint index, jint handle) {
  return sim::FreeCallback(env, handle, index, &HALSIM_CancelDIOFilterIndexCallback);
}

JNIEXPORT jint JNICALL Java_edu_wpi_first_hal_sim_DIOSim_getFilterIndex
  (JNIEnv *, jclass, jint index) {
  return HALSIM_GetDIOFilterIndex(index);
}

JNIEXPORT void JNICALL Java_edu_wpi_first_hal_sim_DIOSim_setFilterIndex
  (JNIEnv *, jclass, jint index, jint value) {
  HALSIM_SetDIOFilterIndex(index, value);
}

JNIEXPORT void JNICALL Java_edu_wpi_first_hal_sim_DIOSim_resetData
  (JNIEnv*, jclass, jint index) {
  HALSIM_ResetDIOData(index);
}

}
