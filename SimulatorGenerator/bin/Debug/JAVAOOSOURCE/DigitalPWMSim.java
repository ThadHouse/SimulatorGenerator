package edu.wpi.first.hal.sim;

import edu.wpi.first.hal.sim.NotifyCallback;
import edu.wpi.first.hal.sim.mockdata.DigitalPWMDataJNI;

public class DigitalPWMSim {
  private int m_index;

  public DigitalPWMSim(int index) {
    m_index = index;
  }

  public int registerInitializedCallback(NotifyCallback callback, boolean initialNotify) {
    return DigitalPWMDataJNI.registerInitializedCallback(m_index, callback, initialNotify);
  }
  public void cancelInitializedCallback(int uid) {
    DigitalPWMDataJNI.cancelInitializedCallback(m_index, uid);
  }
  public boolean getInitialized() {
    return DigitalPWMDataJNI.getInitialized(m_index);
  }
  public void setInitialized(boolean initialized) {
    DigitalPWMDataJNI.setInitialized(m_index, initialized);
  }

  public int registerDutyCycleCallback(NotifyCallback callback, boolean initialNotify) {
    return DigitalPWMDataJNI.registerDutyCycleCallback(m_index, callback, initialNotify);
  }
  public void cancelDutyCycleCallback(int uid) {
    DigitalPWMDataJNI.cancelDutyCycleCallback(m_index, uid);
  }
  public double getDutyCycle() {
    return DigitalPWMDataJNI.getDutyCycle(m_index);
  }
  public void setDutyCycle(double dutyCycle) {
    DigitalPWMDataJNI.setDutyCycle(m_index, dutyCycle);
  }

  public int registerPinCallback(NotifyCallback callback, boolean initialNotify) {
    return DigitalPWMDataJNI.registerPinCallback(m_index, callback, initialNotify);
  }
  public void cancelPinCallback(int uid) {
    DigitalPWMDataJNI.cancelPinCallback(m_index, uid);
  }
  public int getPin() {
    return DigitalPWMDataJNI.getPin(m_index);
  }
  public void setPin(int pin) {
    DigitalPWMDataJNI.setPin(m_index, pin);
  }

  public void resetData() {
    DigitalPWMDataJNI.resetData(m_index);
  }
}
