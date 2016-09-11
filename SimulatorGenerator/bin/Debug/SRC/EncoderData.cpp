#include "EncoderDataInternal.h"

#include "../PortsInternal.h"

using namespace hal;

std::unique_ptr<std::shared_ptr<EncoderData>[]> hal::SimEncoderData = std::make_unique<std::shared_ptr<EncoderData>[]>(SIZEINHERE);
void EncoderData::ResetData() {
  m_initialized = false;
  m_initializedCallbacks = nullptr;
  m_count = 0;
  m_countCallbacks = nullptr;
  m_period = std::numeric_limits<double>::max();
  m_periodCallbacks = nullptr;
  m_reset = false;
  m_resetCallbacks = nullptr;
  m_maxPeriod = 0;
  m_maxPeriodCallbacks = nullptr;
  m_direction = false;
  m_directionCallbacks = nullptr;
  m_reverseDirection = false;
  m_reverseDirectionCallbacks = nullptr;
  m_samplesToAverage = 0;
  m_samplesToAverageCallbacks = nullptr;
}

int32_t EncoderData::RegisterInitializedCallback(HAL_NotifyCallback callback, void* param, HAL_Bool initialNotify) {
  // Return an invalid value on a null callback
  if (callback == nullptr) return -1;
  const char* variableName = "Initialized";
  auto newCallbacks = std::make_shared<UidVector<NotifyListener>>(*m_initializedCallbacks);
  int uid = newCallbacks->emplace_back(variableName, param, callback);
  if (initialNotify) {
    callback(variableName, param, &MakeBoolean(GetInitialized()));
  }
  m_activeCallbacks = newCallbacks;
  return uid;
}
void EncoderData::CancelInitializedCallback(int32_t uid) {
  auto newCallbacks = std::make_shared<UidVector<NotifyListener>>(*m_initializedCallbacks);
  newCallbacks->erase(uid);
  m_activeCallbacks = newCallbacks;
}
void EncoderData::InvokeInitializedCallback(const HAL_Value* value) {
  auto newCallbacks = m_initializedCallbacks;
  for (std::size_t i=0; i<newCallbacks->size(); ++i) {
    if (!(*newCallbacks)[i]) continue; //removed
    auto listener = (*newCallbacks)[i];
    listener.callback(listener.key.c_str(), listener.param, value);
  }
}

HAL_Bool EncoderData::GetInitialized() {
  return m_initialized;
}

void EncoderData::SetInitialized(HAL_Bool initialized) {
  HAL_Bool oldValue = m_initialized.exchange(initialized);
  if (oldValue != initialized) {
    InvokeInitializedCallback(&MakeBoolean(initialized));
  }
}

int32_t EncoderData::RegisterCountCallback(HAL_NotifyCallback callback, void* param, HAL_Bool initialNotify) {
  // Return an invalid value on a null callback
  if (callback == nullptr) return -1;
  const char* variableName = "Count";
  auto newCallbacks = std::make_shared<UidVector<NotifyListener>>(*m_countCallbacks);
  int uid = newCallbacks->emplace_back(variableName, param, callback);
  if (initialNotify) {
    callback(variableName, param, &MakeInt(GetCount()));
  }
  m_activeCallbacks = newCallbacks;
  return uid;
}
void EncoderData::CancelCountCallback(int32_t uid) {
  auto newCallbacks = std::make_shared<UidVector<NotifyListener>>(*m_countCallbacks);
  newCallbacks->erase(uid);
  m_activeCallbacks = newCallbacks;
}
void EncoderData::InvokeCountCallback(const HAL_Value* value) {
  auto newCallbacks = m_countCallbacks;
  for (std::size_t i=0; i<newCallbacks->size(); ++i) {
    if (!(*newCallbacks)[i]) continue; //removed
    auto listener = (*newCallbacks)[i];
    listener.callback(listener.key.c_str(), listener.param, value);
  }
}

int32_t EncoderData::GetCount() {
  return m_count;
}

void EncoderData::SetCount(int32_t count) {
  int32_t oldValue = m_count.exchange(count);
  if (oldValue != count) {
    InvokeCountCallback(&MakeInt(count));
  }
}

