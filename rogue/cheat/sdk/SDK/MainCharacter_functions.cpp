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
//		Name   -> DelegateFunction MainCharacter.MainCharacter_C.OnPrimaryTwoWeaponHolstered__DelegateSignature
//		Flags  -> (MulticastDelegate, Public, Delegate)
// Parameters:
//		class UKSWeaponComponent*                          bpp__WeaponComponent__pf                                   (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		bool                                               bpp__PrimaryTwoHolstered__pf                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void AMainCharacter_C::OnPrimaryTwoWeaponHolstered__DelegateSignature(class UKSWeaponComponent* bpp__WeaponComponent__pf, bool bpp__PrimaryTwoHolstered__pf)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(41938);

	AMainCharacter_C_OnPrimaryTwoWeaponHolstered__DelegateSignature_Params params {};
	params.bpp__WeaponComponent__pf = bpp__WeaponComponent__pf;
	params.bpp__PrimaryTwoHolstered__pf = bpp__PrimaryTwoHolstered__pf;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> DelegateFunction MainCharacter.MainCharacter_C.OnPrimaryOneWeaponHolstered__DelegateSignature
//		Flags  -> (MulticastDelegate, Public, Delegate)
// Parameters:
//		class UKSWeaponComponent*                          bpp__WeaponComponent__pf                                   (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		bool                                               bpp__PrimaryOneHolstered__pf                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void AMainCharacter_C::OnPrimaryOneWeaponHolstered__DelegateSignature(class UKSWeaponComponent* bpp__WeaponComponent__pf, bool bpp__PrimaryOneHolstered__pf)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(41937);

	AMainCharacter_C_OnPrimaryOneWeaponHolstered__DelegateSignature_Params params {};
	params.bpp__WeaponComponent__pf = bpp__WeaponComponent__pf;
	params.bpp__PrimaryOneHolstered__pf = bpp__PrimaryOneHolstered__pf;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x0183DFB0
//		Name   -> Function MainCharacter.MainCharacter_C.Zipline Pulley Unhide
//		Flags  -> (Native, Public, BlueprintCallable)
void AMainCharacter_C::Zipline_Pulley_Unhide()
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(41936);

	AMainCharacter_C_Zipline_Pulley_Unhide_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x0183DF90
//		Name   -> Function MainCharacter.MainCharacter_C.Zipline Pulley Hide
//		Flags  -> (Native, Public, BlueprintCallable)
void AMainCharacter_C::Zipline_Pulley_Hide()
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(41935);

	AMainCharacter_C_Zipline_Pulley_Hide_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x0183DEF0
//		Name   -> Function MainCharacter.MainCharacter_C.WasLastHitHeadshot
//		Flags  -> (Native, Public, HasOutParms, BlueprintCallable, BlueprintPure)
// Parameters:
//		bool                                               bpp__bHeadshot__pf                                         (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void AMainCharacter_C::WasLastHitHeadshot(bool* bpp__bHeadshot__pf)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(41934);

	AMainCharacter_C_WasLastHitHeadshot_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (bpp__bHeadshot__pf != nullptr)
		*bpp__bHeadshot__pf = params.bpp__bHeadshot__pf;

}


// Function:
//		Offset -> 0x0183DE10
//		Name   -> Function MainCharacter.MainCharacter_C.VerifyLastHitDamageType
//		Flags  -> (Native, Public, HasOutParms, BlueprintCallable, BlueprintPure)
// Parameters:
//		class UClass*                                      bpp__DamageType__pf                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		bool                                               bpp__IsRelatedToThisType__pf                               (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void AMainCharacter_C::VerifyLastHitDamageType(class UClass* bpp__DamageType__pf, bool* bpp__IsRelatedToThisType__pf)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(41933);

	AMainCharacter_C_VerifyLastHitDamageType_Params params {};
	params.bpp__DamageType__pf = bpp__DamageType__pf;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (bpp__IsRelatedToThisType__pf != nullptr)
		*bpp__IsRelatedToThisType__pf = params.bpp__IsRelatedToThisType__pf;

}


// Function:
//		Offset -> 0x0183DD30
//		Name   -> Function MainCharacter.MainCharacter_C.VerifyLastHitBone
//		Flags  -> (Native, Public, HasOutParms, BlueprintCallable, BlueprintPure)
// Parameters:
//		struct FName                                       bpp__ParentBoneName__pf                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		bool                                               bpp__IsRelatedToThisBone__pf                               (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void AMainCharacter_C::VerifyLastHitBone(const struct FName& bpp__ParentBoneName__pf, bool* bpp__IsRelatedToThisBone__pf)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(41932);

	AMainCharacter_C_VerifyLastHitBone_Params params {};
	params.bpp__ParentBoneName__pf = bpp__ParentBoneName__pf;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (bpp__IsRelatedToThisBone__pf != nullptr)
		*bpp__IsRelatedToThisBone__pf = params.bpp__IsRelatedToThisBone__pf;

}


// Function:
//		Offset -> 0x0183DD10
//		Name   -> Function MainCharacter.MainCharacter_C.UserConstructionScript
//		Flags  -> (Native, Event, Public, BlueprintCallable)
void AMainCharacter_C::UserConstructionScript()
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(41931);

	AMainCharacter_C_UserConstructionScript_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x0183DCF0
//		Name   -> Function MainCharacter.MainCharacter_C.Update Flash Bang PP
//		Flags  -> (Native, Public, BlueprintCallable)
void AMainCharacter_C::Update_Flash_Bang_PP()
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(41930);

	AMainCharacter_C_Update_Flash_Bang_PP_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x0183DBB0
//		Name   -> Function MainCharacter.MainCharacter_C.Update Action Camera
//		Flags  -> (Native, Public, HasDefaults, BlueprintCallable)
// Parameters:
//		struct FVector                                     bpp__CameraxRotation__pfT                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		bool                                               bpp__UsesxRotation__pfT                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		struct FVector                                     bpp__CameraxOffset__pfT                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void AMainCharacter_C::Update_Action_Camera(const struct FVector& bpp__CameraxRotation__pfT, bool bpp__UsesxRotation__pfT, const struct FVector& bpp__CameraxOffset__pfT)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(41929);

	AMainCharacter_C_Update_Action_Camera_Params params {};
	params.bpp__CameraxRotation__pfT = bpp__CameraxRotation__pfT;
	params.bpp__UsesxRotation__pfT = bpp__UsesxRotation__pfT;
	params.bpp__CameraxOffset__pfT = bpp__CameraxOffset__pfT;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x0183DAA0
//		Name   -> Function MainCharacter.MainCharacter_C.UpdateRagdollOnGround
//		Flags  -> (Net, Native, Event, NetMulticast, Public, BlueprintCallable)
// Parameters:
//		bool                                               bpp__IsGrounded__pf                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void AMainCharacter_C::UpdateRagdollOnGround(bool bpp__IsGrounded__pf)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(41928);

	AMainCharacter_C_UpdateRagdollOnGround_Params params {};
	params.bpp__IsGrounded__pf = bpp__IsGrounded__pf;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x0183DA80
//		Name   -> Function MainCharacter.MainCharacter_C.UpdateRagdollMeshLocation
//		Flags  -> (Native, Public, BlueprintCallable)
void AMainCharacter_C::UpdateRagdollMeshLocation()
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(41927);

	AMainCharacter_C_UpdateRagdollMeshLocation_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x0183DB30
//		Name   -> Function MainCharacter.MainCharacter_C.UpdateRagdoll
//		Flags  -> (Native, Public, BlueprintCallable)
// Parameters:
//		float                                              bpp__DeltaSeconds__pf                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void AMainCharacter_C::UpdateRagdoll(float bpp__DeltaSeconds__pf)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(41926);

	AMainCharacter_C_UpdateRagdoll_Params params {};
	params.bpp__DeltaSeconds__pf = bpp__DeltaSeconds__pf;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x0183D9F0
//		Name   -> Function MainCharacter.MainCharacter_C.UpdatePlayerState
//		Flags  -> (Native, Public, BlueprintCallable)
// Parameters:
//		class APlayerState*                                bpp__Player__pf                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void AMainCharacter_C::UpdatePlayerState(class APlayerState* bpp__Player__pf)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(41925);

	AMainCharacter_C_UpdatePlayerState_Params params {};
	params.bpp__Player__pf = bpp__Player__pf;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x0183D9D0
//		Name   -> Function MainCharacter.MainCharacter_C.UpdateHealthPP
//		Flags  -> (Native, Public, BlueprintCallable)
void AMainCharacter_C::UpdateHealthPP()
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(41924);

	AMainCharacter_C_UpdateHealthPP_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x0183D9B0
//		Name   -> Function MainCharacter.MainCharacter_C.UpdateDebugHealthVisibility
//		Flags  -> (Native, Event, Public, BlueprintCallable)
void AMainCharacter_C::UpdateDebugHealthVisibility()
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(41923);

	AMainCharacter_C_UpdateDebugHealthVisibility_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x0183D990
//		Name   -> Function MainCharacter.MainCharacter_C.UnhideZiplinePulley
//		Flags  -> (Native, Event, Public, BlueprintCallable)
void AMainCharacter_C::UnhideZiplinePulley()
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(41922);

	AMainCharacter_C_UnhideZiplinePulley_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x0183D970
//		Name   -> Function MainCharacter.MainCharacter_C.UnhideUplineDevice
//		Flags  -> (Native, Event, Public, BlueprintCallable)
void AMainCharacter_C::UnhideUplineDevice()
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(41921);

	AMainCharacter_C_UnhideUplineDevice_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x0183D930
//		Name   -> Function MainCharacter.MainCharacter_C.TurnOffCapsulePhysics_Server
//		Flags  -> (Net, Native, Event, Public, NetServer, BlueprintCallable)
void AMainCharacter_C::TurnOffCapsulePhysics_Server()
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(41920);

	AMainCharacter_C_TurnOffCapsulePhysics_Server_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x0183D950
//		Name   -> Function MainCharacter.MainCharacter_C.TurnOffCapsulePhysics
//		Flags  -> (Net, Native, Event, NetMulticast, Public, BlueprintCallable)
void AMainCharacter_C::TurnOffCapsulePhysics()
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(41919);

	AMainCharacter_C_TurnOffCapsulePhysics_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x0183D910
//		Name   -> Function MainCharacter.MainCharacter_C.Transition To Main Camera
//		Flags  -> (Native, Public, BlueprintCallable)
void AMainCharacter_C::Transition_To_Main_Camera()
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(41918);

	AMainCharacter_C_Transition_To_Main_Camera_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x0183D8F0
