#include "edu_wpi_first_hal_sim_AccelerometerSim.h"
#include "MockData/AccelerometerData.h"
#include <jni.h>
#include "CallbackStore.h"

extern "C" {

JNIEXPORT jint JNICALL Java_edu_wpi_first_hal_sim_AccelerometerSim_registerActiveCallback
  (JNIEnv * env, jclass, jint index, jobject callback, jboolean initialNotify) {
  return sim::AllocateCallback(env, index, callback, initialNotify, &HALSIM_RegisterAccelerometerActiveCallback);
}

JNIEXPORT void JNICALL Java_edu_wpi_first_hal_sim_AccelerometerSim_cancelActiveCallback
  (JNIEnv * env, jclass, jint index, jint handle) {
  return sim::FreeCallback(env, handle, index, &HALSIM_CancelAccelerometerActiveCallback);
}

JNIEXPORT jboolean JNICALL Java_edu_wpi_first_hal_sim_AccelerometerSim_getActive
  (JNIEnv *, jclass, jint index) {
  return HALSIM_GetAccelerometerActive(index);
}

JNIEXPORT void JNICALL Java_edu_wpi_first_hal_sim_AccelerometerSim_setActive
  (JNIEnv *, jclass, jint index, jboolean value) {
  HALSIM_SetAccelerometerActive(index, value);
}

JNIEXPORT jint JNICALL Java_edu_wpi_first_hal_sim_AccelerometerSim_registerRangeCallback
  (JNIEnv * env, jclass, jint index, jobject callback, jboolean initialNotify) {
  return sim::AllocateCallback(env, index, callback, initialNotify, &HALSIM_RegisterAccelerometerRangeCallback);
}

JNIEXPORT void JNICALL Java_edu_wpi_first_hal_sim_AccelerometerSim_cancelRangeCallback
  (JNIEnv * env, jclass, jint index, jint handle) {
  return sim::FreeCallback(env, handle, index, &HALSIM_CancelAccelerometerRangeCallback);
}

JNIEXPORT jint JNICALL Java_edu_wpi_first_hal_sim_AccelerometerSim_getRange
  (JNIEnv *, jclass, jint index) {
  return HALSIM_GetAccelerometerRange(index);
}

JNIEXPORT void JNICALL Java_edu_wpi_first_hal_sim_AccelerometerSim_setRange
  (JNIEnv *, jclass, jint index, jint value) {
  HALSIM_SetAccelerometerRange(index, value);
}

JNIEXPORT jint JNICALL Java_edu_wpi_first_hal_sim_AccelerometerSim_registerXCallback
  (JNIEnv * env, jclass, jint index, jobject callback, jboolean initialNotify) {
  return sim::AllocateCallback(env, index, callback, initialNotify, &HALSIM_RegisterAccelerometerXCallback);
}

JNIEXPORT void JNICALL Java_edu_wpi_first_hal_sim_AccelerometerSim_cancelXCallback
  (JNIEnv * env, jclass, jint index, jint handle) {
  return sim::FreeCallback(env, handle, index, &HALSIM_CancelAccelerometerXCallback);
}

JNIEXPORT jdouble JNICALL Java_edu_wpi_first_hal_sim_AccelerometerSim_getX
  (JNIEnv *, jclass, jint index) {
  return HALSIM_GetAccelerometerX(index);
}

JNIEXPORT void JNICALL Java_edu_wpi_first_hal_sim_AccelerometerSim_setX
  (JNIEnv *, jclass, jint index, jdouble value) {
  HALSIM_SetAccelerometerX(index, value);
}

JNIEXPORT jint JNICALL Java_edu_wpi_first_hal_sim_AccelerometerSim_registerYCallback
  (JNIEnv * env, jclass, jint index, jobject callback, jboolean initialNotify) {
  return sim::AllocateCallback(env, index, callback, initialNotify, &HALSIM_RegisterAccelerometerYCallback);
}

JNIEXPORT void JNICALL Java_edu_wpi_first_hal_sim_AccelerometerSim_cancelYCallback
  (JNIEnv * env, jclass, jint index, jint handle) {
  return sim::FreeCallback(env, handle, index, &HALSIM_CancelAccelerometerYCallback);
}

JNIEXPORT jdouble JNICALL Java_edu_wpi_first_hal_sim_AccelerometerSim_getY
  (JNIEnv *, jclass, jint index) {
  return HALSIM_GetAccelerometerY(index);
}

JNIEXPORT void JNICALL Java_edu_wpi_first_hal_sim_AccelerometerSim_setY
  (JNIEnv *, jclass, jint index, jdouble value) {
  HALSIM_SetAccelerometerY(index, value);
}

JNIEXPORT jint JNICALL Java_edu_wpi_first_hal_sim_AccelerometerSim_registerZCallback
  (JNIEnv * env, jclass, jint index, jobject callback, jboolean initialNotify) {
  return sim::AllocateCallback(env, index, callback, initialNotify, &HALSIM_RegisterAccelerometerZCallback);
}

JNIEXPORT void JNICALL Java_edu_wpi_first_hal_sim_AccelerometerSim_cancelZCallback
  (JNIEnv * env, jclass, jint index, jint handle) {
  return sim::FreeCallback(env, handle, index, &HALSIM_CancelAccelerometerZCallback);
}

JNIEXPORT jdouble JNICALL Java_edu_wpi_first_hal_sim_AccelerometerSim_getZ
  (JNIEnv *, jclass, jint index) {
  return HALSIM_GetAccelerometerZ(index);
}

JNIEXPORT void JNICALL Java_edu_wpi_first_hal_sim_AccelerometerSim_setZ
  (JNIEnv *, jclass, jint index, jdouble value) {
  HALSIM_SetAccelerometerZ(index, value);
}

JNIEXPORT void JNICALL Java_edu_wpi_first_hal_sim_AccelerometerSim_resetData
  (JNIEnv*, jclass, jint index) {
  HALSIM_ResetAccelerometerData(index);
}

}
