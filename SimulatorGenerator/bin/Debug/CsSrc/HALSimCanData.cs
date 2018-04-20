using System;
using System.Collections.Concurrent;
using System.Runtime.InteropServices;
using HAL.Base;
using HAL.NativeLoader;
using static HAL.Base.HAL;

namespace HAL.Simulator.Data
{
public class HALSimCanData
{
static HALSimCanData()
{ NativeDelegateInitializer.SetupNativeDelegates<HALSimCanData>(LibraryLoaderHolder.NativeLoader);
}
public int Index { get; }
public HALSimCanData(int index)
{
Index = index;
}
[UnmanagedFunctionPointer(CallingConvention.Cdecl)]
internal delegate void HALSIM_ResetCanDataDelegate(int index);
[NativeDelegate]
internal static HALSIM_ResetCanDataDelegate HALSIM_ResetCanData;
public void ResetData()
{
m_canSendMessageCallbacks.Clear();
m_canReceiveMessageCallbacks.Clear();
m_canOpenStreamCallbacks.Clear();
m_canCloseStreamCallbacks.Clear();
m_canReadStreamCallbacks.Clear();
m_canGetCanStatusCallbacks.Clear();
HALSIM_ResetCanData(Index);
}
[UnmanagedFunctionPointer(CallingConvention.Cdecl)]
internal delegate int HALSIM_RegisterCanCanSendMessageCallbackDelegate(int index, HAL_NotifyCallback callback, IntPtr param, bool initialNotify);
[NativeDelegate]
internal static HALSIM_RegisterCanCanSendMessageCallbackDelegate HALSIM_RegisterCanCanSendMessageCallback;
[UnmanagedFunctionPointer(CallingConvention.Cdecl)]
internal delegate void HALSIM_CancelCanCanSendMessageCallbackDelegate(int index, int uid);
[NativeDelegate]
internal static HALSIM_CancelCanCanSendMessageCallbackDelegate HALSIM_CancelCanCanSendMessageCallback;
[UnmanagedFunctionPointer(CallingConvention.Cdecl)]
internal delegate double HALSIM_GetCanCanSendMessageDelegate(int index);
[NativeDelegate]
internal static HALSIM_GetCanCanSendMessageDelegate HALSIM_GetCanCanSendMessage;
private readonly ConcurrentDictionary<int, HAL_NotifyCallback> m_canSendMessageCallbacks = new ConcurrentDictionary<int, HAL_NotifyCallback>();
public int RegisterCanCanSendMessageCallback(NotifyCallback callback, bool initialNotify)
{
HAL_NotifyCallback modCallback = (IntPtr namePtr, IntPtr param, ref HAL_Value value) =>
{
string varName = ReadUTF8String(namePtr);
callback?.Invoke(varName, ref value);
};
int uid = HALSIM_RegisterCanCanSendMessageCallback(Index, modCallback, IntPtr.Zero, initialNotify);
if (!m_canSendMessageCallbacks.TryAdd(uid, modCallback))
{
HALSIM_CancelCanCanSendMessageCallback(Index, uid);
throw new ArgumentException("Key cannot be added multiple times to the dictionary");
}
return uid;
}
public void CancelCanCanSendMessageCallback(int uid)
{
HALSIM_CancelCanCanSendMessageCallback(Index, uid);
HAL_NotifyCallback cb = null;
m_canSendMessageCallbacks.TryRemove(uid, out cb);
}
public double GetCanSendMessage() => HALSIM_GetCanCanSendMessage(Index);
[UnmanagedFunctionPointer(CallingConvention.Cdecl)]
internal delegate int HALSIM_RegisterCanCanReceiveMessageCallbackDelegate(int index, HAL_NotifyCallback callback, IntPtr param, bool initialNotify);
[NativeDelegate]
internal static HALSIM_RegisterCanCanReceiveMessageCallbackDelegate HALSIM_RegisterCanCanReceiveMessageCallback;
[UnmanagedFunctionPointer(CallingConvention.Cdecl)]
internal delegate void HALSIM_CancelCanCanReceiveMessageCallbackDelegate(int index, int uid);
[NativeDelegate]
internal static HALSIM_CancelCanCanReceiveMessageCallbackDelegate HALSIM_CancelCanCanReceiveMessageCallback;
[UnmanagedFunctionPointer(CallingConvention.Cdecl)]
internal delegate double HALSIM_GetCanCanReceiveMessageDelegate(int index);
[NativeDelegate]
internal static HALSIM_GetCanCanReceiveMessageDelegate HALSIM_GetCanCanReceiveMessage;
private readonly ConcurrentDictionary<int, HAL_NotifyCallback> m_canReceiveMessageCallbacks = new ConcurrentDictionary<int, HAL_NotifyCallback>();
public int RegisterCanCanReceiveMessageCallback(NotifyCallback callback, bool initialNotify)
{
HAL_NotifyCallback modCallback = (IntPtr namePtr, IntPtr param, ref HAL_Value value) =>
{
string varName = ReadUTF8String(namePtr);
callback?.Invoke(varName, ref value);
};
int uid = HALSIM_RegisterCanCanReceiveMessageCallback(Index, modCallback, IntPtr.Zero, initialNotify);
if (!m_canReceiveMessageCallbacks.TryAdd(uid, modCallback))
{
HALSIM_CancelCanCanReceiveMessageCallback(Index, uid);
throw new ArgumentException("Key cannot be added multiple times to the dictionary");
}
return uid;
}
public void CancelCanCanReceiveMessageCallback(int uid)
{
HALSIM_CancelCanCanReceiveMessageCallback(Index, uid);
HAL_NotifyCallback cb = null;
m_canReceiveMessageCallbacks.TryRemove(uid, out cb);
}
public double GetCanReceiveMessage() => HALSIM_GetCanCanReceiveMessage(Index);
[UnmanagedFunctionPointer(CallingConvention.Cdecl)]
internal delegate int HALSIM_RegisterCanCanOpenStreamCallbackDelegate(int index, HAL_NotifyCallback callback, IntPtr param, bool initialNotify);
[NativeDelegate]
internal static HALSIM_RegisterCanCanOpenStreamCallbackDelegate HALSIM_RegisterCanCanOpenStreamCallback;
[UnmanagedFunctionPointer(CallingConvention.Cdecl)]
internal delegate void HALSIM_CancelCanCanOpenStreamCallbackDelegate(int index, int uid);
[NativeDelegate]
internal static HALSIM_CancelCanCanOpenStreamCallbackDelegate HALSIM_CancelCanCanOpenStreamCallback;
[UnmanagedFunctionPointer(CallingConvention.Cdecl)]
internal delegate double HALSIM_GetCanCanOpenStreamDelegate(int index);
[NativeDelegate]
internal static HALSIM_GetCanCanOpenStreamDelegate HALSIM_GetCanCanOpenStream;
private readonly ConcurrentDictionary<int, HAL_NotifyCallback> m_canOpenStreamCallbacks = new ConcurrentDictionary<int, HAL_NotifyCallback>();
public int RegisterCanCanOpenStreamCallback(NotifyCallback callback, bool initialNotify)
{
HAL_NotifyCallback modCallback = (IntPtr namePtr, IntPtr param, ref HAL_Value value) =>
{
string varName = ReadUTF8String(namePtr);
callback?.Invoke(varName, ref value);
};
int uid = HALSIM_RegisterCanCanOpenStreamCallback(Index, modCallback, IntPtr.Zero, initialNotify);
if (!m_canOpenStreamCallbacks.TryAdd(uid, modCallback))
{
HALSIM_CancelCanCanOpenStreamCallback(Index, uid);
throw new ArgumentException("Key cannot be added multiple times to the dictionary");
}
return uid;
}
public void CancelCanCanOpenStreamCallback(int uid)
{
HALSIM_CancelCanCanOpenStreamCallback(Index, uid);
HAL_NotifyCallback cb = null;
m_canOpenStreamCallbacks.TryRemove(uid, out cb);
}
public double GetCanOpenStream() => HALSIM_GetCanCanOpenStream(Index);
[UnmanagedFunctionPointer(CallingConvention.Cdecl)]
internal delegate int HALSIM_RegisterCanCanCloseStreamCallbackDelegate(int index, HAL_NotifyCallback callback, IntPtr param, bool initialNotify);
[NativeDelegate]
internal static HALSIM_RegisterCanCanCloseStreamCallbackDelegate HALSIM_RegisterCanCanCloseStreamCallback;
[UnmanagedFunctionPointer(CallingConvention.Cdecl)]
internal delegate void HALSIM_CancelCanCanCloseStreamCallbackDelegate(int index, int uid);
[NativeDelegate]
internal static HALSIM_CancelCanCanCloseStreamCallbackDelegate HALSIM_CancelCanCanCloseStreamCallback;
[UnmanagedFunctionPointer(CallingConvention.Cdecl)]
internal delegate double HALSIM_GetCanCanCloseStreamDelegate(int index);
[NativeDelegate]
internal static HALSIM_GetCanCanCloseStreamDelegate HALSIM_GetCanCanCloseStream;
private readonly ConcurrentDictionary<int, HAL_NotifyCallback> m_canCloseStreamCallbacks = new ConcurrentDictionary<int, HAL_NotifyCallback>();
public int RegisterCanCanCloseStreamCallback(NotifyCallback callback, bool initialNotify)
{
HAL_NotifyCallback modCallback = (IntPtr namePtr, IntPtr param, ref HAL_Value value) =>
{
string varName = ReadUTF8String(namePtr);
callback?.Invoke(varName, ref value);
};
int uid = HALSIM_RegisterCanCanCloseStreamCallback(Index, modCallback, IntPtr.Zero, initialNotify);
if (!m_canCloseStreamCallbacks.TryAdd(uid, modCallback))
{
HALSIM_CancelCanCanCloseStreamCallback(Index, uid);
throw new ArgumentException("Key cannot be added multiple times to the dictionary");
}
return uid;
}
public void CancelCanCanCloseStreamCallback(int uid)
{
HALSIM_CancelCanCanCloseStreamCallback(Index, uid);
HAL_NotifyCallback cb = null;
m_canCloseStreamCallbacks.TryRemove(uid, out cb);
}
public double GetCanCloseStream() => HALSIM_GetCanCanCloseStream(Index);
[UnmanagedFunctionPointer(CallingConvention.Cdecl)]
internal delegate int HALSIM_RegisterCanCanReadStreamCallbackDelegate(int index, HAL_NotifyCallback callback, IntPtr param, bool initialNotify);
[NativeDelegate]
internal static HALSIM_RegisterCanCanReadStreamCallbackDelegate HALSIM_RegisterCanCanReadStreamCallback;
[UnmanagedFunctionPointer(CallingConvention.Cdecl)]
internal delegate void HALSIM_CancelCanCanReadStreamCallbackDelegate(int index, int uid);
[NativeDelegate]
internal static HALSIM_CancelCanCanReadStreamCallbackDelegate HALSIM_CancelCanCanReadStreamCallback;
[UnmanagedFunctionPointer(CallingConvention.Cdecl)]
internal delegate double HALSIM_GetCanCanReadStreamDelegate(int index);
[NativeDelegate]
internal static HALSIM_GetCanCanReadStreamDelegate HALSIM_GetCanCanReadStream;
private readonly ConcurrentDictionary<int, HAL_NotifyCallback> m_canReadStreamCallbacks = new ConcurrentDictionary<int, HAL_NotifyCallback>();
public int RegisterCanCanReadStreamCallback(NotifyCallback callback, bool initialNotify)
{
HAL_NotifyCallback modCallback = (IntPtr namePtr, IntPtr param, ref HAL_Value value) =>
{
string varName = ReadUTF8String(namePtr);
callback?.Invoke(varName, ref value);
};
int uid = HALSIM_RegisterCanCanReadStreamCallback(Index, modCallback, IntPtr.Zero, initialNotify);
if (!m_canReadStreamCallbacks.TryAdd(uid, modCallback))
{
HALSIM_CancelCanCanReadStreamCallback(Index, uid);
throw new ArgumentException("Key cannot be added multiple times to the dictionary");
}
return uid;
}
public void CancelCanCanReadStreamCallback(int uid)
{
HALSIM_CancelCanCanReadStreamCallback(Index, uid);
HAL_NotifyCallback cb = null;
m_canReadStreamCallbacks.TryRemove(uid, out cb);
}
public double GetCanReadStream() => HALSIM_GetCanCanReadStream(Index);
[UnmanagedFunctionPointer(CallingConvention.Cdecl)]
internal delegate int HALSIM_RegisterCanCanGetCanStatusCallbackDelegate(int index, HAL_NotifyCallback callback, IntPtr param, bool initialNotify);
[NativeDelegate]
internal static HALSIM_RegisterCanCanGetCanStatusCallbackDelegate HALSIM_RegisterCanCanGetCanStatusCallback;
[UnmanagedFunctionPointer(CallingConvention.Cdecl)]
internal delegate void HALSIM_CancelCanCanGetCanStatusCallbackDelegate(int index, int uid);
[NativeDelegate]
internal static HALSIM_CancelCanCanGetCanStatusCallbackDelegate HALSIM_CancelCanCanGetCanStatusCallback;
[UnmanagedFunctionPointer(CallingConvention.Cdecl)]
internal delegate double HALSIM_GetCanCanGetCanStatusDelegate(int index);
[NativeDelegate]
internal static HALSIM_GetCanCanGetCanStatusDelegate HALSIM_GetCanCanGetCanStatus;
private readonly ConcurrentDictionary<int, HAL_NotifyCallback> m_canGetCanStatusCallbacks = new ConcurrentDictionary<int, HAL_NotifyCallback>();
public int RegisterCanCanGetCanStatusCallback(NotifyCallback callback, bool initialNotify)
{
HAL_NotifyCallback modCallback = (IntPtr namePtr, IntPtr param, ref HAL_Value value) =>
{
string varName = ReadUTF8String(namePtr);
callback?.Invoke(varName, ref value);
};
int uid = HALSIM_RegisterCanCanGetCanStatusCallback(Index, modCallback, IntPtr.Zero, initialNotify);
if (!m_canGetCanStatusCallbacks.TryAdd(uid, modCallback))
{
HALSIM_CancelCanCanGetCanStatusCallback(Index, uid);
throw new ArgumentException("Key cannot be added multiple times to the dictionary");
}
return uid;
}
public void CancelCanCanGetCanStatusCallback(int uid)
{
HALSIM_CancelCanCanGetCanStatusCallback(Index, uid);
HAL_NotifyCallback cb = null;
m_canGetCanStatusCallbacks.TryRemove(uid, out cb);
}
public double GetCanGetCanStatus() => HALSIM_GetCanCanGetCanStatus(Index);
}
}
