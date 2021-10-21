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
//		Offset -> 0x0182EE70
//		Name   -> Function MasterMelee_WeaponComponent.MasterMelee_WeaponComponent_C.TwistHipsOnFire
//		Flags  -> (Native, Public, BlueprintCallable)
void UMasterMelee_WeaponComponent_C::TwistHipsOnFire()
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(42066);

	UMasterMelee_WeaponComponent_C_TwistHipsOnFire_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x0184C440
//		Name   -> Function MasterMelee_WeaponComponent.MasterMelee_WeaponComponent_C.PlayBulletNearMissSound
//		Flags  -> (Native, Public, HasOutParms, HasDefaults, BlueprintCallable)
// Parameters:
//		struct FVector                                     bpp__InxTracexStart__pfTT                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		struct FVector                                     bpp__InxTracexEnd__pfTT                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		TArray<struct FHitResult>                          bpp__Hits__pf                                              (Parm, OutParm, ZeroConstructor, ContainsInstancedReference, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UMasterMelee_WeaponComponent_C::PlayBulletNearMissSound(const struct FVector& bpp__InxTracexStart__pfTT, const struct FVector& bpp__InxTracexEnd__pfTT, TArray<struct FHitResult>* bpp__Hits__pf)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(42065);

	UMasterMelee_WeaponComponent_C_PlayBulletNearMissSound_Params params {};
	params.bpp__InxTracexStart__pfTT = bpp__InxTracexStart__pfTT;
	params.bpp__InxTracexEnd__pfTT = bpp__InxTracexEnd__pfTT;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (bpp__Hits__pf != nullptr)
		*bpp__Hits__pf = params.bpp__Hits__pf;

}


// Function:
//		Offset -> 0x0184C3B0
//		Name   -> Function MasterMelee_WeaponComponent.MasterMelee_WeaponComponent_C.On Thrown
//		Flags  -> (Native, Public, BlueprintCallable)
// Parameters:
//		bool                                               bpp__Thrown__pf                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UMasterMelee_WeaponComponent_C::On_Thrown(bool bpp__Thrown__pf)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(42064);

	UMasterMelee_WeaponComponent_C_On_Thrown_Params params {};
	params.bpp__Thrown__pf = bpp__Thrown__pf;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x0184C320
//		Name   -> Function MasterMelee_WeaponComponent.MasterMelee_WeaponComponent_C.On Lunge State Changed
//		Flags  -> (Native, Public, BlueprintCallable)
// Parameters:
//		bool                                               bpp__IsLunging__pf                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UMasterMelee_WeaponComponent_C::On_Lunge_State_Changed(bool bpp__IsLunging__pf)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(42063);

	UMasterMelee_WeaponComponent_C_On_Lunge_State_Changed_Params params {};
	params.bpp__IsLunging__pf = bpp__IsLunging__pf;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x0184C250
//		Name   -> Function MasterMelee_WeaponComponent.MasterMelee_WeaponComponent_C.Lunge Attack
//		Flags  -> (Native, Public, BlueprintCallable)
// Parameters:
//		bool                                               bpp__IsxLunging__pfT                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		class AKSCharacter*                                bpp__CharacterxOwner__pfT                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UMasterMelee_WeaponComponent_C::Lunge_Attack(bool bpp__IsxLunging__pfT, class AKSCharacter* bpp__CharacterxOwner__pfT)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(42062);

	UMasterMelee_WeaponComponent_C_Lunge_Attack_Params params {};
	params.bpp__IsxLunging__pfT = bpp__IsxLunging__pfT;
	params.bpp__CharacterxOwner__pfT = bpp__CharacterxOwner__pfT;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x0184C170
//		Name   -> Function MasterMelee_WeaponComponent.MasterMelee_WeaponComponent_C.IsTooCloseToLunge
//		Flags  -> (Native, Public, HasOutParms, BlueprintCallable, BlueprintPure)
// Parameters:
//		class AKSCharacter*                                bpp__CharacterOwner__pf                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		bool                                               bpp__TooClose__pf                                          (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UMasterMelee_WeaponComponent_C::IsTooCloseToLunge(class AKSCharacter* bpp__CharacterOwner__pf, bool* bpp__TooClose__pf)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(42061);

	UMasterMelee_WeaponComponent_C_IsTooCloseToLunge_Params params {};
	params.bpp__CharacterOwner__pf = bpp__CharacterOwner__pf;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (bpp__TooClose__pf != nullptr)
		*bpp__TooClose__pf = params.bpp__TooClose__pf;

}


