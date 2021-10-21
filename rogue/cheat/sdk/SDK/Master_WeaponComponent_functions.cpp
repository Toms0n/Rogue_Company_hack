// Name: roguecompany, Version: 425

#include "../pch.h"

/*!!DEFINE!!*/

/*!!HELPER_DEF!!*/

/*!!HELPER_INC!!*/

#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

namespace CG
{
//---------------------------------------------------------------------------
// Functions
//---------------------------------------------------------------------------

// Function:
//		Offset -> 0x024D5B40
//		Name   -> DelegateFunction Master_WeaponComponent.Master_WeaponComponent_C.OnSetShieldActive__DelegateSignature
//		Flags  -> (Public, Delegate)
// Parameters:
//		bool                                               bpp__ShieldIsActive__pf                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UMaster_WeaponComponent_C::OnSetShieldActive__DelegateSignature(bool bpp__ShieldIsActive__pf)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(29100);

	UMaster_WeaponComponent_C_OnSetShieldActive__DelegateSignature_Params params {};
	params.bpp__ShieldIsActive__pf = bpp__ShieldIsActive__pf;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> DelegateFunction Master_WeaponComponent.Master_WeaponComponent_C.OnSetScopeScaleAlpha__DelegateSignature
//		Flags  -> (Public, Delegate)
// Parameters:
//		float                                              bpp__NewxAlpha__pfT                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UMaster_WeaponComponent_C::OnSetScopeScaleAlpha__DelegateSignature(float bpp__NewxAlpha__pfT)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(29099);

	UMaster_WeaponComponent_C_OnSetScopeScaleAlpha__DelegateSignature_Params params {};
	params.bpp__NewxAlpha__pfT = bpp__NewxAlpha__pfT;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> DelegateFunction Master_WeaponComponent.Master_WeaponComponent_C.OnSetRevolverChamberRotate__DelegateSignature
//		Flags  -> (Public, Delegate, HasDefaults)
// Parameters:
//		struct FRotator                                    bpp__NewxRevolverxChamberxRotator__pfTTT                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
void UMaster_WeaponComponent_C::OnSetRevolverChamberRotate__DelegateSignature(const struct FRotator& bpp__NewxRevolverxChamberxRotator__pfTTT)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(29098);

	UMaster_WeaponComponent_C_OnSetRevolverChamberRotate__DelegateSignature_Params params {};
	params.bpp__NewxRevolverxChamberxRotator__pfTTT = bpp__NewxRevolverxChamberxRotator__pfTTT;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> DelegateFunction Master_WeaponComponent.Master_WeaponComponent_C.OnSetLobbyState__DelegateSignature
//		Flags  -> (Public, Delegate)
// Parameters:
//		bool                                               bpp__LobbyxState__pfT                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UMaster_WeaponComponent_C::OnSetLobbyState__DelegateSignature(bool bpp__LobbyxState__pfT)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(29097);

	UMaster_WeaponComponent_C_OnSetLobbyState__DelegateSignature_Params params {};
	params.bpp__LobbyxState__pfT = bpp__LobbyxState__pfT;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x0184A7D0
//		Name   -> Function Master_WeaponComponent.Master_WeaponComponent_C.Update Tracer Start Point
//		Flags  -> (Native, Public, BlueprintCallable)
void UMaster_WeaponComponent_C::Update_Tracer_Start_Point()
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(29096);

	UMaster_WeaponComponent_C_Update_Tracer_Start_Point_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x0184A7B0
//		Name   -> Function Master_WeaponComponent.Master_WeaponComponent_C.Update Fire Anim on MIrror Pose Changed
//		Flags  -> (Native, Public, BlueprintCallable)
void UMaster_WeaponComponent_C::Update_Fire_Anim_on_MIrror_Pose_Changed()
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(29095);

	UMaster_WeaponComponent_C_Update_Fire_Anim_on_MIrror_Pose_Changed_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x009F2F90
//		Name   -> Function Master_WeaponComponent.Master_WeaponComponent_C.Update Combat State
//		Flags  -> (Native, Public, BlueprintCallable)
// Parameters:
//		Killstreak_ECombatState                            bpp__NewState__pf                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UMaster_WeaponComponent_C::Update_Combat_State(Killstreak_ECombatState bpp__NewState__pf)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(29094);

	UMaster_WeaponComponent_C_Update_Combat_State_Params params {};
	params.bpp__NewState__pf = bpp__NewState__pf;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x0184A6E0
//		Name   -> Function Master_WeaponComponent.Master_WeaponComponent_C.UpdateMagDropBoneVelocity
//		Flags  -> (Native, Public, BlueprintCallable)
// Parameters:
//		float                                              bpp__DeltaTime__pf                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		int                                                bpp__Index__pf                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UMaster_WeaponComponent_C::UpdateMagDropBoneVelocity(float bpp__DeltaTime__pf, int bpp__Index__pf)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(29093);

	UMaster_WeaponComponent_C_UpdateMagDropBoneVelocity_Params params {};
	params.bpp__DeltaTime__pf = bpp__DeltaTime__pf;
	params.bpp__Index__pf = bpp__Index__pf;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x0184A6C0
//		Name   -> Function Master_WeaponComponent.Master_WeaponComponent_C.UpdateAimDownSightsBlurValues
//		Flags  -> (Native, Event, Public, BlueprintCallable)
void UMaster_WeaponComponent_C::UpdateAimDownSightsBlurValues()
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(29092);

	UMaster_WeaponComponent_C_UpdateAimDownSightsBlurValues_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x0184A5B0
//		Name   -> Function Master_WeaponComponent.Master_WeaponComponent_C.TryDisableCameraModifier
//		Flags  -> (Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
//		class UClass*                                      bpp__CameraxModifier__pfT                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		int                                                bpp__PlayerxIndex__pfT                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		bool                                               bpp__Found__pf                                             (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UMaster_WeaponComponent_C::TryDisableCameraModifier(class UClass* bpp__CameraxModifier__pfT, int bpp__PlayerxIndex__pfT, bool* bpp__Found__pf)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(29091);

	UMaster_WeaponComponent_C_TryDisableCameraModifier_Params params {};
	params.bpp__CameraxModifier__pfT = bpp__CameraxModifier__pfT;
	params.bpp__PlayerxIndex__pfT = bpp__PlayerxIndex__pfT;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (bpp__Found__pf != nullptr)
		*bpp__Found__pf = params.bpp__Found__pf;

}


// Function:
//		Offset -> 0x0184A480
//		Name   -> Function Master_WeaponComponent.Master_WeaponComponent_C.SyncComputeCosmeticHits
//		Flags  -> (Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
//		struct FFullFireRepData                            bpp__FireData__pf                                          (Parm, NativeAccessSpecifierPublic)
//		TArray<struct FHitResult>                          bpp__Hits__pf                                              (Parm, OutParm, ZeroConstructor, ContainsInstancedReference, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UMaster_WeaponComponent_C::SyncComputeCosmeticHits(const struct FFullFireRepData& bpp__FireData__pf, TArray<struct FHitResult>* bpp__Hits__pf)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(29090);

	UMaster_WeaponComponent_C_SyncComputeCosmeticHits_Params params {};
	params.bpp__FireData__pf = bpp__FireData__pf;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (bpp__Hits__pf != nullptr)
		*bpp__Hits__pf = params.bpp__Hits__pf;

}


// Function:
//		Offset -> 0x0184A370
//		Name   -> Function Master_WeaponComponent.Master_WeaponComponent_C.Spawn Tracers Simple
//		Flags  -> (Native, Public, HasOutParms, HasDefaults, BlueprintCallable)
// Parameters:
//		TArray<struct FHitResult>                          bpp__Hits__pf                                              (Parm, OutParm, ZeroConstructor, ContainsInstancedReference, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		struct FVector                                     bpp__TracexEnd__pfT                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UMaster_WeaponComponent_C::Spawn_Tracers_Simple(TArray<struct FHitResult>* bpp__Hits__pf, const struct FVector& bpp__TracexEnd__pfT)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(29089);

	UMaster_WeaponComponent_C_Spawn_Tracers_Simple_Params params {};
	params.bpp__TracexEnd__pfT = bpp__TracexEnd__pfT;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (bpp__Hits__pf != nullptr)
		*bpp__Hits__pf = params.bpp__Hits__pf;

}


// Function:
//		Offset -> 0x0184A2E0
//		Name   -> Function Master_WeaponComponent.Master_WeaponComponent_C.Spawn Tracer
//		Flags  -> (Native, Public, HasDefaults, BlueprintCallable)
// Parameters:
//		struct FVector                                     bpp__EndPoint__pf                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UMaster_WeaponComponent_C::Spawn_Tracer(const struct FVector& bpp__EndPoint__pf)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(29088);

	UMaster_WeaponComponent_C_Spawn_Tracer_Params params {};
	params.bpp__EndPoint__pf = bpp__EndPoint__pf;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x0184A140
//		Name   -> Function Master_WeaponComponent.Master_WeaponComponent_C.Spawn Spangs and Decals
//		Flags  -> (Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
//		struct FFullFireRepData                            bpp__Data__pf__const                                       (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
//		TArray<struct FHitResult>                          bpp__Hits__pf                                              (Parm, OutParm, ZeroConstructor, ContainsInstancedReference, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		struct FFullFireRepData                            bpp__OutxData__pfT                                         (Parm, OutParm, NativeAccessSpecifierPublic)
void UMaster_WeaponComponent_C::Spawn_Spangs_and_Decals(const struct FFullFireRepData& bpp__Data__pf__const, TArray<struct FHitResult>* bpp__Hits__pf, struct FFullFireRepData* bpp__OutxData__pfT)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(29087);

	UMaster_WeaponComponent_C_Spawn_Spangs_and_Decals_Params params {};
	params.bpp__Data__pf__const = bpp__Data__pf__const;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (bpp__Hits__pf != nullptr)
		*bpp__Hits__pf = params.bpp__Hits__pf;
	if (bpp__OutxData__pfT != nullptr)
		*bpp__OutxData__pfT = params.bpp__OutxData__pfT;

}


// Function:
//		Offset -> 0x0184A000
//		Name   -> Function Master_WeaponComponent.Master_WeaponComponent_C.SpawnTracers
//		Flags  -> (Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
//		TArray<struct FHitResult>                          bpp__Hits__pf                                              (Parm, OutParm, ZeroConstructor, ContainsInstancedReference, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		TArray<struct FFullFireRepData>                    bpp__AimData__pf                                           (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UMaster_WeaponComponent_C::SpawnTracers(TArray<struct FHitResult>* bpp__Hits__pf, TArray<struct FFullFireRepData>* bpp__AimData__pf)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(29086);

	UMaster_WeaponComponent_C_SpawnTracers_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (bpp__Hits__pf != nullptr)
		*bpp__Hits__pf = params.bpp__Hits__pf;
	if (bpp__AimData__pf != nullptr)
		*bpp__AimData__pf = params.bpp__AimData__pf;

}


// Function:
//		Offset -> 0x01849F50
//		Name   -> Function Master_WeaponComponent.Master_WeaponComponent_C.SpawnSpangs
//		Flags  -> (Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
//		TArray<struct FHitResult>                          bpp__Hits__pf                                              (Parm, OutParm, ZeroConstructor, ContainsInstancedReference, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UMaster_WeaponComponent_C::SpawnSpangs(TArray<struct FHitResult>* bpp__Hits__pf)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(29085);

	UMaster_WeaponComponent_C_SpawnSpangs_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (bpp__Hits__pf != nullptr)
		*bpp__Hits__pf = params.bpp__Hits__pf;

}


// Function:
//		Offset -> 0x01849EA0
//		Name   -> Function Master_WeaponComponent.Master_WeaponComponent_C.SpawnDecals
//		Flags  -> (Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
//		TArray<struct FHitResult>                          bpp__Hits__pf                                              (Parm, OutParm, ZeroConstructor, ContainsInstancedReference, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UMaster_WeaponComponent_C::SpawnDecals(TArray<struct FHitResult>* bpp__Hits__pf)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(29084);

	UMaster_WeaponComponent_C_SpawnDecals_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (bpp__Hits__pf != nullptr)
		*bpp__Hits__pf = params.bpp__Hits__pf;

}


// Function:
//		Offset -> 0x01849DE0
//		Name   -> Function Master_WeaponComponent.Master_WeaponComponent_C.ShouldPlayFireAnim1P
//		Flags  -> (Native, Public, HasOutParms, BlueprintCallable, BlueprintPure)
// Parameters:
//		bool                                               bpp__Playx1PxFire__pfTT                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UMaster_WeaponComponent_C::ShouldPlayFireAnim1P(bool* bpp__Playx1PxFire__pfTT)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(29083);

	UMaster_WeaponComponent_C_ShouldPlayFireAnim1P_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (bpp__Playx1PxFire__pfTT != nullptr)
		*bpp__Playx1PxFire__pfTT = params.bpp__Playx1PxFire__pfTT;

}