//		Name   -> Function MainCharacter.MainCharacter_C.Transition To ADS Camera
//		Flags  -> (Native, Public, BlueprintCallable)
void AMainCharacter_C::Transition_To_ADS_Camera()
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(41917);

	AMainCharacter_C_Transition_To_ADS_Camera_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x0183D8D0
//		Name   -> Function MainCharacter.MainCharacter_C.SwitchToSnapshotPose
//		Flags  -> (Native, Public, BlueprintCallable)
void AMainCharacter_C::SwitchToSnapshotPose()
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(41916);

	AMainCharacter_C_SwitchToSnapshotPose_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x0183D8B0
//		Name   -> Function MainCharacter.MainCharacter_C.StopReviveSFX
//		Flags  -> (Native, Public, BlueprintCallable)
void AMainCharacter_C::StopReviveSFX()
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(41915);

	AMainCharacter_C_StopReviveSFX_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x0183D890
//		Name   -> Function MainCharacter.MainCharacter_C.StopLowHealthSFX
//		Flags  -> (Native, Public, BlueprintCallable)
void AMainCharacter_C::StopLowHealthSFX()
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(41914);

	AMainCharacter_C_StopLowHealthSFX_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x0183D870
//		Name   -> Function MainCharacter.MainCharacter_C.Start Viewed Down Hit
//		Flags  -> (Native, Public, BlueprintCallable)
void AMainCharacter_C::Start_Viewed_Down_Hit()
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(41913);

	AMainCharacter_C_Start_Viewed_Down_Hit_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x0183D850
//		Name   -> Function MainCharacter.MainCharacter_C.StartImmunity__UpdateFunc
//		Flags  -> (Native, Public)
void AMainCharacter_C::StartImmunity__UpdateFunc()
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(41912);

	AMainCharacter_C_StartImmunity__UpdateFunc_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x0183D830
//		Name   -> Function MainCharacter.MainCharacter_C.StartImmunity__FinishedFunc
//		Flags  -> (Native, Public)
void AMainCharacter_C::StartImmunity__FinishedFunc()
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(41911);

	AMainCharacter_C_StartImmunity__FinishedFunc_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x0183D810
//		Name   -> Function MainCharacter.MainCharacter_C.StartHacking
//		Flags  -> (Native, Event, Public, BlueprintCallable)
void AMainCharacter_C::StartHacking()
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(41910);

	AMainCharacter_C_StartHacking_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x0183D7F0
//		Name   -> Function MainCharacter.MainCharacter_C.SprintFOVTimeline__UpdateFunc
//		Flags  -> (Native, Public)
void AMainCharacter_C::SprintFOVTimeline__UpdateFunc()
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(41909);

	AMainCharacter_C_SprintFOVTimeline__UpdateFunc_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x0183D7D0
//		Name   -> Function MainCharacter.MainCharacter_C.SprintFOVTimeline__FinishedFunc
//		Flags  -> (Native, Public)
void AMainCharacter_C::SprintFOVTimeline__FinishedFunc()
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(41908);

	AMainCharacter_C_SprintFOVTimeline__FinishedFunc_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x0183D740
//		Name   -> Function MainCharacter.MainCharacter_C.ShowDebugLocation
//		Flags  -> (Native, Event, Public)
// Parameters:
//		bool                                               bpp__bVisible__pf                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void AMainCharacter_C::ShowDebugLocation(bool bpp__bVisible__pf)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(41907);

	AMainCharacter_C_ShowDebugLocation_Params params {};
	params.bpp__bVisible__pf = bpp__bVisible__pf;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x0183D6A0
//		Name   -> Function MainCharacter.MainCharacter_C.ShouldLastHitLaunchIntoRagdoll
//		Flags  -> (Native, Public, HasOutParms, BlueprintCallable, BlueprintPure)
// Parameters:
//		bool                                               bpp__bShouldRagdoll__pf                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void AMainCharacter_C::ShouldLastHitLaunchIntoRagdoll(bool* bpp__bShouldRagdoll__pf)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(41906);

	AMainCharacter_C_ShouldLastHitLaunchIntoRagdoll_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (bpp__bShouldRagdoll__pf != nullptr)
		*bpp__bShouldRagdoll__pf = params.bpp__bShouldRagdoll__pf;

}


// Function:
//		Offset -> 0x0183D5A0
//		Name   -> Function MainCharacter.MainCharacter_C.SFXStateChangeReset
//		Flags  -> (Native, Public, BlueprintCallable)
void AMainCharacter_C::SFXStateChangeReset()
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(41905);

	AMainCharacter_C_SFXStateChangeReset_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x0183D580
//		Name   -> Function MainCharacter.MainCharacter_C.SFXStateChangeMax
//		Flags  -> (Native, Public, BlueprintCallable)
void AMainCharacter_C::SFXStateChangeMax()
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(41904);

	AMainCharacter_C_SFXStateChangeMax_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x0183D560
//		Name   -> Function MainCharacter.MainCharacter_C.SFXStateChangeHalf
//		Flags  -> (Native, Public, BlueprintCallable)
void AMainCharacter_C::SFXStateChangeHalf()
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(41903);

	AMainCharacter_C_SFXStateChangeHalf_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x0183D540
//		Name   -> Function MainCharacter.MainCharacter_C.SFXRingHalfSTOP
//		Flags  -> (Native, Public, BlueprintCallable)
void AMainCharacter_C::SFXRingHalfSTOP()
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(41902);

	AMainCharacter_C_SFXRingHalfSTOP_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x0183D520
//		Name   -> Function MainCharacter.MainCharacter_C.SFXRingHalfPlay
//		Flags  -> (Native, Public, BlueprintCallable)
void AMainCharacter_C::SFXRingHalfPlay()
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(41901);

	AMainCharacter_C_SFXRingHalfPlay_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x0183D500
//		Name   -> Function MainCharacter.MainCharacter_C.SFXRingFullSTOP
//		Flags  -> (Native, Public, BlueprintCallable)
void AMainCharacter_C::SFXRingFullSTOP()
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(41900);

	AMainCharacter_C_SFXRingFullSTOP_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x0183D4E0
//		Name   -> Function MainCharacter.MainCharacter_C.SFXRingFullPlay
//		Flags  -> (Native, Public, BlueprintCallable)
void AMainCharacter_C::SFXRingFullPlay()
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(41899);

	AMainCharacter_C_SFXRingFullPlay_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x0183D680
//		Name   -> Function MainCharacter.MainCharacter_C.Set up ADS Blur Dynamic Material
//		Flags  -> (Native, Public, BlueprintCallable)
void AMainCharacter_C::Set_up_ADS_Blur_Dynamic_Material()
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(41898);

	AMainCharacter_C_Set_up_ADS_Blur_Dynamic_Material_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x0183D660
//		Name   -> Function MainCharacter.MainCharacter_C.Set Health SFX RTPC
//		Flags  -> (Native, Public, BlueprintCallable)
void AMainCharacter_C::Set_Health_SFX_RTPC()
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(41897);

	AMainCharacter_C_Set_Health_SFX_RTPC_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x0183D640
//		Name   -> Function MainCharacter.MainCharacter_C.Setup Debug Info Widget
//		Flags  -> (Native, Public, BlueprintCallable)
void AMainCharacter_C::Setup_Debug_Info_Widget()
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(41896);

	AMainCharacter_C_Setup_Debug_Info_Widget_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x0183D5C0
//		Name   -> Function MainCharacter.MainCharacter_C.SetPostProcessHealthValue
//		Flags  -> (Native, Public, BlueprintCallable)
// Parameters:
//		float                                              bpp__Health__pf                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void AMainCharacter_C::SetPostProcessHealthValue(float bpp__Health__pf)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(41895);

	AMainCharacter_C_SetPostProcessHealthValue_Params params {};
	params.bpp__Health__pf = bpp__Health__pf;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x0183D4C0
//		Name   -> Function MainCharacter.MainCharacter_C.RestoreNormalCamera
//		Flags  -> (Native, Public, BlueprintCallable)
void AMainCharacter_C::RestoreNormalCamera()
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(41894);

	AMainCharacter_C_RestoreNormalCamera_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x0183D4A0
//		Name   -> Function MainCharacter.MainCharacter_C.ReevaluateDebugWidgetAttachment
//		Flags  -> (Native, Public, BlueprintCallable)
void AMainCharacter_C::ReevaluateDebugWidgetAttachment()
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(41893);

	AMainCharacter_C_ReevaluateDebugWidgetAttachment_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x0183D420
//		Name   -> Function MainCharacter.MainCharacter_C.ReceiveTick
//		Flags  -> (Native, Event, Public)
// Parameters:
//		float                                              bpp__DeltaSeconds__pf                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void AMainCharacter_C::ReceiveTick(float bpp__DeltaSeconds__pf)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(41892);

	AMainCharacter_C_ReceiveTick_Params params {};
	params.bpp__DeltaSeconds__pf = bpp__DeltaSeconds__pf;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x0183D400
//		Name   -> Function MainCharacter.MainCharacter_C.ReceiveBeginPlay
//		Flags  -> (Native, Event, Public)
void AMainCharacter_C::ReceiveBeginPlay()
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(41891);

	AMainCharacter_C_ReceiveBeginPlay_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x0183D310
//		Name   -> Function MainCharacter.MainCharacter_C.Play Viewed Sonar Hit
//		Flags  -> (Native, Public, BlueprintCallable)
// Parameters:
//		struct FDamageEffect                               bpp__Effect__pf                                            (Parm, NoDestructor, NativeAccessSpecifierPublic)
void AMainCharacter_C::Play_Viewed_Sonar_Hit(const struct FDamageEffect& bpp__Effect__pf)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(41890);

	AMainCharacter_C_Play_Viewed_Sonar_Hit_Params params {};
	params.bpp__Effect__pf = bpp__Effect__pf;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x0183D220
//		Name   -> Function MainCharacter.MainCharacter_C.Play Viewed EMP Hit
//		Flags  -> (Native, Public, BlueprintCallable)
// Parameters:
//		struct FDamageEffect                               bpp__Effect__pf                                            (Parm, NoDestructor, NativeAccessSpecifierPublic)
void AMainCharacter_C::Play_Viewed_EMP_Hit(const struct FDamageEffect& bpp__Effect__pf)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(41889);

	AMainCharacter_C_Play_Viewed_EMP_Hit_Params params {};
	params.bpp__Effect__pf = bpp__Effect__pf;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x0183D130
