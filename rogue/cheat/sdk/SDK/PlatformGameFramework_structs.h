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

// Enum PlatformGameFramework.EGameLocalizationType
enum class PlatformGameFramework_EGameLocalizationType : uint8_t
{
	EGameLocalizationType__Unknown = 0,
	EGameLocalizationType__PC      = 1,
	EGameLocalizationType__XboxOne = 2,
	EGameLocalizationType__PS4_SIEA = 3,
	EGameLocalizationType__PS4_SIEE = 4,
	EGameLocalizationType__Switch  = 5,
	EGameLocalizationType__Mobile  = 6,
	EGameLocalizationType__EGameLocalizationType_MAX = 7,

};

// Enum PlatformGameFramework.EGameBits
enum class PlatformGameFramework_EGameBits : uint8_t
{
	EGameBits__NoStoreUI           = 0,
	EGameBits__UseAltUI            = 1,
	EGameBits__UseAltQueueUI       = 2,
	EGameBits__UseSpectator        = 3,
	EGameBits__EGameBits_MAX       = 4,

};

// Enum PlatformGameFramework.EPGame_CustomMovement
enum class PlatformGameFramework_EPGame_CustomMovement : uint8_t
{
	PLATMOVE_Tween                 = 0,
	PLATMOVE_Charge                = 1,
	PLATMOVE_MAX                   = 2,

};

// Enum PlatformGameFramework.ECombatLogType
enum class PlatformGameFramework_ECombatLogType : uint8_t
{
	ECombatLogType__JSON           = 0,
	ECombatLogType__AWS            = 1,
	ECombatLogType__DEFAULT        = 2,
	ECombatLogType__ECombatLogType_MAX = 3,

};

// Enum PlatformGameFramework.EEffectGroupApplicationRule
enum class PlatformGameFramework_EEffectGroupApplicationRule : uint8_t
{
	EEffectGroupApplicationRule__STACKABLE = 0,
	EEffectGroupApplicationRule__NEWEST = 1,
	EEffectGroupApplicationRule__STRONGEST = 2,
	EEffectGroupApplicationRule__REFRESH = 3,
	EEffectGroupApplicationRule__STACK_IN_PLACE = 4,
	EEffectGroupApplicationRule__STACK_IN_PLACE_INSTIGATOR = 5,
	EEffectGroupApplicationRule__STRONGEST_BEFORE_NEWEST = 6,
	EEffectGroupApplicationRule__EEffectGroupApplicationRule_MAX = 7,

};

// Enum PlatformGameFramework.EFubarRewardRecipients
enum class PlatformGameFramework_EFubarRewardRecipients : uint8_t
{
	EFubarRewardRecipients__None   = 0,
	EFubarRewardRecipients__PostedPlayers = 1,
	EFubarRewardRecipients__PostLoginPlayers = 2,
	EFubarRewardRecipients__EFubarRewardRecipients_MAX = 3,

};

// Enum PlatformGameFramework.EFubarReason
enum class PlatformGameFramework_EFubarReason : uint8_t
{
	EFubarReason__NotFubar         = 0,
	EFubarReason__CPUSaturation    = 1,
	EFubarReason__GameModePlayersDisconnectedBothSides = 2,
	EFubarReason__GameModePlayersDisconnected = 3,
	EFubarReason__GameModeGeneral  = 4,
	EFubarReason__MultipleBadConnections = 5,
	EFubarReason__Test             = 6,
	EFubarReason__DefaultMapLoadFailure = 7,
	EFubarReason__FailedToListenForConnections = 8,
	EFubarReason__EFubarReason_MAX = 9,

};

// Enum PlatformGameFramework.EPGame_EPropertyType
enum class PlatformGameFramework_EPGame_EPropertyType : uint8_t
{
	PROPTYPE_Modifier              = 0,
	PROPTYPE_Percent               = 1,
	PROPTYPE_Value                 = 2,
	PROPTYPE_Delta                 = 3,
	PROPTYPE_MAX                   = 4,

};

// Enum PlatformGameFramework.ESonyMatchState
enum class PlatformGameFramework_ESonyMatchState : uint8_t
{
	ESonyMatchState__NotStarted    = 0,
	ESonyMatchState__MatchIdRequested = 1,
	ESonyMatchState__Playing       = 2,
	ESonyMatchState__SendPauseOrCancelMatch = 3,
	ESonyMatchState__SendCompleteMatch = 4,
	ESonyMatchState__Complete      = 5,
	ESonyMatchState__ESonyMatchState_MAX = 6,

};

