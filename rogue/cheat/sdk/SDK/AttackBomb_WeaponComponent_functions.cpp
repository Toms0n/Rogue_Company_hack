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
//		Offset -> 0x01822960
//		Name   -> Function AttackBomb_WeaponComponent.AttackBomb_WeaponComponent_C.OnSkyDiveStarted
//		Flags  -> (Native, Event, Public)
// Parameters:
//		class AKSCharacter*                                bpp__SkyDiver__pf                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UAttackBomb_WeaponComponent_C::OnSkyDiveStarted(class AKSCharacter* bpp__SkyDiver__pf)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(34294);

	UAttackBomb_WeaponComponent_C_OnSkyDiveStarted_Params params {};
	params.bpp__SkyDiver__pf = bpp__SkyDiver__pf;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x018228D0
//		Name   -> Function AttackBomb_WeaponComponent.AttackBomb_WeaponComponent_C.OnSkyDiveSkipped
//		Flags  -> (Native, Event, Public)
// Parameters:
//		class AKSCharacter*                                bpp__SkyDiver__pf                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UAttackBomb_WeaponComponent_C::OnSkyDiveSkipped(class AKSCharacter* bpp__SkyDiver__pf)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(34293);

	UAttackBomb_WeaponComponent_C_OnSkyDiveSkipped_Params params {};
	params.bpp__SkyDiver__pf = bpp__SkyDiver__pf;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x01822840
//		Name   -> Function AttackBomb_WeaponComponent.AttackBomb_WeaponComponent_C.OnSkyDiveEnded
//		Flags  -> (Native, Event, Public)
// Parameters:
//		class AKSCharacter*                                bpp__SkyDiver__pf                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UAttackBomb_WeaponComponent_C::OnSkyDiveEnded(class AKSCharacter* bpp__SkyDiver__pf)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(34292);

	UAttackBomb_WeaponComponent_C_OnSkyDiveEnded_Params params {};
	params.bpp__SkyDiver__pf = bpp__SkyDiver__pf;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x01822580
//		Name   -> Function AttackBomb_WeaponComponent.AttackBomb_WeaponComponent_C.DoesCharacterHaveHoverboard
//		Flags  -> (Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
//		class AKSCharacter*                                bpp__Character__pf                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		bool                                               bpp__HasxHoverboard__pfT                                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UAttackBomb_WeaponComponent_C::DoesCharacterHaveHoverboard(class AKSCharacter* bpp__Character__pf, bool* bpp__HasxHoverboard__pfT)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(34291);

	UAttackBomb_WeaponComponent_C_DoesCharacterHaveHoverboard_Params params {};
	params.bpp__Character__pf = bpp__Character__pf;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (bpp__HasxHoverboard__pfT != nullptr)
		*bpp__HasxHoverboard__pfT = params.bpp__HasxHoverboard__pfT;

}


// Function:
//		Offset -> 0x018224E0
//		Name   -> Function AttackBomb_WeaponComponent.AttackBomb_WeaponComponent_C.DoesCharacterHaveBackpack
//		Flags  -> (Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
//		bool                                               bpp__HasBackpack__pf                                       (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UAttackBomb_WeaponComponent_C::DoesCharacterHaveBackpack(bool* bpp__HasBackpack__pf)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(34290);

	UAttackBomb_WeaponComponent_C_DoesCharacterHaveBackpack_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (bpp__HasBackpack__pf != nullptr)
		*bpp__HasBackpack__pf = params.bpp__HasBackpack__pf;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