//		Name   -> Function MainCharacter.MainCharacter_C.Play Viewed Blood Hit
//		Flags  -> (Native, Public, BlueprintCallable)
// Parameters:
//		struct FDamageEffect                               bpp__Effect__pf                                            (Parm, NoDestructor, NativeAccessSpecifierPublic)
void AMainCharacter_C::Play_Viewed_Blood_Hit(const struct FDamageEffect& bpp__Effect__pf)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(41888);

	AMainCharacter_C_Play_Viewed_Blood_Hit_Params params {};
	params.bpp__Effect__pf = bpp__Effect__pf;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x0183D110
//		Name   -> Function MainCharacter.MainCharacter_C.Play Martial Artist Target Front
//		Flags  -> (Native, Public, BlueprintCallable)
void AMainCharacter_C::Play_Martial_Artist_Target_Front()
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(41887);

	AMainCharacter_C_Play_Martial_Artist_Target_Front_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x0183D0F0
//		Name   -> Function MainCharacter.MainCharacter_C.Play Martial Artist Target Back
//		Flags  -> (Native, Public, BlueprintCallable)
void AMainCharacter_C::Play_Martial_Artist_Target_Back()
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(41886);

	AMainCharacter_C_Play_Martial_Artist_Target_Back_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x0183D0D0
//		Name   -> Function MainCharacter.MainCharacter_C.Play Martial Artist Instigator Front
//		Flags  -> (Native, Public, BlueprintCallable)
void AMainCharacter_C::Play_Martial_Artist_Instigator_Front()
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(41885);

	AMainCharacter_C_Play_Martial_Artist_Instigator_Front_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x0183D0B0
//		Name   -> Function MainCharacter.MainCharacter_C.Play Martial Artist Instigator Back
//		Flags  -> (Native, Public, BlueprintCallable)
void AMainCharacter_C::Play_Martial_Artist_Instigator_Back()
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(41884);

	AMainCharacter_C_Play_Martial_Artist_Instigator_Back_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x0183CD40
//		Name   -> Function MainCharacter.MainCharacter_C.PlayReviveSFX
//		Flags  -> (Native, Public, BlueprintCallable)
void AMainCharacter_C::PlayReviveSFX()
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(41883);

	AMainCharacter_C_PlayReviveSFX_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x0183CCB0
//		Name   -> Function MainCharacter.MainCharacter_C.PlayPickupFX
//		Flags  -> (Native, Public, BlueprintCallable)
// Parameters:
//		class AActor*                                      bpp__ItemActor__pf                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void AMainCharacter_C::PlayPickupFX(class AActor* bpp__ItemActor__pf)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(41882);

	AMainCharacter_C_PlayPickupFX_Params params {};
	params.bpp__ItemActor__pf = bpp__ItemActor__pf;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x0183CBA0
//		Name   -> Function MainCharacter.MainCharacter_C.PlayHitMarkerSFX
//		Flags  -> (Native, Public, BlueprintCallable)
// Parameters:
//		struct FCombatEventInfo                            bpp__CombatEventInfo__pf                                   (Parm, NativeAccessSpecifierPublic)
void AMainCharacter_C::PlayHitMarkerSFX(const struct FCombatEventInfo& bpp__CombatEventInfo__pf)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(41881);

	AMainCharacter_C_PlayHitMarkerSFX_Params params {};
	params.bpp__CombatEventInfo__pf = bpp__CombatEventInfo__pf;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x0183CAE0
//		Name   -> Function MainCharacter.MainCharacter_C.PlayHitFromRadialDamage
//		Flags  -> (BlueprintCosmetic, Native, Event, Public, HasOutParms)
// Parameters:
//		struct FDamageEffect                               bpp__Effect__pf__const                                     (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
void AMainCharacter_C::PlayHitFromRadialDamage(const struct FDamageEffect& bpp__Effect__pf__const)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(41880);

	AMainCharacter_C_PlayHitFromRadialDamage_Params params {};
	params.bpp__Effect__pf__const = bpp__Effect__pf__const;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x0183CA20
//		Name   -> Function MainCharacter.MainCharacter_C.PlayHitFromPointDamage
//		Flags  -> (BlueprintCosmetic, Native, Event, Public, HasOutParms)
// Parameters:
//		struct FDamageEffect                               bpp__Effect__pf__const                                     (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
void AMainCharacter_C::PlayHitFromPointDamage(const struct FDamageEffect& bpp__Effect__pf__const)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(41879);

	AMainCharacter_C_PlayHitFromPointDamage_Params params {};
	params.bpp__Effect__pf__const = bpp__Effect__pf__const;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x0183C930
//		Name   -> Function MainCharacter.MainCharacter_C.PlayHitBySFX
//		Flags  -> (Native, Public, BlueprintCallable)
// Parameters:
//		struct FDamageEffect                               bpp__DamageEffect__pf                                      (Parm, NoDestructor, NativeAccessSpecifierPublic)
void AMainCharacter_C::PlayHitBySFX(const struct FDamageEffect& bpp__DamageEffect__pf)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(41878);

	AMainCharacter_C_PlayHitBySFX_Params params {};
	params.bpp__DamageEffect__pf = bpp__DamageEffect__pf;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x0183CFB0
//		Name   -> Function MainCharacter.MainCharacter_C.PlayerRevived
//		Flags  -> (Native, Public, BlueprintCallable)
// Parameters:
//		class AKSPlayerState*                              bpp__Revivee__pf                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		class AKSPlayerState*                              bpp__Reviver__pf                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		int                                                bpp__ExpBonus__pf                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void AMainCharacter_C::PlayerRevived(class AKSPlayerState* bpp__Revivee__pf, class AKSPlayerState* bpp__Reviver__pf, int bpp__ExpBonus__pf)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(41877);

	AMainCharacter_C_PlayerRevived_Params params {};
	params.bpp__Revivee__pf = bpp__Revivee__pf;
	params.bpp__Reviver__pf = bpp__Reviver__pf;
	params.bpp__ExpBonus__pf = bpp__ExpBonus__pf;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x0183CE70
//		Name   -> Function MainCharacter.MainCharacter_C.PlayerDown
//		Flags  -> (Native, Public, BlueprintCallable)
// Parameters:
//		struct FCombatEventInfo                            bpp__EventInfo__pf                                         (Parm, NativeAccessSpecifierPublic)
//		int                                                bpp__ExpBonus__pf                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void AMainCharacter_C::PlayerDown(const struct FCombatEventInfo& bpp__EventInfo__pf, int bpp__ExpBonus__pf)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(41876);

	AMainCharacter_C_PlayerDown_Params params {};
	params.bpp__EventInfo__pf = bpp__EventInfo__pf;
	params.bpp__ExpBonus__pf = bpp__ExpBonus__pf;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x0183CD60
//		Name   -> Function MainCharacter.MainCharacter_C.PlayerDeath
//		Flags  -> (Native, Public, BlueprintCallable)
// Parameters:
//		struct FCombatEventInfo                            bpp__EventInfo__pf                                         (Parm, NativeAccessSpecifierPublic)
void AMainCharacter_C::PlayerDeath(const struct FCombatEventInfo& bpp__EventInfo__pf)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(41875);

	AMainCharacter_C_PlayerDeath_Params params {};
	params.bpp__EventInfo__pf = bpp__EventInfo__pf;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x0183C910
//		Name   -> Function MainCharacter.MainCharacter_C.PlayDownPPOnce
//		Flags  -> (Native, Public, BlueprintCallable)
void AMainCharacter_C::PlayDownPPOnce()
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(41874);

	AMainCharacter_C_PlayDownPPOnce_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x0183C880
//		Name   -> Function MainCharacter.MainCharacter_C.PlayActionCameraSequence
//		Flags  -> (Native, Event, Public, BlueprintCallable)
// Parameters:
//		struct FName                                       bpp__SequenceName__pf                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void AMainCharacter_C::PlayActionCameraSequence(const struct FName& bpp__SequenceName__pf)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(41873);

	AMainCharacter_C_PlayActionCameraSequence_Params params {};
	params.bpp__SequenceName__pf = bpp__SequenceName__pf;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x0183C7D0
//		Name   -> Function MainCharacter.MainCharacter_C.OnZiplineChangeForFov
//		Flags  -> (Native, Public, BlueprintCallable)
// Parameters:
//		bool                                               bpp__IsZiplining__pf                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void AMainCharacter_C::OnZiplineChangeForFov(bool bpp__IsZiplining__pf)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(41872);

	AMainCharacter_C_OnZiplineChangeForFov_Params params {};
	params.bpp__IsZiplining__pf = bpp__IsZiplining__pf;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x0183C860
//		Name   -> Function MainCharacter.MainCharacter_C.On Anim Initialized
//		Flags  -> (Native, Public, BlueprintCallable)
void AMainCharacter_C::On_Anim_Initialized()
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(41871);

	AMainCharacter_C_On_Anim_Initialized_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x0183C750
//		Name   -> Function MainCharacter.MainCharacter_C.OnUnhovered
//		Flags  -> (Native, Event, Public)
// Parameters:
//		float                                              bpp__ExtraTime__pf                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void AMainCharacter_C::OnUnhovered(float bpp__ExtraTime__pf)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(41870);

	AMainCharacter_C_OnUnhovered_Params params {};
	params.bpp__ExtraTime__pf = bpp__ExtraTime__pf;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x0183C730
//		Name   -> Function MainCharacter.MainCharacter_C.OnStartSkydive
//		Flags  -> (Native, Public, BlueprintCallable)
void AMainCharacter_C::OnStartSkydive()
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(41869);

	AMainCharacter_C_OnStartSkydive_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x0183C6A0
//		Name   -> Function MainCharacter.MainCharacter_C.OnSprintChangedCallback
//		Flags  -> (Native, Public, BlueprintCallable)
// Parameters:
//		bool                                               bpp__IsSprinting__pf                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void AMainCharacter_C::OnSprintChangedCallback(bool bpp__IsSprinting__pf)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(41868);

	AMainCharacter_C_OnSprintChangedCallback_Params params {};
	params.bpp__IsSprinting__pf = bpp__IsSprinting__pf;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x0183C5A0
//		Name   -> Function MainCharacter.MainCharacter_C.OnReviveStart
//		Flags  -> (Native, Event, Public)
// Parameters:
//		class AKSCharacter*                                bpp__Reviver__pf                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		float                                              bpp__ReviveTime__pf                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		bool                                               bpp__Remote__pf                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void AMainCharacter_C::OnReviveStart(class AKSCharacter* bpp__Reviver__pf, float bpp__ReviveTime__pf, bool bpp__Remote__pf)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(41867);

	AMainCharacter_C_OnReviveStart_Params params {};
	params.bpp__Reviver__pf = bpp__Reviver__pf;
	params.bpp__ReviveTime__pf = bpp__ReviveTime__pf;
	params.bpp__Remote__pf = bpp__Remote__pf;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x0183C510