// Function:
//		Offset -> 0x01849D60
//		Name   -> Function Master_WeaponComponent.Master_WeaponComponent_C.Set Scope Scale Alpha
//		Flags  -> (Native, Public, BlueprintCallable)
// Parameters:
//		float                                              bpp__NewxAlpha__pfT                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UMaster_WeaponComponent_C::Set_Scope_Scale_Alpha(float bpp__NewxAlpha__pfT)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(29082);

	UMaster_WeaponComponent_C_Set_Scope_Scale_Alpha_Params params {};
	params.bpp__NewxAlpha__pfT = bpp__NewxAlpha__pfT;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x01849C80
//		Name   -> Function Master_WeaponComponent.Master_WeaponComponent_C.Set Revolver Chamber Rotate
//		Flags  -> (Native, Public, HasDefaults, BlueprintCallable)
// Parameters:
//		struct FRotator                                    bpp__TargetxRotator__pfT                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
//		bool                                               bpp__ResetxRotation__pfT                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UMaster_WeaponComponent_C::Set_Revolver_Chamber_Rotate(const struct FRotator& bpp__TargetxRotator__pfT, bool bpp__ResetxRotation__pfT)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(29081);

	UMaster_WeaponComponent_C_Set_Revolver_Chamber_Rotate_Params params {};
	params.bpp__TargetxRotator__pfT = bpp__TargetxRotator__pfT;
	params.bpp__ResetxRotation__pfT = bpp__ResetxRotation__pfT;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00A6A6A0
//		Name   -> Function Master_WeaponComponent.Master_WeaponComponent_C.Set Muzzle Flash Emitter and Offset
//		Flags  -> (Native, Public, BlueprintCallable)
void UMaster_WeaponComponent_C::Set_Muzzle_Flash_Emitter_and_Offset()
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(29080);

	UMaster_WeaponComponent_C_Set_Muzzle_Flash_Emitter_and_Offset_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x01849C60
//		Name   -> Function Master_WeaponComponent.Master_WeaponComponent_C.Setup Tracers
//		Flags  -> (Native, Public, BlueprintCallable)
void UMaster_WeaponComponent_C::Setup_Tracers()
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(29079);

	UMaster_WeaponComponent_C_Setup_Tracers_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x01849C40
//		Name   -> Function Master_WeaponComponent.Master_WeaponComponent_C.Setup Character Mirror Anims
//		Flags  -> (Native, Public, BlueprintCallable)
void UMaster_WeaponComponent_C::Setup_Character_Mirror_Anims()
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(29078);

	UMaster_WeaponComponent_C_Setup_Character_Mirror_Anims_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x01849C20
//		Name   -> Function Master_WeaponComponent.Master_WeaponComponent_C.Setup Character Anim Init Callback
//		Flags  -> (Native, Public, BlueprintCallable)
void UMaster_WeaponComponent_C::Setup_Character_Anim_Init_Callback()
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(29077);

	UMaster_WeaponComponent_C_Setup_Character_Anim_Init_Callback_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x01849C00
//		Name   -> Function Master_WeaponComponent.Master_WeaponComponent_C.SetupMultiPrimary
//		Flags  -> (Native, Public, BlueprintCallable)
void UMaster_WeaponComponent_C::SetupMultiPrimary()
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(29076);

	UMaster_WeaponComponent_C_SetupMultiPrimary_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x01849BE0
//		Name   -> Function Master_WeaponComponent.Master_WeaponComponent_C.SetUIWidget
//		Flags  -> (Native, Public, BlueprintCallable)
void UMaster_WeaponComponent_C::SetUIWidget()
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(29075);

	UMaster_WeaponComponent_C_SetUIWidget_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x01849B40
//		Name   -> Function Master_WeaponComponent.Master_WeaponComponent_C.Select Weapon Reload Montage
//		Flags  -> (Native, Public, BlueprintCallable)
// Parameters:
//		bool                                               bpp__IsxQuickxReload__pfTT                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		class UAnimMontage*                                ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class UAnimMontage* UMaster_WeaponComponent_C::Select_Weapon_Reload_Montage(bool bpp__IsxQuickxReload__pfTT)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(29074);

	UMaster_WeaponComponent_C_Select_Weapon_Reload_Montage_Params params {};
	params.bpp__IsxQuickxReload__pfTT = bpp__IsxQuickxReload__pfTT;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x01849A60
//		Name   -> Function Master_WeaponComponent.Master_WeaponComponent_C.Select Character Reload Montage
//		Flags  -> (Native, Public, HasOutParms, BlueprintCallable, BlueprintPure)
// Parameters:
//		class UAnimMontage*                                bpp__ReloadMontage__pf                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		class UAnimMontage*                                bpp__QuickReloadMontage__pf                                (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UMaster_WeaponComponent_C::Select_Character_Reload_Montage(class UAnimMontage** bpp__ReloadMontage__pf, class UAnimMontage** bpp__QuickReloadMontage__pf)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(29073);

	UMaster_WeaponComponent_C_Select_Character_Reload_Montage_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (bpp__ReloadMontage__pf != nullptr)
		*bpp__ReloadMontage__pf = params.bpp__ReloadMontage__pf;
	if (bpp__QuickReloadMontage__pf != nullptr)
		*bpp__QuickReloadMontage__pf = params.bpp__QuickReloadMontage__pf;

}


// Function:
//		Offset -> 0x01849A40
//		Name   -> Function Master_WeaponComponent.Master_WeaponComponent_C.Retrieve Weapon
//		Flags  -> (Native, Public, BlueprintCallable)
void UMaster_WeaponComponent_C::Retrieve_Weapon()
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(29072);

	UMaster_WeaponComponent_C_Retrieve_Weapon_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x01849A20
//		Name   -> Function Master_WeaponComponent.Master_WeaponComponent_C.Reticle Rotate
//		Flags  -> (Native, Public, BlueprintCallable)
void UMaster_WeaponComponent_C::Reticle_Rotate()
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(29071);

	UMaster_WeaponComponent_C_Reticle_Rotate_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x01849A00
//		Name   -> Function Master_WeaponComponent.Master_WeaponComponent_C.Reset Variables at Start of Firing Instance
//		Flags  -> (Native, Public, BlueprintCallable)
void UMaster_WeaponComponent_C::Reset_Variables_at_Start_of_Firing_Instance()
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(29070);

	UMaster_WeaponComponent_C_Reset_Variables_at_Start_of_Firing_Instance_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x018499E0
//		Name   -> Function Master_WeaponComponent.Master_WeaponComponent_C.Reload Weapon
//		Flags  -> (Native, Public, BlueprintCallable)
void UMaster_WeaponComponent_C::Reload_Weapon()
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(29069);

	UMaster_WeaponComponent_C_Reload_Weapon_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x018499C0
//		Name   -> Function Master_WeaponComponent.Master_WeaponComponent_C.Reload Cooldown Weapon
//		Flags  -> (Native, Public, BlueprintCallable)
void UMaster_WeaponComponent_C::Reload_Cooldown_Weapon()
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(29068);

	UMaster_WeaponComponent_C_Reload_Cooldown_Weapon_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x01849940
//		Name   -> Function Master_WeaponComponent.Master_WeaponComponent_C.ReceiveTick
//		Flags  -> (Native, Event, Public)
// Parameters:
//		float                                              bpp__DeltaSeconds__pf                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UMaster_WeaponComponent_C::ReceiveTick(float bpp__DeltaSeconds__pf)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(29067);

	UMaster_WeaponComponent_C_ReceiveTick_Params params {};
	params.bpp__DeltaSeconds__pf = bpp__DeltaSeconds__pf;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x01849840
//		Name   -> Function Master_WeaponComponent.Master_WeaponComponent_C.ReceiveEndPlay
//		Flags  -> (Native, Event, Public)
// Parameters:
//		TEnumAsByte<Engine_EEndPlayReason>                 bpp__EndPlayReason__pf                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UMaster_WeaponComponent_C::ReceiveEndPlay(TEnumAsByte<Engine_EEndPlayReason> bpp__EndPlayReason__pf)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(29066);

	UMaster_WeaponComponent_C_ReceiveEndPlay_Params params {};
	params.bpp__EndPlayReason__pf = bpp__EndPlayReason__pf;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x01849820
//		Name   -> Function Master_WeaponComponent.Master_WeaponComponent_C.ReceiveBeginPlay
//		Flags  -> (Native, Event, Public)
void UMaster_WeaponComponent_C::ReceiveBeginPlay()
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(29065);

	UMaster_WeaponComponent_C_ReceiveBeginPlay_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x01849800
//		Name   -> Function Master_WeaponComponent.Master_WeaponComponent_C.Pre Fire Weapon
//		Flags  -> (Native, Public, BlueprintCallable)
void UMaster_WeaponComponent_C::Pre_Fire_Weapon()
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(29064);

	UMaster_WeaponComponent_C_Pre_Fire_Weapon_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x018497E0
//		Name   -> Function Master_WeaponComponent.Master_WeaponComponent_C.Prepare Next Tracer Spawn
//		Flags  -> (Native, Public, BlueprintCallable)
void UMaster_WeaponComponent_C::Prepare_Next_Tracer_Spawn()
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(29063);

	UMaster_WeaponComponent_C_Prepare_Next_Tracer_Spawn_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x018497C0
//		Name   -> Function Master_WeaponComponent.Master_WeaponComponent_C.Post Fire Weapon
//		Flags  -> (Native, Public, BlueprintCallable)
void UMaster_WeaponComponent_C::Post_Fire_Weapon()
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(29062);

	UMaster_WeaponComponent_C_Post_Fire_Weapon_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x018496F0
//		Name   -> Function Master_WeaponComponent.Master_WeaponComponent_C.Play Weapon Reload animation
//		Flags  -> (Native, Public, BlueprintCallable)
// Parameters:
//		float                                              bpp__PlayRate__pf                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		bool                                               bpp__IsxQuickxReload__pfTT                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UMaster_WeaponComponent_C::Play_Weapon_Reload_animation(float bpp__PlayRate__pf, bool bpp__IsxQuickxReload__pfTT)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(29061);

	UMaster_WeaponComponent_C_Play_Weapon_Reload_animation_Params params {};
	params.bpp__PlayRate__pf = bpp__PlayRate__pf;
	params.bpp__IsxQuickxReload__pfTT = bpp__IsxQuickxReload__pfTT;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x01849620
//		Name   -> Function Master_WeaponComponent.Master_WeaponComponent_C.Play Reload MultiStage
//		Flags  -> (Native, Public, BlueprintCallable)
// Parameters:
//		float                                              bpp__PlayxRate__pfT                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		class UAnimMontage*                                bpp__SelectedxMontage__pfT                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UMaster_WeaponComponent_C::Play_Reload_MultiStage(float bpp__PlayxRate__pfT, class UAnimMontage* bpp__SelectedxMontage__pfT)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(29060);

	UMaster_WeaponComponent_C_Play_Reload_MultiStage_Params params {};
	params.bpp__PlayxRate__pfT = bpp__PlayxRate__pfT;
	params.bpp__SelectedxMontage__pfT = bpp__SelectedxMontage__pfT;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x01849520
//		Name   -> Function Master_WeaponComponent.Master_WeaponComponent_C.Play Reload Logic
//		Flags  -> (Native, Public, BlueprintCallable)
// Parameters:
//		class UAnimMontage*                                bpp__ReloadxMontage__pfT                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		class UAnimMontage*                                bpp__QuickReloadxMontage__pfT                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		bool                                               bpp__IsxMultixStagexReloadx__pfTTTzy                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UMaster_WeaponComponent_C::Play_Reload_Logic(class UAnimMontage* bpp__ReloadxMontage__pfT, class UAnimMontage* bpp__QuickReloadxMontage__pfT, bool bpp__IsxMultixStagexReloadx__pfTTTzy)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(29059);

	UMaster_WeaponComponent_C_Play_Reload_Logic_Params params {};
	params.bpp__ReloadxMontage__pfT = bpp__ReloadxMontage__pfT;
	params.bpp__QuickReloadxMontage__pfT = bpp__QuickReloadxMontage__pfT;
	params.bpp__IsxMultixStagexReloadx__pfTTTzy = bpp__IsxMultixStagexReloadx__pfTTTzy;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x01849450
//		Name   -> Function Master_WeaponComponent.Master_WeaponComponent_C.Play Reload Base
//		Flags  -> (Native, Public, BlueprintCallable)
// Parameters:
//		float                                              bpp__PlayxRate__pfT                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		class UAnimMontage*                                bpp__SelectedxMontage__pfT                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UMaster_WeaponComponent_C::Play_Reload_Base(float bpp__PlayxRate__pfT, class UAnimMontage* bpp__SelectedxMontage__pfT)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(29058);

	UMaster_WeaponComponent_C_Play_Reload_Base_Params params {};
	params.bpp__PlayxRate__pfT = bpp__PlayxRate__pfT;
	params.bpp__SelectedxMontage__pfT = bpp__SelectedxMontage__pfT;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x01849430
//		Name   -> Function Master_WeaponComponent.Master_WeaponComponent_C.Play Post Reload
//		Flags  -> (Native, Public, BlueprintCallable)
void UMaster_WeaponComponent_C::Play_Post_Reload()
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(29057);

	UMaster_WeaponComponent_C_Play_Post_Reload_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x01849360
