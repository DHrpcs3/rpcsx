#pragma once

#include "sceNp.h"

enum CellAvcError : u32
{
	CELL_AVC_ERROR_UNKNOWN = 0x8002b701,
	CELL_AVC_ERROR_NOT_SUPPORTED = 0x8002b702,
	CELL_AVC_ERROR_NOT_INITIALIZED = 0x8002b703,
	CELL_AVC_ERROR_ALREADY_INITIALIZED = 0x8002b704,
	CELL_AVC_ERROR_INVALID_ARGUMENT = 0x8002b705,
	CELL_AVC_ERROR_OUT_OF_MEMORY = 0x8002b706,
	CELL_AVC_ERROR_BAD_ID = 0x8002b707,
	CELL_AVC_ERROR_INVALID_STATUS = 0x8002b70a,
	CELL_AVC_ERROR_TIMEOUT = 0x8002b70b,
	CELL_AVC_ERROR_NO_SESSION = 0x8002b70d,
	CELL_AVC_ERROR_INCOMPATIBLE_PROTOCOL = 0x8002b70e,
	CELL_AVC_ERROR_PEER_UNREACHABLE = 0x8002b710,
};

enum CellSysutilAvcTransitionType : u32
{
	CELL_SYSUTIL_AVC_TRANSITION_LINEAR = 0x00000000,
	CELL_SYSUTIL_AVC_TRANSITION_SLOWDOWN = 0x00000001,
	CELL_SYSUTIL_AVC_TRANSITION_FASTUP = 0x00000002,
	CELL_SYSUTIL_AVC_TRANSITION_ANGULAR = 0x00000003,
	CELL_SYSUTIL_AVC_TRANSITION_EXPONENT = 0x00000004,
	CELL_SYSUTIL_AVC_TRANSITION_NONE = 0xffffffff
};

enum CellSysutilAvcWindowZorderMode : u32
{
	CELL_SYSUTIL_AVC_ZORDER_FORWARD_MOST = 0x00000002,
	CELL_SYSUTIL_AVC_ZORDER_BEHIND_MOST = 0x00000003,
};

enum : u32
{
	CELL_AVC_REQUEST_ID_SYSTEM_EVENT = 0x00000000,

	CELL_SYSUTIL_AVC_VIDEO_MEMORY_SIZE = 26 * 1024 * 1024,
	CELL_SYSUTIL_AVC_VOICE_MEMORY_SIZE = 8 * 1024 * 1024,
	CELL_SYSUTIL_AVC_EXTRA_MEMORY_SIZE_FOR_SHARING_VIDEO_BUFFER = 2 * 1024 * 1024,

	CELL_SYSUTIL_AVC_OPTION_PARAM_VERSION = 100,
};

enum CellSysutilAvcEvent : u32
{
	CELL_AVC_EVENT_LOAD_SUCCEEDED = 0x00000001,
	CELL_AVC_EVENT_LOAD_FAILED = 0x00000002,
	CELL_AVC_EVENT_UNLOAD_SUCCEEDED = 0x00000003,
	CELL_AVC_EVENT_UNLOAD_FAILED = 0x00000004,
	CELL_AVC_EVENT_JOIN_SUCCEEDED = 0x00000005,
	CELL_AVC_EVENT_JOIN_FAILED = 0x00000006,
	CELL_AVC_EVENT_BYE_SUCCEEDED = 0x00000007,
	CELL_AVC_EVENT_BYE_FAILED = 0x00000008,

	CELL_AVC_EVENT_SYSTEM_NEW_MEMBER_JOINED = 0x10000001,
	CELL_AVC_EVENT_SYSTEM_MEMBER_LEFT = 0x10000002,
	CELL_AVC_EVENT_SYSTEM_SESSION_ESTABLISHED = 0x10000003,
	CELL_AVC_EVENT_SYSTEM_SESSION_CANNOT_ESTABLISHED = 0x10000004,
	CELL_AVC_EVENT_SYSTEM_SESSION_DISCONNECTED = 0x10000005,
	CELL_AVC_EVENT_SYSTEM_VOICE_DETECTED = 0x10000006,
	CELL_AVC_EVENT_SYSTEM_MIC_DETECTED = 0x10000007,
	CELL_AVC_EVENT_SYSTEM_CAMERA_DETECTED = 0x10000008,
};

