#pragma once

#include <atomic>
#include <memory>

#include "MockData/SPIAccelerometerData.h"
#include "MockData/DataBase.h"

namespace hal {
class SPIAccelerometerData {
 public:
  int32_t RegisterActiveCallback(HAL_NotifyCallback callback, void* param, HAL_Bool initialNotify);
  void CancelActiveCallback(int32_t uid);
  void InvokeActiveCallback(const HAL_Value* value);
  HAL_Bool GetActive();
  void SetActive(HAL_Bool active);

  int32_t RegisterRangeCallback(HAL_NotifyCallback callback, void* param, HAL_Bool initialNotify);
  void CancelRangeCallback(int32_t uid);
  void InvokeRangeCallback(const HAL_Value* value);
  uint32_t8_t GetRange();
  void SetRange(uint32_t8_t range);

  int32_t RegisterXCallback(HAL_NotifyCallback callback, void* param, HAL_Bool initialNotify);
  void CancelXCallback(int32_t uid);
  void InvokeXCallback(const HAL_Value* value);
  double GetX();
  void SetX(double x);

  int32_t RegisterYCallback(HAL_NotifyCallback callback, void* param, HAL_Bool initialNotify);
  void CancelYCallback(int32_t uid);
  void InvokeYCallback(const HAL_Value* value);
  double GetY();
  void SetY(double y);

  int32_t RegisterZCallback(HAL_NotifyCallback callback, void* param, HAL_Bool initialNotify);
  void CancelZCallback(int32_t uid);
  void InvokeZCallback(const HAL_Value* value);
  double GetZ();
  void SetZ(double z);

  virtual void ResetData();
 private:
  std::atomic<HAL_Bool> m_active = false;
  std::shared_ptr<UidVector<NotifyListener>> m_activeCallbacks = nullptr;
  std::atomic<uint32_t8_t> m_range = 0;
  std::shared_ptr<UidVector<NotifyListener>> m_rangeCallbacks = nullptr;
  std::atomic<double> m_x = 0.0;
  std::shared_ptr<UidVector<NotifyListener>> m_xCallbacks = nullptr;
  std::atomic<double> m_y = 0.0;
  std::shared_ptr<UidVector<NotifyListener>> m_yCallbacks = nullptr;
  std::atomic<double> m_z = 0.0;
  std::shared_ptr<UidVector<NotifyListener>> m_zCallbacks = nullptr;
};
extern std::unique_ptr<std::shared_ptr<SPIAccelerometerData>[]> SimSPIAccelerometerData;
}