//		Name   -> Function Master_WeaponComponent.Master_WeaponComponent_C.Play Fire Tail Sound
//		Flags  -> (Native, Public, BlueprintCallable)
// Parameters:
//		AkAudio_EAkCallbackType                            bpp__CallbackxType__pfT                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		class UAkCallbackInfo*                             bpp__CallbackxInfo__pfT                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UMaster_WeaponComponent_C::Play_Fire_Tail_Sound(AkAudio_EAkCallbackType bpp__CallbackxType__pfT, class UAkCallbackInfo* bpp__CallbackxInfo__pfT)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(29056);

	UMaster_WeaponComponent_C_Play_Fire_Tail_Sound_Params params {};
	params.bpp__CallbackxType__pfT = bpp__CallbackxType__pfT;
	params.bpp__CallbackxInfo__pfT = bpp__CallbackxInfo__pfT;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x01849250
//		Name   -> Function Master_WeaponComponent.Master_WeaponComponent_C.Play Fire Camera Shakes
//		Flags  -> (Native, Public, BlueprintCallable)
// Parameters:
//		bool                                               bpp__LocalOnly__pf                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		class UClass*                                      bpp__PrimaryxShake__pfT                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		class UClass*                                      bpp__HiFreqxShake__pfT                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UMaster_WeaponComponent_C::Play_Fire_Camera_Shakes(bool bpp__LocalOnly__pf, class UClass* bpp__PrimaryxShake__pfT, class UClass* bpp__HiFreqxShake__pfT)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(29055);

	UMaster_WeaponComponent_C_Play_Fire_Camera_Shakes_Params params {};
	params.bpp__LocalOnly__pf = bpp__LocalOnly__pf;
	params.bpp__PrimaryxShake__pfT = bpp__PrimaryxShake__pfT;
	params.bpp__HiFreqxShake__pfT = bpp__HiFreqxShake__pfT;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x01849230
//		Name   -> Function Master_WeaponComponent.Master_WeaponComponent_C.Play Casing Sound
//		Flags  -> (Native, Public, BlueprintCallable)
void UMaster_WeaponComponent_C::Play_Casing_Sound()
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(29054);

	UMaster_WeaponComponent_C_Play_Casing_Sound_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x01849100
//		Name   -> Function Master_WeaponComponent.Master_WeaponComponent_C.Play Bullet Impact SFX
//		Flags  -> (Native, Public, BlueprintCallable)
// Parameters:
//		struct FHitResult                                  bpp__HitResult__pf                                         (Parm, IsPlainOldData, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPublic)
void UMaster_WeaponComponent_C::Play_Bullet_Impact_SFX(const struct FHitResult& bpp__HitResult__pf)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(29053);

	UMaster_WeaponComponent_C_Play_Bullet_Impact_SFX_Params params {};
	params.bpp__HitResult__pf = bpp__HitResult__pf;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x018490E0
//		Name   -> Function Master_WeaponComponent.Master_WeaponComponent_C.PlayInvalidFireSound
//		Flags  -> (Native, Public, BlueprintCallable)
void UMaster_WeaponComponent_C::PlayInvalidFireSound()
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(29052);

	UMaster_WeaponComponent_C_PlayInvalidFireSound_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x01849030
//		Name   -> Function Master_WeaponComponent.Master_WeaponComponent_C.PlayFireSound
//		Flags  -> (Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
//		struct FAimData                                    bpp__InputPin__pf__const                                   (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
void UMaster_WeaponComponent_C::PlayFireSound(const struct FAimData& bpp__InputPin__pf__const)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(29051);

	UMaster_WeaponComponent_C_PlayFireSound_Params params {};
	params.bpp__InputPin__pf__const = bpp__InputPin__pf__const;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x01849010
//		Name   -> Function Master_WeaponComponent.Master_WeaponComponent_C.PlayEmptyFireAudio
//		Flags  -> (Native, Public, BlueprintCallable)
void UMaster_WeaponComponent_C::PlayEmptyFireAudio()
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(29050);

	UMaster_WeaponComponent_C_PlayEmptyFireAudio_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x01848DB0
//		Name   -> Function Master_WeaponComponent.Master_WeaponComponent_C.On Cosmetic Trace Complete Internal
//		Flags  -> (Native, Public, HasOutParms, HasDefaults, BlueprintCallable)
// Parameters:
//		bool                                               bpp__BlockingxHit__pfT__const                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		TArray<struct FHitResult>                          bpp__OutxHits__pfT                                         (Parm, OutParm, ZeroConstructor, ContainsInstancedReference, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		struct FVector                                     bpp__Start__pf__const                                      (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		struct FVector                                     bpp__End__pf__const                                        (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		bool                                               bpp__AllowxSpangs__pfT                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		bool                                               bpp__AllowxTracers__pfT                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		bool                                               bpp__AllowxDecals__pfT                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UMaster_WeaponComponent_C::On_Cosmetic_Trace_Complete_Internal(bool bpp__BlockingxHit__pfT__const, TArray<struct FHitResult>* bpp__OutxHits__pfT, const struct FVector& bpp__Start__pf__const, const struct FVector& bpp__End__pf__const, bool bpp__AllowxSpangs__pfT, bool bpp__AllowxTracers__pfT, bool bpp__AllowxDecals__pfT)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(29049);

	UMaster_WeaponComponent_C_On_Cosmetic_Trace_Complete_Internal_Params params {};
	params.bpp__BlockingxHit__pfT__const = bpp__BlockingxHit__pfT__const;
	params.bpp__Start__pf__const = bpp__Start__pf__const;
	params.bpp__End__pf__const = bpp__End__pf__const;
	params.bpp__AllowxSpangs__pfT = bpp__AllowxSpangs__pfT;
	params.bpp__AllowxTracers__pfT = bpp__AllowxTracers__pfT;
	params.bpp__AllowxDecals__pfT = bpp__AllowxDecals__pfT;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (bpp__OutxHits__pfT != nullptr)
		*bpp__OutxHits__pfT = params.bpp__OutxHits__pfT;

}


// Function:
//		Offset -> 0x01848C10
//		Name   -> Function Master_WeaponComponent.Master_WeaponComponent_C.On Comestic Trace Complete
//		Flags  -> (Native, Public, HasOutParms, HasDefaults, BlueprintCallable)
// Parameters:
//		bool                                               bpp__bBlockingHit__pf                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		TArray<struct FHitResult>                          bpp__OutHits__pf__const                                    (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, ContainsInstancedReference, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		struct FVector                                     bpp__Start__pf__const                                      (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		struct FVector                                     bpp__End__pf__const                                        (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UMaster_WeaponComponent_C::On_Comestic_Trace_Complete(bool bpp__bBlockingHit__pf, TArray<struct FHitResult> bpp__OutHits__pf__const, const struct FVector& bpp__Start__pf__const, const struct FVector& bpp__End__pf__const)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(29048);

	UMaster_WeaponComponent_C_On_Comestic_Trace_Complete_Params params {};
	params.bpp__bBlockingHit__pf = bpp__bBlockingHit__pf;
	params.bpp__OutHits__pf__const = bpp__OutHits__pf__const;
	params.bpp__Start__pf__const = bpp__Start__pf__const;
	params.bpp__End__pf__const = bpp__End__pf__const;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x01848BF0
//		Name   -> Function Master_WeaponComponent.Master_WeaponComponent_C.On Character Anim Initialized
//		Flags  -> (Native, Public, BlueprintCallable)
void UMaster_WeaponComponent_C::On_Character_Anim_Initialized()
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(29047);

	UMaster_WeaponComponent_C_On_Character_Anim_Initialized_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x01848B60
//		Name   -> Function Master_WeaponComponent.Master_WeaponComponent_C.OnPossessedBy_Event_1
//		Flags  -> (Native, Public, BlueprintCallable)
// Parameters:
//		class AController*                                 bpp__NewController__pf                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UMaster_WeaponComponent_C::OnPossessedBy_Event_1(class AController* bpp__NewController__pf)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(29046);

	UMaster_WeaponComponent_C_OnPossessedBy_Event_1_Params params {};
	params.bpp__NewController__pf = bpp__NewController__pf;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x01848B40
//		Name   -> Function Master_WeaponComponent.Master_WeaponComponent_C.OnMirrorPoseChanged
//		Flags  -> (Native, Event, Public)
void UMaster_WeaponComponent_C::OnMirrorPoseChanged()
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(29045);

	UMaster_WeaponComponent_C_OnMirrorPoseChanged_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x01848A70
//		Name   -> Function Master_WeaponComponent.Master_WeaponComponent_C.OnKilled_Event_1
//		Flags  -> (Native, Public, BlueprintCallable)
// Parameters:
//		class AKSCharacterFoundation*                      bpp__KillerCharacter__pf__const                            (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		class AKSCharacterFoundation*                      bpp__KilledCharacter__pf__const                            (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UMaster_WeaponComponent_C::OnKilled_Event_1(class AKSCharacterFoundation* bpp__KillerCharacter__pf__const, class AKSCharacterFoundation* bpp__KilledCharacter__pf__const)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(29044);

	UMaster_WeaponComponent_C_OnKilled_Event_1_Params params {};
	params.bpp__KillerCharacter__pf__const = bpp__KillerCharacter__pf__const;
	params.bpp__KilledCharacter__pf__const = bpp__KilledCharacter__pf__const;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x009F3030
//		Name   -> Function Master_WeaponComponent.Master_WeaponComponent_C.NotifyStopFireReceived
//		Flags  -> (BlueprintCosmetic, Native, Event, Public)
void UMaster_WeaponComponent_C::NotifyStopFireReceived()
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(29043);

	UMaster_WeaponComponent_C_NotifyStopFireReceived_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x018489D0
//		Name   -> Function Master_WeaponComponent.Master_WeaponComponent_C.IsDropMeshValid
//		Flags  -> (Native, Public, BlueprintCallable, BlueprintPure)
// Parameters:
//		int                                                bpp__Index__pf                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UMaster_WeaponComponent_C::IsDropMeshValid(int bpp__Index__pf)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(29042);

	UMaster_WeaponComponent_C_IsDropMeshValid_Params params {};
	params.bpp__Index__pf = bpp__Index__pf;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x01848950
//		Name   -> Function Master_WeaponComponent.Master_WeaponComponent_C.IdleWeapon
//		Flags  -> (Native, Public, BlueprintCallable)
// Parameters:
//		Killstreak_EWeaponStateNew                         bpp__OldState__pf                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UMaster_WeaponComponent_C::IdleWeapon(Killstreak_EWeaponStateNew bpp__OldState__pf)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(29041);

	UMaster_WeaponComponent_C_IdleWeapon_Params params {};
	params.bpp__OldState__pf = bpp__OldState__pf;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00B482B0
//		Name   -> Function Master_WeaponComponent.Master_WeaponComponent_C.Holster Weapon
//		Flags  -> (Native, Public, BlueprintCallable)
void UMaster_WeaponComponent_C::Holster_Weapon()
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(29040);

	UMaster_WeaponComponent_C_Holster_Weapon_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x01848930
//		Name   -> Function Master_WeaponComponent.Master_WeaponComponent_C.Hide Magazine
//		Flags  -> (Native, Public, BlueprintCallable)
void UMaster_WeaponComponent_C::Hide_Magazine()
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(29039);

	UMaster_WeaponComponent_C_Hide_Magazine_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x01848890
//		Name   -> Function Master_WeaponComponent.Master_WeaponComponent_C.HasUIWidget
//		Flags  -> (Native, Public, HasOutParms, BlueprintCallable, BlueprintPure)
// Parameters:
//		bool                                               bpp__HasUIWidget__pf                                       (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UMaster_WeaponComponent_C::HasUIWidget(bool* bpp__HasUIWidget__pf)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(29038);

	UMaster_WeaponComponent_C_HasUIWidget_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (bpp__HasUIWidget__pf != nullptr)
		*bpp__HasUIWidget__pf = params.bpp__HasUIWidget__pf;

}


// Function:
//		Offset -> 0x018487E0
//		Name   -> Function Master_WeaponComponent.Master_WeaponComponent_C.HandleWeaponFiringClientEffects
//		Flags  -> (Native, Public, BlueprintCallable)
// Parameters:
//		struct FFullFireRepData                            bpp__Data__pf                                              (Parm, NativeAccessSpecifierPublic)
void UMaster_WeaponComponent_C::HandleWeaponFiringClientEffects(const struct FFullFireRepData& bpp__Data__pf)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(29037);

	UMaster_WeaponComponent_C_HandleWeaponFiringClientEffects_Params params {};
	params.bpp__Data__pf = bpp__Data__pf;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x01848740
//		Name   -> Function Master_WeaponComponent.Master_WeaponComponent_C.Get Tracer Offset
//		Flags  -> (Native, Public, HasOutParms, BlueprintCallable, BlueprintPure)
// Parameters:
//		float                                              bpp__Offset__pf                                            (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UMaster_WeaponComponent_C::Get_Tracer_Offset(float* bpp__Offset__pf)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(29036);

	UMaster_WeaponComponent_C_Get_Tracer_Offset_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (bpp__Offset__pf != nullptr)
		*bpp__Offset__pf = params.bpp__Offset__pf;

}


