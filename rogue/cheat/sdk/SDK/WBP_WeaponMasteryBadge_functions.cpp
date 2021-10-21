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
//		Name   -> Function WBP_WeaponMasteryBadge.WBP_WeaponMasteryBadge_C.Event Set Mastery Level
//		Flags  -> (BlueprintCallable, BlueprintEvent)
// Parameters:
//		int                                                MasteryLevel                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWBP_WeaponMasteryBadge_C::Event_Set_Mastery_Level(int MasteryLevel)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(75800);

	UWBP_WeaponMasteryBadge_C_Event_Set_Mastery_Level_Params params {};
	params.MasteryLevel = MasteryLevel;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_WeaponMasteryBadge.WBP_WeaponMasteryBadge_C.ExecuteUbergraph_WBP_WeaponMasteryBadge
//		Flags  -> (Final, HasDefaults)
// Parameters:
//		int                                                EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWBP_WeaponMasteryBadge_C::ExecuteUbergraph_WBP_WeaponMasteryBadge(int EntryPoint)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(75799);

	UWBP_WeaponMasteryBadge_C_ExecuteUbergraph_WBP_WeaponMasteryBadge_Params params {};
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