//		Name   -> Function MainCharacter.MainCharacter_C.OnReviveInterrupt
//		Flags  -> (Native, Event, Public)
// Parameters:
//		class AKSCharacter*                                bpp__Reviver__pf                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void AMainCharacter_C::OnReviveInterrupt(class AKSCharacter* bpp__Reviver__pf)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(41866);

	AMainCharacter_C_OnReviveInterrupt_Params params {};
	params.bpp__Reviver__pf = bpp__Reviver__pf;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x0183C480
//		Name   -> Function MainCharacter.MainCharacter_C.OnReviveComplete
//		Flags  -> (Native, Event, Public)
// Parameters:
//		class AKSCharacter*                                bpp__Reviver__pf                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void AMainCharacter_C::OnReviveComplete(class AKSCharacter* bpp__Reviver__pf)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(41865);

	AMainCharacter_C_OnReviveComplete_Params params {};
	params.bpp__Reviver__pf = bpp__Reviver__pf;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x0183C3F0
//		Name   -> Function MainCharacter.MainCharacter_C.OnPowerSlideChangedCallback
//		Flags  -> (Native, Public, BlueprintCallable)
// Parameters:
//		bool                                               bpp__IsPowerSliding__pf                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void AMainCharacter_C::OnPowerSlideChangedCallback(bool bpp__IsPowerSliding__pf)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(41864);

	AMainCharacter_C_OnPowerSlideChangedCallback_Params params {};
	params.bpp__IsPowerSliding__pf = bpp__IsPowerSliding__pf;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x0183C330
//		Name   -> Function MainCharacter.MainCharacter_C.OnLanded
//		Flags  -> (Native, Event, Public, HasOutParms)
// Parameters:
//		struct FHitResult                                  bpp__Hit__pf__const                                        (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPublic)
void AMainCharacter_C::OnLanded(const struct FHitResult& bpp__Hit__pf__const)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(41863);

	AMainCharacter_C_OnLanded_Params params {};
	params.bpp__Hit__pf__const = bpp__Hit__pf__const;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x0183C230
//		Name   -> Function MainCharacter.MainCharacter_C.OnItemPickedUp_Event_1
//		Flags  -> (Native, Public, BlueprintCallable)
// Parameters:
//		class AKSCharacter*                                bpp__Character__pf                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		class AKSItemDrop*                                 bpp__ItemDrop__pf                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		class UKSItem*                                     bpp__Item__pf                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void AMainCharacter_C::OnItemPickedUp_Event_1(class AKSCharacter* bpp__Character__pf, class AKSItemDrop* bpp__ItemDrop__pf, class UKSItem* bpp__Item__pf)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(41862);

	AMainCharacter_C_OnItemPickedUp_Event_1_Params params {};
	params.bpp__Character__pf = bpp__Character__pf;
	params.bpp__ItemDrop__pf = bpp__ItemDrop__pf;
	params.bpp__Item__pf = bpp__Item__pf;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x0183C210
//		Name   -> Function MainCharacter.MainCharacter_C.OnImmuneStart
//		Flags  -> (BlueprintCosmetic, Native, Event, Public, BlueprintCallable)
void AMainCharacter_C::OnImmuneStart()
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(41861);

	AMainCharacter_C_OnImmuneStart_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x0183C1F0
//		Name   -> Function MainCharacter.MainCharacter_C.OnImmuneEnd
//		Flags  -> (BlueprintCosmetic, Native, Event, Public, BlueprintCallable)
void AMainCharacter_C::OnImmuneEnd()
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(41860);

	AMainCharacter_C_OnImmuneEnd_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x0183C1D0
//		Name   -> Function MainCharacter.MainCharacter_C.OnHovered
//		Flags  -> (Native, Event, Public)
void AMainCharacter_C::OnHovered()
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(41859);

	AMainCharacter_C_OnHovered_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x0183C140
//		Name   -> Function MainCharacter.MainCharacter_C.OnHealthChanged
//		Flags  -> (Native, Public, BlueprintCallable)
// Parameters:
//		class AKSCharacterBase*                            bpp__Character__pf__const                                  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void AMainCharacter_C::OnHealthChanged(class AKSCharacterBase* bpp__Character__pf__const)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(41858);

	AMainCharacter_C_OnHealthChanged_Params params {};
	params.bpp__Character__pf__const = bpp__Character__pf__const;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x0183C120
//		Name   -> Function MainCharacter.MainCharacter_C.OnGenderChanged
//		Flags  -> (Native, Event, Public, BlueprintCallable)
void AMainCharacter_C::OnGenderChanged()
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(41857);

	AMainCharacter_C_OnGenderChanged_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x0183C100
//		Name   -> Function MainCharacter.MainCharacter_C.OnGadgetSwapped
//		Flags  -> (Native, Event, Public)
void AMainCharacter_C::OnGadgetSwapped()
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(41856);

	AMainCharacter_C_OnGadgetSwapped_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x0183C0E0
//		Name   -> Function MainCharacter.MainCharacter_C.OnFlashEffectStarted
//		Flags  -> (Native, Event, Public)
void AMainCharacter_C::OnFlashEffectStarted()
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(41855);

	AMainCharacter_C_OnFlashEffectStarted_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x0183C0C0
//		Name   -> Function MainCharacter.MainCharacter_C.OnFlashEffectEnded
//		Flags  -> (Native, Event, Public)
void AMainCharacter_C::OnFlashEffectEnded()
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(41854);

	AMainCharacter_C_OnFlashEffectEnded_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x0183C040
//		Name   -> Function MainCharacter.MainCharacter_C.OnFlashBangHit
//		Flags  -> (Native, Event, Public)
// Parameters:
//		Killstreak_EFlashBangIntensity                     bpp__Intensity__pf                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void AMainCharacter_C::OnFlashBangHit(Killstreak_EFlashBangIntensity bpp__Intensity__pf)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(41853);

	AMainCharacter_C_OnFlashBangHit_Params params {};
	params.bpp__Intensity__pf = bpp__Intensity__pf;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x0183C020
//		Name   -> Function MainCharacter.MainCharacter_C.OnFieldOfViewModChange
//		Flags  -> (Native, Event, Public, BlueprintCallable)
void AMainCharacter_C::OnFieldOfViewModChange()
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(41852);

	AMainCharacter_C_OnFieldOfViewModChange_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x0183C000
//		Name   -> Function MainCharacter.MainCharacter_C.OnEndZiplineRagdoll
//		Flags  -> (Native, Public, BlueprintCallable)
void AMainCharacter_C::OnEndZiplineRagdoll()
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(41851);

	AMainCharacter_C_OnEndZiplineRagdoll_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x0183BFE0
//		Name   -> Function MainCharacter.MainCharacter_C.OnEndSkydive
//		Flags  -> (Native, Public, BlueprintCallable)
void AMainCharacter_C::OnEndSkydive()
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(41850);

	AMainCharacter_C_OnEndSkydive_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x0183BF60
//		Name   -> Function MainCharacter.MainCharacter_C.OnEndPowerSlide
//		Flags  -> (Native, Event, Public)
// Parameters:
//		Killstreak_EKSPowerSlideEndReason                  bpp__EndReason__pf                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void AMainCharacter_C::OnEndPowerSlide(Killstreak_EKSPowerSlideEndReason bpp__EndReason__pf)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(41849);

	AMainCharacter_C_OnEndPowerSlide_Params params {};
	params.bpp__EndReason__pf = bpp__EndReason__pf;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x0183BF40
//		Name   -> Function MainCharacter.MainCharacter_C.OnEndOutOfBounds
//		Flags  -> (Native, Event, Public)
void AMainCharacter_C::OnEndOutOfBounds()
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(41848);

	AMainCharacter_C_OnEndOutOfBounds_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x0183BEB0
//		Name   -> Function MainCharacter.MainCharacter_C.OnDodgeRollChangedEvent
//		Flags  -> (Native, Public, BlueprintCallable)
// Parameters:
//		bool                                               bpp__IsDodgeRolling__pf                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void AMainCharacter_C::OnDodgeRollChangedEvent(bool bpp__IsDodgeRolling__pf)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(41847);

	AMainCharacter_C_OnDodgeRollChangedEvent_Params params {};
	params.bpp__IsDodgeRolling__pf = bpp__IsDodgeRolling__pf;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x0183BE90
//		Name   -> Function MainCharacter.MainCharacter_C.OnBeginZiplineRagdoll
//		Flags  -> (Native, Public, BlueprintCallable)
void AMainCharacter_C::OnBeginZiplineRagdoll()
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(41846);

	AMainCharacter_C_OnBeginZiplineRagdoll_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x0183BE70
//		Name   -> Function MainCharacter.MainCharacter_C.OnBeginPowerSlide
//		Flags  -> (Native, Event, Public)
void AMainCharacter_C::OnBeginPowerSlide()
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(41845);

	AMainCharacter_C_OnBeginPowerSlide_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x0183BE50
//		Name   -> Function MainCharacter.MainCharacter_C.OnBeginOutOfBounds
//		Flags  -> (Native, Event, Public)
void AMainCharacter_C::OnBeginOutOfBounds()
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(41844);

	AMainCharacter_C_OnBeginOutOfBounds_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x0183BDD0
//		Name   -> Function MainCharacter.MainCharacter_C.OnArmorInteractStart
//		Flags  -> (Native, Event, Public)
// Parameters:
//		float                                              bpp__InteractTime__pf                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void AMainCharacter_C::OnArmorInteractStart(float bpp__InteractTime__pf)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(41843);

	AMainCharacter_C_OnArmorInteractStart_Params params {};
	params.bpp__InteractTime__pf = bpp__InteractTime__pf;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x0183BDB0
//		Name   -> Function MainCharacter.MainCharacter_C.OnArmorInteractInterrupt
//		Flags  -> (Native, Event, Public)
void AMainCharacter_C::OnArmorInteractInterrupt()
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(41842);

	AMainCharacter_C_OnArmorInteractInterrupt_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x0183BD90
//		Name   -> Function MainCharacter.MainCharacter_C.OnArmorInteractComplete
//		Flags  -> (Native, Event, Public)
void AMainCharacter_C::OnArmorInteractComplete()
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(41841);

	AMainCharacter_C_OnArmorInteractComplete_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x0183BD70
//		Name   -> Function MainCharacter.MainCharacter_C.OnADSBlurSettingChanged
//		Flags  -> (Native, Public, BlueprintCallable)
void AMainCharacter_C::OnADSBlurSettingChanged()
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(41840);

	AMainCharacter_C_OnADSBlurSettingChanged_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x0183BD50