// Function:
//		Offset -> 0x018485A0
//		Name   -> Function Master_WeaponComponent.Master_WeaponComponent_C.Get Spang Particle System
//		Flags  -> (Native, Public, HasOutParms, BlueprintCallable, BlueprintPure)
// Parameters:
//		struct FHitResult                                  bpp__Hit__pf                                               (Parm, IsPlainOldData, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPublic)
//		class UParticleSystem*                             bpp__SpangxToxUse__pfTT                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		bool                                               bpp__PlayOnHitCharacter__pf                                (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UMaster_WeaponComponent_C::Get_Spang_Particle_System(const struct FHitResult& bpp__Hit__pf, class UParticleSystem** bpp__SpangxToxUse__pfTT, bool* bpp__PlayOnHitCharacter__pf)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(29035);

	UMaster_WeaponComponent_C_Get_Spang_Particle_System_Params params {};
	params.bpp__Hit__pf = bpp__Hit__pf;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (bpp__SpangxToxUse__pfTT != nullptr)
		*bpp__SpangxToxUse__pfTT = params.bpp__SpangxToxUse__pfTT;
	if (bpp__PlayOnHitCharacter__pf != nullptr)
		*bpp__PlayOnHitCharacter__pf = params.bpp__PlayOnHitCharacter__pf;

}


// Function:
//		Offset -> 0x018484C0
//		Name   -> Function Master_WeaponComponent.Master_WeaponComponent_C.Get Scaled Reload Playrate
//		Flags  -> (Native, Public, HasOutParms, BlueprintCallable, BlueprintPure)
// Parameters:
//		class UAnimMontage*                                bpp__AnimxMontage__pfT                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		float                                              bpp__ScaledxPlayrate__pfT                                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UMaster_WeaponComponent_C::Get_Scaled_Reload_Playrate(class UAnimMontage* bpp__AnimxMontage__pfT, float* bpp__ScaledxPlayrate__pfT)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(29034);

	UMaster_WeaponComponent_C_Get_Scaled_Reload_Playrate_Params params {};
	params.bpp__AnimxMontage__pfT = bpp__AnimxMontage__pfT;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (bpp__ScaledxPlayrate__pfT != nullptr)
		*bpp__ScaledxPlayrate__pfT = params.bpp__ScaledxPlayrate__pfT;

}


// Function:
//		Offset -> 0x018483E0
//		Name   -> Function Master_WeaponComponent.Master_WeaponComponent_C.Get Scaled Post Reload Playrate
//		Flags  -> (Native, Public, HasOutParms, BlueprintCallable, BlueprintPure)
// Parameters:
//		class UAnimMontage*                                bpp__AnimxMontage__pfT                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		float                                              bpp__ScaledxPlayrate__pfT                                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UMaster_WeaponComponent_C::Get_Scaled_Post_Reload_Playrate(class UAnimMontage* bpp__AnimxMontage__pfT, float* bpp__ScaledxPlayrate__pfT)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(29033);

	UMaster_WeaponComponent_C_Get_Scaled_Post_Reload_Playrate_Params params {};
	params.bpp__AnimxMontage__pfT = bpp__AnimxMontage__pfT;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (bpp__ScaledxPlayrate__pfT != nullptr)
		*bpp__ScaledxPlayrate__pfT = params.bpp__ScaledxPlayrate__pfT;

}


// Function:
//		Offset -> 0x01848300
//		Name   -> Function Master_WeaponComponent.Master_WeaponComponent_C.Get Scaled Multistage Reload Playrate
//		Flags  -> (Native, Public, HasOutParms, BlueprintCallable, BlueprintPure)
// Parameters:
//		class UAnimMontage*                                bpp__AnimxMontage__pfT                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		float                                              bpp__ScaledxPlayrate__pfT                                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UMaster_WeaponComponent_C::Get_Scaled_Multistage_Reload_Playrate(class UAnimMontage* bpp__AnimxMontage__pfT, float* bpp__ScaledxPlayrate__pfT)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(29032);

	UMaster_WeaponComponent_C_Get_Scaled_Multistage_Reload_Playrate_Params params {};
	params.bpp__AnimxMontage__pfT = bpp__AnimxMontage__pfT;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (bpp__ScaledxPlayrate__pfT != nullptr)
		*bpp__ScaledxPlayrate__pfT = params.bpp__ScaledxPlayrate__pfT;

}


// Function:
//		Offset -> 0x01848200
//		Name   -> Function Master_WeaponComponent.Master_WeaponComponent_C.Get Reticle Material
//		Flags  -> (Native, Public, BlueprintCallable)
void UMaster_WeaponComponent_C::Get_Reticle_Material()
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(29031);

	UMaster_WeaponComponent_C_Get_Reticle_Material_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x01848120
//		Name   -> Function Master_WeaponComponent.Master_WeaponComponent_C.Get Post Reload Weapon Section Time
//		Flags  -> (Native, Public, HasOutParms, BlueprintCallable, BlueprintPure)
// Parameters:
//		class UAnimMontage*                                bpp__AnimxMontage__pfT                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		float                                              bpp__PostxReloadxPosition__pfTT                            (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UMaster_WeaponComponent_C::Get_Post_Reload_Weapon_Section_Time(class UAnimMontage* bpp__AnimxMontage__pfT, float* bpp__PostxReloadxPosition__pfTT)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(29030);

	UMaster_WeaponComponent_C_Get_Post_Reload_Weapon_Section_Time_Params params {};
	params.bpp__AnimxMontage__pfT = bpp__AnimxMontage__pfT;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (bpp__PostxReloadxPosition__pfTT != nullptr)
		*bpp__PostxReloadxPosition__pfTT = params.bpp__PostxReloadxPosition__pfTT;

}


// Function:
//		Offset -> 0x01848080
//		Name   -> Function Master_WeaponComponent.Master_WeaponComponent_C.Get Player 3P Lunge Montage
//		Flags  -> (Native, Public, HasOutParms, BlueprintCallable, BlueprintPure)
// Parameters:
//		class UAnimMontage*                                bpp__Montage__pf                                           (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UMaster_WeaponComponent_C::Get_Player_3P_Lunge_Montage(class UAnimMontage** bpp__Montage__pf)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(29029);

	UMaster_WeaponComponent_C_Get_Player_3P_Lunge_Montage_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (bpp__Montage__pf != nullptr)
		*bpp__Montage__pf = params.bpp__Montage__pf;

}


// Function:
//		Offset -> 0x01847FE0
//		Name   -> Function Master_WeaponComponent.Master_WeaponComponent_C.Get Player 3P Fire Montage
//		Flags  -> (Native, Public, HasOutParms, BlueprintCallable, BlueprintPure)
// Parameters:
//		class UAnimMontage*                                bpp__Montage__pf                                           (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UMaster_WeaponComponent_C::Get_Player_3P_Fire_Montage(class UAnimMontage** bpp__Montage__pf)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(29028);

	UMaster_WeaponComponent_C_Get_Player_3P_Fire_Montage_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (bpp__Montage__pf != nullptr)
		*bpp__Montage__pf = params.bpp__Montage__pf;

}


// Function:
//		Offset -> 0x01847F40
//		Name   -> Function Master_WeaponComponent.Master_WeaponComponent_C.Get Player 1P Fire Montage
//		Flags  -> (Native, Public, HasOutParms, BlueprintCallable, BlueprintPure)
// Parameters:
//		class UAnimMontage*                                bpp__Montage__pf                                           (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UMaster_WeaponComponent_C::Get_Player_1P_Fire_Montage(class UAnimMontage** bpp__Montage__pf)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(29027);

	UMaster_WeaponComponent_C_Get_Player_1P_Fire_Montage_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (bpp__Montage__pf != nullptr)
		*bpp__Montage__pf = params.bpp__Montage__pf;

}


// Function:
//		Offset -> 0x01847E60
//		Name   -> Function Master_WeaponComponent.Master_WeaponComponent_C.Get Holster Visibility
//		Flags  -> (Native, Public, HasOutParms, BlueprintCallable, BlueprintPure)
// Parameters:
//		bool                                               bpp__Visibility__pf                                        (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		class UKSWeaponComponent*                          bpp__WeaponComponent__pf                                   (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UMaster_WeaponComponent_C::Get_Holster_Visibility(bool* bpp__Visibility__pf, class UKSWeaponComponent** bpp__WeaponComponent__pf)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(29026);

	UMaster_WeaponComponent_C_Get_Holster_Visibility_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (bpp__Visibility__pf != nullptr)
		*bpp__Visibility__pf = params.bpp__Visibility__pf;
	if (bpp__WeaponComponent__pf != nullptr)
		*bpp__WeaponComponent__pf = params.bpp__WeaponComponent__pf;

}


// Function:
//		Offset -> 0x01847DB0
//		Name   -> Function Master_WeaponComponent.Master_WeaponComponent_C.Get Expected Aim Data
//		Flags  -> (Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
//		struct FAimData                                    bpp__AimData__pf                                           (Parm, OutParm, NativeAccessSpecifierPublic)
void UMaster_WeaponComponent_C::Get_Expected_Aim_Data(struct FAimData* bpp__AimData__pf)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(29025);

	UMaster_WeaponComponent_C_Get_Expected_Aim_Data_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (bpp__AimData__pf != nullptr)
		*bpp__AimData__pf = params.bpp__AimData__pf;

}


// Function:
//		Offset -> 0x01847C30
//		Name   -> Function Master_WeaponComponent.Master_WeaponComponent_C.Get Decal Material
//		Flags  -> (Native, Public, HasOutParms, BlueprintCallable, BlueprintPure)
// Parameters:
//		struct FHitResult                                  bpp__Hit__pf                                               (Parm, IsPlainOldData, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPublic)
//		struct FHitDecalInfo                               bpp__DecalxInfo__pfT                                       (Parm, OutParm, NoDestructor, NativeAccessSpecifierPublic)
void UMaster_WeaponComponent_C::Get_Decal_Material(const struct FHitResult& bpp__Hit__pf, struct FHitDecalInfo* bpp__DecalxInfo__pfT)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(29024);

	UMaster_WeaponComponent_C_Get_Decal_Material_Params params {};
	params.bpp__Hit__pf = bpp__Hit__pf;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (bpp__DecalxInfo__pfT != nullptr)
		*bpp__DecalxInfo__pfT = params.bpp__DecalxInfo__pfT;

}


// Function:
//		Offset -> 0x01847B50
//		Name   -> Function Master_WeaponComponent.Master_WeaponComponent_C.Get Deattach Slot Name
//		Flags  -> (Native, Public, HasOutParms, BlueprintCallable, BlueprintPure)
// Parameters:
//		class AKSCharacter*                                bpp__KSCharacter__pf                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		struct FName                                       bpp__SlotxName__pfT                                        (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UMaster_WeaponComponent_C::Get_Deattach_Slot_Name(class AKSCharacter* bpp__KSCharacter__pf, struct FName* bpp__SlotxName__pfT)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(29023);

	UMaster_WeaponComponent_C_Get_Deattach_Slot_Name_Params params {};
	params.bpp__KSCharacter__pf = bpp__KSCharacter__pf;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (bpp__SlotxName__pfT != nullptr)
		*bpp__SlotxName__pfT = params.bpp__SlotxName__pfT;

}


// Function:
//		Offset -> 0x01847AB0
//		Name   -> Function Master_WeaponComponent.Master_WeaponComponent_C.Get Character Anim Instance
//		Flags  -> (Native, Public, HasOutParms, BlueprintCallable, BlueprintPure)
// Parameters:
//		class UKSCharacterAnimInst*                        bpp__AnimxInst__pfT                                        (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UMaster_WeaponComponent_C::Get_Character_Anim_Instance(class UKSCharacterAnimInst** bpp__AnimxInst__pfT)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(29022);

	UMaster_WeaponComponent_C_Get_Character_Anim_Instance_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (bpp__AnimxInst__pfT != nullptr)
		*bpp__AnimxInst__pfT = params.bpp__AnimxInst__pfT;

}


// Function:
//		Offset -> 0x01847A10
//		Name   -> Function Master_WeaponComponent.Master_WeaponComponent_C.Get Character 3p Fire Section
//		Flags  -> (Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
//		struct FName                                       bpp__3pxFirexSection__pfTT                                 (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UMaster_WeaponComponent_C::Get_Character_3p_Fire_Section(struct FName* bpp__3pxFirexSection__pfTT)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(29021);

	UMaster_WeaponComponent_C_Get_Character_3p_Fire_Section_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (bpp__3pxFirexSection__pfTT != nullptr)
		*bpp__3pxFirexSection__pfTT = params.bpp__3pxFirexSection__pfTT;

}


