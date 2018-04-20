package edu.wpi.first.hal.sim;

import edu.wpi.first.hal.sim.NotifyCallback;
import edu.wpi.first.hal.sim.mockdata.PWMDataJNI;

public class PWMSim {
  private int m_index;

  public PWMSim(int index) {
    m_index = index;
  }

  public int registerInitializedCallback(NotifyCallback callback, boolean initialNotify) {
    return PWMDataJNI.registerInitializedCallback(m_index, callback, initialNotify);
  }
  public void cancelInitializedCallback(int uid) {
    PWMDataJNI.cancelInitializedCallback(m_index, uid);
  }
  public boolean getInitialized() {
    return PWMDataJNI.getInitialized(m_index);
  }
  public void setInitialized(boolean initialized) {
    PWMDataJNI.setInitialized(m_index, initialized);
  }

  public int registerRawValueCallback(NotifyCallback callback, boolean initialNotify) {
    return PWMDataJNI.registerRawValueCallback(m_index, callback, initialNotify);
  }
  public void cancelRawValueCallback(int uid) {
    PWMDataJNI.cancelRawValueCallback(m_index, uid);
  }
  public int getRawValue() {
    return PWMDataJNI.getRawValue(m_index);
  }
  public void setRawValue(int rawValue) {
    PWMDataJNI.setRawValue(m_index, rawValue);
  }

  public int registerSpeedCallback(NotifyCallback callback, boolean initialNotify) {
    return PWMDataJNI.registerSpeedCallback(m_index, callback, initialNotify);
  }
  public void cancelSpeedCallback(int uid) {
    PWMDataJNI.cancelSpeedCallback(m_index, uid);
  }
  public double getSpeed() {
    return PWMDataJNI.getSpeed(m_index);
  }
  public void setSpeed(double speed) {
    PWMDataJNI.setSpeed(m_index, speed);
  }

  public int registerPositionCallback(NotifyCallback callback, boolean initialNotify) {
    return PWMDataJNI.registerPositionCallback(m_index, callback, initialNotify);
  }
  public void cancelPositionCallback(int uid) {
    PWMDataJNI.cancelPositionCallback(m_index, uid);
  }
  public double getPosition() {
    return PWMDataJNI.getPosition(m_index);
  }
  public void setPosition(double position) {
    PWMDataJNI.setPosition(m_index, position);
  }

  public int registerPeriodScaleCallback(NotifyCallback callback, boolean initialNotify) {
    return PWMDataJNI.registerPeriodScaleCallback(m_index, callback, initialNotify);
  }
  public void cancelPeriodScaleCallback(int uid) {
    PWMDataJNI.cancelPeriodScaleCallback(m_index, uid);
  }
  public int getPeriodScale() {
    return PWMDataJNI.getPeriodScale(m_index);
  }
  public void setPeriodScale(int periodScale) {
    PWMDataJNI.setPeriodScale(m_index, periodScale);
  }

  public int registerZeroLatchCallback(NotifyCallback callback, boolean initialNotify) {
    return PWMDataJNI.registerZeroLatchCallback(m_index, callback, initialNotify);
  }
  public void cancelZeroLatchCallback(int uid) {
    PWMDataJNI.cancelZeroLatchCallback(m_index, uid);
  }
  public boolean getZeroLatch() {
    return PWMDataJNI.getZeroLatch(m_index);
  }
  public void setZeroLatch(boolean zeroLatch) {
    PWMDataJNI.setZeroLatch(m_index, zeroLatch);
  }

  public void resetData() {
    PWMDataJNI.resetData(m_index);
  }
}