// Enum PlatformGameFramework.PGAME_INPUT_STATE
enum class PlatformGameFramework_EPGAME_INPUT_STATE : uint8_t
{
	PIS_KEYMOUSE                   = 0,
	PIS_GAMEPAD                    = 1,
	PIS_TOUCH                      = 2,
	PIS_UNKNOWN                    = 3,
	PIS_MAX                        = 4,

};

// Enum PlatformGameFramework.EPositionHistoryRecordMode
enum class PlatformGameFramework_EPositionHistoryRecordMode : uint8_t
{
	EPositionHistoryRecordMode__OnTick = 0,
	EPositionHistoryRecordMode__Manual = 1,
	EPositionHistoryRecordMode__EPositionHistoryRecordMode_MAX = 2,

};

// Enum PlatformGameFramework.EPGame_ReplicateTimerState
enum class PlatformGameFramework_EPGame_ReplicateTimerState : uint8_t
{
	EPGame_ReplicateTimerState__Inactive = 0,
	EPGame_ReplicateTimerState__Active = 1,
	EPGame_ReplicateTimerState__Overtime = 2,
	EPGame_ReplicateTimerState__Unlimited = 3,
	EPGame_ReplicateTimerState__Paused = 4,
	EPGame_ReplicateTimerState__EPGame_MAX = 5,

};

//---------------------------------------------------------------------------
// Script Structs
//---------------------------------------------------------------------------

// ScriptStruct PlatformGameFramework.ChargeInfo
// 0x001C
struct FChargeInfo
{
	struct FVector                                     ChargeInitialLocation;                                     // 0x0000(0x000C) (Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              ChargeInitialYaw;                                          // 0x000C(0x0004) (Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              ChargeSpeed;                                               // 0x0010(0x0004) (Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              ChargeRange;                                               // 0x0014(0x0004) (Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      ChargeType;                                                // 0x0018(0x0001) (Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_1Z0H[0x3];                                     // 0x0019(0x0003) MISSED OFFSET (PADDING)

};