//		Name   -> Function MainCharacter.MainCharacter_C.NoseDiveFOVTimeline__UpdateFunc
//		Flags  -> (Native, Public)
void AMainCharacter_C::NoseDiveFOVTimeline__UpdateFunc()
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(41839);

	AMainCharacter_C_NoseDiveFOVTimeline__UpdateFunc_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x0183BD30
//		Name   -> Function MainCharacter.MainCharacter_C.NoseDiveFOVTimeline__FinishedFunc
//		Flags  -> (Native, Public)
void AMainCharacter_C::NoseDiveFOVTimeline__FinishedFunc()
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(41838);

	AMainCharacter_C_NoseDiveFOVTimeline__FinishedFunc_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x0183BC60
//		Name   -> Function MainCharacter.MainCharacter_C.NoseDiveCameraTransition
//		Flags  -> (Native, Event, Public, BlueprintCallable)
// Parameters:
//		bool                                               bpp__bEnterNoseDive__pf                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		float                                              bpp__AnimLength__pf                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void AMainCharacter_C::NoseDiveCameraTransition(bool bpp__bEnterNoseDive__pf, float bpp__AnimLength__pf)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(41837);

	AMainCharacter_C_NoseDiveCameraTransition_Params params {};
	params.bpp__bEnterNoseDive__pf = bpp__bEnterNoseDive__pf;
	params.bpp__AnimLength__pf = bpp__AnimLength__pf;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x0183BC40
//		Name   -> Function MainCharacter.MainCharacter_C.Martial Artist Target Front__UpdateFunc
//		Flags  -> (Native, Public)
void AMainCharacter_C::Martial_Artist_Target_Front__UpdateFunc()
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(41836);

	AMainCharacter_C_Martial_Artist_Target_Front__UpdateFunc_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x0183BC20
//		Name   -> Function MainCharacter.MainCharacter_C.Martial Artist Target Front__FinishedFunc
//		Flags  -> (Native, Public)
void AMainCharacter_C::Martial_Artist_Target_Front__FinishedFunc()
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(41835);

	AMainCharacter_C_Martial_Artist_Target_Front__FinishedFunc_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x0183BC00
//		Name   -> Function MainCharacter.MainCharacter_C.Martial Artist Target Back__UpdateFunc
//		Flags  -> (Native, Public)
void AMainCharacter_C::Martial_Artist_Target_Back__UpdateFunc()
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(41834);

	AMainCharacter_C_Martial_Artist_Target_Back__UpdateFunc_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x0183BBE0
//		Name   -> Function MainCharacter.MainCharacter_C.Martial Artist Target Back__FinishedFunc
//		Flags  -> (Native, Public)
void AMainCharacter_C::Martial_Artist_Target_Back__FinishedFunc()
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(41833);

	AMainCharacter_C_Martial_Artist_Target_Back__FinishedFunc_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x0183BBC0
//		Name   -> Function MainCharacter.MainCharacter_C.Martial Artist Instigator Front__UpdateFunc
//		Flags  -> (Native, Public)
void AMainCharacter_C::Martial_Artist_Instigator_Front__UpdateFunc()
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(41832);

	AMainCharacter_C_Martial_Artist_Instigator_Front__UpdateFunc_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x0183BBA0
//		Name   -> Function MainCharacter.MainCharacter_C.Martial Artist Instigator Front__FinishedFunc
//		Flags  -> (Native, Public)
void AMainCharacter_C::Martial_Artist_Instigator_Front__FinishedFunc()
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(41831);

	AMainCharacter_C_Martial_Artist_Instigator_Front__FinishedFunc_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x0183BB80
//		Name   -> Function MainCharacter.MainCharacter_C.Martial Artist Instigator Back__UpdateFunc
//		Flags  -> (Native, Public)
void AMainCharacter_C::Martial_Artist_Instigator_Back__UpdateFunc()
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(41830);

	AMainCharacter_C_Martial_Artist_Instigator_Back__UpdateFunc_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x0183BB60
//		Name   -> Function MainCharacter.MainCharacter_C.Martial Artist Instigator Back__FinishedFunc
//		Flags  -> (Native, Public)
void AMainCharacter_C::Martial_Artist_Instigator_Back__FinishedFunc()
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(41829);

	AMainCharacter_C_Martial_Artist_Instigator_Back__FinishedFunc_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x0183BAD0
//		Name   -> Function MainCharacter.MainCharacter_C.LandingRollEvent
//		Flags  -> (Native, Public, BlueprintCallable)
// Parameters:
//		bool                                               bpp__IsDodgeRolling__pf                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void AMainCharacter_C::LandingRollEvent(bool bpp__IsDodgeRolling__pf)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(41828);

	AMainCharacter_C_LandingRollEvent_Params params {};
	params.bpp__IsDodgeRolling__pf = bpp__IsDodgeRolling__pf;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x0183B9F0
//		Name   -> Function MainCharacter.MainCharacter_C.KeepActionCameraAboveWater
//		Flags  -> (Native, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintPure)
// Parameters:
//		struct FVector                                     bpp__InBoomPosition__pf                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		struct FVector                                     bpp__OutBoomPosition__pf                                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void AMainCharacter_C::KeepActionCameraAboveWater(const struct FVector& bpp__InBoomPosition__pf, struct FVector* bpp__OutBoomPosition__pf)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(41827);

	AMainCharacter_C_KeepActionCameraAboveWater_Params params {};
	params.bpp__InBoomPosition__pf = bpp__InBoomPosition__pf;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (bpp__OutBoomPosition__pf != nullptr)
		*bpp__OutBoomPosition__pf = params.bpp__OutBoomPosition__pf;

}


// Function:
//		Offset -> 0x0183B8A0
//		Name   -> Function MainCharacter.MainCharacter_C.K2_OnMovementModeChanged
//		Flags  -> (Native, Event, Public)
// Parameters:
//		TEnumAsByte<Engine_EMovementMode>                  bpp__PrevMovementMode__pf                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		TEnumAsByte<Engine_EMovementMode>                  bpp__NewMovementMode__pf                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		unsigned char                                      bpp__PrevCustomMode__pf                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		unsigned char                                      bpp__NewCustomMode__pf                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void AMainCharacter_C::K2_OnMovementModeChanged(TEnumAsByte<Engine_EMovementMode> bpp__PrevMovementMode__pf, TEnumAsByte<Engine_EMovementMode> bpp__NewMovementMode__pf, unsigned char bpp__PrevCustomMode__pf, unsigned char bpp__NewCustomMode__pf)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(41826);

	AMainCharacter_C_K2_OnMovementModeChanged_Params params {};
	params.bpp__PrevMovementMode__pf = bpp__PrevMovementMode__pf;
	params.bpp__NewMovementMode__pf = bpp__NewMovementMode__pf;
	params.bpp__PrevCustomMode__pf = bpp__PrevCustomMode__pf;
	params.bpp__NewCustomMode__pf = bpp__NewCustomMode__pf;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x0183B810
//		Name   -> Function MainCharacter.MainCharacter_C.K2_OnEndViewTarget
//		Flags  -> (Native, Event, Public)
// Parameters:
//		class APlayerController*                           bpp__PC__pf                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void AMainCharacter_C::K2_OnEndViewTarget(class APlayerController* bpp__PC__pf)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(41825);

	AMainCharacter_C_K2_OnEndViewTarget_Params params {};
	params.bpp__PC__pf = bpp__PC__pf;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x0183B780
//		Name   -> Function MainCharacter.MainCharacter_C.K2_OnBecomeViewTarget
//		Flags  -> (Native, Event, Public)
// Parameters:
//		class APlayerController*                           bpp__PC__pf                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void AMainCharacter_C::K2_OnBecomeViewTarget(class APlayerController* bpp__PC__pf)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(41824);

	AMainCharacter_C_K2_OnBecomeViewTarget_Params params {};
	params.bpp__PC__pf = bpp__PC__pf;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x0183B700
//		Name   -> Function MainCharacter.MainCharacter_C.InpAxisKeyEvt_Gamepad_LeftY_K2Node_InputAxisKeyEvent_1
//		Flags  -> (Native, Public)
// Parameters:
//		float                                              bpp__AxisValue__pf                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void AMainCharacter_C::InpAxisKeyEvt_Gamepad_LeftY_K2Node_InputAxisKeyEvent_1(float bpp__AxisValue__pf)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(41823);

	AMainCharacter_C_InpAxisKeyEvt_Gamepad_LeftY_K2Node_InputAxisKeyEvent_1_Params params {};
	params.bpp__AxisValue__pf = bpp__AxisValue__pf;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x0183B680
//		Name   -> Function MainCharacter.MainCharacter_C.InpAxisKeyEvt_Gamepad_LeftX_K2Node_InputAxisKeyEvent_2
//		Flags  -> (Native, Public)
// Parameters:
//		float                                              bpp__AxisValue__pf                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void AMainCharacter_C::InpAxisKeyEvt_Gamepad_LeftX_K2Node_InputAxisKeyEvent_2(float bpp__AxisValue__pf)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(41822);

	AMainCharacter_C_InpAxisKeyEvt_Gamepad_LeftX_K2Node_InputAxisKeyEvent_2_Params params {};
	params.bpp__AxisValue__pf = bpp__AxisValue__pf;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x0183B5A0
//		Name   -> Function MainCharacter.MainCharacter_C.InpActEvt_T_K2Node_InputKeyEvent_1
//		Flags  -> (Native, Public)
// Parameters:
//		struct FKey                                        bpp__Key__pf                                               (Parm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void AMainCharacter_C::InpActEvt_T_K2Node_InputKeyEvent_1(const struct FKey& bpp__Key__pf)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(41821);

	AMainCharacter_C_InpActEvt_T_K2Node_InputKeyEvent_1_Params params {};
	params.bpp__Key__pf = bpp__Key__pf;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x0183B580
//		Name   -> Function MainCharacter.MainCharacter_C.InitializeHealthPP
//		Flags  -> (Native, Public, BlueprintCallable)
void AMainCharacter_C::InitializeHealthPP()
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(41820);

	AMainCharacter_C_InitializeHealthPP_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x0183B560
//		Name   -> Function MainCharacter.MainCharacter_C.HideZiplinePulley
//		Flags  -> (Native, Event, Public, BlueprintCallable)
void AMainCharacter_C::HideZiplinePulley()
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(41819);

	AMainCharacter_C_HideZiplinePulley_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x0183B540
