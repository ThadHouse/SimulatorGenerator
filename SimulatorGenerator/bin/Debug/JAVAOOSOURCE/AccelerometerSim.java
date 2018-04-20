package edu.wpi.first.hal.sim;

import edu.wpi.first.hal.sim.NotifyCallback;
import edu.wpi.first.hal.sim.mockdata.AccelerometerDataJNI;

public class AccelerometerSim {
  private int m_index;

  public AccelerometerSim(int index) {
    m_index = index;
  }

  public int registerActiveCallback(NotifyCallback callback, boolean initialNotify) {
    return AccelerometerDataJNI.registerActiveCallback(m_index, callback, initialNotify);
  }
  public void cancelActiveCallback(int uid) {
    AccelerometerDataJNI.cancelActiveCallback(m_index, uid);
  }
  public boolean getActive() {
    return AccelerometerDataJNI.getActive(m_index);
  }
  public void setActive(boolean active) {
    AccelerometerDataJNI.setActive(m_index, active);
  }

  public int registerRangeCallback(NotifyCallback callback, boolean initialNotify) {
    return AccelerometerDataJNI.registerRangeCallback(m_index, callback, initialNotify);
  }
  public void cancelRangeCallback(int uid) {
    AccelerometerDataJNI.cancelRangeCallback(m_index, uid);
  }
  public int getRange() {
    return AccelerometerDataJNI.getRange(m_index);
  }
  public void setRange(int range) {
    AccelerometerDataJNI.setRange(m_index, range);
  }

  public int registerXCallback(NotifyCallback callback, boolean initialNotify) {
    return AccelerometerDataJNI.registerXCallback(m_index, callback, initialNotify);
  }
  public void cancelXCallback(int uid) {
    AccelerometerDataJNI.cancelXCallback(m_index, uid);
  }
  public double getX() {
    return AccelerometerDataJNI.getX(m_index);
  }
  public void setX(double x) {
    AccelerometerDataJNI.setX(m_index, x);
  }

  public int registerYCallback(NotifyCallback callback, boolean initialNotify) {
    return AccelerometerDataJNI.registerYCallback(m_index, callback, initialNotify);
  }
  public void cancelYCallback(int uid) {
    AccelerometerDataJNI.cancelYCallback(m_index, uid);
  }
  public double getY() {
    return AccelerometerDataJNI.getY(m_index);
  }
  public void setY(double y) {
    AccelerometerDataJNI.setY(m_index, y);
  }

  public int registerZCallback(NotifyCallback callback, boolean initialNotify) {
    return AccelerometerDataJNI.registerZCallback(m_index, callback, initialNotify);
  }
  public void cancelZCallback(int uid) {
    AccelerometerDataJNI.cancelZCallback(m_index, uid);
  }
  public double getZ() {
    return AccelerometerDataJNI.getZ(m_index);
  }
  public void setZ(double z) {
    AccelerometerDataJNI.setZ(m_index, z);
  }

  public void resetData() {
    AccelerometerDataJNI.resetData(m_index);
  }
}
