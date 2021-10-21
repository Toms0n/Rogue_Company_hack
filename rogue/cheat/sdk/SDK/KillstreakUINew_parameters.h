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

// Function KillstreakUINew.GuidedMenuCalloutsViewRedirector.SetNPEGuidedCalloutSeen
struct UGuidedMenuCalloutsViewRedirector_SetNPEGuidedCalloutSeen_Params
{
	KillstreakUINew_EConfigPropertyGuidedCalloutScenes GuidedCalloutScene;                                        // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function KillstreakUINew.GuidedMenuCalloutsViewRedirector.HasSeenNPEGuidedCallout
struct UGuidedMenuCalloutsViewRedirector_HasSeenNPEGuidedCallout_Params
{
	KillstreakUINew_EConfigPropertyGuidedCalloutScenes GuidedCalloutScene;                                        // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               ReturnValue;                                               // 0x0001(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function KillstreakUINew.KSWidget.UpdateOpacityWhenAiming
struct UKSWidget_UpdateOpacityWhenAiming_Params
{
};

// Function KillstreakUINew.KSWidget.UnbindFromViewportSizeChange
struct UKSWidget_UnbindFromViewportSizeChange_Params
{
};

// Function KillstreakUINew.KSWidget.TriggerGlobalInvalidate
struct UKSWidget_TriggerGlobalInvalidate_Params
{
};

// Function KillstreakUINew.KSWidget.StopTickAnimation
struct UKSWidget_StopTickAnimation_Params
{
	struct FName                                       AnimName;                                                  // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function KillstreakUINew.KSWidget.SkipToEndTickAnimation
struct UKSWidget_SkipToEndTickAnimation_Params
{
	struct FName                                       AnimName;                                                  // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function KillstreakUINew.KSWidget.ShouldUpdateOpacityWhenAiming
struct UKSWidget_ShouldUpdateOpacityWhenAiming_Params
{
	bool                                               ReturnValue;                                               // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function KillstreakUINew.KSWidget.SetPositionRTPC
struct UKSWidget_SetPositionRTPC_Params
{
};

// Function KillstreakUINew.KSWidget.SetAllAnimationsPlaybackSpeed
struct UKSWidget_SetAllAnimationsPlaybackSpeed_Params
{
	float                                              PlaybackSpeed;                                             // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function KillstreakUINew.KSWidget.ResumeTickAnimation
struct UKSWidget_ResumeTickAnimation_Params
{
	struct FName                                       AnimName;                                                  // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function KillstreakUINew.KSWidget.RemoveTickAnimation
struct UKSWidget_RemoveTickAnimation_Params
{
	struct FName                                       AnimName;                                                  // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function KillstreakUINew.KSWidget.PlayTickAnimation
struct UKSWidget_PlayTickAnimation_Params
{
	struct FName                                       AnimName;                                                  // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function KillstreakUINew.KSWidget.PauseTickAnimation
struct UKSWidget_PauseTickAnimation_Params
{
	struct FName                                       AnimName;                                                  // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function KillstreakUINew.KSWidget.IsInKillCamPlayback
struct UKSWidget_IsInKillCamPlayback_Params
{
	bool                                               ReturnValue;                                               // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function KillstreakUINew.KSWidget.InitializeTickAnimations
struct UKSWidget_InitializeTickAnimations_Params
{
};

// Function KillstreakUINew.KSWidget.HandleAimStateChange
struct UKSWidget_HandleAimStateChange_Params
{
	Killstreak_EKSCharacterAimMode                     NewAimState;                                               // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function KillstreakUINew.KSWidget.GetTickAnimationInfo
struct UKSWidget_GetTickAnimationInfo_Params
{
	struct FName                                       AnimName;                                                  // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FTickAnimationParams                        OutAnimParams;                                             // 0x0008(0x002C)  (Parm, OutParm, ContainsInstancedReference, NativeAccessSpecifierPublic)
	bool                                               ReturnValue;                                               // 0x0034(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function KillstreakUINew.KSWidget.GetNormalOwningPlayer
struct UKSWidget_GetNormalOwningPlayer_Params
{
	class APlayerController*                           ReturnValue;                                               // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function KillstreakUINew.KSWidget.GetKillCamSpectatorController
struct UKSWidget_GetKillCamSpectatorController_Params
{
	class APlayerController*                           ReturnValue;                                               // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function KillstreakUINew.KSWidget.GetActivePlayerController
struct UKSWidget_GetActivePlayerController_Params
{
	class APlayerController*                           ReturnValue;                                               // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function KillstreakUINew.KSWidget.BlueprintPrepareKillCamPlayback
struct UKSWidget_BlueprintPrepareKillCamPlayback_Params
{
};

// Function KillstreakUINew.KSWidget.BlueprintFinishKillCamPlayback
struct UKSWidget_BlueprintFinishKillCamPlayback_Params
{
};

// Function KillstreakUINew.KSWidget.BindToViewportSizeChange
struct UKSWidget_BindToViewportSizeChange_Params
{
	struct FScriptDelegate                             InViewportEvent;                                           // 0x0000(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
};

// Function KillstreakUINew.KSWidget.AddTickAnimation
struct UKSWidget_AddTickAnimation_Params
{
	struct FName                                       AnimName;                                                  // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              Duration;                                                  // 0x0008(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FScriptDelegate                             UpdateEvent;                                               // 0x000C(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	struct FScriptDelegate                             FinishedEvent;                                             // 0x001C(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
};

// Function KillstreakUINew.KSAccoladeQueueWidget.Queue
struct UKSAccoladeQueueWidget_Queue_Params
{
	TArray<struct FAccoladeEventEntry>                 Accolades;                                                 // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function KillstreakUINew.KSAccoladeQueueWidget.OnAccoladeRemovedFromScreen
struct UKSAccoladeQueueWidget_OnAccoladeRemovedFromScreen_Params
{
	struct FAccoladeDisplayInfo                        AccoladeRemoved;                                           // 0x0000(0x0068)  (Parm, NativeAccessSpecifierPublic)
};

// Function KillstreakUINew.KSAccoladeQueueWidget.HandleOnRoundSetup
struct UKSAccoladeQueueWidget_HandleOnRoundSetup_Params
{
	struct FRoundInitState                             RoundInitState;                                            // 0x0000(0x0010)  (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
};

// Function KillstreakUINew.KSAccoladeQueueWidget.GetNext
struct UKSAccoladeQueueWidget_GetNext_Params
{
	struct FAccoladeDisplayInfo                        Accolade;                                                  // 0x0000(0x0068)  (Parm, OutParm, NativeAccessSpecifierPublic)
	bool                                               ReturnValue;                                               // 0x0068(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function KillstreakUINew.KSAccoladeQueueWidget.ClearAccoladeQueue
struct UKSAccoladeQueueWidget_ClearAccoladeQueue_Params
{
};

// Function KillstreakUINew.KSAcquisitionModal.GetHeaderText
struct UKSAcquisitionModal_GetHeaderText_Params
{
	class UKSAcquisition*                              Acquisitition;                                             // 0x0000(0x0008)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FText                                       ReturnValue;                                               // 0x0008(0x0018)  (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
};

// Function KillstreakUINew.KSAcquisitionModal.GetAcquisitionManager
struct UKSAcquisitionModal_GetAcquisitionManager_Params
{
	class UKSAcquisitionManager*                       ReturnValue;                                               // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function KillstreakUINew.KSActiveBonusesWidget.GetBonusAppliedToLastMatch
struct UKSActiveBonusesWidget_GetBonusAppliedToLastMatch_Params
{
	TArray<struct FKSLimitedTimeEventMetadataRow>      ActiveEvents;                                              // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function KillstreakUINew.KSPawnWidget.SetPlayerStateUIRelevanceChanged
struct UKSPawnWidget_SetPlayerStateUIRelevanceChanged_Params
{
};

// Function KillstreakUINew.KSPawnWidget.SetPawn
struct UKSPawnWidget_SetPawn_Params
{
	class AKSCharacter*                                NewPawn;                                                   // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function KillstreakUINew.KSPawnWidget.PreClearPlayerState
struct UKSPawnWidget_PreClearPlayerState_Params
{
};

// Function KillstreakUINew.KSPawnWidget.PreClearPawn
struct UKSPawnWidget_PreClearPawn_Params
{
};

// Function KillstreakUINew.KSPawnWidget.PostSetPlayerState
struct UKSPawnWidget_PostSetPlayerState_Params
{
};

// Function KillstreakUINew.KSPawnWidget.PostSetPawn
struct UKSPawnWidget_PostSetPawn_Params
{
};

// Function KillstreakUINew.KSPawnWidget.OnBoundPlayerStateDestroyed
struct UKSPawnWidget_OnBoundPlayerStateDestroyed_Params
{
	class AActor*                                      DestroyedActor;                                            // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function KillstreakUINew.KSPawnWidget.OnBoundPawnDestroyed
struct UKSPawnWidget_OnBoundPawnDestroyed_Params
{
	class AActor*                                      DestroyedActor;                                            // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function KillstreakUINew.KSPawnWidget.GetPlayerState
struct UKSPawnWidget_GetPlayerState_Params
{
	class AKSPlayerState*                              ReturnValue;                                               // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function KillstreakUINew.KSPawnWidget.GetPawnBase
struct UKSPawnWidget_GetPawnBase_Params
{
	class AKSCharacterBase*                            ReturnValue;                                               // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function KillstreakUINew.KSPawnWidget.GetPawn
struct UKSPawnWidget_GetPawn_Params
{
	class AKSCharacter*                                ReturnValue;                                               // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function KillstreakUINew.KSPawnInventoryWidget.RemoveWidgetFor
struct UKSPawnInventoryWidget_RemoveWidgetFor_Params
{
	class UKSWeaponComponent*                          InWeaponComponent;                                         // 0x0000(0x0008)  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               ReturnValue;                                               // 0x0008(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function KillstreakUINew.KSPawnInventoryWidget.GetWidgetForWeaponComponent
struct UKSPawnInventoryWidget_GetWidgetForWeaponComponent_Params
{
	class UKSWeaponComponent*                          InWeaponComponent;                                         // 0x0000(0x0008)  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UKSWeaponComponentWidget*                    ReturnValue;                                               // 0x0008(0x0008)  (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function KillstreakUINew.KSPawnInventoryWidget.EquipmentRemoved
struct UKSPawnInventoryWidget_EquipmentRemoved_Params
{
	class UKSWeaponComponent*                          RemovedEquipment;                                          // 0x0000(0x0008)  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function KillstreakUINew.KSPawnInventoryWidget.EquipmentEndActive
struct UKSPawnInventoryWidget_EquipmentEndActive_Params
{
	class UKSWeaponComponent*                          InactiveEquipment;                                         // 0x0000(0x0008)  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function KillstreakUINew.KSPawnInventoryWidget.EquipmentBecomeActive
struct UKSPawnInventoryWidget_EquipmentBecomeActive_Params
{
	class UKSWeaponComponent*                          ActiveEquipment;                                           // 0x0000(0x0008)  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function KillstreakUINew.KSPawnInventoryWidget.EquipmentAdded
struct UKSPawnInventoryWidget_EquipmentAdded_Params
{
	class UKSWeaponComponent*                          AddedEquipment;                                            // 0x0000(0x0008)  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function KillstreakUINew.KSPawnInventoryWidget.CreateWeaponComponentWidgetFor
struct UKSPawnInventoryWidget_CreateWeaponComponentWidgetFor_Params
{
	class UObject*                                     WorldContextObject;                                        // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UKSWeaponComponent*                          InWeaponComponent;                                         // 0x0008(0x0008)  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UClass*                                      WidgetClass;                                               // 0x0010(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class APlayerController*                           OwningPlayer;                                              // 0x0018(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UKSWeaponComponentWidget*                    ReturnValue;                                               // 0x0020(0x0008)  (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function KillstreakUINew.KSActiveWeaponComponentWidget.PreClearActiveWeaponComponent
struct UKSActiveWeaponComponentWidget_PreClearActiveWeaponComponent_Params
{
};

// Function KillstreakUINew.KSActiveWeaponComponentWidget.PostSetActiveWeaponComponent
struct UKSActiveWeaponComponentWidget_PostSetActiveWeaponComponent_Params
{
};

// Function KillstreakUINew.KSActiveWeaponComponentWidget.GetActiveWeaponComponent
struct UKSActiveWeaponComponentWidget_GetActiveWeaponComponent_Params
{
	class UKSWeaponComponent*                          ReturnValue;                                               // 0x0000(0x0008)  (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function KillstreakUINew.KSActivity_ViewRedirector.GetRelevantActivityManager
struct UKSActivity_ViewRedirector_GetRelevantActivityManager_Params
{
	class UKSGameInstance*                             GameInstance;                                              // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UKSActivityManagerBase*                      ReturnValue;                                               // 0x0008(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function KillstreakUINew.KSAimAssistDebugWidget.GetOwningKSPlayer
struct UKSAimAssistDebugWidget_GetOwningKSPlayer_Params
{
	class AKSPlayerController*                         ReturnValue;                                               // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function KillstreakUINew.KSAimAssistDebugWidget.GetAimAssistComponent
struct UKSAimAssistDebugWidget_GetAimAssistComponent_Params
{
	class UKSAimAssistComponent*                       ReturnValue;                                               // 0x0000(0x0008)  (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function KillstreakUINew.KSMapIconWidgetBase.UpdateScreenRegion
struct UKSMapIconWidgetBase_UpdateScreenRegion_Params
{
};

// Function KillstreakUINew.KSMapIconWidgetBase.UpdateOpacityWhenAiming
struct UKSMapIconWidgetBase_UpdateOpacityWhenAiming_Params
{
};

// Function KillstreakUINew.KSMapIconWidgetBase.UpdateMetersAway
struct UKSMapIconWidgetBase_UpdateMetersAway_Params
{
	int                                                Meters;                                                    // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function KillstreakUINew.KSMapIconWidgetBase.UpdateMeetsHeightThreshold
struct UKSMapIconWidgetBase_UpdateMeetsHeightThreshold_Params
{
	bool                                               bHeight;                                                   // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bDepth;                                                    // 0x0001(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function KillstreakUINew.KSMapIconWidgetBase.Update
struct UKSMapIconWidgetBase_Update_Params
{
	UMG_ESlateVisibility                               ReturnValue;                                               // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function KillstreakUINew.KSMapIconWidgetBase.ShouldUpdateOpacityWhenAiming
struct UKSMapIconWidgetBase_ShouldUpdateOpacityWhenAiming_Params
{
	bool                                               ReturnValue;                                               // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function KillstreakUINew.KSMapIconWidgetBase.ShouldUpdateHover
struct UKSMapIconWidgetBase_ShouldUpdateHover_Params
{
	bool                                               ReturnValue;                                               // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function KillstreakUINew.KSMapIconWidgetBase.ShouldUpdate
struct UKSMapIconWidgetBase_ShouldUpdate_Params
{
	bool                                               ReturnValue;                                               // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function KillstreakUINew.KSMapIconWidgetBase.SetScreenRegion
struct UKSMapIconWidgetBase_SetScreenRegion_Params
{
	KillstreakUINew_EIconMarkerScreenRegion            ScreenRegion;                                              // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function KillstreakUINew.KSMapIconWidgetBase.SetLifeSpan
struct UKSMapIconWidgetBase_SetLifeSpan_Params
{
	float                                              InLifespan;                                                // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function KillstreakUINew.KSMapIconWidgetBase.SetDisplayInfo
struct UKSMapIconWidgetBase_SetDisplayInfo_Params
{
	int                                                InUniqueId;                                                // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class AKSPlayerState*                              InCreatingPlayer;                                          // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	Killstreak_EDisplayType                            InParentMapDisplayType;                                    // 0x0010(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class AActor*                                      InAssociatedActor;                                         // 0x0018(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UObject*                                     InAssociatedObject;                                        // 0x0020(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                                     InDefaultLocation;                                         // 0x0028(0x000C)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              InLifespan;                                                // 0x0034(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function KillstreakUINew.KSMapIconWidgetBase.SetArrowAngle
struct UKSMapIconWidgetBase_SetArrowAngle_Params
{
	float                                              Angle;                                                     // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function KillstreakUINew.KSMapIconWidgetBase.ResetDisplayInfo
struct UKSMapIconWidgetBase_ResetDisplayInfo_Params
{
};

// Function KillstreakUINew.KSMapIconWidgetBase.OnUnhoverTimerComplete
struct UKSMapIconWidgetBase_OnUnhoverTimerComplete_Params
{
};

// Function KillstreakUINew.KSMapIconWidgetBase.OnHoverTimerComplete
struct UKSMapIconWidgetBase_OnHoverTimerComplete_Params
{
};

// Function KillstreakUINew.KSMapIconWidgetBase.OnHoverStateChanged
struct UKSMapIconWidgetBase_OnHoverStateChanged_Params
{
	KillstreakUINew_EIconHoverState                    NewHoverState;                                             // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function KillstreakUINew.KSMapIconWidgetBase.OnAssociatedActorDestroyed
struct UKSMapIconWidgetBase_OnAssociatedActorDestroyed_Params
{
	class AActor*                                      Actor;                                                     // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function KillstreakUINew.KSMapIconWidgetBase.OnAimStateChanged
struct UKSMapIconWidgetBase_OnAimStateChanged_Params
{
	Killstreak_EKSCharacterAimMode                     NewAimState;                                               // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              NewAimTransitionOffset;                                    // 0x0004(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function KillstreakUINew.KSMapIconWidgetBase.IsScreenRegion
struct UKSMapIconWidgetBase_IsScreenRegion_Params
{
	bool                                               InsideCenter;                                              // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               InsideMargins;                                             // 0x0001(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function KillstreakUINew.KSMapIconWidgetBase.IsInCenteredScreenRect
struct UKSMapIconWidgetBase_IsInCenteredScreenRect_Params
{
	float                                              PositionX;                                                 // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              PositionY;                                                 // 0x0004(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              XMargin;                                                   // 0x0008(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              YMargin;                                                   // 0x000C(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               ReturnValue;                                               // 0x0010(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function KillstreakUINew.KSMapIconWidgetBase.IsHovering
struct UKSMapIconWidgetBase_IsHovering_Params
{
	bool                                               ReturnValue;                                               // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function KillstreakUINew.KSMapIconWidgetBase.HandleMapIconWidgetHide
struct UKSMapIconWidgetBase_HandleMapIconWidgetHide_Params
{
};

// Function KillstreakUINew.KSMapIconWidgetBase.GetWorldYaw
struct UKSMapIconWidgetBase_GetWorldYaw_Params
{
	float                                              ReturnValue;                                               // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function KillstreakUINew.KSMapIconWidgetBase.GetWorldPosition
struct UKSMapIconWidgetBase_GetWorldPosition_Params
{
	struct FVector                                     ReturnValue;                                               // 0x0000(0x000C)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function KillstreakUINew.KSMapIconWidgetBase.GetHoverState
struct UKSMapIconWidgetBase_GetHoverState_Params
{
	KillstreakUINew_EIconHoverState                    ReturnValue;                                               // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function KillstreakUINew.KSMapIconWidgetBase.GetEdgeArrowAngleBase
struct UKSMapIconWidgetBase_GetEdgeArrowAngleBase_Params
{
	float                                              Angle;                                                     // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              ReturnValue;                                               // 0x0004(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function KillstreakUINew.KSMapIconWidgetBase.GetDistanceToIcon
struct UKSMapIconWidgetBase_GetDistanceToIcon_Params
{
	float                                              ReturnValue;                                               // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function KillstreakUINew.KSMapIconWidgetBase.GetArrowPosition
struct UKSMapIconWidgetBase_GetArrowPosition_Params
{
	bool                                               IsIconVisible;                                             // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              Angle;                                                     // 0x0004(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector2D                                   ArrowPosition;                                             // 0x0008(0x0008)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function KillstreakUINew.KSAllyMarkerWidget.View_SetSelfPingIcon
struct UKSAllyMarkerWidget_View_SetSelfPingIcon_Params
{
	Killstreak_EPingType                               PingType;                                                  // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	Killstreak_EPingMessage                            PingMessage;                                               // 0x0001(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function KillstreakUINew.KSAllyMarkerWidget.View_SetRevivePercent
struct UKSAllyMarkerWidget_View_SetRevivePercent_Params
{
	float                                              PercentValue;                                              // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function KillstreakUINew.KSAllyMarkerWidget.View_SetNameText
struct UKSAllyMarkerWidget_View_SetNameText_Params
{
	struct FText                                       NameText;                                                  // 0x0000(0x0018)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
};

// Function KillstreakUINew.KSAllyMarkerWidget.View_SetMode
struct UKSAllyMarkerWidget_View_SetMode_Params
{
	KillstreakUINew_EAllyMarkerState                   AllyMarkerState;                                           // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               HasObjective;                                              // 0x0001(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               HasSelfPing;                                               // 0x0002(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function KillstreakUINew.KSAllyMarkerWidget.View_SetJob
struct UKSAllyMarkerWidget_View_SetJob_Params
{
	class UKSJobItem*                                  Job;                                                       // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function KillstreakUINew.KSAllyMarkerWidget.View_SetHealthPercent
struct UKSAllyMarkerWidget_View_SetHealthPercent_Params
{
	float                                              PercentValue;                                              // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function KillstreakUINew.KSAllyMarkerWidget.View_AcknowledgeSelfPing
struct UKSAllyMarkerWidget_View_AcknowledgeSelfPing_Params
{
	class AKSPlayerState*                              AcknowledingPlayer;                                        // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function KillstreakUINew.KSAllyMarkerWidget.ShouldShowAllyMarkerWidget
struct UKSAllyMarkerWidget_ShouldShowAllyMarkerWidget_Params
{
	bool                                               ReturnValue;                                               // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function KillstreakUINew.KSAllyMarkerWidget.SetPlayerName
struct UKSAllyMarkerWidget_SetPlayerName_Params
{
};

// Function KillstreakUINew.KSAllyMarkerWidget.SetMarkerPlayerState
struct UKSAllyMarkerWidget_SetMarkerPlayerState_Params
{
	class AKSPlayerState*                              pPlayerState;                                              // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function KillstreakUINew.KSAllyMarkerWidget.IsOwningPlayer
struct UKSAllyMarkerWidget_IsOwningPlayer_Params
{
	bool                                               ReturnValue;                                               // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function KillstreakUINew.KSAllyMarkerWidget.HandleUIRelevantChanged
struct UKSAllyMarkerWidget_HandleUIRelevantChanged_Params
{
	class AKSPlayerState*                              InPlayerState;                                             // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function KillstreakUINew.KSAllyMarkerWidget.HandleRemoveSelfPing
struct UKSAllyMarkerWidget_HandleRemoveSelfPing_Params
{
	class AKSPlayerState*                              PingingPlayer;                                             // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function KillstreakUINew.KSAllyMarkerWidget.HandlePlayerModActivated
struct UKSAllyMarkerWidget_HandlePlayerModActivated_Params
{
	class UKSPlayerMod_Activated*                      ActivatedMod;                                              // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               Active;                                                    // 0x0008(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function KillstreakUINew.KSAllyMarkerWidget.HandlePlayerDown
struct UKSAllyMarkerWidget_HandlePlayerDown_Params
{
	struct FCombatEventInfo                            CombatEventInfo;                                           // 0x0000(0x0060)  (Parm, NativeAccessSpecifierPublic)
	int                                                ExpBonus;                                                  // 0x0060(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function KillstreakUINew.KSAllyMarkerWidget.HandlePlayerDeath
struct UKSAllyMarkerWidget_HandlePlayerDeath_Params
{
	struct FCombatEventInfo                            DeathInfo;                                                 // 0x0000(0x0060)  (Parm, NativeAccessSpecifierPublic)
};

// Function KillstreakUINew.KSAllyMarkerWidget.HandleOnJobChanged
struct UKSAllyMarkerWidget_HandleOnJobChanged_Params
{
};

// Function KillstreakUINew.KSAllyMarkerWidget.HandleObjectiveStateChanged
struct UKSAllyMarkerWidget_HandleObjectiveStateChanged_Params
{
};

// Function KillstreakUINew.KSAllyMarkerWidget.HandleChangeSelfPing
struct UKSAllyMarkerWidget_HandleChangeSelfPing_Params
{
	class AKSPlayerState*                              PingingPlayer;                                             // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class AKSPlayerState*                              AcknowledgingPlayer;                                       // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function KillstreakUINew.KSAllyMarkerWidget.HandleAddSelfPing
struct UKSAllyMarkerWidget_HandleAddSelfPing_Params
{
	class AKSPlayerState*                              PingingPlayer;                                             // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	Killstreak_EPingType                               PingType;                                                  // 0x0008(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	Killstreak_EPingMessage                            PingMessage;                                               // 0x0009(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function KillstreakUINew.KSAllyMarkerWidget.GetPingIconByType
struct UKSAllyMarkerWidget_GetPingIconByType_Params
{
	Killstreak_EPingType                               PingType;                                                  // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               ReturnValue;                                               // 0x0030(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function KillstreakUINew.KSAllyMarkerWidget.GetPingIconByMessage
struct UKSAllyMarkerWidget_GetPingIconByMessage_Params
{
	Killstreak_EPingMessage                            PingMessage;                                               // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               ReturnValue;                                               // 0x0030(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function KillstreakUINew.KSAllyMarkerWidget.GetPingColorByType
struct UKSAllyMarkerWidget_GetPingColorByType_Params
{
	Killstreak_EPingType                               PingType;                                                  // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FLinearColor                                PingColor;                                                 // 0x0004(0x0010)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               ReturnValue;                                               // 0x0014(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function KillstreakUINew.KSAllyMarkerWidget.GetArrowPositionFromAngleBlueprint
struct UKSAllyMarkerWidget_GetArrowPositionFromAngleBlueprint_Params
{
	float                                              Angle;                                                     // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector2D                                   ReturnValue;                                               // 0x0004(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function KillstreakUINew.KSAllyMarkerWidget.FindRowByType
struct UKSAllyMarkerWidget_FindRowByType_Params
{
	Killstreak_EPingType                               PingType;                                                  // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FContextualPingTypesRow                     ContextualPingTypesRow;                                    // 0x0008(0x0048)  (Parm, OutParm, NativeAccessSpecifierPublic)
	bool                                               ReturnValue;                                               // 0x0050(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function KillstreakUINew.KSAllyMarkerWidget.FindRowByMessage
struct UKSAllyMarkerWidget_FindRowByMessage_Params
{
	Killstreak_EPingMessage                            PingMessage;                                               // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FContextualPingMessagesRow                  ContextualPingMessagesRow;                                 // 0x0008(0x0038)  (Parm, OutParm, NativeAccessSpecifierPublic)
	bool                                               ReturnValue;                                               // 0x0040(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function KillstreakUINew.KSAllyMarkerWidget.ChangeOwnerContentVisibility
struct UKSAllyMarkerWidget_ChangeOwnerContentVisibility_Params
{
	bool                                               bVisible;                                                  // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function KillstreakUINew.KSAlphaDisclaimer.LoadAlphaDisclaimerText
struct UKSAlphaDisclaimer_LoadAlphaDisclaimerText_Params
{
	struct FString                                     SaveText;                                                  // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               ReturnValue;                                               // 0x0010(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function KillstreakUINew.KSWeaponWidget.SetOwningWeapon
struct UKSWeaponWidget_SetOwningWeapon_Params
{
	class AKSWeapon*                                   InWeapon;                                                  // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function KillstreakUINew.KSWeaponWidget.PreClearWeapon
struct UKSWeaponWidget_PreClearWeapon_Params
{
};

// Function KillstreakUINew.KSWeaponWidget.PostSetWeapon
struct UKSWeaponWidget_PostSetWeapon_Params
{
};

// Function KillstreakUINew.KSWeaponWidget.OtherWeaponUpdate
struct UKSWeaponWidget_OtherWeaponUpdate_Params
{
};

// Function KillstreakUINew.KSWeaponWidget.OnOwningWeaponDestroyed
struct UKSWeaponWidget_OnOwningWeaponDestroyed_Params
{
	class AActor*                                      DestroyedWeapon;                                           // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function KillstreakUINew.KSWeaponWidget.GetOwningWeapon
struct UKSWeaponWidget_GetOwningWeapon_Params
{
	class AKSWeapon*                                   ReturnValue;                                               // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function KillstreakUINew.KSAmmoWidget.StopReloading
struct UKSAmmoWidget_StopReloading_Params
{
};

// Function KillstreakUINew.KSAmmoWidget.StartReloading
struct UKSAmmoWidget_StartReloading_Params
{
};

// Function KillstreakUINew.KSAmmoWidget.OnAmmoChanged
struct UKSAmmoWidget_OnAmmoChanged_Params
{
	int                                                OldInClip;                                                 // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                OldClipSize;                                               // 0x0004(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                OldReserve;                                                // 0x0008(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                NewInClip;                                                 // 0x000C(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                NewClipSize;                                               // 0x0010(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                NewReserve;                                                // 0x0014(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function KillstreakUINew.KSAnnouncementQueuedMessageWidget.DisplayAnnouncement
struct UKSAnnouncementQueuedMessageWidget_DisplayAnnouncement_Params
{
};

// Function KillstreakUINew.KSAnnouncementQueueWidget.Queue
struct UKSAnnouncementQueueWidget_Queue_Params
{
	struct FAnnouncementData                           Announcement;                                              // 0x0000(0x0038)  (Parm, NativeAccessSpecifierPublic)
};

// Function KillstreakUINew.KSAnnouncementQueueWidget.GetNext
struct UKSAnnouncementQueueWidget_GetNext_Params
{
	struct FAnnouncementData                           Announcement;                                              // 0x0000(0x0038)  (Parm, OutParm, NativeAccessSpecifierPublic)
	bool                                               ReturnValue;                                               // 0x0038(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function KillstreakUINew.KSAnnouncementQueueWidget.ClearAnnoucementQueue
struct UKSAnnouncementQueueWidget_ClearAnnoucementQueue_Params
{
};

// Function KillstreakUINew.KSTeamWidget.SetTeam
struct UKSTeamWidget_SetTeam_Params
{
	class AKSTeamState*                                NewTeam;                                                   // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function KillstreakUINew.KSTeamWidget.PreClearTeam
struct UKSTeamWidget_PreClearTeam_Params
{
};

// Function KillstreakUINew.KSTeamWidget.PostSetTeam
struct UKSTeamWidget_PostSetTeam_Params
{
};

// Function KillstreakUINew.KSTeamWidget.PlayerStateRemovedFromTeam
struct UKSTeamWidget_PlayerStateRemovedFromTeam_Params
{
	class AKSPlayerState*                              RemovedPlayerState;                                        // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function KillstreakUINew.KSTeamWidget.PlayerStateAddedToTeam
struct UKSTeamWidget_PlayerStateAddedToTeam_Params
{
	class AKSPlayerState*                              AddedPlayerState;                                          // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function KillstreakUINew.KSTeamWidget.PersistentPlayerRemovedFromTeam
struct UKSTeamWidget_PersistentPlayerRemovedFromTeam_Params
{
	class UKSPersistentPlayerData*                     RemovedPersistentPlayer;                                   // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function KillstreakUINew.KSTeamWidget.PersistentPlayerAddedToTeam
struct UKSTeamWidget_PersistentPlayerAddedToTeam_Params
{
	class UKSPersistentPlayerData*                     AddedPersistentPlayer;                                     // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function KillstreakUINew.KSTeamWidget.OnBoundTeamDestroyed
struct UKSTeamWidget_OnBoundTeamDestroyed_Params
{
	class AActor*                                      DestroyedTeam;                                             // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function KillstreakUINew.KSTeamWidget.GetTeam
struct UKSTeamWidget_GetTeam_Params
{
	class AKSTeamState*                                ReturnValue;                                               // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function KillstreakUINew.KSAutoTeamWidget.TeamAddedToGameState
struct UKSAutoTeamWidget_TeamAddedToGameState_Params
{
	class AKSTeamState*                                InTeam;                                                    // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function KillstreakUINew.KSAutoTeamWidget.SetAutoTeamConfig
struct UKSAutoTeamWidget_SetAutoTeamConfig_Params
{
	KillstreakUINew_EKSAutoTeamType                    InAutoTeamType;                                            // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                InTeamNum;                                                 // 0x0004(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function KillstreakUINew.KSBoostInventoryItemWidget.View_SetFromItem
struct UKSBoostInventoryItemWidget_View_SetFromItem_Params
{
	struct FAccountConsumableDetails                   ItemDetails;                                               // 0x0000(0x0010)  (Parm, NoDestructor, NativeAccessSpecifierPublic)
};

// Function KillstreakUINew.KSBoostInventoryItemWidget.ShowBoostPopup
struct UKSBoostInventoryItemWidget_ShowBoostPopup_Params
{
};

// Function KillstreakUINew.KSBoostInventoryItemWidget.SetItem
struct UKSBoostInventoryItemWidget_SetItem_Params
{
	struct FAccountConsumableDetails                   ItemDetails;                                               // 0x0000(0x0010)  (Parm, NoDestructor, NativeAccessSpecifierPublic)
};

// Function KillstreakUINew.KSBoostInventoryItemWidget.PlayBoostConfirmationSound
struct UKSBoostInventoryItemWidget_PlayBoostConfirmationSound_Params
{
};

// Function KillstreakUINew.KSBoostInventoryItemWidget.OnActivateBoostConfirm
struct UKSBoostInventoryItemWidget_OnActivateBoostConfirm_Params
{
};

// Function KillstreakUINew.KSBoostInventoryItemWidget.OnActivateBoostCancel
struct UKSBoostInventoryItemWidget_OnActivateBoostCancel_Params
{
};

// Function KillstreakUINew.KSChallengeEntryCardBase.SetChallengeData
struct UKSChallengeEntryCardBase_SetChallengeData_Params
{
	class UKSActivityInstance*                         ActivityInstance;                                          // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function KillstreakUINew.KSChallengeEntryCardBase.DisplayRewardItems
struct UKSChallengeEntryCardBase_DisplayRewardItems_Params
{
	TArray<struct FTierRewardItemData>                 RewardItems;                                               // 0x0000(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function KillstreakUINew.KSChallengeEntryCardBase.ApplyRerollAvailable
struct UKSChallengeEntryCardBase_ApplyRerollAvailable_Params
{
	bool                                               CanReroll;                                                 // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function KillstreakUINew.KSChallengeEntryCardBase.ApplyLayoutType
struct UKSChallengeEntryCardBase_ApplyLayoutType_Params
{
	KillstreakUINew_EChallengeEntryCardState           CardState;                                                 // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function KillstreakUINew.KSChallengeEntryCardBase.ApplyChallengeProgress
struct UKSChallengeEntryCardBase_ApplyChallengeProgress_Params
{
	int                                                Progress;                                                  // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                ProgressTotal;                                             // 0x0004(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function KillstreakUINew.KSChallengeEntryCardBase.ApplyChallengeDescription
struct UKSChallengeEntryCardBase_ApplyChallengeDescription_Params
{
	struct FText                                       DescText;                                                  // 0x0000(0x0018)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
};

// Function KillstreakUINew.KSComponentReticleWidgetBase.ViewedPawnInstigatedDamageNotify
struct UKSComponentReticleWidgetBase_ViewedPawnInstigatedDamageNotify_Params
{
	struct FCombatEventInfo                            DamageInfo;                                                // 0x0000(0x0060)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
};

// Function KillstreakUINew.KSComponentReticleWidgetBase.UpdateReticleOffset
struct UKSComponentReticleWidgetBase_UpdateReticleOffset_Params
{
	float                                              OffsetFromCenterScreen;                                    // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function KillstreakUINew.KSComponentReticleWidgetBase.UpdateBlockedShotIcon
struct UKSComponentReticleWidgetBase_UpdateBlockedShotIcon_Params
{
	bool                                               IconVisible;                                               // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector2D                                   Translation;                                               // 0x0004(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector2D                                   IconScale;                                                 // 0x000C(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function KillstreakUINew.KSComponentReticleWidgetBase.CalculateReticleOffset
struct UKSComponentReticleWidgetBase_CalculateReticleOffset_Params
{
	float                                              DeltaTime;                                                 // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function KillstreakUINew.KSComponentReticleWidgetBase.CalculateBlockedShotIcon
struct UKSComponentReticleWidgetBase_CalculateBlockedShotIcon_Params
{
};

// Function KillstreakUINew.ContextActionData.TriggerHoldReleaseContextAction
struct UContextActionData_TriggerHoldReleaseContextAction_Params
{
	KillstreakUINew_EContextPromptHoldReleaseState     Status;                                                    // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function KillstreakUINew.ContextActionData.TriggerCycleContextActionPrev
struct UContextActionData_TriggerCycleContextActionPrev_Params
{
};

// Function KillstreakUINew.ContextActionData.TriggerCycleContextActionNext
struct UContextActionData_TriggerCycleContextActionNext_Params
{
};

// Function KillstreakUINew.ContextActionData.TriggerCycleContextAction
struct UContextActionData_TriggerCycleContextAction_Params
{
	bool                                               bNext;                                                     // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function KillstreakUINew.ContextActionData.TriggerContextAction
struct UContextActionData_TriggerContextAction_Params
{
};

// Function KillstreakUINew.ContextActionData.StartTriggerHoldAction
struct UContextActionData_StartTriggerHoldAction_Params
{
};

// Function KillstreakUINew.ContextActionData.ClearTriggerHoldAction
struct UContextActionData_ClearTriggerHoldAction_Params
{
};

// Function KillstreakUINew.KSContextBarWidget.UpdateContextActions
struct UKSContextBarWidget_UpdateContextActions_Params
{
	TArray<class UContextActionData*>                  ContextActions;                                            // 0x0000(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FName                                       CurrentRoute;                                              // 0x0010(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function KillstreakUINew.KSContextBarWidget.SetPrompts
struct UKSContextBarWidget_SetPrompts_Params
{
	struct FName                                       Route;                                                     // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<struct FName>                               ContextNames;                                              // 0x0008(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function KillstreakUINew.KSContextBarWidget.SetPromptHoldReleaseAction
struct UKSContextBarWidget_SetPromptHoldReleaseAction_Params
{
	struct FName                                       Route;                                                     // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FName                                       ContextName;                                               // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FScriptDelegate                             UpdateCallback;                                            // 0x0010(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	struct FScriptDelegate                             EventCallback;                                             // 0x0020(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
};

// Function KillstreakUINew.KSContextBarWidget.SetPromptCycleAction
struct UKSContextBarWidget_SetPromptCycleAction_Params
{
	struct FName                                       Route;                                                     // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FName                                       ContextName;                                               // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FScriptDelegate                             EventCallback;                                             // 0x0010(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
};

// Function KillstreakUINew.KSContextBarWidget.SetPromptAction
struct UKSContextBarWidget_SetPromptAction_Params
{
	struct FName                                       Route;                                                     // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FName                                       ContextName;                                               // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FScriptDelegate                             EventCallback;                                             // 0x0010(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
};

// Function KillstreakUINew.KSContextBarWidget.SetPrompt
struct UKSContextBarWidget_SetPrompt_Params
{
	struct FName                                       Route;                                                     // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FName                                       ContextName;                                               // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FText                                       FormatAdditive;                                            // 0x0010(0x0018)  (Parm, NativeAccessSpecifierPublic)
};

// Function KillstreakUINew.KSContextBarWidget.SetInputActions
struct UKSContextBarWidget_SetInputActions_Params
{
	TArray<class UContextActionData*>                  ActionData;                                                // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function KillstreakUINew.KSContextBarWidget.SetActiveRoute
struct UKSContextBarWidget_SetActiveRoute_Params
{
	struct FName                                       Route;                                                     // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function KillstreakUINew.KSContextBarWidget.RemoveOverrideRoute
struct UKSContextBarWidget_RemoveOverrideRoute_Params
{
	struct FName                                       Route;                                                     // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               ReturnValue;                                               // 0x0008(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function KillstreakUINew.KSContextBarWidget.RefreshContextBar
struct UKSContextBarWidget_RefreshContextBar_Params
{
};

// Function KillstreakUINew.KSContextBarWidget.PushOverrideRoute
struct UKSContextBarWidget_PushOverrideRoute_Params
{
	struct FName                                       Route;                                                     // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function KillstreakUINew.KSContextBarWidget.PopOverrideRoute
struct UKSContextBarWidget_PopOverrideRoute_Params
{
	struct FName                                       ReturnValue;                                               // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function KillstreakUINew.KSContextBarWidget.GetCurrentContextRoute
struct UKSContextBarWidget_GetCurrentContextRoute_Params
{
	struct FName                                       ReturnValue;                                               // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function KillstreakUINew.KSContextBarWidget.ClearPrompt
struct UKSContextBarWidget_ClearPrompt_Params
{
	struct FName                                       Route;                                                     // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FName                                       ContextName;                                               // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function KillstreakUINew.KSContextBarWidget.ClearOverrideRouteStack
struct UKSContextBarWidget_ClearOverrideRouteStack_Params
{
};

// Function KillstreakUINew.KSContextBarWidget.ClearAllPrompts
struct UKSContextBarWidget_ClearAllPrompts_Params
{
	struct FName                                       Route;                                                     // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function KillstreakUINew.KSContextMenu.SetOptionsVisibility
struct UKSContextMenu_SetOptionsVisibility_Params
{
};

// Function KillstreakUINew.KSContextMenu.SetMenuPosition
struct UKSContextMenu_SetMenuPosition_Params
{
	class UKSWidget*                                   WidgetToMove;                                              // 0x0000(0x0008)  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FMargin                                     WidgetPadding;                                             // 0x0008(0x0010)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	KillstreakUINew_EViewSide                          side;                                                      // 0x0018(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              menuWidth;                                                 // 0x001C(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              menuHeight;                                                // 0x0020(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector2D                                   ReturnValue;                                               // 0x0024(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function KillstreakUINew.KSContextMenu.SetCurrentPlayerInfo
struct UKSContextMenu_SetCurrentPlayerInfo_Params
{
	class UKSPlayerInfo*                               playerinfo;                                                // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function KillstreakUINew.KSContextMenu.RemoveContextMenuButton
struct UKSContextMenu_RemoveContextMenuButton_Params
{
	class UKSContextMenuButton*                        ContextButton;                                             // 0x0000(0x0008)  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function KillstreakUINew.KSContextMenu.OnOptionSelected
struct UKSContextMenu_OnOptionSelected_Params
{
	KillstreakUINew_EPlayerContextOptions              ContextOption;                                             // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               ReturnValue;                                               // 0x0001(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function KillstreakUINew.KSContextMenu.HandleOnQueueStatusChange
struct UKSContextMenu_HandleOnQueueStatusChange_Params
{
	PlatformUMG_EPUMG_MatchStatus                      QueueStatus;                                               // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function KillstreakUINew.KSContextMenu.GetQueueDataFactory
struct UKSContextMenu_GetQueueDataFactory_Params
{
	class UPUMG_QueueDataFactory*                      ReturnValue;                                               // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function KillstreakUINew.KSContextMenu.GetPlayerDataFactory
struct UKSContextMenu_GetPlayerDataFactory_Params
{
	class UKSPlayerDataFactory*                        ReturnValue;                                               // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function KillstreakUINew.KSContextMenu.GetPartyDataFactory
struct UKSContextMenu_GetPartyDataFactory_Params
{
	class UPUMG_PartyDataFactory*                      ReturnValue;                                               // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function KillstreakUINew.KSContextMenu.GetFriendDataFactory
struct UKSContextMenu_GetFriendDataFactory_Params
{
	class UKSFriendDataFactory*                        ReturnValue;                                               // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function KillstreakUINew.KSContextMenu.GetContextButtonByEnum
struct UKSContextMenu_GetContextButtonByEnum_Params
{
	KillstreakUINew_EPlayerContextOptions              ContextOption;                                             // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UKSContextMenuButton*                        ReturnValue;                                               // 0x0008(0x0008)  (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function KillstreakUINew.KSContextMenu.ClearAllContextMenuButton
struct UKSContextMenu_ClearAllContextMenuButton_Params
{
};

// Function KillstreakUINew.KSContextMenu.AddContextMenuButton
struct UKSContextMenu_AddContextMenuButton_Params
{
	class UKSContextMenuButton*                        ContextButton;                                             // 0x0000(0x0008)  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function KillstreakUINew.KSContextMenuButton.SetContextOption
struct UKSContextMenuButton_SetContextOption_Params
{
	KillstreakUINew_EPlayerContextOptions              Context;                                                   // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function KillstreakUINew.KSContextMenuButton.HandleVisibility
struct UKSContextMenuButton_HandleVisibility_Params
{
	bool                                               isVisibility;                                              // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function KillstreakUINew.KSContextMenuButton.HandleActive
struct UKSContextMenuButton_HandleActive_Params
{
	bool                                               IsActive;                                                  // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function KillstreakUINew.KSContextMenuButton.GetContextOption
struct UKSContextMenuButton_GetContextOption_Params
{
	KillstreakUINew_EPlayerContextOptions              ReturnValue;                                               // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function KillstreakUINew.KSContextualPingMarkerWidget.SetupPingOnReady
struct UKSContextualPingMarkerWidget_SetupPingOnReady_Params
{
};

// Function KillstreakUINew.KSContextualPingMarkerWidget.SetPingInfo
struct UKSContextualPingMarkerWidget_SetPingInfo_Params
{
	struct FPingInfo                                   PingInfoVal;                                               // 0x0000(0x0050)  (Parm, NativeAccessSpecifierPublic)
};

// Function KillstreakUINew.KSContextualPingMarkerWidget.OnPingUnhovered
struct UKSContextualPingMarkerWidget_OnPingUnhovered_Params
{
	int                                                PingId;                                                    // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class AKSPlayerState*                              PingingPlayer;                                             // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function KillstreakUINew.KSContextualPingMarkerWidget.OnPingHovered
struct UKSContextualPingMarkerWidget_OnPingHovered_Params
{
	int                                                PingId;                                                    // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class AKSPlayerState*                              PingingPlayer;                                             // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function KillstreakUINew.KSContextualPingMarkerWidget.OnInitializePing
struct UKSContextualPingMarkerWidget_OnInitializePing_Params
{
};

// Function KillstreakUINew.KSContextualPingMarkerWidget.IsInvisiblePingType
struct UKSContextualPingMarkerWidget_IsInvisiblePingType_Params
{
	Killstreak_EPingType                               PingType;                                                  // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               ReturnValue;                                               // 0x0001(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function KillstreakUINew.KSContextualPingMarkerWidget.HandleOnContextualPingRemoved
struct UKSContextualPingMarkerWidget_HandleOnContextualPingRemoved_Params
{
	int                                                PingId;                                                    // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class AKSPlayerState*                              PingingPlayer;                                             // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function KillstreakUINew.KSContextualPingMarkerWidget.HandleOnContextualPingChanged
struct UKSContextualPingMarkerWidget_HandleOnContextualPingChanged_Params
{
	int                                                PingId;                                                    // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class AKSPlayerState*                              PingingPlayer;                                             // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class AKSPlayerState*                              AcknowledgingPlayer;                                       // 0x0010(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function KillstreakUINew.KSContextualPingMarkerWidget.GetPingLifeSpan
struct UKSContextualPingMarkerWidget_GetPingLifeSpan_Params
{
	Killstreak_EPingType                               PingType;                                                  // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              ReturnValue;                                               // 0x0004(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function KillstreakUINew.KSContextualPingMarkerWidget.GetPingIconByType
struct UKSContextualPingMarkerWidget_GetPingIconByType_Params
{
	Killstreak_EPingType                               PingType;                                                  // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               ReturnValue;                                               // 0x0030(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function KillstreakUINew.KSContextualPingMarkerWidget.GetPingIconByMessage
struct UKSContextualPingMarkerWidget_GetPingIconByMessage_Params
{
	Killstreak_EPingMessage                            PingMessage;                                               // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               ReturnValue;                                               // 0x0030(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function KillstreakUINew.KSContextualPingMarkerWidget.GetPingColorByType
struct UKSContextualPingMarkerWidget_GetPingColorByType_Params
{
	Killstreak_EPingType                               PingType;                                                  // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FLinearColor                                PingColor;                                                 // 0x0004(0x0010)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               ReturnValue;                                               // 0x0014(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function KillstreakUINew.KSContextualPingMarkerWidget.FindRowByType
struct UKSContextualPingMarkerWidget_FindRowByType_Params
{
	Killstreak_EPingType                               PingType;                                                  // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FContextualPingTypesRow                     ContextualPingTypesRow;                                    // 0x0008(0x0048)  (Parm, OutParm, NativeAccessSpecifierPublic)
	bool                                               ReturnValue;                                               // 0x0050(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function KillstreakUINew.KSContextualPingMarkerWidget.FindRowByMessage
struct UKSContextualPingMarkerWidget_FindRowByMessage_Params
{
	Killstreak_EPingMessage                            PingMessage;                                               // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FContextualPingMessagesRow                  ContextualPingMessagesRow;                                 // 0x0008(0x0038)  (Parm, OutParm, NativeAccessSpecifierPublic)
	bool                                               ReturnValue;                                               // 0x0040(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function KillstreakUINew.KSCustomizationSelection.TabRight
struct UKSCustomizationSelection_TabRight_Params
{
};

// Function KillstreakUINew.KSCustomizationSelection.TabLeft
struct UKSCustomizationSelection_TabLeft_Params
{
};

// Function KillstreakUINew.KSCustomizationSelection.SetWingSuitAsset
struct UKSCustomizationSelection_SetWingSuitAsset_Params
{
	class UKSWeaponAsset*                              WingSuit;                                                  // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function KillstreakUINew.KSCustomizationSelection.PurchaseAndEquip
struct UKSCustomizationSelection_PurchaseAndEquip_Params
{
	Killstreak_EMercCosmeticSlot                       SlotType;                                                  // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                SlotPosition;                                              // 0x0004(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UKSJobItem*                                  JobItem;                                                   // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UPUMG_StoreItem*                             StoreItem;                                                 // 0x0010(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function KillstreakUINew.KSCustomizationSelection.PromptEquipAllForCosmetic
struct UKSCustomizationSelection_PromptEquipAllForCosmetic_Params
{
	class UKSItem*                                     CosmeticItem;                                              // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	Killstreak_EMercCosmeticSlot                       SlotType;                                                  // 0x0008(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                SlotPosition;                                              // 0x000C(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function KillstreakUINew.KSCustomizationSelection.OnEquipAllComplete
struct UKSCustomizationSelection_OnEquipAllComplete_Params
{
	bool                                               bSuccess;                                                  // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function KillstreakUINew.KSCustomizationSelection.IsItemOwned
struct UKSCustomizationSelection_IsItemOwned_Params
{
	class UPlatformInventoryItem*                      Item;                                                      // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               ReturnValue;                                               // 0x0008(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function KillstreakUINew.KSCustomizationSelection.GetWingSuitItems
struct UKSCustomizationSelection_GetWingSuitItems_Params
{
	TArray<class UPUMG_StoreItem*>                     StoreItems;                                                // 0x0010(0x0010)  (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function KillstreakUINew.KSCustomizationSelection.GetWingSuitAsset
struct UKSCustomizationSelection_GetWingSuitAsset_Params
{
	class UKSWeaponAsset*                              ReturnValue;                                               // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function KillstreakUINew.KSCustomizationSelection.GetWeaponSlotItems
struct UKSCustomizationSelection_GetWeaponSlotItems_Params
{
	Killstreak_EWeaponSlot                             WeaponSlotType;                                            // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UKSJobItem*                                  JobItem;                                                   // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<class UPUMG_StoreItem*>                     StoreItems;                                                // 0x0020(0x0010)  (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function KillstreakUINew.KSCustomizationSelection.GetWeaponItem
struct UKSCustomizationSelection_GetWeaponItem_Params
{
	Killstreak_EWeaponSlot                             WeaponSlotType;                                            // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UKSJobItem*                                  JobItem;                                                   // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UKSWeaponAsset*                              Weapon;                                                    // 0x0010(0x0008)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               ReturnValue;                                               // 0x0018(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function KillstreakUINew.KSCustomizationSelection.GetSkinItemsForJobItem
struct UKSCustomizationSelection_GetSkinItemsForJobItem_Params
{
	class UKSJobItem*                                  JobItem;                                                   // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<class UPUMG_StoreItem*>                     StoreItems;                                                // 0x0018(0x0010)  (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function KillstreakUINew.KSCustomizationSelection.GetScrollBoxForCosmeticSlot
struct UKSCustomizationSelection_GetScrollBoxForCosmeticSlot_Params
{
	Killstreak_EMercCosmeticSlot                       CheckCosmeticSlot;                                         // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UKSScrollBox*                                ReturnValue;                                               // 0x0008(0x0008)  (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function KillstreakUINew.KSCustomizationSelection.GetRogueCustomizationRelatedInfoForCosmeticSlot
struct UKSCustomizationSelection_GetRogueCustomizationRelatedInfoForCosmeticSlot_Params
{
	Killstreak_EMercCosmeticSlot                       CheckCosmeticSlot;                                         // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FRogueCustomizationRelatedInfo              ReturnValue;                                               // 0x0008(0x0030)  (Parm, OutParm, ReturnParm, ContainsInstancedReference, NativeAccessSpecifierPublic)
};

// Function KillstreakUINew.KSCustomizationSelection.GetRadialMenuItems
struct UKSCustomizationSelection_GetRadialMenuItems_Params
{
	TArray<class UPUMG_StoreItem*>                     StoreItems;                                                // 0x0038(0x0010)  (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FName                                       Tag;                                                       // 0x0048(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function KillstreakUINew.KSCustomizationSelection.GetNavTabForCosmeticSlot
struct UKSCustomizationSelection_GetNavTabForCosmeticSlot_Params
{
	Killstreak_EMercCosmeticSlot                       CheckCosmeticSlot;                                         // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UKSNavTabWidget*                             ReturnValue;                                               // 0x0008(0x0008)  (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function KillstreakUINew.KSCustomizationSelection.GetItemHelper
struct UKSCustomizationSelection_GetItemHelper_Params
{
	class UKSStoreItemHelper*                          ReturnValue;                                               // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function KillstreakUINew.KSCustomizationSelection.GetItemContainerForCosmeticSlot
struct UKSCustomizationSelection_GetItemContainerForCosmeticSlot_Params
{
	Killstreak_EMercCosmeticSlot                       CheckCosmeticSlot;                                         // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UKSSortableGridPanel*                        ReturnValue;                                               // 0x0008(0x0008)  (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function KillstreakUINew.KSCustomizationSelection.GetCosmeticItemsForSlot
struct UKSCustomizationSelection_GetCosmeticItemsForSlot_Params
{
	Killstreak_EMercCosmeticSlot                       SlotType;                                                  // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	Killstreak_EWeaponSlot                             WeaponSlotType;                                            // 0x0001(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UKSJobItem*                                  JobItem;                                                   // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<class UPUMG_StoreItem*>                     StoreItems;                                                // 0x0020(0x0010)  (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function KillstreakUINew.KSCustomizationSelection.GetCosmeticItemSelectorsForCosmeticSlot
struct UKSCustomizationSelection_GetCosmeticItemSelectorsForCosmeticSlot_Params
{
	Killstreak_EMercCosmeticSlot                       CheckCosmeticSlot;                                         // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<class UKSCosmeticItemSelectorWidget*>       ReturnValue;                                               // 0x0008(0x0010)  (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, ContainsInstancedReference, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function KillstreakUINew.KSCustomizationSelection.GetActiveSortableGridPanel
struct UKSCustomizationSelection_GetActiveSortableGridPanel_Params
{
	class UKSSortableGridPanel*                        ReturnValue;                                               // 0x0000(0x0008)  (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function KillstreakUINew.KSCustomizationSelection.GetActiveScrollBox
struct UKSCustomizationSelection_GetActiveScrollBox_Params
{
	class UKSScrollBox*                                ReturnValue;                                               // 0x0000(0x0008)  (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function KillstreakUINew.KSCustomizationSelection.GetActiveRogueCustomizationRelatedInfo
struct UKSCustomizationSelection_GetActiveRogueCustomizationRelatedInfo_Params
{
	struct FRogueCustomizationRelatedInfo              ReturnValue;                                               // 0x0000(0x0030)  (Parm, OutParm, ReturnParm, ContainsInstancedReference, NativeAccessSpecifierPublic)
};

// Function KillstreakUINew.KSCustomizationSelection.GetActiveNavTab
struct UKSCustomizationSelection_GetActiveNavTab_Params
{
	class UKSNavTabWidget*                             ReturnValue;                                               // 0x0000(0x0008)  (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function KillstreakUINew.KSCustomizationSelection.GetActiveCosmeticSlot
struct UKSCustomizationSelection_GetActiveCosmeticSlot_Params
{
	Killstreak_EMercCosmeticSlot                       ReturnValue;                                               // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function KillstreakUINew.KSCustomizationSelection.GetActiveCosmeticItemSelectors
struct UKSCustomizationSelection_GetActiveCosmeticItemSelectors_Params
{
	TArray<class UKSCosmeticItemSelectorWidget*>       ReturnValue;                                               // 0x0000(0x0010)  (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, ContainsInstancedReference, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function KillstreakUINew.KSCustomizationSelection.ForceSetTabIndex
struct UKSCustomizationSelection_ForceSetTabIndex_Params
{
	int                                                NewTabIndex;                                               // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function KillstreakUINew.KSCustomizationSelection.ClearCosmeticItemsForCosmeticSlot
struct UKSCustomizationSelection_ClearCosmeticItemsForCosmeticSlot_Params
{
	Killstreak_EMercCosmeticSlot                       CheckCosmeticSlot;                                         // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function KillstreakUINew.KSCustomizationSelection.ChangeToNewTab
struct UKSCustomizationSelection_ChangeToNewTab_Params
{
};

// Function KillstreakUINew.KSCustomizationSelection.AddRogueCustomizationRelatedInfo
struct UKSCustomizationSelection_AddRogueCustomizationRelatedInfo_Params
{
	int                                                NewSwitcherIndex;                                          // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	Killstreak_EMercCosmeticSlot                       NewCosmeticSlot;                                           // 0x0004(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UKSNavTabWidget*                             NewNavTab;                                                 // 0x0008(0x0008)  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UKSScrollBox*                                NewScrollBox;                                              // 0x0010(0x0008)  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UKSSortableGridPanel*                        NewSortableGridPanel;                                      // 0x0018(0x0008)  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function KillstreakUINew.KSCustomizationSelection.AddCosmeticItemsForCosmeticSlot
struct UKSCustomizationSelection_AddCosmeticItemsForCosmeticSlot_Params
{
	Killstreak_EMercCosmeticSlot                       CheckCosmeticSlot;                                         // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<class UKSCosmeticItemSelectorWidget*>       NewCosmeticItems;                                          // 0x0008(0x0010)  (Parm, ZeroConstructor, ContainsInstancedReference, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function KillstreakUINew.KSDailyChallengeViewBase.UpdateChallenges
struct UKSDailyChallengeViewBase_UpdateChallenges_Params
{
};

// Function KillstreakUINew.KSDailyChallengeViewBase.InitializeChallengeDisplays
struct UKSDailyChallengeViewBase_InitializeChallengeDisplays_Params
{
};

// Function KillstreakUINew.KSDailyChallengeViewBase.HandlePlayerChallengesReady
struct UKSDailyChallengeViewBase_HandlePlayerChallengesReady_Params
{
};

// Function KillstreakUINew.KSDailyChallengeViewBase.HandlePlayerChallengesChanged
struct UKSDailyChallengeViewBase_HandlePlayerChallengesChanged_Params
{
};

// Function KillstreakUINew.KSDailyChallengeViewBase.HandleDailyChallengeTimerRefreshed
struct UKSDailyChallengeViewBase_HandleDailyChallengeTimerRefreshed_Params
{
};

// Function KillstreakUINew.KSDailyChallengeViewBase.GetDisplayingChallenges
struct UKSDailyChallengeViewBase_GetDisplayingChallenges_Params
{
	TArray<class UKSActivityInstance*>                 ReturnValue;                                               // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function KillstreakUINew.KSDailyChallengeViewBase.DisplayChallengeTimeRemaining
struct UKSDailyChallengeViewBase_DisplayChallengeTimeRemaining_Params
{
	int                                                TimeRemainingSeconds;                                      // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function KillstreakUINew.KSDailyChallengeViewBase.DisplayChallenge
struct UKSDailyChallengeViewBase_DisplayChallenge_Params
{
	int                                                Index;                                                     // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UKSActivityInstance*                         ActivityInstance;                                          // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               PlayFlourish;                                              // 0x0010(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function KillstreakUINew.KSDataSocialCategory.TryConsumeOpenOnUpdate
struct UKSDataSocialCategory_TryConsumeOpenOnUpdate_Params
{
	bool                                               ReturnValue;                                               // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function KillstreakUINew.KSDataSocialCategory.SetOpenOnUpdate
struct UKSDataSocialCategory_SetOpenOnUpdate_Params
{
	bool                                               Value;                                                     // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function KillstreakUINew.KSDataSocialCategory.SetMessageText
struct UKSDataSocialCategory_SetMessageText_Params
{
	bool                                               bProcessing;                                               // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FText                                       MessageText;                                               // 0x0008(0x0018)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
};

// Function KillstreakUINew.KSDataSocialCategory.SetHeaderText
struct UKSDataSocialCategory_SetHeaderText_Params
{
	struct FText                                       Header;                                                    // 0x0000(0x0018)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
};

// Function KillstreakUINew.KSDataSocialCategory.Num
struct UKSDataSocialCategory_Num_Params
{
	int                                                ReturnValue;                                               // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function KillstreakUINew.KSDataSocialCategory.IsProcessing
struct UKSDataSocialCategory_IsProcessing_Params
{
	bool                                               ReturnValue;                                               // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function KillstreakUINew.KSDataSocialCategory.GetPlayerList
struct UKSDataSocialCategory_GetPlayerList_Params
{
	TArray<class UKSDataSocialPlayer*>                 ReturnValue;                                               // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function KillstreakUINew.KSDataSocialCategory.GetMessageText
struct UKSDataSocialCategory_GetMessageText_Params
{
	struct FText                                       ReturnValue;                                               // 0x0000(0x0018)  (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
};

// Function KillstreakUINew.KSDataSocialCategory.GetHeaderText
struct UKSDataSocialCategory_GetHeaderText_Params
{
	struct FText                                       ReturnValue;                                               // 0x0000(0x0018)  (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
};

// Function KillstreakUINew.KSDataSocialCategory.BP_GetSectionValue
struct UKSDataSocialCategory_BP_GetSectionValue_Params
{
	unsigned char                                      ReturnValue;                                               // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// DelegateFunction KillstreakUINew.KSDataSocialPlayer.KSSocialPlayerUpdate__DelegateSignature
struct UKSDataSocialPlayer_KSSocialPlayerUpdate__DelegateSignature_Params
{
	class UKSPlayerInfo*                               playerinfo;                                                // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function KillstreakUINew.KSDataSocialPlayer.IsValid
struct UKSDataSocialPlayer_IsValid_Params
{
	bool                                               ReturnValue;                                               // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function KillstreakUINew.KSDataSocialPlayer.GetPlayerInfo
struct UKSDataSocialPlayer_GetPlayerInfo_Params
{
	class UKSPlayerInfo*                               ReturnValue;                                               // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function KillstreakUINew.KSDebugMenu.GetSubmenu
struct UKSDebugMenu_GetSubmenu_Params
{
	struct FDebugMenuCommandInfo                       BaseCommand;                                               // 0x0000(0x0018)  (Parm, NativeAccessSpecifierPublic)
	TArray<struct FDebugMenuCommandInfo>               Submenu;                                                   // 0x0018(0x0010)  (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               ReturnValue;                                               // 0x0028(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function KillstreakUINew.KSDebugMenu.GetSortedBaseDebugCommands
struct UKSDebugMenu_GetSortedBaseDebugCommands_Params
{
	TArray<struct FDebugMenuCommandInfo>               SortedCommands;                                            // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function KillstreakUINew.KSDebugMenu.GetParamTypeForSubCommand
struct UKSDebugMenu_GetParamTypeForSubCommand_Params
{
	struct FString                                     BaseCommandString;                                         // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	KillstreakUINew_EConsoleCommandParamType           ReturnValue;                                               // 0x0010(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function KillstreakUINew.KSDownloadProgressWidget.UpdateFinished
struct UKSDownloadProgressWidget_UpdateFinished_Params
{
};

// Function KillstreakUINew.KSDownloadProgressWidget.UpdatedDownloadProgress
struct UKSDownloadProgressWidget_UpdatedDownloadProgress_Params
{
	float                                              Progress;                                                  // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              Total;                                                     // 0x0004(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              Eta;                                                       // 0x0008(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bSupportsEta;                                              // 0x000C(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function KillstreakUINew.KSEliminationMessageWidget.ShowMessageForTakenDown
struct UKSEliminationMessageWidget_ShowMessageForTakenDown_Params
{
	class AKSPlayerState*                              Instigator;                                                // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               IsElimination;                                             // 0x0008(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function KillstreakUINew.KSEliminationMessageWidget.ShowMessageForTakedown
struct UKSEliminationMessageWidget_ShowMessageForTakedown_Params
{
	class AKSPlayerState*                              Victim;                                                    // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               IsElimination;                                             // 0x0008(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function KillstreakUINew.KSEliminationMessageWidget.ShowMessageForAssist
struct UKSEliminationMessageWidget_ShowMessageForAssist_Params
{
	class AKSPlayerState*                              Victim;                                                    // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               IsElimination;                                             // 0x0008(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function KillstreakUINew.KSEliminationMessageWidget.OnPlayerDownReceived
struct UKSEliminationMessageWidget_OnPlayerDownReceived_Params
{
	struct FCombatEventInfo                            EventInfo;                                                 // 0x0000(0x0060)  (Parm, NativeAccessSpecifierPublic)
	int                                                ExpBonus;                                                  // 0x0060(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function KillstreakUINew.KSEliminationMessageWidget.OnPlayerDeathReceived
struct UKSEliminationMessageWidget_OnPlayerDeathReceived_Params
{
	struct FCombatEventInfo                            EventInfo;                                                 // 0x0000(0x0060)  (Parm, NativeAccessSpecifierPublic)
};

// Function KillstreakUINew.KSEliminationMessageWidget.OnPlayerAssistReceived
struct UKSEliminationMessageWidget_OnPlayerAssistReceived_Params
{
	struct FAssistInfo                                 EventInfo;                                                 // 0x0000(0x0028)  (Parm, NoDestructor, NativeAccessSpecifierPublic)
};

// Function KillstreakUINew.KSEliminationMessageWidget.ClearMessages
struct UKSEliminationMessageWidget_ClearMessages_Params
{
};

// Function KillstreakUINew.KSEmailCollectionWidget.SubmitEmailAddress
struct UKSEmailCollectionWidget_SubmitEmailAddress_Params
{
	struct FString                                     EmailAddress;                                              // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function KillstreakUINew.KSEmailCollectionWidget.OnSubmitEmailResponseNative
struct UKSEmailCollectionWidget_OnSubmitEmailResponseNative_Params
{
	bool                                               bSuccess;                                                  // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function KillstreakUINew.KSEmailCollectionWidget.OnSubmitEmailResponse
struct UKSEmailCollectionWidget_OnSubmitEmailResponse_Params
{
	bool                                               Success;                                                   // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function KillstreakUINew.KSEmailCollectionWidget.IsValidEmailAddress
struct UKSEmailCollectionWidget_IsValidEmailAddress_Params
{
	struct FString                                     EmailAddress;                                              // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               ReturnValue;                                               // 0x0010(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function KillstreakUINew.KSEmailCollectionWidget.GetPrepopulatedEmail
struct UKSEmailCollectionWidget_GetPrepopulatedEmail_Params
{
	struct FText                                       ReturnValue;                                               // 0x0000(0x0018)  (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
};

// Function KillstreakUINew.KSEmailCollectionWidget.GetEULAText
struct UKSEmailCollectionWidget_GetEULAText_Params
{
	struct FText                                       ReturnValue;                                               // 0x0000(0x0018)  (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
};

// Function KillstreakUINew.KSEmailCollectionWidget.DismissPopup
struct UKSEmailCollectionWidget_DismissPopup_Params
{
};

// Function KillstreakUINew.KSEMODataFactory.SetupTestData
struct UKSEMODataFactory_SetupTestData_Params
{
	int                                                PlayerXp;                                                  // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                RankedXp;                                                  // 0x0004(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                RogueXp;                                                   // 0x0008(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                ReputationEarned;                                          // 0x000C(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                PlacementMatchNum;                                         // 0x0010(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                BattlePassXp;                                              // 0x0014(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                WeaponMasteryCount;                                        // 0x0018(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                WeaponMasteryLevels;                                       // 0x001C(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               CategoryMasteryCanLevel;                                   // 0x0020(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                MilestonesPerWeapon;                                       // 0x0024(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                BonusPoints;                                               // 0x0028(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function KillstreakUINew.KSEMODataFactory.IsLocalPlayer
struct UKSEMODataFactory_IsLocalPlayer_Params
{
	int64_t                                            PlayerId;                                                  // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               ReturnValue;                                               // 0x0008(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function KillstreakUINew.KSEMODataFactory.HandlePlayerRewardsEventTokens
struct UKSEMODataFactory_HandlePlayerRewardsEventTokens_Params
{
};

// Function KillstreakUINew.KSEMODataFactory.HandlePlayerRewards
struct UKSEMODataFactory_HandlePlayerRewards_Params
{
	struct FPlayerRewardsSummary                       PlayerRewardSummary;                                       // 0x0000(0x0060)  (Parm, NativeAccessSpecifierPublic)
	bool                                               bFakeTestData;                                             // 0x0060(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function KillstreakUINew.KSEMODataFactory.HandleEOMDetail
struct UKSEMODataFactory_HandleEOMDetail_Params
{
};

// Function KillstreakUINew.KSEMODataFactory.GetScoreboardStats
struct UKSEMODataFactory_GetScoreboardStats_Params
{
	struct FScoreboardStats                            ReturnValue;                                               // 0x0000(0x0050)  (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
};

// Function KillstreakUINew.KSEMODataFactory.GetPlayerRewardsSummary
struct UKSEMODataFactory_GetPlayerRewardsSummary_Params
{
	struct FPlayerRewardsSummary                       ReturnValue;                                               // 0x0000(0x0060)  (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
};

// Function KillstreakUINew.KSEMODataFactory.GetLastMatchQueueId
struct UKSEMODataFactory_GetLastMatchQueueId_Params
{
	int                                                ReturnValue;                                               // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function KillstreakUINew.KSEMODataFactory.FindReputationProgressionActivity
struct UKSEMODataFactory_FindReputationProgressionActivity_Params
{
	class UKSActivityInstance*                         ReputationProgressionActivity;                             // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               ReturnValue;                                               // 0x0008(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function KillstreakUINew.KSEMODataFactory.FindRankedProgressionActivity
struct UKSEMODataFactory_FindRankedProgressionActivity_Params
{
	class UKSActivityInstance*                         RankedProgressionActivity;                                 // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               ReturnValue;                                               // 0x0008(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function KillstreakUINew.KSEMODataFactory.FindPlayerXpProgressionActivity
struct UKSEMODataFactory_FindPlayerXpProgressionActivity_Params
{
	class UKSActivityInstance*                         PlayerXpProgressionActivity;                               // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               ReturnValue;                                               // 0x0008(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function KillstreakUINew.KSEMODataFactory.FindMiniBattlePassProgressionActivity
struct UKSEMODataFactory_FindMiniBattlePassProgressionActivity_Params
{
	class UKSActivityInstance*                         MiniBattlePassProgressionActivity;                         // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               ReturnValue;                                               // 0x0008(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function KillstreakUINew.KSEMODataFactory.FindBattlePassProgressionActivity
struct UKSEMODataFactory_FindBattlePassProgressionActivity_Params
{
	class UKSActivityInstance*                         BattlePassProgressionActivity;                             // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               ReturnValue;                                               // 0x0008(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function KillstreakUINew.KSEMODataFactory.ComputeEOMResults
struct UKSEMODataFactory_ComputeEOMResults_Params
{
};

// Function KillstreakUINew.KSEquipAllWidget.OnEquipAll
struct UKSEquipAllWidget_OnEquipAll_Params
{
};

// Function KillstreakUINew.KSEquipAllWidget.CancelEquipAll
struct UKSEquipAllWidget_CancelEquipAll_Params
{
};

// Function KillstreakUINew.KSExpDisplayWidget.QueueExpDisplays
struct UKSExpDisplayWidget_QueueExpDisplays_Params
{
	struct FExpDisplayInfo                             ExpInfo;                                                   // 0x0000(0x0028)  (Parm, NativeAccessSpecifierPublic)
};

// Function KillstreakUINew.KSExpDisplayWidget.NativeHandleDisplayExpInfo
struct UKSExpDisplayWidget_NativeHandleDisplayExpInfo_Params
{
};

// Function KillstreakUINew.KSExpDisplayWidget.GetNextExpDisplay
struct UKSExpDisplayWidget_GetNextExpDisplay_Params
{
	struct FExpDisplayInfo                             ExpInfo;                                                   // 0x0000(0x0028)  (Parm, OutParm, NativeAccessSpecifierPublic)
	bool                                               ReturnValue;                                               // 0x0028(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function KillstreakUINew.KSExpDisplayWidget.DisplayExpInfo
struct UKSExpDisplayWidget_DisplayExpInfo_Params
{
};

// Function KillstreakUINew.KSFloatTickLerpWidgetBase.SetTargetValue
struct UKSFloatTickLerpWidgetBase_SetTargetValue_Params
{
	float                                              Value;                                                     // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function KillstreakUINew.KSFloatTickLerpWidgetBase.SetLerpTime
struct UKSFloatTickLerpWidgetBase_SetLerpTime_Params
{
	float                                              Time;                                                      // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function KillstreakUINew.KSFloatTickLerpWidgetBase.SetLerpPower
struct UKSFloatTickLerpWidgetBase_SetLerpPower_Params
{
	float                                              Power;                                                     // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function KillstreakUINew.KSFloatTickLerpWidgetBase.IsLerping
struct UKSFloatTickLerpWidgetBase_IsLerping_Params
{
	bool                                               ReturnValue;                                               // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function KillstreakUINew.KSFloatTickLerpWidgetBase.GetCurrentValue
struct UKSFloatTickLerpWidgetBase_GetCurrentValue_Params
{
	float                                              ReturnValue;                                               // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function KillstreakUINew.KSFloatTickLerpWidgetBase.ForceCurrentValue
struct UKSFloatTickLerpWidgetBase_ForceCurrentValue_Params
{
	float                                              Value;                                                     // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function KillstreakUINew.KSFloatTickLerpWidgetBase.DisplayForValue
struct UKSFloatTickLerpWidgetBase_DisplayForValue_Params
{
	float                                              Value;                                                     // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function KillstreakUINew.KSFriendDataFactory.OnEOMRewardsReceived
struct UKSFriendDataFactory_OnEOMRewardsReceived_Params
{
	struct FPlayerRewardsSummary                       PlayerRewardsSummary;                                      // 0x0000(0x0060)  (Parm, NativeAccessSpecifierPublic)
	struct FScoreboardStats                            ScoreboardStats;                                           // 0x0060(0x0050)  (Parm, NativeAccessSpecifierPublic)
};

// DelegateFunction KillstreakUINew.KSFriendDataFactory.KSUpdateRecentlyPlayedPlayers__DelegateSignature
struct UKSFriendDataFactory_KSUpdateRecentlyPlayedPlayers__DelegateSignature_Params
{
	class UKSFriendDataFactory*                        Source;                                                    // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function KillstreakUINew.KSFriendDataFactory.GetSuggestedFriends_Info
struct UKSFriendDataFactory_GetSuggestedFriends_Info_Params
{
	TArray<class UPUMG_PlayerInfo*>                    ReturnValue;                                               // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function KillstreakUINew.KSFriendDataFactory.GetPlayersPlayedWithThisClientSession_Info
struct UKSFriendDataFactory_GetPlayersPlayedWithThisClientSession_Info_Params
{
	TArray<class UKSPlayerInfo*>                       ReturnValue;                                               // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function KillstreakUINew.KSFriendDataFactory.GetPendingFriends_Info
struct UKSFriendDataFactory_GetPendingFriends_Info_Params
{
	TArray<class UPUMG_PlayerInfo*>                    ReturnValue;                                               // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function KillstreakUINew.KSFriendDataFactory.GetOnlineFriends_Info
struct UKSFriendDataFactory_GetOnlineFriends_Info_Params
{
	TArray<class UPUMG_PlayerInfo*>                    ReturnValue;                                               // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function KillstreakUINew.KSFriendDataFactory.GetFriends_Info
struct UKSFriendDataFactory_GetFriends_Info_Params
{
	TArray<class UPUMG_PlayerInfo*>                    ReturnValue;                                               // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function KillstreakUINew.KSFriendDataFactory.GetFriendRequests_Info
struct UKSFriendDataFactory_GetFriendRequests_Info_Params
{
	TArray<class UPUMG_PlayerInfo*>                    ReturnValue;                                               // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function KillstreakUINew.KSFubarPopupWidget.ReceiveFubar
struct UKSFubarPopupWidget_ReceiveFubar_Params
{
	Killstreak_EFubarDisplayReason                     Reason;                                                    // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function KillstreakUINew.KSFubarPopupWidget.GetSecondsToShutdown
struct UKSFubarPopupWidget_GetSecondsToShutdown_Params
{
	int                                                ReturnValue;                                               // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function KillstreakUINew.KSFubarPopupWidget.DisplayFubar
struct UKSFubarPopupWidget_DisplayFubar_Params
{
	Killstreak_EFubarDisplayReason                     Reason;                                                    // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function KillstreakUINew.KSMapWidgetBase.UpdateIcon
struct UKSMapWidgetBase_UpdateIcon_Params
{
	class UKSMapIconWidgetBase*                        Icon;                                                      // 0x0000(0x0008)  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function KillstreakUINew.KSMapWidgetBase.ToIconRenderCoords
struct UKSMapWidgetBase_ToIconRenderCoords_Params
{
	struct FVector2D                                   MapCoords;                                                 // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector2D                                   ReturnValue;                                               // 0x0008(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function KillstreakUINew.KSMapWidgetBase.ToIconRenderAngle
struct UKSMapWidgetBase_ToIconRenderAngle_Params
{
	float                                              PlayerAngle;                                               // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              ReturnValue;                                               // 0x0004(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function KillstreakUINew.KSMapWidgetBase.TickCachedTransform
struct UKSMapWidgetBase_TickCachedTransform_Params
{
};

// Function KillstreakUINew.KSMapWidgetBase.SetScrambleState
struct UKSMapWidgetBase_SetScrambleState_Params
{
	bool                                               Scrambled;                                                 // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function KillstreakUINew.KSMapWidgetBase.RemoveWidgetFromLoaderById
struct UKSMapWidgetBase_RemoveWidgetFromLoaderById_Params
{
	int                                                InId;                                                      // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function KillstreakUINew.KSMapWidgetBase.OnScrambleStateChanged
struct UKSMapWidgetBase_OnScrambleStateChanged_Params
{
	bool                                               Scrambled;                                                 // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function KillstreakUINew.KSMapWidgetBase.OnReceiveDisplayWidgetInfo
struct UKSMapWidgetBase_OnReceiveDisplayWidgetInfo_Params
{
	struct FDisplayInfo                                DisplayInfo;                                               // 0x0000(0x00A0)  (Parm, NativeAccessSpecifierPublic)
};

// Function KillstreakUINew.KSMapWidgetBase.OnGameStateSet
struct UKSMapWidgetBase_OnGameStateSet_Params
{
	class AGameStateBase*                              GameStateBase;                                             // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function KillstreakUINew.KSMapWidgetBase.IsOnMap
struct UKSMapWidgetBase_IsOnMap_Params
{
	struct FVector2D                                   MapCoords;                                                 // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               ReturnValue;                                               // 0x0008(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function KillstreakUINew.KSMapWidgetBase.HandleMoveToWidgetPool
struct UKSMapWidgetBase_HandleMoveToWidgetPool_Params
{
	class UKSMapIconWidgetBase*                        MapIconWidget;                                             // 0x0000(0x0008)  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function KillstreakUINew.KSMapWidgetBase.HandleDisplayFromWidgetPool
struct UKSMapWidgetBase_HandleDisplayFromWidgetPool_Params
{
	class UKSMapIconWidgetBase*                        MapIconWidget;                                             // 0x0000(0x0008)  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FDisplayInfo                                DisplayInfo;                                               // 0x0008(0x00A0)  (Parm, NativeAccessSpecifierPublic)
};

// Function KillstreakUINew.KSMapWidgetBase.GrabMapIconWidget
struct UKSMapWidgetBase_GrabMapIconWidget_Params
{
	struct FString                                     WidgetPoolName;                                            // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UKSMapIconWidgetBase*                        ReturnValue;                                               // 0x0010(0x0008)  (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function KillstreakUINew.KSMapWidgetBase.GetDistanceToIcon
struct UKSMapWidgetBase_GetDistanceToIcon_Params
{
	class UKSMapIconWidgetBase*                        Icon;                                                      // 0x0000(0x0008)  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              ReturnValue;                                               // 0x0008(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function KillstreakUINew.KSMapWidgetBase.GetCachedViewedPawn
struct UKSMapWidgetBase_GetCachedViewedPawn_Params
{
	class APawn*                                       ReturnValue;                                               // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function KillstreakUINew.KSMapWidgetBase.GetCachedTransform
struct UKSMapWidgetBase_GetCachedTransform_Params
{
	struct FTransform                                  ReturnValue;                                               // 0x0000(0x0030)  (Parm, OutParm, ReturnParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
};

// Function KillstreakUINew.KSMapWidgetBase.DisplayToMapWidget
struct UKSMapWidgetBase_DisplayToMapWidget_Params
{
	class UKSMapIconWidgetBase*                        MapIcon;                                                   // 0x0000(0x0008)  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function KillstreakUINew.KSMapWidgetBase.CreateNewIconWidget
struct UKSMapWidgetBase_CreateNewIconWidget_Params
{
	class UClass*                                      WidgetClass;                                               // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                UniqueId;                                                  // 0x0008(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class AKSPlayerState*                              CreatingPlayer;                                            // 0x0010(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	Killstreak_EDisplayType                            ParentMapDisplayType;                                      // 0x0018(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class AActor*                                      AssociatedActor;                                           // 0x0020(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UObject*                                     AssociatedObject;                                          // 0x0028(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                                     DefaultLocation;                                           // 0x0030(0x000C)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              Lifespan;                                                  // 0x003C(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UKSMapIconWidgetBase*                        ReturnValue;                                               // 0x0040(0x0008)  (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function KillstreakUINew.KSMapWidgetBase.CreateMapIconWidgetPool
struct UKSMapWidgetBase_CreateMapIconWidgetPool_Params
{
	struct FMapIconWidgetConfig                        MapIconWidgetConfig;                                       // 0x0000(0x0048)  (Parm, NativeAccessSpecifierPublic)
};

// Function KillstreakUINew.KSHUDCommon.UIX_ReportServer
struct AKSHUDCommon_UIX_ReportServer_Params
{
};

// Function KillstreakUINew.KSHUDCommon.TestChallengeNotification
struct AKSHUDCommon_TestChallengeNotification_Params
{
};

// Function KillstreakUINew.KSHUDCommon.ShowErrorPopup
struct AKSHUDCommon_ShowErrorPopup_Params
{
	struct FText                                       ErrorMsg;                                                  // 0x0000(0x0018)  (Parm, NativeAccessSpecifierPublic)
};

// Function KillstreakUINew.KSHUDCommon.ShouldShowCrossplayIconForPlayerState
struct AKSHUDCommon_ShouldShowCrossplayIconForPlayerState_Params
{
	class AKSPlayerState*                              PlayerState;                                               // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               ReturnValue;                                               // 0x0008(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function KillstreakUINew.KSHUDCommon.ShouldShowCrossplayIconForPlayer
struct AKSHUDCommon_ShouldShowCrossplayIconForPlayer_Params
{
	int64_t                                            PlayerId;                                                  // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               ReturnValue;                                               // 0x0008(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function KillstreakUINew.KSHUDCommon.SetPreferredSiteId
struct AKSHUDCommon_SetPreferredSiteId_Params
{
	int                                                SiteId;                                                    // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function KillstreakUINew.KSHUDCommon.PrintToLog
struct AKSHUDCommon_PrintToLog_Params
{
	struct FText                                       InText;                                                    // 0x0000(0x0018)  (Parm, NativeAccessSpecifierPublic)
};

// Function KillstreakUINew.KSHUDCommon.OpenTextChatToPlayer
struct AKSHUDCommon_OpenTextChatToPlayer_Params
{
	class UPUMG_PlayerInfo*                            Player;                                                    // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function KillstreakUINew.KSHUDCommon.OnInvalidVoucherAcquisition
struct AKSHUDCommon_OnInvalidVoucherAcquisition_Params
{
	class UPUMG_StoreItem*                             StoreItem;                                                 // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function KillstreakUINew.KSHUDCommon.MutePlayer
struct AKSHUDCommon_MutePlayer_Params
{
	int64_t                                            PlayerId;                                                  // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               Mute;                                                      // 0x0008(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               ReturnValue;                                               // 0x0009(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function KillstreakUINew.KSHUDCommon.LogErrorMessage
struct AKSHUDCommon_LogErrorMessage_Params
{
	struct FText                                       ErrorMsg;                                                  // 0x0000(0x0018)  (Parm, NativeAccessSpecifierPublic)
};

// Function KillstreakUINew.KSHUDCommon.IsSamePortalAsLocalPlayer
struct AKSHUDCommon_IsSamePortalAsLocalPlayer_Params
{
	int64_t                                            PlayerId;                                                  // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               ReturnValue;                                               // 0x0008(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function KillstreakUINew.KSHUDCommon.IsMuted
struct AKSHUDCommon_IsMuted_Params
{
	int64_t                                            PlayerId;                                                  // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               ReturnValue;                                               // 0x0008(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function KillstreakUINew.KSHUDCommon.HandleOpenTextChat
struct AKSHUDCommon_HandleOpenTextChat_Params
{
	bool                                               BeginChatCommand;                                          // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function KillstreakUINew.KSHUDCommon.HandleControllerDisconnect
struct AKSHUDCommon_HandleControllerDisconnect_Params
{
};

// Function KillstreakUINew.KSHUDCommon.GetUISessionManager
struct AKSHUDCommon_GetUISessionManager_Params
{
	class UKSUISessionManager*                         ReturnValue;                                               // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function KillstreakUINew.KSHUDCommon.GetSiteList
struct AKSHUDCommon_GetSiteList_Params
{
	TMap<int, struct FText>                            OutSiteIdToNameMap;                                        // 0x0000(0x0050)  (Parm, OutParm, NativeAccessSpecifierPublic)
};

// Function KillstreakUINew.KSHUDCommon.GetSettingsDataFactory
struct AKSHUDCommon_GetSettingsDataFactory_Params
{
	class UKSSettingsDataFactory*                      ReturnValue;                                               // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function KillstreakUINew.KSHUDCommon.GetPreferredSiteId
struct AKSHUDCommon_GetPreferredSiteId_Params
{
	int                                                OutSiteId;                                                 // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               ReturnValue;                                               // 0x0004(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function KillstreakUINew.KSHUDCommon.GetPlayerDataFactory
struct AKSHUDCommon_GetPlayerDataFactory_Params
{
	class UKSPlayerDataFactory*                        ReturnValue;                                               // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function KillstreakUINew.KSHUDCommon.GetPartyDataFactory
struct AKSHUDCommon_GetPartyDataFactory_Params
{
	class UKSPartyDataFactory*                         ReturnValue;                                               // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function KillstreakUINew.KSHUDCommon.GetNPEDataFactory
struct AKSHUDCommon_GetNPEDataFactory_Params
{
	class UKSNPEDataFactory*                           ReturnValue;                                               // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function KillstreakUINew.KSHUDCommon.GetMercManager
struct AKSHUDCommon_GetMercManager_Params
{
	class UKSMercManager*                              ReturnValue;                                               // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function KillstreakUINew.KSHUDCommon.GetLoginDataFactory
struct AKSHUDCommon_GetLoginDataFactory_Params
{
	class UPUMG_LoginDataFactory*                      ReturnValue;                                               // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function KillstreakUINew.KSHUDCommon.GetLoadoutDataFactory
struct AKSHUDCommon_GetLoadoutDataFactory_Params
{
	class UKSLoadoutDataFactory*                       ReturnValue;                                               // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function KillstreakUINew.KSHUDCommon.GetItemHelper
struct AKSHUDCommon_GetItemHelper_Params
{
	class UKSStoreItemHelper*                          ReturnValue;                                               // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function KillstreakUINew.KSHUDCommon.GetFont
struct AKSHUDCommon_GetFont_Params
{
	struct FName                                       FontName;                                                  // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FSlateFontInfo                              ReturnFont;                                                // 0x0008(0x0050)  (Parm, OutParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               ReturnValue;                                               // 0x0058(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function KillstreakUINew.KSHUDCommon.GetFocusableWidgetContainers
struct AKSHUDCommon_GetFocusableWidgetContainers_Params
{
	TArray<class UPanelWidget*>                        ReturnValue;                                               // 0x0000(0x0010)  (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, ContainsInstancedReference, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function KillstreakUINew.KSHUDCommon.GetContextBarWidget
struct AKSHUDCommon_GetContextBarWidget_Params
{
	class UKSContextBarWidget*                         ReturnValue;                                               // 0x0000(0x0008)  (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function KillstreakUINew.KSHUDCommon.GetColor
struct AKSHUDCommon_GetColor_Params
{
	struct FName                                       ColorName;                                                 // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FLinearColor                                ReturnColor;                                               // 0x0008(0x0010)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               ReturnValue;                                               // 0x0018(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function KillstreakUINew.KSHUDCommon.GetChatDataFactory
struct AKSHUDCommon_GetChatDataFactory_Params
{
	class UKSChatDataFactory*                          ReturnValue;                                               // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function KillstreakUINew.KSHUDCommon.GetAcquisitionManager
struct AKSHUDCommon_GetAcquisitionManager_Params
{
	class UKSAcquisitionManager*                       ReturnValue;                                               // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function KillstreakUINew.KSHUDCommon.EvaluateFocus
struct AKSHUDCommon_EvaluateFocus_Params
{
};

// Function KillstreakUINew.KSHUDCommon.DisplayWatermark
struct AKSHUDCommon_DisplayWatermark_Params
{
};

// Function KillstreakUINew.KSHUDCommon.ConfirmReportServer
struct AKSHUDCommon_ConfirmReportServer_Params
{
};

// Function KillstreakUINew.KSHUDCommon.ApplySafeFrameScale
struct AKSHUDCommon_ApplySafeFrameScale_Params
{
	float                                              SafeFrameScale;                                            // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function KillstreakUINew.KSGameHUDNew.UIX_ReturnLobby
struct AKSGameHUDNew_UIX_ReturnLobby_Params
{
};

// Function KillstreakUINew.KSGameHUDNew.ToggleAimAssistDebug
struct AKSGameHUDNew_ToggleAimAssistDebug_Params
{
};

// Function KillstreakUINew.KSGameHUDNew.SetHUDVisible
struct AKSGameHUDNew_SetHUDVisible_Params
{
	bool                                               bVisible;                                                  // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function KillstreakUINew.KSGameHUDNew.ReturnToHome
struct AKSGameHUDNew_ReturnToHome_Params
{
};

// Function KillstreakUINew.KSGameHUDNew.OnViewedPlayerStateModRemoved
struct AKSGameHUDNew_OnViewedPlayerStateModRemoved_Params
{
	class UKSPlayerMod*                                PlayerMod;                                                 // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UKSPlayerModInstance*                        ModInstance;                                               // 0x0008(0x0008)  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function KillstreakUINew.KSGameHUDNew.OnViewedPlayerStateModAdded
struct AKSGameHUDNew_OnViewedPlayerStateModAdded_Params
{
	class UKSPlayerMod*                                PlayerMod;                                                 // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UKSPlayerModInstance*                        ModInstance;                                               // 0x0008(0x0008)  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function KillstreakUINew.KSGameHUDNew.OnViewedPawnChanged
struct AKSGameHUDNew_OnViewedPawnChanged_Params
{
	class AKSPlayerController*                         Controller;                                                // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class AActor*                                      OldViewTarget;                                             // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class AActor*                                      NewViewTarget;                                             // 0x0010(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function KillstreakUINew.KSGameHUDNew.OnToggleHUD
struct AKSGameHUDNew_OnToggleHUD_Params
{
};

// Function KillstreakUINew.KSGameHUDNew.OnAssetDataTableManagerChanged
struct AKSGameHUDNew_OnAssetDataTableManagerChanged_Params
{
};

// Function KillstreakUINew.KSGameHUDNew.NetworkLagStateChanged
struct AKSGameHUDNew_NetworkLagStateChanged_Params
{
	class UWorld*                                      World;                                                     // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UNetDriver*                                  NetDriver;                                                 // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TEnumAsByte<Engine_ENetworkLagState>               LagType;                                                   // 0x0010(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function KillstreakUINew.KSGameHUDNew.IsPlayerMuted
struct AKSGameHUDNew_IsPlayerMuted_Params
{
	class AKSPlayerState*                              KSPlayerState;                                             // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               ReturnValue;                                               // 0x0008(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function KillstreakUINew.KSGameHUDNew.IsPlayerInVoiceChannel
struct AKSGameHUDNew_IsPlayerInVoiceChannel_Params
{
	class AKSPlayerState*                              KSPlayerState;                                             // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               ReturnValue;                                               // 0x0008(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function KillstreakUINew.KSGameHUDNew.HandleLoginStateChange
struct AKSGameHUDNew_HandleLoginStateChange_Params
{
	PlatformUMG_EPUMG_LoginState                       LoginState;                                                // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function KillstreakUINew.KSGameHUDNew.HandleFubar
struct AKSGameHUDNew_HandleFubar_Params
{
	Killstreak_EFubarDisplayReason                     Reason;                                                    // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function KillstreakUINew.KSGameHUDNew.GetHUDStateTracker
struct AKSGameHUDNew_GetHUDStateTracker_Params
{
	class UKSHUDStateTracker*                          ReturnValue;                                               // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function KillstreakUINew.KSGameInfoOverlayBase.ToggleTopHUDBar
struct UKSGameInfoOverlayBase_ToggleTopHUDBar_Params
{
	bool                                               bShow;                                                     // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function KillstreakUINew.KSGameInfoOverlayBase.OnHeaderChanged
struct UKSGameInfoOverlayBase_OnHeaderChanged_Params
{
	struct FText                                       Header;                                                    // 0x0000(0x0018)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
};

// Function KillstreakUINew.KSGameInfoOverlayBase.HandlePlayerStateReady
struct UKSGameInfoOverlayBase_HandlePlayerStateReady_Params
{
	class AKSPlayerState*                              PlayerState;                                               // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function KillstreakUINew.KSGamepadPromptWidget.SetContext
struct UKSGamepadPromptWidget_SetContext_Params
{
	struct FButtonPromptContext                        PromptContext;                                             // 0x0000(0x0010)  (Parm, NativeAccessSpecifierPublic)
};

// Function KillstreakUINew.KSGamepadPromptWidget.PushContext
struct UKSGamepadPromptWidget_PushContext_Params
{
	struct FButtonPromptContext                        PromptContext;                                             // 0x0000(0x0010)  (Parm, NativeAccessSpecifierPublic)
};

// Function KillstreakUINew.KSGamepadPromptWidget.PopContext
struct UKSGamepadPromptWidget_PopContext_Params
{
	struct FButtonPromptContext                        OutContext;                                                // 0x0000(0x0010)  (Parm, OutParm, NativeAccessSpecifierPublic)
	bool                                               ReturnValue;                                               // 0x0010(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function KillstreakUINew.KSGamepadPromptWidget.ClearAllContext
struct UKSGamepadPromptWidget_ClearAllContext_Params
{
};

// Function KillstreakUINew.KSGamepadPromptWidget.ApplyContext
struct UKSGamepadPromptWidget_ApplyContext_Params
{
	struct FButtonPromptContext                        Context;                                                   // 0x0000(0x0010)  (Parm, NativeAccessSpecifierPublic)
};

// Function KillstreakUINew.KSHealthWidget.OverhealChangeFromChar
struct UKSHealthWidget_OverhealChangeFromChar_Params
{
	class AKSCharacterBase*                            Character;                                                 // 0x0000(0x0008)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bAnimatedChange;                                           // 0x0008(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function KillstreakUINew.KSHealthWidget.OnOverhealChanged
struct UKSHealthWidget_OnOverhealChanged_Params
{
	float                                              OldOverheal;                                               // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              NewOverheal;                                               // 0x0004(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bAnimatedChange;                                           // 0x0008(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function KillstreakUINew.KSHealthWidget.OnHealthChanged
struct UKSHealthWidget_OnHealthChanged_Params
{
	float                                              OldHealth;                                                 // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              OldMaxHealth;                                              // 0x0004(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              NewHealth;                                                 // 0x0008(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              NewMaxHealth;                                              // 0x000C(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bAnimatedChange;                                           // 0x0010(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function KillstreakUINew.KSHealthWidget.OnArmorChanged
struct UKSHealthWidget_OnArmorChanged_Params
{
	float                                              OldArmor;                                                  // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              NewArmor;                                                  // 0x0004(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function KillstreakUINew.KSHealthWidget.HealthChangeFromChar
struct UKSHealthWidget_HealthChangeFromChar_Params
{
	class AKSCharacterBase*                            Character;                                                 // 0x0000(0x0008)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bAnimatedChange;                                           // 0x0008(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function KillstreakUINew.KSHealthWidget.HandlePawnOverhealChange
struct UKSHealthWidget_HandlePawnOverhealChange_Params
{
	class AKSCharacterBase*                            Character;                                                 // 0x0000(0x0008)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function KillstreakUINew.KSHealthWidget.HandlePawnHealthChange
struct UKSHealthWidget_HandlePawnHealthChange_Params
{
	class AKSCharacterBase*                            Character;                                                 // 0x0000(0x0008)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function KillstreakUINew.KSHudEditableWidget.HandleLayoutSaved
struct UKSHudEditableWidget_HandleLayoutSaved_Params
{
};

// Function KillstreakUINew.KSSettingsInfoBase.UpdateTextOptions
struct UKSSettingsInfoBase_UpdateTextOptions_Params
{
	TArray<struct FText>                               NewOptions;                                                // 0x0000(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function KillstreakUINew.KSSettingsInfoBase.SetPreviewValueInt
struct UKSSettingsInfoBase_SetPreviewValueInt_Params
{
	int                                                inInt;                                                     // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               ReturnValue;                                               // 0x0004(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function KillstreakUINew.KSSettingsInfoBase.SetPreviewValueFloat
struct UKSSettingsInfoBase_SetPreviewValueFloat_Params
{
	float                                              InFloat;                                                   // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               ReturnValue;                                               // 0x0004(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function KillstreakUINew.KSSettingsInfoBase.SetPreviewValueBool
struct UKSSettingsInfoBase_SetPreviewValueBool_Params
{
	bool                                               InBool;                                                    // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               ReturnValue;                                               // 0x0001(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function KillstreakUINew.KSSettingsInfoBase.SetDesiredValueKeyBind
struct UKSSettingsInfoBase_SetDesiredValueKeyBind_Params
{
	struct FKSKeyBind                                  InKeyBind;                                                 // 0x0000(0x0078)  (Parm, NativeAccessSpecifierPublic)
	bool                                               ReturnValue;                                               // 0x0078(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function KillstreakUINew.KSSettingsInfoBase.SetDesiredValueInt
struct UKSSettingsInfoBase_SetDesiredValueInt_Params
{
	int                                                inInt;                                                     // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               ReturnValue;                                               // 0x0004(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function KillstreakUINew.KSSettingsInfoBase.SetDesiredValueFloat
struct UKSSettingsInfoBase_SetDesiredValueFloat_Params
{
	float                                              InFloat;                                                   // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               ReturnValue;                                               // 0x0004(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function KillstreakUINew.KSSettingsInfoBase.SetDesiredValueBool
struct UKSSettingsInfoBase_SetDesiredValueBool_Params
{
	bool                                               InBool;                                                    // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               ReturnValue;                                               // 0x0001(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function KillstreakUINew.KSSettingsInfoBase.SaveKeyBindValue
struct UKSSettingsInfoBase_SaveKeyBindValue_Params
{
	struct FKSKeyBind                                  InKeyBind;                                                 // 0x0000(0x0078)  (Parm, NativeAccessSpecifierPublic)
	bool                                               ReturnValue;                                               // 0x0078(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function KillstreakUINew.KSSettingsInfoBase.SaveIntValue
struct UKSSettingsInfoBase_SaveIntValue_Params
{
	int                                                inInt;                                                     // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               ReturnValue;                                               // 0x0004(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function KillstreakUINew.KSSettingsInfoBase.SaveFloatValue
struct UKSSettingsInfoBase_SaveFloatValue_Params
{
	float                                              InFloat;                                                   // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               ReturnValue;                                               // 0x0004(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function KillstreakUINew.KSSettingsInfoBase.SaveBoolValue
struct UKSSettingsInfoBase_SaveBoolValue_Params
{
	bool                                               InBool;                                                    // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               ReturnValue;                                               // 0x0001(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function KillstreakUINew.KSSettingsInfoBase.Save
struct UKSSettingsInfoBase_Save_Params
{
};

// Function KillstreakUINew.KSSettingsInfoBase.RoundToNearestValueFloat
struct UKSSettingsInfoBase_RoundToNearestValueFloat_Params
{
	float                                              ValueToRound;                                              // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              ReturnValue;                                               // 0x0004(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function KillstreakUINew.KSSettingsInfoBase.RevertSettingToDefault
struct UKSSettingsInfoBase_RevertSettingToDefault_Params
{
};

// Function KillstreakUINew.KSSettingsInfoBase.Revert
struct UKSSettingsInfoBase_Revert_Params
{
};

// Function KillstreakUINew.KSSettingsInfoBase.ResetPreview
struct UKSSettingsInfoBase_ResetPreview_Params
{
};

// Function KillstreakUINew.KSSettingsInfoBase.OnValueKeyBindSaved
struct UKSSettingsInfoBase_OnValueKeyBindSaved_Params
{
	struct FKSKeyBind                                  SavedKeyBind;                                              // 0x0000(0x0078)  (Parm, NativeAccessSpecifierPublic)
};

// Function KillstreakUINew.KSSettingsInfoBase.OnValueKeyBindApplied
struct UKSSettingsInfoBase_OnValueKeyBindApplied_Params
{
	struct FKSKeyBind                                  AppliedKeyBind;                                            // 0x0000(0x0078)  (Parm, NativeAccessSpecifierPublic)
};

// Function KillstreakUINew.KSSettingsInfoBase.OnValueIntSaved
struct UKSSettingsInfoBase_OnValueIntSaved_Params
{
	int                                                SavedInt;                                                  // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function KillstreakUINew.KSSettingsInfoBase.OnValueIntApplied
struct UKSSettingsInfoBase_OnValueIntApplied_Params
{
	int                                                AppliedInt;                                                // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function KillstreakUINew.KSSettingsInfoBase.OnValueFloatSaved
struct UKSSettingsInfoBase_OnValueFloatSaved_Params
{
	float                                              SavedFloat;                                                // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function KillstreakUINew.KSSettingsInfoBase.OnValueFloatApplied
struct UKSSettingsInfoBase_OnValueFloatApplied_Params
{
	float                                              AppliedFloat;                                              // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function KillstreakUINew.KSSettingsInfoBase.OnValueBoolSaved
struct UKSSettingsInfoBase_OnValueBoolSaved_Params
{
	bool                                               SavedBool;                                                 // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function KillstreakUINew.KSSettingsInfoBase.OnValueBoolApplied
struct UKSSettingsInfoBase_OnValueBoolApplied_Params
{
	bool                                               AppliedBool;                                               // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function KillstreakUINew.KSSettingsInfoBase.IsValidValueKeyBind
struct UKSSettingsInfoBase_IsValidValueKeyBind_Params
{
	struct FKSKeyBind                                  InKey;                                                     // 0x0000(0x0078)  (Parm, NativeAccessSpecifierPublic)
	bool                                               ReturnValue;                                               // 0x0078(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function KillstreakUINew.KSSettingsInfoBase.IsValidValueInt
struct UKSSettingsInfoBase_IsValidValueInt_Params
{
	int                                                inInt;                                                     // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               ReturnValue;                                               // 0x0004(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function KillstreakUINew.KSSettingsInfoBase.IsValidValueFloat
struct UKSSettingsInfoBase_IsValidValueFloat_Params
{
	float                                              InFloat;                                                   // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               ReturnValue;                                               // 0x0004(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function KillstreakUINew.KSSettingsInfoBase.IsValidValueBool
struct UKSSettingsInfoBase_IsValidValueBool_Params
{
	bool                                               InBool;                                                    // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               ReturnValue;                                               // 0x0001(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function KillstreakUINew.KSSettingsInfoBase.IsDirty
struct UKSSettingsInfoBase_IsDirty_Params
{
	bool                                               ReturnValue;                                               // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function KillstreakUINew.KSSettingsInfoBase.InitializeValue
struct UKSSettingsInfoBase_InitializeValue_Params
{
};

// Function KillstreakUINew.KSSettingsInfoBase.GetValueKeyBind
struct UKSSettingsInfoBase_GetValueKeyBind_Params
{
	struct FKSKeyBind                                  ReturnValue;                                               // 0x0000(0x0078)  (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
};

// Function KillstreakUINew.KSSettingsInfoBase.GetValueInt
struct UKSSettingsInfoBase_GetValueInt_Params
{
	int                                                ReturnValue;                                               // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function KillstreakUINew.KSSettingsInfoBase.GetValueFloat
struct UKSSettingsInfoBase_GetValueFloat_Params
{
	float                                              ReturnValue;                                               // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function KillstreakUINew.KSSettingsInfoBase.GetValueBool
struct UKSSettingsInfoBase_GetValueBool_Params
{
	bool                                               ReturnValue;                                               // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function KillstreakUINew.KSSettingsInfoBase.GetTextOptions
struct UKSSettingsInfoBase_GetTextOptions_Params
{
	TArray<struct FText>                               ReturnValue;                                               // 0x0000(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function KillstreakUINew.KSSettingsInfoBase.GetTextOption
struct UKSSettingsInfoBase_GetTextOption_Params
{
	int                                                Index;                                                     // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FText                                       ReturnValue;                                               // 0x0008(0x0018)  (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
};

// Function KillstreakUINew.KSSettingsInfoBase.GetStep
struct UKSSettingsInfoBase_GetStep_Params
{
	float                                              ReturnValue;                                               // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function KillstreakUINew.KSSettingsInfoBase.GetSettingType
struct UKSSettingsInfoBase_GetSettingType_Params
{
	KillstreakUINew_EKSSettingType                     ReturnValue;                                               // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function KillstreakUINew.KSSettingsInfoBase.GetRoundToNearest
struct UKSSettingsInfoBase_GetRoundToNearest_Params
{
	float                                              ReturnValue;                                               // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function KillstreakUINew.KSSettingsInfoBase.GetRound
struct UKSSettingsInfoBase_GetRound_Params
{
	bool                                               ReturnValue;                                               // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function KillstreakUINew.KSSettingsInfoBase.GetPreviewValueInt
struct UKSSettingsInfoBase_GetPreviewValueInt_Params
{
	int                                                ReturnValue;                                               // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function KillstreakUINew.KSSettingsInfoBase.GetPreviewValueFloat
struct UKSSettingsInfoBase_GetPreviewValueFloat_Params
{
	float                                              ReturnValue;                                               // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function KillstreakUINew.KSSettingsInfoBase.GetPreviewValueBool
struct UKSSettingsInfoBase_GetPreviewValueBool_Params
{
	bool                                               ReturnValue;                                               // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function KillstreakUINew.KSSettingsInfoBase.GetNumTextOptions
struct UKSSettingsInfoBase_GetNumTextOptions_Params
{
	int                                                ReturnValue;                                               // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function KillstreakUINew.KSSettingsInfoBase.GetMin
struct UKSSettingsInfoBase_GetMin_Params
{
	float                                              ReturnValue;                                               // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function KillstreakUINew.KSSettingsInfoBase.GetMax
struct UKSSettingsInfoBase_GetMax_Params
{
	float                                              ReturnValue;                                               // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function KillstreakUINew.KSSettingsInfoBase.GetKSHUD
struct UKSSettingsInfoBase_GetKSHUD_Params
{
	class AKSHUDCommon*                                ReturnValue;                                               // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function KillstreakUINew.KSSettingsInfoBase.GetIsPercent
struct UKSSettingsInfoBase_GetIsPercent_Params
{
	bool                                               ReturnValue;                                               // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function KillstreakUINew.KSSettingsInfoBase.GetDirtyValueKeyBind
struct UKSSettingsInfoBase_GetDirtyValueKeyBind_Params
{
	struct FKSKeyBind                                  ReturnValue;                                               // 0x0000(0x0078)  (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
};

// Function KillstreakUINew.KSSettingsInfoBase.GetDirtyValueInt
struct UKSSettingsInfoBase_GetDirtyValueInt_Params
{
	int                                                ReturnValue;                                               // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function KillstreakUINew.KSSettingsInfoBase.GetDirtyValueFloat
struct UKSSettingsInfoBase_GetDirtyValueFloat_Params
{
	float                                              ReturnValue;                                               // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function KillstreakUINew.KSSettingsInfoBase.GetDirtyValueBool
struct UKSSettingsInfoBase_GetDirtyValueBool_Params
{
	bool                                               ReturnValue;                                               // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function KillstreakUINew.KSSettingsInfoBase.FixupInvalidKeyBind
struct UKSSettingsInfoBase_FixupInvalidKeyBind_Params
{
	struct FKSKeyBind                                  InKey;                                                     // 0x0000(0x0078)  (Parm, NativeAccessSpecifierPublic)
	struct FKSKeyBind                                  ReturnValue;                                               // 0x0078(0x0078)  (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
};

// Function KillstreakUINew.KSSettingsInfoBase.FixupInvalidInt
struct UKSSettingsInfoBase_FixupInvalidInt_Params
{
	int                                                inInt;                                                     // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                ReturnValue;                                               // 0x0004(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function KillstreakUINew.KSSettingsInfoBase.FixupInvalidFloat
struct UKSSettingsInfoBase_FixupInvalidFloat_Params
{
	float                                              InFloat;                                                   // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              ReturnValue;                                               // 0x0004(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function KillstreakUINew.KSSettingsInfoBase.FixupInvalidBool
struct UKSSettingsInfoBase_FixupInvalidBool_Params
{
	bool                                               InBool;                                                    // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               ReturnValue;                                               // 0x0001(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function KillstreakUINew.KSSettingsInfoBase.CanRevert
struct UKSSettingsInfoBase_CanRevert_Params
{
	bool                                               ReturnValue;                                               // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function KillstreakUINew.KSSettingsInfoBase.ApplyPreviewIntValue
struct UKSSettingsInfoBase_ApplyPreviewIntValue_Params
{
	int                                                inInt;                                                     // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               ReturnValue;                                               // 0x0004(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function KillstreakUINew.KSSettingsInfoBase.ApplyPreviewFloatValue
struct UKSSettingsInfoBase_ApplyPreviewFloatValue_Params
{
	float                                              InFloat;                                                   // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               ReturnValue;                                               // 0x0004(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function KillstreakUINew.KSSettingsInfoBase.ApplyPreviewBoolValue
struct UKSSettingsInfoBase_ApplyPreviewBoolValue_Params
{
	bool                                               InBool;                                                    // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               ReturnValue;                                               // 0x0001(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function KillstreakUINew.KSSettingsInfoBase.ApplyPreview
struct UKSSettingsInfoBase_ApplyPreview_Params
{
};

// Function KillstreakUINew.KSSettingsInfoBase.ApplyKeyBindValue
struct UKSSettingsInfoBase_ApplyKeyBindValue_Params
{
	struct FKSKeyBind                                  InKeyBind;                                                 // 0x0000(0x0078)  (Parm, NativeAccessSpecifierPublic)
	bool                                               ReturnValue;                                               // 0x0078(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function KillstreakUINew.KSSettingsInfoBase.ApplyIntValue
struct UKSSettingsInfoBase_ApplyIntValue_Params
{
	int                                                inInt;                                                     // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               ReturnValue;                                               // 0x0004(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function KillstreakUINew.KSSettingsInfoBase.ApplyFloatValue
struct UKSSettingsInfoBase_ApplyFloatValue_Params
{
	float                                              InFloat;                                                   // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               ReturnValue;                                               // 0x0004(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function KillstreakUINew.KSSettingsInfoBase.ApplyBoolValue
struct UKSSettingsInfoBase_ApplyBoolValue_Params
{
	bool                                               InBool;                                                    // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               ReturnValue;                                               // 0x0001(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function KillstreakUINew.KSSettingsInfoBase.Apply
struct UKSSettingsInfoBase_Apply_Params
{
};

// Function KillstreakUINew.KSHudEditorSettingsInfo.SetStepValue
struct UKSHudEditorSettingsInfo_SetStepValue_Params
{
	float                                              InStepValue;                                               // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function KillstreakUINew.KSHudEditorSettingsInfo.SetRoundToNearest
struct UKSHudEditorSettingsInfo_SetRoundToNearest_Params
{
	float                                              InRoundToNearest;                                          // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function KillstreakUINew.KSHudEditorSettingsInfo.SetRound
struct UKSHudEditorSettingsInfo_SetRound_Params
{
	bool                                               bInRoundValue;                                             // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function KillstreakUINew.KSHudEditorSettingsInfo.SetMinValue
struct UKSHudEditorSettingsInfo_SetMinValue_Params
{
	float                                              InMinValue;                                                // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function KillstreakUINew.KSHudEditorSettingsInfo.SetMaxValue
struct UKSHudEditorSettingsInfo_SetMaxValue_Params
{
	float                                              InMaxValue;                                                // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function KillstreakUINew.KSHudEditorSettingsInfo.SetIsPercent
struct UKSHudEditorSettingsInfo_SetIsPercent_Params
{
	bool                                               bInIsPercent;                                              // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function KillstreakUINew.KSHudEditorSettingsInfo.AddTextOption
struct UKSHudEditorSettingsInfo_AddTextOption_Params
{
	struct FText                                       InTextOption;                                              // 0x0000(0x0018)  (Parm, NativeAccessSpecifierPublic)
};

// Function KillstreakUINew.KSEditorPropertiesPanel.SetSelectedHudEditableWidget
struct UKSEditorPropertiesPanel_SetSelectedHudEditableWidget_Params
{
	class UKSHudEditableWidget*                        NewWidget;                                                 // 0x0000(0x0008)  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function KillstreakUINew.KSEditorPropertiesPanel.SetOpacityEditable
struct UKSEditorPropertiesPanel_SetOpacityEditable_Params
{
	class UKSHudEditableWidget*                        HudEditableWidget;                                         // 0x0000(0x0008)  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bIsEditable;                                               // 0x0008(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              NewOpacity;                                                // 0x000C(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function KillstreakUINew.KSEditorPropertiesPanel.SetButtonVisibilityEditable
struct UKSEditorPropertiesPanel_SetButtonVisibilityEditable_Params
{
	class UKSHudEditableWidget*                        HudEditableWidget;                                         // 0x0000(0x0008)  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bIsEditable;                                               // 0x0008(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bNewVisibility;                                            // 0x0009(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function KillstreakUINew.KSEditorPropertiesPanel.SetButtonScaleEditable
struct UKSEditorPropertiesPanel_SetButtonScaleEditable_Params
{
	class UKSHudEditableWidget*                        HudEditableWidget;                                         // 0x0000(0x0008)  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bIsEditable;                                               // 0x0008(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              NewScale;                                                  // 0x000C(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function KillstreakUINew.KSEditorPropertiesPanel.CreateWidgetSettingsInfoForSettingsWidget
struct UKSEditorPropertiesPanel_CreateWidgetSettingsInfoForSettingsWidget_Params
{
	class UKSSettingsWidget*                           InSettingsWidget;                                          // 0x0000(0x0008)  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FName                                       InPropertyName;                                            // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector2D                                   NewInRange;                                                // 0x0010(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector2D                                   NewOutRange;                                               // 0x0018(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bInIsPercent;                                              // 0x0020(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              InMinValue;                                                // 0x0024(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              InMaxValue;                                                // 0x0028(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              InStepValue;                                               // 0x002C(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              InRoundToNearest;                                          // 0x0030(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<struct FText>                               InTextOptions;                                             // 0x0038(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function KillstreakUINew.KSHudEditor.TryToExit
struct UKSHudEditor_TryToExit_Params
{
	bool                                               ReturnValue;                                               // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function KillstreakUINew.KSHudEditor.SaveLayout
struct UKSHudEditor_SaveLayout_Params
{
};

// Function KillstreakUINew.KSHudEditor.RevertToSavedLayout
struct UKSHudEditor_RevertToSavedLayout_Params
{
};

// Function KillstreakUINew.KSHudEditor.RevertToDefaultLayout
struct UKSHudEditor_RevertToDefaultLayout_Params
{
};

// Function KillstreakUINew.KSHudEditorSettings.UpdateHudEditablePosition
struct UKSHudEditorSettings_UpdateHudEditablePosition_Params
{
	class UKSHudEditableWidget*                        InWidget;                                                  // 0x0000(0x0008)  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector2D                                   InAbsolutePosition;                                        // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function KillstreakUINew.KSHudEditorSettings.SaveLayout
struct UKSHudEditorSettings_SaveLayout_Params
{
};

// DelegateFunction KillstreakUINew.KSHudEditorSettings.OnSettingsSaved__DelegateSignature
struct UKSHudEditorSettings_OnSettingsSaved__DelegateSignature_Params
{
};

// Function KillstreakUINew.KSHudEditorSettings.Get
struct UKSHudEditorSettings_Get_Params
{
	class UKSHudEditorSettings*                        ReturnValue;                                               // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function KillstreakUINew.KSHUDStateTracker.PollMatchPhase
struct UKSHUDStateTracker_PollMatchPhase_Params
{
};

// Function KillstreakUINew.KSHUDStateTracker.HandleUpdatedMatchPhase
struct UKSHUDStateTracker_HandleUpdatedMatchPhase_Params
{
	struct FMatchPhase                                 NewPhase;                                                  // 0x0000(0x000C)  (Parm, NoDestructor, NativeAccessSpecifierPublic)
	struct FMatchPhase                                 PreviousPhase;                                             // 0x000C(0x000C)  (Parm, NoDestructor, NativeAccessSpecifierPublic)
};

// Function KillstreakUINew.KSHUDStateTracker.HandleGameStateBeginPlay
struct UKSHUDStateTracker_HandleGameStateBeginPlay_Params
{
	class AKSGameState*                                GameState;                                                 // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function KillstreakUINew.KSInfoActorWidgetInterface.SetInfoActor
struct UKSInfoActorWidgetInterface_SetInfoActor_Params
{
	class AKSWidgetInfoActor*                          InfoActor;                                                 // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               ReturnValue;                                               // 0x0008(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function KillstreakUINew.KSInspectPlayerInterface.UnbindEventFromInspectPlayerChanged
struct UKSInspectPlayerInterface_UnbindEventFromInspectPlayerChanged_Params
{
	struct FScriptDelegate                             Callback;                                                  // 0x0000(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
};

// Function KillstreakUINew.KSInspectPlayerInterface.GetInspectPlayerState
struct UKSInspectPlayerInterface_GetInspectPlayerState_Params
{
	class AKSPlayerState*                              ReturnValue;                                               // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function KillstreakUINew.KSInspectPlayerInterface.BindEventToInspectPlayerChanged
struct UKSInspectPlayerInterface_BindEventToInspectPlayerChanged_Params
{
	struct FScriptDelegate                             Callback;                                                  // 0x0000(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
};

// Function KillstreakUINew.KSJobSelectorWidget.TasksChanged
struct UKSJobSelectorWidget_TasksChanged_Params
{
};

// Function KillstreakUINew.KSJobSelectorWidget.TaskCompleted
struct UKSJobSelectorWidget_TaskCompleted_Params
{
	struct FJobSelectionTask                           CompletedTask;                                             // 0x0000(0x0048)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
};

// Function KillstreakUINew.KSJobSelectorWidget.SetJobSelector
struct UKSJobSelectorWidget_SetJobSelector_Params
{
	class AKSJobSelector*                              InNewSelector;                                             // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function KillstreakUINew.KSJobSelectorWidget.SetBindToTasksChanged
struct UKSJobSelectorWidget_SetBindToTasksChanged_Params
{
	bool                                               bEnable;                                                   // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function KillstreakUINew.KSJobSelectorWidget.SetBindToTaskCompleted
struct UKSJobSelectorWidget_SetBindToTaskCompleted_Params
{
	bool                                               bEnable;                                                   // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function KillstreakUINew.KSJobSelectorWidget.SetBindToPersonalTaskChanged
struct UKSJobSelectorWidget_SetBindToPersonalTaskChanged_Params
{
	bool                                               bEnable;                                                   // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function KillstreakUINew.KSJobSelectorWidget.SetBindToPendingTasksChanged
struct UKSJobSelectorWidget_SetBindToPendingTasksChanged_Params
{
	bool                                               bEnable;                                                   // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function KillstreakUINew.KSJobSelectorWidget.SetBindToEndJobSelection
struct UKSJobSelectorWidget_SetBindToEndJobSelection_Params
{
	bool                                               bEnable;                                                   // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function KillstreakUINew.KSJobSelectorWidget.SetBindToChoicesChanged
struct UKSJobSelectorWidget_SetBindToChoicesChanged_Params
{
	bool                                               bEnable;                                                   // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function KillstreakUINew.KSJobSelectorWidget.SetBindToAllPersonalTasksCompleted
struct UKSJobSelectorWidget_SetBindToAllPersonalTasksCompleted_Params
{
	bool                                               bEnable;                                                   // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function KillstreakUINew.KSJobSelectorWidget.PreClearJobSelector
struct UKSJobSelectorWidget_PreClearJobSelector_Params
{
};

// Function KillstreakUINew.KSJobSelectorWidget.PostSetJobSelector
struct UKSJobSelectorWidget_PostSetJobSelector_Params
{
};

// Function KillstreakUINew.KSJobSelectorWidget.PersonalTaskChanged
struct UKSJobSelectorWidget_PersonalTaskChanged_Params
{
};

// Function KillstreakUINew.KSJobSelectorWidget.PendingTasksChanged
struct UKSJobSelectorWidget_PendingTasksChanged_Params
{
};

// Function KillstreakUINew.KSJobSelectorWidget.OnBoundJobSelectorDestroyed
struct UKSJobSelectorWidget_OnBoundJobSelectorDestroyed_Params
{
	class AActor*                                      DestroyedActor;                                            // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function KillstreakUINew.KSJobSelectorWidget.JobSelectorAddedToOwner
struct UKSJobSelectorWidget_JobSelectorAddedToOwner_Params
{
	class AKSJobSelector*                              NewSelector;                                               // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function KillstreakUINew.KSJobSelectorWidget.GetJobSelector
struct UKSJobSelectorWidget_GetJobSelector_Params
{
	class AKSJobSelector*                              ReturnValue;                                               // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function KillstreakUINew.KSJobSelectorWidget.EndJobSelection
struct UKSJobSelectorWidget_EndJobSelection_Params
{
};

// Function KillstreakUINew.KSJobSelectorWidget.ChoicesChanged
struct UKSJobSelectorWidget_ChoicesChanged_Params
{
	TArray<class UKSJobItem*>                          RemovedChoices;                                            // 0x0000(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<class UKSJobItem*>                          AddedOrUpdatedChoices;                                     // 0x0010(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function KillstreakUINew.KSJobSelectorWidget.AllPersonalTasksCompleted
struct UKSJobSelectorWidget_AllPersonalTasksCompleted_Params
{
};

// Function KillstreakUINew.KSJobSelectBanWidget.BansChanged
struct UKSJobSelectBanWidget_BansChanged_Params
{
};

// Function KillstreakUINew.KSJobSelectCaptainStatusWidget.CaptainTaskChanged
struct UKSJobSelectCaptainStatusWidget_CaptainTaskChanged_Params
{
};

// Function KillstreakUINew.KSJobSelectChoiceGridWidget.SortActiveChoiceWidgets
struct UKSJobSelectChoiceGridWidget_SortActiveChoiceWidgets_Params
{
	class UKSJobSelectionChoiceWidget*                 LHS;                                                       // 0x0000(0x0008)  (ConstParm, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UKSJobSelectionChoiceWidget*                 RHS;                                                       // 0x0008(0x0008)  (ConstParm, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               ReturnValue;                                               // 0x0010(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function KillstreakUINew.KSJobSelectChoiceGridWidget.SetGridPanel
struct UKSJobSelectChoiceGridWidget_SetGridPanel_Params
{
	class UGridPanel*                                  InGridPanel;                                               // 0x0000(0x0008)  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function KillstreakUINew.KSJobSelectionChoiceWidget.SetJob
struct UKSJobSelectionChoiceWidget_SetJob_Params
{
	class UKSJobItem*                                  Job;                                                       // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function KillstreakUINew.KSJobSelectionChoiceWidget.RequestSelect
struct UKSJobSelectionChoiceWidget_RequestSelect_Params
{
	Killstreak_ECanCompleteTaskResult                  ReturnValue;                                               // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function KillstreakUINew.KSJobSelectionChoiceWidget.RemoveCombinedHitTarget
struct UKSJobSelectionChoiceWidget_RemoveCombinedHitTarget_Params
{
	class UButton*                                     InButton;                                                  // 0x0000(0x0008)  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function KillstreakUINew.KSJobSelectionChoiceWidget.GetJob
struct UKSJobSelectionChoiceWidget_GetJob_Params
{
	class UKSJobItem*                                  ReturnValue;                                               // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function KillstreakUINew.KSJobSelectionChoiceWidget.GetChoiceData
struct UKSJobSelectionChoiceWidget_GetChoiceData_Params
{
	struct FJobSelectionChoice                         ReturnValue;                                               // 0x0000(0x0010)  (Parm, OutParm, ReturnParm, NoDestructor, NativeAccessSpecifierPublic)
};

// Function KillstreakUINew.KSJobSelectionChoiceWidget.CombinedUnhover
struct UKSJobSelectionChoiceWidget_CombinedUnhover_Params
{
};

// Function KillstreakUINew.KSJobSelectionChoiceWidget.CombinedHover
struct UKSJobSelectionChoiceWidget_CombinedHover_Params
{
};

// Function KillstreakUINew.KSJobSelectionChoiceWidget.ChoiceOrJobChanged
struct UKSJobSelectionChoiceWidget_ChoiceOrJobChanged_Params
{
};

// Function KillstreakUINew.KSJobSelectionChoiceWidget.AddCombinedHitTarget
struct UKSJobSelectionChoiceWidget_AddCombinedHitTarget_Params
{
	class UButton*                                     InButton;                                                  // 0x0000(0x0008)  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function KillstreakUINew.KSJobSelectionPlayerStatusWidget.SetPlayerByPlayerState
struct UKSJobSelectionPlayerStatusWidget_SetPlayerByPlayerState_Params
{
	class AKSPlayerState*                              InPlayerState;                                             // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function KillstreakUINew.KSJobSelectionPlayerStatusWidget.SetPlayerByPersistentData
struct UKSJobSelectionPlayerStatusWidget_SetPlayerByPersistentData_Params
{
	class UKSPersistentPlayerData*                     InPlayerData;                                              // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function KillstreakUINew.KSJobSelectionPlayerStatusWidget.SetPlayerById
struct UKSJobSelectionPlayerStatusWidget_SetPlayerById_Params
{
	struct FKSPersistentPlayerId                       InPlayerId;                                                // 0x0000(0x0010)  (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function KillstreakUINew.KSJobSelectionPlayerStatusWidget.PreClearPlayerData
struct UKSJobSelectionPlayerStatusWidget_PreClearPlayerData_Params
{
};

// Function KillstreakUINew.KSJobSelectionPlayerStatusWidget.PostSetPlayerData
struct UKSJobSelectionPlayerStatusWidget_PostSetPlayerData_Params
{
};

// Function KillstreakUINew.KSJobSelectionPlayerStatusWidget.PlayerTasksChanged
struct UKSJobSelectionPlayerStatusWidget_PlayerTasksChanged_Params
{
};

// Function KillstreakUINew.KSJobSelectionPlayerStatusWidget.HasLockedInAJob
struct UKSJobSelectionPlayerStatusWidget_HasLockedInAJob_Params
{
	class UKSJobItem*                                  OutJob;                                                    // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               ReturnValue;                                               // 0x0008(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function KillstreakUINew.KSJobSelectionPlayerStatusWidget.HasActiveTask
struct UKSJobSelectionPlayerStatusWidget_HasActiveTask_Params
{
	bool                                               ReturnValue;                                               // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function KillstreakUINew.KSJobSelectionPlayerStatusWidget.GetSelectionStatusText
struct UKSJobSelectionPlayerStatusWidget_GetSelectionStatusText_Params
{
	struct FText                                       ReturnValue;                                               // 0x0000(0x0018)  (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
};

// Function KillstreakUINew.KSJobSelectionPlayerStatusWidget.GetSelectionStatusJob
struct UKSJobSelectionPlayerStatusWidget_GetSelectionStatusJob_Params
{
	class UKSJobItem*                                  ReturnValue;                                               // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function KillstreakUINew.KSJobSelectionPlayerStatusWidget.GetPlayerId
struct UKSJobSelectionPlayerStatusWidget_GetPlayerId_Params
{
	struct FKSPersistentPlayerId                       ReturnValue;                                               // 0x0000(0x0010)  (Parm, OutParm, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function KillstreakUINew.KSJobSelectionPlayerStatusWidget.GetPersistentPlayerData
struct UKSJobSelectionPlayerStatusWidget_GetPersistentPlayerData_Params
{
	class UKSPersistentPlayerData*                     ReturnValue;                                               // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function KillstreakUINew.KSJobSelectionWidget.GetJobItems
struct UKSJobSelectionWidget_GetJobItems_Params
{
};

// Function KillstreakUINew.KSJobSelectionWidget.GetItemHelper
struct UKSJobSelectionWidget_GetItemHelper_Params
{
	class UKSStoreItemHelper*                          ReturnValue;                                               // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function KillstreakUINew.KSJobSelectionWidget.GetAdOffer
struct UKSJobSelectionWidget_GetAdOffer_Params
{
	class UPUMG_StoreItem*                             ReturnValue;                                               // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function KillstreakUINew.KSJobSelectOverallStatusWidget.GetCountdownFormattedText
struct UKSJobSelectOverallStatusWidget_GetCountdownFormattedText_Params
{
	float                                              SecondsRemaining;                                          // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bShowHours;                                                // 0x0004(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bShowTenthsOfSecond;                                       // 0x0005(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bAllowNegative;                                            // 0x0006(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FText                                       ReturnValue;                                               // 0x0008(0x0018)  (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
};

// Function KillstreakUINew.KSJobSelectOverallStatusWidget.DisplayTimerChanged
struct UKSJobSelectOverallStatusWidget_DisplayTimerChanged_Params
{
};

// Function KillstreakUINew.KSJobSelectOverallStatusWidget.DisplayTextChanged
struct UKSJobSelectOverallStatusWidget_DisplayTextChanged_Params
{
};

// Function KillstreakUINew.KSKillCardWidget.ShowPlayerAndMessage
struct UKSKillCardWidget_ShowPlayerAndMessage_Params
{
	class AKSPlayerState*                              PlayerState;                                               // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FText                                       Message;                                                   // 0x0008(0x0018)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
};

// Function KillstreakUINew.KSKillCardWidget.ClearMessage
struct UKSKillCardWidget_ClearMessage_Params
{
	bool                                               UseAnimations;                                             // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function KillstreakUINew.KSLobbyHUDNew.TransitionCamera
struct AKSLobbyHUDNew_TransitionCamera_Params
{
	struct FName                                       CameraTag;                                                 // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              BlendTime;                                                 // 0x0008(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function KillstreakUINew.KSLobbyHUDNew.ToggleDisablePartyLobbyCharacters
struct AKSLobbyHUDNew_ToggleDisablePartyLobbyCharacters_Params
{
	bool                                               Disable;                                                   // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function KillstreakUINew.KSLobbyHUDNew.TestSetStoreRotationOverride
struct AKSLobbyHUDNew_TestSetStoreRotationOverride_Params
{
	struct FString                                     DateTime;                                                  // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function KillstreakUINew.KSLobbyHUDNew.TestPostMatchLobby
struct AKSLobbyHUDNew_TestPostMatchLobby_Params
{
	int                                                PlayerXp;                                                  // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                RankedXp;                                                  // 0x0004(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                RogueXp;                                                   // 0x0008(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                ReputationEarned;                                          // 0x000C(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                PlacementMatchNum;                                         // 0x0010(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                BattlePassXp;                                              // 0x0014(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                WeaponMasteryCount;                                        // 0x0018(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                WeaponMasteryLevels;                                       // 0x001C(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               CategoryMasteryCanLevel;                                   // 0x0020(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                MilestonesPerWeapon;                                       // 0x0024(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function KillstreakUINew.KSLobbyHUDNew.TestEventGrandPrizeAcquisition
struct AKSLobbyHUDNew_TestEventGrandPrizeAcquisition_Params
{
};

// Function KillstreakUINew.KSLobbyHUDNew.TestBattlePassAcquisition
struct AKSLobbyHUDNew_TestBattlePassAcquisition_Params
{
	int                                                StartTier;                                                 // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                EndTier;                                                   // 0x0004(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function KillstreakUINew.KSLobbyHUDNew.ShowPopupConfirmation
struct AKSLobbyHUDNew_ShowPopupConfirmation_Params
{
	struct FText                                       Message;                                                   // 0x0000(0x0018)  (Parm, NativeAccessSpecifierPublic)
	KillstreakUINew_ESocialMessageType                 MessageType;                                               // 0x0018(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function KillstreakUINew.KSLobbyHUDNew.ResetLobbyCharactersByIndex
struct AKSLobbyHUDNew_ResetLobbyCharactersByIndex_Params
{
	TArray<Killstreak_ELobbyCharacterIndex>            IndicesToReset;                                            // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function KillstreakUINew.KSLobbyHUDNew.ResetLobbyCharacters
struct AKSLobbyHUDNew_ResetLobbyCharacters_Params
{
};

// Function KillstreakUINew.KSLobbyHUDNew.OnStoreVendorsLoaded
struct AKSLobbyHUDNew_OnStoreVendorsLoaded_Params
{
	int                                                GroupId;                                                   // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<int>                                        VendorIds;                                                 // 0x0008(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function KillstreakUINew.KSLobbyHUDNew.OnNotEnoughCurrency
struct AKSLobbyHUDNew_OnNotEnoughCurrency_Params
{
	class UPUMG_StorePurchaseRequest*                  PurchaseRequest;                                           // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function KillstreakUINew.KSLobbyHUDNew.NotifyViewStateChange
struct AKSLobbyHUDNew_NotifyViewStateChange_Params
{
	struct FName                                       NewRoute;                                                  // 0x0000(0x0008)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FName                                       PreviousRoute;                                             // 0x0008(0x0008)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function KillstreakUINew.KSLobbyHUDNew.IsPlayerMuted
struct AKSLobbyHUDNew_IsPlayerMuted_Params
{
	class UPUMG_PlayerInfo*                            PlayerData;                                                // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               ReturnValue;                                               // 0x0008(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function KillstreakUINew.KSLobbyHUDNew.HandleSpecificPartyIdDataUpdated
struct AKSLobbyHUDNew_HandleSpecificPartyIdDataUpdated_Params
{
	int64_t                                            PlayerId;                                                  // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function KillstreakUINew.KSLobbyHUDNew.HandleSpecificPartyDataUpdated
struct AKSLobbyHUDNew_HandleSpecificPartyDataUpdated_Params
{
	struct FPUMG_PartyMemberData                       PartyMember;                                               // 0x0000(0x0030)  (Parm, NativeAccessSpecifierPublic)
};

// Function KillstreakUINew.KSLobbyHUDNew.HandleSpecificPartyDataAdded
struct AKSLobbyHUDNew_HandleSpecificPartyDataAdded_Params
{
	struct FPUMG_PartyMemberData                       PartyMember;                                               // 0x0000(0x0030)  (Parm, NativeAccessSpecifierPublic)
};

// Function KillstreakUINew.KSLobbyHUDNew.HandlePartyMemberDataUpdated
struct AKSLobbyHUDNew_HandlePartyMemberDataUpdated_Params
{
	struct FPUMG_PartyMemberData                       PartyMember;                                               // 0x0000(0x0030)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	int                                                MemberIndex;                                               // 0x0030(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function KillstreakUINew.KSLobbyHUDNew.HandlePartyEmoteMessageReceived
struct AKSLobbyHUDNew_HandlePartyEmoteMessageReceived_Params
{
	class UPUMG_PlayerInfo*                            Sender;                                                    // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function KillstreakUINew.KSLobbyHUDNew.HandlePartyDataUpdated
struct AKSLobbyHUDNew_HandlePartyDataUpdated_Params
{
};

// Function KillstreakUINew.KSLobbyHUDNew.HandleMatchStatusUpdated
struct AKSLobbyHUDNew_HandleMatchStatusUpdated_Params
{
	PlatformUMG_EPUMG_MatchStatus                      MatchStatus;                                               // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function KillstreakUINew.KSLobbyHUDNew.HandleLoginUserChange
struct AKSLobbyHUDNew_HandleLoginUserChange_Params
{
};

// Function KillstreakUINew.KSLobbyHUDNew.HandleLoginStateChange
struct AKSLobbyHUDNew_HandleLoginStateChange_Params
{
	PlatformUMG_EPUMG_LoginState                       LoginState;                                                // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function KillstreakUINew.KSLobbyHUDNew.HandleDenyPartyInvitation
struct AKSLobbyHUDNew_HandleDenyPartyInvitation_Params
{
};

// Function KillstreakUINew.KSLobbyHUDNew.HandleAcceptPartyInvitation
struct AKSLobbyHUDNew_HandleAcceptPartyInvitation_Params
{
};

// Function KillstreakUINew.KSLobbyHUDNew.GetPlayerWhoDataFactory
struct AKSLobbyHUDNew_GetPlayerWhoDataFactory_Params
{
	class UKSPlayerWhoDataFactory*                     ReturnValue;                                               // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function KillstreakUINew.KSLobbyHUDNew.GetPlayerQueryDataFactory
struct AKSLobbyHUDNew_GetPlayerQueryDataFactory_Params
{
	class UKSPlayerQueryDataFactory*                   ReturnValue;                                               // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function KillstreakUINew.KSLobbyHUDNew.GetLobbyWidget
struct AKSLobbyHUDNew_GetLobbyWidget_Params
{
	class UKSLobbyWidget*                              ReturnValue;                                               // 0x0000(0x0008)  (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function KillstreakUINew.KSLobbyHUDNew.GetLobbyCharacterByPosition
struct AKSLobbyHUDNew_GetLobbyCharacterByPosition_Params
{
	Killstreak_ELobbyCharacterIndex                    CharacterIndex;                                            // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class AKSLobbyCharacter*                           LobbyCharacter;                                            // 0x0008(0x0008)  (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               ReturnValue;                                               // 0x0010(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function KillstreakUINew.KSLobbyHUDNew.GetKSQueueDataFactory
struct AKSLobbyHUDNew_GetKSQueueDataFactory_Params
{
	class UKSQueueDataFactory*                         ReturnValue;                                               // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function KillstreakUINew.KSLobbyHUDNew.GetJsonDataFactory
struct AKSLobbyHUDNew_GetJsonDataFactory_Params
{
	class UKSJsonDataFactory*                          ReturnValue;                                               // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function KillstreakUINew.KSLobbyHUDNew.GetJobSelectPreviewActorByPosition
struct AKSLobbyHUDNew_GetJobSelectPreviewActorByPosition_Params
{
	Killstreak_ELobbyCharacterIndex                    CharacterIndex;                                            // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class AKSJobSelectPreviewActor_Lobby*              PreviewActor;                                              // 0x0008(0x0008)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               ReturnValue;                                               // 0x0010(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function KillstreakUINew.KSLobbyHUDNew.GetFriendDataFactory
struct AKSLobbyHUDNew_GetFriendDataFactory_Params
{
	class UKSFriendDataFactory*                        ReturnValue;                                               // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function KillstreakUINew.KSLobbyHUDNew.GetEMODataFactory
struct AKSLobbyHUDNew_GetEMODataFactory_Params
{
	class UKSEMODataFactory*                           ReturnValue;                                               // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function KillstreakUINew.KSLobbyHUDNew.GetDefaultPlayerAccountItem
struct AKSLobbyHUDNew_GetDefaultPlayerAccountItem_Params
{
	Killstreak_EPlayerAccountSlot                      ItemSlot;                                                  // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UKSItem*                                     ReturnValue;                                               // 0x0008(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function KillstreakUINew.KSLobbyHUDNew.GetCharacterIndexFromPartyIndex
struct AKSLobbyHUDNew_GetCharacterIndexFromPartyIndex_Params
{
	int                                                PartyMemberIndex;                                          // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	Killstreak_ELobbyCharacterIndex                    OutCharIndex;                                              // 0x0004(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               ReturnValue;                                               // 0x0005(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function KillstreakUINew.KSLobbyHUDNew.ForceMinuteTimerUpdate
struct AKSLobbyHUDNew_ForceMinuteTimerUpdate_Params
{
};

// Function KillstreakUINew.KSLobbyHUDNew.ForceEulaAccept
struct AKSLobbyHUDNew_ForceEulaAccept_Params
{
};

// Function KillstreakUINew.KSLobbyHUDNew.CreateInitialPlayerLoadout
struct AKSLobbyHUDNew_CreateInitialPlayerLoadout_Params
{
};

// Function KillstreakUINew.KSLobbyHUDNew.CheckForVoucherRedemption
struct AKSLobbyHUDNew_CheckForVoucherRedemption_Params
{
};

// Function KillstreakUINew.KSLobbyHUDNew.CheckForExistingPenaltyTime
struct AKSLobbyHUDNew_CheckForExistingPenaltyTime_Params
{
};

// Function KillstreakUINew.KSLobbyNameplateWidget.SetupRankedManager
struct UKSLobbyNameplateWidget_SetupRankedManager_Params
{
};

// Function KillstreakUINew.KSLobbyNameplateWidget.RefreshRankedData
struct UKSLobbyNameplateWidget_RefreshRankedData_Params
{
};

// Function KillstreakUINew.KSLoginInventoryCheck.CancelLogin
struct UKSLoginInventoryCheck_CancelLogin_Params
{
};

// Function KillstreakUINew.KSLoginProcessRewards.ProcessAccountRewards
struct UKSLoginProcessRewards_ProcessAccountRewards_Params
{
};

// Function KillstreakUINew.KSTabValidator.IsValidTab
struct UKSTabValidator_IsValidTab_Params
{
	bool                                               ReturnValue;                                               // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function KillstreakUINew.KSLoginRewardsModal.UIX_AttemptClaimReward
struct UKSLoginRewardsModal_UIX_AttemptClaimReward_Params
{
};

// Function KillstreakUINew.KSLoginRewardsModal.HandlePlayerChallengesReady
struct UKSLoginRewardsModal_HandlePlayerChallengesReady_Params
{
};

// Function KillstreakUINew.KSLoginRewardsModal.GrabLoginRewardsFromActivityInstance
struct UKSLoginRewardsModal_GrabLoginRewardsFromActivityInstance_Params
{
	class UKSActivityInstance*                         ActivityInstance;                                          // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<struct FLoginRewardItem>                    ReturnValue;                                               // 0x0008(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function KillstreakUINew.KSLoginRewardsModal.GetNumberOfItemsToDisplay
struct UKSLoginRewardsModal_GetNumberOfItemsToDisplay_Params
{
	int                                                ReturnValue;                                               // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function KillstreakUINew.KSLoginRewardsModal.GetLoginRewardProgressCount
struct UKSLoginRewardsModal_GetLoginRewardProgressCount_Params
{
	int                                                ReturnValue;                                               // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function KillstreakUINew.KSLoginRewardsModal.GetLoginRewardItems
struct UKSLoginRewardsModal_GetLoginRewardItems_Params
{
	TArray<struct FLoginRewardItem>                    ReturnValue;                                               // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function KillstreakUINew.KSLoginRewardsModal.GetLoginEventTimeRemaining
struct UKSLoginRewardsModal_GetLoginEventTimeRemaining_Params
{
	struct FText                                       ReturnValue;                                               // 0x0000(0x0018)  (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
};

// Function KillstreakUINew.KSLowAmmoAlertWidget.GetAmmoState
struct UKSLowAmmoAlertWidget_GetAmmoState_Params
{
	KillstreakUINew_ELowAmmoState                      ReturnValue;                                               // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function KillstreakUINew.KSLowAmmoAlertWidget.CalcAmmoState
struct UKSLowAmmoAlertWidget_CalcAmmoState_Params
{
	KillstreakUINew_ELowAmmoState                      ReturnValue;                                               // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function KillstreakUINew.KSLowAmmoAlertWidget.AmmoStateChanged
struct UKSLowAmmoAlertWidget_AmmoStateChanged_Params
{
};

// Function KillstreakUINew.KSMapIconWidgetPool.GetMapIconWidget
struct UKSMapIconWidgetPool_GetMapIconWidget_Params
{
	class UKSMapIconWidgetBase*                        ReturnValue;                                               // 0x0000(0x0008)  (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function KillstreakUINew.KSMapIconWidgetPool.AddMapIconWidget
struct UKSMapIconWidgetPool_AddMapIconWidget_Params
{
	class UKSMapIconWidgetBase*                        MapIconWidget;                                             // 0x0000(0x0008)  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function KillstreakUINew.KSMarkerDisplayBase.GetScreenPositionForMarker
struct UKSMarkerDisplayBase_GetScreenPositionForMarker_Params
{
	struct FVector                                     TargetLocation;                                            // 0x0000(0x000C)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              AnchorHeight;                                              // 0x000C(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              MarginX;                                                   // 0x0010(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              MarginY;                                                   // 0x0014(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector2D                                   ScreenLocation;                                            // 0x0018(0x0008)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               ReturnValue;                                               // 0x0020(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function KillstreakUINew.KSDataIndividualInviteSetup.SetCallbacks
struct UKSDataIndividualInviteSetup_SetCallbacks_Params
{
	struct FScriptDelegate                             GetIsSelected;                                             // 0x0000(0x0010)  (Parm, ZeroConstructor, NoDestructor, NativeAccessSpecifierPublic)
	struct FScriptDelegate                             Select;                                                    // 0x0010(0x0010)  (Parm, ZeroConstructor, NoDestructor, NativeAccessSpecifierPublic)
	struct FScriptDelegate                             ShouldShowPlayer;                                          // 0x0020(0x0010)  (Parm, ZeroConstructor, NoDestructor, NativeAccessSpecifierPublic)
	struct FScriptDelegate                             Close;                                                     // 0x0030(0x0010)  (Parm, ZeroConstructor, NoDestructor, NativeAccessSpecifierPublic)
	class UKSDataIndividualInviteSetup*                ReturnValue;                                               // 0x0040(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// DelegateFunction KillstreakUINew.KSDataIndividualInviteSetup.KSInviteSelect__DelegateSignature
struct UKSDataIndividualInviteSetup_KSInviteSelect__DelegateSignature_Params
{
	class UKSPlayerInfo*                               playerinfo;                                                // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	KillstreakUINew_EKSInviteSelectResult              ReturnValue;                                               // 0x0008(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// DelegateFunction KillstreakUINew.KSDataIndividualInviteSetup.KSInviteGetIsSelected__DelegateSignature
struct UKSDataIndividualInviteSetup_KSInviteGetIsSelected__DelegateSignature_Params
{
	class UKSPlayerInfo*                               playerinfo;                                                // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               ReturnValue;                                               // 0x0008(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function KillstreakUINew.KSDataBatchInviteSetup.SetCallbacks
struct UKSDataBatchInviteSetup_SetCallbacks_Params
{
	struct FScriptDelegate                             Select;                                                    // 0x0000(0x0010)  (Parm, ZeroConstructor, NoDestructor, NativeAccessSpecifierPublic)
	struct FScriptDelegate                             ShouldShowPlayer;                                          // 0x0010(0x0010)  (Parm, ZeroConstructor, NoDestructor, NativeAccessSpecifierPublic)
	struct FScriptDelegate                             Cancel;                                                    // 0x0020(0x0010)  (Parm, ZeroConstructor, NoDestructor, NativeAccessSpecifierPublic)
	class UKSDataBatchInviteSetup*                     ReturnValue;                                               // 0x0030(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// DelegateFunction KillstreakUINew.KSDataBatchInviteSetup.KSBatchSelect__DelegateSignature
struct UKSDataBatchInviteSetup_KSBatchSelect__DelegateSignature_Params
{
	TArray<class UKSPlayerInfo*>                       playerinfo;                                                // 0x0000(0x0010)  (ConstParm, Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function KillstreakUINew.KSMassInviteModal.UpdateRouteData
struct UKSMassInviteModal_UpdateRouteData_Params
{
	bool                                               ReturnValue;                                               // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function KillstreakUINew.KSMassInviteModal.SelectPlayer
struct UKSMassInviteModal_SelectPlayer_Params
{
	class UKSPlayerInfo*                               Player;                                                    // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	KillstreakUINew_EKSInviteSelectResult              ReturnValue;                                               // 0x0008(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function KillstreakUINew.KSMassInviteModal.RequestFriends
struct UKSMassInviteModal_RequestFriends_Params
{
	struct FScriptDelegate                             OnReceivePlayers;                                          // 0x0000(0x0010)  (Parm, ZeroConstructor, NoDestructor, NativeAccessSpecifierPublic)
};

// DelegateFunction KillstreakUINew.KSMassInviteModal.KSInviteReceivePlayers__DelegateSignature
struct UKSMassInviteModal_KSInviteReceivePlayers__DelegateSignature_Params
{
	TArray<class UKSPlayerInfo*>                       Players;                                                   // 0x0000(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function KillstreakUINew.KSMassInviteModal.GetShouldSelect
struct UKSMassInviteModal_GetShouldSelect_Params
{
	class UKSPlayerInfo*                               Player;                                                    // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               ReturnValue;                                               // 0x0008(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function KillstreakUINew.KSMassInviteModal.CloseScreen
struct UKSMassInviteModal_CloseScreen_Params
{
	KillstreakUINew_EKSInviteCloseAction               CloseAction;                                               // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function KillstreakUINew.KSMatchInvitationModal.OnInvitationExpired
struct UKSMatchInvitationModal_OnInvitationExpired_Params
{
};

// Function KillstreakUINew.KSMatchInvitationModal.HandleReceivePlayerName
struct UKSMatchInvitationModal_HandleReceivePlayerName_Params
{
	class UPUMG_PlayerInfo*                            playerinfo;                                                // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function KillstreakUINew.KSMatchInvitationModal.GetQueueDataFactory
struct UKSMatchInvitationModal_GetQueueDataFactory_Params
{
	class UKSQueueDataFactory*                         ReturnValue;                                               // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function KillstreakUINew.KSMatchInvitationModal.GetInvitationTotalTimeToExpire
struct UKSMatchInvitationModal_GetInvitationTotalTimeToExpire_Params
{
	float                                              ReturnValue;                                               // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function KillstreakUINew.KSMatchInvitationModal.GetInvitationTimeRemaining
struct UKSMatchInvitationModal_GetInvitationTimeRemaining_Params
{
	float                                              ReturnValue;                                               // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function KillstreakUINew.KSMatchInvitationModal.DeclineInvite
struct UKSMatchInvitationModal_DeclineInvite_Params
{
};

// Function KillstreakUINew.KSMatchInvitationModal.CloseScreen
struct UKSMatchInvitationModal_CloseScreen_Params
{
};

// Function KillstreakUINew.KSMatchInvitationModal.AcceptInviteDefault
struct UKSMatchInvitationModal_AcceptInviteDefault_Params
{
};

// Function KillstreakUINew.KSMatchInvitationModal.AcceptInvite
struct UKSMatchInvitationModal_AcceptInvite_Params
{
	int                                                MapId;                                                     // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function KillstreakUINew.KSMatchResult.UpdateRoundBaseScore
struct UKSMatchResult_UpdateRoundBaseScore_Params
{
	class AKSGameState_RoundGame*                      pGameState;                                                // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function KillstreakUINew.KSMatchResult.UpdateResultStatus
struct UKSMatchResult_UpdateResultStatus_Params
{
	Killstreak_EGameResult                             Result;                                                    // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FText                                       Status;                                                    // 0x0008(0x0018)  (Parm, OutParm, NativeAccessSpecifierPublic)
};

// Function KillstreakUINew.KSMatchResult.ProcessResultAnnoucement
struct UKSMatchResult_ProcessResultAnnoucement_Params
{
	Killstreak_EGameResult                             Result;                                                    // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function KillstreakUINew.KSMatchResult.HandleResultReceived
struct UKSMatchResult_HandleResultReceived_Params
{
	struct FRoundResultAnnoucement                     ResultAnnoucement;                                         // 0x0000(0x0020)  (Parm, NativeAccessSpecifierPublic)
};

// Function KillstreakUINew.KSMatchResult.HandleEndOfMatch
struct UKSMatchResult_HandleEndOfMatch_Params
{
};

// Function KillstreakUINew.KSMatchResult.GetTeamNames
struct UKSMatchResult_GetTeamNames_Params
{
	struct FText                                       pTeamName;                                                 // 0x0000(0x0018)  (Parm, OutParm, NativeAccessSpecifierPublic)
	struct FText                                       pOpposingTeamName;                                         // 0x0018(0x0018)  (Parm, OutParm, NativeAccessSpecifierPublic)
};

// Function KillstreakUINew.KSMatchResult.GetSurrenderText
struct UKSMatchResult_GetSurrenderText_Params
{
	struct FText                                       pSurrenderText;                                            // 0x0000(0x0018)  (Parm, OutParm, NativeAccessSpecifierPublic)
};

// Function KillstreakUINew.KSMediaPlayerWidget.UIX_SkipEntry
struct UKSMediaPlayerWidget_UIX_SkipEntry_Params
{
};

// Function KillstreakUINew.KSMediaPlayerWidget.OnShouldShowPromptChanged
struct UKSMediaPlayerWidget_OnShouldShowPromptChanged_Params
{
	bool                                               bCanSkipEntry;                                             // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function KillstreakUINew.KSMediaPlayerWidget.OnReadyForPlayback
struct UKSMediaPlayerWidget_OnReadyForPlayback_Params
{
	class UPlatformMediaSource*                        PlatformMediaSource;                                       // 0x0000(0x0008)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UAkAudioEvent*                               PlayEvent;                                                 // 0x0008(0x0008)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UAkAudioEvent*                               StopEvent;                                                 // 0x0010(0x0008)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function KillstreakUINew.KSMediaPlayerWidget.OnEndLoadingMedia
struct UKSMediaPlayerWidget_OnEndLoadingMedia_Params
{
};

// Function KillstreakUINew.KSMediaPlayerWidget.OnBeginLoadingMedia
struct UKSMediaPlayerWidget_OnBeginLoadingMedia_Params
{
};

// Function KillstreakUINew.KSMediaPlayerWidget.IsCurrentEntrySkippable
struct UKSMediaPlayerWidget_IsCurrentEntrySkippable_Params
{
	bool                                               ReturnValue;                                               // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function KillstreakUINew.KSMilestoneCompletedSummary.GetMilestoneEntriesForWeapon
struct UKSMilestoneCompletedSummary_GetMilestoneEntriesForWeapon_Params
{
	class UKSWeaponAsset*                              Weapon;                                                    // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<struct FKSMilestoneCompletedSummaryEntry>   OutMilestoneEntries;                                       // 0x0008(0x0010)  (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               ReturnValue;                                               // 0x0018(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function KillstreakUINew.KSMilestoneCompletedScreen.StartAnimSequence
struct UKSMilestoneCompletedScreen_StartAnimSequence_Params
{
};

// Function KillstreakUINew.KSMilestoneCompletedScreen.ShowNextWeapon
struct UKSMilestoneCompletedScreen_ShowNextWeapon_Params
{
};

// Function KillstreakUINew.KSMilestoneCompletedScreen.PopulateMilestoneData
struct UKSMilestoneCompletedScreen_PopulateMilestoneData_Params
{
	TArray<struct FKSMilestoneCompletedSummaryEntry>   MilestonesForWeapon;                                       // 0x0000(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function KillstreakUINew.KSMilestoneCompletedScreen.PopulateFromWeaponAsset
struct UKSMilestoneCompletedScreen_PopulateFromWeaponAsset_Params
{
	class UKSWeaponAsset*                              WeaponAsset;                                               // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function KillstreakUINew.KSMilestoneCompletedScreen.HandleViewStateChanged
struct UKSMilestoneCompletedScreen_HandleViewStateChanged_Params
{
	struct FName                                       CurrentRoute;                                              // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FName                                       PreviousRoute;                                             // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	PlatformUMG_EViewManagerLayer                      Layer;                                                     // 0x0010(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function KillstreakUINew.KSMilestoneCompletedScreen.HandleSkipContextAction
struct UKSMilestoneCompletedScreen_HandleSkipContextAction_Params
{
};

// Function KillstreakUINew.KSMilestoneCompletedScreen.HandleCurrentWeaponDismissed
struct UKSMilestoneCompletedScreen_HandleCurrentWeaponDismissed_Params
{
};

// Function KillstreakUINew.KSMilestoneCompletedScreen.DisplayWeaponAsset
struct UKSMilestoneCompletedScreen_DisplayWeaponAsset_Params
{
	class UKSWeaponAsset*                              WeaponAsset;                                               // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function KillstreakUINew.KSMilestoneCompletedScreen.ConfigureViewModel
struct UKSMilestoneCompletedScreen_ConfigureViewModel_Params
{
	class UKSWeaponAsset*                              WeaponAsset;                                               // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UKSWeaponAttachment*                         WeaponWrap;                                                // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function KillstreakUINew.KSMinimapWidgetBase.UpdateMapMaterialTransform
struct UKSMinimapWidgetBase_UpdateMapMaterialTransform_Params
{
	class UMaterialInstanceDynamic*                    MapMaterial;                                               // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              NormalizedX;                                               // 0x0008(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              NormalizedY;                                               // 0x000C(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              Rotation;                                                  // 0x0010(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              Scale;                                                     // 0x0014(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function KillstreakUINew.KSModelViewer.ViewModelByName
struct UKSModelViewer_ViewModelByName_Params
{
	class UObject*                                     WorldContextObject;                                        // 0x0000(0x0008)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FName                                       InTargetItem;                                              // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UDataTable*                                  InDataTable;                                               // 0x0010(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function KillstreakUINew.KSModelViewer.ViewModelAttachment
struct UKSModelViewer_ViewModelAttachment_Params
{
	class UObject*                                     WorldContextObject;                                        // 0x0000(0x0008)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UKSWeaponAttachment*                         InAttachment;                                              // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FName                                       InSpawnOnActorName;                                        // 0x0010(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      Slot;                                                      // 0x0018(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function KillstreakUINew.KSModelViewer.ViewModel
struct UKSModelViewer_ViewModel_Params
{
	class UObject*                                     WorldContextObject;                                        // 0x0000(0x0008)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UKSItem*                                     InItem;                                                    // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FName                                       InSpawnOnActorName;                                        // 0x0010(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	Killstreak_EWeaponStateNew                         DefaultWeaponState;                                        // 0x0018(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               InScaleToFitTargetActor;                                   // 0x0019(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FRotator                                    InDefaultRotation;                                         // 0x001C(0x000C)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	bool                                               InBindControllerToSpawner;                                 // 0x0028(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function KillstreakUINew.KSModelViewer.UnbindControllerFromSpawner
struct UKSModelViewer_UnbindControllerFromSpawner_Params
{
	class UObject*                                     WorldContextObject;                                        // 0x0000(0x0008)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FName                                       InSpawnActorName;                                          // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function KillstreakUINew.KSModelViewer.UnbindAllControllersFromSpawners
struct UKSModelViewer_UnbindAllControllersFromSpawners_Params
{
	class UObject*                                     WorldContextObject;                                        // 0x0000(0x0008)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function KillstreakUINew.KSModelViewer.TriggerReactiveAttachment
struct UKSModelViewer_TriggerReactiveAttachment_Params
{
	class UObject*                                     WorldContextObject;                                        // 0x0000(0x0008)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FName                                       InSpawnOnActorName;                                        // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function KillstreakUINew.KSModelViewer.SetAnimation
struct UKSModelViewer_SetAnimation_Params
{
	class UObject*                                     WorldContextObject;                                        // 0x0000(0x0008)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UAnimSequence*                               InAnim;                                                    // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FName                                       InSpawnOnActorName;                                        // 0x0010(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bLooping;                                                  // 0x0018(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function KillstreakUINew.KSModelViewer.HideModelAttachment
struct UKSModelViewer_HideModelAttachment_Params
{
	class UObject*                                     WorldContextObject;                                        // 0x0000(0x0008)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FName                                       InSpawnOnActorName;                                        // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      Slot;                                                      // 0x0010(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function KillstreakUINew.KSModelViewer.HasReactiveAttachment
struct UKSModelViewer_HasReactiveAttachment_Params
{
	class UObject*                                     WorldContextObject;                                        // 0x0000(0x0008)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FName                                       InSpawnOnActorName;                                        // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               ReturnValue;                                               // 0x0010(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function KillstreakUINew.KSModelViewer.GetReactiveAttachmentStateDescription
struct UKSModelViewer_GetReactiveAttachmentStateDescription_Params
{
	class UObject*                                     WorldContextObject;                                        // 0x0000(0x0008)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FName                                       InSpawnOnActorName;                                        // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FText                                       ReturnValue;                                               // 0x0010(0x0018)  (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
};

// Function KillstreakUINew.KSModelViewer.GetModelSoundFromDatatable
struct UKSModelViewer_GetModelSoundFromDatatable_Params
{
	class UObject*                                     WorldContextObject;                                        // 0x0000(0x0008)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FName                                       InSpawnOnActorName;                                        // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FName                                       RowName;                                                   // 0x0010(0x0008)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UAkAudioEvent*                               ReturnValue;                                               // 0x0018(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function KillstreakUINew.KSModelViewer.ClearModelAttachments
struct UKSModelViewer_ClearModelAttachments_Params
{
	class UObject*                                     WorldContextObject;                                        // 0x0000(0x0008)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FName                                       InSpawnOnActorName;                                        // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function KillstreakUINew.KSModelViewer.ClearModel
struct UKSModelViewer_ClearModel_Params
{
	class UObject*                                     WorldContextObject;                                        // 0x0000(0x0008)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FName                                       InSpawnOnActorName;                                        // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function KillstreakUINew.KSModelViewer.BindDelForWeaponModelSet
struct UKSModelViewer_BindDelForWeaponModelSet_Params
{
	class UObject*                                     WorldContextObject;                                        // 0x0000(0x0008)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FName                                       InSpawnOnActorName;                                        // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FScriptDelegate                             InEventCallback;                                           // 0x0010(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	bool                                               ReturnValue;                                               // 0x0020(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function KillstreakUINew.KSModelViewer.BindControllerToSpawner
struct UKSModelViewer_BindControllerToSpawner_Params
{
	class UObject*                                     WorldContextObject;                                        // 0x0000(0x0008)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FName                                       InSpawnActorName;                                          // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function KillstreakUINew.KSModWidget_DetectEnemy.OnDetectChanged
struct UKSModWidget_DetectEnemy_OnDetectChanged_Params
{
	class UKSModInst_DetectEnemy*                      DetectEnemyModInst;                                        // 0x0000(0x0008)  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bIsDetectingEnemy;                                         // 0x0008(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function KillstreakUINew.KSModWidget_DetectEnemy.GetIconBox
struct UKSModWidget_DetectEnemy_GetIconBox_Params
{
	class UHorizontalBox*                              ReturnValue;                                               // 0x0000(0x0008)  (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function KillstreakUINew.KSModWidgetInterface.RemoveModInstance
struct UKSModWidgetInterface_RemoveModInstance_Params
{
	class UKSPlayerModInstance*                        InInstance;                                                // 0x0000(0x0008)  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               ReturnValue;                                               // 0x0008(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function KillstreakUINew.KSModWidgetInterface.AddModInstance
struct UKSModWidgetInterface_AddModInstance_Params
{
	class UKSPlayerModInstance*                        InInstance;                                                // 0x0000(0x0008)  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               ReturnValue;                                               // 0x0008(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function KillstreakUINew.KSNavTabWidget.UnselectNavTab
struct UKSNavTabWidget_UnselectNavTab_Params
{
};

// Function KillstreakUINew.KSNavTabWidget.SetSelected
struct UKSNavTabWidget_SetSelected_Params
{
	bool                                               bNewSelected;                                              // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function KillstreakUINew.KSNavTabWidget.SetDisabled
struct UKSNavTabWidget_SetDisabled_Params
{
	bool                                               bNewDisabled;                                              // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function KillstreakUINew.KSNavTabWidget.SelectNavTab
struct UKSNavTabWidget_SelectNavTab_Params
{
};

// Function KillstreakUINew.KSNavTabWidget.IsSelected
struct UKSNavTabWidget_IsSelected_Params
{
	bool                                               ReturnValue;                                               // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function KillstreakUINew.KSNavTabWidget.IsDisabled
struct UKSNavTabWidget_IsDisabled_Params
{
	bool                                               ReturnValue;                                               // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function KillstreakUINew.KSNewsRotatorWidget.ShouldShowPanel
struct UKSNewsRotatorWidget_ShouldShowPanel_Params
{
	class UKSNewsRotatorData*                          Panel;                                                     // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               ReturnValue;                                               // 0x0008(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function KillstreakUINew.KSNewsRotatorWidget.OnNewsPanelClicked
struct UKSNewsRotatorWidget_OnNewsPanelClicked_Params
{
	class UKSNewsRotatorData*                          Panel;                                                     // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function KillstreakUINew.KSNewsRotatorWidget.OnJsonChanged
struct UKSNewsRotatorWidget_OnJsonChanged_Params
{
};

// Function KillstreakUINew.KSNewsRotatorWidget.GetPanelData
struct UKSNewsRotatorWidget_GetPanelData_Params
{
	TArray<class UKSNewsRotatorData*>                  ReturnValue;                                               // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function KillstreakUINew.KSNewsRotatorWidget.GetJsonDataFactory
struct UKSNewsRotatorWidget_GetJsonDataFactory_Params
{
	class UKSJsonDataFactory*                          ReturnValue;                                               // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function KillstreakUINew.KSNewStartMenuWidget.IsNewsAvailable
struct UKSNewStartMenuWidget_IsNewsAvailable_Params
{
	bool                                               ReturnValue;                                               // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function KillstreakUINew.KSNewStartMenuWidget.GetJsonDataFactory
struct UKSNewStartMenuWidget_GetJsonDataFactory_Params
{
	class UKSJsonDataFactory*                          ReturnValue;                                               // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function KillstreakUINew.KSNPEDataFactory.UIX_ClaimTutorialActivity
struct UKSNPEDataFactory_UIX_ClaimTutorialActivity_Params
{
};

// Function KillstreakUINew.KSNPEDataFactory.UIX_ClaimRegionSelectedActivity
struct UKSNPEDataFactory_UIX_ClaimRegionSelectedActivity_Params
{
};

// Function KillstreakUINew.KSNPEDataFactory.SkipTutorial
struct UKSNPEDataFactory_SkipTutorial_Params
{
};

// Function KillstreakUINew.KSNPEDataFactory.ShouldForceTutorial
struct UKSNPEDataFactory_ShouldForceTutorial_Params
{
	bool                                               ReturnValue;                                               // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function KillstreakUINew.KSNPEDataFactory.QueueTutorial
struct UKSNPEDataFactory_QueueTutorial_Params
{
};

// Function KillstreakUINew.KSNPEDataFactory.HasClaimedActivity
struct UKSNPEDataFactory_HasClaimedActivity_Params
{
	struct FGameplayTag                                ActivityTag;                                               // 0x0000(0x0008)  (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               ReturnValue;                                               // 0x0008(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function KillstreakUINew.KSNPEDataFactory.GetQueueDataFactory
struct UKSNPEDataFactory_GetQueueDataFactory_Params
{
	class UKSQueueDataFactory*                         ReturnValue;                                               // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function KillstreakUINew.KSNPEDataFactory.ClaimActivity
struct UKSNPEDataFactory_ClaimActivity_Params
{
	struct FGameplayTag                                ActivityTag;                                               // 0x0000(0x0008)  (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function KillstreakUINew.KSOverlayTabHubBase.SetFocusToView
struct UKSOverlayTabHubBase_SetFocusToView_Params
{
};

// Function KillstreakUINew.KSOverlayTabHubBase.SetFocusToTabs
struct UKSOverlayTabHubBase_SetFocusToTabs_Params
{
};

// Function KillstreakUINew.KSOverlayTabHubBase.SelectViewAndShow
struct UKSOverlayTabHubBase_SelectViewAndShow_Params
{
	struct FName                                       ViewName;                                                  // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function KillstreakUINew.KSOverlayTabHubBase.OnViewFocused
struct UKSOverlayTabHubBase_OnViewFocused_Params
{
};

// Function KillstreakUINew.KSOverlayTabHubBase.OnTabsFocused
struct UKSOverlayTabHubBase_OnTabsFocused_Params
{
};

// Function KillstreakUINew.KSOverlayTabHubBase.GetLandingView
struct UKSOverlayTabHubBase_GetLandingView_Params
{
	struct FName                                       ReturnValue;                                               // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function KillstreakUINew.KSOverlayTabHubBase.GetCurrentViewWidget
struct UKSOverlayTabHubBase_GetCurrentViewWidget_Params
{
	class UPUMG_Widget*                                ReturnValue;                                               // 0x0000(0x0008)  (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function KillstreakUINew.KSOverlayTabHubBase.GetAllViews
struct UKSOverlayTabHubBase_GetAllViews_Params
{
	TArray<class UPUMG_Widget*>                        ReturnValue;                                               // 0x0000(0x0010)  (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, ContainsInstancedReference, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function KillstreakUINew.KSOverlayTabHubBase.CreateAllViews
struct UKSOverlayTabHubBase_CreateAllViews_Params
{
};

// Function KillstreakUINew.KSOverlayTabHubBase.ClearAllViews
struct UKSOverlayTabHubBase_ClearAllViews_Params
{
};

// Function KillstreakUINew.KSOverlayTabHubBase.ChangeView
struct UKSOverlayTabHubBase_ChangeView_Params
{
	struct FName                                       ViewName;                                                  // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function KillstreakUINew.KSOverlayTabHubBase.AddView
struct UKSOverlayTabHubBase_AddView_Params
{
	struct FName                                       ViewName;                                                  // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FOverlayTabViewRow                          ViewInfo;                                                  // 0x0008(0x0030)  (Parm, NativeAccessSpecifierPublic)
};

// Function KillstreakUINew.KSPartyDataFactory.SetSelectedQueueId
struct UKSPartyDataFactory_SetSelectedQueueId_Params
{
	int                                                QueueId;                                                   // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function KillstreakUINew.KSPartyDataFactory.PlayEmoteInParty
struct UKSPartyDataFactory_PlayEmoteInParty_Params
{
	class UKSEmote*                                    Emote;                                                     // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function KillstreakUINew.KSPartyDataFactory.GetSelectedQueueId
struct UKSPartyDataFactory_GetSelectedQueueId_Params
{
	int                                                ReturnValue;                                               // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function KillstreakUINew.KSPartyDataFactory.GetPartyMinimumLevel
struct UKSPartyDataFactory_GetPartyMinimumLevel_Params
{
	int                                                ReturnValue;                                               // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function KillstreakUINew.KSPartyDataFactory.GetHighestDeserterPenaltySeconds
struct UKSPartyDataFactory_GetHighestDeserterPenaltySeconds_Params
{
	int                                                ReturnValue;                                               // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function KillstreakUINew.KSPartyDataFactory.CanPartyQueueForRanked
struct UKSPartyDataFactory_CanPartyQueueForRanked_Params
{
	struct FString                                     RankedSeasonKey;                                           // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               ReturnValue;                                               // 0x0010(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function KillstreakUINew.KSPartyDataFactory.BroadcastPartyInvitationError
struct UKSPartyDataFactory_BroadcastPartyInvitationError_Params
{
	struct FText                                       InvitationError;                                           // 0x0000(0x0018)  (Parm, NativeAccessSpecifierPublic)
};

// Function KillstreakUINew.KSPartyManagerWidgetBase.RefreshFromPartyData
struct UKSPartyManagerWidgetBase_RefreshFromPartyData_Params
{
};

// Function KillstreakUINew.KSPartyManagerWidgetBase.HandlePartyMemberUpdateByName
struct UKSPartyManagerWidgetBase_HandlePartyMemberUpdateByName_Params
{
	struct FText                                       PlayerName;                                                // 0x0000(0x0018)  (Parm, NativeAccessSpecifierPublic)
};

// Function KillstreakUINew.KSPartyManagerWidgetBase.HandlePartyMemberUpdateByInfo
struct UKSPartyManagerWidgetBase_HandlePartyMemberUpdateByInfo_Params
{
	class UPUMG_PlayerInfo*                            playerinfo;                                                // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function KillstreakUINew.KSPartyManagerWidgetBase.HandlePartyMemberUpdateById
struct UKSPartyManagerWidgetBase_HandlePartyMemberUpdateById_Params
{
	int64_t                                            PlayerId;                                                  // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function KillstreakUINew.KSPartyManagerWidgetBase.HandlePartyMemberDataUpdated
struct UKSPartyManagerWidgetBase_HandlePartyMemberDataUpdated_Params
{
	struct FPUMG_PartyMemberData                       MemberData;                                                // 0x0000(0x0030)  (Parm, NativeAccessSpecifierPublic)
};

// Function KillstreakUINew.KSPartyManagerWidgetBase.GetSuggestedInvite
struct UKSPartyManagerWidgetBase_GetSuggestedInvite_Params
{
	class UPUMG_PlayerInfo*                            ReturnValue;                                               // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function KillstreakUINew.KSPartyManagerWidgetBase.GetPartyDataFactory
struct UKSPartyManagerWidgetBase_GetPartyDataFactory_Params
{
	class UKSPartyDataFactory*                         ReturnValue;                                               // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function KillstreakUINew.KSPartyManagerWidgetBase.GetCachedDisplayedPartyMembers
struct UKSPartyManagerWidgetBase_GetCachedDisplayedPartyMembers_Params
{
	TArray<struct FPUMG_PartyMemberData>               ReturnValue;                                               // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function KillstreakUINew.KSPartyManagerWidgetBase.ApplyPartyData
struct UKSPartyManagerWidgetBase_ApplyPartyData_Params
{
	TArray<struct FPUMG_PartyMemberData>               PartyMembers;                                              // 0x0000(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function KillstreakUINew.KSPartyManagerWidgetBase.ApplyEmptyPartyData
struct UKSPartyManagerWidgetBase_ApplyEmptyPartyData_Params
{
};

// Function KillstreakUINew.KSPerkTreeBase.SetCursorLerping
struct UKSPerkTreeBase_SetCursorLerping_Params
{
	bool                                               bLerping;                                                  // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function KillstreakUINew.KSPerkTreeBase.RefreshEdge
struct UKSPerkTreeBase_RefreshEdge_Params
{
	class UKSPerkTreeEdgeBase*                         Edge;                                                      // 0x0000(0x0008)  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                column;                                                    // 0x0008(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                Row;                                                       // 0x000C(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TMap<struct FIntPoint, class UKSPerkTreeNodeBase*> NodesMap;                                                  // 0x0010(0x0050)  (Parm, ContainsInstancedReference, NativeAccessSpecifierPublic)
};

// Function KillstreakUINew.KSPerkTreeBase.InitializeNodes
struct UKSPerkTreeBase_InitializeNodes_Params
{
	TMap<struct FIntPoint, class UKSPerkTreeNodeBase*> ReturnValue;                                               // 0x0000(0x0050)  (ExportObject, Parm, OutParm, ReturnParm, ContainsInstancedReference, NativeAccessSpecifierPublic)
};

// Function KillstreakUINew.KSPerkTreeBase.HandleTreeNodeSelected
struct UKSPerkTreeBase_HandleTreeNodeSelected_Params
{
	class UKSPerkTreeNodeBase*                         SelectedNode;                                              // 0x0000(0x0008)  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FCustomLoadoutItem                          SelectedPerk;                                              // 0x0008(0x0010)  (Parm, NoDestructor, NativeAccessSpecifierPublic)
	bool                                               bAlreadyEquipped;                                          // 0x0018(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function KillstreakUINew.KSPerkTreeBase.HandleTreeNodeHovered
struct UKSPerkTreeBase_HandleTreeNodeHovered_Params
{
	class UKSPerkTreeNodeBase*                         HoveredNode;                                               // 0x0000(0x0008)  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FCustomLoadoutItem                          HoveredPerk;                                               // 0x0008(0x0010)  (Parm, NoDestructor, NativeAccessSpecifierPublic)
};

// Function KillstreakUINew.KSPerkTreeBase.GetHoverCursor
struct UKSPerkTreeBase_GetHoverCursor_Params
{
	class UWidget*                                     ReturnValue;                                               // 0x0000(0x0008)  (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function KillstreakUINew.KSPerkTreeBase.GetDefaultFocusNode
struct UKSPerkTreeBase_GetDefaultFocusNode_Params
{
	class UKSPerkTreeNodeBase*                         ReturnValue;                                               // 0x0000(0x0008)  (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function KillstreakUINew.KSPerkTreeBase.BindNode
struct UKSPerkTreeBase_BindNode_Params
{
	class UKSPerkTreeNodeBase*                         TreeNode;                                                  // 0x0000(0x0008)  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function KillstreakUINew.KSPerkTreeEdgeBase.SetViewByState
struct UKSPerkTreeEdgeBase_SetViewByState_Params
{
	struct FKSPerkTreeEdgeInfo                         EdgeInfo;                                                  // 0x0000(0x0002)  (Parm, NoDestructor, NativeAccessSpecifierPublic)
};

// Function KillstreakUINew.KSPerkTreeNodeBase.SetNodeState
struct UKSPerkTreeNodeBase_SetNodeState_Params
{
	KillstreakUINew_EPerkTreeNodeState                 NewNodeState;                                              // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function KillstreakUINew.KSPerkTreeNodeBase.RefreshView
struct UKSPerkTreeNodeBase_RefreshView_Params
{
};

// Function KillstreakUINew.KSPerkTreeNodeBase.GetNodeState
struct UKSPerkTreeNodeBase_GetNodeState_Params
{
	KillstreakUINew_EPerkTreeNodeState                 ReturnValue;                                               // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function KillstreakUINew.KSPersistentDataTeamBarWidget.SortPlayerData
struct UKSPersistentDataTeamBarWidget_SortPlayerData_Params
{
	class UKSPersistentPlayerData*                     LHS;                                                       // 0x0000(0x0008)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UKSPersistentPlayerData*                     RHS;                                                       // 0x0008(0x0008)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               ReturnValue;                                               // 0x0010(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function KillstreakUINew.KSPersistentDataTeamBarWidget.ApplyPlayerDataChildWidgets
struct UKSPersistentDataTeamBarWidget_ApplyPlayerDataChildWidgets_Params
{
	TArray<class UKSPersistentPlayerData*>             OrderedData;                                               // 0x0000(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function KillstreakUINew.KSPlayerAmmoLoaderWidget.SetActiveAmmoWidget
struct UKSPlayerAmmoLoaderWidget_SetActiveAmmoWidget_Params
{
	class UClass*                                      NewWidgetClass;                                            // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class AKSWeapon*                                   NewWeapon;                                                 // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function KillstreakUINew.KSPlayerAmmoLoaderWidget.GetActiveAmmoWidget
struct UKSPlayerAmmoLoaderWidget_GetActiveAmmoWidget_Params
{
	class UKSAmmoWidget*                               ReturnValue;                                               // 0x0000(0x0008)  (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function KillstreakUINew.KSPlayerAmmoLoaderWidget.ClearActiveAmmoWidget
struct UKSPlayerAmmoLoaderWidget_ClearActiveAmmoWidget_Params
{
};

// Function KillstreakUINew.KSPlayerAwardsPanelWidget.GetSortedRecentlyProgressedData
struct UKSPlayerAwardsPanelWidget_GetSortedRecentlyProgressedData_Params
{
	TArray<struct FPlayerAwardsPanelData>              AwardData;                                                 // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<struct FPlayerAwardsPanelData>              RecentlyProgressedData;                                    // 0x0010(0x0010)  (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function KillstreakUINew.KSPlayerAwardsPanelWidget.GetActivityAwardData
struct UKSPlayerAwardsPanelWidget_GetActivityAwardData_Params
{
	TArray<struct FPlayerAwardsPanelData>              AwardData;                                                 // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function KillstreakUINew.KSPlayerCardModuleBase.View_SetPlayer
struct UKSPlayerCardModuleBase_View_SetPlayer_Params
{
	class UPUMG_PlayerInfo*                            playerinfo;                                                // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	Killstreak_EKSPlayerOnlineStatus                   PlayerStatus;                                              // 0x0008(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               IsPortalFriend;                                            // 0x0009(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               IsPending;                                                 // 0x000A(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function KillstreakUINew.KSPlayerCardModuleBase.OnPlayerUpdate
struct UKSPlayerCardModuleBase_OnPlayerUpdate_Params
{
	class UPUMG_PlayerInfo*                            playerinfo;                                                // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	Killstreak_EKSPlayerOnlineStatus                   PlayerStatus;                                              // 0x0008(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               IsPortalFriend;                                            // 0x0009(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               IsPending;                                                 // 0x000A(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function KillstreakUINew.KSPlayerCardModuleBase.HandlePlayerDataUpdated
struct UKSPlayerCardModuleBase_HandlePlayerDataUpdated_Params
{
	class UPUMG_PlayerInfo*                            playerinfo;                                                // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function KillstreakUINew.KSPlayerCosmeticWidget.GetItemsForSlot
struct UKSPlayerCosmeticWidget_GetItemsForSlot_Params
{
	Killstreak_EPlayerAccountSlot                      SlotType;                                                  // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function KillstreakUINew.KSPlayerDataFactory.ShouldDisplayRankedLevel
struct UKSPlayerDataFactory_ShouldDisplayRankedLevel_Params
{
	bool                                               ReturnValue;                                               // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function KillstreakUINew.KSPlayerDataFactory.HandlePlayerRankIncremented
struct UKSPlayerDataFactory_HandlePlayerRankIncremented_Params
{
	class UKSActivityInstance*                         ActivityInstance;                                          // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                Count;                                                     // 0x0008(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function KillstreakUINew.KSPlayerDataFactory.HandlePlayerRankChanged
struct UKSPlayerDataFactory_HandlePlayerRankChanged_Params
{
	class UKSActivityInstance*                         Activity;                                                  // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                Tier;                                                      // 0x0008(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                Count;                                                     // 0x000C(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function KillstreakUINew.KSPlayerDataFactory.HandlePlayerLevelIncremented
struct UKSPlayerDataFactory_HandlePlayerLevelIncremented_Params
{
	class UKSActivityInstance*                         ActivityInstance;                                          // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                Count;                                                     // 0x0008(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function KillstreakUINew.KSPlayerDataFactory.HandlePlayerLevelChanged
struct UKSPlayerDataFactory_HandlePlayerLevelChanged_Params
{
	class UKSActivityInstance*                         Activity;                                                  // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                Tier;                                                      // 0x0008(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                Count;                                                     // 0x000C(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function KillstreakUINew.KSPlayerDataFactory.GetRankedLevel
struct UKSPlayerDataFactory_GetRankedLevel_Params
{
	int                                                ReturnValue;                                               // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function KillstreakUINew.KSPlayerDataFactory.GetPlayerLevelPercent
struct UKSPlayerDataFactory_GetPlayerLevelPercent_Params
{
	float                                              ReturnValue;                                               // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function KillstreakUINew.KSPlayerDataFactory.GetPlayerLevel
struct UKSPlayerDataFactory_GetPlayerLevel_Params
{
	int                                                ReturnValue;                                               // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function KillstreakUINew.KSPlayerDataFactory.GetPlayerId
struct UKSPlayerDataFactory_GetPlayerId_Params
{
	int                                                ReturnValue;                                               // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function KillstreakUINew.KSPlayerDataFactory.GetCurrencyItemByItemId
struct UKSPlayerDataFactory_GetCurrencyItemByItemId_Params
{
	int                                                CurrencyItemId;                                            // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UKSCurrency*                                 ReturnValue;                                               // 0x0008(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function KillstreakUINew.KSPlayerDataFactory.GetCurrencyCountByItemId
struct UKSPlayerDataFactory_GetCurrencyCountByItemId_Params
{
	int                                                CurrencyItemId;                                            // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                ReturnValue;                                               // 0x0004(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function KillstreakUINew.KSPlayerHealthSegmentBase.View_SetResidualValue
struct UKSPlayerHealthSegmentBase_View_SetResidualValue_Params
{
	float                                              PercentValue;                                              // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function KillstreakUINew.KSPlayerHealthSegmentBase.View_SetResidualColor
struct UKSPlayerHealthSegmentBase_View_SetResidualColor_Params
{
	struct FLinearColor                                Color;                                                     // 0x0000(0x0010)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function KillstreakUINew.KSPlayerHealthSegmentBase.View_SetMainValue
struct UKSPlayerHealthSegmentBase_View_SetMainValue_Params
{
	float                                              PercentValue;                                              // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bCanTriggerPulse;                                          // 0x0004(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function KillstreakUINew.KSPlayerHealthSegmentBase.View_SetMainColor
struct UKSPlayerHealthSegmentBase_View_SetMainColor_Params
{
	struct FLinearColor                                Color;                                                     // 0x0000(0x0010)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function KillstreakUINew.KSPlayerHealthSegmentBase.View_PlayEmptiedPulse
struct UKSPlayerHealthSegmentBase_View_PlayEmptiedPulse_Params
{
};

// Function KillstreakUINew.KSPlayerHealthSegmentBase.View_PlayDamagePulse
struct UKSPlayerHealthSegmentBase_View_PlayDamagePulse_Params
{
	struct FLinearColor                                PeakColor;                                                 // 0x0000(0x0010)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FLinearColor                                BaseColor;                                                 // 0x0010(0x0010)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function KillstreakUINew.KSPlayerHealthWidgetBase.View_SetResidualPercent
struct UKSPlayerHealthWidgetBase_View_SetResidualPercent_Params
{
	float                                              ResidualPercent;                                           // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function KillstreakUINew.KSPlayerHealthWidgetBase.View_SetResidualMode
struct UKSPlayerHealthWidgetBase_View_SetResidualMode_Params
{
	bool                                               IsHealing;                                                 // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function KillstreakUINew.KSPlayerHealthWidgetBase.View_SetResidualAlpha
struct UKSPlayerHealthWidgetBase_View_SetResidualAlpha_Params
{
	float                                              ResidualAlpha;                                             // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function KillstreakUINew.KSPlayerHealthWidgetBase.View_SetHealthTextValue
struct UKSPlayerHealthWidgetBase_View_SetHealthTextValue_Params
{
	float                                              HealthValue;                                               // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              OverhealValue;                                             // 0x0004(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function KillstreakUINew.KSPlayerHealthWidgetBase.View_SetHealthPercent
struct UKSPlayerHealthWidgetBase_View_SetHealthPercent_Params
{
	float                                              HealthPercent;                                             // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function KillstreakUINew.KSPlayerHealthWidgetBase.View_SetHealthMode
struct UKSPlayerHealthWidgetBase_View_SetHealthMode_Params
{
	bool                                               IsDowned;                                                  // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               IsOverhealed;                                              // 0x0001(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function KillstreakUINew.KSPlayerHealthWidgetBase.View_PlayDamagePulse
struct UKSPlayerHealthWidgetBase_View_PlayDamagePulse_Params
{
};

// Function KillstreakUINew.KSPlayerHealthWidgetBase.View_OnDeathStateChanged
struct UKSPlayerHealthWidgetBase_View_OnDeathStateChanged_Params
{
};

// Function KillstreakUINew.KSPlayerHealthWidgetBase.OnJobChanged
struct UKSPlayerHealthWidgetBase_OnJobChanged_Params
{
	class UKSJobItem*                                  Job;                                                       // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function KillstreakUINew.KSPlayerHealthWidgetBase.OnHealthMeterStateChanged
struct UKSPlayerHealthWidgetBase_OnHealthMeterStateChanged_Params
{
};

// Function KillstreakUINew.KSPlayerHealthWidgetBase.OnHealthDecreased
struct UKSPlayerHealthWidgetBase_OnHealthDecreased_Params
{
};

// Function KillstreakUINew.KSPlayerHealthWidgetBase.HandlePlayerDownedChanged
struct UKSPlayerHealthWidgetBase_HandlePlayerDownedChanged_Params
{
	class AKSPlayerState*                              pKSPlayerState;                                            // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function KillstreakUINew.KSPlayerHealthWidgetBase.HandleJobChanged
struct UKSPlayerHealthWidgetBase_HandleJobChanged_Params
{
};

// Function KillstreakUINew.KSPlayerHealthWidgetBase.HandleDeathStateChanged
struct UKSPlayerHealthWidgetBase_HandleDeathStateChanged_Params
{
};

// Function KillstreakUINew.JobSelectionEntryDetails.IsSelf
struct UJobSelectionEntryDetails_IsSelf_Params
{
	bool                                               ReturnValue;                                               // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function KillstreakUINew.JobSelectionEntryDetails.IsOwned
struct UJobSelectionEntryDetails_IsOwned_Params
{
	bool                                               ReturnValue;                                               // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function KillstreakUINew.JobSelectionEntryDetails.GetJobName
struct UJobSelectionEntryDetails_GetJobName_Params
{
	struct FText                                       ReturnValue;                                               // 0x0000(0x0018)  (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
};

// Function KillstreakUINew.JobSelectionEntryDetails.GetJobItem
struct UJobSelectionEntryDetails_GetJobItem_Params
{
	class UKSJobItem*                                  ReturnValue;                                               // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function KillstreakUINew.KSPlayerJobSelectWidgetBase.UIX_RequestJobSelect
struct UKSPlayerJobSelectWidgetBase_UIX_RequestJobSelect_Params
{
	class UJobSelectionEntryDetails*                   JobEntry;                                                  // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	Killstreak_EJobSelectionState                      RequestedState;                                            // 0x0008(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               ReturnValue;                                               // 0x0009(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function KillstreakUINew.KSPlayerJobSelectWidgetBase.OnResetSelection
struct UKSPlayerJobSelectWidgetBase_OnResetSelection_Params
{
};

// Function KillstreakUINew.KSPlayerJobSelectWidgetBase.OnPlayerSelectionStateChanged
struct UKSPlayerJobSelectWidgetBase_OnPlayerSelectionStateChanged_Params
{
	KillstreakUINew_EPlayerSelectionState              NewState;                                                  // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function KillstreakUINew.KSPlayerJobSelectWidgetBase.OnJobEntryChanged
struct UKSPlayerJobSelectWidgetBase_OnJobEntryChanged_Params
{
	class UJobSelectionEntryDetails*                   JobEntry;                                                  // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               EnemyTeam;                                                 // 0x0008(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function KillstreakUINew.KSPlayerJobSelectWidgetBase.OnJobEntriesReady
struct UKSPlayerJobSelectWidgetBase_OnJobEntriesReady_Params
{
	TArray<class UJobSelectionEntryDetails*>           JobEntries;                                                // 0x0000(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               EnemyTeam;                                                 // 0x0010(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function KillstreakUINew.KSPlayerJobSelectWidgetBase.HandleTeamAddedToMatch
struct UKSPlayerJobSelectWidgetBase_HandleTeamAddedToMatch_Params
{
	class AKSTeamState*                                NewTeam;                                                   // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function KillstreakUINew.KSPlayerJobSelectWidgetBase.HandleNewJobSelectionComponent
struct UKSPlayerJobSelectWidgetBase_HandleNewJobSelectionComponent_Params
{
	class UKSJobSelectionComponent*                    NewJobSelectionComponent;                                  // 0x0000(0x0008)  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function KillstreakUINew.KSPlayerJobSelectWidgetBase.HandleJobSelectionManagerReady
struct UKSPlayerJobSelectWidgetBase_HandleJobSelectionManagerReady_Params
{
	class UKSJobSelectionManager*                      JobSelectionManager;                                       // 0x0000(0x0008)  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function KillstreakUINew.KSPlayerJobSelectWidgetBase.HandleJobSelectionInitialized
struct UKSPlayerJobSelectWidgetBase_HandleJobSelectionInitialized_Params
{
};

// Function KillstreakUINew.KSPlayerJobSelectWidgetBase.HandleJobEntryStateChangedForEnemies
struct UKSPlayerJobSelectWidgetBase_HandleJobEntryStateChangedForEnemies_Params
{
	struct FJobSelectionEntry                          JobEntry;                                                  // 0x0000(0x0028)  (Parm, NativeAccessSpecifierPublic)
};

// Function KillstreakUINew.KSPlayerJobSelectWidgetBase.HandleJobEntryStateChanged
struct UKSPlayerJobSelectWidgetBase_HandleJobEntryStateChanged_Params
{
	struct FJobSelectionEntry                          JobEntry;                                                  // 0x0000(0x0028)  (Parm, NativeAccessSpecifierPublic)
};

// Function KillstreakUINew.KSPlayerJobSelectWidgetBase.HandleJobEntryAddedForEnemies
struct UKSPlayerJobSelectWidgetBase_HandleJobEntryAddedForEnemies_Params
{
	struct FJobSelectionEntry                          JobEntry;                                                  // 0x0000(0x0028)  (Parm, NativeAccessSpecifierPublic)
};

// Function KillstreakUINew.KSPlayerJobSelectWidgetBase.HandleJobEntryAdded
struct UKSPlayerJobSelectWidgetBase_HandleJobEntryAdded_Params
{
	struct FJobSelectionEntry                          JobEntry;                                                  // 0x0000(0x0028)  (Parm, NativeAccessSpecifierPublic)
};

// Function KillstreakUINew.KSPlayerJobSelectWidgetBase.HandleJobEntryAcknowledge
struct UKSPlayerJobSelectWidgetBase_HandleJobEntryAcknowledge_Params
{
	int                                                ItemId;                                                    // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bSuccess;                                                  // 0x0004(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	Killstreak_EJobSelectionState                      RequestState;                                              // 0x0005(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function KillstreakUINew.KSPlayerJobSelectWidgetBase.GetJobSelectionComponent
struct UKSPlayerJobSelectWidgetBase_GetJobSelectionComponent_Params
{
	class UKSJobSelectionComponent*                    ReturnValue;                                               // 0x0000(0x0008)  (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function KillstreakUINew.KSPlayerJobSelectWidgetBase.GetJobItemById
struct UKSPlayerJobSelectWidgetBase_GetJobItemById_Params
{
	int                                                JobItemId;                                                 // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UKSJobItem*                                  ReturnValue;                                               // 0x0008(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function KillstreakUINew.KSPlayerJobSelectWidgetBase.BindListenersForTeam
struct UKSPlayerJobSelectWidgetBase_BindListenersForTeam_Params
{
	class AKSTeamState*                                Team;                                                      // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function KillstreakUINew.KSPlayerQueryDataFactory.QueryPlayersByNameWithProfiles
struct UKSPlayerQueryDataFactory_QueryPlayersByNameWithProfiles_Params
{
	struct FText                                       PlayerName;                                                // 0x0000(0x0018)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	struct FScriptDelegate                             OnReponse;                                                 // 0x0018(0x0010)  (Parm, ZeroConstructor, NoDestructor, NativeAccessSpecifierPublic)
	struct FKSPlayerQueryHandle                        OutHandle;                                                 // 0x0028(0x0010)  (Parm, OutParm, NoDestructor, NativeAccessSpecifierPublic)
	bool                                               ReturnValue;                                               // 0x0038(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function KillstreakUINew.KSPlayerQueryDataFactory.QueryPlayersByName
struct UKSPlayerQueryDataFactory_QueryPlayersByName_Params
{
	struct FText                                       PlayerName;                                                // 0x0000(0x0018)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	struct FScriptDelegate                             OnReponse;                                                 // 0x0018(0x0010)  (Parm, ZeroConstructor, NoDestructor, NativeAccessSpecifierPublic)
	struct FKSPlayerQueryHandle                        OutHandle;                                                 // 0x0028(0x0010)  (Parm, OutParm, NoDestructor, NativeAccessSpecifierPublic)
	bool                                               ReturnValue;                                               // 0x0038(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function KillstreakUINew.KSPlayerQueryDataFactory.OnTimeoutCheck
struct UKSPlayerQueryDataFactory_OnTimeoutCheck_Params
{
};

// Function KillstreakUINew.KSPlayerQueryDataFactory.GetQueriedName
struct UKSPlayerQueryDataFactory_GetQueriedName_Params
{
	struct FKSPlayerQueryHandle                        InHandle;                                                  // 0x0000(0x0010)  (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	struct FText                                       ReturnValue;                                               // 0x0010(0x0018)  (ConstParm, Parm, OutParm, ReturnParm, ReferenceParm, NativeAccessSpecifierPublic)
};

// Function KillstreakUINew.KSPlayerQueryDataFactory.GetPlayerQueryErrorMessage
struct UKSPlayerQueryDataFactory_GetPlayerQueryErrorMessage_Params
{
	KillstreakUINew_EKSPlayerQueryError                Error;                                                     // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FText                                       ReturnValue;                                               // 0x0008(0x0018)  (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
};

// Function KillstreakUINew.KSPlayerQueryDataFactory.CancelQuery
struct UKSPlayerQueryDataFactory_CancelQuery_Params
{
	struct FKSPlayerQueryHandle                        InHandle;                                                  // 0x0000(0x0010)  (Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
};

// Function KillstreakUINew.KSPlayerShopWidgetBase.TriggerDisplayUpdate
struct UKSPlayerShopWidgetBase_TriggerDisplayUpdate_Params
{
	bool                                               ForceUpdate;                                               // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function KillstreakUINew.KSPlayerShopWidgetBase.ShopItemChanged
struct UKSPlayerShopWidgetBase_ShopItemChanged_Params
{
	struct FShopItem                                   ChangedItem;                                               // 0x0000(0x0070)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
};

// Function KillstreakUINew.KSPlayerShopWidgetBase.SetShopState
struct UKSPlayerShopWidgetBase_SetShopState_Params
{
	bool                                               IsOpen;                                                    // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function KillstreakUINew.KSPlayerShopWidgetBase.SetShopContent
struct UKSPlayerShopWidgetBase_SetShopContent_Params
{
};

// Function KillstreakUINew.KSPlayerShopWidgetBase.SetPromptShow
struct UKSPlayerShopWidgetBase_SetPromptShow_Params
{
	bool                                               ShouldShowPrompt;                                          // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function KillstreakUINew.KSPlayerShopWidgetBase.SetCashValue
struct UKSPlayerShopWidgetBase_SetCashValue_Params
{
	int                                                CashValue;                                                 // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function KillstreakUINew.KSPlayerShopWidgetBase.PurchaseAcknowledge
struct UKSPlayerShopWidgetBase_PurchaseAcknowledge_Params
{
	Killstreak_EShopItemType                           ShopItemType;                                              // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function KillstreakUINew.KSPlayerShopWidgetBase.IsShopOfferingMastered
struct UKSPlayerShopWidgetBase_IsShopOfferingMastered_Params
{
	class UKSItem*                                     KSItem;                                                    // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               ReturnValue;                                               // 0x0008(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function KillstreakUINew.KSPlayerShopWidgetBase.HandleTeamsFlipped
struct UKSPlayerShopWidgetBase_HandleTeamsFlipped_Params
{
};

// Function KillstreakUINew.KSPlayerShopWidgetBase.HandleShopOpened
struct UKSPlayerShopWidgetBase_HandleShopOpened_Params
{
	class AKSPlayerShop*                               KSPlayerShop;                                              // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function KillstreakUINew.KSPlayerShopWidgetBase.HandleShopOfferingsChanged
struct UKSPlayerShopWidgetBase_HandleShopOfferingsChanged_Params
{
	Killstreak_EShopItemType                           ShopItemType;                                              // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<struct FPrimaryOffering>                    Offerings;                                                 // 0x0008(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function KillstreakUINew.KSPlayerShopWidgetBase.HandleShopItemChanged
struct UKSPlayerShopWidgetBase_HandleShopItemChanged_Params
{
	struct FShopItem                                   ChangedItem;                                               // 0x0000(0x0070)  (Parm, NativeAccessSpecifierPublic)
};

// Function KillstreakUINew.KSPlayerShopWidgetBase.HandleShopClosed
struct UKSPlayerShopWidgetBase_HandleShopClosed_Params
{
	class AKSPlayerShop*                               KSPlayerShop;                                              // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function KillstreakUINew.KSPlayerShopWidgetBase.HandleShopAvailabilityChanged
struct UKSPlayerShopWidgetBase_HandleShopAvailabilityChanged_Params
{
	class AKSPlayerShop*                               KSPlayerShop;                                              // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function KillstreakUINew.KSPlayerShopWidgetBase.HandlePurchaseAcknowledged
struct UKSPlayerShopWidgetBase_HandlePurchaseAcknowledged_Params
{
	Killstreak_EShopItemType                           ShopItemType;                                              // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bSuccess;                                                  // 0x0001(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function KillstreakUINew.KSPlayerShopWidgetBase.HandleCashChanged
struct UKSPlayerShopWidgetBase_HandleCashChanged_Params
{
	int                                                cash;                                                      // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                Delta;                                                     // 0x0004(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function KillstreakUINew.KSPlayerShopWidgetBase.CheckForValidPlayerState
struct UKSPlayerShopWidgetBase_CheckForValidPlayerState_Params
{
};

// Function KillstreakUINew.KSPlayerWhoDataFactory.ClearSearchResults
struct UKSPlayerWhoDataFactory_ClearSearchResults_Params
{
};

// Function KillstreakUINew.KSPointObjectiveMarkerWidget.ViewShowTeamCelebration
struct UKSPointObjectiveMarkerWidget_ViewShowTeamCelebration_Params
{
	class AKSTeamState*                                TeamState;                                                 // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function KillstreakUINew.KSPointObjectiveMarkerWidget.ViewSetCaptureProgress
struct UKSPointObjectiveMarkerWidget_ViewSetCaptureProgress_Params
{
	float                                              ProgressPercent;                                           // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function KillstreakUINew.KSPointObjectiveMarkerWidget.ViewApplyTimerValue
struct UKSPointObjectiveMarkerWidget_ViewApplyTimerValue_Params
{
	float                                              TimerSeconds;                                              // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function KillstreakUINew.KSPointObjectiveMarkerWidget.ViewApplyTimerPrioritiesChanged
struct UKSPointObjectiveMarkerWidget_ViewApplyTimerPrioritiesChanged_Params
{
};

// Function KillstreakUINew.KSPointObjectiveMarkerWidget.ViewApplyObjectiveProgress
struct UKSPointObjectiveMarkerWidget_ViewApplyObjectiveProgress_Params
{
	float                                              TimerSeconds;                                              // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              TotalTimerSeconds;                                         // 0x0004(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function KillstreakUINew.KSPointObjectiveMarkerWidget.ShouldHideObjectiveIcon
struct UKSPointObjectiveMarkerWidget_ShouldHideObjectiveIcon_Params
{
	bool                                               ReturnValue;                                               // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function KillstreakUINew.KSPointObjectiveMarkerWidget.SetView
struct UKSPointObjectiveMarkerWidget_SetView_Params
{
	struct FKSPointObjectiveMarkerViewState            ViewState;                                                 // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
};

// Function KillstreakUINew.KSPointObjectiveMarkerWidget.SetTeamColorsForState
struct UKSPointObjectiveMarkerWidget_SetTeamColorsForState_Params
{
	TMap<KillstreakUINew_EPointObjectiveMarkerTeamState, struct FLinearColor> StateColors;                                               // 0x0000(0x0050)  (Parm, NativeAccessSpecifierPublic)
};

// Function KillstreakUINew.KSPointObjectiveMarkerWidget.SetTeamColorForState
struct UKSPointObjectiveMarkerWidget_SetTeamColorForState_Params
{
	KillstreakUINew_EPointObjectiveMarkerTeamState     ObjectiveState;                                            // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FLinearColor                                StateColor;                                                // 0x0004(0x0010)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               ReturnValue;                                               // 0x0014(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function KillstreakUINew.KSPointObjectiveMarkerWidget.SetMarkerTimerType
struct UKSPointObjectiveMarkerWidget_SetMarkerTimerType_Params
{
	Killstreak_EGameTimerType                          NewMarkerTimerType;                                        // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function KillstreakUINew.KSPointObjectiveMarkerWidget.IsInTimerState
struct UKSPointObjectiveMarkerWidget_IsInTimerState_Params
{
	bool                                               ReturnValue;                                               // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function KillstreakUINew.KSPointObjectiveMarkerWidget.IsInProgressState
struct UKSPointObjectiveMarkerWidget_IsInProgressState_Params
{
	bool                                               ReturnValue;                                               // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function KillstreakUINew.KSPointObjectiveMarkerWidget.IsInMatchTimerState
struct UKSPointObjectiveMarkerWidget_IsInMatchTimerState_Params
{
	bool                                               ReturnValue;                                               // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function KillstreakUINew.KSPointObjectiveMarkerWidget.IsInLockedState
struct UKSPointObjectiveMarkerWidget_IsInLockedState_Params
{
	bool                                               ReturnValue;                                               // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function KillstreakUINew.KSPointObjectiveMarkerWidget.IsInCountdownState
struct UKSPointObjectiveMarkerWidget_IsInCountdownState_Params
{
	bool                                               ReturnValue;                                               // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function KillstreakUINew.KSPointObjectiveMarkerWidget.IsInContestedState
struct UKSPointObjectiveMarkerWidget_IsInContestedState_Params
{
	bool                                               ReturnValue;                                               // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function KillstreakUINew.KSPointObjectiveMarkerWidget.IsInCapturedState
struct UKSPointObjectiveMarkerWidget_IsInCapturedState_Params
{
	bool                                               ReturnValue;                                               // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function KillstreakUINew.KSPointObjectiveMarkerWidget.HandleTeamCelebration
struct UKSPointObjectiveMarkerWidget_HandleTeamCelebration_Params
{
	class AKSTeamState*                                TeamState;                                                 // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function KillstreakUINew.KSPointObjectiveMarkerWidget.HandlePhaseChanged
struct UKSPointObjectiveMarkerWidget_HandlePhaseChanged_Params
{
	struct FMatchPhase                                 NewPhase;                                                  // 0x0000(0x000C)  (Parm, NoDestructor, NativeAccessSpecifierPublic)
	struct FMatchPhase                                 PreviousPhase;                                             // 0x000C(0x000C)  (Parm, NoDestructor, NativeAccessSpecifierPublic)
};

// Function KillstreakUINew.KSPointObjectiveMarkerWidget.HandleObjectiveUnregistered
struct UKSPointObjectiveMarkerWidget_HandleObjectiveUnregistered_Params
{
};

// Function KillstreakUINew.KSPointObjectiveMarkerWidget.HandleObjectiveStateChanged
struct UKSPointObjectiveMarkerWidget_HandleObjectiveStateChanged_Params
{
};

// Function KillstreakUINew.KSPointObjectiveMarkerWidget.HandleMarkerTimerPrioritiesChanged
struct UKSPointObjectiveMarkerWidget_HandleMarkerTimerPrioritiesChanged_Params
{
};

// Function KillstreakUINew.KSPointObjectiveMarkerWidget.GetMarkerTimerPriority
struct UKSPointObjectiveMarkerWidget_GetMarkerTimerPriority_Params
{
	Killstreak_EKSPriority                             ReturnValue;                                               // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function KillstreakUINew.KSPointObjectiveMarkerWidget.GetCurrentViewState
struct UKSPointObjectiveMarkerWidget_GetCurrentViewState_Params
{
	struct FKSPointObjectiveMarkerViewState            ReturnValue;                                               // 0x0000(0x0004)  (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, ReferenceParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
};

// Function KillstreakUINew.KSPointObjectiveMarkerWidget.GetAssociatedPOI
struct UKSPointObjectiveMarkerWidget_GetAssociatedPOI_Params
{
};

// Function KillstreakUINew.KSPointObjectiveMarkerWidget.GetAssociatedObjective
struct UKSPointObjectiveMarkerWidget_GetAssociatedObjective_Params
{
};

// Function KillstreakUINew.KSPointObjectiveMarkerWidget.DoesAttackingTeamExist
struct UKSPointObjectiveMarkerWidget_DoesAttackingTeamExist_Params
{
	bool                                               IsLocalPlayerOnAttackingTeam;                              // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               ReturnValue;                                               // 0x0001(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function KillstreakUINew.KSPortalOffersWidget.GetPortalOfferItems
struct UKSPortalOffersWidget_GetPortalOfferItems_Params
{
	TArray<class UPUMG_StoreItem*>                     ReturnValue;                                               // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function KillstreakUINew.KSPortalOffersWidget.GetItemHelper
struct UKSPortalOffersWidget_GetItemHelper_Params
{
	class UKSStoreItemHelper*                          ReturnValue;                                               // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function KillstreakUINew.KSProfileRogueStatsWidget.GetActiveJobIds
struct UKSProfileRogueStatsWidget_GetActiveJobIds_Params
{
	TArray<int64_t>                                    ReturnValue;                                               // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function KillstreakUINew.KSProgressionTallyWidget.SetPlayerProgressionData
struct UKSProgressionTallyWidget_SetPlayerProgressionData_Params
{
	struct FPlayerProgression                          PlayerProgression;                                         // 0x0000(0x0170)  (Parm, NativeAccessSpecifierPublic)
};

// Function KillstreakUINew.KSProgressionTallyWidget.GetPlayerProgressionBreakdown
struct UKSProgressionTallyWidget_GetPlayerProgressionBreakdown_Params
{
	int                                                BaseXP;                                                    // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                EventBonusXP;                                              // 0x0004(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                WinBonusXP;                                                // 0x0008(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                BackfillBonusXP;                                           // 0x000C(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                MiscGainedXP;                                              // 0x0010(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function KillstreakUINew.KSProgressionTallyWidget.GetMiscXPInfo
struct UKSProgressionTallyWidget_GetMiscXPInfo_Params
{
	struct FProgressionTallyMiscXPInfo                 ReturnValue;                                               // 0x0000(0x0020)  (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
};

// Function KillstreakUINew.KSProgressMeterWidgetBase.SetDeltaAnimationParams
struct UKSProgressMeterWidgetBase_SetDeltaAnimationParams_Params
{
	float                                              BasePercent;                                               // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              DeltaPercent;                                              // 0x0004(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              AnimTime;                                                  // 0x0008(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function KillstreakUINew.KSProgressMeterWidgetBase.PlayDeltaAnimation
struct UKSProgressMeterWidgetBase_PlayDeltaAnimation_Params
{
	float                                              StartDelay;                                                // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function KillstreakUINew.KSProgressMeterWidgetBase.OnDeltaAnimationTicked
struct UKSProgressMeterWidgetBase_OnDeltaAnimationTicked_Params
{
};

// Function KillstreakUINew.KSProgressMeterWidgetBase.OnDeltaAnimationStarted
struct UKSProgressMeterWidgetBase_OnDeltaAnimationStarted_Params
{
};

// Function KillstreakUINew.KSProgressMeterWidgetBase.OnDeltaAnimationFinished
struct UKSProgressMeterWidgetBase_OnDeltaAnimationFinished_Params
{
	bool                                               bLevelChange;                                              // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function KillstreakUINew.KSProgressMeterWidgetBase.IsPlayingDeltaAnimation
struct UKSProgressMeterWidgetBase_IsPlayingDeltaAnimation_Params
{
	bool                                               ReturnValue;                                               // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function KillstreakUINew.KSProgressMeterWidgetBase.EnableDeltaAnimation
struct UKSProgressMeterWidgetBase_EnableDeltaAnimation_Params
{
};

// Function KillstreakUINew.KSProgressMeterWidgetBase.ApplyMeterPercentages_Raw
struct UKSProgressMeterWidgetBase_ApplyMeterPercentages_Raw_Params
{
	float                                              BasePercent;                                               // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              DeltaPercent;                                              // 0x0004(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function KillstreakUINew.KSProgressMeterWidgetBase.ApplyMeterPercentages
struct UKSProgressMeterWidgetBase_ApplyMeterPercentages_Params
{
	float                                              BasePercent;                                               // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              DeltaPercent;                                              // 0x0004(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function KillstreakUINew.KSPurchaseConfirmationWidget.TryChangePurchaseQuantity
struct UKSPurchaseConfirmationWidget_TryChangePurchaseQuantity_Params
{
	int                                                QuantityChangeAmount;                                      // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               ReturnValue;                                               // 0x0004(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function KillstreakUINew.KSPurchaseConfirmationWidget.SubmitPurchaseWithAdditionalCurrency
struct UKSPurchaseConfirmationWidget_SubmitPurchaseWithAdditionalCurrency_Params
{
	bool                                               ReturnValue;                                               // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function KillstreakUINew.KSPurchaseConfirmationWidget.SetupEquipOnPurchase
struct UKSPurchaseConfirmationWidget_SetupEquipOnPurchase_Params
{
	class UKSEquipOnAcquisitionData*                   EquipOnPurchaseData;                                       // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function KillstreakUINew.KSPurchaseConfirmationWidget.PromptAlreadyPurchasing
struct UKSPurchaseConfirmationWidget_PromptAlreadyPurchasing_Params
{
};

// Function KillstreakUINew.KSPurchaseConfirmationWidget.OnPurchaseComplete
struct UKSPurchaseConfirmationWidget_OnPurchaseComplete_Params
{
	bool                                               bCompletedPurchase;                                        // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function KillstreakUINew.KSPurchaseConfirmationWidget.GetStoreItemHelper
struct UKSPurchaseConfirmationWidget_GetStoreItemHelper_Params
{
	class UKSStoreItemHelper*                          ReturnValue;                                               // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function KillstreakUINew.KSPurchaseConfirmationWidget.GetAdditionalCurrencyPurchaseData
struct UKSPurchaseConfirmationWidget_GetAdditionalCurrencyPurchaseData_Params
{
	class UKSStoreItemWithPurchaseData*                ReturnValue;                                               // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function KillstreakUINew.KSPurchaseConfirmationWidget.CanChangePurchaseQuantity
struct UKSPurchaseConfirmationWidget_CanChangePurchaseQuantity_Params
{
	int                                                QuantityChangeAmount;                                      // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               ReturnValue;                                               // 0x0004(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function KillstreakUINew.KSPurchaseModal.SetupBindings
struct UKSPurchaseModal_SetupBindings_Params
{
};

// Function KillstreakUINew.KSPurchaseModal.HandleShowPurchaseModal
struct UKSPurchaseModal_HandleShowPurchaseModal_Params
{
	class UPUMG_StoreItem*                             Item;                                                      // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UPUMG_StoreItemPrice*                        Price;                                                     // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function KillstreakUINew.KSPurchaseModal.GetStoreItemHelper
struct UKSPurchaseModal_GetStoreItemHelper_Params
{
	class UPUMG_StoreItemHelper*                       ReturnValue;                                               // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function KillstreakUINew.KSQueueDataFactory.SortQueues
struct UKSQueueDataFactory_SortQueues_Params
{
	TArray<struct FClientQueueInfo>                    ClientCachedQueueInfo;                                     // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               IsAlphanumerical;                                          // 0x0010(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<struct FClientQueueInfo>                    ReturnValue;                                               // 0x0018(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function KillstreakUINew.KSQueueDataFactory.SetSelectedQueueId
struct UKSQueueDataFactory_SetSelectedQueueId_Params
{
	int                                                QueueId;                                                   // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               ReturnValue;                                               // 0x0004(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function KillstreakUINew.KSQueueDataFactory.SetPreviousCustomMatchMemberIds
struct UKSQueueDataFactory_SetPreviousCustomMatchMemberIds_Params
{
	TArray<int64_t>                                    PreviousMembers;                                           // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function KillstreakUINew.KSQueueDataFactory.RetryJoinAlternateQueue
struct UKSQueueDataFactory_RetryJoinAlternateQueue_Params
{
	int                                                QueueId;                                                   // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function KillstreakUINew.KSQueueDataFactory.QualifiesForShelteredMM
struct UKSQueueDataFactory_QualifiesForShelteredMM_Params
{
	int                                                QueueId;                                                   // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FClientQueueInfo                            QueueInfo;                                                 // 0x0008(0x00C8)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	bool                                               RetryFlag;                                                 // 0x00D0(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               ReturnValue;                                               // 0x00D1(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function KillstreakUINew.KSQueueDataFactory.QualifiesForMercyMatch
struct UKSQueueDataFactory_QualifiesForMercyMatch_Params
{
	int                                                QueueId;                                                   // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FClientQueueInfo                            QueueInfo;                                                 // 0x0008(0x00C8)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	bool                                               RetryFlag;                                                 // 0x00D0(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               ReturnValue;                                               // 0x00D1(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function KillstreakUINew.KSQueueDataFactory.QualifiesForForcedBots
struct UKSQueueDataFactory_QualifiesForForcedBots_Params
{
	int                                                QueueId;                                                   // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FClientQueueInfo                            QueueInfo;                                                 // 0x0008(0x00C8)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	bool                                               RetryFlag;                                                 // 0x00D0(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               ReturnValue;                                               // 0x00D1(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function KillstreakUINew.KSQueueDataFactory.PopulateMapInfos
struct UKSQueueDataFactory_PopulateMapInfos_Params
{
};

// Function KillstreakUINew.KSQueueDataFactory.OnPartyMemberUpdate
struct UKSQueueDataFactory_OnPartyMemberUpdate_Params
{
	struct FPUMG_PartyMemberData                       Member;                                                    // 0x0000(0x0030)  (Parm, NativeAccessSpecifierPublic)
};

// Function KillstreakUINew.KSQueueDataFactory.OnPartyMemberEvent
struct UKSQueueDataFactory_OnPartyMemberEvent_Params
{
	int64_t                                            PlayerId;                                                  // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function KillstreakUINew.KSQueueDataFactory.OnPartyEvent
struct UKSQueueDataFactory_OnPartyEvent_Params
{
};

// Function KillstreakUINew.KSQueueDataFactory.OnInputStateChanged
struct UKSQueueDataFactory_OnInputStateChanged_Params
{
	TEnumAsByte<PlatformGameFramework_EPGAME_INPUT_STATE> InputState;                                                // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function KillstreakUINew.KSQueueDataFactory.JoinSelectedQueue
struct UKSQueueDataFactory_JoinSelectedQueue_Params
{
	bool                                               ReturnValue;                                               // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function KillstreakUINew.KSQueueDataFactory.IsTutorialQueue
struct UKSQueueDataFactory_IsTutorialQueue_Params
{
	int                                                QueueId;                                                   // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               ReturnValue;                                               // 0x0004(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function KillstreakUINew.KSQueueDataFactory.IsRankedQueue
struct UKSQueueDataFactory_IsRankedQueue_Params
{
	int                                                QueueId;                                                   // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               ReturnValue;                                               // 0x0004(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function KillstreakUINew.KSQueueDataFactory.IsQueueAvailableOnPlatform
struct UKSQueueDataFactory_IsQueueAvailableOnPlatform_Params
{
	struct FPUMG_ClientQueueInfo                       QueueInfo;                                                 // 0x0000(0x0050)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	bool                                               ReturnValue;                                               // 0x0050(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function KillstreakUINew.KSQueueDataFactory.IsCustomSpectateEnabled
struct UKSQueueDataFactory_IsCustomSpectateEnabled_Params
{
	bool                                               ReturnValue;                                               // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function KillstreakUINew.KSQueueDataFactory.HandleShelteredMMTimeout
struct UKSQueueDataFactory_HandleShelteredMMTimeout_Params
{
	int                                                QueueId;                                                   // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function KillstreakUINew.KSQueueDataFactory.HandleShelteredMMSwitchFinish
struct UKSQueueDataFactory_HandleShelteredMMSwitchFinish_Params
{
	bool                                               bSendNotify;                                               // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bClearTimer;                                               // 0x0001(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function KillstreakUINew.KSQueueDataFactory.HandleShelteredMMQueueSwitch
struct UKSQueueDataFactory_HandleShelteredMMQueueSwitch_Params
{
	int                                                QueueId;                                                   // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function KillstreakUINew.KSQueueDataFactory.GetSelectedShelteredQueueId
struct UKSQueueDataFactory_GetSelectedShelteredQueueId_Params
{
	int                                                ReturnValue;                                               // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function KillstreakUINew.KSQueueDataFactory.GetSelectedQueueId
struct UKSQueueDataFactory_GetSelectedQueueId_Params
{
	int                                                ReturnValue;                                               // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function KillstreakUINew.KSQueueDataFactory.GetQueueInfoById
struct UKSQueueDataFactory_GetQueueInfoById_Params
{
	int                                                QueueId;                                                   // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FClientQueueInfo                            InClientQueueInfo;                                         // 0x0008(0x00C8)  (Parm, OutParm, NativeAccessSpecifierPublic)
	bool                                               ReturnValue;                                               // 0x00D0(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function KillstreakUINew.KSQueueDataFactory.GetPenaltyTime
struct UKSQueueDataFactory_GetPenaltyTime_Params
{
	int                                                ReturnValue;                                               // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function KillstreakUINew.KSQueueDataFactory.GetMercyMatchConsecutiveLossesActivity
struct UKSQueueDataFactory_GetMercyMatchConsecutiveLossesActivity_Params
{
	class UKSActivity*                                 ReturnValue;                                               // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function KillstreakUINew.KSQueueDataFactory.GetMatchesPlayedActivity
struct UKSQueueDataFactory_GetMatchesPlayedActivity_Params
{
	class UKSActivity*                                 ReturnValue;                                               // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function KillstreakUINew.KSQueueDataFactory.GetMapRotationsByQueueId
struct UKSQueueDataFactory_GetMapRotationsByQueueId_Params
{
	int                                                QueueId;                                                   // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<int>                                        MapIds;                                                    // 0x0008(0x0010)  (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               ReturnValue;                                               // 0x0018(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function KillstreakUINew.KSQueueDataFactory.GetMapInfoById
struct UKSQueueDataFactory_GetMapInfoById_Params
{
	int                                                MapId;                                                     // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FMapDetail                                  MapDetail;                                                 // 0x0008(0x0048)  (Parm, OutParm, NativeAccessSpecifierPublic)
	bool                                               ReturnValue;                                               // 0x0050(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function KillstreakUINew.KSQueueDataFactory.GetCustomQueues
struct UKSQueueDataFactory_GetCustomQueues_Params
{
	TArray<struct FClientQueueInfo>                    ReturnValue;                                               // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function KillstreakUINew.KSQueueDataFactory.GetCurrentCustomMatchInfo
struct UKSQueueDataFactory_GetCurrentCustomMatchInfo_Params
{
	struct FClientQueueInfo                            InClientQueueInfo;                                         // 0x0000(0x00C8)  (Parm, OutParm, NativeAccessSpecifierPublic)
	bool                                               ReturnValue;                                               // 0x00C8(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function KillstreakUINew.KSQueueDataFactory.FormatQueueJoinErrorMessage
struct UKSQueueDataFactory_FormatQueueJoinErrorMessage_Params
{
	struct FClientQueueInfo                            Queue;                                                     // 0x0000(0x00C8)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	KillstreakUINew_EKSQueueJoinError                  Error;                                                     // 0x00C8(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FText                                       OutErrorMessage;                                           // 0x00D0(0x0018)  (Parm, OutParm, NativeAccessSpecifierPublic)
	bool                                               ReturnValue;                                               // 0x00E8(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function KillstreakUINew.KSQueueDataFactory.CheckQueueJoinableById
struct UKSQueueDataFactory_CheckQueueJoinableById_Params
{
	int                                                QueueId;                                                   // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	KillstreakUINew_EKSQueueJoinError                  ReturnValue;                                               // 0x0004(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function KillstreakUINew.KSQueueDataFactory.CheckQueueJoinable
struct UKSQueueDataFactory_CheckQueueJoinable_Params
{
	struct FClientQueueInfo                            Queue;                                                     // 0x0000(0x00C8)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	KillstreakUINew_EKSQueueJoinError                  ReturnValue;                                               // 0x00C8(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function KillstreakUINew.KSQueuedMessageWidget.QueueMessage
struct UKSQueuedMessageWidget_QueueMessage_Params
{
	struct FText                                       Message;                                                   // 0x0000(0x0018)  (Parm, NativeAccessSpecifierPublic)
};

// Function KillstreakUINew.KSQueuedMessageWidget.GetNextMessage
struct UKSQueuedMessageWidget_GetNextMessage_Params
{
	struct FText                                       Message;                                                   // 0x0000(0x0018)  (Parm, OutParm, NativeAccessSpecifierPublic)
	bool                                               ReturnValue;                                               // 0x0018(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function KillstreakUINew.KSQueueWidgetBase.UpdateQueueSelection
struct UKSQueueWidgetBase_UpdateQueueSelection_Params
{
};

// Function KillstreakUINew.KSQueueWidgetBase.UpdateQueuePermissions
struct UKSQueueWidgetBase_UpdateQueuePermissions_Params
{
};

// Function KillstreakUINew.KSQueueWidgetBase.UIX_AttemptRejoinMatch
struct UKSQueueWidgetBase_UIX_AttemptRejoinMatch_Params
{
	bool                                               ReturnValue;                                               // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function KillstreakUINew.KSQueueWidgetBase.UIX_AttemptLeaveMatch
struct UKSQueueWidgetBase_UIX_AttemptLeaveMatch_Params
{
	bool                                               ReturnValue;                                               // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function KillstreakUINew.KSQueueWidgetBase.UIX_AttemptJoinSelectedQueue
struct UKSQueueWidgetBase_UIX_AttemptJoinSelectedQueue_Params
{
	bool                                               ReturnValue;                                               // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function KillstreakUINew.KSQueueWidgetBase.UIX_AttemptCancelQueue
struct UKSQueueWidgetBase_UIX_AttemptCancelQueue_Params
{
	bool                                               ReturnValue;                                               // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function KillstreakUINew.KSQueueWidgetBase.SetupReadyForQueueing
struct UKSQueueWidgetBase_SetupReadyForQueueing_Params
{
};

// Function KillstreakUINew.KSQueueWidgetBase.SetupBindings
struct UKSQueueWidgetBase_SetupBindings_Params
{
};

// Function KillstreakUINew.KSQueueWidgetBase.SetCurrentlySelectedQueue
struct UKSQueueWidgetBase_SetCurrentlySelectedQueue_Params
{
	int                                                QueueId;                                                   // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               ReturnValue;                                               // 0x0004(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function KillstreakUINew.KSQueueWidgetBase.ReceiveMatchStatusUpdate
struct UKSQueueWidgetBase_ReceiveMatchStatusUpdate_Params
{
	PlatformUMG_EPUMG_MatchStatus                      CurrentMatchStatus;                                        // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function KillstreakUINew.KSQueueWidgetBase.OnSelectedQueueUpdate
struct UKSQueueWidgetBase_OnSelectedQueueUpdate_Params
{
	struct FClientQueueInfo                            CurrentSelectedQueue;                                      // 0x0000(0x00C8)  (Parm, NativeAccessSpecifierPublic)
};

// Function KillstreakUINew.KSQueueWidgetBase.OnQueueStateUpdate
struct UKSQueueWidgetBase_OnQueueStateUpdate_Params
{
	PlatformUMG_EPUMG_MatchStatus                      CurrentMatchStatus;                                        // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function KillstreakUINew.KSQueueWidgetBase.OnQueuePermissionUpdate
struct UKSQueueWidgetBase_OnQueuePermissionUpdate_Params
{
	bool                                               CanQueue;                                                  // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function KillstreakUINew.KSQueueWidgetBase.OnControlQueuePermissionUpdate
struct UKSQueueWidgetBase_OnControlQueuePermissionUpdate_Params
{
	bool                                               CanControl;                                                // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function KillstreakUINew.KSQueueWidgetBase.IsValidQueue
struct UKSQueueWidgetBase_IsValidQueue_Params
{
	int                                                QueueId;                                                   // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               ReturnValue;                                               // 0x0004(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function KillstreakUINew.KSQueueWidgetBase.HandleSelectedQueueIdSet
struct UKSQueueWidgetBase_HandleSelectedQueueIdSet_Params
{
};

// Function KillstreakUINew.KSQueueWidgetBase.HandlePartyMemberRemoved
struct UKSQueueWidgetBase_HandlePartyMemberRemoved_Params
{
	int64_t                                            PartyMemberId;                                             // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function KillstreakUINew.KSQueueWidgetBase.HandlePartyMemberDataUpdated
struct UKSQueueWidgetBase_HandlePartyMemberDataUpdated_Params
{
	struct FPUMG_PartyMemberData                       PartyMember;                                               // 0x0000(0x0030)  (Parm, NativeAccessSpecifierPublic)
};

// Function KillstreakUINew.KSQueueWidgetBase.HandleMatchStatusUpdate
struct UKSQueueWidgetBase_HandleMatchStatusUpdate_Params
{
	PlatformUMG_EPUMG_MatchStatus                      MatchStatus;                                               // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function KillstreakUINew.KSQueueWidgetBase.HandleConfirmLeaveQueue
struct UKSQueueWidgetBase_HandleConfirmLeaveQueue_Params
{
};

// Function KillstreakUINew.KSQueueWidgetBase.GetQueueSections
struct UKSQueueWidgetBase_GetQueueSections_Params
{
	TArray<struct FClientQueueInfo>                    ClientCachedQueueInfo;                                     // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<struct FQueueSection>                       ReturnValue;                                               // 0x0010(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function KillstreakUINew.KSQueueWidgetBase.GetQueues
struct UKSQueueWidgetBase_GetQueues_Params
{
	TArray<struct FClientQueueInfo>                    ReturnValue;                                               // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function KillstreakUINew.KSQueueWidgetBase.GetQueuePermissions
struct UKSQueueWidgetBase_GetQueuePermissions_Params
{
	bool                                               CanControl;                                                // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               CanQueue;                                                  // 0x0001(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function KillstreakUINew.KSQueueWidgetBase.GetQueueInfoById
struct UKSQueueWidgetBase_GetQueueInfoById_Params
{
	int                                                QueueId;                                                   // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FClientQueueInfo                            QueueInfo;                                                 // 0x0008(0x00C8)  (Parm, OutParm, NativeAccessSpecifierPublic)
	bool                                               ReturnValue;                                               // 0x00D0(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function KillstreakUINew.KSQueueWidgetBase.GetQueueDataFactory
struct UKSQueueWidgetBase_GetQueueDataFactory_Params
{
	class UKSQueueDataFactory*                         ReturnValue;                                               // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function KillstreakUINew.KSQueueWidgetBase.GetPlayerDataFactory
struct UKSQueueWidgetBase_GetPlayerDataFactory_Params
{
	class UKSPlayerDataFactory*                        ReturnValue;                                               // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function KillstreakUINew.KSQueueWidgetBase.GetPartyDataFactory
struct UKSQueueWidgetBase_GetPartyDataFactory_Params
{
	class UPUMG_PartyDataFactory*                      ReturnValue;                                               // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function KillstreakUINew.KSQueueWidgetBase.GetCurrentlySelectedQueue
struct UKSQueueWidgetBase_GetCurrentlySelectedQueue_Params
{
	struct FClientQueueInfo                            ReturnValue;                                               // 0x0000(0x00C8)  (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
};

// Function KillstreakUINew.KSQueueTimerWidgetBase.OnUpdateQueueTimerState
struct UKSQueueTimerWidgetBase_OnUpdateQueueTimerState_Params
{
	KillstreakUINew_EQueueTimerState                   State;                                                     // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function KillstreakUINew.KSQueueTimerWidgetBase.OnUpdateQueueTime
struct UKSQueueTimerWidgetBase_OnUpdateQueueTime_Params
{
	float                                              TimeSecs;                                                  // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function KillstreakUINew.KSQueueTimerWidgetBase.GetQueueTime_TotalSecs
struct UKSQueueTimerWidgetBase_GetQueueTime_TotalSecs_Params
{
	float                                              ReturnValue;                                               // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function KillstreakUINew.KSQueueTimerWidgetBase.GetQueueTime_PartSecs
struct UKSQueueTimerWidgetBase_GetQueueTime_PartSecs_Params
{
	int                                                ReturnValue;                                               // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function KillstreakUINew.KSQueueTimerWidgetBase.GetQueueTime_PartMins
struct UKSQueueTimerWidgetBase_GetQueueTime_PartMins_Params
{
	int                                                ReturnValue;                                               // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function KillstreakUINew.KSQueueTimerWidgetBase.GetQueueTime_PartHours
struct UKSQueueTimerWidgetBase_GetQueueTime_PartHours_Params
{
	int                                                ReturnValue;                                               // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function KillstreakUINew.KSQueueTimerWidgetBase.GetCurrentTimerState
struct UKSQueueTimerWidgetBase_GetCurrentTimerState_Params
{
	KillstreakUINew_EQueueTimerState                   ReturnValue;                                               // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function KillstreakUINew.KSQuickPlay.UpdateQueuePermissions
struct UKSQuickPlay_UpdateQueuePermissions_Params
{
};

// Function KillstreakUINew.KSQuickPlay.UIX_AttemptJoinSelectedQueue
struct UKSQuickPlay_UIX_AttemptJoinSelectedQueue_Params
{
	bool                                               ReturnValue;                                               // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function KillstreakUINew.KSQuickPlay.UIX_AttemptCancelQueue
struct UKSQuickPlay_UIX_AttemptCancelQueue_Params
{
	bool                                               ReturnValue;                                               // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function KillstreakUINew.KSQuickPlay.SortQueueSections
struct UKSQuickPlay_SortQueueSections_Params
{
	TArray<struct FQueueSection>                       QueueSections;                                             // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<struct FQueueSection>                       ReturnValue;                                               // 0x0010(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function KillstreakUINew.KSQuickPlay.SetupReadyForQueueing
struct UKSQuickPlay_SetupReadyForQueueing_Params
{
};

// Function KillstreakUINew.KSQuickPlay.SetupBindings
struct UKSQuickPlay_SetupBindings_Params
{
};

// Function KillstreakUINew.KSQuickPlay.SetDefaultSelectedQueue
struct UKSQuickPlay_SetDefaultSelectedQueue_Params
{
	struct FClientQueueInfo                            NewSelectedQueue;                                          // 0x0000(0x00C8)  (Parm, OutParm, NativeAccessSpecifierPublic)
	bool                                               ReturnValue;                                               // 0x00C8(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function KillstreakUINew.KSQuickPlay.SetCurrentlySelectedQueue
struct UKSQuickPlay_SetCurrentlySelectedQueue_Params
{
	int                                                QueueId;                                                   // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               ReturnValue;                                               // 0x0004(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function KillstreakUINew.KSQuickPlay.ReceiveMatchStatusUpdate
struct UKSQuickPlay_ReceiveMatchStatusUpdate_Params
{
	PlatformUMG_EPUMG_MatchStatus                      CurrentMatchStatus;                                        // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function KillstreakUINew.KSQuickPlay.OnQueuePermissionChanged
struct UKSQuickPlay_OnQueuePermissionChanged_Params
{
	bool                                               CanQueue;                                                  // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function KillstreakUINew.KSQuickPlay.OnControlQueuePermissionChanged
struct UKSQuickPlay_OnControlQueuePermissionChanged_Params
{
	bool                                               CanControl;                                                // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function KillstreakUINew.KSQuickPlay.IsValidQueue
struct UKSQuickPlay_IsValidQueue_Params
{
	int                                                QueueId;                                                   // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               ReturnValue;                                               // 0x0004(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function KillstreakUINew.KSQuickPlay.HandlePartyMemberDataUpdated
struct UKSQuickPlay_HandlePartyMemberDataUpdated_Params
{
	struct FPUMG_PartyMemberData                       PartyMember;                                               // 0x0000(0x0030)  (Parm, NativeAccessSpecifierPublic)
};

// Function KillstreakUINew.KSQuickPlay.GetQueueTypeFromName
struct UKSQuickPlay_GetQueueTypeFromName_Params
{
	struct FName                                       QueueType;                                                 // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	KillstreakUINew_EQueueType                         ReturnValue;                                               // 0x0008(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function KillstreakUINew.KSQuickPlay.GetQueueSections
struct UKSQuickPlay_GetQueueSections_Params
{
	TArray<struct FClientQueueInfo>                    ClientCachedQueueInfo;                                     // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<struct FQueueSection>                       ReturnValue;                                               // 0x0010(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function KillstreakUINew.KSQuickPlay.GetQueues
struct UKSQuickPlay_GetQueues_Params
{
	TArray<struct FClientQueueInfo>                    ReturnValue;                                               // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function KillstreakUINew.KSQuickPlay.GetQueueInfoById
struct UKSQuickPlay_GetQueueInfoById_Params
{
	int                                                QueueId;                                                   // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FClientQueueInfo                            QueueInfo;                                                 // 0x0008(0x00C8)  (Parm, OutParm, NativeAccessSpecifierPublic)
	bool                                               ReturnValue;                                               // 0x00D0(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function KillstreakUINew.KSQuickPlay.GetQueueDataFactory
struct UKSQuickPlay_GetQueueDataFactory_Params
{
	class UKSQueueDataFactory*                         ReturnValue;                                               // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function KillstreakUINew.KSQuickPlay.GetPartyDataFactory
struct UKSQuickPlay_GetPartyDataFactory_Params
{
	class UPUMG_PartyDataFactory*                      ReturnValue;                                               // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function KillstreakUINew.KSQuickPlay.GetDefaultSelectedQueueId
struct UKSQuickPlay_GetDefaultSelectedQueueId_Params
{
	int                                                ReturnValue;                                               // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function KillstreakUINew.KSQuickPlay.GetCurrentlySelectedQueue
struct UKSQuickPlay_GetCurrentlySelectedQueue_Params
{
	struct FClientQueueInfo                            ReturnValue;                                               // 0x0000(0x00C8)  (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
};

// Function KillstreakUINew.KSQuickPlay.CheckForDirtyQueues
struct UKSQuickPlay_CheckForDirtyQueues_Params
{
	TArray<struct FClientQueueInfo>                    NewClientCachedQueueInfo;                                  // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               ReturnValue;                                               // 0x0010(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function KillstreakUINew.KSQuickPlay.CheckForCustomQueues
struct UKSQuickPlay_CheckForCustomQueues_Params
{
	TArray<struct FClientQueueInfo>                    CustomMatchQueueInfo;                                      // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               ReturnValue;                                               // 0x0010(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function KillstreakUINew.KSQuickPlayWidget.UpdateState
struct UKSQuickPlayWidget_UpdateState_Params
{
};

// Function KillstreakUINew.KSQuickPlayWidget.SetIsPendingQueueUpdate
struct UKSQuickPlayWidget_SetIsPendingQueueUpdate_Params
{
	bool                                               IsPending;                                                 // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function KillstreakUINew.KSQuickPlayWidget.OnUpdateQuickPlayState
struct UKSQuickPlayWidget_OnUpdateQuickPlayState_Params
{
	KillstreakUINew_EQuickPlayQueueState               QueueState;                                                // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function KillstreakUINew.KSQuickPlayWidget.OnUpdateQuickPlayCanPlay
struct UKSQuickPlayWidget_OnUpdateQuickPlayCanPlay_Params
{
	bool                                               CanPlay;                                                   // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function KillstreakUINew.KSQuickPlayWidget.OnUpdateQueueTimeElapsed
struct UKSQuickPlayWidget_OnUpdateQueueTimeElapsed_Params
{
	float                                              TimeElapsed;                                               // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function KillstreakUINew.KSQuickPlayWidget.OnUpdatePenaltyTimeLeft
struct UKSQuickPlayWidget_OnUpdatePenaltyTimeLeft_Params
{
	int                                                TimeLeft;                                                  // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function KillstreakUINew.KSQuickPlayWidget.IsPendingQueueUpdate
struct UKSQuickPlayWidget_IsPendingQueueUpdate_Params
{
	bool                                               ReturnValue;                                               // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function KillstreakUINew.KSQuickPlayWidget.HandleOnPlayerProgressInitialized
struct UKSQuickPlayWidget_HandleOnPlayerProgressInitialized_Params
{
	class UKSActivityInstance*                         ActivityInstance;                                          // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                Count;                                                     // 0x0008(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function KillstreakUINew.KSQuickPlayWidget.GetSelectedQueueState
struct UKSQuickPlayWidget_GetSelectedQueueState_Params
{
	KillstreakUINew_EQuickPlayQueueState               ReturnValue;                                               // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function KillstreakUINew.KSQuickPlayWidget.GetGameModeDisplayName
struct UKSQuickPlayWidget_GetGameModeDisplayName_Params
{
	struct FText                                       GameModeDisplayName;                                       // 0x0000(0x0018)  (Parm, OutParm, NativeAccessSpecifierPublic)
	bool                                               ReturnValue;                                               // 0x0018(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function KillstreakUINew.KSQuickPlayWidget.GetCurrentQuickPlayState
struct UKSQuickPlayWidget_GetCurrentQuickPlayState_Params
{
	KillstreakUINew_EQuickPlayQueueState               ReturnValue;                                               // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function KillstreakUINew.KSRadialSelectionWidgetBase.UpdateLastSelectedIndex
struct UKSRadialSelectionWidgetBase_UpdateLastSelectedIndex_Params
{
	int                                                NewIndex;                                                  // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function KillstreakUINew.KSRadialSelectionWidgetBase.UpdateLastHoveredIndex
struct UKSRadialSelectionWidgetBase_UpdateLastHoveredIndex_Params
{
	int                                                NewHoveredIndex;                                           // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function KillstreakUINew.KSRadialSelectionWidgetBase.TraceSelectionCursor
struct UKSRadialSelectionWidgetBase_TraceSelectionCursor_Params
{
	float                                              Radius;                                                    // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              Angle;                                                     // 0x0004(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function KillstreakUINew.KSRadialSelectionWidgetBase.ShowSelector
struct UKSRadialSelectionWidgetBase_ShowSelector_Params
{
};

// Function KillstreakUINew.KSRadialSelectionWidgetBase.SetupForRadialWheelMode
struct UKSRadialSelectionWidgetBase_SetupForRadialWheelMode_Params
{
};

// Function KillstreakUINew.KSRadialSelectionWidgetBase.RadialOptionUnhover
struct UKSRadialSelectionWidgetBase_RadialOptionUnhover_Params
{
};

// Function KillstreakUINew.KSRadialSelectionWidgetBase.RadialOptionSelected
struct UKSRadialSelectionWidgetBase_RadialOptionSelected_Params
{
	int                                                Index;                                                     // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function KillstreakUINew.KSRadialSelectionWidgetBase.RadialOptionHovered
struct UKSRadialSelectionWidgetBase_RadialOptionHovered_Params
{
	int                                                Index;                                                     // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function KillstreakUINew.KSRadialSelectionWidgetBase.OpenSpecifiedRadialMenu
struct UKSRadialSelectionWidgetBase_OpenSpecifiedRadialMenu_Params
{
	Killstreak_EMercCosmeticSlot                       CosmeticSlot;                                              // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function KillstreakUINew.KSRadialSelectionWidgetBase.OnRadialMenuUseLastSelection
struct UKSRadialSelectionWidgetBase_OnRadialMenuUseLastSelection_Params
{
	Killstreak_EMercCosmeticSlot                       ButtonCosmeticSlot;                                        // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function KillstreakUINew.KSRadialSelectionWidgetBase.OnRadialMenuReleased
struct UKSRadialSelectionWidgetBase_OnRadialMenuReleased_Params
{
	Killstreak_EMercCosmeticSlot                       ButtonCosmeticSlot;                                        // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bIsContextualPingHold;                                     // 0x0001(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function KillstreakUINew.KSRadialSelectionWidgetBase.OnRadialMenuPressed
struct UKSRadialSelectionWidgetBase_OnRadialMenuPressed_Params
{
	Killstreak_EMercCosmeticSlot                       ButtonCosmeticSlot;                                        // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bIsContextualPingHold;                                     // 0x0001(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function KillstreakUINew.KSRadialSelectionWidgetBase.OnRadialMenuForceClosed
struct UKSRadialSelectionWidgetBase_OnRadialMenuForceClosed_Params
{
};

// Function KillstreakUINew.KSRadialSelectionWidgetBase.OnCycleMenusRight
struct UKSRadialSelectionWidgetBase_OnCycleMenusRight_Params
{
};

// Function KillstreakUINew.KSRadialSelectionWidgetBase.OnCycleMenusLeft
struct UKSRadialSelectionWidgetBase_OnCycleMenusLeft_Params
{
};

// Function KillstreakUINew.KSRadialSelectionWidgetBase.OnCycledMenus
struct UKSRadialSelectionWidgetBase_OnCycledMenus_Params
{
	bool                                               bCycledRight;                                              // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function KillstreakUINew.KSRadialSelectionWidgetBase.OnCinematicSubLevelEnabled
struct UKSRadialSelectionWidgetBase_OnCinematicSubLevelEnabled_Params
{
	struct FString                                     CinematicSubLevelName;                                     // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function KillstreakUINew.KSRadialSelectionWidgetBase.OnCinematicSubLevelDisabled
struct UKSRadialSelectionWidgetBase_OnCinematicSubLevelDisabled_Params
{
	struct FString                                     CinematicSubLevelName;                                     // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function KillstreakUINew.KSRadialSelectionWidgetBase.IsSelectorVisible
struct UKSRadialSelectionWidgetBase_IsSelectorVisible_Params
{
	bool                                               ReturnValue;                                               // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function KillstreakUINew.KSRadialSelectionWidgetBase.IsSelectorActive
struct UKSRadialSelectionWidgetBase_IsSelectorActive_Params
{
	bool                                               ReturnValue;                                               // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function KillstreakUINew.KSRadialSelectionWidgetBase.IsLobbyHUD
struct UKSRadialSelectionWidgetBase_IsLobbyHUD_Params
{
	bool                                               ReturnValue;                                               // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function KillstreakUINew.KSRadialSelectionWidgetBase.IsInFullControlMode
struct UKSRadialSelectionWidgetBase_IsInFullControlMode_Params
{
	bool                                               ReturnValue;                                               // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function KillstreakUINew.KSRadialSelectionWidgetBase.IsInEmoteOnlyMode
struct UKSRadialSelectionWidgetBase_IsInEmoteOnlyMode_Params
{
	bool                                               ReturnValue;                                               // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function KillstreakUINew.KSRadialSelectionWidgetBase.IsCycleBetweenMenusEnabled
struct UKSRadialSelectionWidgetBase_IsCycleBetweenMenusEnabled_Params
{
	bool                                               ReturnValue;                                               // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function KillstreakUINew.KSRadialSelectionWidgetBase.InitializeTracking
struct UKSRadialSelectionWidgetBase_InitializeTracking_Params
{
};

// Function KillstreakUINew.KSRadialSelectionWidgetBase.HideSelector
struct UKSRadialSelectionWidgetBase_HideSelector_Params
{
};

// Function KillstreakUINew.KSRadialSelectionWidgetBase.HandleOnShowPopup
struct UKSRadialSelectionWidgetBase_HandleOnShowPopup_Params
{
};

// Function KillstreakUINew.KSRadialSelectionWidgetBase.HandleInputStateChanged
struct UKSRadialSelectionWidgetBase_HandleInputStateChanged_Params
{
	TEnumAsByte<PlatformGameFramework_EPGAME_INPUT_STATE> NewInputState;                                             // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function KillstreakUINew.KSRadialSelectionWidgetBase.GetWheelSize
struct UKSRadialSelectionWidgetBase_GetWheelSize_Params
{
	float                                              ReturnValue;                                               // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function KillstreakUINew.KSRadialSelectionWidgetBase.GetRadialWheelActivationMode
struct UKSRadialSelectionWidgetBase_GetRadialWheelActivationMode_Params
{
	Killstreak_ERadialWheelActivationMode              ReturnValue;                                               // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function KillstreakUINew.KSRadialSelectionWidgetBase.GetPingIconByType
struct UKSRadialSelectionWidgetBase_GetPingIconByType_Params
{
	Killstreak_EPingType                               PingType;                                                  // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               ReturnValue;                                               // 0x0030(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function KillstreakUINew.KSRadialSelectionWidgetBase.GetPingIconByMessage
struct UKSRadialSelectionWidgetBase_GetPingIconByMessage_Params
{
	Killstreak_EPingMessage                            PingMessage;                                               // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               ReturnValue;                                               // 0x0030(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function KillstreakUINew.KSRadialSelectionWidgetBase.GetPingColorByType
struct UKSRadialSelectionWidgetBase_GetPingColorByType_Params
{
	Killstreak_EPingType                               PingType;                                                  // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FLinearColor                                PingColor;                                                 // 0x0004(0x0010)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               ReturnValue;                                               // 0x0014(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function KillstreakUINew.KSRadialSelectionWidgetBase.GetOptionsCount
struct UKSRadialSelectionWidgetBase_GetOptionsCount_Params
{
	int                                                ReturnValue;                                               // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function KillstreakUINew.KSRadialSelectionWidgetBase.GetLastSelectedIndexForCosmeticSlot
struct UKSRadialSelectionWidgetBase_GetLastSelectedIndexForCosmeticSlot_Params
{
	Killstreak_EMercCosmeticSlot                       CosmeticSlot;                                              // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                ReturnValue;                                               // 0x0004(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function KillstreakUINew.KSRadialSelectionWidgetBase.GetLastHoveredIndex
struct UKSRadialSelectionWidgetBase_GetLastHoveredIndex_Params
{
	int                                                ReturnValue;                                               // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function KillstreakUINew.KSRadialSelectionWidgetBase.GetInitialRadialMenu
struct UKSRadialSelectionWidgetBase_GetInitialRadialMenu_Params
{
	Killstreak_EMercCosmeticSlot                       ReturnValue;                                               // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function KillstreakUINew.KSRadialSelectionWidgetBase.GetGameplayTagsForCosmeticSlot
struct UKSRadialSelectionWidgetBase_GetGameplayTagsForCosmeticSlot_Params
{
	Killstreak_EMercCosmeticSlot                       CosmeticSlot;                                              // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<struct FGameplayTag>                        ReturnValue;                                               // 0x0008(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function KillstreakUINew.KSRadialSelectionWidgetBase.GetDeadZone
struct UKSRadialSelectionWidgetBase_GetDeadZone_Params
{
	float                                              ReturnValue;                                               // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function KillstreakUINew.KSRadialSelectionWidgetBase.GetContiguousCosmeticSlotMenu
struct UKSRadialSelectionWidgetBase_GetContiguousCosmeticSlotMenu_Params
{
	bool                                               bRightSide;                                                // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	Killstreak_EMercCosmeticSlot                       ReturnValue;                                               // 0x0001(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function KillstreakUINew.KSRadialSelectionWidgetBase.GetActiveCosmeticSlotMenu
struct UKSRadialSelectionWidgetBase_GetActiveCosmeticSlotMenu_Params
{
	Killstreak_EMercCosmeticSlot                       ReturnValue;                                               // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function KillstreakUINew.KSRadialSelectionWidgetBase.FindRowByType
struct UKSRadialSelectionWidgetBase_FindRowByType_Params
{
	Killstreak_EPingType                               PingType;                                                  // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FContextualPingTypesRow                     ContextualPingTypesRow;                                    // 0x0008(0x0048)  (Parm, OutParm, NativeAccessSpecifierPublic)
	bool                                               ReturnValue;                                               // 0x0050(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function KillstreakUINew.KSRadialSelectionWidgetBase.FindRowByMessage
struct UKSRadialSelectionWidgetBase_FindRowByMessage_Params
{
	Killstreak_EPingMessage                            PingMessage;                                               // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FContextualPingMessagesRow                  ContextualPingMessagesRow;                                 // 0x0008(0x0038)  (Parm, OutParm, NativeAccessSpecifierPublic)
	bool                                               ReturnValue;                                               // 0x0040(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function KillstreakUINew.KSRadialSelectionWidgetBase.DummyFunction
struct UKSRadialSelectionWidgetBase_DummyFunction_Params
{
};

// Function KillstreakUINew.KSRadialSelectionWidgetBase.ChangeToNewRadialMenu
struct UKSRadialSelectionWidgetBase_ChangeToNewRadialMenu_Params
{
};

// Function KillstreakUINew.KSRadialSelectionWidgetBase.ButtonClicked
struct UKSRadialSelectionWidgetBase_ButtonClicked_Params
{
};

// Function KillstreakUINew.KSRadialSelectionWidgetBase.BackPressed
struct UKSRadialSelectionWidgetBase_BackPressed_Params
{
};

// Function KillstreakUINew.KSRadialSelectionWidgetBase.ActivateRadialMenuItem
struct UKSRadialSelectionWidgetBase_ActivateRadialMenuItem_Params
{
	int                                                Index;                                                     // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class AKSPlayerController*                         PlayerController;                                          // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               ReturnValue;                                               // 0x0010(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function KillstreakUINew.KSRankChangeWidget.FormatProgressionData
struct UKSRankChangeWidget_FormatProgressionData_Params
{
	struct FPlayerProgression                          ProgressionData;                                           // 0x0000(0x0170)  (Parm, NativeAccessSpecifierPublic)
	struct FPlayerProgression                          ReturnValue;                                               // 0x0170(0x0170)  (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
};

// Function KillstreakUINew.KSRedeemCodeScreenBase.RedeemCode
struct UKSRedeemCodeScreenBase_RedeemCode_Params
{
	struct FString                                     Code;                                                      // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function KillstreakUINew.KSRedeemCodeScreenBase.OnRedeemCodeSubmit
struct UKSRedeemCodeScreenBase_OnRedeemCodeSubmit_Params
{
};

// Function KillstreakUINew.KSRedeemCodeScreenBase.OnRedeemCodeResult
struct UKSRedeemCodeScreenBase_OnRedeemCodeResult_Params
{
	bool                                               Success;                                                   // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FText                                       Error;                                                     // 0x0008(0x0018)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
};

// Function KillstreakUINew.KSRedeemCodeScreenBase.IsPendingServerReply
struct UKSRedeemCodeScreenBase_IsPendingServerReply_Params
{
	bool                                               ReturnValue;                                               // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function KillstreakUINew.KSRelatedRogueEntry.DisplayLocked
struct UKSRelatedRogueEntry_DisplayLocked_Params
{
	bool                                               bLocked;                                                   // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function KillstreakUINew.KSRelatedRogueEntry.DisplayJob
struct UKSRelatedRogueEntry_DisplayJob_Params
{
	class UKSJobItem*                                  JobItem;                                                   // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function KillstreakUINew.KSRelatedRoguesGroup.PopulateForWeaponOwnership
struct UKSRelatedRoguesGroup_PopulateForWeaponOwnership_Params
{
	class UKSWeaponAsset*                              WeaponAsset;                                               // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function KillstreakUINew.KSRelatedRoguesGroup.PopulateForWeaponCategoryByWeapon
struct UKSRelatedRoguesGroup_PopulateForWeaponCategoryByWeapon_Params
{
	class UKSWeaponAsset*                              WeaponAsset;                                               // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function KillstreakUINew.KSRelatedRoguesGroup.PopulateForWeaponCategory
struct UKSRelatedRoguesGroup_PopulateForWeaponCategory_Params
{
	class UKSWeaponCategoryAsset*                      WeaponCategory;                                            // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function KillstreakUINew.KSRelatedRoguesGroup.PopulateForWeaponAsset
struct UKSRelatedRoguesGroup_PopulateForWeaponAsset_Params
{
	class UKSWeaponAsset*                              WeaponAsset;                                               // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function KillstreakUINew.KSRelatedRoguesGroup.GetEntries
struct UKSRelatedRoguesGroup_GetEntries_Params
{
	TArray<class UKSRelatedRogueEntry*>                ReturnValue;                                               // 0x0000(0x0010)  (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, ContainsInstancedReference, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function KillstreakUINew.KSRelatedRoguesGroup.DisplayWeaponCategoryLabel
struct UKSRelatedRoguesGroup_DisplayWeaponCategoryLabel_Params
{
};

// Function KillstreakUINew.KSRelatedRoguesGroup.DisplayNone
struct UKSRelatedRoguesGroup_DisplayNone_Params
{
};

// Function KillstreakUINew.KSRelatedRoguesGroup.DisplayIndividualWeaponLabel
struct UKSRelatedRoguesGroup_DisplayIndividualWeaponLabel_Params
{
};

// Function KillstreakUINew.KSRelatedRoguesGroup.CreateAndAddEntry
struct UKSRelatedRoguesGroup_CreateAndAddEntry_Params
{
	class UKSRelatedRogueEntry*                        ReturnValue;                                               // 0x0000(0x0008)  (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function KillstreakUINew.KSRelatedRoguesGroup.ClearEntries
struct UKSRelatedRoguesGroup_ClearEntries_Params
{
};

// Function KillstreakUINew.KSReticleWidgetBase.UpdateReticleOffset
struct UKSReticleWidgetBase_UpdateReticleOffset_Params
{
	float                                              OffsetFromCenterScreen;                                    // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function KillstreakUINew.KSReticleWidgetBase.UpdateBlockedShotIcon
struct UKSReticleWidgetBase_UpdateBlockedShotIcon_Params
{
	bool                                               IconVisible;                                               // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector2D                                   Translation;                                               // 0x0004(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector2D                                   IconScale;                                                 // 0x000C(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function KillstreakUINew.KSReticleWidgetBase.CalculateReticleOffset
struct UKSReticleWidgetBase_CalculateReticleOffset_Params
{
	float                                              DeltaTime;                                                 // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function KillstreakUINew.KSReticleWidgetBase.CalculateBlockedShotIcon
struct UKSReticleWidgetBase_CalculateBlockedShotIcon_Params
{
};

// Function KillstreakUINew.KSRewardsTrackMeterSegmentBase.UpdateFromRewardTier
struct UKSRewardsTrackMeterSegmentBase_UpdateFromRewardTier_Params
{
	struct FActivityTier                               ActivityTier;                                              // 0x0000(0x0040)  (Parm, NativeAccessSpecifierPublic)
	int                                                ActivityCount;                                             // 0x0040(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function KillstreakUINew.KSRewardsTrackMeterSegmentBase.GetStandardBackgroundColor
struct UKSRewardsTrackMeterSegmentBase_GetStandardBackgroundColor_Params
{
	struct FLinearColor                                ReturnValue;                                               // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function KillstreakUINew.KSRewardsTrackMeterSegmentBase.GetPremiumBackgroundColor
struct UKSRewardsTrackMeterSegmentBase_GetPremiumBackgroundColor_Params
{
	struct FLinearColor                                ReturnValue;                                               // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function KillstreakUINew.KSRewardsTrackMeterSegmentBase.GetBattlePassPremiumColor
struct UKSRewardsTrackMeterSegmentBase_GetBattlePassPremiumColor_Params
{
	struct FLinearColor                                ReturnValue;                                               // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function KillstreakUINew.KSRewardsTrackMeterSegmentBase.GetBattlePassFreeColor
struct UKSRewardsTrackMeterSegmentBase_GetBattlePassFreeColor_Params
{
	struct FLinearColor                                ReturnValue;                                               // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function KillstreakUINew.KSRewardsTrackMeterSegmentBase.ApplySegmentProgress
struct UKSRewardsTrackMeterSegmentBase_ApplySegmentProgress_Params
{
	float                                              ProgressPercent;                                           // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function KillstreakUINew.KSRewardsTrackMeterSegmentBase.ApplySegmentMeterColor
struct UKSRewardsTrackMeterSegmentBase_ApplySegmentMeterColor_Params
{
	struct FLinearColor                                MeterColor;                                                // 0x0000(0x0010)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function KillstreakUINew.KSRewardsTrackMeterSegmentBase.ApplySegmentLabel
struct UKSRewardsTrackMeterSegmentBase_ApplySegmentLabel_Params
{
	struct FText                                       LabelText;                                                 // 0x0000(0x0018)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
};

// Function KillstreakUINew.KSRewardsTrackMeterSegmentBase.ApplySegmentBackgroundColor
struct UKSRewardsTrackMeterSegmentBase_ApplySegmentBackgroundColor_Params
{
	struct FLinearColor                                BackgroundColor;                                           // 0x0000(0x0010)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function KillstreakUINew.KSRewardsTrackWidgetBase.UpdateMaxPageCount
struct UKSRewardsTrackWidgetBase_UpdateMaxPageCount_Params
{
	int                                                RewardCount;                                               // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function KillstreakUINew.KSRewardsTrackWidgetBase.SetCurrentPageFromIndex
struct UKSRewardsTrackWidgetBase_SetCurrentPageFromIndex_Params
{
	int                                                Index;                                                     // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function KillstreakUINew.KSRogueDetailsWidget.ShowGuidedCallout
struct UKSRogueDetailsWidget_ShowGuidedCallout_Params
{
	struct FName                                       CalloutName;                                               // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function KillstreakUINew.KSRogueDetailsWidget.SetCurrentTabSelectable
struct UKSRogueDetailsWidget_SetCurrentTabSelectable_Params
{
	bool                                               bIsSelectable;                                             // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function KillstreakUINew.KSRogueDetailsWidget.OnCurrentJobChanged
struct UKSRogueDetailsWidget_OnCurrentJobChanged_Params
{
	class UKSJobItem*                                  JobItem;                                                   // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bFromShowEvent;                                            // 0x0008(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function KillstreakUINew.KSRogueDetailsWidget.OnBackButtonPressed
struct UKSRogueDetailsWidget_OnBackButtonPressed_Params
{
};

// Function KillstreakUINew.KSRogueDetailsWidget.GetStoreItemForJob
struct UKSRogueDetailsWidget_GetStoreItemForJob_Params
{
	class UKSJobItem*                                  JobItem;                                                   // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UPUMG_StoreItem*                             ReturnValue;                                               // 0x0008(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function KillstreakUINew.KSRogueDetailsWidget.GetItemHelper
struct UKSRogueDetailsWidget_GetItemHelper_Params
{
	class UKSStoreItemHelper*                          ReturnValue;                                               // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function KillstreakUINew.KSRogueDetailsWidget.CycleJob
struct UKSRogueDetailsWidget_CycleJob_Params
{
	bool                                               bForward;                                                  // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function KillstreakUINew.KSRogueMasteryWidget.GetSectionData
struct UKSRogueMasteryWidget_GetSectionData_Params
{
	class UKSActivityInstance*                         ActivityInstance;                                          // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<struct FMasterySectionData>                 SectionData;                                               // 0x0008(0x0010)  (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function KillstreakUINew.KSRogueMasteryWidget.GetMasteryRewardsForTier
struct UKSRogueMasteryWidget_GetMasteryRewardsForTier_Params
{
	struct FActivityTier                               Tier;                                                      // 0x0000(0x0040)  (Parm, NativeAccessSpecifierPublic)
	TArray<struct FMasteryRewardData>                  Rewards;                                                   // 0x0040(0x0010)  (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function KillstreakUINew.KSScrollBox.GetViewFraction
struct UKSScrollBox_GetViewFraction_Params
{
	float                                              ReturnValue;                                               // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function KillstreakUINew.KSSettingsContainer.OnShowSettingsWidget
struct UKSSettingsContainer_OnShowSettingsWidget_Params
{
	class UKSSettingsWidget*                           SettingsWidget;                                            // 0x0000(0x0008)  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function KillstreakUINew.KSSettingsContainer.OnHideSettingsWidget
struct UKSSettingsContainer_OnHideSettingsWidget_Params
{
	class UKSSettingsWidget*                           SettingsWidget;                                            // 0x0000(0x0008)  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function KillstreakUINew.KSSettingsContainer.OnContainerConfigSet
struct UKSSettingsContainer_OnContainerConfigSet_Params
{
};

// Function KillstreakUINew.KSSettingsContainer.GetWidgetContainerTitle
struct UKSSettingsContainer_GetWidgetContainerTitle_Params
{
	struct FText                                       ReturnValue;                                               // 0x0000(0x0018)  (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
};

// Function KillstreakUINew.KSSettingsContainer.GetWidgetContainerPreview
struct UKSSettingsContainer_GetWidgetContainerPreview_Params
{
	class UKSSettingsPreview*                          ReturnValue;                                               // 0x0000(0x0008)  (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function KillstreakUINew.KSSettingsContainer.GetWidgetContainerDescription
struct UKSSettingsContainer_GetWidgetContainerDescription_Params
{
	struct FText                                       ReturnValue;                                               // 0x0000(0x0018)  (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
};

// Function KillstreakUINew.KSSettingsContainer.GetSettingsWidgets
struct UKSSettingsContainer_GetSettingsWidgets_Params
{
	TArray<class UKSSettingsWidget*>                   ReturnValue;                                               // 0x0000(0x0010)  (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, ContainsInstancedReference, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function KillstreakUINew.KSSettingsContainer.AddSettingsWidget
struct UKSSettingsContainer_AddSettingsWidget_Params
{
	class UKSSettingsWidget*                           SettingsWidget;                                            // 0x0000(0x0008)  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function KillstreakUINew.KSSettingsContainer.AddPreviewWidget
struct UKSSettingsContainer_AddPreviewWidget_Params
{
	class UKSSettingsPreview*                          PreviewWidget;                                             // 0x0000(0x0008)  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function KillstreakUINew.KSSettingsContainerConfigAsset.GetSettingName
struct UKSSettingsContainerConfigAsset_GetSettingName_Params
{
	struct FText                                       ReturnValue;                                               // 0x0000(0x0018)  (ConstParm, Parm, OutParm, ReturnParm, ReferenceParm, NativeAccessSpecifierPublic)
};

// Function KillstreakUINew.KSSettingsContainerConfigAsset.GetSettingDescription
struct UKSSettingsContainerConfigAsset_GetSettingDescription_Params
{
	struct FText                                       ReturnValue;                                               // 0x0000(0x0018)  (ConstParm, Parm, OutParm, ReturnParm, ReferenceParm, NativeAccessSpecifierPublic)
};

// Function KillstreakUINew.KSSettingsSectionConfigAsset.GetHeading
struct UKSSettingsSectionConfigAsset_GetHeading_Params
{
	struct FText                                       ReturnValue;                                               // 0x0000(0x0018)  (ConstParm, Parm, OutParm, ReturnParm, ReferenceParm, NativeAccessSpecifierPublic)
};

// Function KillstreakUINew.KSSettingsPageConfigAsset.GetPageName
struct UKSSettingsPageConfigAsset_GetPageName_Params
{
	struct FText                                       ReturnValue;                                               // 0x0000(0x0018)  (ConstParm, Parm, OutParm, ReturnParm, ReferenceParm, NativeAccessSpecifierPublic)
};

// Function KillstreakUINew.KSSettingsDataFactory.SetSelectedRegion
struct UKSSettingsDataFactory_SetSelectedRegion_Params
{
	int                                                SiteId;                                                    // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               ReturnValue;                                               // 0x0004(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function KillstreakUINew.KSSettingsDataFactory.SaveSettings
struct UKSSettingsDataFactory_SaveSettings_Params
{
};

// Function KillstreakUINew.KSSettingsDataFactory.SaveSettingAsInt
struct UKSSettingsDataFactory_SaveSettingAsInt_Params
{
	struct FName                                       Name;                                                      // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function KillstreakUINew.KSSettingsDataFactory.SaveSettingAsFloat
struct UKSSettingsDataFactory_SaveSettingAsFloat_Params
{
	struct FName                                       Name;                                                      // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function KillstreakUINew.KSSettingsDataFactory.SaveSettingAsBool
struct UKSSettingsDataFactory_SaveSettingAsBool_Params
{
	struct FName                                       Name;                                                      // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function KillstreakUINew.KSSettingsDataFactory.SaveScreenResolution
struct UKSSettingsDataFactory_SaveScreenResolution_Params
{
};

// Function KillstreakUINew.KSSettingsDataFactory.SaveLanguage
struct UKSSettingsDataFactory_SaveLanguage_Params
{
};

// Function KillstreakUINew.KSSettingsDataFactory.SaveKeyBindings
struct UKSSettingsDataFactory_SaveKeyBindings_Params
{
};

// Function KillstreakUINew.KSSettingsDataFactory.RevertScreenResolution
struct UKSSettingsDataFactory_RevertScreenResolution_Params
{
};

// Function KillstreakUINew.KSSettingsDataFactory.RevertPlayerPreferences
struct UKSSettingsDataFactory_RevertPlayerPreferences_Params
{
};

// Function KillstreakUINew.KSSettingsDataFactory.RevertLanguageToDefault
struct UKSSettingsDataFactory_RevertLanguageToDefault_Params
{
};

// Function KillstreakUINew.KSSettingsDataFactory.RevertKeyBindings
struct UKSSettingsDataFactory_RevertKeyBindings_Params
{
};

// Function KillstreakUINew.KSSettingsDataFactory.IsUserLoggedIn
struct UKSSettingsDataFactory_IsUserLoggedIn_Params
{
	bool                                               ReturnValue;                                               // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function KillstreakUINew.KSSettingsDataFactory.GetSettingAsInt_Legacy
struct UKSSettingsDataFactory_GetSettingAsInt_Legacy_Params
{
	struct FName                                       Name;                                                      // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                OutInt;                                                    // 0x0008(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               ReturnValue;                                               // 0x000C(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function KillstreakUINew.KSSettingsDataFactory.GetSettingAsFloat_Legacy
struct UKSSettingsDataFactory_GetSettingAsFloat_Legacy_Params
{
	struct FName                                       Name;                                                      // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              OutFloat;                                                  // 0x0008(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               ReturnValue;                                               // 0x000C(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function KillstreakUINew.KSSettingsDataFactory.GetSettingAsBool_Legacy
struct UKSSettingsDataFactory_GetSettingAsBool_Legacy_Params
{
	struct FName                                       Name;                                                      // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               OutBool;                                                   // 0x0008(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               ReturnValue;                                               // 0x0009(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function KillstreakUINew.KSSettingsDataFactory.GetSelectedRegion
struct UKSSettingsDataFactory_GetSelectedRegion_Params
{
	int                                                ReturnValue;                                               // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function KillstreakUINew.KSSettingsDataFactory.GetScreenResolution
struct UKSSettingsDataFactory_GetScreenResolution_Params
{
	struct FIntPoint                                   ReturnValue;                                               // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function KillstreakUINew.KSSettingsDataFactory.GetKSPlayerInput
struct UKSSettingsDataFactory_GetKSPlayerInput_Params
{
	class UKSPlayerInput*                              ReturnValue;                                               // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function KillstreakUINew.KSSettingsDataFactory.GetDefaultKSInputActionKeys
struct UKSSettingsDataFactory_GetDefaultKSInputActionKeys_Params
{
	struct FName                                       Name;                                                      // 0x0000(0x0008)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	Killstreak_EKSInputType                            InputType;                                                 // 0x0008(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<struct FKSInputActionKey>                   OutKeys;                                                   // 0x0010(0x0010)  (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function KillstreakUINew.KSSettingsDataFactory.GetDefaultInputAxisKeys
struct UKSSettingsDataFactory_GetDefaultInputAxisKeys_Params
{
	struct FName                                       Name;                                                      // 0x0000(0x0008)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	Killstreak_EKSInputType                            InputType;                                                 // 0x0008(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              Scale;                                                     // 0x000C(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<struct FKey>                                OutKeys;                                                   // 0x0010(0x0010)  (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function KillstreakUINew.KSSettingsDataFactory.GetDefaultInputActionKeys
struct UKSSettingsDataFactory_GetDefaultInputActionKeys_Params
{
	struct FName                                       Name;                                                      // 0x0000(0x0008)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	Killstreak_EKSInputType                            InputType;                                                 // 0x0008(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<struct FKey>                                OutKeys;                                                   // 0x0010(0x0010)  (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function KillstreakUINew.KSSettingsDataFactory.GetCustomKSInputActionKeys
struct UKSSettingsDataFactory_GetCustomKSInputActionKeys_Params
{
	struct FName                                       Name;                                                      // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	Killstreak_EKSInputType                            InputType;                                                 // 0x0008(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<struct FKSInputActionKey>                   OutKeys;                                                   // 0x0010(0x0010)  (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function KillstreakUINew.KSSettingsDataFactory.GetCustomInputAxisKeys
struct UKSSettingsDataFactory_GetCustomInputAxisKeys_Params
{
	struct FName                                       Name;                                                      // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	Killstreak_EKSInputType                            InputType;                                                 // 0x0008(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              Scale;                                                     // 0x000C(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<struct FKey>                                OutKeys;                                                   // 0x0010(0x0010)  (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function KillstreakUINew.KSSettingsDataFactory.GetCustomInputActionKeys
struct UKSSettingsDataFactory_GetCustomInputActionKeys_Params
{
	struct FName                                       Name;                                                      // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	Killstreak_EKSInputType                            InputType;                                                 // 0x0008(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<struct FKey>                                OutKeys;                                                   // 0x0010(0x0010)  (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function KillstreakUINew.KSSettingsDataFactory.GetCurrentLanguage
struct UKSSettingsDataFactory_GetCurrentLanguage_Params
{
	struct FString                                     ReturnValue;                                               // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function KillstreakUINew.KSSettingsDataFactory.GetAvailableLanguages
struct UKSSettingsDataFactory_GetAvailableLanguages_Params
{
	TArray<struct FString>                             ReturnValue;                                               // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function KillstreakUINew.KSSettingsDataFactory.BindSettingCallbacks_Legacy
struct UKSSettingsDataFactory_BindSettingCallbacks_Legacy_Params
{
	struct FName                                       Name;                                                      // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FSettingDelegateStruct                      SettingDelegateStruct;                                     // 0x0008(0x0020)  (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPublic)
};

// Function KillstreakUINew.KSSettingsDataFactory.ApplySettingAsInt
struct UKSSettingsDataFactory_ApplySettingAsInt_Params
{
	struct FName                                       Name;                                                      // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                Value;                                                     // 0x0008(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function KillstreakUINew.KSSettingsDataFactory.ApplySettingAsFloat
struct UKSSettingsDataFactory_ApplySettingAsFloat_Params
{
	struct FName                                       Name;                                                      // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              Value;                                                     // 0x0008(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function KillstreakUINew.KSSettingsDataFactory.ApplySettingAsBool
struct UKSSettingsDataFactory_ApplySettingAsBool_Params
{
	struct FName                                       Name;                                                      // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               Value;                                                     // 0x0008(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function KillstreakUINew.KSSettingsDataFactory.ApplyScreenResolution
struct UKSSettingsDataFactory_ApplyScreenResolution_Params
{
	struct FIntPoint                                   ScreenResolution;                                          // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function KillstreakUINew.KSSettingsDataFactory.ApplyLanguage
struct UKSSettingsDataFactory_ApplyLanguage_Params
{
	struct FString                                     LanguageCulture;                                           // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function KillstreakUINew.KSSettingsGroup.OnShowContainer
struct UKSSettingsGroup_OnShowContainer_Params
{
	class UKSSettingsContainer*                        SettingsContainer;                                         // 0x0000(0x0008)  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function KillstreakUINew.KSSettingsGroup.OnHideContainer
struct UKSSettingsGroup_OnHideContainer_Params
{
	class UKSSettingsContainer*                        SettingsContainer;                                         // 0x0000(0x0008)  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function KillstreakUINew.KSSettingsGroup.OnGroupConfigSet
struct UKSSettingsGroup_OnGroupConfigSet_Params
{
};

// Function KillstreakUINew.KSSettingsGroup.GetSettingsContainers
struct UKSSettingsGroup_GetSettingsContainers_Params
{
	TArray<class UKSSettingsContainer*>                ReturnValue;                                               // 0x0000(0x0010)  (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, ContainsInstancedReference, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function KillstreakUINew.KSSettingsGroup.AddSubSettingsContainerWidget
struct UKSSettingsGroup_AddSubSettingsContainerWidget_Params
{
	class UKSSettingsContainer*                        SettingsContainer;                                         // 0x0000(0x0008)  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function KillstreakUINew.KSSettingsGroup.AddMainSettingsContainerWidget
struct UKSSettingsGroup_AddMainSettingsContainerWidget_Params
{
	class UKSSettingsContainer*                        SettingsContainer;                                         // 0x0000(0x0008)  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function KillstreakUINew.KSSettingsInfo_Binding.OnSettingsReceivedFromPlayerAccount
struct UKSSettingsInfo_Binding_OnSettingsReceivedFromPlayerAccount_Params
{
};

// Function KillstreakUINew.KSSettingsInfo_Binding.OnKeyBindingsSaved
struct UKSSettingsInfo_Binding_OnKeyBindingsSaved_Params
{
	struct FName                                       Name;                                                      // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function KillstreakUINew.KSSettingsInfo_Binding.OnKeyBindingsApplied
struct UKSSettingsInfo_Binding_OnKeyBindingsApplied_Params
{
	struct FName                                       Name;                                                      // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function KillstreakUINew.KSSettingsInfo_Brightness.OnSettingSaved
struct UKSSettingsInfo_Brightness_OnSettingSaved_Params
{
};

// Function KillstreakUINew.KSSettingsInfo_Brightness.OnSettingApplied
struct UKSSettingsInfo_Brightness_OnSettingApplied_Params
{
};

// Function KillstreakUINew.KSSettingsInfo_Brightness.GetKSSettingsDataFactory
struct UKSSettingsInfo_Brightness_GetKSSettingsDataFactory_Params
{
	class UKSSettingsDataFactory*                      ReturnValue;                                               // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function KillstreakUINew.KSSettingsInfo_ConsolePerformanceMode.OnSettingSaved
struct UKSSettingsInfo_ConsolePerformanceMode_OnSettingSaved_Params
{
};

// Function KillstreakUINew.KSSettingsInfo_ConsolePerformanceMode.OnSettingApplied
struct UKSSettingsInfo_ConsolePerformanceMode_OnSettingApplied_Params
{
};

// Function KillstreakUINew.KSSettingsInfo_ConsolePerformanceMode.GetKSSettingsDataFactory
struct UKSSettingsInfo_ConsolePerformanceMode_GetKSSettingsDataFactory_Params
{
	class UKSSettingsDataFactory*                      ReturnValue;                                               // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function KillstreakUINew.KSSettingsInfo_Generic.OnSettingSaved
struct UKSSettingsInfo_Generic_OnSettingSaved_Params
{
};

// Function KillstreakUINew.KSSettingsInfo_Generic.OnSettingApplied
struct UKSSettingsInfo_Generic_OnSettingApplied_Params
{
};

// Function KillstreakUINew.KSSettingsInfo_Generic.GetKSSettingsDataFactory
struct UKSSettingsInfo_Generic_GetKSSettingsDataFactory_Params
{
	class UKSSettingsDataFactory*                      ReturnValue;                                               // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function KillstreakUINew.KSSettingsInfo_Region.OnPreferredSiteUpdated
struct UKSSettingsInfo_Region_OnPreferredSiteUpdated_Params
{
};

// Function KillstreakUINew.KSSettingsInfo_Resolution.OnScreenResolutionSaved
struct UKSSettingsInfo_Resolution_OnScreenResolutionSaved_Params
{
	struct FIntPoint                                   SavedScreenResolution;                                     // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function KillstreakUINew.KSSettingsInfo_Resolution.OnScreenResolutionApplied
struct UKSSettingsInfo_Resolution_OnScreenResolutionApplied_Params
{
	struct FIntPoint                                   AppliedScreenResolution;                                   // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function KillstreakUINew.KSSettingsMenu.RevertSettings
struct UKSSettingsMenu_RevertSettings_Params
{
};

// Function KillstreakUINew.KSSettingsMenu.RebuildNavigation
struct UKSSettingsMenu_RebuildNavigation_Params
{
};

// Function KillstreakUINew.KSSettingsMenu.OnShowPage
struct UKSSettingsMenu_OnShowPage_Params
{
	class UKSSettingsPage*                             SettingsPage;                                              // 0x0000(0x0008)  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function KillstreakUINew.KSSettingsMenu.OnSaveSettings
struct UKSSettingsMenu_OnSaveSettings_Params
{
};

// Function KillstreakUINew.KSSettingsMenu.OnRevertSettings
struct UKSSettingsMenu_OnRevertSettings_Params
{
};

// Function KillstreakUINew.KSSettingsMenu.OnMenuConfigSet
struct UKSSettingsMenu_OnMenuConfigSet_Params
{
};

// Function KillstreakUINew.KSSettingsMenu.OnHidePage
struct UKSSettingsMenu_OnHidePage_Params
{
	class UKSSettingsPage*                             SettingsPage;                                              // 0x0000(0x0008)  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function KillstreakUINew.KSSettingsMenu.OnConfirmExit
struct UKSSettingsMenu_OnConfirmExit_Params
{
	bool                                               ShouldSaveSettings;                                        // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function KillstreakUINew.KSSettingsMenu.GetSettingsPages
struct UKSSettingsMenu_GetSettingsPages_Params
{
	TArray<class UKSSettingsPage*>                     ReturnValue;                                               // 0x0000(0x0010)  (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, ContainsInstancedReference, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function KillstreakUINew.KSSettingsMenu.ConfirmRevertSettings
struct UKSSettingsMenu_ConfirmRevertSettings_Params
{
};

// Function KillstreakUINew.KSSettingsMenu.CheckSavePendingChanges
struct UKSSettingsMenu_CheckSavePendingChanges_Params
{
};

// Function KillstreakUINew.KSSettingsMenu.AddSettingsPageWidget
struct UKSSettingsMenu_AddSettingsPageWidget_Params
{
	class UKSSettingsPage*                             SettingsPage;                                              // 0x0000(0x0008)  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function KillstreakUINew.KSSettingsPage.OnShowSection
struct UKSSettingsPage_OnShowSection_Params
{
	class UKSSettingsSection*                          SettingsSection;                                           // 0x0000(0x0008)  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function KillstreakUINew.KSSettingsPage.OnPageConfigSet
struct UKSSettingsPage_OnPageConfigSet_Params
{
};

// Function KillstreakUINew.KSSettingsPage.OnHideSection
struct UKSSettingsPage_OnHideSection_Params
{
	class UKSSettingsSection*                          SettingsSection;                                           // 0x0000(0x0008)  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function KillstreakUINew.KSSettingsPage.GetSettingsSections
struct UKSSettingsPage_GetSettingsSections_Params
{
	TArray<class UKSSettingsSection*>                  ReturnValue;                                               // 0x0000(0x0010)  (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, ContainsInstancedReference, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function KillstreakUINew.KSSettingsPage.GetScrollBox
struct UKSSettingsPage_GetScrollBox_Params
{
	class UScrollBox*                                  ReturnValue;                                               // 0x0000(0x0008)  (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function KillstreakUINew.KSSettingsPage.AddSettingsSectionWidget
struct UKSSettingsPage_AddSettingsSectionWidget_Params
{
	class UKSSettingsSection*                          SettingsSection;                                           // 0x0000(0x0008)  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function KillstreakUINew.KSSettingsPreview.HandleOnValueChanged
struct UKSSettingsPreview_HandleOnValueChanged_Params
{
	bool                                               ChangedExternally;                                         // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function KillstreakUINew.KSSettingsPreview.HandleOnPreviewValueChanged
struct UKSSettingsPreview_HandleOnPreviewValueChanged_Params
{
};

// Function KillstreakUINew.KSSettingsSection.OnShowGroup
struct UKSSettingsSection_OnShowGroup_Params
{
	class UKSSettingsGroup*                            SettingsGroup;                                             // 0x0000(0x0008)  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function KillstreakUINew.KSSettingsSection.OnSectionConfigSet
struct UKSSettingsSection_OnSectionConfigSet_Params
{
};

// Function KillstreakUINew.KSSettingsSection.OnHideGroup
struct UKSSettingsSection_OnHideGroup_Params
{
	class UKSSettingsGroup*                            SettingsGroup;                                             // 0x0000(0x0008)  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function KillstreakUINew.KSSettingsSection.GetSettingsGroups
struct UKSSettingsSection_GetSettingsGroups_Params
{
	TArray<class UKSSettingsGroup*>                    ReturnValue;                                               // 0x0000(0x0010)  (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, ContainsInstancedReference, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function KillstreakUINew.KSSettingsSection.AddSettingsGroupWidget
struct UKSSettingsSection_AddSettingsGroupWidget_Params
{
	class UKSSettingsGroup*                            SettingsGroup;                                             // 0x0000(0x0008)  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function KillstreakUINew.KSSettingsWidget.SaveSetting
struct UKSSettingsWidget_SaveSetting_Params
{
};

// Function KillstreakUINew.KSSettingsWidget.RevertSetting
struct UKSSettingsWidget_RevertSetting_Params
{
};

// Function KillstreakUINew.KSSettingsWidget.OnWidgetSettingsInfoSet
struct UKSSettingsWidget_OnWidgetSettingsInfoSet_Params
{
};

// Function KillstreakUINew.KSSettingsWidget.OnWidgetContainerTitleSet
struct UKSSettingsWidget_OnWidgetContainerTitleSet_Params
{
};

// Function KillstreakUINew.KSSettingsWidget.OnWidgetContainerPreviewSet
struct UKSSettingsWidget_OnWidgetContainerPreviewSet_Params
{
};

// Function KillstreakUINew.KSSettingsWidget.OnWidgetContainerDescriptionSet
struct UKSSettingsWidget_OnWidgetContainerDescriptionSet_Params
{
};

// Function KillstreakUINew.KSSettingsWidget.OnWidgetConfigSet
struct UKSSettingsWidget_OnWidgetConfigSet_Params
{
};

// Function KillstreakUINew.KSSettingsWidget.OnSettingsInfoValueChanged
struct UKSSettingsWidget_OnSettingsInfoValueChanged_Params
{
	bool                                               bChangedExternally;                                        // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function KillstreakUINew.KSSettingsWidget.OnInputAttached
struct UKSSettingsWidget_OnInputAttached_Params
{
	bool                                               bGamepadAttached;                                          // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bMouseAttached;                                            // 0x0001(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function KillstreakUINew.KSSettingsWidget.IsSaved
struct UKSSettingsWidget_IsSaved_Params
{
	bool                                               ReturnValue;                                               // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function KillstreakUINew.KSSettingsWidget.IsApplied
struct UKSSettingsWidget_IsApplied_Params
{
	bool                                               ReturnValue;                                               // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function KillstreakUINew.KSSettingsWidget.HasPreview
struct UKSSettingsWidget_HasPreview_Params
{
	bool                                               ReturnValue;                                               // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function KillstreakUINew.KSSettingsWidget.CanGamepadNavigate
struct UKSSettingsWidget_CanGamepadNavigate_Params
{
	bool                                               ReturnValue;                                               // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function KillstreakUINew.KSSettingsWidget.ApplySetting
struct UKSSettingsWidget_ApplySetting_Params
{
};

// Function KillstreakUINew.KSShopItemButtonBase.GetHitTarget
struct UKSShopItemButtonBase_GetHitTarget_Params
{
	class UButton*                                     ReturnValue;                                               // 0x0000(0x0008)  (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function KillstreakUINew.KSShopItemButtonBase.DisplayShopItem
struct UKSShopItemButtonBase_DisplayShopItem_Params
{
	struct FShopItem                                   ShopItem;                                                  // 0x0000(0x0070)  (Parm, NativeAccessSpecifierPublic)
	bool                                               IsAffordable;                                              // 0x0070(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               IsToggleSlot;                                              // 0x0071(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               IsSwapDisplay;                                             // 0x0072(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function KillstreakUINew.KSShopItemButtonBase.ButtonUnhovered
struct UKSShopItemButtonBase_ButtonUnhovered_Params
{
};

// Function KillstreakUINew.KSShopItemButtonBase.ButtonReleased
struct UKSShopItemButtonBase_ButtonReleased_Params
{
};

// Function KillstreakUINew.KSShopItemButtonBase.ButtonPressed
struct UKSShopItemButtonBase_ButtonPressed_Params
{
};

// Function KillstreakUINew.KSShopItemButtonBase.ButtonHovered
struct UKSShopItemButtonBase_ButtonHovered_Params
{
};

// Function KillstreakUINew.KSShopItemButtonBase.ButtonClicked
struct UKSShopItemButtonBase_ButtonClicked_Params
{
};

// Function KillstreakUINew.KSSideNavigationOverlay.HandleNavigateRight
struct UKSSideNavigationOverlay_HandleNavigateRight_Params
{
};

// Function KillstreakUINew.KSSideNavigationOverlay.HandleNavigateLeft
struct UKSSideNavigationOverlay_HandleNavigateLeft_Params
{
};

// Function KillstreakUINew.KSSideNavigationOverlay.DisplayRightPreviewText
struct UKSSideNavigationOverlay_DisplayRightPreviewText_Params
{
	struct FText                                       PreviewText;                                               // 0x0000(0x0018)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
};

// Function KillstreakUINew.KSSideNavigationOverlay.DisplayLeftPreviewText
struct UKSSideNavigationOverlay_DisplayLeftPreviewText_Params
{
	struct FText                                       PreviewText;                                               // 0x0000(0x0018)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
};

// Function KillstreakUINew.KSSideNavigationOverlay.BroadcastNavigationAction
struct UKSSideNavigationOverlay_BroadcastNavigationAction_Params
{
	int                                                SideDirection;                                             // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function KillstreakUINew.KSSocialPanelBase.UpdateListData
struct UKSSocialPanelBase_UpdateListData_Params
{
};

// Function KillstreakUINew.KSSocialPanelBase.SetupTreeView
struct UKSSocialPanelBase_SetupTreeView_Params
{
	class UTreeView*                                   List;                                                      // 0x0000(0x0008)  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function KillstreakUINew.KSSocialPanelBase.SetDataSource
struct UKSSocialPanelBase_SetDataSource_Params
{
	class UKSSocialOverlay*                            Source;                                                    // 0x0000(0x0008)  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function KillstreakUINew.KSSocialPanelBase.OnDataChange
struct UKSSocialPanelBase_OnDataChange_Params
{
	TArray<KillstreakUINew_EKSSocialOverlaySection>    Sections;                                                  // 0x0000(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function KillstreakUINew.KSSocialPanelBase.GetTreeView
struct UKSSocialPanelBase_GetTreeView_Params
{
	class UTreeView*                                   ReturnValue;                                               // 0x0000(0x0008)  (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function KillstreakUINew.KSSocialPanelBase.GetSubListFromData
struct UKSSocialPanelBase_GetSubListFromData_Params
{
	class UObject*                                     Source;                                                    // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<class UObject*>                             Out_List;                                                  // 0x0008(0x0010)  (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function KillstreakUINew.KSSocialPanelBase.GetDataSource
struct UKSSocialPanelBase_GetDataSource_Params
{
	class UKSSocialOverlay*                            ReturnValue;                                               // 0x0000(0x0008)  (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function KillstreakUINew.KSSocialOverlay.RepopulateAll
struct UKSSocialOverlay_RepopulateAll_Params
{
};

// Function KillstreakUINew.KSSocialOverlay.PlayTransition
struct UKSSocialOverlay_PlayTransition_Params
{
	class UWidgetAnimation*                            Animation;                                                 // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               TransitionOut;                                             // 0x0008(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function KillstreakUINew.KSSocialOverlay.OnRecentlyPlayedChange
struct UKSSocialOverlay_OnRecentlyPlayedChange_Params
{
	class UKSFriendDataFactory*                        Source;                                                    // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function KillstreakUINew.KSSocialOverlay.HandleUpdatePlayers
struct UKSSocialOverlay_HandleUpdatePlayers_Params
{
};

// Function KillstreakUINew.KSSocialOverlay.GetData
struct UKSSocialOverlay_GetData_Params
{
	TArray<class UKSDataSocialCategory*>               ReturnValue;                                               // 0x0000(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function KillstreakUINew.KSSocialOverlay.GetCategory
struct UKSSocialOverlay_GetCategory_Params
{
	KillstreakUINew_EKSSocialOverlaySection            Category;                                                  // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UKSDataSocialCategory*                       ReturnValue;                                               // 0x0008(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function KillstreakUINew.KSSocialOverlay.GetCategories
struct UKSSocialOverlay_GetCategories_Params
{
	TArray<KillstreakUINew_EKSSocialOverlaySection>    Categories;                                                // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<class UKSDataSocialCategory*>               ReturnValue;                                               // 0x0010(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function KillstreakUINew.KSSocialSearchPanel.OnSearchTimeout
struct UKSSocialSearchPanel_OnSearchTimeout_Params
{
};

// Function KillstreakUINew.KSSocialSearchPanel.OnSearchStart
struct UKSSocialSearchPanel_OnSearchStart_Params
{
	struct FText                                       SearchTerm;                                                // 0x0000(0x0018)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
};

// Function KillstreakUINew.KSSocialSearchPanel.OnSearchComplete
struct UKSSocialSearchPanel_OnSearchComplete_Params
{
	struct FText                                       SearchTerm;                                                // 0x0000(0x0018)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	struct FText                                       Error;                                                     // 0x0018(0x0018)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	TArray<class UKSDataSocialPlayer*>                 Results;                                                   // 0x0030(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function KillstreakUINew.KSSocialSearchPanel.OnOverlayClosed
struct UKSSocialSearchPanel_OnOverlayClosed_Params
{
};

// Function KillstreakUINew.KSSocialSearchPanel.IsSearching
struct UKSSocialSearchPanel_IsSearching_Params
{
	bool                                               ReturnValue;                                               // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function KillstreakUINew.KSSocialSearchPanel.GetActiveSearchTerm
struct UKSSocialSearchPanel_GetActiveSearchTerm_Params
{
	struct FText                                       ReturnValue;                                               // 0x0000(0x0018)  (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
};

// Function KillstreakUINew.KSSocialSearchPanel.DoSearch
struct UKSSocialSearchPanel_DoSearch_Params
{
	struct FText                                       SearchTerm;                                                // 0x0000(0x0018)  (Parm, NativeAccessSpecifierPublic)
};

// Function KillstreakUINew.KSSocialWidgetBase.SortFriendData
struct UKSSocialWidgetBase_SortFriendData_Params
{
	TArray<class UPUMG_PlayerInfo*>                    Friends;                                                   // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function KillstreakUINew.KSSocialWidgetBase.SearchPlayerName
struct UKSSocialWidgetBase_SearchPlayerName_Params
{
	struct FString                                     PlayerName;                                                // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function KillstreakUINew.KSSocialWidgetBase.OnFriendRequestsUpdated
struct UKSSocialWidgetBase_OnFriendRequestsUpdated_Params
{
};

// Function KillstreakUINew.KSSocialWidgetBase.HandleSearchByNameResultsUpdated
struct UKSSocialWidgetBase_HandleSearchByNameResultsUpdated_Params
{
};

// Function KillstreakUINew.KSSocialWidgetBase.HandlePartyDataUpdated
struct UKSSocialWidgetBase_HandlePartyDataUpdated_Params
{
};

// Function KillstreakUINew.KSSocialWidgetBase.HandleFriendInviteReceived
struct UKSSocialWidgetBase_HandleFriendInviteReceived_Params
{
	struct FPUMG_FriendData                            PlayerData;                                                // 0x0000(0x0028)  (Parm, NativeAccessSpecifierPublic)
};

// Function KillstreakUINew.KSSocialWidgetBase.HandleFriendDataUpdated
struct UKSSocialWidgetBase_HandleFriendDataUpdated_Params
{
};

// Function KillstreakUINew.KSSocialWidgetBase.GetSortedFriends
struct UKSSocialWidgetBase_GetSortedFriends_Params
{
	TArray<class UPUMG_PlayerInfo*>                    ReturnValue;                                               // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function KillstreakUINew.KSSocialWidgetBase.GetSearchResults
struct UKSSocialWidgetBase_GetSearchResults_Params
{
	TArray<class UPUMG_PlayerInfo*>                    ReturnValue;                                               // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function KillstreakUINew.KSSocialWidgetBase.GetPlayerWhoDataFactory
struct UKSSocialWidgetBase_GetPlayerWhoDataFactory_Params
{
	class UKSPlayerWhoDataFactory*                     ReturnValue;                                               // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function KillstreakUINew.KSSocialWidgetBase.GetPartyDataFactory
struct UKSSocialWidgetBase_GetPartyDataFactory_Params
{
	class UKSPartyDataFactory*                         ReturnValue;                                               // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function KillstreakUINew.KSSocialWidgetBase.GetFriendDataFactory
struct UKSSocialWidgetBase_GetFriendDataFactory_Params
{
	class UKSFriendDataFactory*                        ReturnValue;                                               // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function KillstreakUINew.KSSocialWidgetBase.ClearSearchResults
struct UKSSocialWidgetBase_ClearSearchResults_Params
{
};

// DelegateFunction KillstreakUINew.KSSortableGridPanel.SortChildrenComparator__DelegateSignature
struct UKSSortableGridPanel_SortChildrenComparator__DelegateSignature_Params
{
	class UWidget*                                     LHS;                                                       // 0x0000(0x0008)  (ConstParm, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UWidget*                                     RHS;                                                       // 0x0008(0x0008)  (ConstParm, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               ReturnValue;                                               // 0x0010(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function KillstreakUINew.KSSortableGridPanel.SortChildren
struct UKSSortableGridPanel_SortChildren_Params
{
};

// Function KillstreakUINew.KSSortableGridPanel.AddChildAutoLayout
struct UKSSortableGridPanel_AddChildAutoLayout_Params
{
	class UWidget*                                     Content;                                                   // 0x0000(0x0008)  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UGridSlot*                                   ReturnValue;                                               // 0x0008(0x0008)  (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// DelegateFunction KillstreakUINew.KSSortableVerticalBox.SortChildrenComparator__DelegateSignature
struct UKSSortableVerticalBox_SortChildrenComparator__DelegateSignature_Params
{
	class UWidget*                                     LHS;                                                       // 0x0000(0x0008)  (ConstParm, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UWidget*                                     RHS;                                                       // 0x0008(0x0008)  (ConstParm, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               ReturnValue;                                               // 0x0010(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function KillstreakUINew.KSSortableVerticalBox.SortChildren
struct UKSSortableVerticalBox_SortChildren_Params
{
};

// Function KillstreakUINew.KSStorePanelItem.IsOnSale
struct UKSStorePanelItem_IsOnSale_Params
{
	bool                                               ReturnValue;                                               // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function KillstreakUINew.KSStoreSectionItem.HasUnseenItems
struct UKSStoreSectionItem_HasUnseenItems_Params
{
	bool                                               ReturnValue;                                               // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function KillstreakUINew.KSStoreSection.HasUnseenItems
struct UKSStoreSection_HasUnseenItems_Params
{
	bool                                               ReturnValue;                                               // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function KillstreakUINew.KSStoreSection.GetSectionHeader
struct UKSStoreSection_GetSectionHeader_Params
{
	struct FText                                       ReturnValue;                                               // 0x0000(0x0018)  (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
};

// Function KillstreakUINew.KSStoreSection.GetSecondsRemaining
struct UKSStoreSection_GetSecondsRemaining_Params
{
	int                                                ReturnValue;                                               // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function KillstreakUINew.KSStoreWidget.OnVendorsReceived
struct UKSStoreWidget_OnVendorsReceived_Params
{
	int                                                GroupId;                                                   // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<int>                                        VendorIds;                                                 // 0x0008(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function KillstreakUINew.KSStoreWidget.OnPricePointsReveived
struct UKSStoreWidget_OnPricePointsReveived_Params
{
};

// Function KillstreakUINew.KSStoreWidget.OnPortalOffersReceived
struct UKSStoreWidget_OnPortalOffersReceived_Params
{
};

// Function KillstreakUINew.KSStoreWidget.HasAllRequiredStoreInformation
struct UKSStoreWidget_HasAllRequiredStoreInformation_Params
{
	bool                                               ReturnValue;                                               // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function KillstreakUINew.KSStoreWidget.GetStoreRotationSecondsRemaining
struct UKSStoreWidget_GetStoreRotationSecondsRemaining_Params
{
	int                                                ReturnValue;                                               // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function KillstreakUINew.KSStoreWidget.GetStoreLayout
struct UKSStoreWidget_GetStoreLayout_Params
{
	TArray<class UKSStoreSection*>                     ReturnValue;                                               // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function KillstreakUINew.KSStoreWidget.GetStoreItemHelper
struct UKSStoreWidget_GetStoreItemHelper_Params
{
	class UKSStoreItemHelper*                          ReturnValue;                                               // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function KillstreakUINew.KSTargetMarkerWidget.UpdateCharge
struct UKSTargetMarkerWidget_UpdateCharge_Params
{
	class UKSModInst_Activated*                        ModInst;                                                   // 0x0000(0x0008)  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function KillstreakUINew.KSTargetMarkerWidget.TryApplyViewState
struct UKSTargetMarkerWidget_TryApplyViewState_Params
{
	KillstreakUINew_ETargetMarkerViewState             ViewState;                                                 // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bForce;                                                    // 0x0001(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function KillstreakUINew.KSTargetMarkerWidget.ReceiveNewTarget
struct UKSTargetMarkerWidget_ReceiveNewTarget_Params
{
	class AActor*                                      NewTarget;                                                 // 0x0010(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function KillstreakUINew.KSTargetMarkerWidget.OnGamepadSelectedChanged
struct UKSTargetMarkerWidget_OnGamepadSelectedChanged_Params
{
	int                                                NewSelectionIndex;                                         // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function KillstreakUINew.KSTargetMarkerWidget.GetCurrentViewState
struct UKSTargetMarkerWidget_GetCurrentViewState_Params
{
	KillstreakUINew_ETargetMarkerViewState             ReturnValue;                                               // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function KillstreakUINew.KSTargetMarkerWidget.BindTargetModInst
struct UKSTargetMarkerWidget_BindTargetModInst_Params
{
};

// Function KillstreakUINew.KSTargetMarkerWidget.ApplyViewState
struct UKSTargetMarkerWidget_ApplyViewState_Params
{
	KillstreakUINew_ETargetMarkerViewState             ViewState;                                                 // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function KillstreakUINew.KSTextChatWidget.Whisper
struct UKSTextChatWidget_Whisper_Params
{
	struct FString                                     PlayerName;                                                // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     Message;                                                   // 0x0010(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function KillstreakUINew.KSTextChatWidget.Unblock
struct UKSTextChatWidget_Unblock_Params
{
	struct FString                                     PlayerName;                                                // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function KillstreakUINew.KSTextChatWidget.UIX_SubmitTextInput
struct UKSTextChatWidget_UIX_SubmitTextInput_Params
{
	struct FString                                     Message;                                                   // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function KillstreakUINew.KSTextChatWidget.UIX_SendMessageToPlayer
struct UKSTextChatWidget_UIX_SendMessageToPlayer_Params
{
	struct FString                                     Message;                                                   // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int64_t                                            PlayerId;                                                  // 0x0010(0x0008)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function KillstreakUINew.KSTextChatWidget.UIX_SendMessageToChannel
struct UKSTextChatWidget_UIX_SendMessageToChannel_Params
{
	struct FString                                     Message;                                                   // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	PlatformUMG_EPUMG_ChatChannel                      Channel;                                                   // 0x0010(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function KillstreakUINew.KSTextChatWidget.UIX_MarkMessageAsRead
struct UKSTextChatWidget_UIX_MarkMessageAsRead_Params
{
	int                                                MessageIndex;                                              // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function KillstreakUINew.KSTextChatWidget.UIX_ExecuteChatCommandLine
struct UKSTextChatWidget_UIX_ExecuteChatCommandLine_Params
{
	struct FString                                     CommandLine;                                               // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function KillstreakUINew.KSTextChatWidget.ToggleDND
struct UKSTextChatWidget_ToggleDND_Params
{
};

// Function KillstreakUINew.KSTextChatWidget.ShowTextChat
struct UKSTextChatWidget_ShowTextChat_Params
{
};

// Function KillstreakUINew.KSTextChatWidget.SetChatChannelToPlayer
struct UKSTextChatWidget_SetChatChannelToPlayer_Params
{
	int64_t                                            PlayerId;                                                  // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               ReturnValue;                                               // 0x0008(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function KillstreakUINew.KSTextChatWidget.SetChatChannel
struct UKSTextChatWidget_SetChatChannel_Params
{
	PlatformUMG_EPUMG_ChatChannel                      Channel;                                                   // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int64_t                                            PersonalChannelPlayerId;                                   // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               ReturnValue;                                               // 0x0010(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function KillstreakUINew.KSTextChatWidget.Reply
struct UKSTextChatWidget_Reply_Params
{
	struct FString                                     Message;                                                   // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function KillstreakUINew.KSTextChatWidget.ProcessMessageOnClient
struct UKSTextChatWidget_ProcessMessageOnClient_Params
{
	struct FText                                       Message;                                                   // 0x0000(0x0018)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	PlatformUMG_EPUMG_ChatChannel                      Channel;                                                   // 0x0018(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function KillstreakUINew.KSTextChatWidget.PreviousChatChannel
struct UKSTextChatWidget_PreviousChatChannel_Params
{
};

// Function KillstreakUINew.KSTextChatWidget.OpenTextChatToPlayer
struct UKSTextChatWidget_OpenTextChatToPlayer_Params
{
	class UPUMG_PlayerInfo*                            Player;                                                    // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function KillstreakUINew.KSTextChatWidget.OpenTextChat
struct UKSTextChatWidget_OpenTextChat_Params
{
	bool                                               BeginChatCommand;                                          // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function KillstreakUINew.KSTextChatWidget.NextChatChannel
struct UKSTextChatWidget_NextChatChannel_Params
{
};

// Function KillstreakUINew.KSTextChatWidget.IsActiveChatChannel
struct UKSTextChatWidget_IsActiveChatChannel_Params
{
	PlatformUMG_EPUMG_ChatChannel                      Channel;                                                   // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               ReturnValue;                                               // 0x0001(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function KillstreakUINew.KSTextChatWidget.HandleChatMessageReceived
struct UKSTextChatWidget_HandleChatMessageReceived_Params
{
	struct FPUMG_ChatData                              ReceivedMessage;                                           // 0x0000(0x0040)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
};

// Function KillstreakUINew.KSTextChatWidget.HandleChatMessageRead
struct UKSTextChatWidget_HandleChatMessageRead_Params
{
	struct FPUMG_ChatData                              ReadMessage;                                               // 0x0000(0x0040)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
};

// Function KillstreakUINew.KSTextChatWidget.HandleChatChannelLeft
struct UKSTextChatWidget_HandleChatChannelLeft_Params
{
	PlatformUMG_EPUMG_ChatChannel                      Channel;                                                   // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function KillstreakUINew.KSTextChatWidget.HandleChatChannelJoined
struct UKSTextChatWidget_HandleChatChannelJoined_Params
{
	PlatformUMG_EPUMG_ChatChannel                      Channel;                                                   // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function KillstreakUINew.KSTextChatWidget.GetCurrentChatChannel
struct UKSTextChatWidget_GetCurrentChatChannel_Params
{
	struct FPUMG_ActiveChatChannelData                 ReturnValue;                                               // 0x0000(0x0010)  (Parm, OutParm, ReturnParm, NoDestructor, NativeAccessSpecifierPublic)
};

// Function KillstreakUINew.KSTextChatWidget.GetChatDataFactory
struct UKSTextChatWidget_GetChatDataFactory_Params
{
	class UKSChatDataFactory*                          ReturnValue;                                               // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function KillstreakUINew.KSTextChatWidget.GetActiveChatChannels
struct UKSTextChatWidget_GetActiveChatChannels_Params
{
	TArray<struct FPUMG_ActiveChatChannelData>         ReturnValue;                                               // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function KillstreakUINew.KSTextChatWidget.CanChatInChannel
struct UKSTextChatWidget_CanChatInChannel_Params
{
	PlatformUMG_EPUMG_ChatChannel                      Channel;                                                   // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               ReturnValue;                                               // 0x0001(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function KillstreakUINew.KSTextChatWidget.Block
struct UKSTextChatWidget_Block_Params
{
	struct FString                                     PlayerName;                                                // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function KillstreakUINew.KSToastNotificationWidgetBase.TestDisplayChallengeNotification
struct UKSToastNotificationWidgetBase_TestDisplayChallengeNotification_Params
{
};

// Function KillstreakUINew.KSToastNotificationWidgetBase.StoreToastQueue
struct UKSToastNotificationWidgetBase_StoreToastQueue_Params
{
	struct FToastData                                  ToastNotification;                                         // 0x0000(0x0058)  (Parm, NativeAccessSpecifierPublic)
};

// Function KillstreakUINew.KSToastNotificationWidgetBase.ShowToastNotification
struct UKSToastNotificationWidgetBase_ShowToastNotification_Params
{
};

// Function KillstreakUINew.KSToastNotificationWidgetBase.OnWeaponMilestoneCompleted
struct UKSToastNotificationWidgetBase_OnWeaponMilestoneCompleted_Params
{
	class UKSActivityInstance*                         Activity;                                                  // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                Tier;                                                      // 0x0008(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                Count;                                                     // 0x000C(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function KillstreakUINew.KSToastNotificationWidgetBase.OnToastNotificationReceived
struct UKSToastNotificationWidgetBase_OnToastNotificationReceived_Params
{
	struct FToastData                                  ToastData;                                                 // 0x0000(0x0058)  (Parm, NativeAccessSpecifierPublic)
};

// Function KillstreakUINew.KSToastNotificationWidgetBase.OnChallengeCompleted
struct UKSToastNotificationWidgetBase_OnChallengeCompleted_Params
{
	class UKSActivityInstance*                         Activity;                                                  // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function KillstreakUINew.KSToastNotificationWidgetBase.OnAwardsCompleted
struct UKSToastNotificationWidgetBase_OnAwardsCompleted_Params
{
	class UKSActivityInstance*                         Activity;                                                  // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function KillstreakUINew.KSToastNotificationWidgetBase.NotifyToastShown
struct UKSToastNotificationWidgetBase_NotifyToastShown_Params
{
};

// Function KillstreakUINew.KSToastNotificationWidgetBase.NotifyToastHidden
struct UKSToastNotificationWidgetBase_NotifyToastHidden_Params
{
};

// Function KillstreakUINew.KSToastNotificationWidgetBase.HandlePartyMemberPromoted
struct UKSToastNotificationWidgetBase_HandlePartyMemberPromoted_Params
{
	int64_t                                            PlayerId;                                                  // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function KillstreakUINew.KSToastNotificationWidgetBase.HandlePartyMemberLeftGeneric
struct UKSToastNotificationWidgetBase_HandlePartyMemberLeftGeneric_Params
{
};

// Function KillstreakUINew.KSToastNotificationWidgetBase.HandlePartyMemberLeft
struct UKSToastNotificationWidgetBase_HandlePartyMemberLeft_Params
{
	struct FPUMG_PartyMemberData                       PartyMemberData;                                           // 0x0000(0x0030)  (Parm, NativeAccessSpecifierPublic)
};

// Function KillstreakUINew.KSToastNotificationWidgetBase.HandlePartyMemberKick
struct UKSToastNotificationWidgetBase_HandlePartyMemberKick_Params
{
	int64_t                                            PlayerId;                                                  // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function KillstreakUINew.KSToastNotificationWidgetBase.HandlePartyMemberAdded
struct UKSToastNotificationWidgetBase_HandlePartyMemberAdded_Params
{
	struct FPUMG_PartyMemberData                       PartyMemberData;                                           // 0x0000(0x0030)  (Parm, NativeAccessSpecifierPublic)
};

// Function KillstreakUINew.KSToastNotificationWidgetBase.HandlePartyLocalPlayerLeft
struct UKSToastNotificationWidgetBase_HandlePartyLocalPlayerLeft_Params
{
};

// Function KillstreakUINew.KSToastNotificationWidgetBase.HandlePartyInviteSent
struct UKSToastNotificationWidgetBase_HandlePartyInviteSent_Params
{
	struct FText                                       PlayerName;                                                // 0x0000(0x0018)  (Parm, NativeAccessSpecifierPublic)
};

// Function KillstreakUINew.KSToastNotificationWidgetBase.HandlePartyInviteRejected
struct UKSToastNotificationWidgetBase_HandlePartyInviteRejected_Params
{
};

// Function KillstreakUINew.KSToastNotificationWidgetBase.HandlePartyInviteReceived
struct UKSToastNotificationWidgetBase_HandlePartyInviteReceived_Params
{
	class UPUMG_PlayerInfo*                            PartyInviter;                                              // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function KillstreakUINew.KSToastNotificationWidgetBase.HandlePartyInviteError
struct UKSToastNotificationWidgetBase_HandlePartyInviteError_Params
{
	struct FText                                       PlayerName;                                                // 0x0000(0x0018)  (Parm, NativeAccessSpecifierPublic)
};

// Function KillstreakUINew.KSToastNotificationWidgetBase.HandlePartyInviteAccepted
struct UKSToastNotificationWidgetBase_HandlePartyInviteAccepted_Params
{
};

// Function KillstreakUINew.KSToastNotificationWidgetBase.HandlePartyDisbanded
struct UKSToastNotificationWidgetBase_HandlePartyDisbanded_Params
{
};

// Function KillstreakUINew.KSToastNotificationWidgetBase.HandleFriendRejected
struct UKSToastNotificationWidgetBase_HandleFriendRejected_Params
{
	struct FText                                       PlayerName;                                                // 0x0000(0x0018)  (Parm, NativeAccessSpecifierPublic)
};

// Function KillstreakUINew.KSToastNotificationWidgetBase.HandleFriendInviteReceived
struct UKSToastNotificationWidgetBase_HandleFriendInviteReceived_Params
{
	struct FPUMG_FriendData                            PlayerData;                                                // 0x0000(0x0028)  (Parm, NativeAccessSpecifierPublic)
};

// Function KillstreakUINew.KSToastNotificationWidgetBase.HandleFriendAddSuccess
struct UKSToastNotificationWidgetBase_HandleFriendAddSuccess_Params
{
	struct FString                                     PlayerName;                                                // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function KillstreakUINew.KSToastNotificationWidgetBase.HandleFriendAdded
struct UKSToastNotificationWidgetBase_HandleFriendAdded_Params
{
	struct FText                                       PlayerName;                                                // 0x0000(0x0018)  (Parm, NativeAccessSpecifierPublic)
};

// Function KillstreakUINew.KSToastNotificationWidgetBase.GetWeaponMasteryManager
struct UKSToastNotificationWidgetBase_GetWeaponMasteryManager_Params
{
	class UKSWeaponMasteryManager*                     ReturnValue;                                               // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function KillstreakUINew.KSToastNotificationWidgetBase.GetPostMatchToasts
struct UKSToastNotificationWidgetBase_GetPostMatchToasts_Params
{
	TArray<struct FToastData>                          ReturnValue;                                               // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function KillstreakUINew.KSToastNotificationWidgetBase.GetPlayerChallengesManager
struct UKSToastNotificationWidgetBase_GetPlayerChallengesManager_Params
{
	class UKSPlayerChallengesManager*                  ReturnValue;                                               // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function KillstreakUINew.KSToastNotificationWidgetBase.GetPlayerAwardsManager
struct UKSToastNotificationWidgetBase_GetPlayerAwardsManager_Params
{
	class UKSAwardsManager*                            ReturnValue;                                               // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function KillstreakUINew.KSToastNotificationWidgetBase.GetPartyDataFactory
struct UKSToastNotificationWidgetBase_GetPartyDataFactory_Params
{
	class UKSPartyDataFactory*                         ReturnValue;                                               // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function KillstreakUINew.KSToastNotificationWidgetBase.GetNext
struct UKSToastNotificationWidgetBase_GetNext_Params
{
	struct FToastData                                  NextToastNotification;                                     // 0x0000(0x0058)  (Parm, OutParm, NativeAccessSpecifierPublic)
	bool                                               ReturnValue;                                               // 0x0058(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function KillstreakUINew.KSToastNotificationWidgetBase.GetFriendDataFactory
struct UKSToastNotificationWidgetBase_GetFriendDataFactory_Params
{
	class UKSFriendDataFactory*                        ReturnValue;                                               // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function KillstreakUINew.KSToastNotificationWidgetBase.GetEventChallengesManager
struct UKSToastNotificationWidgetBase_GetEventChallengesManager_Params
{
	class UKSEventChallengesManager*                   ReturnValue;                                               // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function KillstreakUINew.KSToastNotificationWidgetBase.GetBattlePassProgressionManager
struct UKSToastNotificationWidgetBase_GetBattlePassProgressionManager_Params
{
	class UKSBattlePassProgressionManager*             ReturnValue;                                               // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function KillstreakUINew.KSToastNotificationWidgetBase.CreatePlayerLevelUpToasts
struct UKSToastNotificationWidgetBase_CreatePlayerLevelUpToasts_Params
{
	class UKSActivityInstance*                         PlayerLevelActivityInstance;                               // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FActivityTier                               TierObtained;                                              // 0x0008(0x0040)  (Parm, NativeAccessSpecifierPublic)
};

// Function KillstreakUINew.KSToastNotificationWidgetBase.CreateMiniBattlePassTierUnlockToasts
struct UKSToastNotificationWidgetBase_CreateMiniBattlePassTierUnlockToasts_Params
{
	class UKSActivityInstance*                         MiniBattlePassActivityInstance;                            // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FActivityTier                               TierObtained;                                              // 0x0008(0x0040)  (Parm, NativeAccessSpecifierPublic)
};

// Function KillstreakUINew.KSToastNotificationWidgetBase.CreateMercMasteryLevelUpToasts
struct UKSToastNotificationWidgetBase_CreateMercMasteryLevelUpToasts_Params
{
	class UKSActivityInstance*                         MercMasteryActivityInstance;                               // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FActivityTier                               TierObtained;                                              // 0x0008(0x0040)  (Parm, NativeAccessSpecifierPublic)
};

// Function KillstreakUINew.KSToastNotificationWidgetBase.CreateEventChallengeCompleteToasts
struct UKSToastNotificationWidgetBase_CreateEventChallengeCompleteToasts_Params
{
	class UKSActivityInstance*                         EventChallengeActivityInstance;                            // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function KillstreakUINew.KSToastNotificationWidgetBase.CreateBoostActivationToastBySpentItem
struct UKSToastNotificationWidgetBase_CreateBoostActivationToastBySpentItem_Params
{
	class UPlatformInventoryItem*                      SpentItem;                                                 // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function KillstreakUINew.KSToastNotificationWidgetBase.CreateBoostActivationToastByAcquisition
struct UKSToastNotificationWidgetBase_CreateBoostActivationToastByAcquisition_Params
{
	class UPUMG_StoreItem*                             AcquisitionItem;                                           // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function KillstreakUINew.KSToastNotificationWidgetBase.ClearPostMatchQueue
struct UKSToastNotificationWidgetBase_ClearPostMatchQueue_Params
{
};

// Function KillstreakUINew.KSToastNotificationWidgetBase.ClearNotificationQueue
struct UKSToastNotificationWidgetBase_ClearNotificationQueue_Params
{
};

// Function KillstreakUINew.KSTopBarStatusIconInterface.UnbindEventFromTopBarStatusIconShowingChanged
struct UKSTopBarStatusIconInterface_UnbindEventFromTopBarStatusIconShowingChanged_Params
{
	struct FScriptDelegate                             Callback;                                                  // 0x0000(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
};

// Function KillstreakUINew.KSTopBarStatusIconInterface.IsInTopBarStatusIconShowingState
struct UKSTopBarStatusIconInterface_IsInTopBarStatusIconShowingState_Params
{
	bool                                               ReturnValue;                                               // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function KillstreakUINew.KSTopBarStatusIconInterface.GetTopBarStatusIconTexture
struct UKSTopBarStatusIconInterface_GetTopBarStatusIconTexture_Params
{
	class UTexture2D*                                  ReturnValue;                                               // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function KillstreakUINew.KSTopBarStatusIconInterface.BindEventToTopBarStatusIconShowingChanged
struct UKSTopBarStatusIconInterface_BindEventToTopBarStatusIconShowingChanged_Params
{
	struct FScriptDelegate                             Callback;                                                  // 0x0000(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
};

// Function KillstreakUINew.KSTouchHudWidget.UpdateQuickMeleeRadius
struct UKSTouchHudWidget_UpdateQuickMeleeRadius_Params
{
};

// Function KillstreakUINew.KSTouchHudWidget.UpdatePrimaryWeaponButton
struct UKSTouchHudWidget_UpdatePrimaryWeaponButton_Params
{
};

// Function KillstreakUINew.KSTouchHudWidget.SetWidgetIconTexture
struct UKSTouchHudWidget_SetWidgetIconTexture_Params
{
	class UWidget*                                     Widget;                                                    // 0x0000(0x0008)  (ConstParm, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FSoftObjectPath                             Texture;                                                   // 0x0008(0x0018)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function KillstreakUINew.KSTreeView.UninitializeWidget
struct UKSTreeView_UninitializeWidget_Params
{
};

// Function KillstreakUINew.KSTreeView.NavigateSelectItem
struct UKSTreeView_NavigateSelectItem_Params
{
	class UObject*                                     Item;                                                      // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function KillstreakUINew.KSTreeView.IsItemExpanded
struct UKSTreeView_IsItemExpanded_Params
{
	class UObject*                                     Item;                                                      // 0x0000(0x0008)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               ReturnValue;                                               // 0x0008(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function KillstreakUINew.KSTreeView.InitializeWidget
struct UKSTreeView_InitializeWidget_Params
{
};

// Function KillstreakUINew.KSTreeView.GetNumItemsInLayout
struct UKSTreeView_GetNumItemsInLayout_Params
{
	int                                                ReturnValue;                                               // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function KillstreakUINew.KSTreeView.BP_GetEntryWidgetFromItem
struct UKSTreeView_BP_GetEntryWidgetFromItem_Params
{
	class UObject*                                     Item;                                                      // 0x0000(0x0008)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UUserWidget*                                 OutWidget;                                                 // 0x0008(0x0008)  (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               ReturnValue;                                               // 0x0010(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function KillstreakUINew.KSUIBlueprintFunctionLibrary.UIX_ReportPlayer
struct UKSUIBlueprintFunctionLibrary_UIX_ReportPlayer_Params
{
	class UObject*                                     WorldContextObject;                                        // 0x0000(0x0008)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FReportPlayerParams                         Params;                                                    // 0x0008(0x0050)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	bool                                               ReturnValue;                                               // 0x0058(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function KillstreakUINew.KSUIBlueprintFunctionLibrary.SetupReportPlayerFromScoreboardStats
struct UKSUIBlueprintFunctionLibrary_SetupReportPlayerFromScoreboardStats_Params
{
	int64_t                                            PlayerId;                                                  // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FScoreboardStats                            State;                                                     // 0x0008(0x0050)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	class APUMG_HUD*                                   InHud;                                                     // 0x0058(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FReportPlayerParams                         ReturnValue;                                               // 0x0060(0x0050)  (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
};

// Function KillstreakUINew.KSUIBlueprintFunctionLibrary.SetupReportPlayerFromGameState
struct UKSUIBlueprintFunctionLibrary_SetupReportPlayerFromGameState_Params
{
	int64_t                                            PlayerId;                                                  // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class AKSGameState*                                State;                                                     // 0x0008(0x0008)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FReportPlayerParams                         ReturnValue;                                               // 0x0010(0x0050)  (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
};

// Function KillstreakUINew.KSUIBlueprintFunctionLibrary.SetHiddenCursorMode
struct UKSUIBlueprintFunctionLibrary_SetHiddenCursorMode_Params
{
	class UObject*                                     WorldContextObject;                                        // 0x0000(0x0008)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class APlayerController*                           PlayerController;                                          // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               ShouldHide;                                                // 0x0010(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function KillstreakUINew.KSUIBlueprintFunctionLibrary.ResetHiddenCursorMode
struct UKSUIBlueprintFunctionLibrary_ResetHiddenCursorMode_Params
{
	class UObject*                                     WorldContextObject;                                        // 0x0000(0x0008)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class APlayerController*                           PlayerController;                                          // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function KillstreakUINew.KSUIBlueprintFunctionLibrary.RegisterGridNavigation
struct UKSUIBlueprintFunctionLibrary_RegisterGridNavigation_Params
{
	class UPUMG_Widget*                                ParentWidget;                                              // 0x0000(0x0008)  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                FocusGroup;                                                // 0x0008(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<class UWidget*>                             NavWidgets;                                                // 0x0010(0x0010)  (ConstParm, Parm, ZeroConstructor, ContainsInstancedReference, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                GridWidth;                                                 // 0x0020(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               NavToLastElementOnDown;                                    // 0x0024(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function KillstreakUINew.KSUIBlueprintFunctionLibrary.MapCountToActivityTier
struct UKSUIBlueprintFunctionLibrary_MapCountToActivityTier_Params
{
	float                                              InCount;                                                   // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FActivityTier                               ActivityTier;                                              // 0x0008(0x0040)  (Parm, NativeAccessSpecifierPublic)
	float                                              CountWithinTier;                                           // 0x0048(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              PercentWithinTier;                                         // 0x004C(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               ReturnValue;                                               // 0x0050(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function KillstreakUINew.KSUIBlueprintFunctionLibrary.Key_GetShortDisplayName
struct UKSUIBlueprintFunctionLibrary_Key_GetShortDisplayName_Params
{
	struct FKey                                        Key;                                                       // 0x0000(0x0018)  (ConstParm, Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FText                                       ReturnValue;                                               // 0x0018(0x0018)  (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
};

// Function KillstreakUINew.KSUIBlueprintFunctionLibrary.IsPlayerRelevant
struct UKSUIBlueprintFunctionLibrary_IsPlayerRelevant_Params
{
	struct FJobSelectionEntry                          Entry;                                                     // 0x0000(0x0028)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	class AKSPlayerState*                              InPlayerState;                                             // 0x0028(0x0008)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bLockedInOnly;                                             // 0x0030(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               ReturnValue;                                               // 0x0031(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function KillstreakUINew.KSUIBlueprintFunctionLibrary.IsNewJob
struct UKSUIBlueprintFunctionLibrary_IsNewJob_Params
{
	int                                                RogueID;                                                   // 0x0000(0x0004)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               ReturnValue;                                               // 0x0004(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function KillstreakUINew.KSUIBlueprintFunctionLibrary.IsInsideMargins
struct UKSUIBlueprintFunctionLibrary_IsInsideMargins_Params
{
	class UObject*                                     WorldContextObject;                                        // 0x0000(0x0008)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector2D                                   Translation;                                               // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector2D                                   Margins;                                                   // 0x0010(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               ReturnValue;                                               // 0x0018(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function KillstreakUINew.KSUIBlueprintFunctionLibrary.IsInCenteredScreenRect
struct UKSUIBlueprintFunctionLibrary_IsInCenteredScreenRect_Params
{
	float                                              PositionX;                                                 // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              PositionY;                                                 // 0x0004(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              MarginX;                                                   // 0x0008(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              MarginY;                                                   // 0x000C(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               ReturnValue;                                               // 0x0010(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function KillstreakUINew.KSUIBlueprintFunctionLibrary.IsExperimentActive
struct UKSUIBlueprintFunctionLibrary_IsExperimentActive_Params
{
	KillstreakUINew_EExperimentalFeatureName           Feature;                                                   // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               ReturnValue;                                               // 0x0001(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function KillstreakUINew.KSUIBlueprintFunctionLibrary.GetTextByPlatform
struct UKSUIBlueprintFunctionLibrary_GetTextByPlatform_Params
{
	struct FText                                       DefaultText;                                               // 0x0000(0x0018)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	TMap<struct FString, struct FText>                 PlatformTexts;                                             // 0x0018(0x0050)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	struct FText                                       ReturnValue;                                               // 0x0068(0x0018)  (ConstParm, Parm, OutParm, ReturnParm, ReferenceParm, NativeAccessSpecifierPublic)
};

// Function KillstreakUINew.KSUIBlueprintFunctionLibrary.GetStoreItemHelper
struct UKSUIBlueprintFunctionLibrary_GetStoreItemHelper_Params
{
	class UObject*                                     WorldContextObject;                                        // 0x0000(0x0008)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UKSStoreItemHelper*                          ReturnValue;                                               // 0x0008(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function KillstreakUINew.KSUIBlueprintFunctionLibrary.GetSelectionStateForPlayer
struct UKSUIBlueprintFunctionLibrary_GetSelectionStateForPlayer_Params
{
	struct FJobSelectionEntry                          Entry;                                                     // 0x0000(0x0028)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	class AKSPlayerState*                              InPlayerState;                                             // 0x0028(0x0008)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	Killstreak_EJobSelectionState                      ReturnValue;                                               // 0x0030(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function KillstreakUINew.KSUIBlueprintFunctionLibrary.GetQueueName
struct UKSUIBlueprintFunctionLibrary_GetQueueName_Params
{
	struct FText                                       DisplayNameText;                                           // 0x0000(0x0018)  (Parm, OutParm, NativeAccessSpecifierPublic)
	bool                                               ReturnValue;                                               // 0x0018(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function KillstreakUINew.KSUIBlueprintFunctionLibrary.GetQueueDisplayName
struct UKSUIBlueprintFunctionLibrary_GetQueueDisplayName_Params
{
	struct FText                                       DisplayNameText;                                           // 0x0000(0x0018)  (Parm, OutParm, NativeAccessSpecifierPublic)
	class UObject*                                     WorldContextObject;                                        // 0x0018(0x0008)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               ReturnValue;                                               // 0x0020(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function KillstreakUINew.KSUIBlueprintFunctionLibrary.GetPlayerSelectInfo
struct UKSUIBlueprintFunctionLibrary_GetPlayerSelectInfo_Params
{
	struct FJobSelectionEntry                          Entry;                                                     // 0x0000(0x0028)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	class AKSPlayerState*                              InPlayerState;                                             // 0x0028(0x0008)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FPlayerJobSelectInfo                        PlayerSelectInfo;                                          // 0x0030(0x0020)  (Parm, OutParm, NoDestructor, NativeAccessSpecifierPublic)
	bool                                               ReturnValue;                                               // 0x0050(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function KillstreakUINew.KSUIBlueprintFunctionLibrary.GetPlayerInfoById
struct UKSUIBlueprintFunctionLibrary_GetPlayerInfoById_Params
{
	class APUMG_HUD*                                   HUD;                                                       // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int64_t                                            PlayerId;                                                  // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UPUMG_PlayerInfo*                            ReturnValue;                                               // 0x0010(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function KillstreakUINew.KSUIBlueprintFunctionLibrary.GetPingIconByType
struct UKSUIBlueprintFunctionLibrary_GetPingIconByType_Params
{
	class UDataTable*                                  ContextualPingTypesDT;                                     // 0x0000(0x0008)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	Killstreak_EPingType                               PingType;                                                  // 0x0008(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               ReturnValue;                                               // 0x0038(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function KillstreakUINew.KSUIBlueprintFunctionLibrary.GetPingIconByMessage
struct UKSUIBlueprintFunctionLibrary_GetPingIconByMessage_Params
{
	class UDataTable*                                  ContextualPingMessagesDT;                                  // 0x0000(0x0008)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	Killstreak_EPingMessage                            PingMessage;                                               // 0x0008(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               ReturnValue;                                               // 0x0038(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function KillstreakUINew.KSUIBlueprintFunctionLibrary.GetPingColorByType
struct UKSUIBlueprintFunctionLibrary_GetPingColorByType_Params
{
	class UDataTable*                                  ContextualPingTypesDT;                                     // 0x0000(0x0008)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	Killstreak_EPingType                               PingType;                                                  // 0x0008(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FLinearColor                                PingColor;                                                 // 0x000C(0x0010)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               ReturnValue;                                               // 0x001C(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function KillstreakUINew.KSUIBlueprintFunctionLibrary.GetNewJobId
struct UKSUIBlueprintFunctionLibrary_GetNewJobId_Params
{
	int                                                ReturnValue;                                               // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function KillstreakUINew.KSUIBlueprintFunctionLibrary.GetLocalPlayerInfo
struct UKSUIBlueprintFunctionLibrary_GetLocalPlayerInfo_Params
{
	class APUMG_HUD*                                   HUD;                                                       // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UPUMG_PlayerInfo*                            ReturnValue;                                               // 0x0008(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function KillstreakUINew.KSUIBlueprintFunctionLibrary.GetKeyForBinding
struct UKSUIBlueprintFunctionLibrary_GetKeyForBinding_Params
{
	class APlayerController*                           PlayerController;                                          // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FName                                       Binding;                                                   // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               SecondaryKey;                                              // 0x0010(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               FallbackToDefault;                                         // 0x0011(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               IsGamepadDoubleTap;                                        // 0x0012(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FKey                                        ReturnValue;                                               // 0x0018(0x0018)  (Parm, OutParm, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function KillstreakUINew.KSUIBlueprintFunctionLibrary.GetItemById
struct UKSUIBlueprintFunctionLibrary_GetItemById_Params
{
	int                                                ItemId;                                                    // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UKSItem*                                     ReturnValue;                                               // 0x0008(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function KillstreakUINew.KSUIBlueprintFunctionLibrary.GetHeroPrimaryWeapon
struct UKSUIBlueprintFunctionLibrary_GetHeroPrimaryWeapon_Params
{
	class UKSWeaponAsset*                              ReturnValue;                                               // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function KillstreakUINew.KSUIBlueprintFunctionLibrary.GetDigitsFromInt
struct UKSUIBlueprintFunctionLibrary_GetDigitsFromInt_Params
{
	int                                                Value;                                                     // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<int>                                        ReturnValue;                                               // 0x0008(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function KillstreakUINew.KSUIBlueprintFunctionLibrary.GetCurrentRogueMasteryLevel
struct UKSUIBlueprintFunctionLibrary_GetCurrentRogueMasteryLevel_Params
{
	class UKSActivityInstance*                         ActivityInstance;                                          // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                MasteryLevel;                                              // 0x0008(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                CurrentXPProgress;                                         // 0x000C(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                XPRequiredForLevel;                                        // 0x0010(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function KillstreakUINew.KSUIBlueprintFunctionLibrary.GetContextBar
struct UKSUIBlueprintFunctionLibrary_GetContextBar_Params
{
	class APUMG_HUD*                                   HUD;                                                       // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UKSContextBarWidget*                         ReturnValue;                                               // 0x0008(0x0008)  (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function KillstreakUINew.KSUIBlueprintFunctionLibrary.FindWeaponForAttachment
struct UKSUIBlueprintFunctionLibrary_FindWeaponForAttachment_Params
{
	class UObject*                                     WorldContextObject;                                        // 0x0000(0x0008)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UKSWeaponAttachment*                         WeaponAttachment;                                          // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UKSWeaponAsset*                              ReturnValue;                                               // 0x0010(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function KillstreakUINew.KSUIBlueprintFunctionLibrary.FindContextualPingTypesRowByType
struct UKSUIBlueprintFunctionLibrary_FindContextualPingTypesRowByType_Params
{
	class UDataTable*                                  ContextualPingTypesDT;                                     // 0x0000(0x0008)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	Killstreak_EPingType                               PingType;                                                  // 0x0008(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FContextualPingTypesRow                     ContextualPingTypesRow;                                    // 0x0010(0x0048)  (Parm, OutParm, NativeAccessSpecifierPublic)
	bool                                               ReturnValue;                                               // 0x0058(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function KillstreakUINew.KSUIBlueprintFunctionLibrary.FindContextualPingMessagesRowByMessage
struct UKSUIBlueprintFunctionLibrary_FindContextualPingMessagesRowByMessage_Params
{
	class UDataTable*                                  ContextualPingMessagesDT;                                  // 0x0000(0x0008)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	Killstreak_EPingMessage                            PingMessage;                                               // 0x0008(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FContextualPingMessagesRow                  ContextualPingMessagesRow;                                 // 0x0010(0x0038)  (Parm, OutParm, NativeAccessSpecifierPublic)
	bool                                               ReturnValue;                                               // 0x0048(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function KillstreakUINew.KSUIBlueprintFunctionLibrary.DistanceToClosestScreenEdge
struct UKSUIBlueprintFunctionLibrary_DistanceToClosestScreenEdge_Params
{
	class UObject*                                     WorldContextObject;                                        // 0x0000(0x0008)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector2D                                   Location;                                                  // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              OutDistX;                                                  // 0x0010(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              OutDistY;                                                  // 0x0014(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               ReturnValue;                                               // 0x0018(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function KillstreakUINew.KSUIBlueprintFunctionLibrary.DetermineEntryLocalSelectionState
struct UKSUIBlueprintFunctionLibrary_DetermineEntryLocalSelectionState_Params
{
	struct FJobSelectionEntry                          Entry;                                                     // 0x0000(0x0028)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	Killstreak_EJobSelectionState                      ReturnValue;                                               // 0x0028(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function KillstreakUINew.KSUIBlueprintFunctionLibrary.CreateSettingsWidgetWithConfig
struct UKSUIBlueprintFunctionLibrary_CreateSettingsWidgetWithConfig_Params
{
	class APUMG_HUD*                                   HUD;                                                       // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FKSSettingsWidgetConfig                     SettingsWidgetConfig;                                      // 0x0008(0x0010)  (Parm, NoDestructor, NativeAccessSpecifierPublic)
	class UKSSettingsWidget*                           ReturnValue;                                               // 0x0018(0x0008)  (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function KillstreakUINew.KSUIBlueprintFunctionLibrary.CreateSettingsWidget
struct UKSUIBlueprintFunctionLibrary_CreateSettingsWidget_Params
{
	class APUMG_HUD*                                   HUD;                                                       // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UClass*                                      SettingsWidgetClass;                                       // 0x0008(0x0008)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UKSSettingsWidget*                           ReturnValue;                                               // 0x0010(0x0008)  (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function KillstreakUINew.KSUIBlueprintFunctionLibrary.CreateSettingsPreview
struct UKSUIBlueprintFunctionLibrary_CreateSettingsPreview_Params
{
	class APUMG_HUD*                                   HUD;                                                       // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UClass*                                      SettingsPreviewClass;                                      // 0x0008(0x0008)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UKSSettingsPreview*                          ReturnValue;                                               // 0x0010(0x0008)  (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function KillstreakUINew.KSUIBlueprintFunctionLibrary.CompareStrings
struct UKSUIBlueprintFunctionLibrary_CompareStrings_Params
{
	struct FString                                     LeftString;                                                // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     RightString;                                               // 0x0010(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                ReturnValue;                                               // 0x0020(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function KillstreakUINew.KSUIBlueprintFunctionLibrary.ClearKeyboardFocus
struct UKSUIBlueprintFunctionLibrary_ClearKeyboardFocus_Params
{
};

// Function KillstreakUINew.KSUIBlueprintFunctionLibrary.CanReportServer
struct UKSUIBlueprintFunctionLibrary_CanReportServer_Params
{
	class UObject*                                     WorldContextObject;                                        // 0x0000(0x0008)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               ReturnValue;                                               // 0x0008(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function KillstreakUINew.KSUIBlueprintFunctionLibrary.CanPlayerSelectEntry
struct UKSUIBlueprintFunctionLibrary_CanPlayerSelectEntry_Params
{
	struct FJobSelectionEntry                          Entry;                                                     // 0x0000(0x0028)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	class AKSPlayerState*                              InPlayerState;                                             // 0x0028(0x0008)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               ReturnValue;                                               // 0x0030(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function KillstreakUINew.CommonVendorHelper.GetVendorIDFromEnum
struct UCommonVendorHelper_GetVendorIDFromEnum_Params
{
	KillstreakUINew_EKSVendorTypes                     VendorType;                                                // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                ReturnValue;                                               // 0x0004(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function KillstreakUINew.KSViewedItemLabel.UpdateLabelPosition
struct UKSViewedItemLabel_UpdateLabelPosition_Params
{
};

// Function KillstreakUINew.KSViewedItemLabel.UnbindToViewportResizeEvent
struct UKSViewedItemLabel_UnbindToViewportResizeEvent_Params
{
};

// Function KillstreakUINew.KSViewedItemLabel.TriggerLabelPositionUpdate
struct UKSViewedItemLabel_TriggerLabelPositionUpdate_Params
{
};

// Function KillstreakUINew.KSViewedItemLabel.OnLabelShow
struct UKSViewedItemLabel_OnLabelShow_Params
{
};

// Function KillstreakUINew.KSViewedItemLabel.OnLabelHide
struct UKSViewedItemLabel_OnLabelHide_Params
{
};

// Function KillstreakUINew.KSViewedItemLabel.GetViewLimitImage
struct UKSViewedItemLabel_GetViewLimitImage_Params
{
	class UImage*                                      ReturnValue;                                               // 0x0000(0x0008)  (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function KillstreakUINew.KSViewedItemLabel.GetTrackedActor
struct UKSViewedItemLabel_GetTrackedActor_Params
{
	class AActor*                                      ReturnValue;                                               // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function KillstreakUINew.KSViewedItemLabel.GetOutermostCanvasPanel
struct UKSViewedItemLabel_GetOutermostCanvasPanel_Params
{
	class UCanvasPanel*                                ReturnValue;                                               // 0x0000(0x0008)  (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function KillstreakUINew.KSViewedItemLabel.GetOnScreenPositionForLabel
struct UKSViewedItemLabel_GetOnScreenPositionForLabel_Params
{
	class APlayerController*                           Player;                                                    // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class AActor*                                      InActor;                                                   // 0x0008(0x0008)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FBox2D                                      OutBounds;                                                 // 0x0010(0x0014)  (Parm, OutParm, ZeroConstructor, NoDestructor, NativeAccessSpecifierPublic)
	bool                                               ReturnValue;                                               // 0x0024(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function KillstreakUINew.KSViewedItemLabel.GetLabelCanvasPanel
struct UKSViewedItemLabel_GetLabelCanvasPanel_Params
{
	class UCanvasPanel*                                ReturnValue;                                               // 0x0000(0x0008)  (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function KillstreakUINew.KSViewedItemLabel.BindToViewportResizeEvent
struct UKSViewedItemLabel_BindToViewportResizeEvent_Params
{
};

// Function KillstreakUINew.KSViewedPawnDamageDisplay.PrimeDamageNumbersWidgetPool
struct UKSViewedPawnDamageDisplay_PrimeDamageNumbersWidgetPool_Params
{
};

// Function KillstreakUINew.KSViewedPawnDamageDisplay.HandlePhaseChange
struct UKSViewedPawnDamageDisplay_HandlePhaseChange_Params
{
	struct FMatchPhase                                 NewPhase;                                                  // 0x0000(0x000C)  (Parm, NoDestructor, NativeAccessSpecifierPublic)
	struct FMatchPhase                                 PreviousPhase;                                             // 0x000C(0x000C)  (Parm, NoDestructor, NativeAccessSpecifierPublic)
};

// Function KillstreakUINew.KSViewedPawnDamageDisplay.HandleInstigateDamageNotify
struct UKSViewedPawnDamageDisplay_HandleInstigateDamageNotify_Params
{
	struct FCombatEventInfo                            DamageInfo;                                                // 0x0000(0x0060)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
};

// Function KillstreakUINew.KSViewedPawnDamageDisplay.HandleAnimationCompleted
struct UKSViewedPawnDamageDisplay_HandleAnimationCompleted_Params
{
	class UDamageNumberDisplayWidget*                  DamageNumberWidget;                                        // 0x0000(0x0008)  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function KillstreakUINew.KSViewedPawnDamageDisplay.GetDamageNumberWidgetInstance
struct UKSViewedPawnDamageDisplay_GetDamageNumberWidgetInstance_Params
{
	class UDamageNumberDisplayWidget*                  ReturnValue;                                               // 0x0000(0x0008)  (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function KillstreakUINew.KSViewedPawnDamageDisplay.ClearDamageNumbersOnScreen
struct UKSViewedPawnDamageDisplay_ClearDamageNumbersOnScreen_Params
{
};

// Function KillstreakUINew.DamageNumberDisplayWidget.SetDisplayInformation
struct UDamageNumberDisplayWidget_SetDisplayInformation_Params
{
	class AActor*                                      InTargetActor;                                             // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               InTetherToEventLocation;                                   // 0x0008(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              InDamageAmount;                                            // 0x000C(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               InIsSpecialDamage;                                         // 0x0010(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FSpecialDamageColors                        InDamageColors;                                            // 0x0014(0x0030)  (Parm, NoDestructor, NativeAccessSpecifierPublic)
	bool                                               InIsLethal;                                                // 0x0044(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               InIsHeadshot;                                              // 0x0045(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              InDelayWindow;                                             // 0x0048(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              InStackWait;                                               // 0x004C(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               InArmorHit;                                                // 0x0050(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               InDamageReduced;                                           // 0x0051(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               InDamageResisted;                                          // 0x0052(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               InDamageShielded;                                          // 0x0053(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function KillstreakUINew.DamageNumberDisplayWidget.SetContentVisibility
struct UDamageNumberDisplayWidget_SetContentVisibility_Params
{
	bool                                               IsVisible;                                                 // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function KillstreakUINew.DamageNumberDisplayWidget.PlayNumberAnimation
struct UDamageNumberDisplayWidget_PlayNumberAnimation_Params
{
};

// Function KillstreakUINew.DamageNumberDisplayWidget.PlayerIsBlinded
struct UDamageNumberDisplayWidget_PlayerIsBlinded_Params
{
	bool                                               ReturnValue;                                               // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function KillstreakUINew.DamageNumberDisplayWidget.OnDisplaySpecialDamageInfo
struct UDamageNumberDisplayWidget_OnDisplaySpecialDamageInfo_Params
{
	float                                              CurrentDamageAmount;                                       // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FSpecialDamageColors                        DamageColors;                                              // 0x0004(0x0030)  (Parm, NoDestructor, NativeAccessSpecifierPublic)
	bool                                               bChangePosition;                                           // 0x0034(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function KillstreakUINew.DamageNumberDisplayWidget.OnDisplayInformationReset
struct UDamageNumberDisplayWidget_OnDisplayInformationReset_Params
{
};

// Function KillstreakUINew.DamageNumberDisplayWidget.IsDisplayStacking
struct UDamageNumberDisplayWidget_IsDisplayStacking_Params
{
	bool                                               ReturnValue;                                               // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function KillstreakUINew.KSViewedPawnInventoryWidget.OnUpdatedPawnInventorySlot
struct UKSViewedPawnInventoryWidget_OnUpdatedPawnInventorySlot_Params
{
	struct FPlayerInventorySlot                        InventorySlot;                                             // 0x0000(0x0018)  (Parm, NoDestructor, NativeAccessSpecifierPublic)
};

// Function KillstreakUINew.KSViewedPawnInventoryWidget.OnRemovedPawnInventorySlot
struct UKSViewedPawnInventoryWidget_OnRemovedPawnInventorySlot_Params
{
	struct FPlayerInventorySlot                        InventorySlot;                                             // 0x0000(0x0018)  (Parm, NoDestructor, NativeAccessSpecifierPublic)
};

// Function KillstreakUINew.KSViewedPawnInventoryWidget.OnActivePawnInventorySlot
struct UKSViewedPawnInventoryWidget_OnActivePawnInventorySlot_Params
{
	struct FPlayerInventorySlot                        InventorySlot;                                             // 0x0000(0x0018)  (Parm, NoDestructor, NativeAccessSpecifierPublic)
};

// Function KillstreakUINew.KSViewedPawnInventoryWidget.GetSlotIndex
struct UKSViewedPawnInventoryWidget_GetSlotIndex_Params
{
	struct FGameplayTag                                EquipPoint;                                                // 0x0000(0x0008)  (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                ReturnValue;                                               // 0x0008(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function KillstreakUINew.KSViewedPawnModsWidget.OnViewedPawnModAdded
struct UKSViewedPawnModsWidget_OnViewedPawnModAdded_Params
{
	class UKSPlayerMod*                                Mod;                                                       // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UKSPlayerModInstance*                        ModInstance;                                               // 0x0008(0x0008)  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function KillstreakUINew.KSViewedPawnModsWidget.GetOverlay
struct UKSViewedPawnModsWidget_GetOverlay_Params
{
	class UOverlay*                                    ReturnValue;                                               // 0x0000(0x0008)  (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function KillstreakUINew.KSViewRedirector_LocalSetting.DoesLocalSettingApply
struct UKSViewRedirector_LocalSetting_DoesLocalSettingApply_Params
{
	class APUMG_HUD*                                   HUD;                                                       // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               ReturnValue;                                               // 0x0008(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function KillstreakUINew.KSVoiceActivityWidget.OnVoiceParticipantUpdated
struct UKSVoiceActivityWidget_OnVoiceParticipantUpdated_Params
{
	struct FString                                     AccountId;                                                 // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bIsTalking;                                                // 0x0010(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bIsMuted;                                                  // 0x0011(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function KillstreakUINew.KSVoiceActivityWidget.OnVoiceParticipantRemoved
struct UKSVoiceActivityWidget_OnVoiceParticipantRemoved_Params
{
	struct FString                                     AccountId;                                                 // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function KillstreakUINew.KSVoiceActivityWidget.OnVoiceParticipantAdded
struct UKSVoiceActivityWidget_OnVoiceParticipantAdded_Params
{
	struct FString                                     AccountId;                                                 // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function KillstreakUINew.KSVoiceActivityWidget.GetVoiceIdByPlayerId
struct UKSVoiceActivityWidget_GetVoiceIdByPlayerId_Params
{
	int64_t                                            PlayerId;                                                  // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     ReturnValue;                                               // 0x0008(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function KillstreakUINew.KSVoiceActivityWidget.GetPlayerStateByVoiceId
struct UKSVoiceActivityWidget_GetPlayerStateByVoiceId_Params
{
	struct FString                                     VoiceId;                                                   // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class AKSPlayerState*                              ReturnValue;                                               // 0x0010(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function KillstreakUINew.KSVoiceActivityWidget.GetPlayerIdByVoiceId
struct UKSVoiceActivityWidget_GetPlayerIdByVoiceId_Params
{
	struct FString                                     VoiceId;                                                   // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int64_t                                            ReturnValue;                                               // 0x0010(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function KillstreakUINew.KSVoucherAcquisition.RedeemVouchers
struct UKSVoucherAcquisition_RedeemVouchers_Params
{
	TArray<class UPUMG_StoreItem*>                     VoucherItems;                                              // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               ReturnValue;                                               // 0x0010(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function KillstreakUINew.KSVoucherAcquisition.GetVoucherAcquisitions
struct UKSVoucherAcquisition_GetVoucherAcquisitions_Params
{
	TArray<class UPUMG_StoreItem*>                     VoucherItems;                                              // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<class UPUMG_StoreItem*>                     PurchaseItems;                                             // 0x0010(0x0010)  (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function KillstreakUINew.KSVoucherAcquisition.DisplayVoucherRedemptionFailed
struct UKSVoucherAcquisition_DisplayVoucherRedemptionFailed_Params
{
};

// Function KillstreakUINew.KSWeaponCategoryButton.OnWeaponCategorySelected
struct UKSWeaponCategoryButton_OnWeaponCategorySelected_Params
{
};

// Function KillstreakUINew.KSWeaponCategoryButton.GetWeaponCategory
struct UKSWeaponCategoryButton_GetWeaponCategory_Params
{
	class UKSWeaponCategoryAsset*                      ReturnValue;                                               // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function KillstreakUINew.KSWeaponCategoryButton.DisplayWeaponCategory
struct UKSWeaponCategoryButton_DisplayWeaponCategory_Params
{
	class UKSWeaponCategoryAsset*                      DisplayedCategory;                                         // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function KillstreakUINew.KSWeaponCategoryButton.DisplayMasteryProgress
struct UKSWeaponCategoryButton_DisplayMasteryProgress_Params
{
	int                                                ProgressCount;                                             // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                ProgressTotal;                                             // 0x0004(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function KillstreakUINew.KSWeaponCategoryButton.BroadcastWeaponCategoryPreview
struct UKSWeaponCategoryButton_BroadcastWeaponCategoryPreview_Params
{
};

// Function KillstreakUINew.KSWeaponCategoryScreen.RefreshWidgetNavigation
struct UKSWeaponCategoryScreen_RefreshWidgetNavigation_Params
{
};

// Function KillstreakUINew.KSWeaponCategoryScreen.PopulateFromViewRouteData
struct UKSWeaponCategoryScreen_PopulateFromViewRouteData_Params
{
};

// Function KillstreakUINew.KSWeaponCategoryScreen.OnWeaponPopulationFinished
struct UKSWeaponCategoryScreen_OnWeaponPopulationFinished_Params
{
};

// Function KillstreakUINew.KSWeaponCategoryScreen.HandleWeaponSelected
struct UKSWeaponCategoryScreen_HandleWeaponSelected_Params
{
	class UKSWeaponAsset*                              SelectedWeapon;                                            // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function KillstreakUINew.KSWeaponCategoryScreen.HandleWeaponPreview
struct UKSWeaponCategoryScreen_HandleWeaponPreview_Params
{
	class UKSWeaponAsset*                              PreviewWeapon;                                             // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function KillstreakUINew.KSWeaponCategoryScreen.HandleViewStateChanged
struct UKSWeaponCategoryScreen_HandleViewStateChanged_Params
{
	struct FName                                       CurrentRoute;                                              // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FName                                       PreviousRoute;                                             // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	PlatformUMG_EViewManagerLayer                      Layer;                                                     // 0x0010(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function KillstreakUINew.KSWeaponCategoryScreen.HandleCustomizeAction
struct UKSWeaponCategoryScreen_HandleCustomizeAction_Params
{
};

// Function KillstreakUINew.KSWeaponCategoryScreen.HandleBackContextAction
struct UKSWeaponCategoryScreen_HandleBackContextAction_Params
{
};

// Function KillstreakUINew.KSWeaponCategoryScreen.GetWeaponProgressButtons
struct UKSWeaponCategoryScreen_GetWeaponProgressButtons_Params
{
	TArray<class UKSWeaponProgressButton*>             ReturnValue;                                               // 0x0000(0x0010)  (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, ContainsInstancedReference, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function KillstreakUINew.KSWeaponCategoryScreen.GetPopulatedWeaponCount
struct UKSWeaponCategoryScreen_GetPopulatedWeaponCount_Params
{
	int                                                ReturnValue;                                               // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function KillstreakUINew.KSWeaponCategoryScreen.FX_OnViewMasteryRewards
struct UKSWeaponCategoryScreen_FX_OnViewMasteryRewards_Params
{
};

// Function KillstreakUINew.KSWeaponCategoryScreen.FX_OnCustomizeContextAction
struct UKSWeaponCategoryScreen_FX_OnCustomizeContextAction_Params
{
};

// Function KillstreakUINew.KSWeaponCategoryScreen.DisplayWeaponCategory
struct UKSWeaponCategoryScreen_DisplayWeaponCategory_Params
{
	class UKSWeaponCategoryAsset*                      WeaponCategory;                                            // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function KillstreakUINew.KSWeaponCategoryScreen.CreateAndAddWeaponEntry
struct UKSWeaponCategoryScreen_CreateAndAddWeaponEntry_Params
{
	class UKSWeaponProgressButton*                     ReturnValue;                                               // 0x0000(0x0008)  (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function KillstreakUINew.KSWeaponCategoryScreen.ClearWeaponPreview
struct UKSWeaponCategoryScreen_ClearWeaponPreview_Params
{
};

// Function KillstreakUINew.KSWeaponCategoryScreen.ClearWeaponEntries
struct UKSWeaponCategoryScreen_ClearWeaponEntries_Params
{
};

// Function KillstreakUINew.KSWeaponCategoryScreen.AddWrapCustomizationViewRoute
struct UKSWeaponCategoryScreen_AddWrapCustomizationViewRoute_Params
{
	class UKSWeaponAsset*                              WeaponAsset;                                               // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function KillstreakUINew.KSWeaponCategoryScreen.AddMasteryRewardsViewRoute
struct UKSWeaponCategoryScreen_AddMasteryRewardsViewRoute_Params
{
};

// Function KillstreakUINew.KSWeaponComponentWidget.SetOwningWeaponComponent
struct UKSWeaponComponentWidget_SetOwningWeaponComponent_Params
{
	class UKSWeaponComponent*                          InWeaponComponent;                                         // 0x0000(0x0008)  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function KillstreakUINew.KSWeaponComponentWidget.PreClearWeaponComponent
struct UKSWeaponComponentWidget_PreClearWeaponComponent_Params
{
};

// Function KillstreakUINew.KSWeaponComponentWidget.PostSetWeaponComponent
struct UKSWeaponComponentWidget_PostSetWeaponComponent_Params
{
};

// Function KillstreakUINew.KSWeaponComponentWidget.OnEndActiveWeaponComponent
struct UKSWeaponComponentWidget_OnEndActiveWeaponComponent_Params
{
};

// Function KillstreakUINew.KSWeaponComponentWidget.OnBecomeActiveWeaponComponent
struct UKSWeaponComponentWidget_OnBecomeActiveWeaponComponent_Params
{
};

// Function KillstreakUINew.KSWeaponComponentWidget.IsWeaponComponentActive
struct UKSWeaponComponentWidget_IsWeaponComponentActive_Params
{
	bool                                               ReturnValue;                                               // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function KillstreakUINew.KSWeaponComponentWidget.GetWeaponComponent
struct UKSWeaponComponentWidget_GetWeaponComponent_Params
{
	class UKSWeaponComponent*                          ReturnValue;                                               // 0x0000(0x0008)  (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function KillstreakUINew.KSWeaponComponentAmmoWidget.StopReloading
struct UKSWeaponComponentAmmoWidget_StopReloading_Params
{
};

// Function KillstreakUINew.KSWeaponComponentAmmoWidget.StartReloading
struct UKSWeaponComponentAmmoWidget_StartReloading_Params
{
};

// Function KillstreakUINew.KSWeaponComponentAmmoWidget.OnAmmoChanged
struct UKSWeaponComponentAmmoWidget_OnAmmoChanged_Params
{
	int                                                OldInClip;                                                 // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                OldClipSize;                                               // 0x0004(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                OldReserve;                                                // 0x0008(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                NewInClip;                                                 // 0x000C(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                NewClipSize;                                               // 0x0010(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                NewReserve;                                                // 0x0014(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function KillstreakUINew.KSWeaponComponentAmmoWidget.IsReloading
struct UKSWeaponComponentAmmoWidget_IsReloading_Params
{
	bool                                               ReturnValue;                                               // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function KillstreakUINew.KSWeaponComponentAmmoWidget.GetClipSize
struct UKSWeaponComponentAmmoWidget_GetClipSize_Params
{
	int                                                ReturnValue;                                               // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function KillstreakUINew.KSWeaponComponentAmmoWidget.GetAmmoInReserve
struct UKSWeaponComponentAmmoWidget_GetAmmoInReserve_Params
{
	int                                                ReturnValue;                                               // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function KillstreakUINew.KSWeaponComponentAmmoWidget.GetAmmoInClip
struct UKSWeaponComponentAmmoWidget_GetAmmoInClip_Params
{
	int                                                ReturnValue;                                               // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function KillstreakUINew.KSWeaponDetailScreen.PopulateFromWeaponAsset
struct UKSWeaponDetailScreen_PopulateFromWeaponAsset_Params
{
	class UKSWeaponAsset*                              WeaponAsset;                                               // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               FromSideNav;                                               // 0x0008(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function KillstreakUINew.KSWeaponDetailScreen.PopulateFromViewRouteData
struct UKSWeaponDetailScreen_PopulateFromViewRouteData_Params
{
};

// Function KillstreakUINew.KSWeaponDetailScreen.InitiateLockedMilestonesPurchase
struct UKSWeaponDetailScreen_InitiateLockedMilestonesPurchase_Params
{
};

// Function KillstreakUINew.KSWeaponDetailScreen.HasLockedMilestones
struct UKSWeaponDetailScreen_HasLockedMilestones_Params
{
	bool                                               ReturnValue;                                               // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function KillstreakUINew.KSWeaponDetailScreen.HandleWeaponPreview
struct UKSWeaponDetailScreen_HandleWeaponPreview_Params
{
	class UKSWeaponAsset*                              WeaponAsset;                                               // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function KillstreakUINew.KSWeaponDetailScreen.HandleViewStateChanged
struct UKSWeaponDetailScreen_HandleViewStateChanged_Params
{
	struct FName                                       CurrentRoute;                                              // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FName                                       PreviousRoute;                                             // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	PlatformUMG_EViewManagerLayer                      Layer;                                                     // 0x0010(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function KillstreakUINew.KSWeaponDetailScreen.HandleSideNavigation
struct UKSWeaponDetailScreen_HandleSideNavigation_Params
{
	int                                                SideDirection;                                             // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function KillstreakUINew.KSWeaponDetailScreen.HandleCustomizeContextAction
struct UKSWeaponDetailScreen_HandleCustomizeContextAction_Params
{
};

// Function KillstreakUINew.KSWeaponDetailScreen.HandleBackContextAction
struct UKSWeaponDetailScreen_HandleBackContextAction_Params
{
};

// Function KillstreakUINew.KSWeaponDetailScreen.FX_OnViewMasteryRewards
struct UKSWeaponDetailScreen_FX_OnViewMasteryRewards_Params
{
};

// Function KillstreakUINew.KSWeaponDetailScreen.FX_OnCustomizeContextAction
struct UKSWeaponDetailScreen_FX_OnCustomizeContextAction_Params
{
};

// Function KillstreakUINew.KSWeaponDetailScreen.DisplayWeapon
struct UKSWeaponDetailScreen_DisplayWeapon_Params
{
	class UKSWeaponAsset*                              WeaponAsset;                                               // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UKSWeaponCategoryAsset*                      WeaponCategory;                                            // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function KillstreakUINew.KSWeaponDetailScreen.DisplayEquippedWrap
struct UKSWeaponDetailScreen_DisplayEquippedWrap_Params
{
	class UKSWeaponAttachment*                         EquippedWrap;                                              // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function KillstreakUINew.KSWeaponDetailScreen.ConfigureViewModel
struct UKSWeaponDetailScreen_ConfigureViewModel_Params
{
	class UKSWeaponAsset*                              WeaponAsset;                                               // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UKSWeaponAttachment*                         WeaponWrap;                                                // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function KillstreakUINew.KSWeaponDetailScreen.AddWrapCustomizationViewRoute
struct UKSWeaponDetailScreen_AddWrapCustomizationViewRoute_Params
{
};

// Function KillstreakUINew.KSWeaponDetailScreen.AddMasteryRewardsViewRoute
struct UKSWeaponDetailScreen_AddMasteryRewardsViewRoute_Params
{
};

// Function KillstreakUINew.KSWeaponHubBase.HandleWeaponCategoryPreview
struct UKSWeaponHubBase_HandleWeaponCategoryPreview_Params
{
	class UKSWeaponCategoryAsset*                      WeaponCategory;                                            // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function KillstreakUINew.KSWeaponHubBase.HandleBackContextAction
struct UKSWeaponHubBase_HandleBackContextAction_Params
{
};

// Function KillstreakUINew.KSWeaponHubBase.GetWeaponCategoryButtons
struct UKSWeaponHubBase_GetWeaponCategoryButtons_Params
{
	TArray<class UKSWeaponCategoryButton*>             ReturnValue;                                               // 0x0000(0x0010)  (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, ContainsInstancedReference, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function KillstreakUINew.KSWeaponHubBase.FX_OnViewMasteryRewards
struct UKSWeaponHubBase_FX_OnViewMasteryRewards_Params
{
};

// Function KillstreakUINew.KSWeaponHubBase.AddMasteryRewardsViewRoute
struct UKSWeaponHubBase_AddMasteryRewardsViewRoute_Params
{
};

// Function KillstreakUINew.KSWeaponHubHelper.GetWeaponsForCategory
struct UKSWeaponHubHelper_GetWeaponsForCategory_Params
{
	struct FGameplayTag                                WeaponCategoryTag;                                         // 0x0000(0x0008)  (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UKSJobItem*                                  JobItem;                                                   // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<class UKSWeaponAsset*>                      ReturnValue;                                               // 0x0010(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function KillstreakUINew.KSWeaponHubHelper.GetWeaponCategoryDetailsByTag
struct UKSWeaponHubHelper_GetWeaponCategoryDetailsByTag_Params
{
	struct FGameplayTag                                CategoryTag;                                               // 0x0000(0x0008)  (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FWeaponCategoryDetails                      OutDetails;                                                // 0x0008(0x00F8)  (Parm, OutParm, NativeAccessSpecifierPublic)
	bool                                               ReturnValue;                                               // 0x0100(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function KillstreakUINew.KSWeaponHubHelper.GetWeaponCategoryDetails
struct UKSWeaponHubHelper_GetWeaponCategoryDetails_Params
{
	struct FName                                       WeaponCategoryName;                                        // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FWeaponCategoryDetails                      OutDetails;                                                // 0x0008(0x00F8)  (Parm, OutParm, NativeAccessSpecifierPublic)
	bool                                               ReturnValue;                                               // 0x0100(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function KillstreakUINew.KSWeaponHubHelper.GetJobsForWeaponId
struct UKSWeaponHubHelper_GetJobsForWeaponId_Params
{
	int                                                WeaponId;                                                  // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<class UKSJobItem*>                          ReturnValue;                                               // 0x0008(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function KillstreakUINew.KSWeaponHubHelper.GetJobsForWeaponCategory
struct UKSWeaponHubHelper_GetJobsForWeaponCategory_Params
{
	struct FName                                       WeaponCategoryName;                                        // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<class UKSJobItem*>                          ReturnValue;                                               // 0x0008(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function KillstreakUINew.KSWeaponHubHelper.GetAvailableWeaponCountInCategory
struct UKSWeaponHubHelper_GetAvailableWeaponCountInCategory_Params
{
	struct FGameplayTag                                CategoryTag;                                               // 0x0000(0x0008)  (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UKSJobItem*                                  JobItem;                                                   // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                ReturnValue;                                               // 0x0010(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function KillstreakUINew.KSWeaponMasteryLevelUpSummary.SwapEntryToTop
struct UKSWeaponMasteryLevelUpSummary_SwapEntryToTop_Params
{
	class UPrimaryDataAsset*                           InMasteryAsset;                                            // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function KillstreakUINew.KSWeaponMasteryLevelUpSummary.HasEntries
struct UKSWeaponMasteryLevelUpSummary_HasEntries_Params
{
	bool                                               ReturnValue;                                               // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function KillstreakUINew.KSWeaponMasteryLevelUpSummary.ContainsMasteryEntry
struct UKSWeaponMasteryLevelUpSummary_ContainsMasteryEntry_Params
{
	class UPrimaryDataAsset*                           InMasteryAsset;                                            // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               ReturnValue;                                               // 0x0008(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function KillstreakUINew.KSWeaponMasteryLevelUpScreen.ShowNextEntry
struct UKSWeaponMasteryLevelUpScreen_ShowNextEntry_Params
{
};

// Function KillstreakUINew.KSWeaponMasteryLevelUpScreen.PopulateForLevelUpEntry
struct UKSWeaponMasteryLevelUpScreen_PopulateForLevelUpEntry_Params
{
	struct FKSWeaponMasteryLevelUpSummaryEntry         LevelUpEntry;                                              // 0x0000(0x0048)  (Parm, NativeAccessSpecifierPublic)
};

// Function KillstreakUINew.KSWeaponMasteryLevelUpScreen.HandleViewStateChanged
struct UKSWeaponMasteryLevelUpScreen_HandleViewStateChanged_Params
{
	struct FName                                       CurrentRoute;                                              // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FName                                       PreviousRoute;                                             // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	PlatformUMG_EViewManagerLayer                      Layer;                                                     // 0x0010(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function KillstreakUINew.KSWeaponMasteryLevelUpScreen.HandleCurrentWeaponDismissed
struct UKSWeaponMasteryLevelUpScreen_HandleCurrentWeaponDismissed_Params
{
};

// Function KillstreakUINew.KSWeaponMasteryRewardsScreen.UpdateReactiveStateDescription
struct UKSWeaponMasteryRewardsScreen_UpdateReactiveStateDescription_Params
{
};

// Function KillstreakUINew.KSWeaponMasteryRewardsScreen.SelectTierForCurrentProgress
struct UKSWeaponMasteryRewardsScreen_SelectTierForCurrentProgress_Params
{
};

// Function KillstreakUINew.KSWeaponMasteryRewardsScreen.SelectTierByNumber
struct UKSWeaponMasteryRewardsScreen_SelectTierByNumber_Params
{
	int                                                TierNumber;                                                // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function KillstreakUINew.KSWeaponMasteryRewardsScreen.SelectTierByIndex
struct UKSWeaponMasteryRewardsScreen_SelectTierByIndex_Params
{
	int                                                TierIndex;                                                 // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function KillstreakUINew.KSWeaponMasteryRewardsScreen.SelectTier
struct UKSWeaponMasteryRewardsScreen_SelectTier_Params
{
	struct FActivityTier                               ActivityTier;                                              // 0x0000(0x0040)  (Parm, NativeAccessSpecifierPublic)
};

// Function KillstreakUINew.KSWeaponMasteryRewardsScreen.SelectPrevTier
struct UKSWeaponMasteryRewardsScreen_SelectPrevTier_Params
{
};

// Function KillstreakUINew.KSWeaponMasteryRewardsScreen.SelectNextTier
struct UKSWeaponMasteryRewardsScreen_SelectNextTier_Params
{
};

// Function KillstreakUINew.KSWeaponMasteryRewardsScreen.PostChangeRewardPreview
struct UKSWeaponMasteryRewardsScreen_PostChangeRewardPreview_Params
{
};

// Function KillstreakUINew.KSWeaponMasteryRewardsScreen.PopulateRewardTiers
struct UKSWeaponMasteryRewardsScreen_PopulateRewardTiers_Params
{
};

// Function KillstreakUINew.KSWeaponMasteryRewardsScreen.PopulateFromWeaponsMaster
struct UKSWeaponMasteryRewardsScreen_PopulateFromWeaponsMaster_Params
{
};

// Function KillstreakUINew.KSWeaponMasteryRewardsScreen.PopulateFromWeaponCategory
struct UKSWeaponMasteryRewardsScreen_PopulateFromWeaponCategory_Params
{
	class UKSWeaponCategoryAsset*                      WeaponCategory;                                            // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function KillstreakUINew.KSWeaponMasteryRewardsScreen.PopulateFromWeaponAsset
struct UKSWeaponMasteryRewardsScreen_PopulateFromWeaponAsset_Params
{
	class UKSWeaponAsset*                              WeaponAsset;                                               // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function KillstreakUINew.KSWeaponMasteryRewardsScreen.PopulateFromViewRouteData
struct UKSWeaponMasteryRewardsScreen_PopulateFromViewRouteData_Params
{
};

// Function KillstreakUINew.KSWeaponMasteryRewardsScreen.OnCurrentProgressActivityInstanceUpdated
struct UKSWeaponMasteryRewardsScreen_OnCurrentProgressActivityInstanceUpdated_Params
{
};

// Function KillstreakUINew.KSWeaponMasteryRewardsScreen.MakeMasteryRewardData
struct UKSWeaponMasteryRewardsScreen_MakeMasteryRewardData_Params
{
	struct FTierRewardItemData                         RewardItem;                                                // 0x0000(0x0010)  (Parm, NoDestructor, NativeAccessSpecifierPublic)
	struct FMasteryRewardData                          ReturnValue;                                               // 0x0010(0x0010)  (Parm, OutParm, ReturnParm, NoDestructor, NativeAccessSpecifierPublic)
};

// Function KillstreakUINew.KSWeaponMasteryRewardsScreen.HandleWeaponModelSet
struct UKSWeaponMasteryRewardsScreen_HandleWeaponModelSet_Params
{
};

// Function KillstreakUINew.KSWeaponMasteryRewardsScreen.HandleViewStateChanged
struct UKSWeaponMasteryRewardsScreen_HandleViewStateChanged_Params
{
	struct FName                                       CurrentRoute;                                              // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FName                                       PreviousRoute;                                             // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	PlatformUMG_EViewManagerLayer                      Layer;                                                     // 0x0010(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function KillstreakUINew.KSWeaponMasteryRewardsScreen.HandleTriggerReactiveContextAction
struct UKSWeaponMasteryRewardsScreen_HandleTriggerReactiveContextAction_Params
{
};

// Function KillstreakUINew.KSWeaponMasteryRewardsScreen.HandleBackContextAction
struct UKSWeaponMasteryRewardsScreen_HandleBackContextAction_Params
{
};

// Function KillstreakUINew.KSWeaponMasteryRewardsScreen.GetWeaponCategoryFromXP
struct UKSWeaponMasteryRewardsScreen_GetWeaponCategoryFromXP_Params
{
	class UKSActivity*                                 CategoryActivity;                                          // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UKSWeaponCategoryAsset*                      ReturnValue;                                               // 0x0008(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function KillstreakUINew.KSWeaponMasteryRewardsScreen.GetRewardTiers
struct UKSWeaponMasteryRewardsScreen_GetRewardTiers_Params
{
	TArray<struct FActivityTier>                       OutRewardTiers;                                            // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function KillstreakUINew.KSWeaponMasteryRewardsScreen.GetRegularTiersProgress
struct UKSWeaponMasteryRewardsScreen_GetRegularTiersProgress_Params
{
	float                                              ReturnValue;                                               // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function KillstreakUINew.KSWeaponMasteryRewardsScreen.GetPrestigeTierProgress
struct UKSWeaponMasteryRewardsScreen_GetPrestigeTierProgress_Params
{
	float                                              ReturnValue;                                               // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function KillstreakUINew.KSWeaponMasteryRewardsScreen.GetModelViewerActorName
struct UKSWeaponMasteryRewardsScreen_GetModelViewerActorName_Params
{
	struct FName                                       ReturnValue;                                               // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function KillstreakUINew.KSWeaponMasteryRewardsScreen.DisplayWeaponsMaster
struct UKSWeaponMasteryRewardsScreen_DisplayWeaponsMaster_Params
{
};

// Function KillstreakUINew.KSWeaponMasteryRewardsScreen.DisplayWeaponCategory
struct UKSWeaponMasteryRewardsScreen_DisplayWeaponCategory_Params
{
	class UKSWeaponCategoryAsset*                      WeaponCategory;                                            // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function KillstreakUINew.KSWeaponMasteryRewardsScreen.DisplayWeaponAsset
struct UKSWeaponMasteryRewardsScreen_DisplayWeaponAsset_Params
{
	class UKSWeaponAsset*                              WeaponAsset;                                               // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function KillstreakUINew.KSWeaponMasteryRewardsScreen.DisplayRewardTier
struct UKSWeaponMasteryRewardsScreen_DisplayRewardTier_Params
{
	struct FActivityTier                               SelectedTier;                                              // 0x0000(0x0040)  (Parm, NativeAccessSpecifierPublic)
};

// Function KillstreakUINew.KSWeaponMasteryRewardsScreen.DisplayReactiveStateDescription
struct UKSWeaponMasteryRewardsScreen_DisplayReactiveStateDescription_Params
{
	struct FText                                       DescText;                                                  // 0x0000(0x0018)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
};

// Function KillstreakUINew.KSWeaponMasteryRewardsScreen.DisplayActivityProgress
struct UKSWeaponMasteryRewardsScreen_DisplayActivityProgress_Params
{
	int                                                Level;                                                     // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                LevelProgressCount;                                        // 0x0004(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                LevelProgressTotal;                                        // 0x0008(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function KillstreakUINew.KSWeaponMasteryRewardsScreen.ConfigureLobbyCamera
struct UKSWeaponMasteryRewardsScreen_ConfigureLobbyCamera_Params
{
};

// Function KillstreakUINew.KSWeaponMasteryRewardsScreen.ClearReactiveStateDescription
struct UKSWeaponMasteryRewardsScreen_ClearReactiveStateDescription_Params
{
};

// Function KillstreakUINew.KSWeaponMilestoneDisplay.PopulateFromWeaponAsset
struct UKSWeaponMilestoneDisplay_PopulateFromWeaponAsset_Params
{
	class UKSWeaponAsset*                              WeaponAsset;                                               // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function KillstreakUINew.KSWeaponMilestoneDisplay.GetMilestoneEntries
struct UKSWeaponMilestoneDisplay_GetMilestoneEntries_Params
{
	TArray<class UKSWeaponMilestoneEntry*>             Entries;                                                   // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, ContainsInstancedReference, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function KillstreakUINew.KSWeaponMilestoneEntry.PopulateFromMilestoneActivity
struct UKSWeaponMilestoneEntry_PopulateFromMilestoneActivity_Params
{
	class UKSActivityInstance*                         MilestoneInstance;                                         // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function KillstreakUINew.KSWeaponMilestoneEntry.DisplayMilestoneActivity
struct UKSWeaponMilestoneEntry_DisplayMilestoneActivity_Params
{
	class UKSActivityInstance*                         MilestoneInstance;                                         // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function KillstreakUINew.KSWeaponMilestoneEntry.DisplayEmpty
struct UKSWeaponMilestoneEntry_DisplayEmpty_Params
{
};

// Function KillstreakUINew.KSWeaponProgressButton.SetWeaponAsset
struct UKSWeaponProgressButton_SetWeaponAsset_Params
{
	class UKSWeaponAsset*                              InWeaponAsset;                                             // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function KillstreakUINew.KSWeaponProgressButton.OnCosmeticClicked
struct UKSWeaponProgressButton_OnCosmeticClicked_Params
{
};

// Function KillstreakUINew.KSWeaponProgressButton.GetWeaponAsset
struct UKSWeaponProgressButton_GetWeaponAsset_Params
{
	class UKSWeaponAsset*                              ReturnValue;                                               // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function KillstreakUINew.KSWeaponProgressButton.DisplayWeapon
struct UKSWeaponProgressButton_DisplayWeapon_Params
{
	class UKSWeaponAsset*                              DisplayedWeapon;                                           // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function KillstreakUINew.KSWeaponProgressButton.DisplayMasteryProgress
struct UKSWeaponProgressButton_DisplayMasteryProgress_Params
{
	int                                                MasteryLevel;                                              // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                LevelProgressCount;                                        // 0x0004(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                LevelProgressTotal;                                        // 0x0008(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function KillstreakUINew.KSWeaponProgressButton.DisplayCosmetic
struct UKSWeaponProgressButton_DisplayCosmetic_Params
{
	class UKSWeaponAttachment*                         Cosmetic;                                                  // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function KillstreakUINew.KSWeaponProgressButton.BroadcastWeaponUnhovered
struct UKSWeaponProgressButton_BroadcastWeaponUnhovered_Params
{
};

// Function KillstreakUINew.KSWeaponProgressButton.BroadcastWeaponSelected
struct UKSWeaponProgressButton_BroadcastWeaponSelected_Params
{
};

// Function KillstreakUINew.KSWeaponProgressButton.BroadcastWeaponPreview
struct UKSWeaponProgressButton_BroadcastWeaponPreview_Params
{
};

// Function KillstreakUINew.KSWeaponProgressMeter.PopulateProgressReward
struct UKSWeaponProgressMeter_PopulateProgressReward_Params
{
	class UKSActivityInstance*                         ProgressInstance;                                          // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function KillstreakUINew.KSWeaponProgressMeter.PopulateFromWeaponsMaster
struct UKSWeaponProgressMeter_PopulateFromWeaponsMaster_Params
{
};

// Function KillstreakUINew.KSWeaponProgressMeter.PopulateFromWeaponCategory
struct UKSWeaponProgressMeter_PopulateFromWeaponCategory_Params
{
	class UKSWeaponCategoryAsset*                      WeaponCategory;                                            // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function KillstreakUINew.KSWeaponProgressMeter.PopulateFromWeapon
struct UKSWeaponProgressMeter_PopulateFromWeapon_Params
{
	class UKSWeaponAsset*                              WeaponAsset;                                               // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function KillstreakUINew.KSWeaponProgressMeter.GetItemTypeTexts
struct UKSWeaponProgressMeter_GetItemTypeTexts_Params
{
	TArray<struct FTierRewardItemData>                 RewardItems;                                               // 0x0000(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<struct FText>                               ReturnValue;                                               // 0x0010(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function KillstreakUINew.KSWeaponProgressMeter.DisplayWeaponsMaster
struct UKSWeaponProgressMeter_DisplayWeaponsMaster_Params
{
};

// Function KillstreakUINew.KSWeaponProgressMeter.DisplayWeaponCategory
struct UKSWeaponProgressMeter_DisplayWeaponCategory_Params
{
	class UKSWeaponCategoryAsset*                      WeaponCategory;                                            // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function KillstreakUINew.KSWeaponProgressMeter.DisplayWeapon
struct UKSWeaponProgressMeter_DisplayWeapon_Params
{
	class UKSWeaponAsset*                              WeaponAsset;                                               // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function KillstreakUINew.KSWeaponProgressMeter.DisplayProgressReward
struct UKSWeaponProgressMeter_DisplayProgressReward_Params
{
	struct FWeaponMasteryRewardDisplayData             RewardDisplayData;                                         // 0x0000(0x0098)  (Parm, NativeAccessSpecifierPublic)
};

// Function KillstreakUINew.KSWeaponProgressMeter.DisplayProgress
struct UKSWeaponProgressMeter_DisplayProgress_Params
{
	int                                                MasteryLevel;                                              // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                LevelProgressCount;                                        // 0x0004(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                LevelProgressTotal;                                        // 0x0008(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function KillstreakUINew.KSWeaponProgressMeter.DisplayAltDescription
struct UKSWeaponProgressMeter_DisplayAltDescription_Params
{
	struct FText                                       DescriptionText;                                           // 0x0000(0x0018)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
};

// Function KillstreakUINew.KSWeaponProgressMeter.ClearProgressReward
struct UKSWeaponProgressMeter_ClearProgressReward_Params
{
};

// Function KillstreakUINew.KSWeaponProgressMeter.BroadcastGoToRewardDetails
struct UKSWeaponProgressMeter_BroadcastGoToRewardDetails_Params
{
};

// Function KillstreakUINew.KSWeaponStatsPanel.UpdateStatCount
struct UKSWeaponStatsPanel_UpdateStatCount_Params
{
	int                                                NewStatCount;                                              // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function KillstreakUINew.KSWeaponStatsPanel.UpdateStatAtIndex
struct UKSWeaponStatsPanel_UpdateStatAtIndex_Params
{
	int                                                WidgetIndex;                                               // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FItemDisplayStat                            WeaponStat;                                                // 0x0008(0x0038)  (Parm, NativeAccessSpecifierPublic)
	struct FItemDisplayStat                            UpgradeStat;                                               // 0x0040(0x0038)  (Parm, NativeAccessSpecifierPublic)
};

// Function KillstreakUINew.KSWeaponStatsPanel.UpdateSideNavigation
struct UKSWeaponStatsPanel_UpdateSideNavigation_Params
{
	bool                                               PrevLevelEnabled;                                          // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               NextLevelEnabled;                                          // 0x0001(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function KillstreakUINew.KSWeaponStatsPanel.SetOpenedState
struct UKSWeaponStatsPanel_SetOpenedState_Params
{
	bool                                               IsOpen;                                                    // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function KillstreakUINew.KSWeaponStatsPanel.SetBaseWeapon
struct UKSWeaponStatsPanel_SetBaseWeapon_Params
{
	class UKSWeaponAsset*                              InWeaponAsset;                                             // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function KillstreakUINew.KSWeaponStatsPanel.RemoveStatWidget
struct UKSWeaponStatsPanel_RemoveStatWidget_Params
{
};

// Function KillstreakUINew.KSWeaponStatsPanel.PopulateWeaponLevel
struct UKSWeaponStatsPanel_PopulateWeaponLevel_Params
{
	int                                                TierLevel;                                                 // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               ReturnValue;                                               // 0x0004(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function KillstreakUINew.KSWeaponStatsPanel.PopulatePrevWeaponLevel
struct UKSWeaponStatsPanel_PopulatePrevWeaponLevel_Params
{
	bool                                               ReturnValue;                                               // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function KillstreakUINew.KSWeaponStatsPanel.PopulateNextWeaponLevel
struct UKSWeaponStatsPanel_PopulateNextWeaponLevel_Params
{
	bool                                               ReturnValue;                                               // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function KillstreakUINew.KSWeaponStatsPanel.GetOpenedState
struct UKSWeaponStatsPanel_GetOpenedState_Params
{
	bool                                               ReturnValue;                                               // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function KillstreakUINew.KSWeaponStatsPanel.GetCurrentStatCount
struct UKSWeaponStatsPanel_GetCurrentStatCount_Params
{
	int                                                ReturnValue;                                               // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function KillstreakUINew.KSWeaponStatsPanel.DisplayWeaponInfo
struct UKSWeaponStatsPanel_DisplayWeaponInfo_Params
{
	int                                                Level;                                                     // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UKSWeaponAsset*                              LevelWeapon;                                               // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function KillstreakUINew.KSWeaponStatsPanel.DisplayOpenedState
struct UKSWeaponStatsPanel_DisplayOpenedState_Params
{
	bool                                               IsOpen;                                                    // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function KillstreakUINew.KSWeaponStatsPanel.AddStatWidget
struct UKSWeaponStatsPanel_AddStatWidget_Params
{
};

// Function KillstreakUINew.KSWhatsNewModal.UpdateWhatsNewPanels
struct UKSWhatsNewModal_UpdateWhatsNewPanels_Params
{
};

// Function KillstreakUINew.KSWhatsNewModal.OnJsonChanged
struct UKSWhatsNewModal_OnJsonChanged_Params
{
};

// Function KillstreakUINew.KSWhatsNewModal.GetPanelData
struct UKSWhatsNewModal_GetPanelData_Params
{
	TArray<class UKSWhatsNewPanel*>                    ReturnValue;                                               // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function KillstreakUINew.KSWhatsNewModal.GetMaxPanelCount
struct UKSWhatsNewModal_GetMaxPanelCount_Params
{
	int                                                ReturnValue;                                               // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function KillstreakUINew.KSWhatsNewModal.GetJsonDataFactory
struct UKSWhatsNewModal_GetJsonDataFactory_Params
{
	class UKSJsonDataFactory*                          ReturnValue;                                               // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function KillstreakUINew.KSWrapCustomizationScreen.UpdateReactiveStateDescription
struct UKSWrapCustomizationScreen_UpdateReactiveStateDescription_Params
{
};

// Function KillstreakUINew.KSWrapCustomizationScreen.SetActionButtonText
struct UKSWrapCustomizationScreen_SetActionButtonText_Params
{
	struct FText                                       DescText;                                                  // 0x0000(0x0018)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
};

// Function KillstreakUINew.KSWrapCustomizationScreen.RemoveLastWrapEntry
struct UKSWrapCustomizationScreen_RemoveLastWrapEntry_Params
{
};

// Function KillstreakUINew.KSWrapCustomizationScreen.RefreshWidgetNavigation
struct UKSWrapCustomizationScreen_RefreshWidgetNavigation_Params
{
};

// Function KillstreakUINew.KSWrapCustomizationScreen.PromptEquipAllForCosmetic
struct UKSWrapCustomizationScreen_PromptEquipAllForCosmetic_Params
{
};

// Function KillstreakUINew.KSWrapCustomizationScreen.PreviewWeaponWrap
struct UKSWrapCustomizationScreen_PreviewWeaponWrap_Params
{
	class UKSWeaponAttachment*                         WeaponWrap;                                                // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UPUMG_StoreItem*                             StoreItem;                                                 // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function KillstreakUINew.KSWrapCustomizationScreen.PopulateFromWrapCustomizationContext
struct UKSWrapCustomizationScreen_PopulateFromWrapCustomizationContext_Params
{
	class UKSWrapCustomizationContext*                 WrapContext;                                               // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function KillstreakUINew.KSWrapCustomizationScreen.PopulateFromViewRouteData
struct UKSWrapCustomizationScreen_PopulateFromViewRouteData_Params
{
};

// Function KillstreakUINew.KSWrapCustomizationScreen.OnWrapPopulationFinished
struct UKSWrapCustomizationScreen_OnWrapPopulationFinished_Params
{
};

// Function KillstreakUINew.KSWrapCustomizationScreen.OnPurchaseAndEquipComplete
struct UKSWrapCustomizationScreen_OnPurchaseAndEquipComplete_Params
{
	bool                                               bSuccess;                                                  // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function KillstreakUINew.KSWrapCustomizationScreen.OnEquipButtonClicked
struct UKSWrapCustomizationScreen_OnEquipButtonClicked_Params
{
};

// Function KillstreakUINew.KSWrapCustomizationScreen.OnEquipAllComplete
struct UKSWrapCustomizationScreen_OnEquipAllComplete_Params
{
	bool                                               bSuccess;                                                  // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function KillstreakUINew.KSWrapCustomizationScreen.HandleWrapEntryPurchaseFlow
struct UKSWrapCustomizationScreen_HandleWrapEntryPurchaseFlow_Params
{
	class UKSWeaponAttachment*                         WrapAttachment;                                            // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UPUMG_StoreItem*                             StoreItem;                                                 // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function KillstreakUINew.KSWrapCustomizationScreen.HandleWrapEntryPreview
struct UKSWrapCustomizationScreen_HandleWrapEntryPreview_Params
{
	class UKSWeaponAttachment*                         WrapAttachment;                                            // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UPUMG_StoreItem*                             StoreItem;                                                 // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function KillstreakUINew.KSWrapCustomizationScreen.HandleWrapEntryEquip
struct UKSWrapCustomizationScreen_HandleWrapEntryEquip_Params
{
	class UKSWeaponAttachment*                         WrapAttachment;                                            // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function KillstreakUINew.KSWrapCustomizationScreen.HandleWeaponModelSet
struct UKSWrapCustomizationScreen_HandleWeaponModelSet_Params
{
};

// Function KillstreakUINew.KSWrapCustomizationScreen.HandleViewStateChanged
struct UKSWrapCustomizationScreen_HandleViewStateChanged_Params
{
	struct FName                                       CurrentRoute;                                              // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FName                                       PreviousRoute;                                             // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	PlatformUMG_EViewManagerLayer                      Layer;                                                     // 0x0010(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function KillstreakUINew.KSWrapCustomizationScreen.HandleTriggerReactiveContextAction
struct UKSWrapCustomizationScreen_HandleTriggerReactiveContextAction_Params
{
};

// Function KillstreakUINew.KSWrapCustomizationScreen.HandleLoadoutChanged
struct UKSWrapCustomizationScreen_HandleLoadoutChanged_Params
{
	class UPUMG_Loadout*                               Loadout;                                                   // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function KillstreakUINew.KSWrapCustomizationScreen.HandleBackContextAction
struct UKSWrapCustomizationScreen_HandleBackContextAction_Params
{
};

// Function KillstreakUINew.KSWrapCustomizationScreen.GetWrapEntryCount
struct UKSWrapCustomizationScreen_GetWrapEntryCount_Params
{
	int                                                ReturnValue;                                               // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function KillstreakUINew.KSWrapCustomizationScreen.GetWrapEntryByWeaponAttachment
struct UKSWrapCustomizationScreen_GetWrapEntryByWeaponAttachment_Params
{
	class UKSWeaponAttachment*                         WeaponAttachment;                                          // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UKSWrapSelectionEntry*                       OutWrapEntry;                                              // 0x0008(0x0008)  (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               ReturnValue;                                               // 0x0010(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function KillstreakUINew.KSWrapCustomizationScreen.GetWrapEntry
struct UKSWrapCustomizationScreen_GetWrapEntry_Params
{
	int                                                Index;                                                     // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UKSWrapSelectionEntry*                       OutWrapEntry;                                              // 0x0008(0x0008)  (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               ReturnValue;                                               // 0x0010(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function KillstreakUINew.KSWrapCustomizationScreen.GetOrCreateWrapEntry
struct UKSWrapCustomizationScreen_GetOrCreateWrapEntry_Params
{
	int                                                Index;                                                     // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UKSWrapSelectionEntry*                       ReturnValue;                                               // 0x0008(0x0008)  (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function KillstreakUINew.KSWrapCustomizationScreen.GetModelViewerActorName
struct UKSWrapCustomizationScreen_GetModelViewerActorName_Params
{
	struct FName                                       ReturnValue;                                               // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function KillstreakUINew.KSWrapCustomizationScreen.EquipWeaponWrap
struct UKSWrapCustomizationScreen_EquipWeaponWrap_Params
{
	class UKSWeaponAttachment*                         WeaponWrap;                                                // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function KillstreakUINew.KSWrapCustomizationScreen.DisplayWrapInfo
struct UKSWrapCustomizationScreen_DisplayWrapInfo_Params
{
	class UKSWeaponAttachment*                         WeaponWrap;                                                // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function KillstreakUINew.KSWrapCustomizationScreen.DisplayWeaponInfo
struct UKSWrapCustomizationScreen_DisplayWeaponInfo_Params
{
	class UKSWeaponAsset*                              WeaponAsset;                                               // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UKSWeaponCategoryAsset*                      WeaponCategory;                                            // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function KillstreakUINew.KSWrapCustomizationScreen.DisplayReactiveStateDescription
struct UKSWrapCustomizationScreen_DisplayReactiveStateDescription_Params
{
	struct FText                                       DescText;                                                  // 0x0000(0x0018)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
};

// Function KillstreakUINew.KSWrapCustomizationScreen.CreateAndAddWrapEntry
struct UKSWrapCustomizationScreen_CreateAndAddWrapEntry_Params
{
	class UKSWrapSelectionEntry*                       ReturnValue;                                               // 0x0000(0x0008)  (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function KillstreakUINew.KSWrapCustomizationScreen.ConfigureViewModel
struct UKSWrapCustomizationScreen_ConfigureViewModel_Params
{
	class UKSWeaponAsset*                              WeaponAsset;                                               // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UKSWeaponAttachment*                         WeaponWrap;                                                // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function KillstreakUINew.KSWrapCustomizationScreen.ClearReactiveStateDescription
struct UKSWrapCustomizationScreen_ClearReactiveStateDescription_Params
{
};

// Function KillstreakUINew.KSWrapCustomizationScreen.ClearEquippedWeaponWrap
struct UKSWrapCustomizationScreen_ClearEquippedWeaponWrap_Params
{
};

// Function KillstreakUINew.KSWrapCustomizationScreen.ClearEntries
struct UKSWrapCustomizationScreen_ClearEntries_Params
{
};

// Function KillstreakUINew.KSWrapSelectionEntry.PopulateEntry
struct UKSWrapSelectionEntry_PopulateEntry_Params
{
	class UKSWeaponAttachment*                         WeaponAttachment;                                          // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UPUMG_StoreItem*                             StoreItem;                                                 // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               IsEquipped;                                                // 0x0010(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function KillstreakUINew.KSWrapSelectionEntry.GetPopulatedWeaponAttachment
struct UKSWrapSelectionEntry_GetPopulatedWeaponAttachment_Params
{
	class UKSWeaponAttachment*                         ReturnValue;                                               // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function KillstreakUINew.KSWrapSelectionEntry.GetPopulatedStoreItem
struct UKSWrapSelectionEntry_GetPopulatedStoreItem_Params
{
	class UPUMG_StoreItem*                             ReturnValue;                                               // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function KillstreakUINew.KSWrapSelectionEntry.DisplayWrap
struct UKSWrapSelectionEntry_DisplayWrap_Params
{
	class UKSWeaponAttachment*                         WeaponAttachment;                                          // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function KillstreakUINew.KSWrapSelectionEntry.DisplaySelected
struct UKSWrapSelectionEntry_DisplaySelected_Params
{
	bool                                               IsSelected;                                                // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function KillstreakUINew.KSWrapSelectionEntry.DisplayEquipped
struct UKSWrapSelectionEntry_DisplayEquipped_Params
{
	bool                                               IsEquipped;                                                // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function KillstreakUINew.KSWrapSelectionEntry.BroadcastWrapPreview
struct UKSWrapSelectionEntry_BroadcastWrapPreview_Params
{
};

// Function KillstreakUINew.KSWrapSelectionEntry.BroadcastWrapEquip
struct UKSWrapSelectionEntry_BroadcastWrapEquip_Params
{
};

// Function KillstreakUINew.KSWrapSelectionEntry.BroadcastStoreWrapSelect
struct UKSWrapSelectionEntry_BroadcastStoreWrapSelect_Params
{
};

// Function KillstreakUINew.KSWrapSelectionEntry.BroadcaseWrapClicked
struct UKSWrapSelectionEntry_BroadcaseWrapClicked_Params
{
};

// Function KillstreakUINew.TickAnimationManager.StopAnimation
struct UTickAnimationManager_StopAnimation_Params
{
	struct FName                                       AnimName;                                                  // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function KillstreakUINew.TickAnimationManager.SkipToEndAnimation
struct UTickAnimationManager_SkipToEndAnimation_Params
{
	struct FName                                       AnimName;                                                  // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function KillstreakUINew.TickAnimationManager.ResumeAnimation
struct UTickAnimationManager_ResumeAnimation_Params
{
	struct FName                                       AnimName;                                                  // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function KillstreakUINew.TickAnimationManager.RemoveAnimation
struct UTickAnimationManager_RemoveAnimation_Params
{
	struct FName                                       AnimName;                                                  // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function KillstreakUINew.TickAnimationManager.PlayAnimation
struct UTickAnimationManager_PlayAnimation_Params
{
	struct FName                                       AnimName;                                                  // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function KillstreakUINew.TickAnimationManager.PauseAnimation
struct UTickAnimationManager_PauseAnimation_Params
{
	struct FName                                       AnimName;                                                  // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function KillstreakUINew.TickAnimationManager.GetAnimationInfo
struct UTickAnimationManager_GetAnimationInfo_Params
{
	struct FName                                       AnimName;                                                  // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FTickAnimationParams                        OutAnimParams;                                             // 0x0008(0x002C)  (Parm, OutParm, ContainsInstancedReference, NativeAccessSpecifierPublic)
	bool                                               ReturnValue;                                               // 0x0034(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function KillstreakUINew.TickAnimationManager.ApplyTick
struct UTickAnimationManager_ApplyTick_Params
{
	float                                              DeltaTime;                                                 // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function KillstreakUINew.TickAnimationManager.AddAnimation
struct UTickAnimationManager_AddAnimation_Params
{
	struct FName                                       AnimName;                                                  // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              Duration;                                                  // 0x0008(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FScriptDelegate                             UpdateEvent;                                               // 0x000C(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	struct FScriptDelegate                             FinishedEvent;                                             // 0x001C(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
