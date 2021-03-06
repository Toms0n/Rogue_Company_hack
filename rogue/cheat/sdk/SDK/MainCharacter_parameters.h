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

// DelegateFunction MainCharacter.MainCharacter_C.OnPrimaryTwoWeaponHolstered__DelegateSignature
struct AMainCharacter_C_OnPrimaryTwoWeaponHolstered__DelegateSignature_Params
{
	class UKSWeaponComponent*                          bpp__WeaponComponent__pf;                                  // 0x0000(0x0008)  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bpp__PrimaryTwoHolstered__pf;                              // 0x0008(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// DelegateFunction MainCharacter.MainCharacter_C.OnPrimaryOneWeaponHolstered__DelegateSignature
struct AMainCharacter_C_OnPrimaryOneWeaponHolstered__DelegateSignature_Params
{
	class UKSWeaponComponent*                          bpp__WeaponComponent__pf;                                  // 0x0000(0x0008)  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bpp__PrimaryOneHolstered__pf;                              // 0x0008(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function MainCharacter.MainCharacter_C.Zipline Pulley Unhide
struct AMainCharacter_C_Zipline_Pulley_Unhide_Params
{
};

// Function MainCharacter.MainCharacter_C.Zipline Pulley Hide
struct AMainCharacter_C_Zipline_Pulley_Hide_Params
{
};

// Function MainCharacter.MainCharacter_C.WasLastHitHeadshot
struct AMainCharacter_C_WasLastHitHeadshot_Params
{
	bool                                               bpp__bHeadshot__pf;                                        // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function MainCharacter.MainCharacter_C.VerifyLastHitDamageType
struct AMainCharacter_C_VerifyLastHitDamageType_Params
{
	class UClass*                                      bpp__DamageType__pf;                                       // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bpp__IsRelatedToThisType__pf;                              // 0x0008(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function MainCharacter.MainCharacter_C.VerifyLastHitBone
struct AMainCharacter_C_VerifyLastHitBone_Params
{
	struct FName                                       bpp__ParentBoneName__pf;                                   // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bpp__IsRelatedToThisBone__pf;                              // 0x0008(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function MainCharacter.MainCharacter_C.UserConstructionScript
struct AMainCharacter_C_UserConstructionScript_Params
{
};

// Function MainCharacter.MainCharacter_C.Update Flash Bang PP
struct AMainCharacter_C_Update_Flash_Bang_PP_Params
{
};

// Function MainCharacter.MainCharacter_C.Update Action Camera
struct AMainCharacter_C_Update_Action_Camera_Params
{
	struct FVector                                     bpp__CameraxRotation__pfT;                                 // 0x0000(0x000C)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bpp__UsesxRotation__pfT;                                   // 0x000C(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                                     bpp__CameraxOffset__pfT;                                   // 0x0010(0x000C)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function MainCharacter.MainCharacter_C.UpdateRagdollOnGround
struct AMainCharacter_C_UpdateRagdollOnGround_Params
{
	bool                                               bpp__IsGrounded__pf;                                       // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function MainCharacter.MainCharacter_C.UpdateRagdollMeshLocation
struct AMainCharacter_C_UpdateRagdollMeshLocation_Params
{
};

// Function MainCharacter.MainCharacter_C.UpdateRagdoll
struct AMainCharacter_C_UpdateRagdoll_Params
{
	float                                              bpp__DeltaSeconds__pf;                                     // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function MainCharacter.MainCharacter_C.UpdatePlayerState
struct AMainCharacter_C_UpdatePlayerState_Params
{
	class APlayerState*                                bpp__Player__pf;                                           // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function MainCharacter.MainCharacter_C.UpdateHealthPP
struct AMainCharacter_C_UpdateHealthPP_Params
{
};

// Function MainCharacter.MainCharacter_C.UpdateDebugHealthVisibility
struct AMainCharacter_C_UpdateDebugHealthVisibility_Params
{
};

// Function MainCharacter.MainCharacter_C.UnhideZiplinePulley
struct AMainCharacter_C_UnhideZiplinePulley_Params
{
};

// Function MainCharacter.MainCharacter_C.UnhideUplineDevice
struct AMainCharacter_C_UnhideUplineDevice_Params
{
};

// Function MainCharacter.MainCharacter_C.TurnOffCapsulePhysics_Server
struct AMainCharacter_C_TurnOffCapsulePhysics_Server_Params
{
};

// Function MainCharacter.MainCharacter_C.TurnOffCapsulePhysics
struct AMainCharacter_C_TurnOffCapsulePhysics_Params
{
};

// Function MainCharacter.MainCharacter_C.Transition To Main Camera
struct AMainCharacter_C_Transition_To_Main_Camera_Params
{
};

// Function MainCharacter.MainCharacter_C.Transition To ADS Camera
struct AMainCharacter_C_Transition_To_ADS_Camera_Params
{
};

// Function MainCharacter.MainCharacter_C.SwitchToSnapshotPose
struct AMainCharacter_C_SwitchToSnapshotPose_Params
{
};

// Function MainCharacter.MainCharacter_C.StopReviveSFX
struct AMainCharacter_C_StopReviveSFX_Params
{
};

// Function MainCharacter.MainCharacter_C.StopLowHealthSFX
struct AMainCharacter_C_StopLowHealthSFX_Params
{
};

// Function MainCharacter.MainCharacter_C.Start Viewed Down Hit
struct AMainCharacter_C_Start_Viewed_Down_Hit_Params
{
};

// Function MainCharacter.MainCharacter_C.StartImmunity__UpdateFunc
struct AMainCharacter_C_StartImmunity__UpdateFunc_Params
{
};

// Function MainCharacter.MainCharacter_C.StartImmunity__FinishedFunc
struct AMainCharacter_C_StartImmunity__FinishedFunc_Params
{
};

// Function MainCharacter.MainCharacter_C.StartHacking
struct AMainCharacter_C_StartHacking_Params
{
};

// Function MainCharacter.MainCharacter_C.SprintFOVTimeline__UpdateFunc
struct AMainCharacter_C_SprintFOVTimeline__UpdateFunc_Params
{
};

// Function MainCharacter.MainCharacter_C.SprintFOVTimeline__FinishedFunc
struct AMainCharacter_C_SprintFOVTimeline__FinishedFunc_Params
{
};

// Function MainCharacter.MainCharacter_C.ShowDebugLocation
struct AMainCharacter_C_ShowDebugLocation_Params
{
	bool                                               bpp__bVisible__pf;                                         // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function MainCharacter.MainCharacter_C.ShouldLastHitLaunchIntoRagdoll
struct AMainCharacter_C_ShouldLastHitLaunchIntoRagdoll_Params
{
	bool                                               bpp__bShouldRagdoll__pf;                                   // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function MainCharacter.MainCharacter_C.SFXStateChangeReset
struct AMainCharacter_C_SFXStateChangeReset_Params
{
};

// Function MainCharacter.MainCharacter_C.SFXStateChangeMax
struct AMainCharacter_C_SFXStateChangeMax_Params
{
};

// Function MainCharacter.MainCharacter_C.SFXStateChangeHalf
struct AMainCharacter_C_SFXStateChangeHalf_Params
{
};

// Function MainCharacter.MainCharacter_C.SFXRingHalfSTOP
struct AMainCharacter_C_SFXRingHalfSTOP_Params
{
};

// Function MainCharacter.MainCharacter_C.SFXRingHalfPlay
struct AMainCharacter_C_SFXRingHalfPlay_Params
{
};

// Function MainCharacter.MainCharacter_C.SFXRingFullSTOP
struct AMainCharacter_C_SFXRingFullSTOP_Params
{
};

// Function MainCharacter.MainCharacter_C.SFXRingFullPlay
struct AMainCharacter_C_SFXRingFullPlay_Params
{
};

// Function MainCharacter.MainCharacter_C.Set up ADS Blur Dynamic Material
struct AMainCharacter_C_Set_up_ADS_Blur_Dynamic_Material_Params
{
};

// Function MainCharacter.MainCharacter_C.Set Health SFX RTPC
struct AMainCharacter_C_Set_Health_SFX_RTPC_Params
{
};

// Function MainCharacter.MainCharacter_C.Setup Debug Info Widget
struct AMainCharacter_C_Setup_Debug_Info_Widget_Params
{
};

// Function MainCharacter.MainCharacter_C.SetPostProcessHealthValue
struct AMainCharacter_C_SetPostProcessHealthValue_Params
{
	float                                              bpp__Health__pf;                                           // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function MainCharacter.MainCharacter_C.RestoreNormalCamera
struct AMainCharacter_C_RestoreNormalCamera_Params
{
};

// Function MainCharacter.MainCharacter_C.ReevaluateDebugWidgetAttachment
struct AMainCharacter_C_ReevaluateDebugWidgetAttachment_Params
{
};

// Function MainCharacter.MainCharacter_C.ReceiveTick
struct AMainCharacter_C_ReceiveTick_Params
{
	float                                              bpp__DeltaSeconds__pf;                                     // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function MainCharacter.MainCharacter_C.ReceiveBeginPlay
struct AMainCharacter_C_ReceiveBeginPlay_Params
{
};

// Function MainCharacter.MainCharacter_C.Play Viewed Sonar Hit
struct AMainCharacter_C_Play_Viewed_Sonar_Hit_Params
{
	struct FDamageEffect                               bpp__Effect__pf;                                           // 0x0000(0x0050)  (Parm, NoDestructor, NativeAccessSpecifierPublic)
};

// Function MainCharacter.MainCharacter_C.Play Viewed EMP Hit
struct AMainCharacter_C_Play_Viewed_EMP_Hit_Params
{
	struct FDamageEffect                               bpp__Effect__pf;                                           // 0x0000(0x0050)  (Parm, NoDestructor, NativeAccessSpecifierPublic)
};

// Function MainCharacter.MainCharacter_C.Play Viewed Blood Hit
struct AMainCharacter_C_Play_Viewed_Blood_Hit_Params
{
	struct FDamageEffect                               bpp__Effect__pf;                                           // 0x0000(0x0050)  (Parm, NoDestructor, NativeAccessSpecifierPublic)
};

// Function MainCharacter.MainCharacter_C.Play Martial Artist Target Front
struct AMainCharacter_C_Play_Martial_Artist_Target_Front_Params
{
};

// Function MainCharacter.MainCharacter_C.Play Martial Artist Target Back
struct AMainCharacter_C_Play_Martial_Artist_Target_Back_Params
{
};

// Function MainCharacter.MainCharacter_C.Play Martial Artist Instigator Front
struct AMainCharacter_C_Play_Martial_Artist_Instigator_Front_Params
{
};

// Function MainCharacter.MainCharacter_C.Play Martial Artist Instigator Back
struct AMainCharacter_C_Play_Martial_Artist_Instigator_Back_Params
{
};

// Function MainCharacter.MainCharacter_C.PlayReviveSFX
struct AMainCharacter_C_PlayReviveSFX_Params
{
};

// Function MainCharacter.MainCharacter_C.PlayPickupFX
struct AMainCharacter_C_PlayPickupFX_Params
{
	class AActor*                                      bpp__ItemActor__pf;                                        // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function MainCharacter.MainCharacter_C.PlayHitMarkerSFX
struct AMainCharacter_C_PlayHitMarkerSFX_Params
{
	struct FCombatEventInfo                            bpp__CombatEventInfo__pf;                                  // 0x0000(0x0060)  (Parm, NativeAccessSpecifierPublic)
};

// Function MainCharacter.MainCharacter_C.PlayHitFromRadialDamage
struct AMainCharacter_C_PlayHitFromRadialDamage_Params
{
	struct FDamageEffect                               bpp__Effect__pf__const;                                    // 0x0000(0x0050)  (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
};

// Function MainCharacter.MainCharacter_C.PlayHitFromPointDamage
struct AMainCharacter_C_PlayHitFromPointDamage_Params
{
	struct FDamageEffect                               bpp__Effect__pf__const;                                    // 0x0000(0x0050)  (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
};

// Function MainCharacter.MainCharacter_C.PlayHitBySFX
struct AMainCharacter_C_PlayHitBySFX_Params
{
	struct FDamageEffect                               bpp__DamageEffect__pf;                                     // 0x0000(0x0050)  (Parm, NoDestructor, NativeAccessSpecifierPublic)
};

// Function MainCharacter.MainCharacter_C.PlayerRevived
struct AMainCharacter_C_PlayerRevived_Params
{
	class AKSPlayerState*                              bpp__Revivee__pf;                                          // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class AKSPlayerState*                              bpp__Reviver__pf;                                          // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                bpp__ExpBonus__pf;                                         // 0x0010(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function MainCharacter.MainCharacter_C.PlayerDown
struct AMainCharacter_C_PlayerDown_Params
{
	struct FCombatEventInfo                            bpp__EventInfo__pf;                                        // 0x0000(0x0060)  (Parm, NativeAccessSpecifierPublic)
	int                                                bpp__ExpBonus__pf;                                         // 0x0060(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function MainCharacter.MainCharacter_C.PlayerDeath
struct AMainCharacter_C_PlayerDeath_Params
{
	struct FCombatEventInfo                            bpp__EventInfo__pf;                                        // 0x0000(0x0060)  (Parm, NativeAccessSpecifierPublic)
};

// Function MainCharacter.MainCharacter_C.PlayDownPPOnce
struct AMainCharacter_C_PlayDownPPOnce_Params
{
};

// Function MainCharacter.MainCharacter_C.PlayActionCameraSequence
struct AMainCharacter_C_PlayActionCameraSequence_Params
{
	struct FName                                       bpp__SequenceName__pf;                                     // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function MainCharacter.MainCharacter_C.OnZiplineChangeForFov
struct AMainCharacter_C_OnZiplineChangeForFov_Params
{
	bool                                               bpp__IsZiplining__pf;                                      // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function MainCharacter.MainCharacter_C.On Anim Initialized
struct AMainCharacter_C_On_Anim_Initialized_Params
{
};

// Function MainCharacter.MainCharacter_C.OnUnhovered
struct AMainCharacter_C_OnUnhovered_Params
{
	float                                              bpp__ExtraTime__pf;                                        // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function MainCharacter.MainCharacter_C.OnStartSkydive
struct AMainCharacter_C_OnStartSkydive_Params
{
};

// Function MainCharacter.MainCharacter_C.OnSprintChangedCallback
struct AMainCharacter_C_OnSprintChangedCallback_Params
{
	bool                                               bpp__IsSprinting__pf;                                      // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function MainCharacter.MainCharacter_C.OnReviveStart
struct AMainCharacter_C_OnReviveStart_Params
{
	class AKSCharacter*                                bpp__Reviver__pf;                                          // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              bpp__ReviveTime__pf;                                       // 0x0008(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bpp__Remote__pf;                                           // 0x000C(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function MainCharacter.MainCharacter_C.OnReviveInterrupt
struct AMainCharacter_C_OnReviveInterrupt_Params
{
	class AKSCharacter*                                bpp__Reviver__pf;                                          // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function MainCharacter.MainCharacter_C.OnReviveComplete
struct AMainCharacter_C_OnReviveComplete_Params
{
	class AKSCharacter*                                bpp__Reviver__pf;                                          // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function MainCharacter.MainCharacter_C.OnPowerSlideChangedCallback
struct AMainCharacter_C_OnPowerSlideChangedCallback_Params
{
	bool                                               bpp__IsPowerSliding__pf;                                   // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function MainCharacter.MainCharacter_C.OnLanded
struct AMainCharacter_C_OnLanded_Params
{
	struct FHitResult                                  bpp__Hit__pf__const;                                       // 0x0000(0x0088)  (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPublic)
};

// Function MainCharacter.MainCharacter_C.OnItemPickedUp_Event_1
struct AMainCharacter_C_OnItemPickedUp_Event_1_Params
{
	class AKSCharacter*                                bpp__Character__pf;                                        // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class AKSItemDrop*                                 bpp__ItemDrop__pf;                                         // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UKSItem*                                     bpp__Item__pf;                                             // 0x0010(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function MainCharacter.MainCharacter_C.OnImmuneStart
struct AMainCharacter_C_OnImmuneStart_Params
{
};

// Function MainCharacter.MainCharacter_C.OnImmuneEnd
struct AMainCharacter_C_OnImmuneEnd_Params
{
};

// Function MainCharacter.MainCharacter_C.OnHovered
struct AMainCharacter_C_OnHovered_Params
{
};

// Function MainCharacter.MainCharacter_C.OnHealthChanged
struct AMainCharacter_C_OnHealthChanged_Params
{
	class AKSCharacterBase*                            bpp__Character__pf__const;                                 // 0x0000(0x0008)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function MainCharacter.MainCharacter_C.OnGenderChanged
struct AMainCharacter_C_OnGenderChanged_Params
{
};

// Function MainCharacter.MainCharacter_C.OnGadgetSwapped
struct AMainCharacter_C_OnGadgetSwapped_Params
{
};

// Function MainCharacter.MainCharacter_C.OnFlashEffectStarted
struct AMainCharacter_C_OnFlashEffectStarted_Params
{
};

// Function MainCharacter.MainCharacter_C.OnFlashEffectEnded
struct AMainCharacter_C_OnFlashEffectEnded_Params
{
};

// Function MainCharacter.MainCharacter_C.OnFlashBangHit
struct AMainCharacter_C_OnFlashBangHit_Params
{
	Killstreak_EFlashBangIntensity                     bpp__Intensity__pf;                                        // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function MainCharacter.MainCharacter_C.OnFieldOfViewModChange
struct AMainCharacter_C_OnFieldOfViewModChange_Params
{
};

// Function MainCharacter.MainCharacter_C.OnEndZiplineRagdoll
struct AMainCharacter_C_OnEndZiplineRagdoll_Params
{
};

// Function MainCharacter.MainCharacter_C.OnEndSkydive
struct AMainCharacter_C_OnEndSkydive_Params
{
};

// Function MainCharacter.MainCharacter_C.OnEndPowerSlide
struct AMainCharacter_C_OnEndPowerSlide_Params
{
	Killstreak_EKSPowerSlideEndReason                  bpp__EndReason__pf;                                        // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function MainCharacter.MainCharacter_C.OnEndOutOfBounds
struct AMainCharacter_C_OnEndOutOfBounds_Params
{
};

// Function MainCharacter.MainCharacter_C.OnDodgeRollChangedEvent
struct AMainCharacter_C_OnDodgeRollChangedEvent_Params
{
	bool                                               bpp__IsDodgeRolling__pf;                                   // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function MainCharacter.MainCharacter_C.OnBeginZiplineRagdoll
struct AMainCharacter_C_OnBeginZiplineRagdoll_Params
{
};

// Function MainCharacter.MainCharacter_C.OnBeginPowerSlide
struct AMainCharacter_C_OnBeginPowerSlide_Params
{
};

// Function MainCharacter.MainCharacter_C.OnBeginOutOfBounds
struct AMainCharacter_C_OnBeginOutOfBounds_Params
{
};

// Function MainCharacter.MainCharacter_C.OnArmorInteractStart
struct AMainCharacter_C_OnArmorInteractStart_Params
{
	float                                              bpp__InteractTime__pf;                                     // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function MainCharacter.MainCharacter_C.OnArmorInteractInterrupt
struct AMainCharacter_C_OnArmorInteractInterrupt_Params
{
};

// Function MainCharacter.MainCharacter_C.OnArmorInteractComplete
struct AMainCharacter_C_OnArmorInteractComplete_Params
{
};

// Function MainCharacter.MainCharacter_C.OnADSBlurSettingChanged
struct AMainCharacter_C_OnADSBlurSettingChanged_Params
{
};

// Function MainCharacter.MainCharacter_C.NoseDiveFOVTimeline__UpdateFunc
struct AMainCharacter_C_NoseDiveFOVTimeline__UpdateFunc_Params
{
};

// Function MainCharacter.MainCharacter_C.NoseDiveFOVTimeline__FinishedFunc
struct AMainCharacter_C_NoseDiveFOVTimeline__FinishedFunc_Params
{
};

// Function MainCharacter.MainCharacter_C.NoseDiveCameraTransition
struct AMainCharacter_C_NoseDiveCameraTransition_Params
{
	bool                                               bpp__bEnterNoseDive__pf;                                   // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              bpp__AnimLength__pf;                                       // 0x0004(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function MainCharacter.MainCharacter_C.Martial Artist Target Front__UpdateFunc
struct AMainCharacter_C_Martial_Artist_Target_Front__UpdateFunc_Params
{
};

// Function MainCharacter.MainCharacter_C.Martial Artist Target Front__FinishedFunc
struct AMainCharacter_C_Martial_Artist_Target_Front__FinishedFunc_Params
{
};

// Function MainCharacter.MainCharacter_C.Martial Artist Target Back__UpdateFunc
struct AMainCharacter_C_Martial_Artist_Target_Back__UpdateFunc_Params
{
};

// Function MainCharacter.MainCharacter_C.Martial Artist Target Back__FinishedFunc
struct AMainCharacter_C_Martial_Artist_Target_Back__FinishedFunc_Params
{
};

// Function MainCharacter.MainCharacter_C.Martial Artist Instigator Front__UpdateFunc
struct AMainCharacter_C_Martial_Artist_Instigator_Front__UpdateFunc_Params
{
};

// Function MainCharacter.MainCharacter_C.Martial Artist Instigator Front__FinishedFunc
struct AMainCharacter_C_Martial_Artist_Instigator_Front__FinishedFunc_Params
{
};

// Function MainCharacter.MainCharacter_C.Martial Artist Instigator Back__UpdateFunc
struct AMainCharacter_C_Martial_Artist_Instigator_Back__UpdateFunc_Params
{
};

// Function MainCharacter.MainCharacter_C.Martial Artist Instigator Back__FinishedFunc
struct AMainCharacter_C_Martial_Artist_Instigator_Back__FinishedFunc_Params
{
};

// Function MainCharacter.MainCharacter_C.LandingRollEvent
struct AMainCharacter_C_LandingRollEvent_Params
{
	bool                                               bpp__IsDodgeRolling__pf;                                   // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function MainCharacter.MainCharacter_C.KeepActionCameraAboveWater
struct AMainCharacter_C_KeepActionCameraAboveWater_Params
{
	struct FVector                                     bpp__InBoomPosition__pf;                                   // 0x0000(0x000C)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                                     bpp__OutBoomPosition__pf;                                  // 0x000C(0x000C)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function MainCharacter.MainCharacter_C.K2_OnMovementModeChanged
struct AMainCharacter_C_K2_OnMovementModeChanged_Params
{
	TEnumAsByte<Engine_EMovementMode>                  bpp__PrevMovementMode__pf;                                 // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TEnumAsByte<Engine_EMovementMode>                  bpp__NewMovementMode__pf;                                  // 0x0001(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      bpp__PrevCustomMode__pf;                                   // 0x0002(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      bpp__NewCustomMode__pf;                                    // 0x0003(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function MainCharacter.MainCharacter_C.K2_OnEndViewTarget
struct AMainCharacter_C_K2_OnEndViewTarget_Params
{
	class APlayerController*                           bpp__PC__pf;                                               // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function MainCharacter.MainCharacter_C.K2_OnBecomeViewTarget
struct AMainCharacter_C_K2_OnBecomeViewTarget_Params
{
	class APlayerController*                           bpp__PC__pf;                                               // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function MainCharacter.MainCharacter_C.InpAxisKeyEvt_Gamepad_LeftY_K2Node_InputAxisKeyEvent_1
struct AMainCharacter_C_InpAxisKeyEvt_Gamepad_LeftY_K2Node_InputAxisKeyEvent_1_Params
{
	float                                              bpp__AxisValue__pf;                                        // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function MainCharacter.MainCharacter_C.InpAxisKeyEvt_Gamepad_LeftX_K2Node_InputAxisKeyEvent_2
struct AMainCharacter_C_InpAxisKeyEvt_Gamepad_LeftX_K2Node_InputAxisKeyEvent_2_Params
{
	float                                              bpp__AxisValue__pf;                                        // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function MainCharacter.MainCharacter_C.InpActEvt_T_K2Node_InputKeyEvent_1
struct AMainCharacter_C_InpActEvt_T_K2Node_InputKeyEvent_1_Params
{
	struct FKey                                        bpp__Key__pf;                                              // 0x0000(0x0018)  (Parm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function MainCharacter.MainCharacter_C.InitializeHealthPP
struct AMainCharacter_C_InitializeHealthPP_Params
{
};

// Function MainCharacter.MainCharacter_C.HideZiplinePulley
struct AMainCharacter_C_HideZiplinePulley_Params
{
};

// Function MainCharacter.MainCharacter_C.HideUplineDevice
struct AMainCharacter_C_HideUplineDevice_Params
{
};

// Function MainCharacter.MainCharacter_C.HealthRegenerationStopped
struct AMainCharacter_C_HealthRegenerationStopped_Params
{
	bool                                               bpp__bFullyHealed__pf;                                     // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function MainCharacter.MainCharacter_C.HealthRegenerationStarted
struct AMainCharacter_C_HealthRegenerationStarted_Params
{
};

// Function MainCharacter.MainCharacter_C.Handle Downed Ragdoll
struct AMainCharacter_C_Handle_Downed_Ragdoll_Params
{
};

// Function MainCharacter.MainCharacter_C.Get ADS Camera By Tag
struct AMainCharacter_C_Get_ADS_Camera_By_Tag_Params
{
	struct FName                                       bpp__Tag__pf;                                              // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UCameraComponent*                            bpp__CameraxComponent__pfT;                                // 0x0008(0x0008)  (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function MainCharacter.MainCharacter_C.Get ADS Bend Target Camera Component
struct AMainCharacter_C_Get_ADS_Bend_Target_Camera_Component_Params
{
	class UCameraComponent*                            bpp__CameraxComponent__pfT;                                // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function MainCharacter.MainCharacter_C.GetTargetFov
struct AMainCharacter_C_GetTargetFov_Params
{
	float                                              bpp__TargetFov__pf;                                        // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function MainCharacter.MainCharacter_C.GetTargetArmorLevel
struct AMainCharacter_C_GetTargetArmorLevel_Params
{
	class AActor*                                      bpp__HitxTarget__pfT;                                      // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                bpp__ArmorxLevel__pfT;                                     // 0x0008(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function MainCharacter.MainCharacter_C.GetRagdollFacingDirection
struct AMainCharacter_C_GetRagdollFacingDirection_Params
{
	bool                                               bpp__IsUp__pf;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function MainCharacter.MainCharacter_C.GetLastHitDistance
struct AMainCharacter_C_GetLastHitDistance_Params
{
	float                                              bpp__OutDistance__pf;                                      // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function MainCharacter.MainCharacter_C.GetDownedTransitionMontage
struct AMainCharacter_C_GetDownedTransitionMontage_Params
{
	class UAnimMontage*                                bpp__OutAnimMontage__pf;                                   // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function MainCharacter.MainCharacter_C.GetDeathTransitionAnimation
struct AMainCharacter_C_GetDeathTransitionAnimation_Params
{
	class UAnimSequence*                               bpp__OutAnimSequence__pf;                                  // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function MainCharacter.MainCharacter_C.FreeFall Camera Burst
struct AMainCharacter_C_FreeFall_Camera_Burst_Params
{
};

// Function MainCharacter.MainCharacter_C.Finish Action Camera Update
struct AMainCharacter_C_Finish_Action_Camera_Update_Params
{
};

// Function MainCharacter.MainCharacter_C.FinishHacking
struct AMainCharacter_C_FinishHacking_Params
{
};

// Function MainCharacter.MainCharacter_C.ExitDownedRagdoll
struct AMainCharacter_C_ExitDownedRagdoll_Params
{
};

// Function MainCharacter.MainCharacter_C.ExecuteUbergraph_MainCharacter_8
struct AMainCharacter_C_ExecuteUbergraph_MainCharacter_8_Params
{
	int                                                bpp__EntryPoint__pf;                                       // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function MainCharacter.MainCharacter_C.ExecuteUbergraph_MainCharacter_64
struct AMainCharacter_C_ExecuteUbergraph_MainCharacter_64_Params
{
	int                                                bpp__EntryPoint__pf;                                       // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function MainCharacter.MainCharacter_C.ExecuteUbergraph_MainCharacter_55
struct AMainCharacter_C_ExecuteUbergraph_MainCharacter_55_Params
{
	int                                                bpp__EntryPoint__pf;                                       // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function MainCharacter.MainCharacter_C.ExecuteUbergraph_MainCharacter_49
struct AMainCharacter_C_ExecuteUbergraph_MainCharacter_49_Params
{
	int                                                bpp__EntryPoint__pf;                                       // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function MainCharacter.MainCharacter_C.ExecuteUbergraph_MainCharacter_40
struct AMainCharacter_C_ExecuteUbergraph_MainCharacter_40_Params
{
	int                                                bpp__EntryPoint__pf;                                       // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function MainCharacter.MainCharacter_C.ExecuteUbergraph_MainCharacter_16
struct AMainCharacter_C_ExecuteUbergraph_MainCharacter_16_Params
{
	int                                                bpp__EntryPoint__pf;                                       // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function MainCharacter.MainCharacter_C.ExecuteUbergraph_MainCharacter_131
struct AMainCharacter_C_ExecuteUbergraph_MainCharacter_131_Params
{
	int                                                bpp__EntryPoint__pf;                                       // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function MainCharacter.MainCharacter_C.ExecuteUbergraph_MainCharacter_130
struct AMainCharacter_C_ExecuteUbergraph_MainCharacter_130_Params
{
	int                                                bpp__EntryPoint__pf;                                       // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function MainCharacter.MainCharacter_C.EventSetupCamerasForSpectator
struct AMainCharacter_C_EventSetupCamerasForSpectator_Params
{
	bool                                               bpp__Enabled__pf;                                          // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function MainCharacter.MainCharacter_C.EnterFreeFallFOVTimeline__UpdateFunc
struct AMainCharacter_C_EnterFreeFallFOVTimeline__UpdateFunc_Params
{
};

// Function MainCharacter.MainCharacter_C.EnterFreeFallFOVTimeline__FinishedFunc
struct AMainCharacter_C_EnterFreeFallFOVTimeline__FinishedFunc_Params
{
};

// Function MainCharacter.MainCharacter_C.EnterDownedRagdoll
struct AMainCharacter_C_EnterDownedRagdoll_Params
{
};

// Function MainCharacter.MainCharacter_C.End Down PP
struct AMainCharacter_C_End_Down_PP_Params
{
};

// Function MainCharacter.MainCharacter_C.EndImmunity__UpdateFunc
struct AMainCharacter_C_EndImmunity__UpdateFunc_Params
{
};

// Function MainCharacter.MainCharacter_C.EndImmunity__FinishedFunc
struct AMainCharacter_C_EndImmunity__FinishedFunc_Params
{
};

// Function MainCharacter.MainCharacter_C.DoSetOnFire
struct AMainCharacter_C_DoSetOnFire_Params
{
};

// Function MainCharacter.MainCharacter_C.DoExtinguishFire
struct AMainCharacter_C_DoExtinguishFire_Params
{
};

// Function MainCharacter.MainCharacter_C.DoBindZiplineEvents
struct AMainCharacter_C_DoBindZiplineEvents_Params
{
};

// Function MainCharacter.MainCharacter_C.DoBindSprintEvents
struct AMainCharacter_C_DoBindSprintEvents_Params
{
};

// Function MainCharacter.MainCharacter_C.DoBindDodgeRollEvents
struct AMainCharacter_C_DoBindDodgeRollEvents_Params
{
};

// Function MainCharacter.MainCharacter_C.DetermineKnockbackFacing
struct AMainCharacter_C_DetermineKnockbackFacing_Params
{
	struct FVector                                     bpp__HitDirection__pf;                                     // 0x0000(0x000C)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	HitEnum_EHitEnum                                   bpp__SideHit__pf;                                          // 0x000C(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FRotator                                    bpp__ActorRotation__pf;                                    // 0x0010(0x000C)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
};

// Function MainCharacter.MainCharacter_C.DetachSkydiveParticle
struct AMainCharacter_C_DetachSkydiveParticle_Params
{
};

// Function MainCharacter.MainCharacter_C.DestructibleSpeedGateOverlappedEvent
struct AMainCharacter_C_DestructibleSpeedGateOverlappedEvent_Params
{
	struct FVector                                     bpp__BreakingLocation__pf;                                 // 0x0000(0x000C)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                                     bpp__BreakingDirection__pf;                                // 0x000C(0x000C)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                                     bpp__BreakingNormal__pf;                                   // 0x0018(0x000C)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function MainCharacter.MainCharacter_C.DeathStateChange
struct AMainCharacter_C_DeathStateChange_Params
{
};

// Function MainCharacter.MainCharacter_C.Check Low Health
struct AMainCharacter_C_Check_Low_Health_Params
{
};

// Function MainCharacter.MainCharacter_C.CheckFlashBangOnViewTargetChange
struct AMainCharacter_C_CheckFlashBangOnViewTargetChange_Params
{
};

// Function MainCharacter.MainCharacter_C.Camera Boom Timeline__UpdateFunc
struct AMainCharacter_C_Camera_Boom_Timeline__UpdateFunc_Params
{
};

// Function MainCharacter.MainCharacter_C.Camera Boom Timeline__Switch To Main Camera__EventFunc
struct AMainCharacter_C_Camera_Boom_Timeline__Switch_To_Main_Camera__EventFunc_Params
{
};

// Function MainCharacter.MainCharacter_C.Camera Boom Timeline__Switch To ADS Camera__EventFunc
struct AMainCharacter_C_Camera_Boom_Timeline__Switch_To_ADS_Camera__EventFunc_Params
{
};

// Function MainCharacter.MainCharacter_C.Camera Boom Timeline__FinishedFunc
struct AMainCharacter_C_Camera_Boom_Timeline__FinishedFunc_Params
{
};

// Function MainCharacter.MainCharacter_C.CameraDodgeRoll__UpdateFunc
struct AMainCharacter_C_CameraDodgeRoll__UpdateFunc_Params
{
};

// Function MainCharacter.MainCharacter_C.CameraDodgeRoll__FinishedFunc
struct AMainCharacter_C_CameraDodgeRoll__FinishedFunc_Params
{
};

// Function MainCharacter.MainCharacter_C.CacheRagdollPelvisLocation
struct AMainCharacter_C_CacheRagdollPelvisLocation_Params
{
};

// Function MainCharacter.MainCharacter_C.BlueprintOnStopSwimming
struct AMainCharacter_C_BlueprintOnStopSwimming_Params
{
};

// Function MainCharacter.MainCharacter_C.BlueprintOnStartSwimming
struct AMainCharacter_C_BlueprintOnStartSwimming_Params
{
};

// Function MainCharacter.MainCharacter_C.BlueprintHandleDeath
struct AMainCharacter_C_BlueprintHandleDeath_Params
{
	bool                                               ReturnValue;                                               // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function MainCharacter.MainCharacter_C.BindADSBlurSetting
struct AMainCharacter_C_BindADSBlurSetting_Params
{
};

// Function MainCharacter.MainCharacter_C.Audio_Init
struct AMainCharacter_C_Audio_Init_Params
{
};

// Function MainCharacter.MainCharacter_C.ApplyLastHitImpulse
struct AMainCharacter_C_ApplyLastHitImpulse_Params
{
	bool                                               bpp__UpdateTargetRotation__pf;                             // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bpp__AffectCapsule__pf;                                    // 0x0001(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// DelegateFunction MainCharacter.MainCharacter_C.PlayerReviveDelegate__DelegateSignature
struct AMainCharacter_C_PlayerReviveDelegate__DelegateSignature_Params
{
	class AKSPlayerState*                              bpp__Revivee__pf;                                          // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class AKSPlayerState*                              bpp__Reviver__pf;                                          // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                bpp__ExpBonus__pf;                                         // 0x0010(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// DelegateFunction MainCharacter.MainCharacter_C.PlayerDownInfo__DelegateSignature
struct AMainCharacter_C_PlayerDownInfo__DelegateSignature_Params
{
	struct FCombatEventInfo                            bpp__EventInfo__pf;                                        // 0x0000(0x0060)  (Parm, NativeAccessSpecifierPublic)
	int                                                bpp__ExpBonus__pf;                                         // 0x0060(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// DelegateFunction MainCharacter.MainCharacter_C.PlayerDeathInfo__DelegateSignature
struct AMainCharacter_C_PlayerDeathInfo__DelegateSignature_Params
{
	struct FCombatEventInfo                            bpp__EventInfo__pf;                                        // 0x0000(0x0060)  (Parm, NativeAccessSpecifierPublic)
};

// DelegateFunction MainCharacter.MainCharacter_C.OnSprintChanged__DelegateSignature
struct AMainCharacter_C_OnSprintChanged__DelegateSignature_Params
{
	bool                                               bpp__IsSprinting__pf;                                      // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// DelegateFunction MainCharacter.MainCharacter_C.OnPowerSlideChanged__DelegateSignature
struct AMainCharacter_C_OnPowerSlideChanged__DelegateSignature_Params
{
	bool                                               bpp__IsPowerSliding__pf;                                   // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// DelegateFunction MainCharacter.MainCharacter_C.OnPlayerStateChanged__DelegateSignature
struct AMainCharacter_C_OnPlayerStateChanged__DelegateSignature_Params
{
	class APlayerState*                                bpp__PlayerState__pf;                                      // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// DelegateFunction MainCharacter.MainCharacter_C.OnItemPickedUp__DelegateSignature
struct AMainCharacter_C_OnItemPickedUp__DelegateSignature_Params
{
	class AKSCharacter*                                bpp__Character__pf;                                        // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class AKSItemDrop*                                 bpp__ItemDrop__pf;                                         // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UKSItem*                                     bpp__Item__pf;                                             // 0x0010(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// DelegateFunction MainCharacter.MainCharacter_C.OnHealthChanged__DelegateSignature
struct AMainCharacter_C_OnHealthChanged__DelegateSignature_Params
{
	class AKSCharacterBase*                            bpp__Character__pf;                                        // 0x0000(0x0008)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// DelegateFunction MainCharacter.MainCharacter_C.OnGoDown__DelegateSignature
struct AMainCharacter_C_OnGoDown__DelegateSignature_Params
{
};

// DelegateFunction MainCharacter.MainCharacter_C.OnEndZipline__DelegateSignature
struct AMainCharacter_C_OnEndZipline__DelegateSignature_Params
{
};

// DelegateFunction MainCharacter.MainCharacter_C.OnDodgeRollChanged__DelegateSignature
struct AMainCharacter_C_OnDodgeRollChanged__DelegateSignature_Params
{
	bool                                               bpp__IsDodgeRolling__pf;                                   // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// DelegateFunction MainCharacter.MainCharacter_C.OnDeathStateChanged__DelegateSignature
struct AMainCharacter_C_OnDeathStateChanged__DelegateSignature_Params
{
};

// DelegateFunction MainCharacter.MainCharacter_C.OnBeginZipline__DelegateSignature
struct AMainCharacter_C_OnBeginZipline__DelegateSignature_Params
{
};

// DelegateFunction MainCharacter.MainCharacter_C.OnAnimInitialized__DelegateSignature
struct AMainCharacter_C_OnAnimInitialized__DelegateSignature_Params
{
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