int32_t EncoderData::RegisterPeriodCallback(HAL_NotifyCallback callback, void* param, HAL_Bool initialNotify) {
  // Return an invalid value on a null callback
  if (callback == nullptr) return -1;
  const char* variableName = "Period";
  auto newCallbacks = std::make_shared<UidVector<NotifyListener>>(*m_periodCallbacks);
  int uid = newCallbacks->emplace_back(variableName, param, callback);
  if (initialNotify) {
    callback(variableName, param, &MakeDouble(GetPeriod()));
  }
  m_activeCallbacks = newCallbacks;
  return uid;
}
void EncoderData::CancelPeriodCallback(int32_t uid) {
  auto newCallbacks = std::make_shared<UidVector<NotifyListener>>(*m_periodCallbacks);
  newCallbacks->erase(uid);
  m_activeCallbacks = newCallbacks;
}
void EncoderData::InvokePeriodCallback(const HAL_Value* value) {
  auto newCallbacks = m_periodCallbacks;
  for (std::size_t i=0; i<newCallbacks->size(); ++i) {
    if (!(*newCallbacks)[i]) continue; //removed
    auto listener = (*newCallbacks)[i];
    listener.callback(listener.key.c_str(), listener.param, value);
  }
}

double EncoderData::GetPeriod() {
  return m_period;
}

void EncoderData::SetPeriod(double period) {
  double oldValue = m_period.exchange(period);
  if (oldValue != period) {
    InvokePeriodCallback(&MakeDouble(period));
  }
}

int32_t EncoderData::RegisterResetCallback(HAL_NotifyCallback callback, void* param, HAL_Bool initialNotify) {
  // Return an invalid value on a null callback
  if (callback == nullptr) return -1;
  const char* variableName = "Reset";
  auto newCallbacks = std::make_shared<UidVector<NotifyListener>>(*m_resetCallbacks);
  int uid = newCallbacks->emplace_back(variableName, param, callback);
  if (initialNotify) {
    callback(variableName, param, &MakeBoolean(GetReset()));
  }
  m_activeCallbacks = newCallbacks;
  return uid;
}
void EncoderData::CancelResetCallback(int32_t uid) {
  auto newCallbacks = std::make_shared<UidVector<NotifyListener>>(*m_resetCallbacks);
  newCallbacks->erase(uid);
  m_activeCallbacks = newCallbacks;
}
void EncoderData::InvokeResetCallback(const HAL_Value* value) {
  auto newCallbacks = m_resetCallbacks;
  for (std::size_t i=0; i<newCallbacks->size(); ++i) {
    if (!(*newCallbacks)[i]) continue; //removed
    auto listener = (*newCallbacks)[i];
    listener.callback(listener.key.c_str(), listener.param, value);
  }
}

HAL_Bool EncoderData::GetReset() {
  return m_reset;
}

void EncoderData::SetReset(HAL_Bool reset) {
  HAL_Bool oldValue = m_reset.exchange(reset);
  if (oldValue != reset) {
    InvokeResetCallback(&MakeBoolean(reset));
  }
}

int32_t EncoderData::RegisterMaxPeriodCallback(HAL_NotifyCallback callback, void* param, HAL_Bool initialNotify) {
  // Return an invalid value on a null callback
  if (callback == nullptr) return -1;
  const char* variableName = "MaxPeriod";
  auto newCallbacks = std::make_shared<UidVector<NotifyListener>>(*m_maxPeriodCallbacks);
  int uid = newCallbacks->emplace_back(variableName, param, callback);
  if (initialNotify) {
    callback(variableName, param, &MakeDouble(GetMaxPeriod()));
  }
  m_activeCallbacks = newCallbacks;
  return uid;
}
void EncoderData::CancelMaxPeriodCallback(int32_t uid) {
  auto newCallbacks = std::make_shared<UidVector<NotifyListener>>(*m_maxPeriodCallbacks);
  newCallbacks->erase(uid);
  m_activeCallbacks = newCallbacks;
}
void EncoderData::InvokeMaxPeriodCallback(const HAL_Value* value) {
  auto newCallbacks = m_maxPeriodCallbacks;
  for (std::size_t i=0; i<newCallbacks->size(); ++i) {
    if (!(*newCallbacks)[i]) continue; //removed
    auto listener = (*newCallbacks)[i];
    listener.callback(listener.key.c_str(), listener.param, value);
  }
}

double EncoderData::GetMaxPeriod() {
  return m_maxPeriod;
}

void EncoderData::SetMaxPeriod(double maxPeriod) {
  double oldValue = m_maxPeriod.exchange(maxPeriod);
  if (oldValue != maxPeriod) {
    InvokeMaxPeriodCallback(&MakeDouble(maxPeriod));
  }
}

