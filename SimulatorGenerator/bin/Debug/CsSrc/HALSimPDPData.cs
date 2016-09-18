using System;
using System.Collections.Concurrent;
using System.Runtime.InteropServices;
using HAL.Base;
using HAL.NativeLoader;
using static HAL.Base.HAL;

namespace HAL.Simulator.Data
{
public class HALSimPDPData
{
static HALSimPDPData()
{ NativeDelegateInitializer.SetupNativeDelegates<HALSimPDPData>(LibraryLoaderHolder.NativeLoader);
}
public int Index { get; }
public HALSimPDPData(int index)
{
Index = index;
}
[UnmanagedFunctionPointer(CallingConvention.Cdecl)]
internal delegate void HALSIM_ResetPDPDataDelegate(int index);
[NativeDelegate]
internal static HALSIM_ResetPDPDataDelegate HALSIM_ResetPDPData;
public void ResetData()
{
m_initializedCallbacks.Clear();
m_temperatureCallbacks.Clear();
m_voltageCallbacks.Clear();
m_currentCallbacks.Clear();
HALSIM_ResetPDPData(Index);
}
[UnmanagedFunctionPointer(CallingConvention.Cdecl)]
internal delegate int HALSIM_RegisterPDPInitializedCallbackDelegate(int index, HAL_NotifyCallback callback, IntPtr param, bool initialNotify);
[NativeDelegate]
internal static HALSIM_RegisterPDPInitializedCallbackDelegate HALSIM_RegisterPDPInitializedCallback;
[UnmanagedFunctionPointer(CallingConvention.Cdecl)]
internal delegate void HALSIM_CancelPDPInitializedCallbackDelegate(int index, int uid);
[NativeDelegate]
internal static HALSIM_CancelPDPInitializedCallbackDelegate HALSIM_CancelPDPInitializedCallback;
[UnmanagedFunctionPointer(CallingConvention.Cdecl)]
internal delegate bool HALSIM_GetPDPInitializedDelegate(int index);
[NativeDelegate]
internal static HALSIM_GetPDPInitializedDelegate HALSIM_GetPDPInitialized;
private readonly ConcurrentDictionary<int, HAL_NotifyCallback> m_initializedCallbacks = new ConcurrentDictionary<int, HAL_NotifyCallback>();
public int RegisterPDPInitializedCallback(NotifyCallback callback, bool initialNotify)
{
HAL_NotifyCallback modCallback = (IntPtr namePtr, IntPtr param, ref HAL_Value value) =>
{
string varName = ReadUTF8String(namePtr);
callback?.Invoke(varName, ref value);
};
int uid = HALSIM_RegisterPDPInitializedCallback(Index, modCallback, IntPtr.Zero, initialNotify);
if (!m_initializedCallbacks.TryAdd(uid, modCallback))
{
HALSIM_CancelPDPInitializedCallback(Index, uid);
throw new ArgumentException("Key cannot be added multiple times to the dictionary");
}
return uid;
}
public void CancelPDPInitializedCallback(int uid)
{
HALSIM_CancelPDPInitializedCallback(Index, uid);
HAL_NotifyCallback cb = null;
m_initializedCallbacks.TryRemove(uid, out cb);
}
public bool GetInitialized() => HALSIM_GetPDPInitialized(Index);
[UnmanagedFunctionPointer(CallingConvention.Cdecl)]
internal delegate int HALSIM_RegisterPDPTemperatureCallbackDelegate(int index, HAL_NotifyCallback callback, IntPtr param, bool initialNotify);
[NativeDelegate]
internal static HALSIM_RegisterPDPTemperatureCallbackDelegate HALSIM_RegisterPDPTemperatureCallback;
[UnmanagedFunctionPointer(CallingConvention.Cdecl)]
internal delegate void HALSIM_CancelPDPTemperatureCallbackDelegate(int index, int uid);
[NativeDelegate]
internal static HALSIM_CancelPDPTemperatureCallbackDelegate HALSIM_CancelPDPTemperatureCallback;
[UnmanagedFunctionPointer(CallingConvention.Cdecl)]
internal delegate double HALSIM_GetPDPTemperatureDelegate(int index);
[NativeDelegate]
internal static HALSIM_GetPDPTemperatureDelegate HALSIM_GetPDPTemperature;
[UnmanagedFunctionPointer(CallingConvention.Cdecl)]
internal delegate void HALSIM_SetPDPTemperatureDelegate(int index, double temperature);
[NativeDelegate]
internal static HALSIM_SetPDPTemperatureDelegate HALSIM_SetPDPTemperature;
private readonly ConcurrentDictionary<int, HAL_NotifyCallback> m_temperatureCallbacks = new ConcurrentDictionary<int, HAL_NotifyCallback>();
public int RegisterPDPTemperatureCallback(NotifyCallback callback, bool initialNotify)
{
HAL_NotifyCallback modCallback = (IntPtr namePtr, IntPtr param, ref HAL_Value value) =>
{
string varName = ReadUTF8String(namePtr);
callback?.Invoke(varName, ref value);
};
int uid = HALSIM_RegisterPDPTemperatureCallback(Index, modCallback, IntPtr.Zero, initialNotify);
if (!m_temperatureCallbacks.TryAdd(uid, modCallback))
{
HALSIM_CancelPDPTemperatureCallback(Index, uid);
throw new ArgumentException("Key cannot be added multiple times to the dictionary");
}
return uid;
}
public void CancelPDPTemperatureCallback(int uid)
{
HALSIM_CancelPDPTemperatureCallback(Index, uid);
HAL_NotifyCallback cb = null;
m_temperatureCallbacks.TryRemove(uid, out cb);
}
public double GetTemperature() => HALSIM_GetPDPTemperature(Index);
public void SetTemperature(double temperature) => HALSIM_SetPDPTemperature(Index, temperature);
[UnmanagedFunctionPointer(CallingConvention.Cdecl)]
internal delegate int HALSIM_RegisterPDPVoltageCallbackDelegate(int index, HAL_NotifyCallback callback, IntPtr param, bool initialNotify);
[NativeDelegate]
internal static HALSIM_RegisterPDPVoltageCallbackDelegate HALSIM_RegisterPDPVoltageCallback;
[UnmanagedFunctionPointer(CallingConvention.Cdecl)]
internal delegate void HALSIM_CancelPDPVoltageCallbackDelegate(int index, int uid);
[NativeDelegate]
internal static HALSIM_CancelPDPVoltageCallbackDelegate HALSIM_CancelPDPVoltageCallback;
[UnmanagedFunctionPointer(CallingConvention.Cdecl)]
internal delegate double HALSIM_GetPDPVoltageDelegate(int index);
[NativeDelegate]
internal static HALSIM_GetPDPVoltageDelegate HALSIM_GetPDPVoltage;
[UnmanagedFunctionPointer(CallingConvention.Cdecl)]
internal delegate void HALSIM_SetPDPVoltageDelegate(int index, double voltage);
[NativeDelegate]
internal static HALSIM_SetPDPVoltageDelegate HALSIM_SetPDPVoltage;
private readonly ConcurrentDictionary<int, HAL_NotifyCallback> m_voltageCallbacks = new ConcurrentDictionary<int, HAL_NotifyCallback>();
public int RegisterPDPVoltageCallback(NotifyCallback callback, bool initialNotify)
{
HAL_NotifyCallback modCallback = (IntPtr namePtr, IntPtr param, ref HAL_Value value) =>
{
string varName = ReadUTF8String(namePtr);
callback?.Invoke(varName, ref value);
};
int uid = HALSIM_RegisterPDPVoltageCallback(Index, modCallback, IntPtr.Zero, initialNotify);
if (!m_voltageCallbacks.TryAdd(uid, modCallback))
{
HALSIM_CancelPDPVoltageCallback(Index, uid);
throw new ArgumentException("Key cannot be added multiple times to the dictionary");
}
return uid;
}
public void CancelPDPVoltageCallback(int uid)
{
HALSIM_CancelPDPVoltageCallback(Index, uid);
HAL_NotifyCallback cb = null;
m_voltageCallbacks.TryRemove(uid, out cb);
}
public double GetVoltage() => HALSIM_GetPDPVoltage(Index);
public void SetVoltage(double voltage) => HALSIM_SetPDPVoltage(Index, voltage);
[UnmanagedFunctionPointer(CallingConvention.Cdecl)]
internal delegate int HALSIM_RegisterPDPCurrentCallbackDelegate(int index, HAL_NotifyCallback callback, IntPtr param, bool initialNotify);
[NativeDelegate]
internal static HALSIM_RegisterPDPCurrentCallbackDelegate HALSIM_RegisterPDPCurrentCallback;
[UnmanagedFunctionPointer(CallingConvention.Cdecl)]
internal delegate void HALSIM_CancelPDPCurrentCallbackDelegate(int index, int uid);
[NativeDelegate]
internal static HALSIM_CancelPDPCurrentCallbackDelegate HALSIM_CancelPDPCurrentCallback;
[UnmanagedFunctionPointer(CallingConvention.Cdecl)]
internal delegate double HALSIM_GetPDPCurrentDelegate(int index);
[NativeDelegate]
internal static HALSIM_GetPDPCurrentDelegate HALSIM_GetPDPCurrent;
[UnmanagedFunctionPointer(CallingConvention.Cdecl)]
internal delegate void HALSIM_SetPDPCurrentDelegate(int index, double current);
[NativeDelegate]
internal static HALSIM_SetPDPCurrentDelegate HALSIM_SetPDPCurrent;
private readonly ConcurrentDictionary<int, HAL_NotifyCallback> m_currentCallbacks = new ConcurrentDictionary<int, HAL_NotifyCallback>();
public int RegisterPDPCurrentCallback(NotifyCallback callback, bool initialNotify)
{
HAL_NotifyCallback modCallback = (IntPtr namePtr, IntPtr param, ref HAL_Value value) =>
{
string varName = ReadUTF8String(namePtr);
callback?.Invoke(varName, ref value);
};
int uid = HALSIM_RegisterPDPCurrentCallback(Index, modCallback, IntPtr.Zero, initialNotify);
if (!m_currentCallbacks.TryAdd(uid, modCallback))
{
HALSIM_CancelPDPCurrentCallback(Index, uid);
throw new ArgumentException("Key cannot be added multiple times to the dictionary");
}
return uid;
}
public void CancelPDPCurrentCallback(int uid)
{
HALSIM_CancelPDPCurrentCallback(Index, uid);
HAL_NotifyCallback cb = null;
m_currentCallbacks.TryRemove(uid, out cb);
}
public double GetCurrent() => HALSIM_GetPDPCurrent(Index);
public void SetCurrent(double current) => HALSIM_SetPDPCurrent(Index, current);
}
}
