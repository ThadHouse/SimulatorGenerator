package edu.wpi.first.hal.sim;

import edu.wpi.first.hal.sim.NotifyCallback;
import edu.wpi.first.hal.sim.mockdata.DriverStationDataJNI;

public class DriverStationSim {
  private int m_index;

  public DriverStationSim(int index) {
    m_index = index;
  }

  public int registerEnabledCallback(NotifyCallback callback, boolean initialNotify) {
    return DriverStationDataJNI.registerEnabledCallback(m_index, callback, initialNotify);
  }
  public void cancelEnabledCallback(int uid) {
    DriverStationDataJNI.cancelEnabledCallback(m_index, uid);
  }
  public boolean getEnabled() {
    return DriverStationDataJNI.getEnabled(m_index);
  }
  public void setEnabled(boolean enabled) {
    DriverStationDataJNI.setEnabled(m_index, enabled);
  }

  public int registerAutonomousCallback(NotifyCallback callback, boolean initialNotify) {
    return DriverStationDataJNI.registerAutonomousCallback(m_index, callback, initialNotify);
  }
  public void cancelAutonomousCallback(int uid) {
    DriverStationDataJNI.cancelAutonomousCallback(m_index, uid);
  }
  public boolean getAutonomous() {
    return DriverStationDataJNI.getAutonomous(m_index);
  }
  public void setAutonomous(boolean autonomous) {
    DriverStationDataJNI.setAutonomous(m_index, autonomous);
  }

  public int registerTestCallback(NotifyCallback callback, boolean initialNotify) {
    return DriverStationDataJNI.registerTestCallback(m_index, callback, initialNotify);
  }
  public void cancelTestCallback(int uid) {
    DriverStationDataJNI.cancelTestCallback(m_index, uid);
  }
  public boolean getTest() {
    return DriverStationDataJNI.getTest(m_index);
  }
  public void setTest(boolean test) {
    DriverStationDataJNI.setTest(m_index, test);
  }

  public int registerEStopCallback(NotifyCallback callback, boolean initialNotify) {
    return DriverStationDataJNI.registerEStopCallback(m_index, callback, initialNotify);
  }
  public void cancelEStopCallback(int uid) {
    DriverStationDataJNI.cancelEStopCallback(m_index, uid);
  }
  public boolean getEStop() {
    return DriverStationDataJNI.getEStop(m_index);
  }
  public void setEStop(boolean eStop) {
    DriverStationDataJNI.setEStop(m_index, eStop);
  }

  public int registerFmsAttachedCallback(NotifyCallback callback, boolean initialNotify) {
    return DriverStationDataJNI.registerFmsAttachedCallback(m_index, callback, initialNotify);
  }
  public void cancelFmsAttachedCallback(int uid) {
    DriverStationDataJNI.cancelFmsAttachedCallback(m_index, uid);
  }
  public boolean getFmsAttached() {
    return DriverStationDataJNI.getFmsAttached(m_index);
  }
  public void setFmsAttached(boolean fmsAttached) {
    DriverStationDataJNI.setFmsAttached(m_index, fmsAttached);
  }

  public int registerDsAttachedCallback(NotifyCallback callback, boolean initialNotify) {
    return DriverStationDataJNI.registerDsAttachedCallback(m_index, callback, initialNotify);
  }
  public void cancelDsAttachedCallback(int uid) {
    DriverStationDataJNI.cancelDsAttachedCallback(m_index, uid);
  }
  public boolean getDsAttached() {
    return DriverStationDataJNI.getDsAttached(m_index);
  }
  public void setDsAttached(boolean dsAttached) {
    DriverStationDataJNI.setDsAttached(m_index, dsAttached);
  }

  public void resetData() {
    DriverStationDataJNI.resetData(m_index);
  }
}
