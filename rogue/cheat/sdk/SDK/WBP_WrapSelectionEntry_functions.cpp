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
//		Name   -> Function WBP_WrapSelectionEntry.WBP_WrapSelectionEntry_C.NavigateConfirm
//		Flags  -> (Event, Protected, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
//		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
bool UWBP_WrapSelectionEntry_C::NavigateConfirm()
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(62563);

	UWBP_WrapSelectionEntry_C_NavigateConfirm_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_WrapSelectionEntry.WBP_WrapSelectionEntry_C.DisplayWrap
//		Flags  -> (Event, Public, BlueprintEvent)
// Parameters:
//		class UKSWeaponAttachment*                         WeaponAttachment                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWBP_WrapSelectionEntry_C::DisplayWrap(class UKSWeaponAttachment* WeaponAttachment)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(62562);

	UWBP_WrapSelectionEntry_C_DisplayWrap_Params params {};
	params.WeaponAttachment = WeaponAttachment;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_WrapSelectionEntry.WBP_WrapSelectionEntry_C.GamepadHover
//		Flags  -> (Event, Public, BlueprintEvent)
void UWBP_WrapSelectionEntry_C::GamepadHover()
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(62561);

	UWBP_WrapSelectionEntry_C_GamepadHover_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_WrapSelectionEntry.WBP_WrapSelectionEntry_C.DisplaySelected
//		Flags  -> (Event, Public, BlueprintEvent)
// Parameters:
//		bool                                               IsSelected                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UWBP_WrapSelectionEntry_C::DisplaySelected(bool IsSelected)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(62560);

	UWBP_WrapSelectionEntry_C_DisplaySelected_Params params {};
	params.IsSelected = IsSelected;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_WrapSelectionEntry.WBP_WrapSelectionEntry_C.DisplayEquipped
//		Flags  -> (Event, Public, BlueprintEvent)
// Parameters:
//		bool                                               IsEquipped                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UWBP_WrapSelectionEntry_C::DisplayEquipped(bool IsEquipped)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(62559);

	UWBP_WrapSelectionEntry_C_DisplayEquipped_Params params {};
	params.IsEquipped = IsEquipped;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_WrapSelectionEntry.WBP_WrapSelectionEntry_C.BndEvt__WBP_KSCosmeticItemDisplay_K2Node_ComponentBoundEvent_5_OnCosmeticClicked__DelegateSignature
//		Flags  -> (BlueprintEvent)
// Parameters:
//		class UWBP_KSCosmeticItemDisplay_C*                Widget                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		struct FCosmeticSlotDetails                        CosmeticSlotDetails                                        (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)
void UWBP_WrapSelectionEntry_C::BndEvt__WBP_KSCosmeticItemDisplay_K2Node_ComponentBoundEvent_5_OnCosmeticClicked__DelegateSignature(class UWBP_KSCosmeticItemDisplay_C* Widget, const struct FCosmeticSlotDetails& CosmeticSlotDetails)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(62558);

	UWBP_WrapSelectionEntry_C_BndEvt__WBP_KSCosmeticItemDisplay_K2Node_ComponentBoundEvent_5_OnCosmeticClicked__DelegateSignature_Params params {};
	params.Widget = Widget;
	params.CosmeticSlotDetails = CosmeticSlotDetails;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_WrapSelectionEntry.WBP_WrapSelectionEntry_C.GamepadUnhover
//		Flags  -> (Event, Public, BlueprintEvent)
void UWBP_WrapSelectionEntry_C::GamepadUnhover()
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(62557);

	UWBP_WrapSelectionEntry_C_GamepadUnhover_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_WrapSelectionEntry.WBP_WrapSelectionEntry_C.ExecuteUbergraph_WBP_WrapSelectionEntry
//		Flags  -> (Final)
// Parameters:
//		int                                                EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWBP_WrapSelectionEntry_C::ExecuteUbergraph_WBP_WrapSelectionEntry(int EntryPoint)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(62556);

	UWBP_WrapSelectionEntry_C_ExecuteUbergraph_WBP_WrapSelectionEntry_Params params {};
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
