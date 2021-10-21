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
//		Name   -> Function WBP_WeaponCategoryButton_Horizontal.WBP_WeaponCategoryButton_Horizontal_C.NavigateConfirm
//		Flags  -> (Event, Protected, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
//		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
bool UWBP_WeaponCategoryButton_Horizontal_C::NavigateConfirm()
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(74438);

	UWBP_WeaponCategoryButton_Horizontal_C_NavigateConfirm_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_WeaponCategoryButton_Horizontal.WBP_WeaponCategoryButton_Horizontal_C.DisplayWeaponCategory
//		Flags  -> (Event, Public, BlueprintEvent)
// Parameters:
//		class UKSWeaponCategoryAsset*                      DisplayedCategory                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWBP_WeaponCategoryButton_Horizontal_C::DisplayWeaponCategory(class UKSWeaponCategoryAsset* DisplayedCategory)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(74437);

	UWBP_WeaponCategoryButton_Horizontal_C_DisplayWeaponCategory_Params params {};
	params.DisplayedCategory = DisplayedCategory;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_WeaponCategoryButton_Horizontal.WBP_WeaponCategoryButton_Horizontal_C.BndEvt__HitTarget_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature
//		Flags  -> (BlueprintEvent)
void UWBP_WeaponCategoryButton_Horizontal_C::BndEvt__HitTarget_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature()
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(74436);

	UWBP_WeaponCategoryButton_Horizontal_C_BndEvt__HitTarget_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_WeaponCategoryButton_Horizontal.WBP_WeaponCategoryButton_Horizontal_C.BndEvt__HitTarget_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature
//		Flags  -> (BlueprintEvent)
void UWBP_WeaponCategoryButton_Horizontal_C::BndEvt__HitTarget_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature()
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(74435);

	UWBP_WeaponCategoryButton_Horizontal_C_BndEvt__HitTarget_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_WeaponCategoryButton_Horizontal.WBP_WeaponCategoryButton_Horizontal_C.GamepadHover
//		Flags  -> (Event, Public, BlueprintEvent)
void UWBP_WeaponCategoryButton_Horizontal_C::GamepadHover()
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(74434);

	UWBP_WeaponCategoryButton_Horizontal_C_GamepadHover_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_WeaponCategoryButton_Horizontal.WBP_WeaponCategoryButton_Horizontal_C.GamepadUnhover
//		Flags  -> (Event, Public, BlueprintEvent)
void UWBP_WeaponCategoryButton_Horizontal_C::GamepadUnhover()
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(74433);

	UWBP_WeaponCategoryButton_Horizontal_C_GamepadUnhover_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_WeaponCategoryButton_Horizontal.WBP_WeaponCategoryButton_Horizontal_C.BndEvt__HitTarget_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature
//		Flags  -> (BlueprintEvent)
void UWBP_WeaponCategoryButton_Horizontal_C::BndEvt__HitTarget_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature()
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(74432);

	UWBP_WeaponCategoryButton_Horizontal_C_BndEvt__HitTarget_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_WeaponCategoryButton_Horizontal.WBP_WeaponCategoryButton_Horizontal_C.DisplayMasteryProgress
//		Flags  -> (Event, Public, BlueprintEvent)
// Parameters:
//		int                                                ProgressCount                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		int                                                ProgressTotal                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWBP_WeaponCategoryButton_Horizontal_C::DisplayMasteryProgress(int ProgressCount, int ProgressTotal)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(74431);

	UWBP_WeaponCategoryButton_Horizontal_C_DisplayMasteryProgress_Params params {};
	params.ProgressCount = ProgressCount;
	params.ProgressTotal = ProgressTotal;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_WeaponCategoryButton_Horizontal.WBP_WeaponCategoryButton_Horizontal_C.ExecuteUbergraph_WBP_WeaponCategoryButton_Horizontal
//		Flags  -> (Final, HasDefaults)
// Parameters:
//		int                                                EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWBP_WeaponCategoryButton_Horizontal_C::ExecuteUbergraph_WBP_WeaponCategoryButton_Horizontal(int EntryPoint)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(74430);

	UWBP_WeaponCategoryButton_Horizontal_C_ExecuteUbergraph_WBP_WeaponCategoryButton_Horizontal_Params params {};
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
