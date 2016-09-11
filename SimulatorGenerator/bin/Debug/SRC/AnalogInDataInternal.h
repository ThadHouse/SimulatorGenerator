#pragma once

#include <atomic>
#include <memory>

#include "MockData/AnalogInData.h"
#include "MockData/NotifyDataBase.h"

namespace hal {
class AnalogInData {
 public:
  int32_t RegisterInitializedCallback(HAL_NotifyCallback callback, void* param, HAL_Bool initialNotify);
  void CancelInitializedCallback(int32_t uid);
  void InvokeInitializedCallback(const HAL_Value* value);
  HAL_Bool GetInitialized();
  void SetInitialized(HAL_Bool initialized);

  int32_t RegisterAverageBitsCallback(HAL_NotifyCallback callback, void* param, HAL_Bool initialNotify);
  void CancelAverageBitsCallback(int32_t uid);
  void InvokeAverageBitsCallback(const HAL_Value* value);
  int32_t GetAverageBits();
  void SetAverageBits(int32_t averageBits);

  int32_t RegisterOversampleBitsCallback(HAL_NotifyCallback callback, void* param, HAL_Bool initialNotify);
  void CancelOversampleBitsCallback(int32_t uid);
  void InvokeOversampleBitsCallback(const HAL_Value* value);
  int32_t GetOversampleBits();
  void SetOversampleBits(int32_t oversampleBits);

  int32_t RegisterVoltageCallback(HAL_NotifyCallback callback, void* param, HAL_Bool initialNotify);
  void CancelVoltageCallback(int32_t uid);
  void InvokeVoltageCallback(const HAL_Value* value);
  double GetVoltage();
  void SetVoltage(double voltage);

  int32_t RegisterAccumulatorInitializedCallback(HAL_NotifyCallback callback, void* param, HAL_Bool initialNotify);
  void CancelAccumulatorInitializedCallback(int32_t uid);
  void InvokeAccumulatorInitializedCallback(const HAL_Value* value);
  HAL_Bool GetAccumulatorInitialized();
  void SetAccumulatorInitialized(HAL_Bool accumulatorInitialized);

  int32_t RegisterAccumulatorValueCallback(HAL_NotifyCallback callback, void* param, HAL_Bool initialNotify);
  void CancelAccumulatorValueCallback(int32_t uid);
  void InvokeAccumulatorValueCallback(const HAL_Value* value);
  int64_t GetAccumulatorValue();
  void SetAccumulatorValue(int64_t accumulatorValue);

  int32_t RegisterAccumulatorCountCallback(HAL_NotifyCallback callback, void* param, HAL_Bool initialNotify);
  void CancelAccumulatorCountCallback(int32_t uid);
  void InvokeAccumulatorCountCallback(const HAL_Value* value);
  int64_t GetAccumulatorCount();
  void SetAccumulatorCount(int64_t accumulatorCount);

  int32_t RegisterAccumlatorCenterCallback(HAL_NotifyCallback callback, void* param, HAL_Bool initialNotify);
  void CancelAccumlatorCenterCallback(int32_t uid);
  void InvokeAccumlatorCenterCallback(const HAL_Value* value);
  int32_t GetAccumlatorCenter();
  void SetAccumlatorCenter(int32_t accumlatorCenter);

  int32_t RegisterAccumlatorDeadbandCallback(HAL_NotifyCallback callback, void* param, HAL_Bool initialNotify);
  void CancelAccumlatorDeadbandCallback(int32_t uid);
  void InvokeAccumlatorDeadbandCallback(const HAL_Value* value);
  int32_t GetAccumlatorDeadband();
  void SetAccumlatorDeadband(int32_t accumlatorDeadband);

  virtual void ResetData();
 private:
  std::atomic<HAL_Bool> m_initialized = false;
  std::shared_ptr<UidVector<NotifyListener>> m_initializedCallbacks = nullptr;
  std::atomic<int32_t> m_averageBits = 7;
  std::shared_ptr<UidVector<NotifyListener>> m_averageBitsCallbacks = nullptr;
  std::atomic<int32_t> m_oversampleBits = 0;
  std::shared_ptr<UidVector<NotifyListener>> m_oversampleBitsCallbacks = nullptr;
  std::atomic<double> m_voltage = 0.0;
  std::shared_ptr<UidVector<NotifyListener>> m_voltageCallbacks = nullptr;
  std::atomic<HAL_Bool> m_accumulatorInitialized = false;
  std::shared_ptr<UidVector<NotifyListener>> m_accumulatorInitializedCallbacks = nullptr;
  std::atomic<int64_t> m_accumulatorValue = 0;
  std::shared_ptr<UidVector<NotifyListener>> m_accumulatorValueCallbacks = nullptr;
  std::atomic<int64_t> m_accumulatorCount = 0;
  std::shared_ptr<UidVector<NotifyListener>> m_accumulatorCountCallbacks = nullptr;
  std::atomic<int32_t> m_accumlatorCenter = 0;
  std::shared_ptr<UidVector<NotifyListener>> m_accumlatorCenterCallbacks = nullptr;
  std::atomic<int32_t> m_accumlatorDeadband = 0;
  std::shared_ptr<UidVector<NotifyListener>> m_accumlatorDeadbandCallbacks = nullptr;
};
extern std::unique_ptr<std::shared_ptr<AnalogInData>[]> SimAnalogInData;
}
