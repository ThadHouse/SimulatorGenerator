package edu.wpi.first.hal.sim;

import edu.wpi.first.hal.sim.NotifyCallback;
import edu.wpi.first.hal.sim.mockdata.RoboRioDataJNI;

public class RoboRioSim {
  private int m_index;

  public RoboRioSim(int index) {
    m_index = index;
  }

  public int registerFPGAButtonCallback(NotifyCallback callback, boolean initialNotify) {
    return RoboRioDataJNI.registerFPGAButtonCallback(m_index, callback, initialNotify);
  }
  public void cancelFPGAButtonCallback(int uid) {
    RoboRioDataJNI.cancelFPGAButtonCallback(m_index, uid);
  }
  public boolean getFPGAButton() {
    return RoboRioDataJNI.getFPGAButton(m_index);
  }
  public void setFPGAButton(boolean fPGAButton) {
    RoboRioDataJNI.setFPGAButton(m_index, fPGAButton);
  }

  public int registerVInVoltageCallback(NotifyCallback callback, boolean initialNotify) {
    return RoboRioDataJNI.registerVInVoltageCallback(m_index, callback, initialNotify);
  }
  public void cancelVInVoltageCallback(int uid) {
    RoboRioDataJNI.cancelVInVoltageCallback(m_index, uid);
  }
  public double getVInVoltage() {
    return RoboRioDataJNI.getVInVoltage(m_index);
  }
  public void setVInVoltage(double vInVoltage) {
    RoboRioDataJNI.setVInVoltage(m_index, vInVoltage);
  }

  public int registerVInCurrentCallback(NotifyCallback callback, boolean initialNotify) {
    return RoboRioDataJNI.registerVInCurrentCallback(m_index, callback, initialNotify);
  }
  public void cancelVInCurrentCallback(int uid) {
    RoboRioDataJNI.cancelVInCurrentCallback(m_index, uid);
  }
  public double getVInCurrent() {
    return RoboRioDataJNI.getVInCurrent(m_index);
  }
  public void setVInCurrent(double vInCurrent) {
    RoboRioDataJNI.setVInCurrent(m_index, vInCurrent);
  }

  public int registerUserVoltage6VCallback(NotifyCallback callback, boolean initialNotify) {
    return RoboRioDataJNI.registerUserVoltage6VCallback(m_index, callback, initialNotify);
  }
  public void cancelUserVoltage6VCallback(int uid) {
    RoboRioDataJNI.cancelUserVoltage6VCallback(m_index, uid);
  }
  public double getUserVoltage6V() {
    return RoboRioDataJNI.getUserVoltage6V(m_index);
  }
  public void setUserVoltage6V(double userVoltage6V) {
    RoboRioDataJNI.setUserVoltage6V(m_index, userVoltage6V);
  }

  public int registerUserCurrent6VCallback(NotifyCallback callback, boolean initialNotify) {
    return RoboRioDataJNI.registerUserCurrent6VCallback(m_index, callback, initialNotify);
  }
  public void cancelUserCurrent6VCallback(int uid) {
    RoboRioDataJNI.cancelUserCurrent6VCallback(m_index, uid);
  }
  public double getUserCurrent6V() {
    return RoboRioDataJNI.getUserCurrent6V(m_index);
  }
  public void setUserCurrent6V(double userCurrent6V) {
    RoboRioDataJNI.setUserCurrent6V(m_index, userCurrent6V);
  }

  public int registerUserActive6VCallback(NotifyCallback callback, boolean initialNotify) {
    return RoboRioDataJNI.registerUserActive6VCallback(m_index, callback, initialNotify);
  }
  public void cancelUserActive6VCallback(int uid) {
    RoboRioDataJNI.cancelUserActive6VCallback(m_index, uid);
  }
  public boolean getUserActive6V() {
    return RoboRioDataJNI.getUserActive6V(m_index);
  }
  public void setUserActive6V(boolean userActive6V) {
    RoboRioDataJNI.setUserActive6V(m_index, userActive6V);
  }

  public int registerUserVoltage5VCallback(NotifyCallback callback, boolean initialNotify) {
    return RoboRioDataJNI.registerUserVoltage5VCallback(m_index, callback, initialNotify);
  }
  public void cancelUserVoltage5VCallback(int uid) {
    RoboRioDataJNI.cancelUserVoltage5VCallback(m_index, uid);
  }
  public double getUserVoltage5V() {
    return RoboRioDataJNI.getUserVoltage5V(m_index);
  }
  public void setUserVoltage5V(double userVoltage5V) {
    RoboRioDataJNI.setUserVoltage5V(m_index, userVoltage5V);
  }

