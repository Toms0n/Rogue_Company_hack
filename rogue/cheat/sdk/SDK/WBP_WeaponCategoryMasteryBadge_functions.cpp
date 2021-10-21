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
//		Name   -> Function WBP_WeaponCategoryMasteryBadge.WBP_WeaponCategoryMasteryBadge_C.SetIsMastered
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
//		bool                                               IsMastered                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UWBP_WeaponCategoryMasteryBadge_C::SetIsMastered(bool IsMastered)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(74565);

	UWBP_WeaponCategoryMasteryBadge_C_SetIsMastered_Params params {};
	params.IsMastered = IsMastered;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_WeaponCategoryMasteryBadge.WBP_WeaponCategoryMasteryBadge_C.SetMasteryTextures
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
void UWBP_WeaponCategoryMasteryBadge_C::SetMasteryTextures()
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(74564);

	UWBP_WeaponCategoryMasteryBadge_C_SetMasteryTextures_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_WeaponCategoryMasteryBadge.WBP_WeaponCategoryMasteryBadge_C.Event Set Is Mastered
//		Flags  -> (BlueprintCallable, BlueprintEvent)
// Parameters:
//		bool                                               IsMastered                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UWBP_WeaponCategoryMasteryBadge_C::Event_Set_Is_Mastered(bool IsMastered)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(74563);

	UWBP_WeaponCategoryMasteryBadge_C_Event_Set_Is_Mastered_Params params {};
	params.IsMastered = IsMastered;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_WeaponCategoryMasteryBadge.WBP_WeaponCategoryMasteryBadge_C.ExecuteUbergraph_WBP_WeaponCategoryMasteryBadge
//		Flags  -> (Final)
// Parameters:
//		int                                                EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWBP_WeaponCategoryMasteryBadge_C::ExecuteUbergraph_WBP_WeaponCategoryMasteryBadge(int EntryPoint)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(74562);

	UWBP_WeaponCategoryMasteryBadge_C_ExecuteUbergraph_WBP_WeaponCategoryMasteryBadge_Params params {};
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
