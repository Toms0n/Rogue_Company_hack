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
//		Name   -> Function WBP_InWorld_Reticle.WBP_InWorld_Reticle_C.Check For Active View Mode Mod
//		Flags  -> (Protected, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
//		bool                                               ModsActive                                                 (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UWBP_InWorld_Reticle_C::Check_For_Active_View_Mode_Mod(bool* ModsActive)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(27828);

	UWBP_InWorld_Reticle_C_Check_For_Active_View_Mode_Mod_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (ModsActive != nullptr)
		*ModsActive = params.ModsActive;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_InWorld_Reticle.WBP_InWorld_Reticle_C.SetConsoleSize
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
void UWBP_InWorld_Reticle_C::SetConsoleSize()
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(27827);

	UWBP_InWorld_Reticle_C_SetConsoleSize_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_InWorld_Reticle.WBP_InWorld_Reticle_C.OnPaint
//		Flags  -> (BlueprintCosmetic, Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
//		struct FPaintContext                               Context                                                    (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor)
void UWBP_InWorld_Reticle_C::OnPaint(struct FPaintContext* Context)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(27826);

	UWBP_InWorld_Reticle_C_OnPaint_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Context != nullptr)
		*Context = params.Context;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_InWorld_Reticle.WBP_InWorld_Reticle_C.SetPlayerState
//		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
//		class APlayerState*                                PlayerState                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWBP_InWorld_Reticle_C::SetPlayerState(class APlayerState* PlayerState)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(27825);

	UWBP_InWorld_Reticle_C_SetPlayerState_Params params {};
	params.PlayerState = PlayerState;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_InWorld_Reticle.WBP_InWorld_Reticle_C.SetReticleImageColor
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
//		bool                                               Active                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UWBP_InWorld_Reticle_C::SetReticleImageColor(bool Active)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(27824);

	UWBP_InWorld_Reticle_C_SetReticleImageColor_Params params {};
	params.Active = Active;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_InWorld_Reticle.WBP_InWorld_Reticle_C.OnWeaponSet
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
//		class UKSWeaponComponent*                          WeaponComponent                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWBP_InWorld_Reticle_C::OnWeaponSet(class UKSWeaponComponent* WeaponComponent)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(27823);

	UWBP_InWorld_Reticle_C_OnWeaponSet_Params params {};
	params.WeaponComponent = WeaponComponent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_InWorld_Reticle.WBP_InWorld_Reticle_C.Construct
//		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
void UWBP_InWorld_Reticle_C::Construct()
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(27822);

	UWBP_InWorld_Reticle_C_Construct_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_InWorld_Reticle.WBP_InWorld_Reticle_C.OnPossession
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
//		class APlayerState*                                PlayerState                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWBP_InWorld_Reticle_C::OnPossession(class APlayerState* PlayerState)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(27821);

	UWBP_InWorld_Reticle_C_OnPossession_Params params {};
	params.PlayerState = PlayerState;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_InWorld_Reticle.WBP_InWorld_Reticle_C.OnModActivated
//		Flags  -> (BlueprintCallable, BlueprintEvent)
// Parameters:
//		bool                                               bActive                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UWBP_InWorld_Reticle_C::OnModActivated(bool bActive)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(27820);

	UWBP_InWorld_Reticle_C_OnModActivated_Params params {};
	params.bActive = bActive;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_InWorld_Reticle.WBP_InWorld_Reticle_C.Destruct
//		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
void UWBP_InWorld_Reticle_C::Destruct()
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(27819);

	UWBP_InWorld_Reticle_C_Destruct_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_InWorld_Reticle.WBP_InWorld_Reticle_C.SetWeaponComponent
//		Flags  -> (BlueprintCallable, BlueprintEvent)
// Parameters:
//		class UKSWeaponComponent*                          WeaponComponent                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWBP_InWorld_Reticle_C::SetWeaponComponent(class UKSWeaponComponent* WeaponComponent)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(27818);

	UWBP_InWorld_Reticle_C_SetWeaponComponent_Params params {};
	params.WeaponComponent = WeaponComponent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_InWorld_Reticle.WBP_InWorld_Reticle_C.ExecuteUbergraph_WBP_InWorld_Reticle
//		Flags  -> (Final, HasDefaults)
// Parameters:
//		int                                                EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWBP_InWorld_Reticle_C::ExecuteUbergraph_WBP_InWorld_Reticle(int EntryPoint)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(27817);

	UWBP_InWorld_Reticle_C_ExecuteUbergraph_WBP_InWorld_Reticle_Params params {};
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
