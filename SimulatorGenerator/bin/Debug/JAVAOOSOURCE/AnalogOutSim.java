package edu.wpi.first.hal.sim;

import edu.wpi.first.hal.sim.NotifyCallback;
import edu.wpi.first.hal.sim.mockdata.AnalogOutDataJNI;

public class AnalogOutSim {
  private int m_index;

  public AnalogOutSim(int index) {
    m_index = index;
  }

  public int registerVoltageCallback(NotifyCallback callback, boolean initialNotify) {
    return AnalogOutDataJNI.registerVoltageCallback(m_index, callback, initialNotify);
  }
  public void cancelVoltageCallback(int uid) {
    AnalogOutDataJNI.cancelVoltageCallback(m_index, uid);
  }
  public double getVoltage() {
    return AnalogOutDataJNI.getVoltage(m_index);
  }
  public void setVoltage(double voltage) {
    AnalogOutDataJNI.setVoltage(m_index, voltage);
  }

  public int registerInitializedCallback(NotifyCallback callback, boolean initialNotify) {
    return AnalogOutDataJNI.registerInitializedCallback(m_index, callback, initialNotify);
  }
  public void cancelInitializedCallback(int uid) {
    AnalogOutDataJNI.cancelInitializedCallback(m_index, uid);
  }
  public boolean getInitialized() {
    return AnalogOutDataJNI.getInitialized(m_index);
  }
  public void setInitialized(boolean initialized) {
    AnalogOutDataJNI.setInitialized(m_index, initialized);
  }

  public void resetData() {
    AnalogOutDataJNI.resetData(m_index);
  }
}