// Function:
//		Offset -> 0x01847970
//		Name   -> Function Master_WeaponComponent.Master_WeaponComponent_C.Get Character 1p Fire Section
//		Flags  -> (Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
//		struct FName                                       bpp__1pxFirexSection__pfTT                                 (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UMaster_WeaponComponent_C::Get_Character_1p_Fire_Section(struct FName* bpp__1pxFirexSection__pfTT)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(29020);

	UMaster_WeaponComponent_C_Get_Character_1p_Fire_Section_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (bpp__1pxFirexSection__pfTT != nullptr)
		*bpp__1pxFirexSection__pfTT = params.bpp__1pxFirexSection__pfTT;

}


// Function:
//		Offset -> 0x01847890
//		Name   -> Function Master_WeaponComponent.Master_WeaponComponent_C.Get Attach Slot Name
//		Flags  -> (Native, Public, HasOutParms, BlueprintCallable, BlueprintPure)
// Parameters:
//		class AKSCharacter*                                bpp__KSCharacter__pf                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		struct FName                                       bpp__SlotxName__pfT                                        (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UMaster_WeaponComponent_C::Get_Attach_Slot_Name(class AKSCharacter* bpp__KSCharacter__pf, struct FName* bpp__SlotxName__pfT)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(29019);

	UMaster_WeaponComponent_C_Get_Attach_Slot_Name_Params params {};
	params.bpp__KSCharacter__pf = bpp__KSCharacter__pf;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (bpp__SlotxName__pfT != nullptr)
		*bpp__SlotxName__pfT = params.bpp__SlotxName__pfT;

}


// Function:
//		Offset -> 0x01847800
//		Name   -> Function Master_WeaponComponent.Master_WeaponComponent_C.GetTracerStartPoint
//		Flags  -> (Native, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintPure)
// Parameters:
//		struct FVector                                     bpp__TracerStartLocation__pf                               (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UMaster_WeaponComponent_C::GetTracerStartPoint(struct FVector* bpp__TracerStartLocation__pf)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(29018);

	UMaster_WeaponComponent_C_GetTracerStartPoint_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (bpp__TracerStartLocation__pf != nullptr)
		*bpp__TracerStartLocation__pf = params.bpp__TracerStartLocation__pf;

}


// Function:
//		Offset -> 0x01847680
//		Name   -> Function Master_WeaponComponent.Master_WeaponComponent_C.GetTableRowNameForHit
//		Flags  -> (Native, Public, HasOutParms, BlueprintCallable, BlueprintPure)
// Parameters:
//		struct FHitResult                                  bpp__Hit__pf                                               (Parm, IsPlainOldData, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPublic)
//		struct FName                                       bpp__RowNamePrefix__pf                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		struct FName                                       bpp__RowName__pf                                           (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UMaster_WeaponComponent_C::GetTableRowNameForHit(const struct FHitResult& bpp__Hit__pf, const struct FName& bpp__RowNamePrefix__pf, struct FName* bpp__RowName__pf)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(29017);

	UMaster_WeaponComponent_C_GetTableRowNameForHit_Params params {};
	params.bpp__Hit__pf = bpp__Hit__pf;
	params.bpp__RowNamePrefix__pf = bpp__RowNamePrefix__pf;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (bpp__RowName__pf != nullptr)
		*bpp__RowName__pf = params.bpp__RowName__pf;

}


// Function:
//		Offset -> 0x018475E0
//		Name   -> Function Master_WeaponComponent.Master_WeaponComponent_C.GetPercentRemainingAmmo
//		Flags  -> (Native, Public, HasOutParms, BlueprintCallable, BlueprintPure)
// Parameters:
//		float                                              bpp__Percent__pf                                           (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UMaster_WeaponComponent_C::GetPercentRemainingAmmo(float* bpp__Percent__pf)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(29016);

	UMaster_WeaponComponent_C_GetPercentRemainingAmmo_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (bpp__Percent__pf != nullptr)
		*bpp__Percent__pf = params.bpp__Percent__pf;

}


// Function:
//		Offset -> 0x01847470
//		Name   -> Function Master_WeaponComponent.Master_WeaponComponent_C.GetMagDropBoneRotation
//		Flags  -> (Native, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintPure)
// Parameters:
//		int                                                bpp__Index__pf                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		struct FRotator                                    bpp__WorldRotation__pf                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
void UMaster_WeaponComponent_C::GetMagDropBoneRotation(int bpp__Index__pf, struct FRotator* bpp__WorldRotation__pf)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(29015);

	UMaster_WeaponComponent_C_GetMagDropBoneRotation_Params params {};
	params.bpp__Index__pf = bpp__Index__pf;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (bpp__WorldRotation__pf != nullptr)
		*bpp__WorldRotation__pf = params.bpp__WorldRotation__pf;

}


// Function:
//		Offset -> 0x018473A0
//		Name   -> Function Master_WeaponComponent.Master_WeaponComponent_C.GetMagDropBoneLocation
//		Flags  -> (Native, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintPure)
// Parameters:
//		int                                                bpp__Index__pf                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		struct FVector                                     bpp__WorldLocation__pf                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UMaster_WeaponComponent_C::GetMagDropBoneLocation(int bpp__Index__pf, struct FVector* bpp__WorldLocation__pf)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(29014);

	UMaster_WeaponComponent_C_GetMagDropBoneLocation_Params params {};
	params.bpp__Index__pf = bpp__Index__pf;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (bpp__WorldLocation__pf != nullptr)
		*bpp__WorldLocation__pf = params.bpp__WorldLocation__pf;

}


// Function:
//		Offset -> 0x01847540
//		Name   -> Function Master_WeaponComponent.Master_WeaponComponent_C.GetMagazineDropBoneName
//		Flags  -> (Native, Public, HasOutParms, BlueprintCallable, BlueprintPure)
// Parameters:
//		struct FName                                       bpp__Name__pf                                              (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UMaster_WeaponComponent_C::GetMagazineDropBoneName(struct FName* bpp__Name__pf)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(29013);

	UMaster_WeaponComponent_C_GetMagazineDropBoneName_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (bpp__Name__pf != nullptr)
		*bpp__Name__pf = params.bpp__Name__pf;

}


// Function:
//		Offset -> 0x01847370
//		Name   -> Function Master_WeaponComponent.Master_WeaponComponent_C.GetFirstShotAudioEvent
//		Flags  -> (Native, Public, BlueprintCallable, BlueprintPure)
// Parameters:
//		class UAkAudioEvent*                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class UAkAudioEvent* UMaster_WeaponComponent_C::GetFirstShotAudioEvent()
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(29012);

	UMaster_WeaponComponent_C_GetFirstShotAudioEvent_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x01847340
//		Name   -> Function Master_WeaponComponent.Master_WeaponComponent_C.GetFireAudioEvent
//		Flags  -> (Native, Public, BlueprintCallable, BlueprintPure)
// Parameters:
//		class UAkAudioEvent*                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class UAkAudioEvent* UMaster_WeaponComponent_C::GetFireAudioEvent()
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(29011);

	UMaster_WeaponComponent_C_GetFireAudioEvent_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x01847310
//		Name   -> Function Master_WeaponComponent.Master_WeaponComponent_C.GetEchoAudioEvent
//		Flags  -> (Native, Public, BlueprintCallable, BlueprintPure)
// Parameters:
//		class UAkAudioEvent*                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class UAkAudioEvent* UMaster_WeaponComponent_C::GetEchoAudioEvent()
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(29010);

	UMaster_WeaponComponent_C_GetEchoAudioEvent_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x01847240
//		Name   -> Function Master_WeaponComponent.Master_WeaponComponent_C.GetDropVelocity
//		Flags  -> (Native, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintPure)
// Parameters:
//		int                                                bpp__Index__pf                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		struct FVector                                     bpp__WorldVelocity__pf                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UMaster_WeaponComponent_C::GetDropVelocity(int bpp__Index__pf, struct FVector* bpp__WorldVelocity__pf)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(29009);

	UMaster_WeaponComponent_C_GetDropVelocity_Params params {};
	params.bpp__Index__pf = bpp__Index__pf;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (bpp__WorldVelocity__pf != nullptr)
		*bpp__WorldVelocity__pf = params.bpp__WorldVelocity__pf;

}


// Function:
//		Offset -> 0x01847120
//		Name   -> Function Master_WeaponComponent.Master_WeaponComponent_C.GetDropMesh
//		Flags  -> (Native, Public, HasOutParms, BlueprintCallable, BlueprintPure)
// Parameters:
//		int                                                bpp__Index__pf                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		class USkeletalMesh*                               bpp__SkelMesh__pf                                          (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		class UStaticMesh*                                 bpp__StaticMesh__pf                                        (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UMaster_WeaponComponent_C::GetDropMesh(int bpp__Index__pf, class USkeletalMesh** bpp__SkelMesh__pf, class UStaticMesh** bpp__StaticMesh__pf)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(29008);

	UMaster_WeaponComponent_C_GetDropMesh_Params params {};
	params.bpp__Index__pf = bpp__Index__pf;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (bpp__SkelMesh__pf != nullptr)
		*bpp__SkelMesh__pf = params.bpp__SkelMesh__pf;
	if (bpp__StaticMesh__pf != nullptr)
		*bpp__StaticMesh__pf = params.bpp__StaticMesh__pf;

}


// Function:
//		Offset -> 0x01847100
//		Name   -> Function Master_WeaponComponent.Master_WeaponComponent_C.Force Exit ADS Pose
//		Flags  -> (Native, Public, BlueprintCallable)
void UMaster_WeaponComponent_C::Force_Exit_ADS_Pose()
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(29007);

	UMaster_WeaponComponent_C_Force_Exit_ADS_Pose_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x018470E0
//		Name   -> Function Master_WeaponComponent.Master_WeaponComponent_C.Force ADS Scope
//		Flags  -> (Native, Public, BlueprintCallable)
void UMaster_WeaponComponent_C::Force_ADS_Scope()
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(29006);

	UMaster_WeaponComponent_C_Force_ADS_Scope_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x018470C0
//		Name   -> Function Master_WeaponComponent.Master_WeaponComponent_C.ForceRetrieveWeapon
//		Flags  -> (Native, Event, Public, BlueprintCallable)
void UMaster_WeaponComponent_C::ForceRetrieveWeapon()
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(29005);

	UMaster_WeaponComponent_C_ForceRetrieveWeapon_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x018470A0
//		Name   -> Function Master_WeaponComponent.Master_WeaponComponent_C.ForceRetrieveState
//		Flags  -> (Native, Event, Public, BlueprintCallable)
void UMaster_WeaponComponent_C::ForceRetrieveState()
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(29004);

	UMaster_WeaponComponent_C_ForceRetrieveState_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x009F2EF0
//		Name   -> Function Master_WeaponComponent.Master_WeaponComponent_C.ForceHolsterWeapon
//		Flags  -> (Native, Event, Public, BlueprintCallable)
void UMaster_WeaponComponent_C::ForceHolsterWeapon()
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(29003);

	UMaster_WeaponComponent_C_ForceHolsterWeapon_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x01847080
//		Name   -> Function Master_WeaponComponent.Master_WeaponComponent_C.ForceAttachWeaponToHolsterSocket
//		Flags  -> (Native, Event, Public, BlueprintCallable)
void UMaster_WeaponComponent_C::ForceAttachWeaponToHolsterSocket()
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(29002);

	UMaster_WeaponComponent_C_ForceAttachWeaponToHolsterSocket_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x01847060
//		Name   -> Function Master_WeaponComponent.Master_WeaponComponent_C.ForceAttachWeaponToActiveSocket
//		Flags  -> (Native, Event, Public, BlueprintCallable)
void UMaster_WeaponComponent_C::ForceAttachWeaponToActiveSocket()
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(29001);

	UMaster_WeaponComponent_C_ForceAttachWeaponToActiveSocket_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x01846FD0
//		Name   -> Function Master_WeaponComponent.Master_WeaponComponent_C.Fixup Laser Sight
//		Flags  -> (Native, Public, BlueprintCallable)
// Parameters:
//		class USkinnableSkeletalMeshComponent*             bpp__MeshComponent__pf                                     (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UMaster_WeaponComponent_C::Fixup_Laser_Sight(class USkinnableSkeletalMeshComponent* bpp__MeshComponent__pf)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(29000);

	UMaster_WeaponComponent_C_Fixup_Laser_Sight_Params params {};
	params.bpp__MeshComponent__pf = bpp__MeshComponent__pf;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x01846FB0
//		Name   -> Function Master_WeaponComponent.Master_WeaponComponent_C.Fixup Attach Point
//		Flags  -> (Native, Public, BlueprintCallable)
void UMaster_WeaponComponent_C::Fixup_Attach_Point()
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(28999);

	UMaster_WeaponComponent_C_Fixup_Attach_Point_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x01846EA0