//		Name   -> Function MainCharacter.MainCharacter_C.HideUplineDevice
//		Flags  -> (Native, Event, Public, BlueprintCallable)
void AMainCharacter_C::HideUplineDevice()
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(41818);

	AMainCharacter_C_HideUplineDevice_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x0183B4B0
//		Name   -> Function MainCharacter.MainCharacter_C.HealthRegenerationStopped
//		Flags  -> (Native, Event, Public)
// Parameters:
//		bool                                               bpp__bFullyHealed__pf                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void AMainCharacter_C::HealthRegenerationStopped(bool bpp__bFullyHealed__pf)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(41817);

	AMainCharacter_C_HealthRegenerationStopped_Params params {};
	params.bpp__bFullyHealed__pf = bpp__bFullyHealed__pf;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x0183B490
//		Name   -> Function MainCharacter.MainCharacter_C.HealthRegenerationStarted
//		Flags  -> (Native, Event, Public)
void AMainCharacter_C::HealthRegenerationStarted()
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(41816);

	AMainCharacter_C_HealthRegenerationStarted_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x0183B470
//		Name   -> Function MainCharacter.MainCharacter_C.Handle Downed Ragdoll
//		Flags  -> (Native, Public, BlueprintCallable)
void AMainCharacter_C::Handle_Downed_Ragdoll()
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(41815);

	AMainCharacter_C_Handle_Downed_Ragdoll_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x0183B390
//		Name   -> Function MainCharacter.MainCharacter_C.Get ADS Camera By Tag
//		Flags  -> (Native, Public, HasOutParms, BlueprintCallable, BlueprintPure)
// Parameters:
//		struct FName                                       bpp__Tag__pf                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		class UCameraComponent*                            bpp__CameraxComponent__pfT                                 (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void AMainCharacter_C::Get_ADS_Camera_By_Tag(const struct FName& bpp__Tag__pf, class UCameraComponent** bpp__CameraxComponent__pfT)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(41814);

	AMainCharacter_C_Get_ADS_Camera_By_Tag_Params params {};
	params.bpp__Tag__pf = bpp__Tag__pf;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (bpp__CameraxComponent__pfT != nullptr)
		*bpp__CameraxComponent__pfT = params.bpp__CameraxComponent__pfT;

}


// Function:
//		Offset -> 0x0183B2F0
//		Name   -> Function MainCharacter.MainCharacter_C.Get ADS Bend Target Camera Component
//		Flags  -> (Native, Public, HasOutParms, BlueprintCallable, BlueprintPure)
// Parameters:
//		class UCameraComponent*                            bpp__CameraxComponent__pfT                                 (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void AMainCharacter_C::Get_ADS_Bend_Target_Camera_Component(class UCameraComponent** bpp__CameraxComponent__pfT)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(41813);

	AMainCharacter_C_Get_ADS_Bend_Target_Camera_Component_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (bpp__CameraxComponent__pfT != nullptr)
		*bpp__CameraxComponent__pfT = params.bpp__CameraxComponent__pfT;

}


// Function:
//		Offset -> 0x0183B250
//		Name   -> Function MainCharacter.MainCharacter_C.GetTargetFov
//		Flags  -> (Native, Public, HasOutParms, BlueprintCallable, BlueprintPure)
// Parameters:
//		float                                              bpp__TargetFov__pf                                         (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void AMainCharacter_C::GetTargetFov(float* bpp__TargetFov__pf)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(41812);

	AMainCharacter_C_GetTargetFov_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (bpp__TargetFov__pf != nullptr)
		*bpp__TargetFov__pf = params.bpp__TargetFov__pf;

}


// Function:
//		Offset -> 0x0183B170
//		Name   -> Function MainCharacter.MainCharacter_C.GetTargetArmorLevel
//		Flags  -> (Native, Public, HasOutParms, BlueprintCallable, BlueprintPure)
// Parameters:
//		class AActor*                                      bpp__HitxTarget__pfT                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		int                                                bpp__ArmorxLevel__pfT                                      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void AMainCharacter_C::GetTargetArmorLevel(class AActor* bpp__HitxTarget__pfT, int* bpp__ArmorxLevel__pfT)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(41811);

	AMainCharacter_C_GetTargetArmorLevel_Params params {};
	params.bpp__HitxTarget__pfT = bpp__HitxTarget__pfT;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (bpp__ArmorxLevel__pfT != nullptr)
		*bpp__ArmorxLevel__pfT = params.bpp__ArmorxLevel__pfT;

}


// Function:
//		Offset -> 0x0183B0D0
//		Name   -> Function MainCharacter.MainCharacter_C.GetRagdollFacingDirection
//		Flags  -> (Native, Public, HasOutParms, BlueprintCallable, BlueprintPure)
// Parameters:
//		bool                                               bpp__IsUp__pf                                              (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void AMainCharacter_C::GetRagdollFacingDirection(bool* bpp__IsUp__pf)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(41810);

	AMainCharacter_C_GetRagdollFacingDirection_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (bpp__IsUp__pf != nullptr)
		*bpp__IsUp__pf = params.bpp__IsUp__pf;

}


// Function:
//		Offset -> 0x0183B030
//		Name   -> Function MainCharacter.MainCharacter_C.GetLastHitDistance
//		Flags  -> (Native, Public, HasOutParms, BlueprintCallable, BlueprintPure)
// Parameters:
//		float                                              bpp__OutDistance__pf                                       (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void AMainCharacter_C::GetLastHitDistance(float* bpp__OutDistance__pf)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(41809);

	AMainCharacter_C_GetLastHitDistance_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (bpp__OutDistance__pf != nullptr)
		*bpp__OutDistance__pf = params.bpp__OutDistance__pf;

}


// Function:
//		Offset -> 0x0183AF90
//		Name   -> Function MainCharacter.MainCharacter_C.GetDownedTransitionMontage
//		Flags  -> (Native, Event, Public, HasOutParms, BlueprintCallable)
// Parameters:
//		class UAnimMontage*                                bpp__OutAnimMontage__pf                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void AMainCharacter_C::GetDownedTransitionMontage(class UAnimMontage** bpp__OutAnimMontage__pf)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(41808);

	AMainCharacter_C_GetDownedTransitionMontage_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (bpp__OutAnimMontage__pf != nullptr)
		*bpp__OutAnimMontage__pf = params.bpp__OutAnimMontage__pf;

}


// Function:
//		Offset -> 0x0183AEF0
//		Name   -> Function MainCharacter.MainCharacter_C.GetDeathTransitionAnimation
//		Flags  -> (Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
//		class UAnimSequence*                               bpp__OutAnimSequence__pf                                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void AMainCharacter_C::GetDeathTransitionAnimation(class UAnimSequence** bpp__OutAnimSequence__pf)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(41807);

	AMainCharacter_C_GetDeathTransitionAnimation_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (bpp__OutAnimSequence__pf != nullptr)
		*bpp__OutAnimSequence__pf = params.bpp__OutAnimSequence__pf;

}


// Function:
//		Offset -> 0x0183AED0
//		Name   -> Function MainCharacter.MainCharacter_C.FreeFall Camera Burst
//		Flags  -> (Native, Public, BlueprintCallable)
void AMainCharacter_C::FreeFall_Camera_Burst()
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(41806);

	AMainCharacter_C_FreeFall_Camera_Burst_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x0183AEB0
//		Name   -> Function MainCharacter.MainCharacter_C.Finish Action Camera Update
//		Flags  -> (Native, Public, BlueprintCallable)
void AMainCharacter_C::Finish_Action_Camera_Update()
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(41805);

	AMainCharacter_C_Finish_Action_Camera_Update_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x0183AE90
//		Name   -> Function MainCharacter.MainCharacter_C.FinishHacking
//		Flags  -> (Native, Event, Public, BlueprintCallable)
void AMainCharacter_C::FinishHacking()
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(41804);

	AMainCharacter_C_FinishHacking_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x0183AE70
//		Name   -> Function MainCharacter.MainCharacter_C.ExitDownedRagdoll
//		Flags  -> (Net, Native, Event, NetMulticast, Public, BlueprintCallable)
void AMainCharacter_C::ExitDownedRagdoll()
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(41803);

	AMainCharacter_C_ExitDownedRagdoll_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x0183ADF0
//		Name   -> Function MainCharacter.MainCharacter_C.ExecuteUbergraph_MainCharacter_8
//		Flags  -> (Final, Native, Public)
// Parameters:
//		int                                                bpp__EntryPoint__pf                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void AMainCharacter_C::ExecuteUbergraph_MainCharacter_8(int bpp__EntryPoint__pf)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(41802);

	AMainCharacter_C_ExecuteUbergraph_MainCharacter_8_Params params {};
	params.bpp__EntryPoint__pf = bpp__EntryPoint__pf;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x0183AD70
//		Name   -> Function MainCharacter.MainCharacter_C.ExecuteUbergraph_MainCharacter_64
//		Flags  -> (Final, Native, Public)
// Parameters:
//		int                                                bpp__EntryPoint__pf                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void AMainCharacter_C::ExecuteUbergraph_MainCharacter_64(int bpp__EntryPoint__pf)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(41801);

	AMainCharacter_C_ExecuteUbergraph_MainCharacter_64_Params params {};
	params.bpp__EntryPoint__pf = bpp__EntryPoint__pf;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x0183ACF0
//		Name   -> Function MainCharacter.MainCharacter_C.ExecuteUbergraph_MainCharacter_55
//		Flags  -> (Final, Native, Public)
// Parameters:
//		int                                                bpp__EntryPoint__pf                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void AMainCharacter_C::ExecuteUbergraph_MainCharacter_55(int bpp__EntryPoint__pf)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(41800);

	AMainCharacter_C_ExecuteUbergraph_MainCharacter_55_Params params {};
	params.bpp__EntryPoint__pf = bpp__EntryPoint__pf;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x0183AC70
//		Name   -> Function MainCharacter.MainCharacter_C.ExecuteUbergraph_MainCharacter_49
//		Flags  -> (Final, Native, Public)
// Parameters:
//		int                                                bpp__EntryPoint__pf                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void AMainCharacter_C::ExecuteUbergraph_MainCharacter_49(int bpp__EntryPoint__pf)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(41799);

	AMainCharacter_C_ExecuteUbergraph_MainCharacter_49_Params params {};
	params.bpp__EntryPoint__pf = bpp__EntryPoint__pf;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x0183ABF0
