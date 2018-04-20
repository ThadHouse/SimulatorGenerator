package edu.wpi.first.hal.sim;

import edu.wpi.first.wpilibj.hal.JNIWrapper;

public class DriverStationSim extends JNIWrapper {
  public static native int registerEnabledCallback(int index, NotifyCallback callback, boolean initialNotify);
  public static native void cancelEnabledCallback(int index, int uid);
  public static native boolean getEnabled(int index);
  public static native void setEnabled(int index, boolean enabled);

  public static native int registerAutonomousCallback(int index, NotifyCallback callback, boolean initialNotify);
  public static native void cancelAutonomousCallback(int index, int uid);
  public static native boolean getAutonomous(int index);
  public static native void setAutonomous(int index, boolean autonomous);

  public static native int registerTestCallback(int index, NotifyCallback callback, boolean initialNotify);
  public static native void cancelTestCallback(int index, int uid);
  public static native boolean getTest(int index);
  public static native void setTest(int index, boolean test);

  public static native int registerEStopCallback(int index, NotifyCallback callback, boolean initialNotify);
  public static native void cancelEStopCallback(int index, int uid);
  public static native boolean getEStop(int index);
  public static native void setEStop(int index, boolean eStop);

  public static native int registerFmsAttachedCallback(int index, NotifyCallback callback, boolean initialNotify);
  public static native void cancelFmsAttachedCallback(int index, int uid);
  public static native boolean getFmsAttached(int index);
  public static native void setFmsAttached(int index, boolean fmsAttached);

  public static native int registerDsAttachedCallback(int index, NotifyCallback callback, boolean initialNotify);
  public static native void cancelDsAttachedCallback(int index, int uid);
  public static native boolean getDsAttached(int index);
  public static native void setDsAttached(int index, boolean dsAttached);

  public static native void resetData(int index);
}