enum CellSysUtilAvcEventParam : u64
{
	CELL_AVC_EVENT_PARAM_ERROR_UNKNOWN = 0x00000001,
	CELL_AVC_EVENT_PARAM_ERROR_NOT_SUPPORTED = 0x00000002,
	CELL_AVC_EVENT_PARAM_ERROR_INVALID_ARGUMENT = 0x00000003,
	CELL_AVC_EVENT_PARAM_ERROR_OUT_OF_MEMORY = 0x00000004,
	CELL_AVC_EVENT_PARAM_ERROR_INVALID_STATUS = 0x00000005,
	CELL_AVC_EVENT_PARAM_ERROR_TIMEOUT = 0x00000006,
	CELL_AVC_EVENT_PARAM_ERROR_CONTEXT_DOES_NOT_EXIST = 0x00000007,
	CELL_AVC_EVENT_PARAM_ERROR_ROOM_DOES_NOT_EXIST = 0x00000008,
	CELL_AVC_EVENT_PARAM_ERROR_MEDIA_MISMATCHED = 0x00000009,
	CELL_AVC_EVENT_PARAM_ERROR_MEMBER_EXCEEDED = 0x0000000A,
	CELL_AVC_EVENT_PARAM_ERROR_MASTER_LEFT = 0x0000000B,
	CELL_AVC_EVENT_PARAM_ERROR_NETWORK_ERROR = 0x0000000C,
	CELL_AVC_EVENT_PARAM_ERROR_INCOMPATIBLE_PROTOCOL = 0x0000000D,
};

enum CellSysUtilAvcAttribute : u32
{
	CELL_SYSUTIL_AVC_ATTRIBUTE_DEFAULT_TRANSITION_TYPE = 0x00000001,
	CELL_SYSUTIL_AVC_ATTRIBUTE_DEFAULT_TRANSITION_DURATION = 0x00000002,
	CELL_SYSUTIL_AVC_ATTRIBUTE_DEFAULT_INITIAL_SHOW_STATUS = 0x00000003,
	CELL_SYSUTIL_AVC_ATTRIBUTE_VOICE_DETECT_EVENT_TYPE = 0x00000004,
	CELL_SYSUTIL_AVC_ATTRIBUTE_VOICE_DETECT_INTERVAL_TIME = 0x00000005,
	CELL_SYSUTIL_AVC_ATTRIBUTE_VOICE_DETECT_SIGNAL_LEVEL = 0x00000006,
	CELL_SYSUTIL_AVC_ATTRIBUTE_ROOM_PRIVILEGE_TYPE = 0x00000007,
	CELL_SYSUTIL_AVC_ATTRIBUTE_VIDEO_MAX_BITRATE = 0x00000008,
};

enum CellSysutilAvcLayoutMode : u32
{
	CELL_SYSUTIL_AVC_LAYOUT_LEFT = 0x00000000,
	CELL_SYSUTIL_AVC_LAYOUT_RIGHT = 0x00000001,
	CELL_SYSUTIL_AVC_LAYOUT_TOP = 0x00000002,
	CELL_SYSUTIL_AVC_LAYOUT_BOTTOM = 0x00000003,
};

enum CellSysUtilAvcMediaType : u32
{
	CELL_SYSUTIL_AVC_VOICE_CHAT = 0x00000001,
	CELL_SYSUTIL_AVC_VIDEO_CHAT = 0x00000002,
};

enum CellSysutilAvcRoomPrivilegeType : u32
{
	CELL_SYSUTIL_AVC_ROOM_PRIVILEGE_TYPE_NO_AUTO_GRANT = 0x00000000,
	CELL_SYSUTIL_AVC_ROOM_PRIVILEGE_TYPE_AUTO_GRANT = 0x00000001
};

enum CellSysUtilAvcVideoQuality : u32
{
	CELL_SYSUTIL_AVC_VIDEO_QUALITY_DEFAULT = 0x00000001
};

enum CellSysutilAvcVoiceDetectEventType : u32
{
	CELL_SYSUTIL_AVC_VOICE_DETECT_EVENT_TYPE_SIGNAL = 0x00000001,
	CELL_SYSUTIL_AVC_VOICE_DETECT_EVENT_TYPE_SPEAK = 0x00000002
};

enum CellSysutilAvcVoiceDetectSpeakData : u32
{
	CELL_SYSUTIL_AVC_VOICE_DETECT_DATA_SPEAK_STOP = 0x00000000,
	CELL_SYSUTIL_AVC_VOICE_DETECT_DATA_SPEAK_START = 0x00000001
};

enum CellSysUtilAvcVoiceQuality : u32
{
	CELL_SYSUTIL_AVC_VOICE_QUALITY_DEFAULT = 0x00000001
};

struct CellSysutilAvcOptionParam
{
	be_t<s32> avcOptionParamVersion;
	b8 sharingVideoBuffer;
	be_t<s32> maxPlayers; // Not in FW 1.70
};

struct CellSysutilAvcVoiceDetectData
{
	SceNpId npid;
	be_t<s32> data;
};

typedef u32 CellSysutilAvcRequestId;

using CellSysutilAvcCallback = void(CellSysutilAvcRequestId request_id, CellSysutilAvcEvent event_id, CellSysUtilAvcEventParam event_param, vm::ptr<void> userdata);
