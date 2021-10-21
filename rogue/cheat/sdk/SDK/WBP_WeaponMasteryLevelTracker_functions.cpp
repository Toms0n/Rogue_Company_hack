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
//		Name   -> Function WBP_WeaponMasteryLevelTracker.WBP_WeaponMasteryLevelTracker_C.ExecuteUbergraph_WBP_WeaponMasteryLevelTracker
//		Flags  -> (Final)
// Parameters:
//		int                                                EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWBP_WeaponMasteryLevelTracker_C::ExecuteUbergraph_WBP_WeaponMasteryLevelTracker(int EntryPoint)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(86198);

	UWBP_WeaponMasteryLevelTracker_C_ExecuteUbergraph_WBP_WeaponMasteryLevelTracker_Params params {};
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
