#pragma once

// Name: roguecompany, Version: 425


/*!!DEFINE!!*/

/*!!HELPER_DEF!!*/

/*!!HELPER_INC!!*/

#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

namespace CG
{
//---------------------------------------------------------------------------
// Enums
//---------------------------------------------------------------------------

// Enum PlatformCommon.EPCOM_SessionUpdateEvent
enum class PlatformCommon_EPCOM_SessionUpdateEvent : uint8_t
{
	EPCOM_SessionUpdateEvent__Unknown = 0,
	EPCOM_SessionUpdateEvent__JoinFailure = 1,
	EPCOM_SessionUpdateEvent__JoinFailure_NoOpenConnections = 2,
	EPCOM_SessionUpdateEvent__JoinFailure_SessionNotAvailable = 3,
	EPCOM_SessionUpdateEvent__JoinSuccess = 4,
	EPCOM_SessionUpdateEvent__EPCOM_MAX = 5,

};

// Enum PlatformCommon.EPCOM_PrivilegeStatus
enum class PlatformCommon_EPCOM_PrivilegeStatus : uint8_t
{
	EPCOM_PrivilegeStatus__Unchecked = 0,
	EPCOM_PrivilegeStatus__Pending = 1,
	EPCOM_PrivilegeStatus__Denied  = 2,
	EPCOM_PrivilegeStatus__Allowed = 3,
	EPCOM_PrivilegeStatus__EPCOM_MAX = 4,

};

//---------------------------------------------------------------------------
// Script Structs
//---------------------------------------------------------------------------

// ScriptStruct PlatformCommon.SerializedMctsNetId
// 0x0008
struct FSerializedMctsNetId
{
	uint64_t                                           A;                                                         // 0x0000(0x0008) (ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)

};

// ScriptStruct PlatformCommon.SerializedMatchId
// 0x0010
struct FSerializedMatchId
{
	unsigned char                                      UnknownData_EVRS[0x10];                                    // 0x0000(0x0010) MISSED OFFSET (PADDING)

};

// ScriptStruct PlatformCommon.SerializedInstanceId
// 0x0010
struct FSerializedInstanceId
{
	unsigned char                                      UnknownData_XWKC[0x10];                                    // 0x0000(0x0010) MISSED OFFSET (PADDING)

};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