  public int registerUserCurrent5VCallback(NotifyCallback callback, boolean initialNotify) {
    return RoboRioDataJNI.registerUserCurrent5VCallback(m_index, callback, initialNotify);
  }
  public void cancelUserCurrent5VCallback(int uid) {
    RoboRioDataJNI.cancelUserCurrent5VCallback(m_index, uid);
  }
  public double getUserCurrent5V() {
    return RoboRioDataJNI.getUserCurrent5V(m_index);
  }
  public void setUserCurrent5V(double userCurrent5V) {
    RoboRioDataJNI.setUserCurrent5V(m_index, userCurrent5V);
  }

  public int registerUserActive5VCallback(NotifyCallback callback, boolean initialNotify) {
    return RoboRioDataJNI.registerUserActive5VCallback(m_index, callback, initialNotify);
  }
  public void cancelUserActive5VCallback(int uid) {
    RoboRioDataJNI.cancelUserActive5VCallback(m_index, uid);
  }
  public boolean getUserActive5V() {
    return RoboRioDataJNI.getUserActive5V(m_index);
  }
  public void setUserActive5V(boolean userActive5V) {
    RoboRioDataJNI.setUserActive5V(m_index, userActive5V);
  }

  public int registerUserVoltage3V3Callback(NotifyCallback callback, boolean initialNotify) {
    return RoboRioDataJNI.registerUserVoltage3V3Callback(m_index, callback, initialNotify);
  }
  public void cancelUserVoltage3V3Callback(int uid) {
    RoboRioDataJNI.cancelUserVoltage3V3Callback(m_index, uid);
  }
  public double getUserVoltage3V3() {
    return RoboRioDataJNI.getUserVoltage3V3(m_index);
  }
  public void setUserVoltage3V3(double userVoltage3V3) {
    RoboRioDataJNI.setUserVoltage3V3(m_index, userVoltage3V3);
  }

  public int registerUserCurrent3V3Callback(NotifyCallback callback, boolean initialNotify) {
    return RoboRioDataJNI.registerUserCurrent3V3Callback(m_index, callback, initialNotify);
  }
  public void cancelUserCurrent3V3Callback(int uid) {
    RoboRioDataJNI.cancelUserCurrent3V3Callback(m_index, uid);
  }
  public double getUserCurrent3V3() {
    return RoboRioDataJNI.getUserCurrent3V3(m_index);
  }
  public void setUserCurrent3V3(double userCurrent3V3) {
    RoboRioDataJNI.setUserCurrent3V3(m_index, userCurrent3V3);
  }

  public int registerUserActive3V3Callback(NotifyCallback callback, boolean initialNotify) {
    return RoboRioDataJNI.registerUserActive3V3Callback(m_index, callback, initialNotify);
  }
  public void cancelUserActive3V3Callback(int uid) {
    RoboRioDataJNI.cancelUserActive3V3Callback(m_index, uid);
  }
  public boolean getUserActive3V3() {
    return RoboRioDataJNI.getUserActive3V3(m_index);
  }
  public void setUserActive3V3(boolean userActive3V3) {
    RoboRioDataJNI.setUserActive3V3(m_index, userActive3V3);
  }

  public int registerUserFaults6VCallback(NotifyCallback callback, boolean initialNotify) {
    return RoboRioDataJNI.registerUserFaults6VCallback(m_index, callback, initialNotify);
  }
  public void cancelUserFaults6VCallback(int uid) {
    RoboRioDataJNI.cancelUserFaults6VCallback(m_index, uid);
  }
  public int getUserFaults6V() {
    return RoboRioDataJNI.getUserFaults6V(m_index);
  }
  public void setUserFaults6V(int userFaults6V) {
    RoboRioDataJNI.setUserFaults6V(m_index, userFaults6V);
  }

  public int registerUserFaults5VCallback(NotifyCallback callback, boolean initialNotify) {
    return RoboRioDataJNI.registerUserFaults5VCallback(m_index, callback, initialNotify);
  }
  public void cancelUserFaults5VCallback(int uid) {
    RoboRioDataJNI.cancelUserFaults5VCallback(m_index, uid);
  }
  public int getUserFaults5V() {
    return RoboRioDataJNI.getUserFaults5V(m_index);
  }
  public void setUserFaults5V(int userFaults5V) {
    RoboRioDataJNI.setUserFaults5V(m_index, userFaults5V);
  }

  public int registerUserFaults3V3Callback(NotifyCallback callback, boolean initialNotify) {
    return RoboRioDataJNI.registerUserFaults3V3Callback(m_index, callback, initialNotify);
  }
  public void cancelUserFaults3V3Callback(int uid) {
    RoboRioDataJNI.cancelUserFaults3V3Callback(m_index, uid);
  }
  public int getUserFaults3V3() {
    return RoboRioDataJNI.getUserFaults3V3(m_index);
  }
  public void setUserFaults3V3(int userFaults3V3) {
    RoboRioDataJNI.setUserFaults3V3(m_index, userFaults3V3);
  }

  public void resetData() {
    RoboRioDataJNI.resetData(m_index);
  }
}
