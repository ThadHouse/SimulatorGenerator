package edu.wpi.first.hal.sim;

import edu.wpi.first.hal.sim.NotifyCallback;
import edu.wpi.first.hal.sim.mockdata.RelayDataJNI;

public class RelaySim {
  private int m_index;

  public RelaySim(int index) {
    m_index = index;
  }

  public int registerInitializedForwardCallback(NotifyCallback callback, boolean initialNotify) {
    return RelayDataJNI.registerInitializedForwardCallback(m_index, callback, initialNotify);
  }
  public void cancelInitializedForwardCallback(int uid) {
    RelayDataJNI.cancelInitializedForwardCallback(m_index, uid);
  }
  public boolean getInitializedForward() {
    return RelayDataJNI.getInitializedForward(m_index);
  }
  public void setInitializedForward(boolean initializedForward) {
    RelayDataJNI.setInitializedForward(m_index, initializedForward);
  }

  public int registerInitializedReverseCallback(NotifyCallback callback, boolean initialNotify) {
    return RelayDataJNI.registerInitializedReverseCallback(m_index, callback, initialNotify);
  }
  public void cancelInitializedReverseCallback(int uid) {
    RelayDataJNI.cancelInitializedReverseCallback(m_index, uid);
  }
  public boolean getInitializedReverse() {
    return RelayDataJNI.getInitializedReverse(m_index);
  }
  public void setInitializedReverse(boolean initializedReverse) {
    RelayDataJNI.setInitializedReverse(m_index, initializedReverse);
  }

  public int registerForwardCallback(NotifyCallback callback, boolean initialNotify) {
    return RelayDataJNI.registerForwardCallback(m_index, callback, initialNotify);
  }
  public void cancelForwardCallback(int uid) {
    RelayDataJNI.cancelForwardCallback(m_index, uid);
  }
  public boolean getForward() {
    return RelayDataJNI.getForward(m_index);
  }
  public void setForward(boolean forward) {
    RelayDataJNI.setForward(m_index, forward);
  }

  public int registerReverseCallback(NotifyCallback callback, boolean initialNotify) {
    return RelayDataJNI.registerReverseCallback(m_index, callback, initialNotify);
  }
  public void cancelReverseCallback(int uid) {
    RelayDataJNI.cancelReverseCallback(m_index, uid);
  }
  public boolean getReverse() {
    return RelayDataJNI.getReverse(m_index);
  }
  public void setReverse(boolean reverse) {
    RelayDataJNI.setReverse(m_index, reverse);
  }

  public void resetData() {
    RelayDataJNI.resetData(m_index);
  }
}
