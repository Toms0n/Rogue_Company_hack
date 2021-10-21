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
//		Name   -> Function WBP_EventMissionItem.WBP_EventMissionItem_C.SetIsSelectedVisualState
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
//		bool                                               IsSelected                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UWBP_EventMissionItem_C::SetIsSelectedVisualState(bool IsSelected)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(216155);

	UWBP_EventMissionItem_C_SetIsSelectedVisualState_Params params {};
	params.IsSelected = IsSelected;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_EventMissionItem.WBP_EventMissionItem_C.Populate Slot
//		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
//		class UKSActivityInstance*                         ActivityInstance                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWBP_EventMissionItem_C::Populate_Slot(class UKSActivityInstance* ActivityInstance)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(216154);

	UWBP_EventMissionItem_C_Populate_Slot_Params params {};
	params.ActivityInstance = ActivityInstance;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_EventMissionItem.WBP_EventMissionItem_C.FormatMissionText
//		Flags  -> (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
//		struct FText                                       BaseText                                                   (BlueprintVisible, BlueprintReadOnly, Parm)
//		struct FText                                       FormattedText                                              (Parm, OutParm)
void UWBP_EventMissionItem_C::FormatMissionText(const struct FText& BaseText, struct FText* FormattedText)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(216153);

	UWBP_EventMissionItem_C_FormatMissionText_Params params {};
	params.BaseText = BaseText;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (FormattedText != nullptr)
		*FormattedText = params.FormattedText;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_EventMissionItem.WBP_EventMissionItem_C.SetVisualState
//		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
//		TEnumAsByte<EChallengeEntry_Card_State_EChallengeEntry_Card_State> CurrentState                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		bool                                               IsPremium                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
//		bool                                               IsActive                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UWBP_EventMissionItem_C::SetVisualState(TEnumAsByte<EChallengeEntry_Card_State_EChallengeEntry_Card_State> CurrentState, bool IsPremium, bool IsActive)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(216152);

	UWBP_EventMissionItem_C_SetVisualState_Params params {};
	params.CurrentState = CurrentState;
	params.IsPremium = IsPremium;
	params.IsActive = IsActive;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_EventMissionItem.WBP_EventMissionItem_C.PreConstruct
//		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
//		bool                                               IsDesignTime                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UWBP_EventMissionItem_C::PreConstruct(bool IsDesignTime)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(216151);

	UWBP_EventMissionItem_C_PreConstruct_Params params {};
	params.IsDesignTime = IsDesignTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_EventMissionItem.WBP_EventMissionItem_C.BndEvt__HitTarget_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature
//		Flags  -> (BlueprintEvent)
void UWBP_EventMissionItem_C::BndEvt__HitTarget_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature()
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(216150);

	UWBP_EventMissionItem_C_BndEvt__HitTarget_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_EventMissionItem.WBP_EventMissionItem_C.BndEvt__HitTarget_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature
//		Flags  -> (BlueprintEvent)
void UWBP_EventMissionItem_C::BndEvt__HitTarget_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature()
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(216149);

	UWBP_EventMissionItem_C_BndEvt__HitTarget_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_EventMissionItem.WBP_EventMissionItem_C.GamepadHover
//		Flags  -> (Event, Public, BlueprintEvent)
void UWBP_EventMissionItem_C::GamepadHover()
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(216148);

	UWBP_EventMissionItem_C_GamepadHover_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_EventMissionItem.WBP_EventMissionItem_C.GamepadUnhover
//		Flags  -> (Event, Public, BlueprintEvent)
void UWBP_EventMissionItem_C::GamepadUnhover()
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(216147);

	UWBP_EventMissionItem_C_GamepadUnhover_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_EventMissionItem.WBP_EventMissionItem_C.BndEvt__HitTarget_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
//		Flags  -> (BlueprintEvent)
void UWBP_EventMissionItem_C::BndEvt__HitTarget_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature()
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(216146);

	UWBP_EventMissionItem_C_BndEvt__HitTarget_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_EventMissionItem.WBP_EventMissionItem_C.ExecuteUbergraph_WBP_EventMissionItem
//		Flags  -> (Final, HasDefaults)
// Parameters:
//		int                                                EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWBP_EventMissionItem_C::ExecuteUbergraph_WBP_EventMissionItem(int EntryPoint)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(81637);

	UWBP_EventMissionItem_C_ExecuteUbergraph_WBP_EventMissionItem_Params params {};
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_EventMissionItem.WBP_EventMissionItem_C.OnButtonFocused__DelegateSignature
//		Flags  -> (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
//		class UKSActivityInstance*                         ActivityInstance                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		class UWBP_EventMissionItem_C*                     Widget                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWBP_EventMissionItem_C::OnButtonFocused__DelegateSignature(class UKSActivityInstance* ActivityInstance, class UWBP_EventMissionItem_C* Widget)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(81636);

	UWBP_EventMissionItem_C_OnButtonFocused__DelegateSignature_Params params {};
	params.ActivityInstance = ActivityInstance;
	params.Widget = Widget;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