//		Name   -> Function Master_WeaponComponent.Master_WeaponComponent_C.Fire Weapon
//		Flags  -> (Native, Public, BlueprintCallable)
// Parameters:
//		struct FFullFireRepData                            bpp__Data__pf                                              (Parm, NativeAccessSpecifierPublic)
//		bool                                               bpp__PlayNoChainFireMontage__pf                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UMaster_WeaponComponent_C::Fire_Weapon(const struct FFullFireRepData& bpp__Data__pf, bool bpp__PlayNoChainFireMontage__pf)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(28998);

	UMaster_WeaponComponent_C_Fire_Weapon_Params params {};
	params.bpp__Data__pf = bpp__Data__pf;
	params.bpp__PlayNoChainFireMontage__pf = bpp__PlayNoChainFireMontage__pf;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x01846E00
//		Name   -> Function Master_WeaponComponent.Master_WeaponComponent_C.Fire Montage Jump To Section
//		Flags  -> (Native, Public, BlueprintCallable)
// Parameters:
//		struct FString                                     bpp__Section__pf__const                                    (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UMaster_WeaponComponent_C::Fire_Montage_Jump_To_Section(const struct FString& bpp__Section__pf__const)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(28997);

	UMaster_WeaponComponent_C_Fire_Montage_Jump_To_Section_Params params {};
	params.bpp__Section__pf__const = bpp__Section__pf__const;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x01846CE0
//		Name   -> Function Master_WeaponComponent.Master_WeaponComponent_C.Filter Cosmetic Hit Results
//		Flags  -> (Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
//		TArray<struct FHitResult>                          bpp__TracexHitxResults__pfTT                               (Parm, OutParm, ZeroConstructor, ContainsInstancedReference, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		TArray<struct FHitResult>                          bpp__FilteredxHitxResults__pfTT                            (Parm, OutParm, ZeroConstructor, ContainsInstancedReference, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UMaster_WeaponComponent_C::Filter_Cosmetic_Hit_Results(TArray<struct FHitResult>* bpp__TracexHitxResults__pfTT, TArray<struct FHitResult>* bpp__FilteredxHitxResults__pfTT)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(28996);

	UMaster_WeaponComponent_C_Filter_Cosmetic_Hit_Results_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (bpp__TracexHitxResults__pfTT != nullptr)
		*bpp__TracexHitxResults__pfTT = params.bpp__TracexHitxResults__pfTT;
	if (bpp__FilteredxHitxResults__pfTT != nullptr)
		*bpp__FilteredxHitxResults__pfTT = params.bpp__FilteredxHitxResults__pfTT;

}


// Function:
//		Offset -> 0x01846C60
//		Name   -> Function Master_WeaponComponent.Master_WeaponComponent_C.ExecuteUbergraph_Master_WeaponComponent_6
//		Flags  -> (Final, Native, Public)
// Parameters:
//		int                                                bpp__EntryPoint__pf                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UMaster_WeaponComponent_C::ExecuteUbergraph_Master_WeaponComponent_6(int bpp__EntryPoint__pf)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(28995);

	UMaster_WeaponComponent_C_ExecuteUbergraph_Master_WeaponComponent_6_Params params {};
	params.bpp__EntryPoint__pf = bpp__EntryPoint__pf;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x01846BE0
//		Name   -> Function Master_WeaponComponent.Master_WeaponComponent_C.ExecuteUbergraph_Master_WeaponComponent_43
//		Flags  -> (Final, Native, Public)
// Parameters:
//		int                                                bpp__EntryPoint__pf                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UMaster_WeaponComponent_C::ExecuteUbergraph_Master_WeaponComponent_43(int bpp__EntryPoint__pf)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(28994);

	UMaster_WeaponComponent_C_ExecuteUbergraph_Master_WeaponComponent_43_Params params {};
	params.bpp__EntryPoint__pf = bpp__EntryPoint__pf;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x01846B60
//		Name   -> Function Master_WeaponComponent.Master_WeaponComponent_C.ExecuteUbergraph_Master_WeaponComponent_41
//		Flags  -> (Final, Native, Public)
// Parameters:
//		int                                                bpp__EntryPoint__pf                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UMaster_WeaponComponent_C::ExecuteUbergraph_Master_WeaponComponent_41(int bpp__EntryPoint__pf)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(28993);

	UMaster_WeaponComponent_C_ExecuteUbergraph_Master_WeaponComponent_41_Params params {};
	params.bpp__EntryPoint__pf = bpp__EntryPoint__pf;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x01846A60
//		Name   -> Function Master_WeaponComponent.Master_WeaponComponent_C.ExecuteUbergraph_Master_WeaponComponent_39
//		Flags  -> (Final, Native, Public)
// Parameters:
//		int                                                bpp__EntryPoint__pf                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UMaster_WeaponComponent_C::ExecuteUbergraph_Master_WeaponComponent_39(int bpp__EntryPoint__pf)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(28992);

	UMaster_WeaponComponent_C_ExecuteUbergraph_Master_WeaponComponent_39_Params params {};
	params.bpp__EntryPoint__pf = bpp__EntryPoint__pf;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x018469E0
//		Name   -> Function Master_WeaponComponent.Master_WeaponComponent_C.ExecuteUbergraph_Master_WeaponComponent_35
//		Flags  -> (Final, Native, Public)
// Parameters:
//		int                                                bpp__EntryPoint__pf                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UMaster_WeaponComponent_C::ExecuteUbergraph_Master_WeaponComponent_35(int bpp__EntryPoint__pf)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(28991);

	UMaster_WeaponComponent_C_ExecuteUbergraph_Master_WeaponComponent_35_Params params {};
	params.bpp__EntryPoint__pf = bpp__EntryPoint__pf;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x01846AE0
//		Name   -> Function Master_WeaponComponent.Master_WeaponComponent_C.ExecuteUbergraph_Master_WeaponComponent_4
//		Flags  -> (Final, Native, Public)
// Parameters:
//		int                                                bpp__EntryPoint__pf                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UMaster_WeaponComponent_C::ExecuteUbergraph_Master_WeaponComponent_4(int bpp__EntryPoint__pf)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(28990);

	UMaster_WeaponComponent_C_ExecuteUbergraph_Master_WeaponComponent_4_Params params {};
	params.bpp__EntryPoint__pf = bpp__EntryPoint__pf;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x01846960
//		Name   -> Function Master_WeaponComponent.Master_WeaponComponent_C.ExecuteUbergraph_Master_WeaponComponent_1
//		Flags  -> (Final, Native, Public)
// Parameters:
//		int                                                bpp__EntryPoint__pf                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UMaster_WeaponComponent_C::ExecuteUbergraph_Master_WeaponComponent_1(int bpp__EntryPoint__pf)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(28989);

	UMaster_WeaponComponent_C_ExecuteUbergraph_Master_WeaponComponent_1_Params params {};
	params.bpp__EntryPoint__pf = bpp__EntryPoint__pf;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x01846850
//		Name   -> Function Master_WeaponComponent.Master_WeaponComponent_C.Evaluate Shield Mesh Anim State
//		Flags  -> (Native, Public, BlueprintCallable)
// Parameters:
//		bool                                               bpp__ShieldxState__pfT                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UMaster_WeaponComponent_C::Evaluate_Shield_Mesh_Anim_State(bool bpp__ShieldxState__pfT)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(28988);

	UMaster_WeaponComponent_C_Evaluate_Shield_Mesh_Anim_State_Params params {};
	params.bpp__ShieldxState__pfT = bpp__ShieldxState__pfT;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x01846830
//		Name   -> Function Master_WeaponComponent.Master_WeaponComponent_C.Evaluate Revolver Chamber Rotate
//		Flags  -> (Native, Public, BlueprintCallable)
void UMaster_WeaponComponent_C::Evaluate_Revolver_Chamber_Rotate()
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(28987);

	UMaster_WeaponComponent_C_Evaluate_Revolver_Chamber_Rotate_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x01846750
//		Name   -> Function Master_WeaponComponent.Master_WeaponComponent_C.End Reload Weapon
//		Flags  -> (Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
//		bool                                               bpp__AbortxReloadxAnimation__pfTT                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		bool                                               bpp__CancelledxAxReload__pfTT                              (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UMaster_WeaponComponent_C::End_Reload_Weapon(bool bpp__AbortxReloadxAnimation__pfTT, bool* bpp__CancelledxAxReload__pfTT)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(28986);

	UMaster_WeaponComponent_C_End_Reload_Weapon_Params params {};
	params.bpp__AbortxReloadxAnimation__pfTT = bpp__AbortxReloadxAnimation__pfTT;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (bpp__CancelledxAxReload__pfTT != nullptr)
		*bpp__CancelledxAxReload__pfTT = params.bpp__CancelledxAxReload__pfTT;

}


// Function:
//		Offset -> 0x01846640
//		Name   -> Function Master_WeaponComponent.Master_WeaponComponent_C.EnableOrAddCameraModifier
//		Flags  -> (Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
//		class UClass*                                      bpp__Modifier__pf                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		int                                                bpp__PlayerIndex__pf                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		class UCameraModifier*                             bpp__ModifierxObject__pfT                                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UMaster_WeaponComponent_C::EnableOrAddCameraModifier(class UClass* bpp__Modifier__pf, int bpp__PlayerIndex__pf, class UCameraModifier** bpp__ModifierxObject__pfT)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(28985);

	UMaster_WeaponComponent_C_EnableOrAddCameraModifier_Params params {};
	params.bpp__Modifier__pf = bpp__Modifier__pf;
	params.bpp__PlayerIndex__pf = bpp__PlayerIndex__pf;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (bpp__ModifierxObject__pfT != nullptr)
		*bpp__ModifierxObject__pfT = params.bpp__ModifierxObject__pfT;

}


// Function:
//		Offset -> 0x01846590
//		Name   -> Function Master_WeaponComponent.Master_WeaponComponent_C.DropMagInternal
//		Flags  -> (Native, Public, BlueprintCallable)
// Parameters:
//		int                                                bpp__Index__pf                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UMaster_WeaponComponent_C::DropMagInternal(int bpp__Index__pf)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(28984);

	UMaster_WeaponComponent_C_DropMagInternal_Params params {};
	params.bpp__Index__pf = bpp__Index__pf;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x01846620
//		Name   -> Function Master_WeaponComponent.Master_WeaponComponent_C.DropMagazine
//		Flags  -> (Native, Event, Public, BlueprintCallable)
void UMaster_WeaponComponent_C::DropMagazine()
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(28983);

	UMaster_WeaponComponent_C_DropMagazine_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x01846570
//		Name   -> Function Master_WeaponComponent.Master_WeaponComponent_C.DetermineMagSize
//		Flags  -> (Native, Public, BlueprintCallable)
void UMaster_WeaponComponent_C::DetermineMagSize()
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(28982);

	UMaster_WeaponComponent_C_DetermineMagSize_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x01846460
//		Name   -> Function Master_WeaponComponent.Master_WeaponComponent_C.Delay Spawn Tracers
//		Flags  -> (Native, Public, HasOutParms, HasDefaults, BlueprintCallable)
// Parameters:
//		TArray<struct FHitResult>                          bpp__Hits__pf__const                                       (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, ContainsInstancedReference, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		struct FVector                                     bpp__TracexEnd__pfT__const                                 (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UMaster_WeaponComponent_C::Delay_Spawn_Tracers(TArray<struct FHitResult> bpp__Hits__pf__const, const struct FVector& bpp__TracexEnd__pfT__const)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(28981);

	UMaster_WeaponComponent_C_Delay_Spawn_Tracers_Params params {};
	params.bpp__Hits__pf__const = bpp__Hits__pf__const;
	params.bpp__TracexEnd__pfT__const = bpp__TracexEnd__pfT__const;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x018463B0
//		Name   -> Function Master_WeaponComponent.Master_WeaponComponent_C.Delay Spawn Spangs
//		Flags  -> (Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
//		TArray<struct FHitResult>                          bpp__Hits__pf                                              (Parm, OutParm, ZeroConstructor, ContainsInstancedReference, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UMaster_WeaponComponent_C::Delay_Spawn_Spangs(TArray<struct FHitResult>* bpp__Hits__pf)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(28980);

	UMaster_WeaponComponent_C_Delay_Spawn_Spangs_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (bpp__Hits__pf != nullptr)
		*bpp__Hits__pf = params.bpp__Hits__pf;

}


// Function:
//		Offset -> 0x01846250
//		Name   -> Function Master_WeaponComponent.Master_WeaponComponent_C.Delay Spawn Decals
//		Flags  -> (Native, Public, HasOutParms, HasDefaults, BlueprintCallable)
// Parameters:
//		TArray<struct FHitResult>                          bpp__Hits__pf__const                                       (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, ContainsInstancedReference, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		struct FVector                                     bpp__Start__pf                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		struct FVector                                     bpp__End__pf                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UMaster_WeaponComponent_C::Delay_Spawn_Decals(TArray<struct FHitResult> bpp__Hits__pf__const, const struct FVector& bpp__Start__pf, const struct FVector& bpp__End__pf)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(28979);

	UMaster_WeaponComponent_C_Delay_Spawn_Decals_Params params {};
	params.bpp__Hits__pf__const = bpp__Hits__pf__const;
	params.bpp__Start__pf = bpp__Start__pf;
	params.bpp__End__pf = bpp__End__pf;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x01846130
