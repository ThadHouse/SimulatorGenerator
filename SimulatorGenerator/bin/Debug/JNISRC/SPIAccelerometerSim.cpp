#include "edu_wpi_first_hal_sim_SPIAccelerometerSim.h"
#include "MockData/SPIAccelerometerData.h"
#include <jni.h>
#include "CallbackStore.h"

extern "C" {

JNIEXPORT jint JNICALL Java_edu_wpi_first_hal_sim_SPIAccelerometerSim_registerActiveCallback
  (JNIEnv * env, jclass, jint index, jobject callback, jboolean initialNotify) {
  return sim::AllocateCallback(env, index, callback, initialNotify, &HALSIM_RegisterSPIAccelerometerActiveCallback);
}

JNIEXPORT void JNICALL Java_edu_wpi_first_hal_sim_SPIAccelerometerSim_cancelActiveCallback
  (JNIEnv * env, jclass, jint index, jint handle) {
  return sim::FreeCallback(env, handle, index, &HALSIM_CancelSPIAccelerometerActiveCallback);
}

JNIEXPORT jboolean JNICALL Java_edu_wpi_first_hal_sim_SPIAccelerometerSim_getActive
  (JNIEnv *, jclass, jint index) {
  return HALSIM_GetSPIAccelerometerActive(index);
}

JNIEXPORT void JNICALL Java_edu_wpi_first_hal_sim_SPIAccelerometerSim_setActive
  (JNIEnv *, jclass, jint index, jboolean value) {
  HALSIM_SetSPIAccelerometerActive(index, value);
}

JNIEXPORT jint JNICALL Java_edu_wpi_first_hal_sim_SPIAccelerometerSim_registerRangeCallback
  (JNIEnv * env, jclass, jint index, jobject callback, jboolean initialNotify) {
  return sim::AllocateCallback(env, index, callback, initialNotify, &HALSIM_RegisterSPIAccelerometerRangeCallback);
}

JNIEXPORT void JNICALL Java_edu_wpi_first_hal_sim_SPIAccelerometerSim_cancelRangeCallback
  (JNIEnv * env, jclass, jint index, jint handle) {
  return sim::FreeCallback(env, handle, index, &HALSIM_CancelSPIAccelerometerRangeCallback);
}

JNIEXPORT jint JNICALL Java_edu_wpi_first_hal_sim_SPIAccelerometerSim_getRange
  (JNIEnv *, jclass, jint index) {
  return HALSIM_GetSPIAccelerometerRange(index);
}

JNIEXPORT void JNICALL Java_edu_wpi_first_hal_sim_SPIAccelerometerSim_setRange
  (JNIEnv *, jclass, jint index, jint value) {
  HALSIM_SetSPIAccelerometerRange(index, value);
}

JNIEXPORT jint JNICALL Java_edu_wpi_first_hal_sim_SPIAccelerometerSim_registerXCallback
  (JNIEnv * env, jclass, jint index, jobject callback, jboolean initialNotify) {
  return sim::AllocateCallback(env, index, callback, initialNotify, &HALSIM_RegisterSPIAccelerometerXCallback);
}

JNIEXPORT void JNICALL Java_edu_wpi_first_hal_sim_SPIAccelerometerSim_cancelXCallback
  (JNIEnv * env, jclass, jint index, jint handle) {
  return sim::FreeCallback(env, handle, index, &HALSIM_CancelSPIAccelerometerXCallback);
}

JNIEXPORT jdouble JNICALL Java_edu_wpi_first_hal_sim_SPIAccelerometerSim_getX
  (JNIEnv *, jclass, jint index) {
  return HALSIM_GetSPIAccelerometerX(index);
}

JNIEXPORT void JNICALL Java_edu_wpi_first_hal_sim_SPIAccelerometerSim_setX
  (JNIEnv *, jclass, jint index, jdouble value) {
  HALSIM_SetSPIAccelerometerX(index, value);
}

JNIEXPORT jint JNICALL Java_edu_wpi_first_hal_sim_SPIAccelerometerSim_registerYCallback
  (JNIEnv * env, jclass, jint index, jobject callback, jboolean initialNotify) {
  return sim::AllocateCallback(env, index, callback, initialNotify, &HALSIM_RegisterSPIAccelerometerYCallback);
}

JNIEXPORT void JNICALL Java_edu_wpi_first_hal_sim_SPIAccelerometerSim_cancelYCallback
  (JNIEnv * env, jclass, jint index, jint handle) {
  return sim::FreeCallback(env, handle, index, &HALSIM_CancelSPIAccelerometerYCallback);
}

JNIEXPORT jdouble JNICALL Java_edu_wpi_first_hal_sim_SPIAccelerometerSim_getY
  (JNIEnv *, jclass, jint index) {
  return HALSIM_GetSPIAccelerometerY(index);
}

JNIEXPORT void JNICALL Java_edu_wpi_first_hal_sim_SPIAccelerometerSim_setY
  (JNIEnv *, jclass, jint index, jdouble value) {
  HALSIM_SetSPIAccelerometerY(index, value);
}

JNIEXPORT jint JNICALL Java_edu_wpi_first_hal_sim_SPIAccelerometerSim_registerZCallback
  (JNIEnv * env, jclass, jint index, jobject callback, jboolean initialNotify) {
  return sim::AllocateCallback(env, index, callback, initialNotify, &HALSIM_RegisterSPIAccelerometerZCallback);
}

JNIEXPORT void JNICALL Java_edu_wpi_first_hal_sim_SPIAccelerometerSim_cancelZCallback
  (JNIEnv * env, jclass, jint index, jint handle) {
  return sim::FreeCallback(env, handle, index, &HALSIM_CancelSPIAccelerometerZCallback);
}

JNIEXPORT jdouble JNICALL Java_edu_wpi_first_hal_sim_SPIAccelerometerSim_getZ
  (JNIEnv *, jclass, jint index) {
  return HALSIM_GetSPIAccelerometerZ(index);
}

JNIEXPORT void JNICALL Java_edu_wpi_first_hal_sim_SPIAccelerometerSim_setZ
  (JNIEnv *, jclass, jint index, jdouble value) {
  HALSIM_SetSPIAccelerometerZ(index, value);
}

JNIEXPORT void JNICALL Java_edu_wpi_first_hal_sim_SPIAccelerometerSim_resetData
  (JNIEnv*, jclass, jint index) {
  HALSIM_ResetSPIAccelerometerData(index);
}

}
