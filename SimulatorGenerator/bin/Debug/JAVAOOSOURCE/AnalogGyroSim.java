package edu.wpi.first.hal.sim;

import edu.wpi.first.hal.sim.NotifyCallback;
import edu.wpi.first.hal.sim.mockdata.AnalogGyroDataJNI;

public class AnalogGyroSim {
  private int m_index;

  public AnalogGyroSim(int index) {
    m_index = index;
  }

  public int registerAngleCallback(NotifyCallback callback, boolean initialNotify) {
    return AnalogGyroDataJNI.registerAngleCallback(m_index, callback, initialNotify);
  }
  public void cancelAngleCallback(int uid) {
    AnalogGyroDataJNI.cancelAngleCallback(m_index, uid);
  }
  public double getAngle() {
    return AnalogGyroDataJNI.getAngle(m_index);
  }
  public void setAngle(double angle) {
    AnalogGyroDataJNI.setAngle(m_index, angle);
  }

  public int registerRateCallback(NotifyCallback callback, boolean initialNotify) {
    return AnalogGyroDataJNI.registerRateCallback(m_index, callback, initialNotify);
  }
  public void cancelRateCallback(int uid) {
    AnalogGyroDataJNI.cancelRateCallback(m_index, uid);
  }
  public double getRate() {
    return AnalogGyroDataJNI.getRate(m_index);
  }
  public void setRate(double rate) {
    AnalogGyroDataJNI.setRate(m_index, rate);
  }

  public int registerInitializedCallback(NotifyCallback callback, boolean initialNotify) {
    return AnalogGyroDataJNI.registerInitializedCallback(m_index, callback, initialNotify);
  }
  public void cancelInitializedCallback(int uid) {
    AnalogGyroDataJNI.cancelInitializedCallback(m_index, uid);
  }
  public boolean getInitialized() {
    return AnalogGyroDataJNI.getInitialized(m_index);
  }
  public void setInitialized(boolean initialized) {
    AnalogGyroDataJNI.setInitialized(m_index, initialized);
  }

  public void resetData() {
    AnalogGyroDataJNI.resetData(m_index);
  }
}
