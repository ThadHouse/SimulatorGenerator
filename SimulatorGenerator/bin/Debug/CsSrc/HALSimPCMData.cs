using System;
using System.Collections.Concurrent;
using System.Runtime.InteropServices;
using HAL.Base;
using HAL.NativeLoader;
using static HAL.Base.HAL;

namespace HAL.Simulator.Data
{
public class HALSimPCMData
{
static HALSimPCMData()
{ NativeDelegateInitializer.SetupNativeDelegates<HALSimPCMData>(LibraryLoaderHolder.NativeLoader);
}
public int Index { get; }
public HALSimPCMData(int index)
{
Index = index;
}
[UnmanagedFunctionPointer(CallingConvention.Cdecl)]
internal delegate void HALSIM_ResetPCMDataDelegate(int index);
[NativeDelegate]
internal static HALSIM_ResetPCMDataDelegate HALSIM_ResetPCMData;
public void ResetData()
{
m_solenoidInitializedCallbacks.Clear();
m_solenoidOutputCallbacks.Clear();
m_compressorInitializedCallbacks.Clear();
m_compressorOnCallbacks.Clear();
m_closedLoopEnabledCallbacks.Clear();
m_pressureSwitchCallbacks.Clear();
m_compressorCurrentCallbacks.Clear();
HALSIM_ResetPCMData(Index);
}
[UnmanagedFunctionPointer(CallingConvention.Cdecl)]
internal delegate int HALSIM_RegisterPCMSolenoidInitializedCallbackDelegate(int index, HAL_NotifyCallback callback, IntPtr param, bool initialNotify);
[NativeDelegate]
internal static HALSIM_RegisterPCMSolenoidInitializedCallbackDelegate HALSIM_RegisterPCMSolenoidInitializedCallback;
[UnmanagedFunctionPointer(CallingConvention.Cdecl)]
internal delegate void HALSIM_CancelPCMSolenoidInitializedCallbackDelegate(int index, int uid);
[NativeDelegate]
internal static HALSIM_CancelPCMSolenoidInitializedCallbackDelegate HALSIM_CancelPCMSolenoidInitializedCallback;
[UnmanagedFunctionPointer(CallingConvention.Cdecl)]
internal delegate bool HALSIM_GetPCMSolenoidInitializedDelegate(int index);
[NativeDelegate]
internal static HALSIM_GetPCMSolenoidInitializedDelegate HALSIM_GetPCMSolenoidInitialized;
private readonly ConcurrentDictionary<int, HAL_NotifyCallback> m_solenoidInitializedCallbacks = new ConcurrentDictionary<int, HAL_NotifyCallback>();
public int RegisterPCMSolenoidInitializedCallback(NotifyCallback callback, bool initialNotify)
{
HAL_NotifyCallback modCallback = (IntPtr namePtr, IntPtr param, ref HAL_Value value) =>
{
string varName = ReadUTF8String(namePtr);
callback?.Invoke(varName, ref value);
};
int uid = HALSIM_RegisterPCMSolenoidInitializedCallback(Index, modCallback, IntPtr.Zero, initialNotify);
if (!m_solenoidInitializedCallbacks.TryAdd(uid, modCallback))
{
HALSIM_CancelPCMSolenoidInitializedCallback(Index, uid);
throw new ArgumentException("Key cannot be added multiple times to the dictionary");
}
return uid;
}
public void CancelPCMSolenoidInitializedCallback(int uid)
{
HALSIM_CancelPCMSolenoidInitializedCallback(Index, uid);
HAL_NotifyCallback cb = null;
m_solenoidInitializedCallbacks.TryRemove(uid, out cb);
}
public bool GetSolenoidInitialized() => HALSIM_GetPCMSolenoidInitialized(Index);
[UnmanagedFunctionPointer(CallingConvention.Cdecl)]
internal delegate int HALSIM_RegisterPCMSolenoidOutputCallbackDelegate(int index, HAL_NotifyCallback callback, IntPtr param, bool initialNotify);
[NativeDelegate]
internal static HALSIM_RegisterPCMSolenoidOutputCallbackDelegate HALSIM_RegisterPCMSolenoidOutputCallback;
[UnmanagedFunctionPointer(CallingConvention.Cdecl)]
internal delegate void HALSIM_CancelPCMSolenoidOutputCallbackDelegate(int index, int uid);
[NativeDelegate]
internal static HALSIM_CancelPCMSolenoidOutputCallbackDelegate HALSIM_CancelPCMSolenoidOutputCallback;
[UnmanagedFunctionPointer(CallingConvention.Cdecl)]
internal delegate bool HALSIM_GetPCMSolenoidOutputDelegate(int index);
[NativeDelegate]
internal static HALSIM_GetPCMSolenoidOutputDelegate HALSIM_GetPCMSolenoidOutput;
private readonly ConcurrentDictionary<int, HAL_NotifyCallback> m_solenoidOutputCallbacks = new ConcurrentDictionary<int, HAL_NotifyCallback>();
public int RegisterPCMSolenoidOutputCallback(NotifyCallback callback, bool initialNotify)
{
HAL_NotifyCallback modCallback = (IntPtr namePtr, IntPtr param, ref HAL_Value value) =>
{
string varName = ReadUTF8String(namePtr);
callback?.Invoke(varName, ref value);
};
int uid = HALSIM_RegisterPCMSolenoidOutputCallback(Index, modCallback, IntPtr.Zero, initialNotify);
if (!m_solenoidOutputCallbacks.TryAdd(uid, modCallback))
{
HALSIM_CancelPCMSolenoidOutputCallback(Index, uid);
throw new ArgumentException("Key cannot be added multiple times to the dictionary");
}
return uid;
}
public void CancelPCMSolenoidOutputCallback(int uid)
{
HALSIM_CancelPCMSolenoidOutputCallback(Index, uid);
HAL_NotifyCallback cb = null;
m_solenoidOutputCallbacks.TryRemove(uid, out cb);
}
public bool GetSolenoidOutput() => HALSIM_GetPCMSolenoidOutput(Index);
[UnmanagedFunctionPointer(CallingConvention.Cdecl)]
internal delegate int HALSIM_RegisterPCMCompressorInitializedCallbackDelegate(int index, HAL_NotifyCallback callback, IntPtr param, bool initialNotify);
[NativeDelegate]
internal static HALSIM_RegisterPCMCompressorInitializedCallbackDelegate HALSIM_RegisterPCMCompressorInitializedCallback;
[UnmanagedFunctionPointer(CallingConvention.Cdecl)]
internal delegate void HALSIM_CancelPCMCompressorInitializedCallbackDelegate(int index, int uid);
[NativeDelegate]
internal static HALSIM_CancelPCMCompressorInitializedCallbackDelegate HALSIM_CancelPCMCompressorInitializedCallback;
[UnmanagedFunctionPointer(CallingConvention.Cdecl)]
internal delegate bool HALSIM_GetPCMCompressorInitializedDelegate(int index);
[NativeDelegate]
internal static HALSIM_GetPCMCompressorInitializedDelegate HALSIM_GetPCMCompressorInitialized;
private readonly ConcurrentDictionary<int, HAL_NotifyCallback> m_compressorInitializedCallbacks = new ConcurrentDictionary<int, HAL_NotifyCallback>();
public int RegisterPCMCompressorInitializedCallback(NotifyCallback callback, bool initialNotify)
{
HAL_NotifyCallback modCallback = (IntPtr namePtr, IntPtr param, ref HAL_Value value) =>
{
string varName = ReadUTF8String(namePtr);
callback?.Invoke(varName, ref value);
};
int uid = HALSIM_RegisterPCMCompressorInitializedCallback(Index, modCallback, IntPtr.Zero, initialNotify);
if (!m_compressorInitializedCallbacks.TryAdd(uid, modCallback))
{
HALSIM_CancelPCMCompressorInitializedCallback(Index, uid);
throw new ArgumentException("Key cannot be added multiple times to the dictionary");
}
return uid;
}
public void CancelPCMCompressorInitializedCallback(int uid)
{
HALSIM_CancelPCMCompressorInitializedCallback(Index, uid);
HAL_NotifyCallback cb = null;
m_compressorInitializedCallbacks.TryRemove(uid, out cb);
}
public bool GetCompressorInitialized() => HALSIM_GetPCMCompressorInitialized(Index);
[UnmanagedFunctionPointer(CallingConvention.Cdecl)]
internal delegate int HALSIM_RegisterPCMCompressorOnCallbackDelegate(int index, HAL_NotifyCallback callback, IntPtr param, bool initialNotify);
[NativeDelegate]
internal static HALSIM_RegisterPCMCompressorOnCallbackDelegate HALSIM_RegisterPCMCompressorOnCallback;
[UnmanagedFunctionPointer(CallingConvention.Cdecl)]
internal delegate void HALSIM_CancelPCMCompressorOnCallbackDelegate(int index, int uid);
[NativeDelegate]
internal static HALSIM_CancelPCMCompressorOnCallbackDelegate HALSIM_CancelPCMCompressorOnCallback;
[UnmanagedFunctionPointer(CallingConvention.Cdecl)]
internal delegate bool HALSIM_GetPCMCompressorOnDelegate(int index);
[NativeDelegate]
internal static HALSIM_GetPCMCompressorOnDelegate HALSIM_GetPCMCompressorOn;
private readonly ConcurrentDictionary<int, HAL_NotifyCallback> m_compressorOnCallbacks = new ConcurrentDictionary<int, HAL_NotifyCallback>();
public int RegisterPCMCompressorOnCallback(NotifyCallback callback, bool initialNotify)
{
HAL_NotifyCallback modCallback = (IntPtr namePtr, IntPtr param, ref HAL_Value value) =>
{
string varName = ReadUTF8String(namePtr);
callback?.Invoke(varName, ref value);
};
int uid = HALSIM_RegisterPCMCompressorOnCallback(Index, modCallback, IntPtr.Zero, initialNotify);
if (!m_compressorOnCallbacks.TryAdd(uid, modCallback))
{
HALSIM_CancelPCMCompressorOnCallback(Index, uid);
throw new ArgumentException("Key cannot be added multiple times to the dictionary");
}
return uid;
}
public void CancelPCMCompressorOnCallback(int uid)
{
HALSIM_CancelPCMCompressorOnCallback(Index, uid);
HAL_NotifyCallback cb = null;
m_compressorOnCallbacks.TryRemove(uid, out cb);
}
public bool GetCompressorOn() => HALSIM_GetPCMCompressorOn(Index);
[UnmanagedFunctionPointer(CallingConvention.Cdecl)]
internal delegate int HALSIM_RegisterPCMClosedLoopEnabledCallbackDelegate(int index, HAL_NotifyCallback callback, IntPtr param, bool initialNotify);
[NativeDelegate]
internal static HALSIM_RegisterPCMClosedLoopEnabledCallbackDelegate HALSIM_RegisterPCMClosedLoopEnabledCallback;
[UnmanagedFunctionPointer(CallingConvention.Cdecl)]
internal delegate void HALSIM_CancelPCMClosedLoopEnabledCallbackDelegate(int index, int uid);
[NativeDelegate]
internal static HALSIM_CancelPCMClosedLoopEnabledCallbackDelegate HALSIM_CancelPCMClosedLoopEnabledCallback;
[UnmanagedFunctionPointer(CallingConvention.Cdecl)]
internal delegate bool HALSIM_GetPCMClosedLoopEnabledDelegate(int index);
[NativeDelegate]
internal static HALSIM_GetPCMClosedLoopEnabledDelegate HALSIM_GetPCMClosedLoopEnabled;
private readonly ConcurrentDictionary<int, HAL_NotifyCallback> m_closedLoopEnabledCallbacks = new ConcurrentDictionary<int, HAL_NotifyCallback>();
public int RegisterPCMClosedLoopEnabledCallback(NotifyCallback callback, bool initialNotify)
{
HAL_NotifyCallback modCallback = (IntPtr namePtr, IntPtr param, ref HAL_Value value) =>
{
string varName = ReadUTF8String(namePtr);
callback?.Invoke(varName, ref value);
};
int uid = HALSIM_RegisterPCMClosedLoopEnabledCallback(Index, modCallback, IntPtr.Zero, initialNotify);
if (!m_closedLoopEnabledCallbacks.TryAdd(uid, modCallback))
{
HALSIM_CancelPCMClosedLoopEnabledCallback(Index, uid);
throw new ArgumentException("Key cannot be added multiple times to the dictionary");
}
return uid;
}
public void CancelPCMClosedLoopEnabledCallback(int uid)
{
HALSIM_CancelPCMClosedLoopEnabledCallback(Index, uid);
HAL_NotifyCallback cb = null;
m_closedLoopEnabledCallbacks.TryRemove(uid, out cb);
}
public bool GetClosedLoopEnabled() => HALSIM_GetPCMClosedLoopEnabled(Index);
[UnmanagedFunctionPointer(CallingConvention.Cdecl)]
internal delegate int HALSIM_RegisterPCMPressureSwitchCallbackDelegate(int index, HAL_NotifyCallback callback, IntPtr param, bool initialNotify);
[NativeDelegate]
internal static HALSIM_RegisterPCMPressureSwitchCallbackDelegate HALSIM_RegisterPCMPressureSwitchCallback;
[UnmanagedFunctionPointer(CallingConvention.Cdecl)]
internal delegate void HALSIM_CancelPCMPressureSwitchCallbackDelegate(int index, int uid);
[NativeDelegate]
internal static HALSIM_CancelPCMPressureSwitchCallbackDelegate HALSIM_CancelPCMPressureSwitchCallback;
[UnmanagedFunctionPointer(CallingConvention.Cdecl)]
internal delegate bool HALSIM_GetPCMPressureSwitchDelegate(int index);
[NativeDelegate]
internal static HALSIM_GetPCMPressureSwitchDelegate HALSIM_GetPCMPressureSwitch;
private readonly ConcurrentDictionary<int, HAL_NotifyCallback> m_pressureSwitchCallbacks = new ConcurrentDictionary<int, HAL_NotifyCallback>();
public int RegisterPCMPressureSwitchCallback(NotifyCallback callback, bool initialNotify)
{
HAL_NotifyCallback modCallback = (IntPtr namePtr, IntPtr param, ref HAL_Value value) =>
{
string varName = ReadUTF8String(namePtr);
callback?.Invoke(varName, ref value);
};
int uid = HALSIM_RegisterPCMPressureSwitchCallback(Index, modCallback, IntPtr.Zero, initialNotify);
if (!m_pressureSwitchCallbacks.TryAdd(uid, modCallback))
{
HALSIM_CancelPCMPressureSwitchCallback(Index, uid);
throw new ArgumentException("Key cannot be added multiple times to the dictionary");
}
return uid;
}
public void CancelPCMPressureSwitchCallback(int uid)
{
HALSIM_CancelPCMPressureSwitchCallback(Index, uid);
HAL_NotifyCallback cb = null;
m_pressureSwitchCallbacks.TryRemove(uid, out cb);
}
public bool GetPressureSwitch() => HALSIM_GetPCMPressureSwitch(Index);
[UnmanagedFunctionPointer(CallingConvention.Cdecl)]
internal delegate int HALSIM_RegisterPCMCompressorCurrentCallbackDelegate(int index, HAL_NotifyCallback callback, IntPtr param, bool initialNotify);
[NativeDelegate]
internal static HALSIM_RegisterPCMCompressorCurrentCallbackDelegate HALSIM_RegisterPCMCompressorCurrentCallback;
[UnmanagedFunctionPointer(CallingConvention.Cdecl)]
internal delegate void HALSIM_CancelPCMCompressorCurrentCallbackDelegate(int index, int uid);
[NativeDelegate]
internal static HALSIM_CancelPCMCompressorCurrentCallbackDelegate HALSIM_CancelPCMCompressorCurrentCallback;
[UnmanagedFunctionPointer(CallingConvention.Cdecl)]
internal delegate double HALSIM_GetPCMCompressorCurrentDelegate(int index);
[NativeDelegate]
internal static HALSIM_GetPCMCompressorCurrentDelegate HALSIM_GetPCMCompressorCurrent;
private readonly ConcurrentDictionary<int, HAL_NotifyCallback> m_compressorCurrentCallbacks = new ConcurrentDictionary<int, HAL_NotifyCallback>();
public int RegisterPCMCompressorCurrentCallback(NotifyCallback callback, bool initialNotify)
{
HAL_NotifyCallback modCallback = (IntPtr namePtr, IntPtr param, ref HAL_Value value) =>
{
string varName = ReadUTF8String(namePtr);
callback?.Invoke(varName, ref value);
};
int uid = HALSIM_RegisterPCMCompressorCurrentCallback(Index, modCallback, IntPtr.Zero, initialNotify);
if (!m_compressorCurrentCallbacks.TryAdd(uid, modCallback))
{
HALSIM_CancelPCMCompressorCurrentCallback(Index, uid);
throw new ArgumentException("Key cannot be added multiple times to the dictionary");
}
return uid;
}
public void CancelPCMCompressorCurrentCallback(int uid)
{
HALSIM_CancelPCMCompressorCurrentCallback(Index, uid);
HAL_NotifyCallback cb = null;
m_compressorCurrentCallbacks.TryRemove(uid, out cb);
}
public double GetCompressorCurrent() => HALSIM_GetPCMCompressorCurrent(Index);
}
}
