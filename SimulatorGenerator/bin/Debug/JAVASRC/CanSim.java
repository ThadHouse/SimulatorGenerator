package edu.wpi.first.hal.sim;

import edu.wpi.first.wpilibj.hal.JNIWrapper;

public class CanSim extends JNIWrapper {
  public static native int registerCanSendMessageCallback(int index, NotifyCallback callback, boolean initialNotify);
  public static native void cancelCanSendMessageCallback(int index, int uid);
  public static native double getCanSendMessage(int index);
  public static native void setCanSendMessage(int index, double canSendMessage);

  public static native int registerCanReceiveMessageCallback(int index, NotifyCallback callback, boolean initialNotify);
  public static native void cancelCanReceiveMessageCallback(int index, int uid);
  public static native double getCanReceiveMessage(int index);
  public static native void setCanReceiveMessage(int index, double canReceiveMessage);

  public static native int registerCanOpenStreamCallback(int index, NotifyCallback callback, boolean initialNotify);
  public static native void cancelCanOpenStreamCallback(int index, int uid);
  public static native double getCanOpenStream(int index);
  public static native void setCanOpenStream(int index, double canOpenStream);

  public static native int registerCanCloseStreamCallback(int index, NotifyCallback callback, boolean initialNotify);
  public static native void cancelCanCloseStreamCallback(int index, int uid);
  public static native double getCanCloseStream(int index);
  public static native void setCanCloseStream(int index, double canCloseStream);

  public static native int registerCanReadStreamCallback(int index, NotifyCallback callback, boolean initialNotify);
  public static native void cancelCanReadStreamCallback(int index, int uid);
  public static native double getCanReadStream(int index);
  public static native void setCanReadStream(int index, double canReadStream);

  public static native int registerCanGetCanStatusCallback(int index, NotifyCallback callback, boolean initialNotify);
  public static native void cancelCanGetCanStatusCallback(int index, int uid);
  public static native double getCanGetCanStatus(int index);
  public static native void setCanGetCanStatus(int index, double canGetCanStatus);

  public static native void resetData(int index);
}
