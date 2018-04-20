package edu.wpi.first.hal.sim;

import edu.wpi.first.hal.sim.NotifyCallback;
import edu.wpi.first.hal.sim.mockdata.DIODataJNI;

public class DIOSim {
  private int m_index;

  public DIOSim(int index) {
    m_index = index;
  }

  public int registerInitializedCallback(NotifyCallback callback, boolean initialNotify) {
    return DIODataJNI.registerInitializedCallback(m_index, callback, initialNotify);
  }
  public void cancelInitializedCallback(int uid) {
    DIODataJNI.cancelInitializedCallback(m_index, uid);
  }
  public boolean getInitialized() {
    return DIODataJNI.getInitialized(m_index);
  }
  public void setInitialized(boolean initialized) {
    DIODataJNI.setInitialized(m_index, initialized);
  }

  public int registerValueCallback(NotifyCallback callback, boolean initialNotify) {
    return DIODataJNI.registerValueCallback(m_index, callback, initialNotify);
  }
  public void cancelValueCallback(int uid) {
    DIODataJNI.cancelValueCallback(m_index, uid);
  }
  public boolean getValue() {
    return DIODataJNI.getValue(m_index);
  }
  public void setValue(boolean value) {
    DIODataJNI.setValue(m_index, value);
  }

  public int registerPulseLengthCallback(NotifyCallback callback, boolean initialNotify) {
    return DIODataJNI.registerPulseLengthCallback(m_index, callback, initialNotify);
  }
  public void cancelPulseLengthCallback(int uid) {
    DIODataJNI.cancelPulseLengthCallback(m_index, uid);
  }
  public double getPulseLength() {
    return DIODataJNI.getPulseLength(m_index);
  }
  public void setPulseLength(double pulseLength) {
    DIODataJNI.setPulseLength(m_index, pulseLength);
  }

  public int registerIsInputCallback(NotifyCallback callback, boolean initialNotify) {
    return DIODataJNI.registerIsInputCallback(m_index, callback, initialNotify);
  }
  public void cancelIsInputCallback(int uid) {
    DIODataJNI.cancelIsInputCallback(m_index, uid);
  }
  public boolean getIsInput() {
    return DIODataJNI.getIsInput(m_index);
  }
  public void setIsInput(boolean isInput) {
    DIODataJNI.setIsInput(m_index, isInput);
  }

  public int registerFilterIndexCallback(NotifyCallback callback, boolean initialNotify) {
    return DIODataJNI.registerFilterIndexCallback(m_index, callback, initialNotify);
  }
  public void cancelFilterIndexCallback(int uid) {
    DIODataJNI.cancelFilterIndexCallback(m_index, uid);
  }
  public int getFilterIndex() {
    return DIODataJNI.getFilterIndex(m_index);
  }
  public void setFilterIndex(int filterIndex) {
    DIODataJNI.setFilterIndex(m_index, filterIndex);
  }

  public void resetData() {
    DIODataJNI.resetData(m_index);
  }
}
