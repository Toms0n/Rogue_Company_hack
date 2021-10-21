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
//		Name   -> Function WBP_AmmoWrapper.WBP_AmmoWrapper_C.GetAmmoWidgets
//		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
//		TArray<class UWBP_AmmoCount_C*>                    AmmoWidgtes                                                (Parm, OutParm, ContainsInstancedReference, HasGetValueTypeHash)
void UWBP_AmmoWrapper_C::GetAmmoWidgets(TArray<class UWBP_AmmoCount_C*>* AmmoWidgtes)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(27414);

	UWBP_AmmoWrapper_C_GetAmmoWidgets_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (AmmoWidgtes != nullptr)
		*AmmoWidgtes = params.AmmoWidgtes;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_AmmoWrapper.WBP_AmmoWrapper_C.OnAmmoChanged
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
//		class UKSWeaponComponent*                          Weapon                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		unsigned char                                      AmmoChange                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		bool                                               BonusAmmo                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UWBP_AmmoWrapper_C::OnAmmoChanged(class UKSWeaponComponent* Weapon, unsigned char AmmoChange, bool BonusAmmo)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(27413);

	UWBP_AmmoWrapper_C_OnAmmoChanged_Params params {};
	params.Weapon = Weapon;
	params.AmmoChange = AmmoChange;
	params.BonusAmmo = BonusAmmo;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_AmmoWrapper.WBP_AmmoWrapper_C.SetInitialAmmoCount
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
//		class UKSWeaponComponent*                          Weapon                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWBP_AmmoWrapper_C::SetInitialAmmoCount(class UKSWeaponComponent* Weapon)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(27412);

	UWBP_AmmoWrapper_C_SetInitialAmmoCount_Params params {};
	params.Weapon = Weapon;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_AmmoWrapper.WBP_AmmoWrapper_C.AddAmmoCount
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
void UWBP_AmmoWrapper_C::AddAmmoCount()
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(27411);

	UWBP_AmmoWrapper_C_AddAmmoCount_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
