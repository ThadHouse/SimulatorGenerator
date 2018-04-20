package edu.wpi.first.hal.sim;

import edu.wpi.first.hal.sim.NotifyCallback;
import edu.wpi.first.hal.sim.mockdata.EncoderDataJNI;

public class EncoderSim {
  private int m_index;

  public EncoderSim(int index) {
    m_index = index;
  }

  public int registerInitializedCallback(NotifyCallback callback, boolean initialNotify) {
    return EncoderDataJNI.registerInitializedCallback(m_index, callback, initialNotify);
  }
  public void cancelInitializedCallback(int uid) {
    EncoderDataJNI.cancelInitializedCallback(m_index, uid);
  }
  public boolean getInitialized() {
    return EncoderDataJNI.getInitialized(m_index);
  }
  public void setInitialized(boolean initialized) {
    EncoderDataJNI.setInitialized(m_index, initialized);
  }

  public int registerCountCallback(NotifyCallback callback, boolean initialNotify) {
    return EncoderDataJNI.registerCountCallback(m_index, callback, initialNotify);
  }
  public void cancelCountCallback(int uid) {
    EncoderDataJNI.cancelCountCallback(m_index, uid);
  }
  public int getCount() {
    return EncoderDataJNI.getCount(m_index);
  }
  public void setCount(int count) {
    EncoderDataJNI.setCount(m_index, count);
  }

  public int registerPeriodCallback(NotifyCallback callback, boolean initialNotify) {
    return EncoderDataJNI.registerPeriodCallback(m_index, callback, initialNotify);
  }
  public void cancelPeriodCallback(int uid) {
    EncoderDataJNI.cancelPeriodCallback(m_index, uid);
  }
  public double getPeriod() {
    return EncoderDataJNI.getPeriod(m_index);
  }
  public void setPeriod(double period) {
    EncoderDataJNI.setPeriod(m_index, period);
  }

  public int registerResetCallback(NotifyCallback callback, boolean initialNotify) {
    return EncoderDataJNI.registerResetCallback(m_index, callback, initialNotify);
  }
  public void cancelResetCallback(int uid) {
    EncoderDataJNI.cancelResetCallback(m_index, uid);
  }
  public boolean getReset() {
    return EncoderDataJNI.getReset(m_index);
  }
  public void setReset(boolean reset) {
    EncoderDataJNI.setReset(m_index, reset);
  }

  public int registerMaxPeriodCallback(NotifyCallback callback, boolean initialNotify) {
    return EncoderDataJNI.registerMaxPeriodCallback(m_index, callback, initialNotify);
  }
  public void cancelMaxPeriodCallback(int uid) {
    EncoderDataJNI.cancelMaxPeriodCallback(m_index, uid);
  }
  public double getMaxPeriod() {
    return EncoderDataJNI.getMaxPeriod(m_index);
  }
  public void setMaxPeriod(double maxPeriod) {
    EncoderDataJNI.setMaxPeriod(m_index, maxPeriod);
  }

  public int registerDirectionCallback(NotifyCallback callback, boolean initialNotify) {
    return EncoderDataJNI.registerDirectionCallback(m_index, callback, initialNotify);
  }
  public void cancelDirectionCallback(int uid) {
    EncoderDataJNI.cancelDirectionCallback(m_index, uid);
  }
  public boolean getDirection() {
    return EncoderDataJNI.getDirection(m_index);
  }
  public void setDirection(boolean direction) {
    EncoderDataJNI.setDirection(m_index, direction);
  }

  public int registerReverseDirectionCallback(NotifyCallback callback, boolean initialNotify) {
    return EncoderDataJNI.registerReverseDirectionCallback(m_index, callback, initialNotify);
  }
  public void cancelReverseDirectionCallback(int uid) {
    EncoderDataJNI.cancelReverseDirectionCallback(m_index, uid);
  }
  public boolean getReverseDirection() {
    return EncoderDataJNI.getReverseDirection(m_index);
  }
  public void setReverseDirection(boolean reverseDirection) {
    EncoderDataJNI.setReverseDirection(m_index, reverseDirection);
  }

  public int registerSamplesToAverageCallback(NotifyCallback callback, boolean initialNotify) {
    return EncoderDataJNI.registerSamplesToAverageCallback(m_index, callback, initialNotify);
  }
  public void cancelSamplesToAverageCallback(int uid) {
    EncoderDataJNI.cancelSamplesToAverageCallback(m_index, uid);
  }
  public int getSamplesToAverage() {
    return EncoderDataJNI.getSamplesToAverage(m_index);
  }
  public void setSamplesToAverage(int samplesToAverage) {
    EncoderDataJNI.setSamplesToAverage(m_index, samplesToAverage);
  }

  public void resetData() {
    EncoderDataJNI.resetData(m_index);
  }
}