//		Name   -> Function MainCharacter.MainCharacter_C.ExecuteUbergraph_MainCharacter_40
//		Flags  -> (Final, Native, Public)
// Parameters:
//		int                                                bpp__EntryPoint__pf                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void AMainCharacter_C::ExecuteUbergraph_MainCharacter_40(int bpp__EntryPoint__pf)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(41798);

	AMainCharacter_C_ExecuteUbergraph_MainCharacter_40_Params params {};
	params.bpp__EntryPoint__pf = bpp__EntryPoint__pf;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x0183AB70
//		Name   -> Function MainCharacter.MainCharacter_C.ExecuteUbergraph_MainCharacter_16
//		Flags  -> (Final, Native, Public)
// Parameters:
//		int                                                bpp__EntryPoint__pf                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void AMainCharacter_C::ExecuteUbergraph_MainCharacter_16(int bpp__EntryPoint__pf)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(41797);

	AMainCharacter_C_ExecuteUbergraph_MainCharacter_16_Params params {};
	params.bpp__EntryPoint__pf = bpp__EntryPoint__pf;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x0183AAF0
//		Name   -> Function MainCharacter.MainCharacter_C.ExecuteUbergraph_MainCharacter_131
//		Flags  -> (Final, Native, Public)
// Parameters:
//		int                                                bpp__EntryPoint__pf                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void AMainCharacter_C::ExecuteUbergraph_MainCharacter_131(int bpp__EntryPoint__pf)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(41796);

	AMainCharacter_C_ExecuteUbergraph_MainCharacter_131_Params params {};
	params.bpp__EntryPoint__pf = bpp__EntryPoint__pf;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x0183AA70
//		Name   -> Function MainCharacter.MainCharacter_C.ExecuteUbergraph_MainCharacter_130
//		Flags  -> (Final, Native, Public)
// Parameters:
//		int                                                bpp__EntryPoint__pf                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void AMainCharacter_C::ExecuteUbergraph_MainCharacter_130(int bpp__EntryPoint__pf)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(41795);

	AMainCharacter_C_ExecuteUbergraph_MainCharacter_130_Params params {};
	params.bpp__EntryPoint__pf = bpp__EntryPoint__pf;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x0183A9E0
//		Name   -> Function MainCharacter.MainCharacter_C.EventSetupCamerasForSpectator
//		Flags  -> (Native, Event, Public)
// Parameters:
//		bool                                               bpp__Enabled__pf                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void AMainCharacter_C::EventSetupCamerasForSpectator(bool bpp__Enabled__pf)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(41794);

	AMainCharacter_C_EventSetupCamerasForSpectator_Params params {};
	params.bpp__Enabled__pf = bpp__Enabled__pf;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x0183A9C0
//		Name   -> Function MainCharacter.MainCharacter_C.EnterFreeFallFOVTimeline__UpdateFunc
//		Flags  -> (Native, Public)
void AMainCharacter_C::EnterFreeFallFOVTimeline__UpdateFunc()
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(41793);

	AMainCharacter_C_EnterFreeFallFOVTimeline__UpdateFunc_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x0183A9A0
//		Name   -> Function MainCharacter.MainCharacter_C.EnterFreeFallFOVTimeline__FinishedFunc
//		Flags  -> (Native, Public)
void AMainCharacter_C::EnterFreeFallFOVTimeline__FinishedFunc()
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(41792);

	AMainCharacter_C_EnterFreeFallFOVTimeline__FinishedFunc_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x0183A980
//		Name   -> Function MainCharacter.MainCharacter_C.EnterDownedRagdoll
//		Flags  -> (Native, Public, BlueprintCallable)
void AMainCharacter_C::EnterDownedRagdoll()
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(41791);

	AMainCharacter_C_EnterDownedRagdoll_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x0183A960
//		Name   -> Function MainCharacter.MainCharacter_C.End Down PP
//		Flags  -> (Native, Public, BlueprintCallable)
void AMainCharacter_C::End_Down_PP()
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(41790);

	AMainCharacter_C_End_Down_PP_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x0183A940
//		Name   -> Function MainCharacter.MainCharacter_C.EndImmunity__UpdateFunc
//		Flags  -> (Native, Public)
void AMainCharacter_C::EndImmunity__UpdateFunc()
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(41789);

	AMainCharacter_C_EndImmunity__UpdateFunc_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x0183A920
//		Name   -> Function MainCharacter.MainCharacter_C.EndImmunity__FinishedFunc
//		Flags  -> (Native, Public)
void AMainCharacter_C::EndImmunity__FinishedFunc()
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(41788);

	AMainCharacter_C_EndImmunity__FinishedFunc_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x0183A900
//		Name   -> Function MainCharacter.MainCharacter_C.DoSetOnFire
//		Flags  -> (Native, Event, Public)
void AMainCharacter_C::DoSetOnFire()
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(41787);

	AMainCharacter_C_DoSetOnFire_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x0183A8E0
//		Name   -> Function MainCharacter.MainCharacter_C.DoExtinguishFire
//		Flags  -> (Native, Event, Public)
void AMainCharacter_C::DoExtinguishFire()
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(41786);

	AMainCharacter_C_DoExtinguishFire_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x0183A8C0
//		Name   -> Function MainCharacter.MainCharacter_C.DoBindZiplineEvents
//		Flags  -> (Native, Public, BlueprintCallable)
void AMainCharacter_C::DoBindZiplineEvents()
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(41785);

	AMainCharacter_C_DoBindZiplineEvents_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x0183A8A0
//		Name   -> Function MainCharacter.MainCharacter_C.DoBindSprintEvents
//		Flags  -> (Native, Public, BlueprintCallable)
void AMainCharacter_C::DoBindSprintEvents()
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(41784);

	AMainCharacter_C_DoBindSprintEvents_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x0183A880
//		Name   -> Function MainCharacter.MainCharacter_C.DoBindDodgeRollEvents
//		Flags  -> (Native, Public, BlueprintCallable)
void AMainCharacter_C::DoBindDodgeRollEvents()
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(41783);

	AMainCharacter_C_DoBindDodgeRollEvents_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x0183A760
//		Name   -> Function MainCharacter.MainCharacter_C.DetermineKnockbackFacing
//		Flags  -> (Native, Public, HasOutParms, HasDefaults, BlueprintCallable)
// Parameters:
//		struct FVector                                     bpp__HitDirection__pf                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		HitEnum_EHitEnum                                   bpp__SideHit__pf                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		struct FRotator                                    bpp__ActorRotation__pf                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
void AMainCharacter_C::DetermineKnockbackFacing(const struct FVector& bpp__HitDirection__pf, HitEnum_EHitEnum bpp__SideHit__pf, struct FRotator* bpp__ActorRotation__pf)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(41782);

	AMainCharacter_C_DetermineKnockbackFacing_Params params {};
	params.bpp__HitDirection__pf = bpp__HitDirection__pf;
	params.bpp__SideHit__pf = bpp__SideHit__pf;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (bpp__ActorRotation__pf != nullptr)
		*bpp__ActorRotation__pf = params.bpp__ActorRotation__pf;

}


// Function:
//		Offset -> 0x0183A740
//		Name   -> Function MainCharacter.MainCharacter_C.DetachSkydiveParticle
//		Flags  -> (Native, Public, BlueprintCallable)
void AMainCharacter_C::DetachSkydiveParticle()
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(41781);

	AMainCharacter_C_DetachSkydiveParticle_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x0183A610
//		Name   -> Function MainCharacter.MainCharacter_C.DestructibleSpeedGateOverlappedEvent
//		Flags  -> (Native, Event, Public, HasDefaults)
// Parameters:
//		struct FVector                                     bpp__BreakingLocation__pf                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		struct FVector                                     bpp__BreakingDirection__pf                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		struct FVector                                     bpp__BreakingNormal__pf                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void AMainCharacter_C::DestructibleSpeedGateOverlappedEvent(const struct FVector& bpp__BreakingLocation__pf, const struct FVector& bpp__BreakingDirection__pf, const struct FVector& bpp__BreakingNormal__pf)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(41780);

	AMainCharacter_C_DestructibleSpeedGateOverlappedEvent_Params params {};
	params.bpp__BreakingLocation__pf = bpp__BreakingLocation__pf;
	params.bpp__BreakingDirection__pf = bpp__BreakingDirection__pf;
	params.bpp__BreakingNormal__pf = bpp__BreakingNormal__pf;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x0183A5F0
//		Name   -> Function MainCharacter.MainCharacter_C.DeathStateChange
//		Flags  -> (Native, Public, BlueprintCallable)
void AMainCharacter_C::DeathStateChange()
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(41779);

	AMainCharacter_C_DeathStateChange_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x0183A5D0
//		Name   -> Function MainCharacter.MainCharacter_C.Check Low Health
//		Flags  -> (Native, Public, BlueprintCallable)
void AMainCharacter_C::Check_Low_Health()
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(41778);

	AMainCharacter_C_Check_Low_Health_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x0183A5B0
//		Name   -> Function MainCharacter.MainCharacter_C.CheckFlashBangOnViewTargetChange
//		Flags  -> (Native, Public, BlueprintCallable)
void AMainCharacter_C::CheckFlashBangOnViewTargetChange()
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(41777);

	AMainCharacter_C_CheckFlashBangOnViewTargetChange_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x0183A590
//		Name   -> Function MainCharacter.MainCharacter_C.Camera Boom Timeline__UpdateFunc
//		Flags  -> (Native, Public)
void AMainCharacter_C::Camera_Boom_Timeline__UpdateFunc()
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(41776);

	AMainCharacter_C_Camera_Boom_Timeline__UpdateFunc_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x0183A570
//		Name   -> Function MainCharacter.MainCharacter_C.Camera Boom Timeline__Switch To Main Camera__EventFunc
//		Flags  -> (Native, Public)
void AMainCharacter_C::Camera_Boom_Timeline__Switch_To_Main_Camera__EventFunc()
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(41775);

	AMainCharacter_C_Camera_Boom_Timeline__Switch_To_Main_Camera__EventFunc_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x0183A550
//		Name   -> Function MainCharacter.MainCharacter_C.Camera Boom Timeline__Switch To ADS Camera__EventFunc
//		Flags  -> (Native, Public)
void AMainCharacter_C::Camera_Boom_Timeline__Switch_To_ADS_Camera__EventFunc()
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(41774);

	AMainCharacter_C_Camera_Boom_Timeline__Switch_To_ADS_Camera__EventFunc_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x0183A530
//		Name   -> Function MainCharacter.MainCharacter_C.Camera Boom Timeline__FinishedFunc
//		Flags  -> (Native, Public)
void AMainCharacter_C::Camera_Boom_Timeline__FinishedFunc()
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(41773);

	AMainCharacter_C_Camera_Boom_Timeline__FinishedFunc_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x0183A510
