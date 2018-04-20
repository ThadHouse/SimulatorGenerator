package edu.wpi.first.hal.sim;

import edu.wpi.first.hal.sim.NotifyCallback;
import edu.wpi.first.hal.sim.mockdata.CanDataJNI;

public class CanSim {
  private int m_index;

  public CanSim(int index) {
    m_index = index;
  }

  public int registerCanSendMessageCallback(NotifyCallback callback, boolean initialNotify) {
    return CanDataJNI.registerCanSendMessageCallback(m_index, callback, initialNotify);
  }
  public void cancelCanSendMessageCallback(int uid) {
    CanDataJNI.cancelCanSendMessageCallback(m_index, uid);
  }
  public double getCanSendMessage() {
    return CanDataJNI.getCanSendMessage(m_index);
  }
  public void setCanSendMessage(double canSendMessage) {
    CanDataJNI.setCanSendMessage(m_index, canSendMessage);
  }

  public int registerCanReceiveMessageCallback(NotifyCallback callback, boolean initialNotify) {
    return CanDataJNI.registerCanReceiveMessageCallback(m_index, callback, initialNotify);
  }
  public void cancelCanReceiveMessageCallback(int uid) {
    CanDataJNI.cancelCanReceiveMessageCallback(m_index, uid);
  }
  public double getCanReceiveMessage() {
    return CanDataJNI.getCanReceiveMessage(m_index);
  }
  public void setCanReceiveMessage(double canReceiveMessage) {
    CanDataJNI.setCanReceiveMessage(m_index, canReceiveMessage);
  }

  public int registerCanOpenStreamCallback(NotifyCallback callback, boolean initialNotify) {
    return CanDataJNI.registerCanOpenStreamCallback(m_index, callback, initialNotify);
  }
  public void cancelCanOpenStreamCallback(int uid) {
    CanDataJNI.cancelCanOpenStreamCallback(m_index, uid);
  }
  public double getCanOpenStream() {
    return CanDataJNI.getCanOpenStream(m_index);
  }
  public void setCanOpenStream(double canOpenStream) {
    CanDataJNI.setCanOpenStream(m_index, canOpenStream);
  }

  public int registerCanCloseStreamCallback(NotifyCallback callback, boolean initialNotify) {
    return CanDataJNI.registerCanCloseStreamCallback(m_index, callback, initialNotify);
  }
  public void cancelCanCloseStreamCallback(int uid) {
    CanDataJNI.cancelCanCloseStreamCallback(m_index, uid);
  }
  public double getCanCloseStream() {
    return CanDataJNI.getCanCloseStream(m_index);
  }
  public void setCanCloseStream(double canCloseStream) {
    CanDataJNI.setCanCloseStream(m_index, canCloseStream);
  }

  public int registerCanReadStreamCallback(NotifyCallback callback, boolean initialNotify) {
    return CanDataJNI.registerCanReadStreamCallback(m_index, callback, initialNotify);
  }
  public void cancelCanReadStreamCallback(int uid) {
    CanDataJNI.cancelCanReadStreamCallback(m_index, uid);
  }
  public double getCanReadStream() {
    return CanDataJNI.getCanReadStream(m_index);
  }
  public void setCanReadStream(double canReadStream) {
    CanDataJNI.setCanReadStream(m_index, canReadStream);
  }

  public int registerCanGetCanStatusCallback(NotifyCallback callback, boolean initialNotify) {
    return CanDataJNI.registerCanGetCanStatusCallback(m_index, callback, initialNotify);
  }
  public void cancelCanGetCanStatusCallback(int uid) {
    CanDataJNI.cancelCanGetCanStatusCallback(m_index, uid);
  }
  public double getCanGetCanStatus() {
    return CanDataJNI.getCanGetCanStatus(m_index);
  }
  public void setCanGetCanStatus(double canGetCanStatus) {
    CanDataJNI.setCanGetCanStatus(m_index, canGetCanStatus);
  }

  public void resetData() {
    CanDataJNI.resetData(m_index);
  }
}
