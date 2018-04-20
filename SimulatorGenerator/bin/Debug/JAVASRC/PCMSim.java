package edu.wpi.first.hal.sim;

import edu.wpi.first.wpilibj.hal.JNIWrapper;

public class PCMSim extends JNIWrapper {
  public static native int registerSolenoidInitializedCallback(int index, NotifyCallback callback, boolean initialNotify);
  public static native void cancelSolenoidInitializedCallback(int index, int uid);
  public static native boolean getSolenoidInitialized(int index);
  public static native void setSolenoidInitialized(int index, boolean solenoidInitialized);

  public static native int registerSolenoidOutputCallback(int index, NotifyCallback callback, boolean initialNotify);
  public static native void cancelSolenoidOutputCallback(int index, int uid);
  public static native boolean getSolenoidOutput(int index);
  public static native void setSolenoidOutput(int index, boolean solenoidOutput);

  public static native int registerCompressorInitializedCallback(int index, NotifyCallback callback, boolean initialNotify);
  public static native void cancelCompressorInitializedCallback(int index, int uid);
  public static native boolean getCompressorInitialized(int index);
  public static native void setCompressorInitialized(int index, boolean compressorInitialized);

  public static native int registerCompressorOnCallback(int index, NotifyCallback callback, boolean initialNotify);
  public static native void cancelCompressorOnCallback(int index, int uid);
  public static native boolean getCompressorOn(int index);
  public static native void setCompressorOn(int index, boolean compressorOn);

  public static native int registerCloseLoopEnabledCallback(int index, NotifyCallback callback, boolean initialNotify);
  public static native void cancelCloseLoopEnabledCallback(int index, int uid);
  public static native boolean getCloseLoopEnabled(int index);
  public static native void setCloseLoopEnabled(int index, boolean closeLoopEnabled);

  public static native int registerPressureSwitchCallback(int index, NotifyCallback callback, boolean initialNotify);
  public static native void cancelPressureSwitchCallback(int index, int uid);
  public static native boolean getPressureSwitch(int index);
  public static native void setPressureSwitch(int index, boolean pressureSwitch);

  public static native int registerCompressorCurrentCallback(int index, NotifyCallback callback, boolean initialNotify);
  public static native void cancelCompressorCurrentCallback(int index, int uid);
  public static native double getCompressorCurrent(int index);
  public static native void setCompressorCurrent(int index, double compressorCurrent);

  public static native void registerAllNonSolenoidCallbacks(int index, NotifyCallback callback, boolean initialNotify);
  public static native void registerAllSolenoidCallbacks(int index, NotifyCallback callback, boolean initialNotify);

  public static native void resetData(int index);
}
