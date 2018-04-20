package edu.wpi.first.hal.sim;

import edu.wpi.first.hal.sim.NotifyCallback;
import edu.wpi.first.hal.sim.mockdata.SPIAccelerometerDataJNI;

public class SPIAccelerometerSim {
  private int m_index;

  public SPIAccelerometerSim(int index) {
    m_index = index;
  }

  public int registerActiveCallback(NotifyCallback callback, boolean initialNotify) {
    return SPIAccelerometerDataJNI.registerActiveCallback(m_index, callback, initialNotify);
  }
  public void cancelActiveCallback(int uid) {
    SPIAccelerometerDataJNI.cancelActiveCallback(m_index, uid);
  }
  public boolean getActive() {
    return SPIAccelerometerDataJNI.getActive(m_index);
  }
  public void setActive(boolean active) {
    SPIAccelerometerDataJNI.setActive(m_index, active);
  }

  public int registerRangeCallback(NotifyCallback callback, boolean initialNotify) {
    return SPIAccelerometerDataJNI.registerRangeCallback(m_index, callback, initialNotify);
  }
  public void cancelRangeCallback(int uid) {
    SPIAccelerometerDataJNI.cancelRangeCallback(m_index, uid);
  }
  public int getRange() {
    return SPIAccelerometerDataJNI.getRange(m_index);
  }
  public void setRange(int range) {
    SPIAccelerometerDataJNI.setRange(m_index, range);
  }

  public int registerXCallback(NotifyCallback callback, boolean initialNotify) {
    return SPIAccelerometerDataJNI.registerXCallback(m_index, callback, initialNotify);
  }
  public void cancelXCallback(int uid) {
    SPIAccelerometerDataJNI.cancelXCallback(m_index, uid);
  }
  public double getX() {
    return SPIAccelerometerDataJNI.getX(m_index);
  }
  public void setX(double x) {
    SPIAccelerometerDataJNI.setX(m_index, x);
  }

  public int registerYCallback(NotifyCallback callback, boolean initialNotify) {
    return SPIAccelerometerDataJNI.registerYCallback(m_index, callback, initialNotify);
  }
  public void cancelYCallback(int uid) {
    SPIAccelerometerDataJNI.cancelYCallback(m_index, uid);
  }
  public double getY() {
    return SPIAccelerometerDataJNI.getY(m_index);
  }
  public void setY(double y) {
    SPIAccelerometerDataJNI.setY(m_index, y);
  }

  public int registerZCallback(NotifyCallback callback, boolean initialNotify) {
    return SPIAccelerometerDataJNI.registerZCallback(m_index, callback, initialNotify);
  }
  public void cancelZCallback(int uid) {
    SPIAccelerometerDataJNI.cancelZCallback(m_index, uid);
  }
  public double getZ() {
    return SPIAccelerometerDataJNI.getZ(m_index);
  }
  public void setZ(double z) {
    SPIAccelerometerDataJNI.setZ(m_index, z);
  }

  public void resetData() {
    SPIAccelerometerDataJNI.resetData(m_index);
  }
}