//		Name   -> Function Master_WeaponComponent.Master_WeaponComponent_C.CheckKillCamScope
//		Flags  -> (Native, Public, BlueprintCallable)
// Parameters:
//		class APawn*                                       bpp__ViewPawn__pf                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UMaster_WeaponComponent_C::CheckKillCamScope(class APawn* bpp__ViewPawn__pf)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(28978);

	UMaster_WeaponComponent_C_CheckKillCamScope_Params params {};
	params.bpp__ViewPawn__pf = bpp__ViewPawn__pf;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x01846070
//		Name   -> Function Master_WeaponComponent.Master_WeaponComponent_C.Character Combat State Changed
//		Flags  -> (Native, Public, BlueprintCallable)
// Parameters:
//		Killstreak_ECombatState                            bpp__OldCombatState__pf                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		Killstreak_ECombatState                            bpp__NewCombatState__pf                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UMaster_WeaponComponent_C::Character_Combat_State_Changed(Killstreak_ECombatState bpp__OldCombatState__pf, Killstreak_ECombatState bpp__NewCombatState__pf)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(28977);

	UMaster_WeaponComponent_C_Character_Combat_State_Changed_Params params {};
	params.bpp__OldCombatState__pf = bpp__OldCombatState__pf;
	params.bpp__NewCombatState__pf = bpp__NewCombatState__pf;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x01845FD0
//		Name   -> Function Master_WeaponComponent.Master_WeaponComponent_C.Can Spawn Tracer Now
//		Flags  -> (Native, Public, HasOutParms, BlueprintCallable, BlueprintPure)
// Parameters:
//		bool                                               bpp__CanxSpawnxxTracer__pfTTT                              (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UMaster_WeaponComponent_C::Can_Spawn_Tracer_Now(bool* bpp__CanxSpawnxxTracer__pfTTT)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(28976);

	UMaster_WeaponComponent_C_Can_Spawn_Tracer_Now_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (bpp__CanxSpawnxxTracer__pfTTT != nullptr)
		*bpp__CanxSpawnxxTracer__pfTTT = params.bpp__CanxSpawnxxTracer__pfTTT;

}


// Function:
//		Offset -> 0x01845FB0
//		Name   -> Function Master_WeaponComponent.Master_WeaponComponent_C.CancelReloadCosmetic
//		Flags  -> (BlueprintCosmetic, Native, Event, Public, BlueprintCallable)
void UMaster_WeaponComponent_C::CancelReloadCosmetic()
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(28975);

	UMaster_WeaponComponent_C_CancelReloadCosmetic_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x01845DE0
//		Name   -> Function Master_WeaponComponent.Master_WeaponComponent_C.Calculate Reload Time
//		Flags  -> (Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
//		class UAnimMontage*                                bpp__ReloadxMontage__pfT                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		class UAnimMontage*                                bpp__QuickxReloadxMontage__pfTT                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		float                                              bpp__PlayRate__pf                                          (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		class UAnimMontage*                                bpp__SelectedxMontage__pfT                                 (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		bool                                               bpp__IsxQuickReload__pfT                                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UMaster_WeaponComponent_C::Calculate_Reload_Time(class UAnimMontage* bpp__ReloadxMontage__pfT, class UAnimMontage* bpp__QuickxReloadxMontage__pfTT, float* bpp__PlayRate__pf, class UAnimMontage** bpp__SelectedxMontage__pfT, bool* bpp__IsxQuickReload__pfT)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(28974);

	UMaster_WeaponComponent_C_Calculate_Reload_Time_Params params {};
	params.bpp__ReloadxMontage__pfT = bpp__ReloadxMontage__pfT;
	params.bpp__QuickxReloadxMontage__pfTT = bpp__QuickxReloadxMontage__pfTT;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (bpp__PlayRate__pf != nullptr)
		*bpp__PlayRate__pf = params.bpp__PlayRate__pf;
	if (bpp__SelectedxMontage__pfT != nullptr)
		*bpp__SelectedxMontage__pfT = params.bpp__SelectedxMontage__pfT;
	if (bpp__IsxQuickReload__pfT != nullptr)
		*bpp__IsxQuickReload__pfT = params.bpp__IsxQuickReload__pfT;

}


// Function:
//		Offset -> 0x01845C10
//		Name   -> Function Master_WeaponComponent.Master_WeaponComponent_C.Calculate Multistage Reload Time
//		Flags  -> (Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
//		class UAnimMontage*                                bpp__ReloadxMontage__pfT                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		class UAnimMontage*                                bpp__QuickxReloadxMontage__pfTT                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		float                                              bpp__PlayRate__pf                                          (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		class UAnimMontage*                                bpp__SelectedxMontage__pfT                                 (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		bool                                               bpp__IsxQuickReload__pfT                                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UMaster_WeaponComponent_C::Calculate_Multistage_Reload_Time(class UAnimMontage* bpp__ReloadxMontage__pfT, class UAnimMontage* bpp__QuickxReloadxMontage__pfTT, float* bpp__PlayRate__pf, class UAnimMontage** bpp__SelectedxMontage__pfT, bool* bpp__IsxQuickReload__pfT)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(28973);

	UMaster_WeaponComponent_C_Calculate_Multistage_Reload_Time_Params params {};
	params.bpp__ReloadxMontage__pfT = bpp__ReloadxMontage__pfT;
	params.bpp__QuickxReloadxMontage__pfTT = bpp__QuickxReloadxMontage__pfTT;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (bpp__PlayRate__pf != nullptr)
		*bpp__PlayRate__pf = params.bpp__PlayRate__pf;
	if (bpp__SelectedxMontage__pfT != nullptr)
		*bpp__SelectedxMontage__pfT = params.bpp__SelectedxMontage__pfT;
	if (bpp__IsxQuickReload__pfT != nullptr)
		*bpp__IsxQuickReload__pfT = params.bpp__IsxQuickReload__pfT;

}


// Function:
//		Offset -> 0x01845BF0
//		Name   -> Function Master_WeaponComponent.Master_WeaponComponent_C.BuildupWeapon
//		Flags  -> (Native, Public, BlueprintCallable)
void UMaster_WeaponComponent_C::BuildupWeapon()
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(28972);

	UMaster_WeaponComponent_C_BuildupWeapon_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x01845BD0
//		Name   -> Function Master_WeaponComponent.Master_WeaponComponent_C.BlueprintPrepareKillCamPlayback
//		Flags  -> (Native, Event, Public)
void UMaster_WeaponComponent_C::BlueprintPrepareKillCamPlayback()
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(28971);

	UMaster_WeaponComponent_C_BlueprintPrepareKillCamPlayback_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x01845BB0
//		Name   -> Function Master_WeaponComponent.Master_WeaponComponent_C.BlueprintPersistentCosmeticsUpdate
//		Flags  -> (Native, Event, Public)
void UMaster_WeaponComponent_C::BlueprintPersistentCosmeticsUpdate()
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(28970);

	UMaster_WeaponComponent_C_BlueprintPersistentCosmeticsUpdate_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x01845B90
//		Name   -> Function Master_WeaponComponent.Master_WeaponComponent_C.AudioOnCooldown
//		Flags  -> (Native, Public, BlueprintCallable)
void UMaster_WeaponComponent_C::AudioOnCooldown()
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(28969);

	UMaster_WeaponComponent_C_AudioOnCooldown_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x01845B70
//		Name   -> Function Master_WeaponComponent.Master_WeaponComponent_C.Attach Weapon To Holster Socket
//		Flags  -> (Native, Public, BlueprintCallable)
void UMaster_WeaponComponent_C::Attach_Weapon_To_Holster_Socket()
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(28968);

	UMaster_WeaponComponent_C_Attach_Weapon_To_Holster_Socket_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x01845B50
//		Name   -> Function Master_WeaponComponent.Master_WeaponComponent_C.Attach Weapon To Active Socket
//		Flags  -> (Native, Public, BlueprintCallable)
void UMaster_WeaponComponent_C::Attach_Weapon_To_Active_Socket()
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(28967);

	UMaster_WeaponComponent_C_Attach_Weapon_To_Active_Socket_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x01845AA0
//		Name   -> Function Master_WeaponComponent.Master_WeaponComponent_C.AsyncComputeCosmeticHitsAndPlay
//		Flags  -> (Native, Public, BlueprintCallable)
// Parameters:
//		struct FFullFireRepData                            bpp__FirexData__pfT__const                                 (ConstParm, Parm, NativeAccessSpecifierPublic)
void UMaster_WeaponComponent_C::AsyncComputeCosmeticHitsAndPlay(const struct FFullFireRepData& bpp__FirexData__pfT__const)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(28966);

	UMaster_WeaponComponent_C_AsyncComputeCosmeticHitsAndPlay_Params params {};
	params.bpp__FirexData__pfT__const = bpp__FirexData__pfT__const;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x01845970
//		Name   -> Function Master_WeaponComponent.Master_WeaponComponent_C.Apply Spang From Hit Result
//		Flags  -> (Native, Public, BlueprintCallable)
// Parameters:
//		struct FHitResult                                  bpp__Hit__pf                                               (Parm, IsPlainOldData, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPublic)
void UMaster_WeaponComponent_C::Apply_Spang_From_Hit_Result(const struct FHitResult& bpp__Hit__pf)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(28965);

	UMaster_WeaponComponent_C_Apply_Spang_From_Hit_Result_Params params {};
	params.bpp__Hit__pf = bpp__Hit__pf;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x01845840
//		Name   -> Function Master_WeaponComponent.Master_WeaponComponent_C.ApplyDecalFromHit
//		Flags  -> (Native, Public, BlueprintCallable)
// Parameters:
//		struct FHitResult                                  bpp__Hit__pf                                               (Parm, IsPlainOldData, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPublic)
void UMaster_WeaponComponent_C::ApplyDecalFromHit(const struct FHitResult& bpp__Hit__pf)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(28964);

	UMaster_WeaponComponent_C_ApplyDecalFromHit_Params params {};
	params.bpp__Hit__pf = bpp__Hit__pf;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x018457B0
//		Name   -> Function Master_WeaponComponent.Master_WeaponComponent_C.Anim Init Set Weapon State
//		Flags  -> (Native, Public, BlueprintCallable)
// Parameters:
//		class UKSWeaponAnimInstance*                       bpp__KSxWeaponxAnimxInst__pfTTT                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UMaster_WeaponComponent_C::Anim_Init_Set_Weapon_State(class UKSWeaponAnimInstance* bpp__KSxWeaponxAnimxInst__pfTTT)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(28963);

	UMaster_WeaponComponent_C_Anim_Init_Set_Weapon_State_Params params {};
	params.bpp__KSxWeaponxAnimxInst__pfTTT = bpp__KSxWeaponxAnimxInst__pfTTT;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x01845720
//		Name   -> Function Master_WeaponComponent.Master_WeaponComponent_C.Anim Init Set Use Weapon Additive
//		Flags  -> (Native, Public, BlueprintCallable)
// Parameters:
//		class UKSWeaponAnimInstance*                       bpp__KSxWeaponxAnimxInst__pfTTT                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UMaster_WeaponComponent_C::Anim_Init_Set_Use_Weapon_Additive(class UKSWeaponAnimInstance* bpp__KSxWeaponxAnimxInst__pfTTT)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(28962);

	UMaster_WeaponComponent_C_Anim_Init_Set_Use_Weapon_Additive_Params params {};
	params.bpp__KSxWeaponxAnimxInst__pfTTT = bpp__KSxWeaponxAnimxInst__pfTTT;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x01845690
//		Name   -> Function Master_WeaponComponent.Master_WeaponComponent_C.Anim Init Set Shield Is Active
//		Flags  -> (Native, Public, BlueprintCallable)
// Parameters:
//		class UKSWeaponAnimInstance*                       bpp__KSxWeaponxAnimxInst__pfTTT                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UMaster_WeaponComponent_C::Anim_Init_Set_Shield_Is_Active(class UKSWeaponAnimInstance* bpp__KSxWeaponxAnimxInst__pfTTT)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(28961);

	UMaster_WeaponComponent_C_Anim_Init_Set_Shield_Is_Active_Params params {};
	params.bpp__KSxWeaponxAnimxInst__pfTTT = bpp__KSxWeaponxAnimxInst__pfTTT;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x01845600
//		Name   -> Function Master_WeaponComponent.Master_WeaponComponent_C.Anim Init Set Scope Mesh Scale
//		Flags  -> (Native, Public, BlueprintCallable)
// Parameters:
//		class UKSWeaponAnimInstance*                       bpp__KSxWeaponxAnimxInst__pfTTT                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UMaster_WeaponComponent_C::Anim_Init_Set_Scope_Mesh_Scale(class UKSWeaponAnimInstance* bpp__KSxWeaponxAnimxInst__pfTTT)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(28960);

	UMaster_WeaponComponent_C_Anim_Init_Set_Scope_Mesh_Scale_Params params {};
	params.bpp__KSxWeaponxAnimxInst__pfTTT = bpp__KSxWeaponxAnimxInst__pfTTT;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x01845530
