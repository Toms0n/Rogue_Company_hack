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

// DelegateFunction Master_WeaponComponent.Master_WeaponComponent_C.OnSetShieldActive__DelegateSignature
struct UMaster_WeaponComponent_C_OnSetShieldActive__DelegateSignature_Params
{
	bool                                               bpp__ShieldIsActive__pf;                                   // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// DelegateFunction Master_WeaponComponent.Master_WeaponComponent_C.OnSetScopeScaleAlpha__DelegateSignature
struct UMaster_WeaponComponent_C_OnSetScopeScaleAlpha__DelegateSignature_Params
{
	float                                              bpp__NewxAlpha__pfT;                                       // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// DelegateFunction Master_WeaponComponent.Master_WeaponComponent_C.OnSetRevolverChamberRotate__DelegateSignature
struct UMaster_WeaponComponent_C_OnSetRevolverChamberRotate__DelegateSignature_Params
{
	struct FRotator                                    bpp__NewxRevolverxChamberxRotator__pfTTT;                  // 0x0000(0x000C)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
};

// DelegateFunction Master_WeaponComponent.Master_WeaponComponent_C.OnSetLobbyState__DelegateSignature
struct UMaster_WeaponComponent_C_OnSetLobbyState__DelegateSignature_Params
{
	bool                                               bpp__LobbyxState__pfT;                                     // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Master_WeaponComponent.Master_WeaponComponent_C.Update Tracer Start Point
struct UMaster_WeaponComponent_C_Update_Tracer_Start_Point_Params
{
};

// Function Master_WeaponComponent.Master_WeaponComponent_C.Update Fire Anim on MIrror Pose Changed
struct UMaster_WeaponComponent_C_Update_Fire_Anim_on_MIrror_Pose_Changed_Params
{
};

// Function Master_WeaponComponent.Master_WeaponComponent_C.Update Combat State
struct UMaster_WeaponComponent_C_Update_Combat_State_Params
{
	Killstreak_ECombatState                            bpp__NewState__pf;                                         // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Master_WeaponComponent.Master_WeaponComponent_C.UpdateMagDropBoneVelocity
struct UMaster_WeaponComponent_C_UpdateMagDropBoneVelocity_Params
{
	float                                              bpp__DeltaTime__pf;                                        // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                bpp__Index__pf;                                            // 0x0004(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Master_WeaponComponent.Master_WeaponComponent_C.UpdateAimDownSightsBlurValues
struct UMaster_WeaponComponent_C_UpdateAimDownSightsBlurValues_Params
{
};

// Function Master_WeaponComponent.Master_WeaponComponent_C.TryDisableCameraModifier
struct UMaster_WeaponComponent_C_TryDisableCameraModifier_Params
{
	class UClass*                                      bpp__CameraxModifier__pfT;                                 // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                bpp__PlayerxIndex__pfT;                                    // 0x0008(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bpp__Found__pf;                                            // 0x000C(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Master_WeaponComponent.Master_WeaponComponent_C.SyncComputeCosmeticHits
struct UMaster_WeaponComponent_C_SyncComputeCosmeticHits_Params
{
	struct FFullFireRepData                            bpp__FireData__pf;                                         // 0x0000(0x0068)  (Parm, NativeAccessSpecifierPublic)
	TArray<struct FHitResult>                          bpp__Hits__pf;                                             // 0x0068(0x0010)  (Parm, OutParm, ZeroConstructor, ContainsInstancedReference, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Master_WeaponComponent.Master_WeaponComponent_C.Spawn Tracers Simple
struct UMaster_WeaponComponent_C_Spawn_Tracers_Simple_Params
{
	TArray<struct FHitResult>                          bpp__Hits__pf;                                             // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, ContainsInstancedReference, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                                     bpp__TracexEnd__pfT;                                       // 0x0010(0x000C)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Master_WeaponComponent.Master_WeaponComponent_C.Spawn Tracer
struct UMaster_WeaponComponent_C_Spawn_Tracer_Params
{
	struct FVector                                     bpp__EndPoint__pf;                                         // 0x0000(0x000C)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Master_WeaponComponent.Master_WeaponComponent_C.Spawn Spangs and Decals
struct UMaster_WeaponComponent_C_Spawn_Spangs_and_Decals_Params
{
	struct FFullFireRepData                            bpp__Data__pf__const;                                      // 0x0000(0x0068)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	TArray<struct FHitResult>                          bpp__Hits__pf;                                             // 0x0068(0x0010)  (Parm, OutParm, ZeroConstructor, ContainsInstancedReference, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FFullFireRepData                            bpp__OutxData__pfT;                                        // 0x0078(0x0068)  (Parm, OutParm, NativeAccessSpecifierPublic)
};

// Function Master_WeaponComponent.Master_WeaponComponent_C.SpawnTracers
struct UMaster_WeaponComponent_C_SpawnTracers_Params
{
	TArray<struct FHitResult>                          bpp__Hits__pf;                                             // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, ContainsInstancedReference, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<struct FFullFireRepData>                    bpp__AimData__pf;                                          // 0x0010(0x0010)  (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Master_WeaponComponent.Master_WeaponComponent_C.SpawnSpangs
struct UMaster_WeaponComponent_C_SpawnSpangs_Params
{
	TArray<struct FHitResult>                          bpp__Hits__pf;                                             // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, ContainsInstancedReference, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Master_WeaponComponent.Master_WeaponComponent_C.SpawnDecals
struct UMaster_WeaponComponent_C_SpawnDecals_Params
{
	TArray<struct FHitResult>                          bpp__Hits__pf;                                             // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, ContainsInstancedReference, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Master_WeaponComponent.Master_WeaponComponent_C.ShouldPlayFireAnim1P
struct UMaster_WeaponComponent_C_ShouldPlayFireAnim1P_Params
{
	bool                                               bpp__Playx1PxFire__pfTT;                                   // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Master_WeaponComponent.Master_WeaponComponent_C.Set Scope Scale Alpha
struct UMaster_WeaponComponent_C_Set_Scope_Scale_Alpha_Params
{
	float                                              bpp__NewxAlpha__pfT;                                       // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Master_WeaponComponent.Master_WeaponComponent_C.Set Revolver Chamber Rotate
struct UMaster_WeaponComponent_C_Set_Revolver_Chamber_Rotate_Params
{
	struct FRotator                                    bpp__TargetxRotator__pfT;                                  // 0x0000(0x000C)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	bool                                               bpp__ResetxRotation__pfT;                                  // 0x000C(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Master_WeaponComponent.Master_WeaponComponent_C.Set Muzzle Flash Emitter and Offset
struct UMaster_WeaponComponent_C_Set_Muzzle_Flash_Emitter_and_Offset_Params
{
};

// Function Master_WeaponComponent.Master_WeaponComponent_C.Setup Tracers
struct UMaster_WeaponComponent_C_Setup_Tracers_Params
{
};

// Function Master_WeaponComponent.Master_WeaponComponent_C.Setup Character Mirror Anims
struct UMaster_WeaponComponent_C_Setup_Character_Mirror_Anims_Params
{
};

// Function Master_WeaponComponent.Master_WeaponComponent_C.Setup Character Anim Init Callback
struct UMaster_WeaponComponent_C_Setup_Character_Anim_Init_Callback_Params
{
};

// Function Master_WeaponComponent.Master_WeaponComponent_C.SetupMultiPrimary
struct UMaster_WeaponComponent_C_SetupMultiPrimary_Params
{
};

// Function Master_WeaponComponent.Master_WeaponComponent_C.SetUIWidget
struct UMaster_WeaponComponent_C_SetUIWidget_Params
{
};

// Function Master_WeaponComponent.Master_WeaponComponent_C.Select Weapon Reload Montage
struct UMaster_WeaponComponent_C_Select_Weapon_Reload_Montage_Params
{
	bool                                               bpp__IsxQuickxReload__pfTT;                                // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UAnimMontage*                                ReturnValue;                                               // 0x0008(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Master_WeaponComponent.Master_WeaponComponent_C.Select Character Reload Montage
struct UMaster_WeaponComponent_C_Select_Character_Reload_Montage_Params
{
	class UAnimMontage*                                bpp__ReloadMontage__pf;                                    // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UAnimMontage*                                bpp__QuickReloadMontage__pf;                               // 0x0008(0x0008)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Master_WeaponComponent.Master_WeaponComponent_C.Retrieve Weapon
struct UMaster_WeaponComponent_C_Retrieve_Weapon_Params
{
};

// Function Master_WeaponComponent.Master_WeaponComponent_C.Reticle Rotate
struct UMaster_WeaponComponent_C_Reticle_Rotate_Params
{
};

// Function Master_WeaponComponent.Master_WeaponComponent_C.Reset Variables at Start of Firing Instance
struct UMaster_WeaponComponent_C_Reset_Variables_at_Start_of_Firing_Instance_Params
{
};

// Function Master_WeaponComponent.Master_WeaponComponent_C.Reload Weapon
struct UMaster_WeaponComponent_C_Reload_Weapon_Params
{
};

// Function Master_WeaponComponent.Master_WeaponComponent_C.Reload Cooldown Weapon
struct UMaster_WeaponComponent_C_Reload_Cooldown_Weapon_Params
{
};

// Function Master_WeaponComponent.Master_WeaponComponent_C.ReceiveTick
struct UMaster_WeaponComponent_C_ReceiveTick_Params
{
	float                                              bpp__DeltaSeconds__pf;                                     // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Master_WeaponComponent.Master_WeaponComponent_C.ReceiveEndPlay
struct UMaster_WeaponComponent_C_ReceiveEndPlay_Params
{
	TEnumAsByte<Engine_EEndPlayReason>                 bpp__EndPlayReason__pf;                                    // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Master_WeaponComponent.Master_WeaponComponent_C.ReceiveBeginPlay
struct UMaster_WeaponComponent_C_ReceiveBeginPlay_Params
{
};

// Function Master_WeaponComponent.Master_WeaponComponent_C.Pre Fire Weapon
struct UMaster_WeaponComponent_C_Pre_Fire_Weapon_Params
{
};

// Function Master_WeaponComponent.Master_WeaponComponent_C.Prepare Next Tracer Spawn
struct UMaster_WeaponComponent_C_Prepare_Next_Tracer_Spawn_Params
{
};

// Function Master_WeaponComponent.Master_WeaponComponent_C.Post Fire Weapon
struct UMaster_WeaponComponent_C_Post_Fire_Weapon_Params
{
};

// Function Master_WeaponComponent.Master_WeaponComponent_C.Play Weapon Reload animation
struct UMaster_WeaponComponent_C_Play_Weapon_Reload_animation_Params
{
	float                                              bpp__PlayRate__pf;                                         // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bpp__IsxQuickxReload__pfTT;                                // 0x0004(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Master_WeaponComponent.Master_WeaponComponent_C.Play Reload MultiStage
struct UMaster_WeaponComponent_C_Play_Reload_MultiStage_Params
{
	float                                              bpp__PlayxRate__pfT;                                       // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UAnimMontage*                                bpp__SelectedxMontage__pfT;                                // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Master_WeaponComponent.Master_WeaponComponent_C.Play Reload Logic
struct UMaster_WeaponComponent_C_Play_Reload_Logic_Params
{
	class UAnimMontage*                                bpp__ReloadxMontage__pfT;                                  // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UAnimMontage*                                bpp__QuickReloadxMontage__pfT;                             // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bpp__IsxMultixStagexReloadx__pfTTTzy;                      // 0x0010(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Master_WeaponComponent.Master_WeaponComponent_C.Play Reload Base
struct UMaster_WeaponComponent_C_Play_Reload_Base_Params
{
	float                                              bpp__PlayxRate__pfT;                                       // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UAnimMontage*                                bpp__SelectedxMontage__pfT;                                // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Master_WeaponComponent.Master_WeaponComponent_C.Play Post Reload
struct UMaster_WeaponComponent_C_Play_Post_Reload_Params
{
};

// Function Master_WeaponComponent.Master_WeaponComponent_C.Play Fire Tail Sound
struct UMaster_WeaponComponent_C_Play_Fire_Tail_Sound_Params
{
	AkAudio_EAkCallbackType                            bpp__CallbackxType__pfT;                                   // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UAkCallbackInfo*                             bpp__CallbackxInfo__pfT;                                   // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Master_WeaponComponent.Master_WeaponComponent_C.Play Fire Camera Shakes
struct UMaster_WeaponComponent_C_Play_Fire_Camera_Shakes_Params
{
	bool                                               bpp__LocalOnly__pf;                                        // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UClass*                                      bpp__PrimaryxShake__pfT;                                   // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UClass*                                      bpp__HiFreqxShake__pfT;                                    // 0x0010(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Master_WeaponComponent.Master_WeaponComponent_C.Play Casing Sound
struct UMaster_WeaponComponent_C_Play_Casing_Sound_Params
{
};

// Function Master_WeaponComponent.Master_WeaponComponent_C.Play Bullet Impact SFX
struct UMaster_WeaponComponent_C_Play_Bullet_Impact_SFX_Params
{
	struct FHitResult                                  bpp__HitResult__pf;                                        // 0x0000(0x0088)  (Parm, IsPlainOldData, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPublic)
};

// Function Master_WeaponComponent.Master_WeaponComponent_C.PlayInvalidFireSound
struct UMaster_WeaponComponent_C_PlayInvalidFireSound_Params
{
};

// Function Master_WeaponComponent.Master_WeaponComponent_C.PlayFireSound
struct UMaster_WeaponComponent_C_PlayFireSound_Params
{
	struct FAimData                                    bpp__InputPin__pf__const;                                  // 0x0000(0x0050)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
};

// Function Master_WeaponComponent.Master_WeaponComponent_C.PlayEmptyFireAudio
struct UMaster_WeaponComponent_C_PlayEmptyFireAudio_Params
{
};

// Function Master_WeaponComponent.Master_WeaponComponent_C.On Cosmetic Trace Complete Internal
struct UMaster_WeaponComponent_C_On_Cosmetic_Trace_Complete_Internal_Params
{
	bool                                               bpp__BlockingxHit__pfT__const;                             // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<struct FHitResult>                          bpp__OutxHits__pfT;                                        // 0x0008(0x0010)  (Parm, OutParm, ZeroConstructor, ContainsInstancedReference, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                                     bpp__Start__pf__const;                                     // 0x0018(0x000C)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                                     bpp__End__pf__const;                                       // 0x0024(0x000C)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bpp__AllowxSpangs__pfT;                                    // 0x0030(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bpp__AllowxTracers__pfT;                                   // 0x0031(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bpp__AllowxDecals__pfT;                                    // 0x0032(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Master_WeaponComponent.Master_WeaponComponent_C.On Comestic Trace Complete
struct UMaster_WeaponComponent_C_On_Comestic_Trace_Complete_Params
{
	bool                                               bpp__bBlockingHit__pf;                                     // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<struct FHitResult>                          bpp__OutHits__pf__const;                                   // 0x0008(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, ContainsInstancedReference, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                                     bpp__Start__pf__const;                                     // 0x0018(0x000C)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                                     bpp__End__pf__const;                                       // 0x0024(0x000C)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Master_WeaponComponent.Master_WeaponComponent_C.On Character Anim Initialized
struct UMaster_WeaponComponent_C_On_Character_Anim_Initialized_Params
{
};

// Function Master_WeaponComponent.Master_WeaponComponent_C.OnPossessedBy_Event_1
struct UMaster_WeaponComponent_C_OnPossessedBy_Event_1_Params
{
	class AController*                                 bpp__NewController__pf;                                    // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Master_WeaponComponent.Master_WeaponComponent_C.OnMirrorPoseChanged
struct UMaster_WeaponComponent_C_OnMirrorPoseChanged_Params
{
};

// Function Master_WeaponComponent.Master_WeaponComponent_C.OnKilled_Event_1
struct UMaster_WeaponComponent_C_OnKilled_Event_1_Params
{
	class AKSCharacterFoundation*                      bpp__KillerCharacter__pf__const;                           // 0x0000(0x0008)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class AKSCharacterFoundation*                      bpp__KilledCharacter__pf__const;                           // 0x0008(0x0008)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Master_WeaponComponent.Master_WeaponComponent_C.NotifyStopFireReceived
struct UMaster_WeaponComponent_C_NotifyStopFireReceived_Params
{
};

// Function Master_WeaponComponent.Master_WeaponComponent_C.IsDropMeshValid
struct UMaster_WeaponComponent_C_IsDropMeshValid_Params
{
	int                                                bpp__Index__pf;                                            // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               ReturnValue;                                               // 0x0004(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Master_WeaponComponent.Master_WeaponComponent_C.IdleWeapon
struct UMaster_WeaponComponent_C_IdleWeapon_Params
{
	Killstreak_EWeaponStateNew                         bpp__OldState__pf;                                         // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Master_WeaponComponent.Master_WeaponComponent_C.Holster Weapon
struct UMaster_WeaponComponent_C_Holster_Weapon_Params
{
};

// Function Master_WeaponComponent.Master_WeaponComponent_C.Hide Magazine
struct UMaster_WeaponComponent_C_Hide_Magazine_Params
{
};

// Function Master_WeaponComponent.Master_WeaponComponent_C.HasUIWidget
struct UMaster_WeaponComponent_C_HasUIWidget_Params
{
	bool                                               bpp__HasUIWidget__pf;                                      // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Master_WeaponComponent.Master_WeaponComponent_C.HandleWeaponFiringClientEffects
struct UMaster_WeaponComponent_C_HandleWeaponFiringClientEffects_Params
{
	struct FFullFireRepData                            bpp__Data__pf;                                             // 0x0000(0x0068)  (Parm, NativeAccessSpecifierPublic)
};

// Function Master_WeaponComponent.Master_WeaponComponent_C.Get Tracer Offset
struct UMaster_WeaponComponent_C_Get_Tracer_Offset_Params
{
	float                                              bpp__Offset__pf;                                           // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Master_WeaponComponent.Master_WeaponComponent_C.Get Spang Particle System
struct UMaster_WeaponComponent_C_Get_Spang_Particle_System_Params
{
	struct FHitResult                                  bpp__Hit__pf;                                              // 0x0000(0x0088)  (Parm, IsPlainOldData, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPublic)
	class UParticleSystem*                             bpp__SpangxToxUse__pfTT;                                   // 0x0088(0x0008)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bpp__PlayOnHitCharacter__pf;                               // 0x0090(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Master_WeaponComponent.Master_WeaponComponent_C.Get Scaled Reload Playrate
struct UMaster_WeaponComponent_C_Get_Scaled_Reload_Playrate_Params
{
	class UAnimMontage*                                bpp__AnimxMontage__pfT;                                    // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              bpp__ScaledxPlayrate__pfT;                                 // 0x0008(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Master_WeaponComponent.Master_WeaponComponent_C.Get Scaled Post Reload Playrate
struct UMaster_WeaponComponent_C_Get_Scaled_Post_Reload_Playrate_Params
{
	class UAnimMontage*                                bpp__AnimxMontage__pfT;                                    // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              bpp__ScaledxPlayrate__pfT;                                 // 0x0008(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Master_WeaponComponent.Master_WeaponComponent_C.Get Scaled Multistage Reload Playrate
struct UMaster_WeaponComponent_C_Get_Scaled_Multistage_Reload_Playrate_Params
{
	class UAnimMontage*                                bpp__AnimxMontage__pfT;                                    // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              bpp__ScaledxPlayrate__pfT;                                 // 0x0008(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Master_WeaponComponent.Master_WeaponComponent_C.Get Reticle Material
struct UMaster_WeaponComponent_C_Get_Reticle_Material_Params
{
};

// Function Master_WeaponComponent.Master_WeaponComponent_C.Get Post Reload Weapon Section Time
struct UMaster_WeaponComponent_C_Get_Post_Reload_Weapon_Section_Time_Params
{
	class UAnimMontage*                                bpp__AnimxMontage__pfT;                                    // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              bpp__PostxReloadxPosition__pfTT;                           // 0x0008(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Master_WeaponComponent.Master_WeaponComponent_C.Get Player 3P Lunge Montage
struct UMaster_WeaponComponent_C_Get_Player_3P_Lunge_Montage_Params
{
	class UAnimMontage*                                bpp__Montage__pf;                                          // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Master_WeaponComponent.Master_WeaponComponent_C.Get Player 3P Fire Montage
struct UMaster_WeaponComponent_C_Get_Player_3P_Fire_Montage_Params
{
	class UAnimMontage*                                bpp__Montage__pf;                                          // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Master_WeaponComponent.Master_WeaponComponent_C.Get Player 1P Fire Montage
struct UMaster_WeaponComponent_C_Get_Player_1P_Fire_Montage_Params
{
	class UAnimMontage*                                bpp__Montage__pf;                                          // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Master_WeaponComponent.Master_WeaponComponent_C.Get Holster Visibility
struct UMaster_WeaponComponent_C_Get_Holster_Visibility_Params
{
	bool                                               bpp__Visibility__pf;                                       // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UKSWeaponComponent*                          bpp__WeaponComponent__pf;                                  // 0x0008(0x0008)  (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Master_WeaponComponent.Master_WeaponComponent_C.Get Expected Aim Data
struct UMaster_WeaponComponent_C_Get_Expected_Aim_Data_Params
{
	struct FAimData                                    bpp__AimData__pf;                                          // 0x0000(0x0050)  (Parm, OutParm, NativeAccessSpecifierPublic)
};

// Function Master_WeaponComponent.Master_WeaponComponent_C.Get Decal Material
struct UMaster_WeaponComponent_C_Get_Decal_Material_Params
{
	struct FHitResult                                  bpp__Hit__pf;                                              // 0x0000(0x0088)  (Parm, IsPlainOldData, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPublic)
	struct FHitDecalInfo                               bpp__DecalxInfo__pfT;                                      // 0x0088(0x0028)  (Parm, OutParm, NoDestructor, NativeAccessSpecifierPublic)
};

// Function Master_WeaponComponent.Master_WeaponComponent_C.Get Deattach Slot Name
struct UMaster_WeaponComponent_C_Get_Deattach_Slot_Name_Params
{
	class AKSCharacter*                                bpp__KSCharacter__pf;                                      // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FName                                       bpp__SlotxName__pfT;                                       // 0x0008(0x0008)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Master_WeaponComponent.Master_WeaponComponent_C.Get Character Anim Instance
struct UMaster_WeaponComponent_C_Get_Character_Anim_Instance_Params
{
	class UKSCharacterAnimInst*                        bpp__AnimxInst__pfT;                                       // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Master_WeaponComponent.Master_WeaponComponent_C.Get Character 3p Fire Section
struct UMaster_WeaponComponent_C_Get_Character_3p_Fire_Section_Params
{
	struct FName                                       bpp__3pxFirexSection__pfTT;                                // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Master_WeaponComponent.Master_WeaponComponent_C.Get Character 1p Fire Section
struct UMaster_WeaponComponent_C_Get_Character_1p_Fire_Section_Params
{
	struct FName                                       bpp__1pxFirexSection__pfTT;                                // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Master_WeaponComponent.Master_WeaponComponent_C.Get Attach Slot Name
struct UMaster_WeaponComponent_C_Get_Attach_Slot_Name_Params
{
	class AKSCharacter*                                bpp__KSCharacter__pf;                                      // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FName                                       bpp__SlotxName__pfT;                                       // 0x0008(0x0008)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Master_WeaponComponent.Master_WeaponComponent_C.GetTracerStartPoint
struct UMaster_WeaponComponent_C_GetTracerStartPoint_Params
{
	struct FVector                                     bpp__TracerStartLocation__pf;                              // 0x0000(0x000C)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Master_WeaponComponent.Master_WeaponComponent_C.GetTableRowNameForHit
struct UMaster_WeaponComponent_C_GetTableRowNameForHit_Params
{
	struct FHitResult                                  bpp__Hit__pf;                                              // 0x0000(0x0088)  (Parm, IsPlainOldData, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPublic)
	struct FName                                       bpp__RowNamePrefix__pf;                                    // 0x0088(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FName                                       bpp__RowName__pf;                                          // 0x0090(0x0008)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Master_WeaponComponent.Master_WeaponComponent_C.GetPercentRemainingAmmo
struct UMaster_WeaponComponent_C_GetPercentRemainingAmmo_Params
{
	float                                              bpp__Percent__pf;                                          // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Master_WeaponComponent.Master_WeaponComponent_C.GetMagDropBoneRotation
struct UMaster_WeaponComponent_C_GetMagDropBoneRotation_Params
{
	int                                                bpp__Index__pf;                                            // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FRotator                                    bpp__WorldRotation__pf;                                    // 0x0004(0x000C)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
};

// Function Master_WeaponComponent.Master_WeaponComponent_C.GetMagDropBoneLocation
struct UMaster_WeaponComponent_C_GetMagDropBoneLocation_Params
{
	int                                                bpp__Index__pf;                                            // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                                     bpp__WorldLocation__pf;                                    // 0x0004(0x000C)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Master_WeaponComponent.Master_WeaponComponent_C.GetMagazineDropBoneName
struct UMaster_WeaponComponent_C_GetMagazineDropBoneName_Params
{
	struct FName                                       bpp__Name__pf;                                             // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Master_WeaponComponent.Master_WeaponComponent_C.GetFirstShotAudioEvent
struct UMaster_WeaponComponent_C_GetFirstShotAudioEvent_Params
{
	class UAkAudioEvent*                               ReturnValue;                                               // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Master_WeaponComponent.Master_WeaponComponent_C.GetFireAudioEvent
struct UMaster_WeaponComponent_C_GetFireAudioEvent_Params
{
	class UAkAudioEvent*                               ReturnValue;                                               // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Master_WeaponComponent.Master_WeaponComponent_C.GetEchoAudioEvent
struct UMaster_WeaponComponent_C_GetEchoAudioEvent_Params
{
	class UAkAudioEvent*                               ReturnValue;                                               // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Master_WeaponComponent.Master_WeaponComponent_C.GetDropVelocity
struct UMaster_WeaponComponent_C_GetDropVelocity_Params
{
	int                                                bpp__Index__pf;                                            // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                                     bpp__WorldVelocity__pf;                                    // 0x0004(0x000C)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Master_WeaponComponent.Master_WeaponComponent_C.GetDropMesh
struct UMaster_WeaponComponent_C_GetDropMesh_Params
{
	int                                                bpp__Index__pf;                                            // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class USkeletalMesh*                               bpp__SkelMesh__pf;                                         // 0x0008(0x0008)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UStaticMesh*                                 bpp__StaticMesh__pf;                                       // 0x0010(0x0008)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Master_WeaponComponent.Master_WeaponComponent_C.Force Exit ADS Pose
struct UMaster_WeaponComponent_C_Force_Exit_ADS_Pose_Params
{
};

// Function Master_WeaponComponent.Master_WeaponComponent_C.Force ADS Scope
struct UMaster_WeaponComponent_C_Force_ADS_Scope_Params
{
};

// Function Master_WeaponComponent.Master_WeaponComponent_C.ForceRetrieveWeapon
struct UMaster_WeaponComponent_C_ForceRetrieveWeapon_Params
{
};

// Function Master_WeaponComponent.Master_WeaponComponent_C.ForceRetrieveState
struct UMaster_WeaponComponent_C_ForceRetrieveState_Params
{
};

// Function Master_WeaponComponent.Master_WeaponComponent_C.ForceHolsterWeapon
struct UMaster_WeaponComponent_C_ForceHolsterWeapon_Params
{
};

// Function Master_WeaponComponent.Master_WeaponComponent_C.ForceAttachWeaponToHolsterSocket
struct UMaster_WeaponComponent_C_ForceAttachWeaponToHolsterSocket_Params
{
};

// Function Master_WeaponComponent.Master_WeaponComponent_C.ForceAttachWeaponToActiveSocket
struct UMaster_WeaponComponent_C_ForceAttachWeaponToActiveSocket_Params
{
};

// Function Master_WeaponComponent.Master_WeaponComponent_C.Fixup Laser Sight
struct UMaster_WeaponComponent_C_Fixup_Laser_Sight_Params
{
	class USkinnableSkeletalMeshComponent*             bpp__MeshComponent__pf;                                    // 0x0000(0x0008)  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Master_WeaponComponent.Master_WeaponComponent_C.Fixup Attach Point
struct UMaster_WeaponComponent_C_Fixup_Attach_Point_Params
{
};

// Function Master_WeaponComponent.Master_WeaponComponent_C.Fire Weapon
struct UMaster_WeaponComponent_C_Fire_Weapon_Params
{
	struct FFullFireRepData                            bpp__Data__pf;                                             // 0x0000(0x0068)  (Parm, NativeAccessSpecifierPublic)
	bool                                               bpp__PlayNoChainFireMontage__pf;                           // 0x0068(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Master_WeaponComponent.Master_WeaponComponent_C.Fire Montage Jump To Section
struct UMaster_WeaponComponent_C_Fire_Montage_Jump_To_Section_Params
{
	struct FString                                     bpp__Section__pf__const;                                   // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Master_WeaponComponent.Master_WeaponComponent_C.Filter Cosmetic Hit Results
struct UMaster_WeaponComponent_C_Filter_Cosmetic_Hit_Results_Params
{
	TArray<struct FHitResult>                          bpp__TracexHitxResults__pfTT;                              // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, ContainsInstancedReference, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<struct FHitResult>                          bpp__FilteredxHitxResults__pfTT;                           // 0x0010(0x0010)  (Parm, OutParm, ZeroConstructor, ContainsInstancedReference, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Master_WeaponComponent.Master_WeaponComponent_C.ExecuteUbergraph_Master_WeaponComponent_6
struct UMaster_WeaponComponent_C_ExecuteUbergraph_Master_WeaponComponent_6_Params
{
	int                                                bpp__EntryPoint__pf;                                       // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Master_WeaponComponent.Master_WeaponComponent_C.ExecuteUbergraph_Master_WeaponComponent_43
struct UMaster_WeaponComponent_C_ExecuteUbergraph_Master_WeaponComponent_43_Params
{
	int                                                bpp__EntryPoint__pf;                                       // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Master_WeaponComponent.Master_WeaponComponent_C.ExecuteUbergraph_Master_WeaponComponent_41
struct UMaster_WeaponComponent_C_ExecuteUbergraph_Master_WeaponComponent_41_Params
{
	int                                                bpp__EntryPoint__pf;                                       // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Master_WeaponComponent.Master_WeaponComponent_C.ExecuteUbergraph_Master_WeaponComponent_39
struct UMaster_WeaponComponent_C_ExecuteUbergraph_Master_WeaponComponent_39_Params
{
	int                                                bpp__EntryPoint__pf;                                       // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Master_WeaponComponent.Master_WeaponComponent_C.ExecuteUbergraph_Master_WeaponComponent_35
struct UMaster_WeaponComponent_C_ExecuteUbergraph_Master_WeaponComponent_35_Params
{
	int                                                bpp__EntryPoint__pf;                                       // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Master_WeaponComponent.Master_WeaponComponent_C.ExecuteUbergraph_Master_WeaponComponent_4
struct UMaster_WeaponComponent_C_ExecuteUbergraph_Master_WeaponComponent_4_Params
{
	int                                                bpp__EntryPoint__pf;                                       // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Master_WeaponComponent.Master_WeaponComponent_C.ExecuteUbergraph_Master_WeaponComponent_1
struct UMaster_WeaponComponent_C_ExecuteUbergraph_Master_WeaponComponent_1_Params
{
	int                                                bpp__EntryPoint__pf;                                       // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Master_WeaponComponent.Master_WeaponComponent_C.Evaluate Shield Mesh Anim State
struct UMaster_WeaponComponent_C_Evaluate_Shield_Mesh_Anim_State_Params
{
	bool                                               bpp__ShieldxState__pfT;                                    // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Master_WeaponComponent.Master_WeaponComponent_C.Evaluate Revolver Chamber Rotate
struct UMaster_WeaponComponent_C_Evaluate_Revolver_Chamber_Rotate_Params
{
};

// Function Master_WeaponComponent.Master_WeaponComponent_C.End Reload Weapon
struct UMaster_WeaponComponent_C_End_Reload_Weapon_Params
{
	bool                                               bpp__AbortxReloadxAnimation__pfTT;                         // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bpp__CancelledxAxReload__pfTT;                             // 0x0001(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Master_WeaponComponent.Master_WeaponComponent_C.EnableOrAddCameraModifier
struct UMaster_WeaponComponent_C_EnableOrAddCameraModifier_Params
{
	class UClass*                                      bpp__Modifier__pf;                                         // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                bpp__PlayerIndex__pf;                                      // 0x0008(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UCameraModifier*                             bpp__ModifierxObject__pfT;                                 // 0x0010(0x0008)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Master_WeaponComponent.Master_WeaponComponent_C.DropMagInternal
struct UMaster_WeaponComponent_C_DropMagInternal_Params
{
	int                                                bpp__Index__pf;                                            // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Master_WeaponComponent.Master_WeaponComponent_C.DropMagazine
struct UMaster_WeaponComponent_C_DropMagazine_Params
{
};

// Function Master_WeaponComponent.Master_WeaponComponent_C.DetermineMagSize
struct UMaster_WeaponComponent_C_DetermineMagSize_Params
{
};

// Function Master_WeaponComponent.Master_WeaponComponent_C.Delay Spawn Tracers
struct UMaster_WeaponComponent_C_Delay_Spawn_Tracers_Params
{
	TArray<struct FHitResult>                          bpp__Hits__pf__const;                                      // 0x0000(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, ContainsInstancedReference, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                                     bpp__TracexEnd__pfT__const;                                // 0x0010(0x000C)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Master_WeaponComponent.Master_WeaponComponent_C.Delay Spawn Spangs
struct UMaster_WeaponComponent_C_Delay_Spawn_Spangs_Params
{
	TArray<struct FHitResult>                          bpp__Hits__pf;                                             // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, ContainsInstancedReference, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Master_WeaponComponent.Master_WeaponComponent_C.Delay Spawn Decals
struct UMaster_WeaponComponent_C_Delay_Spawn_Decals_Params
{
	TArray<struct FHitResult>                          bpp__Hits__pf__const;                                      // 0x0000(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, ContainsInstancedReference, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                                     bpp__Start__pf;                                            // 0x0010(0x000C)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                                     bpp__End__pf;                                              // 0x001C(0x000C)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Master_WeaponComponent.Master_WeaponComponent_C.CheckKillCamScope
struct UMaster_WeaponComponent_C_CheckKillCamScope_Params
{
	class APawn*                                       bpp__ViewPawn__pf;                                         // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Master_WeaponComponent.Master_WeaponComponent_C.Character Combat State Changed
struct UMaster_WeaponComponent_C_Character_Combat_State_Changed_Params
{
	Killstreak_ECombatState                            bpp__OldCombatState__pf;                                   // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	Killstreak_ECombatState                            bpp__NewCombatState__pf;                                   // 0x0001(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Master_WeaponComponent.Master_WeaponComponent_C.Can Spawn Tracer Now
struct UMaster_WeaponComponent_C_Can_Spawn_Tracer_Now_Params
{
	bool                                               bpp__CanxSpawnxxTracer__pfTTT;                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Master_WeaponComponent.Master_WeaponComponent_C.CancelReloadCosmetic
struct UMaster_WeaponComponent_C_CancelReloadCosmetic_Params
{
};

// Function Master_WeaponComponent.Master_WeaponComponent_C.Calculate Reload Time
struct UMaster_WeaponComponent_C_Calculate_Reload_Time_Params
{
	class UAnimMontage*                                bpp__ReloadxMontage__pfT;                                  // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UAnimMontage*                                bpp__QuickxReloadxMontage__pfTT;                           // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              bpp__PlayRate__pf;                                         // 0x0010(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UAnimMontage*                                bpp__SelectedxMontage__pfT;                                // 0x0018(0x0008)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bpp__IsxQuickReload__pfT;                                  // 0x0020(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Master_WeaponComponent.Master_WeaponComponent_C.Calculate Multistage Reload Time
struct UMaster_WeaponComponent_C_Calculate_Multistage_Reload_Time_Params
{
	class UAnimMontage*                                bpp__ReloadxMontage__pfT;                                  // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UAnimMontage*                                bpp__QuickxReloadxMontage__pfTT;                           // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              bpp__PlayRate__pf;                                         // 0x0010(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UAnimMontage*                                bpp__SelectedxMontage__pfT;                                // 0x0018(0x0008)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bpp__IsxQuickReload__pfT;                                  // 0x0020(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Master_WeaponComponent.Master_WeaponComponent_C.BuildupWeapon
struct UMaster_WeaponComponent_C_BuildupWeapon_Params
{
};

// Function Master_WeaponComponent.Master_WeaponComponent_C.BlueprintPrepareKillCamPlayback
struct UMaster_WeaponComponent_C_BlueprintPrepareKillCamPlayback_Params
{
};

// Function Master_WeaponComponent.Master_WeaponComponent_C.BlueprintPersistentCosmeticsUpdate
struct UMaster_WeaponComponent_C_BlueprintPersistentCosmeticsUpdate_Params
{
};

// Function Master_WeaponComponent.Master_WeaponComponent_C.AudioOnCooldown
struct UMaster_WeaponComponent_C_AudioOnCooldown_Params
{
};

// Function Master_WeaponComponent.Master_WeaponComponent_C.Attach Weapon To Holster Socket
struct UMaster_WeaponComponent_C_Attach_Weapon_To_Holster_Socket_Params
{
};

// Function Master_WeaponComponent.Master_WeaponComponent_C.Attach Weapon To Active Socket
struct UMaster_WeaponComponent_C_Attach_Weapon_To_Active_Socket_Params
{
};

// Function Master_WeaponComponent.Master_WeaponComponent_C.AsyncComputeCosmeticHitsAndPlay
struct UMaster_WeaponComponent_C_AsyncComputeCosmeticHitsAndPlay_Params
{
	struct FFullFireRepData                            bpp__FirexData__pfT__const;                                // 0x0000(0x0068)  (ConstParm, Parm, NativeAccessSpecifierPublic)
};

// Function Master_WeaponComponent.Master_WeaponComponent_C.Apply Spang From Hit Result
struct UMaster_WeaponComponent_C_Apply_Spang_From_Hit_Result_Params
{
	struct FHitResult                                  bpp__Hit__pf;                                              // 0x0000(0x0088)  (Parm, IsPlainOldData, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPublic)
};

// Function Master_WeaponComponent.Master_WeaponComponent_C.ApplyDecalFromHit
struct UMaster_WeaponComponent_C_ApplyDecalFromHit_Params
{
	struct FHitResult                                  bpp__Hit__pf;                                              // 0x0000(0x0088)  (Parm, IsPlainOldData, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPublic)
};

// Function Master_WeaponComponent.Master_WeaponComponent_C.Anim Init Set Weapon State
struct UMaster_WeaponComponent_C_Anim_Init_Set_Weapon_State_Params
{
	class UKSWeaponAnimInstance*                       bpp__KSxWeaponxAnimxInst__pfTTT;                           // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Master_WeaponComponent.Master_WeaponComponent_C.Anim Init Set Use Weapon Additive
struct UMaster_WeaponComponent_C_Anim_Init_Set_Use_Weapon_Additive_Params
{
	class UKSWeaponAnimInstance*                       bpp__KSxWeaponxAnimxInst__pfTTT;                           // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Master_WeaponComponent.Master_WeaponComponent_C.Anim Init Set Shield Is Active
struct UMaster_WeaponComponent_C_Anim_Init_Set_Shield_Is_Active_Params
{
	class UKSWeaponAnimInstance*                       bpp__KSxWeaponxAnimxInst__pfTTT;                           // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Master_WeaponComponent.Master_WeaponComponent_C.Anim Init Set Scope Mesh Scale
struct UMaster_WeaponComponent_C_Anim_Init_Set_Scope_Mesh_Scale_Params
{
	class UKSWeaponAnimInstance*                       bpp__KSxWeaponxAnimxInst__pfTTT;                           // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Master_WeaponComponent.Master_WeaponComponent_C.Anim Init Set Lobby State
struct UMaster_WeaponComponent_C_Anim_Init_Set_Lobby_State_Params
{
	class UKSWeaponAnimInstance*                       bpp__KSxWeaponxAnimxInst__pfTTT;                           // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UAnimInstance*                               bpp__BackupxAnimxInst__pfTT;                               // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Master_WeaponComponent.Master_WeaponComponent_C.Anim Init Set Hide Magazine
struct UMaster_WeaponComponent_C_Anim_Init_Set_Hide_Magazine_Params
{
	class UKSWeaponAnimInstance*                       bpp__KSxWeaponxAnimxInst__pfTTT;                           // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Master_WeaponComponent.Master_WeaponComponent_C.Anim Init Set Folding Stock
struct UMaster_WeaponComponent_C_Anim_Init_Set_Folding_Stock_Params
{
	class UKSWeaponAnimInstance*                       bpp__KSxWeaponxAnimxInst__pfTTT;                           // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Master_WeaponComponent.Master_WeaponComponent_C.Anim Init Set Disable Alternate Mirroring (Temp)
struct UMaster_WeaponComponent_C_Anim_Init_Set_Disable_Alternate_Mirroring__Temp__Params
{
	class UKSWeaponAnimInstance*                       bpp__KSxWeaponxAnimxInst__pfTTT;                           // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Master_WeaponComponent.Master_WeaponComponent_C.Anim Init On Weapon Mesh
struct UMaster_WeaponComponent_C_Anim_Init_On_Weapon_Mesh_Params
{
	class USkinnableSkeletalMeshComponent*             bpp__SkelComp__pf;                                         // 0x0000(0x0008)  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UAnimInstance*                               bpp__AnimInstance__pf;                                     // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Master_WeaponComponent.Master_WeaponComponent_C.Ancillary Mesh Scale Set
struct UMaster_WeaponComponent_C_Ancillary_Mesh_Scale_Set_Params
{
};

// Function Master_WeaponComponent.Master_WeaponComponent_C.Aim Over Shoulder Check Point
struct UMaster_WeaponComponent_C_Aim_Over_Shoulder_Check_Point_Params
{
};

// Function Master_WeaponComponent.Master_WeaponComponent_C.After Spawn Tracers Delay
struct UMaster_WeaponComponent_C_After_Spawn_Tracers_Delay_Params
{
	bool                                               bpp__bBlockingHit__pf;                                     // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<struct FHitResult>                          bpp__OutHits__pf__const;                                   // 0x0008(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, ContainsInstancedReference, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                                     bpp__Start__pf__const;                                     // 0x0018(0x000C)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                                     bpp__End__pf__const;                                       // 0x0024(0x000C)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Master_WeaponComponent.Master_WeaponComponent_C.After Spawn Spangs Delay
struct UMaster_WeaponComponent_C_After_Spawn_Spangs_Delay_Params
{
	bool                                               bpp__bBlockingHit__pf;                                     // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<struct FHitResult>                          bpp__OutHits__pf__const;                                   // 0x0008(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, ContainsInstancedReference, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                                     bpp__Start__pf__const;                                     // 0x0018(0x000C)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                                     bpp__End__pf__const;                                       // 0x0024(0x000C)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Master_WeaponComponent.Master_WeaponComponent_C.After Spawn Decals Delay
struct UMaster_WeaponComponent_C_After_Spawn_Decals_Delay_Params
{
	bool                                               bpp__bBlockingHit__pf;                                     // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<struct FHitResult>                          bpp__OutHits__pf__const;                                   // 0x0008(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, ContainsInstancedReference, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                                     bpp__Start__pf__const;                                     // 0x0018(0x000C)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                                     bpp__End__pf__const;                                       // 0x0024(0x000C)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// DelegateFunction Master_WeaponComponent.Master_WeaponComponent_C.OnWeaponComponentStateChanged__DelegateSignature
struct UMaster_WeaponComponent_C_OnWeaponComponentStateChanged__DelegateSignature_Params
{
	class UKSWeaponComponent*                          bpp__WeaponComponent__pf;                                  // 0x0000(0x0008)  (ConstParm, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	Killstreak_EWeaponStateNew                         bpp__OldState__pf;                                         // 0x0008(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	Killstreak_EWeaponStateNew                         bpp__NewState__pf;                                         // 0x0009(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// DelegateFunction Master_WeaponComponent.Master_WeaponComponent_C.OnPossessedBy__DelegateSignature
struct UMaster_WeaponComponent_C_OnPossessedBy__DelegateSignature_Params
{
	class AController*                                 bpp__NewController__pf;                                    // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// DelegateFunction Master_WeaponComponent.Master_WeaponComponent_C.OnCombatStateChanged__DelegateSignature
struct UMaster_WeaponComponent_C_OnCombatStateChanged__DelegateSignature_Params
{
	Killstreak_ECombatState                            bpp__OldCombatState__pf;                                   // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	Killstreak_ECombatState                            bpp__NewCombatState__pf;                                   // 0x0001(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// DelegateFunction Master_WeaponComponent.Master_WeaponComponent_C.OnCharacterFoundationKilled__DelegateSignature
struct UMaster_WeaponComponent_C_OnCharacterFoundationKilled__DelegateSignature_Params
{
	class AKSCharacterFoundation*                      bpp__KillerCharacter__pf;                                  // 0x0000(0x0008)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class AKSCharacterFoundation*                      bpp__KilledCharacter__pf;                                  // 0x0008(0x0008)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// DelegateFunction Master_WeaponComponent.Master_WeaponComponent_C.OnAnimInitializedOnSkinnableMesh__DelegateSignature
struct UMaster_WeaponComponent_C_OnAnimInitializedOnSkinnableMesh__DelegateSignature_Params
{
	class USkinnableSkeletalMeshComponent*             bpp__SkinnableSkelComp__pf;                                // 0x0000(0x0008)  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UAnimInstance*                               bpp__AnimInstance__pf;                                     // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// DelegateFunction Master_WeaponComponent.Master_WeaponComponent_C.OnAnimInitialized__DelegateSignature
struct UMaster_WeaponComponent_C_OnAnimInitialized__DelegateSignature_Params
{
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
