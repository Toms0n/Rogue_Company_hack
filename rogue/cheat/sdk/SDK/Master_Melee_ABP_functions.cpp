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
//		Name   -> Function Master_Melee_ABP.Master_Melee_ABP_C.AnimGraph
//		Flags  -> (HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
//		struct FPoseLink                                   AnimGraph                                                  (Parm, OutParm, NoDestructor)
void UMaster_Melee_ABP_C::AnimGraph(struct FPoseLink* AnimGraph)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(38692);

	UMaster_Melee_ABP_C_AnimGraph_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (AnimGraph != nullptr)
		*AnimGraph = params.AnimGraph;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function Master_Melee_ABP.Master_Melee_ABP_C.Set Weapon State
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
//		Killstreak_EWeaponStateNew                         Weapon_State                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UMaster_Melee_ABP_C::Set_Weapon_State(Killstreak_EWeaponStateNew Weapon_State)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(38691);

	UMaster_Melee_ABP_C_Set_Weapon_State_Params params {};
	params.Weapon_State = Weapon_State;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function Master_Melee_ABP.Master_Melee_ABP_C.InitSetWeaponState
//		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
//		Killstreak_EWeaponStateNew                         NewWeaponState                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UMaster_Melee_ABP_C::InitSetWeaponState(Killstreak_EWeaponStateNew NewWeaponState)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(38690);

	UMaster_Melee_ABP_C_InitSetWeaponState_Params params {};
	params.NewWeaponState = NewWeaponState;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function Master_Melee_ABP.Master_Melee_ABP_C.ExecuteUbergraph_Master_Melee_ABP
//		Flags  -> (Final)
// Parameters:
//		int                                                EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UMaster_Melee_ABP_C::ExecuteUbergraph_Master_Melee_ABP(int EntryPoint)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(38689);

	UMaster_Melee_ABP_C_ExecuteUbergraph_Master_Melee_ABP_Params params {};
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
