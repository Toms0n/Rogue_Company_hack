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
//		Name   -> Function WBP_EventGrandPrizeItem.WBP_EventGrandPrizeItem_C.SetIsSelected
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
//		bool                                               IsSelected                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UWBP_EventGrandPrizeItem_C::SetIsSelected(bool IsSelected)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(81653);

	UWBP_EventGrandPrizeItem_C_SetIsSelected_Params params {};
	params.IsSelected = IsSelected;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_EventGrandPrizeItem.WBP_EventGrandPrizeItem_C.NavigateConfirm
//		Flags  -> (Event, Protected, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
//		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
bool UWBP_EventGrandPrizeItem_C::NavigateConfirm()
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(81652);

	UWBP_EventGrandPrizeItem_C_NavigateConfirm_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_EventGrandPrizeItem.WBP_EventGrandPrizeItem_C.SetGrandPrizeProgress
//		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
//		struct FGrandPrizeProgression                      GrandPrizeProgress                                         (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
void UWBP_EventGrandPrizeItem_C::SetGrandPrizeProgress(const struct FGrandPrizeProgression& GrandPrizeProgress)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(81651);

	UWBP_EventGrandPrizeItem_C_SetGrandPrizeProgress_Params params {};
	params.GrandPrizeProgress = GrandPrizeProgress;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_EventGrandPrizeItem.WBP_EventGrandPrizeItem_C.PreConstruct
//		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
//		bool                                               IsDesignTime                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UWBP_EventGrandPrizeItem_C::PreConstruct(bool IsDesignTime)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(81650);

	UWBP_EventGrandPrizeItem_C_PreConstruct_Params params {};
	params.IsDesignTime = IsDesignTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_EventGrandPrizeItem.WBP_EventGrandPrizeItem_C.PopulateSlot
//		Flags  -> (BlueprintCallable, BlueprintEvent)
// Parameters:
//		class UPUMG_StoreItem*                             StoreItem                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWBP_EventGrandPrizeItem_C::PopulateSlot(class UPUMG_StoreItem* StoreItem)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(81649);

	UWBP_EventGrandPrizeItem_C_PopulateSlot_Params params {};
	params.StoreItem = StoreItem;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_EventGrandPrizeItem.WBP_EventGrandPrizeItem_C.BndEvt__HitTarget_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
//		Flags  -> (BlueprintEvent)
void UWBP_EventGrandPrizeItem_C::BndEvt__HitTarget_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature()
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(81648);

	UWBP_EventGrandPrizeItem_C_BndEvt__HitTarget_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_EventGrandPrizeItem.WBP_EventGrandPrizeItem_C.BndEvt__HitTarget_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature
//		Flags  -> (BlueprintEvent)
void UWBP_EventGrandPrizeItem_C::BndEvt__HitTarget_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature()
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(81647);

	UWBP_EventGrandPrizeItem_C_BndEvt__HitTarget_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_EventGrandPrizeItem.WBP_EventGrandPrizeItem_C.BndEvt__HitTarget_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature
//		Flags  -> (BlueprintEvent)
void UWBP_EventGrandPrizeItem_C::BndEvt__HitTarget_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature()
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(81646);

	UWBP_EventGrandPrizeItem_C_BndEvt__HitTarget_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_EventGrandPrizeItem.WBP_EventGrandPrizeItem_C.BndEvt__HitTarget_K2Node_ComponentBoundEvent_3_OnButtonReleasedEvent__DelegateSignature
//		Flags  -> (BlueprintEvent)
void UWBP_EventGrandPrizeItem_C::BndEvt__HitTarget_K2Node_ComponentBoundEvent_3_OnButtonReleasedEvent__DelegateSignature()
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(81645);

	UWBP_EventGrandPrizeItem_C_BndEvt__HitTarget_K2Node_ComponentBoundEvent_3_OnButtonReleasedEvent__DelegateSignature_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_EventGrandPrizeItem.WBP_EventGrandPrizeItem_C.GamepadUnhover
//		Flags  -> (Event, Public, BlueprintEvent)
void UWBP_EventGrandPrizeItem_C::GamepadUnhover()
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(81644);

	UWBP_EventGrandPrizeItem_C_GamepadUnhover_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_EventGrandPrizeItem.WBP_EventGrandPrizeItem_C.GamepadHover
//		Flags  -> (Event, Public, BlueprintEvent)
void UWBP_EventGrandPrizeItem_C::GamepadHover()
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(81643);

	UWBP_EventGrandPrizeItem_C_GamepadHover_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_EventGrandPrizeItem.WBP_EventGrandPrizeItem_C.OnGamepadConfirm
//		Flags  -> (BlueprintCallable, BlueprintEvent)
void UWBP_EventGrandPrizeItem_C::OnGamepadConfirm()
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(81642);

	UWBP_EventGrandPrizeItem_C_OnGamepadConfirm_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_EventGrandPrizeItem.WBP_EventGrandPrizeItem_C.ExecuteUbergraph_WBP_EventGrandPrizeItem
//		Flags  -> (Final, HasDefaults)
// Parameters:
//		int                                                EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWBP_EventGrandPrizeItem_C::ExecuteUbergraph_WBP_EventGrandPrizeItem(int EntryPoint)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(81641);

	UWBP_EventGrandPrizeItem_C_ExecuteUbergraph_WBP_EventGrandPrizeItem_Params params {};
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_EventGrandPrizeItem.WBP_EventGrandPrizeItem_C.OnBundleItemClicked__DelegateSignature
//		Flags  -> (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
//		class UWBP_EventGrandPrizeItem_C*                  Widget                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		class UPUMG_StoreItem*                             StoreItem                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWBP_EventGrandPrizeItem_C::OnBundleItemClicked__DelegateSignature(class UWBP_EventGrandPrizeItem_C* Widget, class UPUMG_StoreItem* StoreItem)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(81640);

	UWBP_EventGrandPrizeItem_C_OnBundleItemClicked__DelegateSignature_Params params {};
	params.Widget = Widget;
	params.StoreItem = StoreItem;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
