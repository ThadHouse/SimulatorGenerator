package edu.wpi.first.hal.sim;

import edu.wpi.first.hal.sim.NotifyCallback;
import edu.wpi.first.hal.sim.mockdata.AnalogTriggerDataJNI;

public class AnalogTriggerSim {
  private int m_index;

  public AnalogTriggerSim(int index) {
    m_index = index;
  }

  public int registerInitializedCallback(NotifyCallback callback, boolean initialNotify) {
    return AnalogTriggerDataJNI.registerInitializedCallback(m_index, callback, initialNotify);
  }
  public void cancelInitializedCallback(int uid) {
    AnalogTriggerDataJNI.cancelInitializedCallback(m_index, uid);
  }
  public boolean getInitialized() {
    return AnalogTriggerDataJNI.getInitialized(m_index);
  }
  public void setInitialized(boolean initialized) {
    AnalogTriggerDataJNI.setInitialized(m_index, initialized);
  }

  public int registerTriggerLowerBoundCallback(NotifyCallback callback, boolean initialNotify) {
    return AnalogTriggerDataJNI.registerTriggerLowerBoundCallback(m_index, callback, initialNotify);
  }
  public void cancelTriggerLowerBoundCallback(int uid) {
    AnalogTriggerDataJNI.cancelTriggerLowerBoundCallback(m_index, uid);
  }
  public double getTriggerLowerBound() {
    return AnalogTriggerDataJNI.getTriggerLowerBound(m_index);
  }
  public void setTriggerLowerBound(double triggerLowerBound) {
    AnalogTriggerDataJNI.setTriggerLowerBound(m_index, triggerLowerBound);
  }

  public int registerTriggerUpperBoundCallback(NotifyCallback callback, boolean initialNotify) {
    return AnalogTriggerDataJNI.registerTriggerUpperBoundCallback(m_index, callback, initialNotify);
  }
  public void cancelTriggerUpperBoundCallback(int uid) {
    AnalogTriggerDataJNI.cancelTriggerUpperBoundCallback(m_index, uid);
  }
  public double getTriggerUpperBound() {
    return AnalogTriggerDataJNI.getTriggerUpperBound(m_index);
  }
  public void setTriggerUpperBound(double triggerUpperBound) {
    AnalogTriggerDataJNI.setTriggerUpperBound(m_index, triggerUpperBound);
  }

  public void resetData() {
    AnalogTriggerDataJNI.resetData(m_index);
  }
}
