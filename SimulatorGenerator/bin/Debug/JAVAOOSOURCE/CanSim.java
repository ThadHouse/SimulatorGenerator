package edu.wpi.first.wpilibj.sim;

import edu.wpi.first.hal.sim.mockdata.CanDataJNI;

public class CanSim {
  private int m_index;

  public CanSim(int index) {
    m_index = index;
  }

  public CallbackStore registerCanSendMessageCallback(NotifyCallback callback, boolean initialNotify) {
    int uid = CanDataJNI.registerCanSendMessageCallback(m_index, callback, initialNotify);
    return new CallbackStore(m_index, uid, callback, CanDataJNI::cancelCanSendMessageCallback);
  }
  public double getCanSendMessage() {
    return CanDataJNI.getCanSendMessage(m_index);
  }
  public void setCanSendMessage(double canSendMessage) {
    CanDataJNI.setCanSendMessage(m_index, canSendMessage);
  }

  public CallbackStore registerCanReceiveMessageCallback(NotifyCallback callback, boolean initialNotify) {
    int uid = CanDataJNI.registerCanReceiveMessageCallback(m_index, callback, initialNotify);
    return new CallbackStore(m_index, uid, callback, CanDataJNI::cancelCanReceiveMessageCallback);
  }
  public double getCanReceiveMessage() {
    return CanDataJNI.getCanReceiveMessage(m_index);
  }
  public void setCanReceiveMessage(double canReceiveMessage) {
    CanDataJNI.setCanReceiveMessage(m_index, canReceiveMessage);
  }

  public CallbackStore registerCanOpenStreamCallback(NotifyCallback callback, boolean initialNotify) {
    int uid = CanDataJNI.registerCanOpenStreamCallback(m_index, callback, initialNotify);
    return new CallbackStore(m_index, uid, callback, CanDataJNI::cancelCanOpenStreamCallback);
  }
  public double getCanOpenStream() {
    return CanDataJNI.getCanOpenStream(m_index);
  }
  public void setCanOpenStream(double canOpenStream) {
    CanDataJNI.setCanOpenStream(m_index, canOpenStream);
  }

  public CallbackStore registerCanCloseStreamCallback(NotifyCallback callback, boolean initialNotify) {
    int uid = CanDataJNI.registerCanCloseStreamCallback(m_index, callback, initialNotify);
    return new CallbackStore(m_index, uid, callback, CanDataJNI::cancelCanCloseStreamCallback);
  }
  public double getCanCloseStream() {
    return CanDataJNI.getCanCloseStream(m_index);
  }
  public void setCanCloseStream(double canCloseStream) {
    CanDataJNI.setCanCloseStream(m_index, canCloseStream);
  }

  public CallbackStore registerCanReadStreamCallback(NotifyCallback callback, boolean initialNotify) {
    int uid = CanDataJNI.registerCanReadStreamCallback(m_index, callback, initialNotify);
    return new CallbackStore(m_index, uid, callback, CanDataJNI::cancelCanReadStreamCallback);
  }
  public double getCanReadStream() {
    return CanDataJNI.getCanReadStream(m_index);
  }
  public void setCanReadStream(double canReadStream) {
    CanDataJNI.setCanReadStream(m_index, canReadStream);
  }

  public CallbackStore registerCanGetCanStatusCallback(NotifyCallback callback, boolean initialNotify) {
    int uid = CanDataJNI.registerCanGetCanStatusCallback(m_index, callback, initialNotify);
    return new CallbackStore(m_index, uid, callback, CanDataJNI::cancelCanGetCanStatusCallback);
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
