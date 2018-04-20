#include "edu_wpi_first_hal_sim_RoboRioSim.h"
#include "MockData/RoboRioData.h"
#include <jni.h>
#include "CallbackStore.h"

extern "C" {

JNIEXPORT jint JNICALL Java_edu_wpi_first_hal_sim_RoboRioSim_registerFPGAButtonCallback
  (JNIEnv * env, jclass, jint index, jobject callback, jboolean initialNotify) {
  return sim::AllocateCallback(env, index, callback, initialNotify, &HALSIM_RegisterRoboRioFPGAButtonCallback);
}

JNIEXPORT void JNICALL Java_edu_wpi_first_hal_sim_RoboRioSim_cancelFPGAButtonCallback
  (JNIEnv * env, jclass, jint index, jint handle) {
  return sim::FreeCallback(env, handle, index, &HALSIM_CancelRoboRioFPGAButtonCallback);
}

JNIEXPORT jboolean JNICALL Java_edu_wpi_first_hal_sim_RoboRioSim_getFPGAButton
  (JNIEnv *, jclass, jint index) {
  return HALSIM_GetRoboRioFPGAButton(index);
}

JNIEXPORT void JNICALL Java_edu_wpi_first_hal_sim_RoboRioSim_setFPGAButton
  (JNIEnv *, jclass, jint index, jboolean value) {
  HALSIM_SetRoboRioFPGAButton(index, value);
}

JNIEXPORT jint JNICALL Java_edu_wpi_first_hal_sim_RoboRioSim_registerVInVoltageCallback
  (JNIEnv * env, jclass, jint index, jobject callback, jboolean initialNotify) {
  return sim::AllocateCallback(env, index, callback, initialNotify, &HALSIM_RegisterRoboRioVInVoltageCallback);
}

JNIEXPORT void JNICALL Java_edu_wpi_first_hal_sim_RoboRioSim_cancelVInVoltageCallback
  (JNIEnv * env, jclass, jint index, jint handle) {
  return sim::FreeCallback(env, handle, index, &HALSIM_CancelRoboRioVInVoltageCallback);
}

JNIEXPORT jdouble JNICALL Java_edu_wpi_first_hal_sim_RoboRioSim_getVInVoltage
  (JNIEnv *, jclass, jint index) {
  return HALSIM_GetRoboRioVInVoltage(index);
}

JNIEXPORT void JNICALL Java_edu_wpi_first_hal_sim_RoboRioSim_setVInVoltage
  (JNIEnv *, jclass, jint index, jdouble value) {
  HALSIM_SetRoboRioVInVoltage(index, value);
}

JNIEXPORT jint JNICALL Java_edu_wpi_first_hal_sim_RoboRioSim_registerVInCurrentCallback
  (JNIEnv * env, jclass, jint index, jobject callback, jboolean initialNotify) {
  return sim::AllocateCallback(env, index, callback, initialNotify, &HALSIM_RegisterRoboRioVInCurrentCallback);
}

JNIEXPORT void JNICALL Java_edu_wpi_first_hal_sim_RoboRioSim_cancelVInCurrentCallback
  (JNIEnv * env, jclass, jint index, jint handle) {
  return sim::FreeCallback(env, handle, index, &HALSIM_CancelRoboRioVInCurrentCallback);
}

JNIEXPORT jdouble JNICALL Java_edu_wpi_first_hal_sim_RoboRioSim_getVInCurrent
  (JNIEnv *, jclass, jint index) {
  return HALSIM_GetRoboRioVInCurrent(index);
}

JNIEXPORT void JNICALL Java_edu_wpi_first_hal_sim_RoboRioSim_setVInCurrent
  (JNIEnv *, jclass, jint index, jdouble value) {
  HALSIM_SetRoboRioVInCurrent(index, value);
}

JNIEXPORT jint JNICALL Java_edu_wpi_first_hal_sim_RoboRioSim_registerUserVoltage6VCallback
  (JNIEnv * env, jclass, jint index, jobject callback, jboolean initialNotify) {
  return sim::AllocateCallback(env, index, callback, initialNotify, &HALSIM_RegisterRoboRioUserVoltage6VCallback);
}

JNIEXPORT void JNICALL Java_edu_wpi_first_hal_sim_RoboRioSim_cancelUserVoltage6VCallback
  (JNIEnv * env, jclass, jint index, jint handle) {
  return sim::FreeCallback(env, handle, index, &HALSIM_CancelRoboRioUserVoltage6VCallback);
}

JNIEXPORT jdouble JNICALL Java_edu_wpi_first_hal_sim_RoboRioSim_getUserVoltage6V
  (JNIEnv *, jclass, jint index) {
  return HALSIM_GetRoboRioUserVoltage6V(index);
}

JNIEXPORT void JNICALL Java_edu_wpi_first_hal_sim_RoboRioSim_setUserVoltage6V
  (JNIEnv *, jclass, jint index, jdouble value) {
  HALSIM_SetRoboRioUserVoltage6V(index, value);
}

JNIEXPORT jint JNICALL Java_edu_wpi_first_hal_sim_RoboRioSim_registerUserCurrent6VCallback
  (JNIEnv * env, jclass, jint index, jobject callback, jboolean initialNotify) {
  return sim::AllocateCallback(env, index, callback, initialNotify, &HALSIM_RegisterRoboRioUserCurrent6VCallback);
}

JNIEXPORT void JNICALL Java_edu_wpi_first_hal_sim_RoboRioSim_cancelUserCurrent6VCallback
  (JNIEnv * env, jclass, jint index, jint handle) {
  return sim::FreeCallback(env, handle, index, &HALSIM_CancelRoboRioUserCurrent6VCallback);
}

JNIEXPORT jdouble JNICALL Java_edu_wpi_first_hal_sim_RoboRioSim_getUserCurrent6V
  (JNIEnv *, jclass, jint index) {
  return HALSIM_GetRoboRioUserCurrent6V(index);
}

JNIEXPORT void JNICALL Java_edu_wpi_first_hal_sim_RoboRioSim_setUserCurrent6V
  (JNIEnv *, jclass, jint index, jdouble value) {
  HALSIM_SetRoboRioUserCurrent6V(index, value);
}

JNIEXPORT jint JNICALL Java_edu_wpi_first_hal_sim_RoboRioSim_registerUserActive6VCallback
  (JNIEnv * env, jclass, jint index, jobject callback, jboolean initialNotify) {
  return sim::AllocateCallback(env, index, callback, initialNotify, &HALSIM_RegisterRoboRioUserActive6VCallback);
}

JNIEXPORT void JNICALL Java_edu_wpi_first_hal_sim_RoboRioSim_cancelUserActive6VCallback
  (JNIEnv * env, jclass, jint index, jint handle) {
  return sim::FreeCallback(env, handle, index, &HALSIM_CancelRoboRioUserActive6VCallback);
}

JNIEXPORT jboolean JNICALL Java_edu_wpi_first_hal_sim_RoboRioSim_getUserActive6V
  (JNIEnv *, jclass, jint index) {
  return HALSIM_GetRoboRioUserActive6V(index);
}

JNIEXPORT void JNICALL Java_edu_wpi_first_hal_sim_RoboRioSim_setUserActive6V
  (JNIEnv *, jclass, jint index, jboolean value) {
  HALSIM_SetRoboRioUserActive6V(index, value);
}

JNIEXPORT jint JNICALL Java_edu_wpi_first_hal_sim_RoboRioSim_registerUserVoltage5VCallback
  (JNIEnv * env, jclass, jint index, jobject callback, jboolean initialNotify) {
  return sim::AllocateCallback(env, index, callback, initialNotify, &HALSIM_RegisterRoboRioUserVoltage5VCallback);
}

JNIEXPORT void JNICALL Java_edu_wpi_first_hal_sim_RoboRioSim_cancelUserVoltage5VCallback
  (JNIEnv * env, jclass, jint index, jint handle) {
  return sim::FreeCallback(env, handle, index, &HALSIM_CancelRoboRioUserVoltage5VCallback);
}

JNIEXPORT jdouble JNICALL Java_edu_wpi_first_hal_sim_RoboRioSim_getUserVoltage5V
  (JNIEnv *, jclass, jint index) {
  return HALSIM_GetRoboRioUserVoltage5V(index);
}

JNIEXPORT void JNICALL Java_edu_wpi_first_hal_sim_RoboRioSim_setUserVoltage5V
  (JNIEnv *, jclass, jint index, jdouble value) {
  HALSIM_SetRoboRioUserVoltage5V(index, value);
}

JNIEXPORT jint JNICALL Java_edu_wpi_first_hal_sim_RoboRioSim_registerUserCurrent5VCallback
  (JNIEnv * env, jclass, jint index, jobject callback, jboolean initialNotify) {
  return sim::AllocateCallback(env, index, callback, initialNotify, &HALSIM_RegisterRoboRioUserCurrent5VCallback);
}

JNIEXPORT void JNICALL Java_edu_wpi_first_hal_sim_RoboRioSim_cancelUserCurrent5VCallback
  (JNIEnv * env, jclass, jint index, jint handle) {
  return sim::FreeCallback(env, handle, index, &HALSIM_CancelRoboRioUserCurrent5VCallback);
}

JNIEXPORT jdouble JNICALL Java_edu_wpi_first_hal_sim_RoboRioSim_getUserCurrent5V
  (JNIEnv *, jclass, jint index) {
  return HALSIM_GetRoboRioUserCurrent5V(index);
}

JNIEXPORT void JNICALL Java_edu_wpi_first_hal_sim_RoboRioSim_setUserCurrent5V
  (JNIEnv *, jclass, jint index, jdouble value) {
  HALSIM_SetRoboRioUserCurrent5V(index, value);
}

JNIEXPORT jint JNICALL Java_edu_wpi_first_hal_sim_RoboRioSim_registerUserActive5VCallback
  (JNIEnv * env, jclass, jint index, jobject callback, jboolean initialNotify) {
  return sim::AllocateCallback(env, index, callback, initialNotify, &HALSIM_RegisterRoboRioUserActive5VCallback);
}

JNIEXPORT void JNICALL Java_edu_wpi_first_hal_sim_RoboRioSim_cancelUserActive5VCallback
  (JNIEnv * env, jclass, jint index, jint handle) {
  return sim::FreeCallback(env, handle, index, &HALSIM_CancelRoboRioUserActive5VCallback);
}

JNIEXPORT jboolean JNICALL Java_edu_wpi_first_hal_sim_RoboRioSim_getUserActive5V
  (JNIEnv *, jclass, jint index) {
  return HALSIM_GetRoboRioUserActive5V(index);
}

JNIEXPORT void JNICALL Java_edu_wpi_first_hal_sim_RoboRioSim_setUserActive5V
  (JNIEnv *, jclass, jint index, jboolean value) {
  HALSIM_SetRoboRioUserActive5V(index, value);
}

JNIEXPORT jint JNICALL Java_edu_wpi_first_hal_sim_RoboRioSim_registerUserVoltage3V3Callback
  (JNIEnv * env, jclass, jint index, jobject callback, jboolean initialNotify) {
  return sim::AllocateCallback(env, index, callback, initialNotify, &HALSIM_RegisterRoboRioUserVoltage3V3Callback);
}

JNIEXPORT void JNICALL Java_edu_wpi_first_hal_sim_RoboRioSim_cancelUserVoltage3V3Callback
  (JNIEnv * env, jclass, jint index, jint handle) {
  return sim::FreeCallback(env, handle, index, &HALSIM_CancelRoboRioUserVoltage3V3Callback);
}

JNIEXPORT jdouble JNICALL Java_edu_wpi_first_hal_sim_RoboRioSim_getUserVoltage3V3
  (JNIEnv *, jclass, jint index) {
  return HALSIM_GetRoboRioUserVoltage3V3(index);
}

JNIEXPORT void JNICALL Java_edu_wpi_first_hal_sim_RoboRioSim_setUserVoltage3V3
  (JNIEnv *, jclass, jint index, jdouble value) {
  HALSIM_SetRoboRioUserVoltage3V3(index, value);
}

JNIEXPORT jint JNICALL Java_edu_wpi_first_hal_sim_RoboRioSim_registerUserCurrent3V3Callback
  (JNIEnv * env, jclass, jint index, jobject callback, jboolean initialNotify) {
  return sim::AllocateCallback(env, index, callback, initialNotify, &HALSIM_RegisterRoboRioUserCurrent3V3Callback);
}

JNIEXPORT void JNICALL Java_edu_wpi_first_hal_sim_RoboRioSim_cancelUserCurrent3V3Callback
  (JNIEnv * env, jclass, jint index, jint handle) {
  return sim::FreeCallback(env, handle, index, &HALSIM_CancelRoboRioUserCurrent3V3Callback);
}

JNIEXPORT jdouble JNICALL Java_edu_wpi_first_hal_sim_RoboRioSim_getUserCurrent3V3
  (JNIEnv *, jclass, jint index) {
  return HALSIM_GetRoboRioUserCurrent3V3(index);
}

JNIEXPORT void JNICALL Java_edu_wpi_first_hal_sim_RoboRioSim_setUserCurrent3V3
  (JNIEnv *, jclass, jint index, jdouble value) {
  HALSIM_SetRoboRioUserCurrent3V3(index, value);
}

JNIEXPORT jint JNICALL Java_edu_wpi_first_hal_sim_RoboRioSim_registerUserActive3V3Callback
  (JNIEnv * env, jclass, jint index, jobject callback, jboolean initialNotify) {
  return sim::AllocateCallback(env, index, callback, initialNotify, &HALSIM_RegisterRoboRioUserActive3V3Callback);
}

JNIEXPORT void JNICALL Java_edu_wpi_first_hal_sim_RoboRioSim_cancelUserActive3V3Callback
  (JNIEnv * env, jclass, jint index, jint handle) {
  return sim::FreeCallback(env, handle, index, &HALSIM_CancelRoboRioUserActive3V3Callback);
}

JNIEXPORT jboolean JNICALL Java_edu_wpi_first_hal_sim_RoboRioSim_getUserActive3V3
  (JNIEnv *, jclass, jint index) {
  return HALSIM_GetRoboRioUserActive3V3(index);
}

JNIEXPORT void JNICALL Java_edu_wpi_first_hal_sim_RoboRioSim_setUserActive3V3
  (JNIEnv *, jclass, jint index, jboolean value) {
  HALSIM_SetRoboRioUserActive3V3(index, value);
}

JNIEXPORT jint JNICALL Java_edu_wpi_first_hal_sim_RoboRioSim_registerUserFaults6VCallback
  (JNIEnv * env, jclass, jint index, jobject callback, jboolean initialNotify) {
  return sim::AllocateCallback(env, index, callback, initialNotify, &HALSIM_RegisterRoboRioUserFaults6VCallback);
}

JNIEXPORT void JNICALL Java_edu_wpi_first_hal_sim_RoboRioSim_cancelUserFaults6VCallback
  (JNIEnv * env, jclass, jint index, jint handle) {
  return sim::FreeCallback(env, handle, index, &HALSIM_CancelRoboRioUserFaults6VCallback);
}

JNIEXPORT jint JNICALL Java_edu_wpi_first_hal_sim_RoboRioSim_getUserFaults6V
  (JNIEnv *, jclass, jint index) {
  return HALSIM_GetRoboRioUserFaults6V(index);
}

JNIEXPORT void JNICALL Java_edu_wpi_first_hal_sim_RoboRioSim_setUserFaults6V
  (JNIEnv *, jclass, jint index, jint value) {
  HALSIM_SetRoboRioUserFaults6V(index, value);
}

JNIEXPORT jint JNICALL Java_edu_wpi_first_hal_sim_RoboRioSim_registerUserFaults5VCallback
  (JNIEnv * env, jclass, jint index, jobject callback, jboolean initialNotify) {
  return sim::AllocateCallback(env, index, callback, initialNotify, &HALSIM_RegisterRoboRioUserFaults5VCallback);
}

JNIEXPORT void JNICALL Java_edu_wpi_first_hal_sim_RoboRioSim_cancelUserFaults5VCallback
  (JNIEnv * env, jclass, jint index, jint handle) {
  return sim::FreeCallback(env, handle, index, &HALSIM_CancelRoboRioUserFaults5VCallback);
}

JNIEXPORT jint JNICALL Java_edu_wpi_first_hal_sim_RoboRioSim_getUserFaults5V
  (JNIEnv *, jclass, jint index) {
  return HALSIM_GetRoboRioUserFaults5V(index);
}

JNIEXPORT void JNICALL Java_edu_wpi_first_hal_sim_RoboRioSim_setUserFaults5V
  (JNIEnv *, jclass, jint index, jint value) {
  HALSIM_SetRoboRioUserFaults5V(index, value);
}

JNIEXPORT jint JNICALL Java_edu_wpi_first_hal_sim_RoboRioSim_registerUserFaults3V3Callback
  (JNIEnv * env, jclass, jint index, jobject callback, jboolean initialNotify) {
  return sim::AllocateCallback(env, index, callback, initialNotify, &HALSIM_RegisterRoboRioUserFaults3V3Callback);
}

JNIEXPORT void JNICALL Java_edu_wpi_first_hal_sim_RoboRioSim_cancelUserFaults3V3Callback
  (JNIEnv * env, jclass, jint index, jint handle) {
  return sim::FreeCallback(env, handle, index, &HALSIM_CancelRoboRioUserFaults3V3Callback);
}

JNIEXPORT jint JNICALL Java_edu_wpi_first_hal_sim_RoboRioSim_getUserFaults3V3
  (JNIEnv *, jclass, jint index) {
  return HALSIM_GetRoboRioUserFaults3V3(index);
}

JNIEXPORT void JNICALL Java_edu_wpi_first_hal_sim_RoboRioSim_setUserFaults3V3
  (JNIEnv *, jclass, jint index, jint value) {
  HALSIM_SetRoboRioUserFaults3V3(index, value);
}

JNIEXPORT void JNICALL Java_edu_wpi_first_hal_sim_RoboRioSim_resetData
  (JNIEnv*, jclass, jint index) {
  HALSIM_ResetRoboRioData(index);
}

}
