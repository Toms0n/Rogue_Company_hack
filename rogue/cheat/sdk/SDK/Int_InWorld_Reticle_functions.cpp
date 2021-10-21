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
//		Name   -> Function Int_InWorld_Reticle.Int_InWorld_Reticle_C.OnWeaponSet
//		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
//		class UKSWeaponComponent*                          bpp__WeaponComponent__pf                                   (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UInt_InWorld_Reticle_C::OnWeaponSet(class UKSWeaponComponent* bpp__WeaponComponent__pf)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(25133);

	UInt_InWorld_Reticle_C_OnWeaponSet_Params params {};
	params.bpp__WeaponComponent__pf = bpp__WeaponComponent__pf;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function Int_InWorld_Reticle.Int_InWorld_Reticle_C.OnPossession
//		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
//		class APlayerState*                                bpp__PlayerState__pf                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UInt_InWorld_Reticle_C::OnPossession(class APlayerState* bpp__PlayerState__pf)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(25132);

	UInt_InWorld_Reticle_C_OnPossession_Params params {};
	params.bpp__PlayerState__pf = bpp__PlayerState__pf;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
