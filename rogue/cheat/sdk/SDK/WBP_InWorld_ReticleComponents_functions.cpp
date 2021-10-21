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
//		Name   -> Function WBP_InWorld_ReticleComponents.WBP_InWorld_ReticleComponents_C.Check For Active View Mode Mod
//		Flags  -> (Protected, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
//		bool                                               ModsActive                                                 (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UWBP_InWorld_ReticleComponents_C::Check_For_Active_View_Mode_Mod(bool* ModsActive)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(27808);

	UWBP_InWorld_ReticleComponents_C_Check_For_Active_View_Mode_Mod_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (ModsActive != nullptr)
		*ModsActive = params.ModsActive;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_InWorld_ReticleComponents.WBP_InWorld_ReticleComponents_C.SetWeaponComponent
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
//		class UKSWeaponComponent*                          WeaponComponent                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWBP_InWorld_ReticleComponents_C::SetWeaponComponent(class UKSWeaponComponent* WeaponComponent)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(27807);

	UWBP_InWorld_ReticleComponents_C_SetWeaponComponent_Params params {};
	params.WeaponComponent = WeaponComponent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_InWorld_ReticleComponents.WBP_InWorld_ReticleComponents_C.SetPlayerState
//		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
//		class APlayerState*                                PlayerState                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWBP_InWorld_ReticleComponents_C::SetPlayerState(class APlayerState* PlayerState)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(27806);

	UWBP_InWorld_ReticleComponents_C_SetPlayerState_Params params {};
	params.PlayerState = PlayerState;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_InWorld_ReticleComponents.WBP_InWorld_ReticleComponents_C.SetAmmoColor
//		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
//		bool                                               IsActive                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UWBP_InWorld_ReticleComponents_C::SetAmmoColor(bool IsActive)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(27805);

	UWBP_InWorld_ReticleComponents_C_SetAmmoColor_Params params {};
	params.IsActive = IsActive;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_InWorld_ReticleComponents.WBP_InWorld_ReticleComponents_C.OnPossession
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
//		class APlayerState*                                PlayerState                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWBP_InWorld_ReticleComponents_C::OnPossession(class APlayerState* PlayerState)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(27804);

	UWBP_InWorld_ReticleComponents_C_OnPossession_Params params {};
	params.PlayerState = PlayerState;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_InWorld_ReticleComponents.WBP_InWorld_ReticleComponents_C.OnWeaponSet
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
//		class UKSWeaponComponent*                          WeaponComponent                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWBP_InWorld_ReticleComponents_C::OnWeaponSet(class UKSWeaponComponent* WeaponComponent)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(27803);

	UWBP_InWorld_ReticleComponents_C_OnWeaponSet_Params params {};
	params.WeaponComponent = WeaponComponent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_InWorld_ReticleComponents.WBP_InWorld_ReticleComponents_C.OnModActivated
//		Flags  -> (BlueprintCallable, BlueprintEvent)
// Parameters:
//		bool                                               bActive                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UWBP_InWorld_ReticleComponents_C::OnModActivated(bool bActive)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(27802);

	UWBP_InWorld_ReticleComponents_C_OnModActivated_Params params {};
	params.bActive = bActive;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_InWorld_ReticleComponents.WBP_InWorld_ReticleComponents_C.Construct
//		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
void UWBP_InWorld_ReticleComponents_C::Construct()
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(27801);

	UWBP_InWorld_ReticleComponents_C_Construct_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_InWorld_ReticleComponents.WBP_InWorld_ReticleComponents_C.Destruct
//		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
void UWBP_InWorld_ReticleComponents_C::Destruct()
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(27800);

	UWBP_InWorld_ReticleComponents_C_Destruct_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_InWorld_ReticleComponents.WBP_InWorld_ReticleComponents_C.ExecuteUbergraph_WBP_InWorld_ReticleComponents
//		Flags  -> (Final, HasDefaults)
// Parameters:
//		int                                                EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWBP_InWorld_ReticleComponents_C::ExecuteUbergraph_WBP_InWorld_ReticleComponents(int EntryPoint)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(27799);

	UWBP_InWorld_ReticleComponents_C_ExecuteUbergraph_WBP_InWorld_ReticleComponents_Params params {};
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