//		Name   -> Function Master_WeaponComponent.Master_WeaponComponent_C.Anim Init Set Lobby State
//		Flags  -> (Native, Public, BlueprintCallable)
// Parameters:
//		class UKSWeaponAnimInstance*                       bpp__KSxWeaponxAnimxInst__pfTTT                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		class UAnimInstance*                               bpp__BackupxAnimxInst__pfTT                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UMaster_WeaponComponent_C::Anim_Init_Set_Lobby_State(class UKSWeaponAnimInstance* bpp__KSxWeaponxAnimxInst__pfTTT, class UAnimInstance* bpp__BackupxAnimxInst__pfTT)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(28959);

	UMaster_WeaponComponent_C_Anim_Init_Set_Lobby_State_Params params {};
	params.bpp__KSxWeaponxAnimxInst__pfTTT = bpp__KSxWeaponxAnimxInst__pfTTT;
	params.bpp__BackupxAnimxInst__pfTT = bpp__BackupxAnimxInst__pfTT;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x018454A0
//		Name   -> Function Master_WeaponComponent.Master_WeaponComponent_C.Anim Init Set Hide Magazine
//		Flags  -> (Native, Public, BlueprintCallable)
// Parameters:
//		class UKSWeaponAnimInstance*                       bpp__KSxWeaponxAnimxInst__pfTTT                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UMaster_WeaponComponent_C::Anim_Init_Set_Hide_Magazine(class UKSWeaponAnimInstance* bpp__KSxWeaponxAnimxInst__pfTTT)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(28958);

	UMaster_WeaponComponent_C_Anim_Init_Set_Hide_Magazine_Params params {};
	params.bpp__KSxWeaponxAnimxInst__pfTTT = bpp__KSxWeaponxAnimxInst__pfTTT;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x01845410
//		Name   -> Function Master_WeaponComponent.Master_WeaponComponent_C.Anim Init Set Folding Stock
//		Flags  -> (Native, Public, BlueprintCallable)
// Parameters:
//		class UKSWeaponAnimInstance*                       bpp__KSxWeaponxAnimxInst__pfTTT                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UMaster_WeaponComponent_C::Anim_Init_Set_Folding_Stock(class UKSWeaponAnimInstance* bpp__KSxWeaponxAnimxInst__pfTTT)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(28957);

	UMaster_WeaponComponent_C_Anim_Init_Set_Folding_Stock_Params params {};
	params.bpp__KSxWeaponxAnimxInst__pfTTT = bpp__KSxWeaponxAnimxInst__pfTTT;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x01845380
//		Name   -> Function Master_WeaponComponent.Master_WeaponComponent_C.Anim Init Set Disable Alternate Mirroring (Temp)
//		Flags  -> (Native, Public, BlueprintCallable)
// Parameters:
//		class UKSWeaponAnimInstance*                       bpp__KSxWeaponxAnimxInst__pfTTT                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UMaster_WeaponComponent_C::Anim_Init_Set_Disable_Alternate_Mirroring__Temp_(class UKSWeaponAnimInstance* bpp__KSxWeaponxAnimxInst__pfTTT)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(28956);

	UMaster_WeaponComponent_C_Anim_Init_Set_Disable_Alternate_Mirroring__Temp__Params params {};
	params.bpp__KSxWeaponxAnimxInst__pfTTT = bpp__KSxWeaponxAnimxInst__pfTTT;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x018452B0
//		Name   -> Function Master_WeaponComponent.Master_WeaponComponent_C.Anim Init On Weapon Mesh
//		Flags  -> (Native, Public, BlueprintCallable)
// Parameters:
//		class USkinnableSkeletalMeshComponent*             bpp__SkelComp__pf                                          (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		class UAnimInstance*                               bpp__AnimInstance__pf                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UMaster_WeaponComponent_C::Anim_Init_On_Weapon_Mesh(class USkinnableSkeletalMeshComponent* bpp__SkelComp__pf, class UAnimInstance* bpp__AnimInstance__pf)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(28955);

	UMaster_WeaponComponent_C_Anim_Init_On_Weapon_Mesh_Params params {};
	params.bpp__SkelComp__pf = bpp__SkelComp__pf;
	params.bpp__AnimInstance__pf = bpp__AnimInstance__pf;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x01845290
//		Name   -> Function Master_WeaponComponent.Master_WeaponComponent_C.Ancillary Mesh Scale Set
//		Flags  -> (Native, Public, BlueprintCallable)
void UMaster_WeaponComponent_C::Ancillary_Mesh_Scale_Set()
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(28954);

	UMaster_WeaponComponent_C_Ancillary_Mesh_Scale_Set_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x01845270
//		Name   -> Function Master_WeaponComponent.Master_WeaponComponent_C.Aim Over Shoulder Check Point
//		Flags  -> (Native, Public, BlueprintCallable)
void UMaster_WeaponComponent_C::Aim_Over_Shoulder_Check_Point()
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(28953);

	UMaster_WeaponComponent_C_Aim_Over_Shoulder_Check_Point_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x018450D0
//		Name   -> Function Master_WeaponComponent.Master_WeaponComponent_C.After Spawn Tracers Delay
//		Flags  -> (Native, Public, HasOutParms, HasDefaults, BlueprintCallable)
// Parameters:
//		bool                                               bpp__bBlockingHit__pf                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		TArray<struct FHitResult>                          bpp__OutHits__pf__const                                    (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, ContainsInstancedReference, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		struct FVector                                     bpp__Start__pf__const                                      (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		struct FVector                                     bpp__End__pf__const                                        (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UMaster_WeaponComponent_C::After_Spawn_Tracers_Delay(bool bpp__bBlockingHit__pf, TArray<struct FHitResult> bpp__OutHits__pf__const, const struct FVector& bpp__Start__pf__const, const struct FVector& bpp__End__pf__const)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(28952);

	UMaster_WeaponComponent_C_After_Spawn_Tracers_Delay_Params params {};
	params.bpp__bBlockingHit__pf = bpp__bBlockingHit__pf;
	params.bpp__OutHits__pf__const = bpp__OutHits__pf__const;
	params.bpp__Start__pf__const = bpp__Start__pf__const;
	params.bpp__End__pf__const = bpp__End__pf__const;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x01844F30
//		Name   -> Function Master_WeaponComponent.Master_WeaponComponent_C.After Spawn Spangs Delay
//		Flags  -> (Native, Public, HasOutParms, HasDefaults, BlueprintCallable)
// Parameters:
//		bool                                               bpp__bBlockingHit__pf                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		TArray<struct FHitResult>                          bpp__OutHits__pf__const                                    (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, ContainsInstancedReference, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		struct FVector                                     bpp__Start__pf__const                                      (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		struct FVector                                     bpp__End__pf__const                                        (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UMaster_WeaponComponent_C::After_Spawn_Spangs_Delay(bool bpp__bBlockingHit__pf, TArray<struct FHitResult> bpp__OutHits__pf__const, const struct FVector& bpp__Start__pf__const, const struct FVector& bpp__End__pf__const)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(28951);

	UMaster_WeaponComponent_C_After_Spawn_Spangs_Delay_Params params {};
	params.bpp__bBlockingHit__pf = bpp__bBlockingHit__pf;
	params.bpp__OutHits__pf__const = bpp__OutHits__pf__const;
	params.bpp__Start__pf__const = bpp__Start__pf__const;
	params.bpp__End__pf__const = bpp__End__pf__const;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x01844D90
//		Name   -> Function Master_WeaponComponent.Master_WeaponComponent_C.After Spawn Decals Delay
//		Flags  -> (Native, Public, HasOutParms, HasDefaults, BlueprintCallable)
// Parameters:
//		bool                                               bpp__bBlockingHit__pf                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		TArray<struct FHitResult>                          bpp__OutHits__pf__const                                    (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, ContainsInstancedReference, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		struct FVector                                     bpp__Start__pf__const                                      (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		struct FVector                                     bpp__End__pf__const                                        (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UMaster_WeaponComponent_C::After_Spawn_Decals_Delay(bool bpp__bBlockingHit__pf, TArray<struct FHitResult> bpp__OutHits__pf__const, const struct FVector& bpp__Start__pf__const, const struct FVector& bpp__End__pf__const)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(28950);

	UMaster_WeaponComponent_C_After_Spawn_Decals_Delay_Params params {};
	params.bpp__bBlockingHit__pf = bpp__bBlockingHit__pf;
	params.bpp__OutHits__pf__const = bpp__OutHits__pf__const;
	params.bpp__Start__pf__const = bpp__Start__pf__const;
	params.bpp__End__pf__const = bpp__End__pf__const;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> DelegateFunction Master_WeaponComponent.Master_WeaponComponent_C.OnWeaponComponentStateChanged__DelegateSignature
//		Flags  -> (Public, Delegate)
// Parameters:
//		class UKSWeaponComponent*                          bpp__WeaponComponent__pf                                   (ConstParm, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		Killstreak_EWeaponStateNew                         bpp__OldState__pf                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		Killstreak_EWeaponStateNew                         bpp__NewState__pf                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UMaster_WeaponComponent_C::OnWeaponComponentStateChanged__DelegateSignature(class UKSWeaponComponent* bpp__WeaponComponent__pf, Killstreak_EWeaponStateNew bpp__OldState__pf, Killstreak_EWeaponStateNew bpp__NewState__pf)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(28949);

	UMaster_WeaponComponent_C_OnWeaponComponentStateChanged__DelegateSignature_Params params {};
	params.bpp__WeaponComponent__pf = bpp__WeaponComponent__pf;
	params.bpp__OldState__pf = bpp__OldState__pf;
	params.bpp__NewState__pf = bpp__NewState__pf;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> DelegateFunction Master_WeaponComponent.Master_WeaponComponent_C.OnPossessedBy__DelegateSignature
//		Flags  -> (Public, Delegate)
// Parameters:
//		class AController*                                 bpp__NewController__pf                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UMaster_WeaponComponent_C::OnPossessedBy__DelegateSignature(class AController* bpp__NewController__pf)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(28948);

	UMaster_WeaponComponent_C_OnPossessedBy__DelegateSignature_Params params {};
	params.bpp__NewController__pf = bpp__NewController__pf;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> DelegateFunction Master_WeaponComponent.Master_WeaponComponent_C.OnCombatStateChanged__DelegateSignature
//		Flags  -> (Public, Delegate)
// Parameters:
//		Killstreak_ECombatState                            bpp__OldCombatState__pf                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		Killstreak_ECombatState                            bpp__NewCombatState__pf                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UMaster_WeaponComponent_C::OnCombatStateChanged__DelegateSignature(Killstreak_ECombatState bpp__OldCombatState__pf, Killstreak_ECombatState bpp__NewCombatState__pf)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(28947);

	UMaster_WeaponComponent_C_OnCombatStateChanged__DelegateSignature_Params params {};
	params.bpp__OldCombatState__pf = bpp__OldCombatState__pf;
	params.bpp__NewCombatState__pf = bpp__NewCombatState__pf;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> DelegateFunction Master_WeaponComponent.Master_WeaponComponent_C.OnCharacterFoundationKilled__DelegateSignature
//		Flags  -> (Public, Delegate)
// Parameters:
//		class AKSCharacterFoundation*                      bpp__KillerCharacter__pf                                   (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		class AKSCharacterFoundation*                      bpp__KilledCharacter__pf                                   (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UMaster_WeaponComponent_C::OnCharacterFoundationKilled__DelegateSignature(class AKSCharacterFoundation* bpp__KillerCharacter__pf, class AKSCharacterFoundation* bpp__KilledCharacter__pf)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(28946);

	UMaster_WeaponComponent_C_OnCharacterFoundationKilled__DelegateSignature_Params params {};
	params.bpp__KillerCharacter__pf = bpp__KillerCharacter__pf;
	params.bpp__KilledCharacter__pf = bpp__KilledCharacter__pf;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> DelegateFunction Master_WeaponComponent.Master_WeaponComponent_C.OnAnimInitializedOnSkinnableMesh__DelegateSignature
//		Flags  -> (Public, Delegate)
// Parameters:
//		class USkinnableSkeletalMeshComponent*             bpp__SkinnableSkelComp__pf                                 (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		class UAnimInstance*                               bpp__AnimInstance__pf                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UMaster_WeaponComponent_C::OnAnimInitializedOnSkinnableMesh__DelegateSignature(class USkinnableSkeletalMeshComponent* bpp__SkinnableSkelComp__pf, class UAnimInstance* bpp__AnimInstance__pf)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(28945);

	UMaster_WeaponComponent_C_OnAnimInitializedOnSkinnableMesh__DelegateSignature_Params params {};
	params.bpp__SkinnableSkelComp__pf = bpp__SkinnableSkelComp__pf;
	params.bpp__AnimInstance__pf = bpp__AnimInstance__pf;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> DelegateFunction Master_WeaponComponent.Master_WeaponComponent_C.OnAnimInitialized__DelegateSignature
//		Flags  -> (Public, Delegate)
void UMaster_WeaponComponent_C::OnAnimInitialized__DelegateSignature()
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(28944);

	UMaster_WeaponComponent_C_OnAnimInitialized__DelegateSignature_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
