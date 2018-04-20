package edu.wpi.first.hal.sim;

import edu.wpi.first.hal.sim.NotifyCallback;
import edu.wpi.first.hal.sim.mockdata.AnalogInDataJNI;

public class AnalogInSim {
  private int m_index;

  public AnalogInSim(int index) {
    m_index = index;
  }

  public int registerInitializedCallback(NotifyCallback callback, boolean initialNotify) {
    return AnalogInDataJNI.registerInitializedCallback(m_index, callback, initialNotify);
  }
  public void cancelInitializedCallback(int uid) {
    AnalogInDataJNI.cancelInitializedCallback(m_index, uid);
  }
  public boolean getInitialized() {
    return AnalogInDataJNI.getInitialized(m_index);
  }
  public void setInitialized(boolean initialized) {
    AnalogInDataJNI.setInitialized(m_index, initialized);
  }

  public int registerAverageBitsCallback(NotifyCallback callback, boolean initialNotify) {
    return AnalogInDataJNI.registerAverageBitsCallback(m_index, callback, initialNotify);
  }
  public void cancelAverageBitsCallback(int uid) {
    AnalogInDataJNI.cancelAverageBitsCallback(m_index, uid);
  }
  public int getAverageBits() {
    return AnalogInDataJNI.getAverageBits(m_index);
  }
  public void setAverageBits(int averageBits) {
    AnalogInDataJNI.setAverageBits(m_index, averageBits);
  }

  public int registerOversampleBitsCallback(NotifyCallback callback, boolean initialNotify) {
    return AnalogInDataJNI.registerOversampleBitsCallback(m_index, callback, initialNotify);
  }
  public void cancelOversampleBitsCallback(int uid) {
    AnalogInDataJNI.cancelOversampleBitsCallback(m_index, uid);
  }
  public int getOversampleBits() {
    return AnalogInDataJNI.getOversampleBits(m_index);
  }
  public void setOversampleBits(int oversampleBits) {
    AnalogInDataJNI.setOversampleBits(m_index, oversampleBits);
  }

  public int registerVoltageCallback(NotifyCallback callback, boolean initialNotify) {
    return AnalogInDataJNI.registerVoltageCallback(m_index, callback, initialNotify);
  }
  public void cancelVoltageCallback(int uid) {
    AnalogInDataJNI.cancelVoltageCallback(m_index, uid);
  }
  public double getVoltage() {
    return AnalogInDataJNI.getVoltage(m_index);
  }
  public void setVoltage(double voltage) {
    AnalogInDataJNI.setVoltage(m_index, voltage);
  }

  public int registerAccumulatorInitializedCallback(NotifyCallback callback, boolean initialNotify) {
    return AnalogInDataJNI.registerAccumulatorInitializedCallback(m_index, callback, initialNotify);
  }
  public void cancelAccumulatorInitializedCallback(int uid) {
    AnalogInDataJNI.cancelAccumulatorInitializedCallback(m_index, uid);
  }
  public boolean getAccumulatorInitialized() {
    return AnalogInDataJNI.getAccumulatorInitialized(m_index);
  }
  public void setAccumulatorInitialized(boolean accumulatorInitialized) {
    AnalogInDataJNI.setAccumulatorInitialized(m_index, accumulatorInitialized);
  }

  public int registerAccumulatorValueCallback(NotifyCallback callback, boolean initialNotify) {
    return AnalogInDataJNI.registerAccumulatorValueCallback(m_index, callback, initialNotify);
  }
  public void cancelAccumulatorValueCallback(int uid) {
    AnalogInDataJNI.cancelAccumulatorValueCallback(m_index, uid);
  }
  public long getAccumulatorValue() {
    return AnalogInDataJNI.getAccumulatorValue(m_index);
  }
  public void setAccumulatorValue(long accumulatorValue) {
    AnalogInDataJNI.setAccumulatorValue(m_index, accumulatorValue);
  }

  public int registerAccumulatorCountCallback(NotifyCallback callback, boolean initialNotify) {
    return AnalogInDataJNI.registerAccumulatorCountCallback(m_index, callback, initialNotify);
  }
  public void cancelAccumulatorCountCallback(int uid) {
    AnalogInDataJNI.cancelAccumulatorCountCallback(m_index, uid);
  }
  public long getAccumulatorCount() {
    return AnalogInDataJNI.getAccumulatorCount(m_index);
  }
  public void setAccumulatorCount(long accumulatorCount) {
    AnalogInDataJNI.setAccumulatorCount(m_index, accumulatorCount);
  }

  public int registerAccumulatorCenterCallback(NotifyCallback callback, boolean initialNotify) {
    return AnalogInDataJNI.registerAccumulatorCenterCallback(m_index, callback, initialNotify);
  }
  public void cancelAccumulatorCenterCallback(int uid) {
    AnalogInDataJNI.cancelAccumulatorCenterCallback(m_index, uid);
  }
  public int getAccumulatorCenter() {
    return AnalogInDataJNI.getAccumulatorCenter(m_index);
  }
  public void setAccumulatorCenter(int accumulatorCenter) {
    AnalogInDataJNI.setAccumulatorCenter(m_index, accumulatorCenter);
  }

  public int registerAccumulatorDeadbandCallback(NotifyCallback callback, boolean initialNotify) {
    return AnalogInDataJNI.registerAccumulatorDeadbandCallback(m_index, callback, initialNotify);
  }
  public void cancelAccumulatorDeadbandCallback(int uid) {
    AnalogInDataJNI.cancelAccumulatorDeadbandCallback(m_index, uid);
  }
  public int getAccumulatorDeadband() {
    return AnalogInDataJNI.getAccumulatorDeadband(m_index);
  }
  public void setAccumulatorDeadband(int accumulatorDeadband) {
    AnalogInDataJNI.setAccumulatorDeadband(m_index, accumulatorDeadband);
  }

  public void resetData() {
    AnalogInDataJNI.resetData(m_index);
  }
}
