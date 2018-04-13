package edu.wpi.first.hal.sim;

import edu.wpi.first.wpilibj.hal.JNIWrapper;

public class DIOSim extends JNIWrapper {
  public static native int registerInitializedCallback(int index, NotifyCallback callback, boolean initialNotify);
  public static native void cancelInitializedCallback(int index, int uid);
  public static native boolean getInitialized(int index);
  public static native void setInitialized(int index, boolean initialized);

  public static native int registerValueCallback(int index, NotifyCallback callback, boolean initialNotify);
  public static native void cancelValueCallback(int index, int uid);
  public static native boolean getValue(int index);
  public static native void setValue(int index, boolean value);

  public static native int registerPulseLengthCallback(int index, NotifyCallback callback, boolean initialNotify);
  public static native void cancelPulseLengthCallback(int index, int uid);
  public static native double getPulseLength(int index);
  public static native void setPulseLength(int index, double pulseLength);

  public static native int registerIsInputCallback(int index, NotifyCallback callback, boolean initialNotify);
  public static native void cancelIsInputCallback(int index, int uid);
  public static native boolean getIsInput(int index);
  public static native void setIsInput(int index, boolean isInput);

  public static native int registerFilterIndexCallback(int index, NotifyCallback callback, boolean initialNotify);
  public static native void cancelFilterIndexCallback(int index, int uid);
  public static native int getFilterIndex(int index);
  public static native void setFilterIndex(int index, int filterIndex);

  public static native void resetData(int index);
}