//		Name   -> Function MainCharacter.MainCharacter_C.CameraDodgeRoll__UpdateFunc
//		Flags  -> (Native, Public)
void AMainCharacter_C::CameraDodgeRoll__UpdateFunc()
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(41772);

	AMainCharacter_C_CameraDodgeRoll__UpdateFunc_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x0183A4F0
//		Name   -> Function MainCharacter.MainCharacter_C.CameraDodgeRoll__FinishedFunc
//		Flags  -> (Native, Public)
void AMainCharacter_C::CameraDodgeRoll__FinishedFunc()
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(41771);

	AMainCharacter_C_CameraDodgeRoll__FinishedFunc_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x0183A4D0
//		Name   -> Function MainCharacter.MainCharacter_C.CacheRagdollPelvisLocation
//		Flags  -> (Net, Native, Event, Public, NetServer, BlueprintCallable)
void AMainCharacter_C::CacheRagdollPelvisLocation()
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(41770);

	AMainCharacter_C_CacheRagdollPelvisLocation_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x0183A4B0
//		Name   -> Function MainCharacter.MainCharacter_C.BlueprintOnStopSwimming
//		Flags  -> (Native, Event, Public)
void AMainCharacter_C::BlueprintOnStopSwimming()
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(41769);

	AMainCharacter_C_BlueprintOnStopSwimming_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x0183A490
//		Name   -> Function MainCharacter.MainCharacter_C.BlueprintOnStartSwimming
//		Flags  -> (Native, Event, Public)
void AMainCharacter_C::BlueprintOnStartSwimming()
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(41768);

	AMainCharacter_C_BlueprintOnStartSwimming_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x0183A460
//		Name   -> Function MainCharacter.MainCharacter_C.BlueprintHandleDeath
//		Flags  -> (Native, Event, Public, BlueprintCallable)
// Parameters:
//		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool AMainCharacter_C::BlueprintHandleDeath()
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(41767);

	AMainCharacter_C_BlueprintHandleDeath_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x0183A440
//		Name   -> Function MainCharacter.MainCharacter_C.BindADSBlurSetting
//		Flags  -> (Native, Public, BlueprintCallable)
void AMainCharacter_C::BindADSBlurSetting()
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(41766);

	AMainCharacter_C_BindADSBlurSetting_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x0183A420
//		Name   -> Function MainCharacter.MainCharacter_C.Audio_Init
//		Flags  -> (Native, Public, BlueprintCallable)
void AMainCharacter_C::Audio_Init()
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(41765);

	AMainCharacter_C_Audio_Init_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x0183A350
//		Name   -> Function MainCharacter.MainCharacter_C.ApplyLastHitImpulse
//		Flags  -> (Native, Event, Public, BlueprintCallable)
// Parameters:
//		bool                                               bpp__UpdateTargetRotation__pf                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		bool                                               bpp__AffectCapsule__pf                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void AMainCharacter_C::ApplyLastHitImpulse(bool bpp__UpdateTargetRotation__pf, bool bpp__AffectCapsule__pf)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(41764);

	AMainCharacter_C_ApplyLastHitImpulse_Params params {};
	params.bpp__UpdateTargetRotation__pf = bpp__UpdateTargetRotation__pf;
	params.bpp__AffectCapsule__pf = bpp__AffectCapsule__pf;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> DelegateFunction MainCharacter.MainCharacter_C.PlayerReviveDelegate__DelegateSignature
//		Flags  -> (Public, Delegate)
// Parameters:
//		class AKSPlayerState*                              bpp__Revivee__pf                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		class AKSPlayerState*                              bpp__Reviver__pf                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		int                                                bpp__ExpBonus__pf                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void AMainCharacter_C::PlayerReviveDelegate__DelegateSignature(class AKSPlayerState* bpp__Revivee__pf, class AKSPlayerState* bpp__Reviver__pf, int bpp__ExpBonus__pf)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(41763);

	AMainCharacter_C_PlayerReviveDelegate__DelegateSignature_Params params {};
	params.bpp__Revivee__pf = bpp__Revivee__pf;
	params.bpp__Reviver__pf = bpp__Reviver__pf;
	params.bpp__ExpBonus__pf = bpp__ExpBonus__pf;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> DelegateFunction MainCharacter.MainCharacter_C.PlayerDownInfo__DelegateSignature
//		Flags  -> (Public, Delegate)
// Parameters:
//		struct FCombatEventInfo                            bpp__EventInfo__pf                                         (Parm, NativeAccessSpecifierPublic)
//		int                                                bpp__ExpBonus__pf                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void AMainCharacter_C::PlayerDownInfo__DelegateSignature(const struct FCombatEventInfo& bpp__EventInfo__pf, int bpp__ExpBonus__pf)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(41762);

	AMainCharacter_C_PlayerDownInfo__DelegateSignature_Params params {};
	params.bpp__EventInfo__pf = bpp__EventInfo__pf;
	params.bpp__ExpBonus__pf = bpp__ExpBonus__pf;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> DelegateFunction MainCharacter.MainCharacter_C.PlayerDeathInfo__DelegateSignature
//		Flags  -> (Public, Delegate)
// Parameters:
//		struct FCombatEventInfo                            bpp__EventInfo__pf                                         (Parm, NativeAccessSpecifierPublic)
void AMainCharacter_C::PlayerDeathInfo__DelegateSignature(const struct FCombatEventInfo& bpp__EventInfo__pf)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(41761);

	AMainCharacter_C_PlayerDeathInfo__DelegateSignature_Params params {};
	params.bpp__EventInfo__pf = bpp__EventInfo__pf;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> DelegateFunction MainCharacter.MainCharacter_C.OnSprintChanged__DelegateSignature
//		Flags  -> (Public, Delegate)
// Parameters:
//		bool                                               bpp__IsSprinting__pf                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void AMainCharacter_C::OnSprintChanged__DelegateSignature(bool bpp__IsSprinting__pf)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(41760);

	AMainCharacter_C_OnSprintChanged__DelegateSignature_Params params {};
	params.bpp__IsSprinting__pf = bpp__IsSprinting__pf;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> DelegateFunction MainCharacter.MainCharacter_C.OnPowerSlideChanged__DelegateSignature
//		Flags  -> (Public, Delegate)
// Parameters:
//		bool                                               bpp__IsPowerSliding__pf                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void AMainCharacter_C::OnPowerSlideChanged__DelegateSignature(bool bpp__IsPowerSliding__pf)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(41759);

	AMainCharacter_C_OnPowerSlideChanged__DelegateSignature_Params params {};
	params.bpp__IsPowerSliding__pf = bpp__IsPowerSliding__pf;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> DelegateFunction MainCharacter.MainCharacter_C.OnPlayerStateChanged__DelegateSignature
//		Flags  -> (Public, Delegate)
// Parameters:
//		class APlayerState*                                bpp__PlayerState__pf                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void AMainCharacter_C::OnPlayerStateChanged__DelegateSignature(class APlayerState* bpp__PlayerState__pf)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(41758);

	AMainCharacter_C_OnPlayerStateChanged__DelegateSignature_Params params {};
	params.bpp__PlayerState__pf = bpp__PlayerState__pf;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> DelegateFunction MainCharacter.MainCharacter_C.OnItemPickedUp__DelegateSignature
//		Flags  -> (Public, Delegate)
// Parameters:
//		class AKSCharacter*                                bpp__Character__pf                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		class AKSItemDrop*                                 bpp__ItemDrop__pf                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		class UKSItem*                                     bpp__Item__pf                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void AMainCharacter_C::OnItemPickedUp__DelegateSignature(class AKSCharacter* bpp__Character__pf, class AKSItemDrop* bpp__ItemDrop__pf, class UKSItem* bpp__Item__pf)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(41757);

	AMainCharacter_C_OnItemPickedUp__DelegateSignature_Params params {};
	params.bpp__Character__pf = bpp__Character__pf;
	params.bpp__ItemDrop__pf = bpp__ItemDrop__pf;
	params.bpp__Item__pf = bpp__Item__pf;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> DelegateFunction MainCharacter.MainCharacter_C.OnHealthChanged__DelegateSignature
//		Flags  -> (Public, Delegate)
// Parameters:
//		class AKSCharacterBase*                            bpp__Character__pf                                         (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void AMainCharacter_C::OnHealthChanged__DelegateSignature(class AKSCharacterBase* bpp__Character__pf)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(41756);

	AMainCharacter_C_OnHealthChanged__DelegateSignature_Params params {};
	params.bpp__Character__pf = bpp__Character__pf;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> DelegateFunction MainCharacter.MainCharacter_C.OnGoDown__DelegateSignature
//		Flags  -> (Public, Delegate)
void AMainCharacter_C::OnGoDown__DelegateSignature()
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(41755);

	AMainCharacter_C_OnGoDown__DelegateSignature_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> DelegateFunction MainCharacter.MainCharacter_C.OnEndZipline__DelegateSignature
//		Flags  -> (Public, Delegate)
void AMainCharacter_C::OnEndZipline__DelegateSignature()
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(41754);

	AMainCharacter_C_OnEndZipline__DelegateSignature_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> DelegateFunction MainCharacter.MainCharacter_C.OnDodgeRollChanged__DelegateSignature
//		Flags  -> (Public, Delegate)
// Parameters:
//		bool                                               bpp__IsDodgeRolling__pf                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void AMainCharacter_C::OnDodgeRollChanged__DelegateSignature(bool bpp__IsDodgeRolling__pf)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(41753);

	AMainCharacter_C_OnDodgeRollChanged__DelegateSignature_Params params {};
	params.bpp__IsDodgeRolling__pf = bpp__IsDodgeRolling__pf;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> DelegateFunction MainCharacter.MainCharacter_C.OnDeathStateChanged__DelegateSignature
//		Flags  -> (Public, Delegate)
void AMainCharacter_C::OnDeathStateChanged__DelegateSignature()
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(41752);

	AMainCharacter_C_OnDeathStateChanged__DelegateSignature_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> DelegateFunction MainCharacter.MainCharacter_C.OnBeginZipline__DelegateSignature
//		Flags  -> (Public, Delegate)
void AMainCharacter_C::OnBeginZipline__DelegateSignature()
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(41751);

	AMainCharacter_C_OnBeginZipline__DelegateSignature_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> DelegateFunction MainCharacter.MainCharacter_C.OnAnimInitialized__DelegateSignature
//		Flags  -> (Public, Delegate)
void AMainCharacter_C::OnAnimInitialized__DelegateSignature()
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(41750);

	AMainCharacter_C_OnAnimInitialized__DelegateSignature_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
