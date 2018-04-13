package edu.wpi.first.hal.sim;

import edu.wpi.first.wpilibj.hal.JNIWrapper;

public class AnalogInSim extends JNIWrapper {
  public static native int registerInitializedCallback(int index, NotifyCallback callback, boolean initialNotify);
  public static native void cancelInitializedCallback(int index, int uid);
  public static native boolean getInitialized(int index);
  public static native void setInitialized(int index, boolean initialized);

  public static native int registerAverageBitsCallback(int index, NotifyCallback callback, boolean initialNotify);
  public static native void cancelAverageBitsCallback(int index, int uid);
  public static native int getAverageBits(int index);
  public static native void setAverageBits(int index, int averageBits);

  public static native int registerOversampleBitsCallback(int index, NotifyCallback callback, boolean initialNotify);
  public static native void cancelOversampleBitsCallback(int index, int uid);
  public static native int getOversampleBits(int index);
  public static native void setOversampleBits(int index, int oversampleBits);

  public static native int registerVoltageCallback(int index, NotifyCallback callback, boolean initialNotify);
  public static native void cancelVoltageCallback(int index, int uid);
  public static native double getVoltage(int index);
  public static native void setVoltage(int index, double voltage);

  public static native int registerAccumulatorInitializedCallback(int index, NotifyCallback callback, boolean initialNotify);
  public static native void cancelAccumulatorInitializedCallback(int index, int uid);
  public static native boolean getAccumulatorInitialized(int index);
  public static native void setAccumulatorInitialized(int index, boolean accumulatorInitialized);

  public static native int registerAccumulatorValueCallback(int index, NotifyCallback callback, boolean initialNotify);
  public static native void cancelAccumulatorValueCallback(int index, int uid);
  public static native long getAccumulatorValue(int index);
  public static native void setAccumulatorValue(int index, long accumulatorValue);

  public static native int registerAccumulatorCountCallback(int index, NotifyCallback callback, boolean initialNotify);
  public static native void cancelAccumulatorCountCallback(int index, int uid);
  public static native long getAccumulatorCount(int index);
  public static native void setAccumulatorCount(int index, long accumulatorCount);

  public static native int registerAccumlatorCenterCallback(int index, NotifyCallback callback, boolean initialNotify);
  public static native void cancelAccumlatorCenterCallback(int index, int uid);
  public static native int getAccumlatorCenter(int index);
  public static native void setAccumlatorCenter(int index, int accumlatorCenter);

  public static native int registerAccumlatorDeadbandCallback(int index, NotifyCallback callback, boolean initialNotify);
  public static native void cancelAccumlatorDeadbandCallback(int index, int uid);
  public static native int getAccumlatorDeadband(int index);
  public static native void setAccumlatorDeadband(int index, int accumlatorDeadband);

  public static native void resetData(int index);
}