// ScriptStruct PlatformGameFramework.TweenInfo
// 0x0014
struct FTweenInfo
{
	unsigned char                                      TweenType;                                                 // 0x0000(0x0001) (Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_VL6F[0x3];                                     // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FVector                                     TweenDestination;                                          // 0x0004(0x000C) (Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              TweenTime;                                                 // 0x0010(0x0004) (Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct PlatformGameFramework.PGame_PersistentEffectRepData
// 0x004C (0x0058 - 0x000C)
struct FPGame_PersistentEffectRepData : public FFastArraySerializerItem
{
	unsigned char                                      UnknownData_6CSK[0x4];                                     // 0x000C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UPGame_EffectGroup*                          EffectGroupBlueprint;                                      // 0x0010(0x0008) (Edit, ZeroConstructor, DisableEditOnTemplate, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UClass*                                      AttachmentBlueprint;                                       // 0x0018(0x0008) (Edit, ZeroConstructor, DisableEditOnTemplate, EditConst, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint16_t                                           EffectGroupId;                                             // 0x0020(0x0002) (Edit, ZeroConstructor, DisableEditOnTemplate, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_GXA6[0x2];                                     // 0x0022(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	float                                              fTimeRemainingInitial;                                     // 0x0024(0x0004) (Edit, ZeroConstructor, DisableEditOnTemplate, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_S47P[0x4];                                     // 0x0028(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	unsigned char                                      nNumStacks;                                                // 0x002C(0x0001) (Edit, ZeroConstructor, DisableEditOnTemplate, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_QPFR[0x3];                                     // 0x002D(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class AActor*                                      SourceActor;                                               // 0x0030(0x0008) (Edit, ZeroConstructor, DisableEditOnTemplate, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint32_t                                           ReplicatedEffectFlags;                                     // 0x0038(0x0004) (Edit, ZeroConstructor, DisableEditOnTemplate, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint16_t                                           SkinId;                                                    // 0x003C(0x0002) (Edit, ZeroConstructor, DisableEditOnTemplate, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_8OR3[0x12];                                    // 0x003E(0x0012) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UPGame_EffectAttachment*                     pAttachment;                                               // 0x0050(0x0008) (Edit, ExportObject, ZeroConstructor, DisableEditOnTemplate, EditConst, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct PlatformGameFramework.PlatformPropertyId
// 0x0002
struct FPlatformPropertyId
{
	uint16_t                                           ID;                                                        // 0x0000(0x0002) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct PlatformGameFramework.PGame_Property
// 0x0018 (0x0024 - 0x000C)
struct FPGame_Property : public FFastArraySerializerItem
{
	struct FPlatformPropertyId                         PropertyId;                                                // 0x000C(0x0002) (Edit, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TEnumAsByte<PlatformGameFramework_EPGame_EPropertyType> Type;                                                      // 0x000E(0x0001) (Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_G1HV[0x1];                                     // 0x000F(0x0001) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	float                                              Base;                                                      // 0x0010(0x0004) (Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              RawFlat;                                                   // 0x0014(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              RawPercent;                                                // 0x0018(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              Minimum;                                                   // 0x001C(0x0004) (Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              Maximum;                                                   // 0x0020(0x0004) (Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct PlatformGameFramework.PGame_EffectManagerPropertyContainer
// 0x0068 (0x0170 - 0x0108)
struct FPGame_EffectManagerPropertyContainer : public FFastArraySerializer
{
	TArray<struct FPGame_Property>                     Properties;                                                // 0x0108(0x0010) (ZeroConstructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_LFRB[0x58];                                    // 0x0118(0x0058) MISSED OFFSET (PADDING)

};

// ScriptStruct PlatformGameFramework.PGame_PersistentEffectRepDataContainer
// 0x0018 (0x0120 - 0x0108)
struct FPGame_PersistentEffectRepDataContainer : public FFastArraySerializer
{
	TArray<struct FPGame_PersistentEffectRepData>      Items;                                                     // 0x0108(0x0010) (Edit, ZeroConstructor, DisableEditOnTemplate, EditConst, ContainsInstancedReference, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_X1VW[0x8];                                     // 0x0118(0x0008) MISSED OFFSET (PADDING)

};

// ScriptStruct PlatformGameFramework.PGame_SonyMatchData
// 0x0018
struct FPGame_SonyMatchData
{
	struct FString                                     MatchID;                                                   // 0x0000(0x0010) (ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_1VZ6[0x8];                                     // 0x0010(0x0008) MISSED OFFSET (PADDING)

};

// ScriptStruct PlatformGameFramework.PGame_InactivePlayerStateEntry
// 0x0010
struct FPGame_InactivePlayerStateEntry
{
	unsigned char                                      UnknownData_5MB5[0x8];                                     // 0x0000(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class APlayerState*                                PlayerState;                                               // 0x0008(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct PlatformGameFramework.PrimitivePriority
// 0x0020
struct FPrimitivePriority
{
	class UPrimitiveComponent*                         Primitive;                                                 // 0x0000(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                Priority;                                                  // 0x0008(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_DLS0[0x14];                                    // 0x000C(0x0014) MISSED OFFSET (PADDING)

};

// ScriptStruct PlatformGameFramework.PGame_ReplicatedTimerId
// 0x0001
struct FPGame_ReplicatedTimerId
{
	unsigned char                                      ID;                                                        // 0x0000(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)

};

// ScriptStruct PlatformGameFramework.PGame_BlueprintableLightingChannels
// 0x0003
struct FPGame_BlueprintableLightingChannels
{
	bool                                               bChannel0;                                                 // 0x0000(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bChannel1;                                                 // 0x0001(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bChannel2;                                                 // 0x0002(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct PlatformGameFramework.PGame_InstantEffectRepData
// 0x0040
struct FPGame_InstantEffectRepData
{
	class UPGame_EffectGroup*                          EffectGroupBlueprint;                                      // 0x0000(0x0008) (Edit, ZeroConstructor, DisableEditOnTemplate, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UClass*                                      AttachmentBlueprint;                                       // 0x0008(0x0008) (Edit, ZeroConstructor, DisableEditOnTemplate, EditConst, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint16_t                                           EffectGroupId;                                             // 0x0010(0x0002) (Edit, ZeroConstructor, DisableEditOnTemplate, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_KIN4[0x6];                                     // 0x0012(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class AActor*                                      SourceActor;                                               // 0x0018(0x0008) (Edit, ZeroConstructor, DisableEditOnTemplate, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                                     HitLocation;                                               // 0x0020(0x000C) (Edit, ZeroConstructor, DisableEditOnTemplate, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                                     HitNormal;                                                 // 0x002C(0x000C) (Edit, ZeroConstructor, DisableEditOnTemplate, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint32_t                                           ReplicatedEffectFlags;                                     // 0x0038(0x0004) (Edit, ZeroConstructor, DisableEditOnTemplate, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint16_t                                           SkinId;                                                    // 0x003C(0x0002) (Edit, ZeroConstructor, DisableEditOnTemplate, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_5JPA[0x2];                                     // 0x003E(0x0002) MISSED OFFSET (PADDING)

};

// ScriptStruct PlatformGameFramework.PGame_EffectManagerCurrentProperty
// 0x0008
struct FPGame_EffectManagerCurrentProperty
{
	struct FPlatformPropertyId                         propId;                                                    // 0x0000(0x0002) (Edit, EditConst, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_4C9Y[0x2];                                     // 0x0002(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	float                                              propValue;                                                 // 0x0004(0x0004) (Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct PlatformGameFramework.PGame_PlayerProfile
// 0x0020
struct FPGame_PlayerProfile
{
	struct FSerializedMctsNetId                        MctsPlayerId;                                              // 0x0000(0x0008) (NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     PlayerName;                                                // 0x0008(0x0010) (ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint16_t                                           AccessFlags;                                               // 0x0018(0x0002) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bSpectator;                                                // 0x001A(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bDebugPlayer;                                              // 0x001B(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_A6TS[0x4];                                     // 0x001C(0x0004) MISSED OFFSET (PADDING)

};

// ScriptStruct PlatformGameFramework.CollisionDebugInfo
// 0x0040
struct FCollisionDebugInfo
{
	unsigned char                                      UnknownData_COF7[0x40];                                    // 0x0000(0x0040) MISSED OFFSET (PADDING)

};

// ScriptStruct PlatformGameFramework.PGame_ReplicatedTimer
// 0x0038
struct FPGame_ReplicatedTimer
{
	unsigned char                                      UnknownData_WBDG[0x8];                                     // 0x0000(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	PlatformGameFramework_EPGame_ReplicateTimerState   TimerState;                                                // 0x0008(0x0001) (Edit, ZeroConstructor, DisableEditOnTemplate, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData_FEKD[0x3];                                     // 0x0009(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	float                                              InitialTime;                                               // 0x000C(0x0004) (Edit, ZeroConstructor, DisableEditOnTemplate, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	float                                              TimeRemaining;                                             // 0x0010(0x0004) (Edit, ZeroConstructor, DisableEditOnTemplate, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData_I4AW[0x24];                                    // 0x0014(0x0024) MISSED OFFSET (PADDING)

};

// ScriptStruct PlatformGameFramework.PGame_ReplicatedTimerManagerEntry
// 0x004C (0x0058 - 0x000C)
struct FPGame_ReplicatedTimerManagerEntry : public FFastArraySerializerItem
{
	struct FPGame_ReplicatedTimerId                    ID;                                                        // 0x000C(0x0001) (HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_D2ET[0x3];                                     // 0x000D(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FPGame_ReplicatedTimer                      Timer;                                                     // 0x0010(0x0038) (NoDestructor, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_KZB0[0x10];                                    // 0x0048(0x0010) MISSED OFFSET (PADDING)

};

// ScriptStruct PlatformGameFramework.PGame_ReplicatedTimerManagerBase
// 0x0018 (0x0120 - 0x0108)
struct FPGame_ReplicatedTimerManagerBase : public FFastArraySerializer
{
	TArray<struct FPGame_ReplicatedTimerManagerEntry>  Timers;                                                    // 0x0108(0x0010) (ZeroConstructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_R1II[0x8];                                     // 0x0118(0x0008) MISSED OFFSET (PADDING)

};

// ScriptStruct PlatformGameFramework.PGame_ReplicatedTimerManagerSlave
// 0x0050 (0x0170 - 0x0120)
struct FPGame_ReplicatedTimerManagerSlave : public FPGame_ReplicatedTimerManagerBase
{
	unsigned char                                      UnknownData_M3MU[0x50];                                    // 0x0120(0x0050) MISSED OFFSET (PADDING)

};

// ScriptStruct PlatformGameFramework.PGame_ReplicatedTimerManager
// 0x0008 (0x0128 - 0x0120)
struct FPGame_ReplicatedTimerManager : public FPGame_ReplicatedTimerManagerBase
{
	unsigned char                                      NextTimerId;                                               // 0x0120(0x0001) (ZeroConstructor, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData_BB8J[0x7];                                     // 0x0121(0x0007) MISSED OFFSET (PADDING)

};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
