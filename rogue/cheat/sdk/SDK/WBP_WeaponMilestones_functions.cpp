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
//		Name   -> Function WBP_WeaponMilestones.WBP_WeaponMilestones_C.GetNumLockedEntries
//		Flags  -> (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
//		int                                                ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
int UWBP_WeaponMilestones_C::GetNumLockedEntries()
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(78731);

	UWBP_WeaponMilestones_C_GetNumLockedEntries_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_WeaponMilestones.WBP_WeaponMilestones_C.GetMilestoneEntries
//		Flags  -> (Event, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
//		TArray<class UKSWeaponMilestoneEntry*>             Entries                                                    (Parm, OutParm, ContainsInstancedReference, HasGetValueTypeHash)
void UWBP_WeaponMilestones_C::GetMilestoneEntries(TArray<class UKSWeaponMilestoneEntry*>* Entries)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(78730);

	UWBP_WeaponMilestones_C_GetMilestoneEntries_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Entries != nullptr)
		*Entries = params.Entries;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_WeaponMilestones.WBP_WeaponMilestones_C.InitializeWidget
//		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
//		class APUMG_HUD*                                   HUD                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWBP_WeaponMilestones_C::InitializeWidget(class APUMG_HUD* HUD)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(78729);

	UWBP_WeaponMilestones_C_InitializeWidget_Params params {};
	params.HUD = HUD;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_WeaponMilestones.WBP_WeaponMilestones_C.ExecuteUbergraph_WBP_WeaponMilestones
//		Flags  -> (Final)
// Parameters:
//		int                                                EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWBP_WeaponMilestones_C::ExecuteUbergraph_WBP_WeaponMilestones(int EntryPoint)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(78728);

	UWBP_WeaponMilestones_C_ExecuteUbergraph_WBP_WeaponMilestones_Params params {};
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
