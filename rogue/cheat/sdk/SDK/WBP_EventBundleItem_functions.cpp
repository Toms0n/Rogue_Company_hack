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
//		Name   -> Function WBP_EventBundleItem.WBP_EventBundleItem_C.GetStoreItem
//		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
//		class UPUMG_StoreItem*                             Return_Value                                               (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWBP_EventBundleItem_C::GetStoreItem(class UPUMG_StoreItem** Return_Value)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(81792);

	UWBP_EventBundleItem_C_GetStoreItem_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Return_Value != nullptr)
		*Return_Value = params.Return_Value;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_EventBundleItem.WBP_EventBundleItem_C.SetVisualDisplayState
//		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
//		bool                                               IsOwned                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UWBP_EventBundleItem_C::SetVisualDisplayState(bool IsOwned)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(81791);

	UWBP_EventBundleItem_C_SetVisualDisplayState_Params params {};
	params.IsOwned = IsOwned;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_EventBundleItem.WBP_EventBundleItem_C.NavigateConfirm
//		Flags  -> (Event, Protected, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
//		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
bool UWBP_EventBundleItem_C::NavigateConfirm()
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(81790);

	UWBP_EventBundleItem_C_NavigateConfirm_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_EventBundleItem.WBP_EventBundleItem_C.UpdateUnlockButtonDisplay
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
//		bool                                               ShouldTryDisplay                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UWBP_EventBundleItem_C::UpdateUnlockButtonDisplay(bool ShouldTryDisplay)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(81789);

	UWBP_EventBundleItem_C_UpdateUnlockButtonDisplay_Params params {};
	params.ShouldTryDisplay = ShouldTryDisplay;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_EventBundleItem.WBP_EventBundleItem_C.PopulateSlot
//		Flags  -> (BlueprintCallable, BlueprintEvent)
// Parameters:
//		class UPUMG_StoreItem*                             StoreItem                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWBP_EventBundleItem_C::PopulateSlot(class UPUMG_StoreItem* StoreItem)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(81788);

	UWBP_EventBundleItem_C_PopulateSlot_Params params {};
	params.StoreItem = StoreItem;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_EventBundleItem.WBP_EventBundleItem_C.BndEvt__HitTarget_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
//		Flags  -> (BlueprintEvent)
void UWBP_EventBundleItem_C::BndEvt__HitTarget_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature()
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(81787);

	UWBP_EventBundleItem_C_BndEvt__HitTarget_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_EventBundleItem.WBP_EventBundleItem_C.BndEvt__HitTarget_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature
//		Flags  -> (BlueprintEvent)
void UWBP_EventBundleItem_C::BndEvt__HitTarget_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature()
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(81786);

	UWBP_EventBundleItem_C_BndEvt__HitTarget_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_EventBundleItem.WBP_EventBundleItem_C.BndEvt__HitTarget_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature
//		Flags  -> (BlueprintEvent)
void UWBP_EventBundleItem_C::BndEvt__HitTarget_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature()
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(81785);

	UWBP_EventBundleItem_C_BndEvt__HitTarget_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_EventBundleItem.WBP_EventBundleItem_C.BndEvt__HitTarget_K2Node_ComponentBoundEvent_3_OnButtonReleasedEvent__DelegateSignature
//		Flags  -> (BlueprintEvent)
void UWBP_EventBundleItem_C::BndEvt__HitTarget_K2Node_ComponentBoundEvent_3_OnButtonReleasedEvent__DelegateSignature()
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(81784);

	UWBP_EventBundleItem_C_BndEvt__HitTarget_K2Node_ComponentBoundEvent_3_OnButtonReleasedEvent__DelegateSignature_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_EventBundleItem.WBP_EventBundleItem_C.BndEvt__Button_BuyBundle_K2Node_ComponentBoundEvent_4_OnClicked__DelegateSignature
//		Flags  -> (BlueprintEvent)
// Parameters:
//		class UWidget*                                     Widget                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWBP_EventBundleItem_C::BndEvt__Button_BuyBundle_K2Node_ComponentBoundEvent_4_OnClicked__DelegateSignature(class UWidget* Widget)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(81783);

	UWBP_EventBundleItem_C_BndEvt__Button_BuyBundle_K2Node_ComponentBoundEvent_4_OnClicked__DelegateSignature_Params params {};
	params.Widget = Widget;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_EventBundleItem.WBP_EventBundleItem_C.GamepadHover
//		Flags  -> (Event, Public, BlueprintEvent)
void UWBP_EventBundleItem_C::GamepadHover()
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(81782);

	UWBP_EventBundleItem_C_GamepadHover_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_EventBundleItem.WBP_EventBundleItem_C.GamepadUnhover
//		Flags  -> (Event, Public, BlueprintEvent)
void UWBP_EventBundleItem_C::GamepadUnhover()
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(81781);

	UWBP_EventBundleItem_C_GamepadUnhover_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_EventBundleItem.WBP_EventBundleItem_C.OnGamepadConfirm
//		Flags  -> (BlueprintCallable, BlueprintEvent)
void UWBP_EventBundleItem_C::OnGamepadConfirm()
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(81780);

	UWBP_EventBundleItem_C_OnGamepadConfirm_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_EventBundleItem.WBP_EventBundleItem_C.InitializeWidget
//		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
//		class APUMG_HUD*                                   HUD                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWBP_EventBundleItem_C::InitializeWidget(class APUMG_HUD* HUD)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(81779);

	UWBP_EventBundleItem_C_InitializeWidget_Params params {};
	params.HUD = HUD;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_EventBundleItem.WBP_EventBundleItem_C.ExecuteUbergraph_WBP_EventBundleItem
//		Flags  -> (Final, HasDefaults)
// Parameters:
//		int                                                EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWBP_EventBundleItem_C::ExecuteUbergraph_WBP_EventBundleItem(int EntryPoint)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(81778);

	UWBP_EventBundleItem_C_ExecuteUbergraph_WBP_EventBundleItem_Params params {};
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_EventBundleItem.WBP_EventBundleItem_C.OnUnlockButtonClicked__DelegateSignature
//		Flags  -> (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
//		class UWBP_EventBundleItem_C*                      Widget                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWBP_EventBundleItem_C::OnUnlockButtonClicked__DelegateSignature(class UWBP_EventBundleItem_C* Widget)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(81777);

	UWBP_EventBundleItem_C_OnUnlockButtonClicked__DelegateSignature_Params params {};
	params.Widget = Widget;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_EventBundleItem.WBP_EventBundleItem_C.OnBundleItemClicked__DelegateSignature
//		Flags  -> (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
//		class UWBP_EventBundleItem_C*                      Widget                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWBP_EventBundleItem_C::OnBundleItemClicked__DelegateSignature(class UWBP_EventBundleItem_C* Widget)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(81776);

	UWBP_EventBundleItem_C_OnBundleItemClicked__DelegateSignature_Params params {};
	params.Widget = Widget;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
