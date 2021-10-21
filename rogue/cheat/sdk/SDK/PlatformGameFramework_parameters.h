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
// Parameters
//---------------------------------------------------------------------------

// Function PlatformGameFramework.PGame_BlueprintFunctionLibrary.ShowSkinnedMeshMaterialSection
struct UPGame_BlueprintFunctionLibrary_ShowSkinnedMeshMaterialSection_Params
{
	class USkinnedMeshComponent*                       SkinnedMeshComponent;                                      // 0x0000(0x0008)  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                MaterialID;                                                // 0x0008(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                SectionIndex;                                              // 0x000C(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bShow;                                                     // 0x0010(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                LODIndex;                                                  // 0x0014(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function PlatformGameFramework.PGame_BlueprintFunctionLibrary.SetLightingChannels
struct UPGame_BlueprintFunctionLibrary_SetLightingChannels_Params
{
	class UPrimitiveComponent*                         PrimitiveComponent;                                        // 0x0000(0x0008)  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FLightingChannels                           NewLightingChannels;                                       // 0x0008(0x0001)  (Parm, NoDestructor, NativeAccessSpecifierPublic)
};

// Function PlatformGameFramework.PGame_BlueprintFunctionLibrary.ServerTravelWithGameMode
struct UPGame_BlueprintFunctionLibrary_ServerTravelWithGameMode_Params
{
	class UObject*                                     WorldContextObject;                                        // 0x0000(0x0008)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<struct FString>                             Options;                                                   // 0x0058(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bSeamless;                                                 // 0x0068(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               ReturnValue;                                               // 0x0069(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function PlatformGameFramework.PGame_BlueprintFunctionLibrary.ServerTravel
struct UPGame_BlueprintFunctionLibrary_ServerTravel_Params
{
	class UObject*                                     WorldContextObject;                                        // 0x0000(0x0008)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<struct FString>                             Options;                                                   // 0x0058(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bSeamless;                                                 // 0x0068(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bPreserveCurrentOptions;                                   // 0x0069(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               ReturnValue;                                               // 0x006A(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function PlatformGameFramework.PGame_BlueprintFunctionLibrary.IsSteamClient
struct UPGame_BlueprintFunctionLibrary_IsSteamClient_Params
{
	bool                                               ReturnValue;                                               // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function PlatformGameFramework.PGame_BlueprintFunctionLibrary.IsPlatformType
struct UPGame_BlueprintFunctionLibrary_IsPlatformType_Params
{
	bool                                               IsConsole;                                                 // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               IsPC;                                                      // 0x0001(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               IsMobile;                                                  // 0x0002(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               ReturnValue;                                               // 0x0003(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function PlatformGameFramework.PGame_BlueprintFunctionLibrary.IsPlatform
struct UPGame_BlueprintFunctionLibrary_IsPlatform_Params
{
	bool                                               IsXboxOne;                                                 // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               IsPS4;                                                     // 0x0001(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               IsSwitch;                                                  // 0x0002(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               IsWindows;                                                 // 0x0003(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               IsMac;                                                     // 0x0004(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               IsLinux;                                                   // 0x0005(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               IsIOS;                                                     // 0x0006(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               IsAndroid;                                                 // 0x0007(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               IsXSX;                                                     // 0x0008(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               IsPS5;                                                     // 0x0009(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               ReturnValue;                                               // 0x000A(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function PlatformGameFramework.PGame_BlueprintFunctionLibrary.IsGameBit
struct UPGame_BlueprintFunctionLibrary_IsGameBit_Params
{
	PlatformGameFramework_EGameBits                    GameBit;                                                   // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               ReturnValue;                                               // 0x0001(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function PlatformGameFramework.PGame_BlueprintFunctionLibrary.IsAnonymousLogin
struct UPGame_BlueprintFunctionLibrary_IsAnonymousLogin_Params
{
	bool                                               ReturnValue;                                               // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function PlatformGameFramework.PGame_BlueprintFunctionLibrary.GetPropertyClampedValue
struct UPGame_BlueprintFunctionLibrary_GetPropertyClampedValue_Params
{
	struct FPGame_Property                             Prop;                                                      // 0x0000(0x0024)  (Parm, NoDestructor, NativeAccessSpecifierPublic)
	float                                              ReturnValue;                                               // 0x0024(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function PlatformGameFramework.PGame_BlueprintFunctionLibrary.GetGameLocalizationType
struct UPGame_BlueprintFunctionLibrary_GetGameLocalizationType_Params
{
	PlatformGameFramework_EGameLocalizationType        ReturnValue;                                               // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function PlatformGameFramework.PGame_BlueprintFunctionLibrary.FrameDelay
struct UPGame_BlueprintFunctionLibrary_FrameDelay_Params
{
	class UObject*                                     WorldContextObject;                                        // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                NumFramesToDelay;                                          // 0x0008(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FLatentActionInfo                           LatentInfo;                                                // 0x0010(0x0018)  (Parm, NoDestructor, NativeAccessSpecifierPublic)
};

// Function PlatformGameFramework.PGame_BlueprintFunctionLibrary.ConvertToEngineLightingChannels
struct UPGame_BlueprintFunctionLibrary_ConvertToEngineLightingChannels_Params
{
	struct FPGame_BlueprintableLightingChannels        BlueprintableLightingChannels;                             // 0x0000(0x0003)  (Parm, NoDestructor, NativeAccessSpecifierPublic)
	struct FLightingChannels                           ReturnValue;                                               // 0x0003(0x0001)  (Parm, OutParm, ReturnParm, NoDestructor, NativeAccessSpecifierPublic)
};

// Function PlatformGameFramework.PGame_BlueprintFunctionLibrary.ConvertToBlueprintableLightingChannels
struct UPGame_BlueprintFunctionLibrary_ConvertToBlueprintableLightingChannels_Params
{
	struct FLightingChannels                           EngineLightChannels;                                       // 0x0000(0x0001)  (Parm, NoDestructor, NativeAccessSpecifierPublic)
	struct FPGame_BlueprintableLightingChannels        ReturnValue;                                               // 0x0001(0x0003)  (Parm, OutParm, ReturnParm, NoDestructor, NativeAccessSpecifierPublic)
};

// Function PlatformGameFramework.PGame_BlueprintFunctionLibrary.AreMeshComponentTexturesFullyStreamedIn
struct UPGame_BlueprintFunctionLibrary_AreMeshComponentTexturesFullyStreamedIn_Params
{
	class UMeshComponent*                              InMeshComponent;                                           // 0x0000(0x0008)  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               ReturnValue;                                               // 0x0008(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function PlatformGameFramework.PGame_BlueprintFunctionLibrary.AreActorTexturesFullyStreamedIn
struct UPGame_BlueprintFunctionLibrary_AreActorTexturesFullyStreamedIn_Params
{
	class AActor*                                      InActor;                                                   // 0x0000(0x0008)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               ReturnValue;                                               // 0x0008(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function PlatformGameFramework.PGame_Character.OnRep_Tween
struct APGame_Character_OnRep_Tween_Params
{
};

// Function PlatformGameFramework.PGame_Character.OnRep_Charge
struct APGame_Character_OnRep_Charge_Params
{
};

// Function PlatformGameFramework.PGame_CharacterMovementComponent.StopTween
struct UPGame_CharacterMovementComponent_StopTween_Params
{
};

// Function PlatformGameFramework.PGame_CharacterMovementComponent.StopCharge
struct UPGame_CharacterMovementComponent_StopCharge_Params
{
};

// Function PlatformGameFramework.PGame_CharacterMovementComponent.StartTween
struct UPGame_CharacterMovementComponent_StartTween_Params
{
	unsigned char                                      TweenType;                                                 // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                                     TweenDestination;                                          // 0x0004(0x000C)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              TweenTime;                                                 // 0x0010(0x0004)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function PlatformGameFramework.PGame_CharacterMovementComponent.StartCharge
struct UPGame_CharacterMovementComponent_StartCharge_Params
{
	unsigned char                                      ChargeType;                                                // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              ChargeInitialYaw;                                          // 0x0004(0x0004)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                                     ChargeInitialLocation;                                     // 0x0008(0x000C)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              ChargeSpeed;                                               // 0x0014(0x0004)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              ChargeRange;                                               // 0x0018(0x0004)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function PlatformGameFramework.PGame_CharacterMovementComponent.OnRep_Tween
struct UPGame_CharacterMovementComponent_OnRep_Tween_Params
{
	struct FTweenInfo                                  TweenInfo;                                                 // 0x0000(0x0014)  (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
};

// Function PlatformGameFramework.PGame_CharacterMovementComponent.OnRep_Charge
struct UPGame_CharacterMovementComponent_OnRep_Charge_Params
{
	struct FChargeInfo                                 ChargeInfo;                                                // 0x0000(0x001C)  (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
};

// Function PlatformGameFramework.PGame_CheatComponent.TestFubarRewardPostLogin
struct UPGame_CheatComponent_TestFubarRewardPostLogin_Params
{
};

// Function PlatformGameFramework.PGame_CheatComponent.TestFubarRewardPosted
struct UPGame_CheatComponent_TestFubarRewardPosted_Params
{
};

// Function PlatformGameFramework.PGame_CheatComponent.TestFubar
struct UPGame_CheatComponent_TestFubar_Params
{
};

// Function PlatformGameFramework.PGame_CheatComponent.ServerTestFubarRewardPostLogin
struct UPGame_CheatComponent_ServerTestFubarRewardPostLogin_Params
{
};

// Function PlatformGameFramework.PGame_CheatComponent.ServerTestFubarRewardPosted
struct UPGame_CheatComponent_ServerTestFubarRewardPosted_Params
{
};

// Function PlatformGameFramework.PGame_CheatComponent.ServerTestFubar
struct UPGame_CheatComponent_ServerTestFubar_Params
{
};

// Function PlatformGameFramework.PGame_CheatComponent.ServerExecCall
struct UPGame_CheatComponent_ServerExecCall_Params
{
	struct FString                                     request;                                                   // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function PlatformGameFramework.PGame_CheatComponent.ServerExec
struct UPGame_CheatComponent_ServerExec_Params
{
	struct FString                                     request;                                                   // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function PlatformGameFramework.PGame_CheatComponent.Logout
struct UPGame_CheatComponent_Logout_Params
{
};

// Function PlatformGameFramework.PGame_CheatComponent.gmJoinQueue
struct UPGame_CheatComponent_gmJoinQueue_Params
{
	int                                                QueueId;                                                   // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function PlatformGameFramework.PGame_CheatComponent.gmCommand
struct UPGame_CheatComponent_gmCommand_Params
{
	struct FString                                     request;                                                   // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function PlatformGameFramework.PGame_CheatComponent.gmC
struct UPGame_CheatComponent_gmC_Params
{
	struct FString                                     request;                                                   // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function PlatformGameFramework.PGame_CheatComponent.ForceCrash
struct UPGame_CheatComponent_ForceCrash_Params
{
};

// Function PlatformGameFramework.PGame_CheatComponent.DumpAnimationStats
struct UPGame_CheatComponent_DumpAnimationStats_Params
{
};

// Function PlatformGameFramework.PGame_CheatComponent.CustomForceStart
struct UPGame_CheatComponent_CustomForceStart_Params
{
};

// Function PlatformGameFramework.PGame_CombatLogVisualizer.Visualize
struct APGame_CombatLogVisualizer_Visualize_Params
{
};

// Function PlatformGameFramework.PGame_CombatLogVisualizer.LoadCombatLog
struct APGame_CombatLogVisualizer_LoadCombatLog_Params
{
};

// Function PlatformGameFramework.PGame_CombatLogVisualizer.ClearVisualization
struct APGame_CombatLogVisualizer_ClearVisualization_Params
{
};

// Function PlatformGameFramework.PGame_EffectManagerComponent.OnRep_EffectData
struct UPGame_EffectManagerComponent_OnRep_EffectData_Params
{
};

// Function PlatformGameFramework.PGame_EffectManagerComponent.InstantEffectBroadcast
struct UPGame_EffectManagerComponent_InstantEffectBroadcast_Params
{
	struct FPGame_InstantEffectRepData                 repData;                                                   // 0x0000(0x0040)  (Parm, NoDestructor, NativeAccessSpecifierPublic)
};

// Function PlatformGameFramework.PGame_EffectManagerComponent.GetPropertyValueIntFromBlueprint
struct UPGame_EffectManagerComponent_GetPropertyValueIntFromBlueprint_Params
{
	int                                                PropertyId;                                                // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                ReturnValue;                                               // 0x0004(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function PlatformGameFramework.PGame_EffectManagerComponent.GetPropertyValueFromBlueprint
struct UPGame_EffectManagerComponent_GetPropertyValueFromBlueprint_Params
{
	int                                                PropertyId;                                                // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              ReturnValue;                                               // 0x0004(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function PlatformGameFramework.PGame_EffectManagerComponent.GetDefaultEffectGroupForPersistentRepData
struct UPGame_EffectManagerComponent_GetDefaultEffectGroupForPersistentRepData_Params
{
	struct FPGame_PersistentEffectRepData              repData;                                                   // 0x0000(0x0058)  (ConstParm, Parm, OutParm, ReferenceParm, ContainsInstancedReference, NativeAccessSpecifierPublic)
	class UPGame_EffectGroupPersistent*                ReturnValue;                                               // 0x0058(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function PlatformGameFramework.PGame_EffectManagerComponent.GetDefaultEffectGroupForInstantRepData
struct UPGame_EffectManagerComponent_GetDefaultEffectGroupForInstantRepData_Params
{
	struct FPGame_InstantEffectRepData                 repData;                                                   // 0x0000(0x0040)  (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	class UPGame_EffectGroupInstant*                   ReturnValue;                                               // 0x0040(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function PlatformGameFramework.PGame_EffectManagerComponent.CreatePersistentAttachment
struct UPGame_EffectManagerComponent_CreatePersistentAttachment_Params
{
	struct FPGame_PersistentEffectRepData              repData;                                                   // 0x0000(0x0058)  (ConstParm, Parm, OutParm, ReferenceParm, ContainsInstancedReference, NativeAccessSpecifierPublic)
	class UPGame_EffectAttachment*                     ReturnValue;                                               // 0x0058(0x0008)  (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function PlatformGameFramework.PGame_EffectManagerComponent.CreateInstantAttachment
struct UPGame_EffectManagerComponent_CreateInstantAttachment_Params
{
	struct FPGame_InstantEffectRepData                 repData;                                                   // 0x0000(0x0040)  (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
};

// Function PlatformGameFramework.PGame_Effectable.GetIntPropertyValue
struct UPGame_Effectable_GetIntPropertyValue_Params
{
	int                                                propIdInt;                                                 // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                ReturnValue;                                               // 0x0004(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function PlatformGameFramework.PGame_Effectable.GetFloatPropertyValue
struct UPGame_Effectable_GetFloatPropertyValue_Params
{
	int                                                propIdInt;                                                 // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              ReturnValue;                                               // 0x0004(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function PlatformGameFramework.PGame_GameInstance.ProvideSonyMatchFeedback
struct UPGame_GameInstance_ProvideSonyMatchFeedback_Params
{
	bool                                               bReviewTeamOnly;                                           // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function PlatformGameFramework.PGame_GameInstance.HasValidSonyMatch
struct UPGame_GameInstance_HasValidSonyMatch_Params
{
	bool                                               ReturnValue;                                               // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function PlatformGameFramework.PGame_GameInstance.EndLoadingScreen
struct UPGame_GameInstance_EndLoadingScreen_Params
{
	class UWorld*                                      World;                                                     // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function PlatformGameFramework.PGame_GameInstance.BeginLoadingScreen
struct UPGame_GameInstance_BeginLoadingScreen_Params
{
	struct FString                                     mapName;                                                   // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function PlatformGameFramework.PGame_GameMode.OnFubarShutdownTimeout
struct APGame_GameMode_OnFubarShutdownTimeout_Params
{
};

// Function PlatformGameFramework.PGame_GameMode.InactivePlayerStateDestroyed
struct APGame_GameMode_InactivePlayerStateDestroyed_Params
{
	class AActor*                                      InActor;                                                   // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function PlatformGameFramework.PGame_GameMode.FinalShutdown
struct APGame_GameMode_FinalShutdown_Params
{
};

// Function PlatformGameFramework.PGame_GameMode.FinalizeMatchEnded
struct APGame_GameMode_FinalizeMatchEnded_Params
{
};

// Function PlatformGameFramework.PGame_GameState.OnRep_SonyMatchIdForPlayerFeedback
struct APGame_GameState_OnRep_SonyMatchIdForPlayerFeedback_Params
{
};

// Function PlatformGameFramework.PGame_LandingPanelJSONHandler.RequestNewJson
struct UPGame_LandingPanelJSONHandler_RequestNewJson_Params
{
};

// Function PlatformGameFramework.PGame_PlayerController.ServerUpdateSonyMatchOwnerEligibility
struct APGame_PlayerController_ServerUpdateSonyMatchOwnerEligibility_Params
{
	bool                                               bIsEligible;                                               // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function PlatformGameFramework.PGame_PlayerController.ServerUpdateSonyMatchData
struct APGame_PlayerController_ServerUpdateSonyMatchData_Params
{
	struct FString                                     InMatchId;                                                 // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function PlatformGameFramework.PGame_PlayerController.ClientUpdateSonyMatchData
struct APGame_PlayerController_ClientUpdateSonyMatchData_Params
{
	struct FString                                     InMatchId;                                                 // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     InActivityId;                                              // 0x0010(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function PlatformGameFramework.PGame_PlayerController.ClientGameFubared
struct APGame_PlayerController_ClientGameFubared_Params
{
	PlatformGameFramework_EFubarReason                 Reason;                                                    // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function PlatformGameFramework.PGame_PlayerController.ClientCheckSonyMatchOwnerEligibility
struct APGame_PlayerController_ClientCheckSonyMatchOwnerEligibility_Params
{
};

// Function PlatformGameFramework.PGame_PositionHistoryComponent.RemoveTrackedPrimitive
struct UPGame_PositionHistoryComponent_RemoveTrackedPrimitive_Params
{
	class UPrimitiveComponent*                         InPrimitive;                                               // 0x0000(0x0008)  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function PlatformGameFramework.PGame_PositionHistoryComponent.AddTrackedPrimitive
struct UPGame_PositionHistoryComponent_AddTrackedPrimitive_Params
{
	class UPrimitiveComponent*                         InPrimitive;                                               // 0x0000(0x0008)  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                Priority;                                                  // 0x0008(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
