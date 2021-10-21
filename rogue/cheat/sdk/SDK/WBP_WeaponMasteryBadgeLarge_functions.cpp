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
//		Name   -> Function WBP_WeaponMasteryBadgeLarge.WBP_WeaponMasteryBadgeLarge_C.Event Set Mastery Level
//		Flags  -> (BlueprintCallable, BlueprintEvent)
// Parameters:
//		int                                                MasteryLevel                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWBP_WeaponMasteryBadgeLarge_C::Event_Set_Mastery_Level(int MasteryLevel)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(75785);

	UWBP_WeaponMasteryBadgeLarge_C_Event_Set_Mastery_Level_Params params {};
	params.MasteryLevel = MasteryLevel;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_WeaponMasteryBadgeLarge.WBP_WeaponMasteryBadgeLarge_C.ExecuteUbergraph_WBP_WeaponMasteryBadgeLarge
//		Flags  -> (Final, HasDefaults)
// Parameters:
//		int                                                EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWBP_WeaponMasteryBadgeLarge_C::ExecuteUbergraph_WBP_WeaponMasteryBadgeLarge(int EntryPoint)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(75784);

	UWBP_WeaponMasteryBadgeLarge_C_ExecuteUbergraph_WBP_WeaponMasteryBadgeLarge_Params params {};
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