int32_t EncoderData::RegisterDirectionCallback(HAL_NotifyCallback callback, void* param, HAL_Bool initialNotify) {
  // Return an invalid value on a null callback
  if (callback == nullptr) return -1;
  const char* variableName = "Direction";
  auto newCallbacks = std::make_shared<UidVector<NotifyListener>>(*m_directionCallbacks);
  int uid = newCallbacks->emplace_back(variableName, param, callback);
  if (initialNotify) {
    callback(variableName, param, &MakeBoolean(GetDirection()));
  }
  m_activeCallbacks = newCallbacks;
  return uid;
}
void EncoderData::CancelDirectionCallback(int32_t uid) {
  auto newCallbacks = std::make_shared<UidVector<NotifyListener>>(*m_directionCallbacks);
  newCallbacks->erase(uid);
  m_activeCallbacks = newCallbacks;
}
void EncoderData::InvokeDirectionCallback(const HAL_Value* value) {
  auto newCallbacks = m_directionCallbacks;
  for (std::size_t i=0; i<newCallbacks->size(); ++i) {
    if (!(*newCallbacks)[i]) continue; //removed
    auto listener = (*newCallbacks)[i];
    listener.callback(listener.key.c_str(), listener.param, value);
  }
}

HAL_Bool EncoderData::GetDirection() {
  return m_direction;
}

void EncoderData::SetDirection(HAL_Bool direction) {
  HAL_Bool oldValue = m_direction.exchange(direction);
  if (oldValue != direction) {
    InvokeDirectionCallback(&MakeBoolean(direction));
  }
}

int32_t EncoderData::RegisterReverseDirectionCallback(HAL_NotifyCallback callback, void* param, HAL_Bool initialNotify) {
  // Return an invalid value on a null callback
  if (callback == nullptr) return -1;
  const char* variableName = "ReverseDirection";
  auto newCallbacks = std::make_shared<UidVector<NotifyListener>>(*m_reverseDirectionCallbacks);
  int uid = newCallbacks->emplace_back(variableName, param, callback);
  if (initialNotify) {
    callback(variableName, param, &MakeBoolean(GetReverseDirection()));
  }
  m_activeCallbacks = newCallbacks;
  return uid;
}
void EncoderData::CancelReverseDirectionCallback(int32_t uid) {
  auto newCallbacks = std::make_shared<UidVector<NotifyListener>>(*m_reverseDirectionCallbacks);
  newCallbacks->erase(uid);
  m_activeCallbacks = newCallbacks;
}
void EncoderData::InvokeReverseDirectionCallback(const HAL_Value* value) {
  auto newCallbacks = m_reverseDirectionCallbacks;
  for (std::size_t i=0; i<newCallbacks->size(); ++i) {
    if (!(*newCallbacks)[i]) continue; //removed
    auto listener = (*newCallbacks)[i];
    listener.callback(listener.key.c_str(), listener.param, value);
  }
}

HAL_Bool EncoderData::GetReverseDirection() {
  return m_reverseDirection;
}

void EncoderData::SetReverseDirection(HAL_Bool reverseDirection) {
  HAL_Bool oldValue = m_reverseDirection.exchange(reverseDirection);
  if (oldValue != reverseDirection) {
    InvokeReverseDirectionCallback(&MakeBoolean(reverseDirection));
  }
}

int32_t EncoderData::RegisterSamplesToAverageCallback(HAL_NotifyCallback callback, void* param, HAL_Bool initialNotify) {
  // Return an invalid value on a null callback
  if (callback == nullptr) return -1;
  const char* variableName = "SamplesToAverage";
  auto newCallbacks = std::make_shared<UidVector<NotifyListener>>(*m_samplesToAverageCallbacks);
  int uid = newCallbacks->emplace_back(variableName, param, callback);
  if (initialNotify) {
    callback(variableName, param, &MakeInt(GetSamplesToAverage()));
  }
  m_activeCallbacks = newCallbacks;
  return uid;
}
void EncoderData::CancelSamplesToAverageCallback(int32_t uid) {
  auto newCallbacks = std::make_shared<UidVector<NotifyListener>>(*m_samplesToAverageCallbacks);
  newCallbacks->erase(uid);
  m_activeCallbacks = newCallbacks;
}
void EncoderData::InvokeSamplesToAverageCallback(const HAL_Value* value) {
  auto newCallbacks = m_samplesToAverageCallbacks;
  for (std::size_t i=0; i<newCallbacks->size(); ++i) {
    if (!(*newCallbacks)[i]) continue; //removed
    auto listener = (*newCallbacks)[i];
    listener.callback(listener.key.c_str(), listener.param, value);
  }
}

int32_t EncoderData::GetSamplesToAverage() {
  return m_samplesToAverage;
}

void EncoderData::SetSamplesToAverage(int32_t samplesToAverage) {
  int32_t oldValue = m_samplesToAverage.exchange(samplesToAverage);
  if (oldValue != samplesToAverage) {
    InvokeSamplesToAverageCallback(&MakeInt(samplesToAverage));
  }
}

