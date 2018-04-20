using System;
using System.Collections.Concurrent;
using System.Runtime.InteropServices;
using HAL.Base;
using HAL.NativeLoader;
using static HAL.Base.HAL;

namespace HAL.Simulator.Data
{
public class HALSimDriverStationData
{
static HALSimDriverStationData()
{ NativeDelegateInitializer.SetupNativeDelegates<HALSimDriverStationData>(LibraryLoaderHolder.NativeLoader);
}
public int Index { get; }
public HALSimDriverStationData(int index)
{
Index = index;
}
[UnmanagedFunctionPointer(CallingConvention.Cdecl)]
internal delegate void HALSIM_ResetDriverStationDataDelegate(int index);
[NativeDelegate]
internal static HALSIM_ResetDriverStationDataDelegate HALSIM_ResetDriverStationData;
public void ResetData()
{
m_enabledCallbacks.Clear();
m_autonomousCallbacks.Clear();
m_testCallbacks.Clear();
m_eStopCallbacks.Clear();
m_fmsAttachedCallbacks.Clear();
m_dsAttachedCallbacks.Clear();
HALSIM_ResetDriverStationData(Index);
}
[UnmanagedFunctionPointer(CallingConvention.Cdecl)]
internal delegate int HALSIM_RegisterDriverStationEnabledCallbackDelegate(int index, HAL_NotifyCallback callback, IntPtr param, bool initialNotify);
[NativeDelegate]
internal static HALSIM_RegisterDriverStationEnabledCallbackDelegate HALSIM_RegisterDriverStationEnabledCallback;
[UnmanagedFunctionPointer(CallingConvention.Cdecl)]
internal delegate void HALSIM_CancelDriverStationEnabledCallbackDelegate(int index, int uid);
[NativeDelegate]
internal static HALSIM_CancelDriverStationEnabledCallbackDelegate HALSIM_CancelDriverStationEnabledCallback;
[UnmanagedFunctionPointer(CallingConvention.Cdecl)]
internal delegate bool HALSIM_GetDriverStationEnabledDelegate(int index);
[NativeDelegate]
internal static HALSIM_GetDriverStationEnabledDelegate HALSIM_GetDriverStationEnabled;
private readonly ConcurrentDictionary<int, HAL_NotifyCallback> m_enabledCallbacks = new ConcurrentDictionary<int, HAL_NotifyCallback>();
public int RegisterDriverStationEnabledCallback(NotifyCallback callback, bool initialNotify)
{
HAL_NotifyCallback modCallback = (IntPtr namePtr, IntPtr param, ref HAL_Value value) =>
{
string varName = ReadUTF8String(namePtr);
callback?.Invoke(varName, ref value);
};
int uid = HALSIM_RegisterDriverStationEnabledCallback(Index, modCallback, IntPtr.Zero, initialNotify);
if (!m_enabledCallbacks.TryAdd(uid, modCallback))
{
HALSIM_CancelDriverStationEnabledCallback(Index, uid);
throw new ArgumentException("Key cannot be added multiple times to the dictionary");
}
return uid;
}
public void CancelDriverStationEnabledCallback(int uid)
{
HALSIM_CancelDriverStationEnabledCallback(Index, uid);
HAL_NotifyCallback cb = null;
m_enabledCallbacks.TryRemove(uid, out cb);
}
public bool GetEnabled() => HALSIM_GetDriverStationEnabled(Index);
[UnmanagedFunctionPointer(CallingConvention.Cdecl)]
internal delegate int HALSIM_RegisterDriverStationAutonomousCallbackDelegate(int index, HAL_NotifyCallback callback, IntPtr param, bool initialNotify);
[NativeDelegate]
internal static HALSIM_RegisterDriverStationAutonomousCallbackDelegate HALSIM_RegisterDriverStationAutonomousCallback;
[UnmanagedFunctionPointer(CallingConvention.Cdecl)]
internal delegate void HALSIM_CancelDriverStationAutonomousCallbackDelegate(int index, int uid);
[NativeDelegate]
internal static HALSIM_CancelDriverStationAutonomousCallbackDelegate HALSIM_CancelDriverStationAutonomousCallback;
[UnmanagedFunctionPointer(CallingConvention.Cdecl)]
internal delegate bool HALSIM_GetDriverStationAutonomousDelegate(int index);
[NativeDelegate]
internal static HALSIM_GetDriverStationAutonomousDelegate HALSIM_GetDriverStationAutonomous;
private readonly ConcurrentDictionary<int, HAL_NotifyCallback> m_autonomousCallbacks = new ConcurrentDictionary<int, HAL_NotifyCallback>();
public int RegisterDriverStationAutonomousCallback(NotifyCallback callback, bool initialNotify)
{
HAL_NotifyCallback modCallback = (IntPtr namePtr, IntPtr param, ref HAL_Value value) =>
{
string varName = ReadUTF8String(namePtr);
callback?.Invoke(varName, ref value);
};
int uid = HALSIM_RegisterDriverStationAutonomousCallback(Index, modCallback, IntPtr.Zero, initialNotify);
if (!m_autonomousCallbacks.TryAdd(uid, modCallback))
{
HALSIM_CancelDriverStationAutonomousCallback(Index, uid);
throw new ArgumentException("Key cannot be added multiple times to the dictionary");
}
return uid;
}
public void CancelDriverStationAutonomousCallback(int uid)
{
HALSIM_CancelDriverStationAutonomousCallback(Index, uid);
HAL_NotifyCallback cb = null;
m_autonomousCallbacks.TryRemove(uid, out cb);
}
public bool GetAutonomous() => HALSIM_GetDriverStationAutonomous(Index);
[UnmanagedFunctionPointer(CallingConvention.Cdecl)]
internal delegate int HALSIM_RegisterDriverStationTestCallbackDelegate(int index, HAL_NotifyCallback callback, IntPtr param, bool initialNotify);
[NativeDelegate]
internal static HALSIM_RegisterDriverStationTestCallbackDelegate HALSIM_RegisterDriverStationTestCallback;
[UnmanagedFunctionPointer(CallingConvention.Cdecl)]
internal delegate void HALSIM_CancelDriverStationTestCallbackDelegate(int index, int uid);
[NativeDelegate]
internal static HALSIM_CancelDriverStationTestCallbackDelegate HALSIM_CancelDriverStationTestCallback;
[UnmanagedFunctionPointer(CallingConvention.Cdecl)]
internal delegate bool HALSIM_GetDriverStationTestDelegate(int index);
[NativeDelegate]
internal static HALSIM_GetDriverStationTestDelegate HALSIM_GetDriverStationTest;
private readonly ConcurrentDictionary<int, HAL_NotifyCallback> m_testCallbacks = new ConcurrentDictionary<int, HAL_NotifyCallback>();
public int RegisterDriverStationTestCallback(NotifyCallback callback, bool initialNotify)
{
HAL_NotifyCallback modCallback = (IntPtr namePtr, IntPtr param, ref HAL_Value value) =>
{
string varName = ReadUTF8String(namePtr);
callback?.Invoke(varName, ref value);
};
int uid = HALSIM_RegisterDriverStationTestCallback(Index, modCallback, IntPtr.Zero, initialNotify);
if (!m_testCallbacks.TryAdd(uid, modCallback))
{
HALSIM_CancelDriverStationTestCallback(Index, uid);
throw new ArgumentException("Key cannot be added multiple times to the dictionary");
}
return uid;
}
public void CancelDriverStationTestCallback(int uid)
{
HALSIM_CancelDriverStationTestCallback(Index, uid);
HAL_NotifyCallback cb = null;
m_testCallbacks.TryRemove(uid, out cb);
}
public bool GetTest() => HALSIM_GetDriverStationTest(Index);
[UnmanagedFunctionPointer(CallingConvention.Cdecl)]
internal delegate int HALSIM_RegisterDriverStationEStopCallbackDelegate(int index, HAL_NotifyCallback callback, IntPtr param, bool initialNotify);
[NativeDelegate]
internal static HALSIM_RegisterDriverStationEStopCallbackDelegate HALSIM_RegisterDriverStationEStopCallback;
[UnmanagedFunctionPointer(CallingConvention.Cdecl)]
internal delegate void HALSIM_CancelDriverStationEStopCallbackDelegate(int index, int uid);
[NativeDelegate]
internal static HALSIM_CancelDriverStationEStopCallbackDelegate HALSIM_CancelDriverStationEStopCallback;
[UnmanagedFunctionPointer(CallingConvention.Cdecl)]
internal delegate bool HALSIM_GetDriverStationEStopDelegate(int index);
[NativeDelegate]
internal static HALSIM_GetDriverStationEStopDelegate HALSIM_GetDriverStationEStop;
private readonly ConcurrentDictionary<int, HAL_NotifyCallback> m_eStopCallbacks = new ConcurrentDictionary<int, HAL_NotifyCallback>();
public int RegisterDriverStationEStopCallback(NotifyCallback callback, bool initialNotify)
{
HAL_NotifyCallback modCallback = (IntPtr namePtr, IntPtr param, ref HAL_Value value) =>
{
string varName = ReadUTF8String(namePtr);
callback?.Invoke(varName, ref value);
};
int uid = HALSIM_RegisterDriverStationEStopCallback(Index, modCallback, IntPtr.Zero, initialNotify);
if (!m_eStopCallbacks.TryAdd(uid, modCallback))
{
HALSIM_CancelDriverStationEStopCallback(Index, uid);
throw new ArgumentException("Key cannot be added multiple times to the dictionary");
}
return uid;
}
public void CancelDriverStationEStopCallback(int uid)
{
HALSIM_CancelDriverStationEStopCallback(Index, uid);
HAL_NotifyCallback cb = null;
m_eStopCallbacks.TryRemove(uid, out cb);
}
public bool GetEStop() => HALSIM_GetDriverStationEStop(Index);
[UnmanagedFunctionPointer(CallingConvention.Cdecl)]
internal delegate int HALSIM_RegisterDriverStationFmsAttachedCallbackDelegate(int index, HAL_NotifyCallback callback, IntPtr param, bool initialNotify);
[NativeDelegate]
internal static HALSIM_RegisterDriverStationFmsAttachedCallbackDelegate HALSIM_RegisterDriverStationFmsAttachedCallback;
[UnmanagedFunctionPointer(CallingConvention.Cdecl)]
internal delegate void HALSIM_CancelDriverStationFmsAttachedCallbackDelegate(int index, int uid);
[NativeDelegate]
internal static HALSIM_CancelDriverStationFmsAttachedCallbackDelegate HALSIM_CancelDriverStationFmsAttachedCallback;
[UnmanagedFunctionPointer(CallingConvention.Cdecl)]
internal delegate bool HALSIM_GetDriverStationFmsAttachedDelegate(int index);
[NativeDelegate]
internal static HALSIM_GetDriverStationFmsAttachedDelegate HALSIM_GetDriverStationFmsAttached;
private readonly ConcurrentDictionary<int, HAL_NotifyCallback> m_fmsAttachedCallbacks = new ConcurrentDictionary<int, HAL_NotifyCallback>();
public int RegisterDriverStationFmsAttachedCallback(NotifyCallback callback, bool initialNotify)
{
HAL_NotifyCallback modCallback = (IntPtr namePtr, IntPtr param, ref HAL_Value value) =>
{
string varName = ReadUTF8String(namePtr);
callback?.Invoke(varName, ref value);
};
int uid = HALSIM_RegisterDriverStationFmsAttachedCallback(Index, modCallback, IntPtr.Zero, initialNotify);
if (!m_fmsAttachedCallbacks.TryAdd(uid, modCallback))
{
HALSIM_CancelDriverStationFmsAttachedCallback(Index, uid);
throw new ArgumentException("Key cannot be added multiple times to the dictionary");
}
return uid;
}
public void CancelDriverStationFmsAttachedCallback(int uid)
{
HALSIM_CancelDriverStationFmsAttachedCallback(Index, uid);
HAL_NotifyCallback cb = null;
m_fmsAttachedCallbacks.TryRemove(uid, out cb);
}
public bool GetFmsAttached() => HALSIM_GetDriverStationFmsAttached(Index);
[UnmanagedFunctionPointer(CallingConvention.Cdecl)]
internal delegate int HALSIM_RegisterDriverStationDsAttachedCallbackDelegate(int index, HAL_NotifyCallback callback, IntPtr param, bool initialNotify);
[NativeDelegate]
internal static HALSIM_RegisterDriverStationDsAttachedCallbackDelegate HALSIM_RegisterDriverStationDsAttachedCallback;
[UnmanagedFunctionPointer(CallingConvention.Cdecl)]
internal delegate void HALSIM_CancelDriverStationDsAttachedCallbackDelegate(int index, int uid);
[NativeDelegate]
internal static HALSIM_CancelDriverStationDsAttachedCallbackDelegate HALSIM_CancelDriverStationDsAttachedCallback;
[UnmanagedFunctionPointer(CallingConvention.Cdecl)]
internal delegate bool HALSIM_GetDriverStationDsAttachedDelegate(int index);
[NativeDelegate]
internal static HALSIM_GetDriverStationDsAttachedDelegate HALSIM_GetDriverStationDsAttached;
private readonly ConcurrentDictionary<int, HAL_NotifyCallback> m_dsAttachedCallbacks = new ConcurrentDictionary<int, HAL_NotifyCallback>();
public int RegisterDriverStationDsAttachedCallback(NotifyCallback callback, bool initialNotify)
{
HAL_NotifyCallback modCallback = (IntPtr namePtr, IntPtr param, ref HAL_Value value) =>
{
string varName = ReadUTF8String(namePtr);
callback?.Invoke(varName, ref value);
};
int uid = HALSIM_RegisterDriverStationDsAttachedCallback(Index, modCallback, IntPtr.Zero, initialNotify);
if (!m_dsAttachedCallbacks.TryAdd(uid, modCallback))
{
HALSIM_CancelDriverStationDsAttachedCallback(Index, uid);
throw new ArgumentException("Key cannot be added multiple times to the dictionary");
}
return uid;
}
public void CancelDriverStationDsAttachedCallback(int uid)
{
HALSIM_CancelDriverStationDsAttachedCallback(Index, uid);
HAL_NotifyCallback cb = null;
m_dsAttachedCallbacks.TryRemove(uid, out cb);
}
public bool GetDsAttached() => HALSIM_GetDriverStationDsAttached(Index);
}
}