// Function:
//		Offset -> 0x0184C0D0
//		Name   -> Function MasterMelee_WeaponComponent.MasterMelee_WeaponComponent_C.Get Or Cache Player 3P Fire Montage
//		Flags  -> (Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
//		class UAnimMontage*                                bpp__FirexMontage__pfT                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UMasterMelee_WeaponComponent_C::Get_Or_Cache_Player_3P_Fire_Montage(class UAnimMontage** bpp__FirexMontage__pfT)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(42060);

	UMasterMelee_WeaponComponent_C_Get_Or_Cache_Player_3P_Fire_Montage_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (bpp__FirexMontage__pfT != nullptr)
		*bpp__FirexMontage__pfT = params.bpp__FirexMontage__pfT;

}


// Function:
//		Offset -> 0x0184C030
//		Name   -> Function MasterMelee_WeaponComponent.MasterMelee_WeaponComponent_C.GetMeleeStillMontage
//		Flags  -> (Native, Public, HasOutParms, BlueprintCallable, BlueprintPure)
// Parameters:
//		class UAnimMontage*                                bpp__Montage__pf                                           (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UMasterMelee_WeaponComponent_C::GetMeleeStillMontage(class UAnimMontage** bpp__Montage__pf)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(42059);

	UMasterMelee_WeaponComponent_C_GetMeleeStillMontage_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (bpp__Montage__pf != nullptr)
		*bpp__Montage__pf = params.bpp__Montage__pf;

}


// Function:
//		Offset -> 0x0184BFB0
//		Name   -> Function MasterMelee_WeaponComponent.MasterMelee_WeaponComponent_C.ExecuteUbergraph_MasterMelee_WeaponComponent_5
//		Flags  -> (Final, Native, Public)
// Parameters:
//		int                                                bpp__EntryPoint__pf                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UMasterMelee_WeaponComponent_C::ExecuteUbergraph_MasterMelee_WeaponComponent_5(int bpp__EntryPoint__pf)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(42058);

	UMasterMelee_WeaponComponent_C_ExecuteUbergraph_MasterMelee_WeaponComponent_5_Params params {};
	params.bpp__EntryPoint__pf = bpp__EntryPoint__pf;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x0182E170
//		Name   -> Function MasterMelee_WeaponComponent.MasterMelee_WeaponComponent_C.End Zipline
//		Flags  -> (Native, Public, BlueprintCallable)
void UMasterMelee_WeaponComponent_C::End_Zipline()
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(42057);

	UMasterMelee_WeaponComponent_C_End_Zipline_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x0182EE50
//		Name   -> Function MasterMelee_WeaponComponent.MasterMelee_WeaponComponent_C.CheckForMeleeAim
//		Flags  -> (Native, Public, BlueprintCallable)
void UMasterMelee_WeaponComponent_C::CheckForMeleeAim()
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(42056);

	UMasterMelee_WeaponComponent_C_CheckForMeleeAim_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> DelegateFunction MasterMelee_WeaponComponent.MasterMelee_WeaponComponent_C.OnLungeChanged__DelegateSignature
//		Flags  -> (Public, Delegate)
// Parameters:
//		bool                                               bpp__IsLunging__pf                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UMasterMelee_WeaponComponent_C::OnLungeChanged__DelegateSignature(bool bpp__IsLunging__pf)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(42055);

	UMasterMelee_WeaponComponent_C_OnLungeChanged__DelegateSignature_Params params {};
	params.bpp__IsLunging__pf = bpp__IsLunging__pf;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> DelegateFunction MasterMelee_WeaponComponent.MasterMelee_WeaponComponent_C.OnEndZipline__DelegateSignature
//		Flags  -> (Public, Delegate)
void UMasterMelee_WeaponComponent_C::OnEndZipline__DelegateSignature()
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(42054);

	UMasterMelee_WeaponComponent_C_OnEndZipline__DelegateSignature_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