extern "C" {
int32_t HALSIM_RegisterEncoderInitializedCallback(int32_t index, HAL_NotifyCallback callback, void* param, HAL_Bool initialNotify) {
  return SimEncoderData[index]->RegisterInitializedCallback(callback, param, initialNotify);
}

void HALSIM_CancelEncoderInitializedCallback(int32_t index, int32_t uid) {
  SimEncoderData[index]->CancelInitializedCallback(uid);
}

HAL_Bool HALSIM_GetEncoderInitialized(int32_t index) {
  return SimEncoderData[index]->GetInitialized();
}

int32_t HALSIM_RegisterEncoderCountCallback(int32_t index, HAL_NotifyCallback callback, void* param, HAL_Bool initialNotify) {
  return SimEncoderData[index]->RegisterCountCallback(callback, param, initialNotify);
}

void HALSIM_CancelEncoderCountCallback(int32_t index, int32_t uid) {
  SimEncoderData[index]->CancelCountCallback(uid);
}

int32_t HALSIM_GetEncoderCount(int32_t index) {
  return SimEncoderData[index]->GetCount();
}

void HALSIM_SetEncoderCount(int32_t index, int32_t count) {
  SimEncoderData[index]->SetCount(count);
}

int32_t HALSIM_RegisterEncoderPeriodCallback(int32_t index, HAL_NotifyCallback callback, void* param, HAL_Bool initialNotify) {
  return SimEncoderData[index]->RegisterPeriodCallback(callback, param, initialNotify);
}

void HALSIM_CancelEncoderPeriodCallback(int32_t index, int32_t uid) {
  SimEncoderData[index]->CancelPeriodCallback(uid);
}

double HALSIM_GetEncoderPeriod(int32_t index) {
  return SimEncoderData[index]->GetPeriod();
}

void HALSIM_SetEncoderPeriod(int32_t index, double period) {
  SimEncoderData[index]->SetPeriod(period);
}

int32_t HALSIM_RegisterEncoderResetCallback(int32_t index, HAL_NotifyCallback callback, void* param, HAL_Bool initialNotify) {
  return SimEncoderData[index]->RegisterResetCallback(callback, param, initialNotify);
}

void HALSIM_CancelEncoderResetCallback(int32_t index, int32_t uid) {
  SimEncoderData[index]->CancelResetCallback(uid);
}

HAL_Bool HALSIM_GetEncoderReset(int32_t index) {
  return SimEncoderData[index]->GetReset();
}

int32_t HALSIM_RegisterEncoderMaxPeriodCallback(int32_t index, HAL_NotifyCallback callback, void* param, HAL_Bool initialNotify) {
  return SimEncoderData[index]->RegisterMaxPeriodCallback(callback, param, initialNotify);
}

void HALSIM_CancelEncoderMaxPeriodCallback(int32_t index, int32_t uid) {
  SimEncoderData[index]->CancelMaxPeriodCallback(uid);
}

double HALSIM_GetEncoderMaxPeriod(int32_t index) {
  return SimEncoderData[index]->GetMaxPeriod();
}

int32_t HALSIM_RegisterEncoderDirectionCallback(int32_t index, HAL_NotifyCallback callback, void* param, HAL_Bool initialNotify) {
  return SimEncoderData[index]->RegisterDirectionCallback(callback, param, initialNotify);
}

void HALSIM_CancelEncoderDirectionCallback(int32_t index, int32_t uid) {
  SimEncoderData[index]->CancelDirectionCallback(uid);
}

HAL_Bool HALSIM_GetEncoderDirection(int32_t index) {
  return SimEncoderData[index]->GetDirection();
}

void HALSIM_SetEncoderDirection(int32_t index, HAL_Bool direction) {
  SimEncoderData[index]->SetDirection(direction);
}

int32_t HALSIM_RegisterEncoderReverseDirectionCallback(int32_t index, HAL_NotifyCallback callback, void* param, HAL_Bool initialNotify) {
  return SimEncoderData[index]->RegisterReverseDirectionCallback(callback, param, initialNotify);
}

void HALSIM_CancelEncoderReverseDirectionCallback(int32_t index, int32_t uid) {
  SimEncoderData[index]->CancelReverseDirectionCallback(uid);
}

HAL_Bool HALSIM_GetEncoderReverseDirection(int32_t index) {
  return SimEncoderData[index]->GetReverseDirection();
}

int32_t HALSIM_RegisterEncoderSamplesToAverageCallback(int32_t index, HAL_NotifyCallback callback, void* param, HAL_Bool initialNotify) {
  return SimEncoderData[index]->RegisterSamplesToAverageCallback(callback, param, initialNotify);
}

void HALSIM_CancelEncoderSamplesToAverageCallback(int32_t index, int32_t uid) {
  SimEncoderData[index]->CancelSamplesToAverageCallback(uid);
}

int32_t HALSIM_GetEncoderSamplesToAverage(int32_t index) {
  return SimEncoderData[index]->GetSamplesToAverage();
}

}