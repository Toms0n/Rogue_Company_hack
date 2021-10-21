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
//		Name   -> Function WBP_VerticalTabGroupEntry.WBP_VerticalTabGroupEntry_C.NavigateConfirm
//		Flags  -> (Event, Protected, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
//		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
bool UWBP_VerticalTabGroupEntry_C::NavigateConfirm()
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(60971);

	UWBP_VerticalTabGroupEntry_C_NavigateConfirm_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_VerticalTabGroupEntry.WBP_VerticalTabGroupEntry_C.ClearSelected
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
void UWBP_VerticalTabGroupEntry_C::ClearSelected()
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(60970);

	UWBP_VerticalTabGroupEntry_C_ClearSelected_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_VerticalTabGroupEntry.WBP_VerticalTabGroupEntry_C.SetViewState
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
//		TEnumAsByte<EVerticalTabState_EVerticalTabState>   TabState                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		bool                                               Force                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UWBP_VerticalTabGroupEntry_C::SetViewState(TEnumAsByte<EVerticalTabState_EVerticalTabState> TabState, bool Force)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(60969);

	UWBP_VerticalTabGroupEntry_C_SetViewState_Params params {};
	params.TabState = TabState;
	params.Force = Force;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_VerticalTabGroupEntry.WBP_VerticalTabGroupEntry_C.PreConstruct
//		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
//		bool                                               IsDesignTime                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UWBP_VerticalTabGroupEntry_C::PreConstruct(bool IsDesignTime)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(60968);

	UWBP_VerticalTabGroupEntry_C_PreConstruct_Params params {};
	params.IsDesignTime = IsDesignTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_VerticalTabGroupEntry.WBP_VerticalTabGroupEntry_C.Construct
//		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
void UWBP_VerticalTabGroupEntry_C::Construct()
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(60967);

	UWBP_VerticalTabGroupEntry_C_Construct_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_VerticalTabGroupEntry.WBP_VerticalTabGroupEntry_C.BndEvt__HitTarget_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature
//		Flags  -> (BlueprintEvent)
void UWBP_VerticalTabGroupEntry_C::BndEvt__HitTarget_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature()
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(60966);

	UWBP_VerticalTabGroupEntry_C_BndEvt__HitTarget_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_VerticalTabGroupEntry.WBP_VerticalTabGroupEntry_C.BndEvt__HitTarget_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature
//		Flags  -> (BlueprintEvent)
void UWBP_VerticalTabGroupEntry_C::BndEvt__HitTarget_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature()
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(60965);

	UWBP_VerticalTabGroupEntry_C_BndEvt__HitTarget_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_VerticalTabGroupEntry.WBP_VerticalTabGroupEntry_C.BndEvt__HitTarget_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature
//		Flags  -> (BlueprintEvent)
void UWBP_VerticalTabGroupEntry_C::BndEvt__HitTarget_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature()
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(60964);

	UWBP_VerticalTabGroupEntry_C_BndEvt__HitTarget_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_VerticalTabGroupEntry.WBP_VerticalTabGroupEntry_C.GamepadHover
//		Flags  -> (Event, Public, BlueprintEvent)
void UWBP_VerticalTabGroupEntry_C::GamepadHover()
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(60963);

	UWBP_VerticalTabGroupEntry_C_GamepadHover_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_VerticalTabGroupEntry.WBP_VerticalTabGroupEntry_C.GamepadUnhover
//		Flags  -> (Event, Public, BlueprintEvent)
void UWBP_VerticalTabGroupEntry_C::GamepadUnhover()
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(60962);

	UWBP_VerticalTabGroupEntry_C_GamepadUnhover_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_VerticalTabGroupEntry.WBP_VerticalTabGroupEntry_C.InitializeWidget
//		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
//		class APUMG_HUD*                                   HUD                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWBP_VerticalTabGroupEntry_C::InitializeWidget(class APUMG_HUD* HUD)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(60961);

	UWBP_VerticalTabGroupEntry_C_InitializeWidget_Params params {};
	params.HUD = HUD;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_VerticalTabGroupEntry.WBP_VerticalTabGroupEntry_C.Handle Input State Changed
//		Flags  -> (BlueprintCallable, BlueprintEvent)
// Parameters:
//		TEnumAsByte<PlatformGameFramework_EPGAME_INPUT_STATE> InputState                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWBP_VerticalTabGroupEntry_C::Handle_Input_State_Changed(TEnumAsByte<PlatformGameFramework_EPGAME_INPUT_STATE> InputState)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(60960);

	UWBP_VerticalTabGroupEntry_C_Handle_Input_State_Changed_Params params {};
	params.InputState = InputState;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_VerticalTabGroupEntry.WBP_VerticalTabGroupEntry_C.ExecuteUbergraph_WBP_VerticalTabGroupEntry
//		Flags  -> (Final, HasDefaults)
// Parameters:
//		int                                                EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWBP_VerticalTabGroupEntry_C::ExecuteUbergraph_WBP_VerticalTabGroupEntry(int EntryPoint)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(60959);

	UWBP_VerticalTabGroupEntry_C_ExecuteUbergraph_WBP_VerticalTabGroupEntry_Params params {};
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_VerticalTabGroupEntry.WBP_VerticalTabGroupEntry_C.OnTabGamepadSelected__DelegateSignature
//		Flags  -> (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
//		struct FName                                       ViewName                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWBP_VerticalTabGroupEntry_C::OnTabGamepadSelected__DelegateSignature(const struct FName& ViewName)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(60958);

	UWBP_VerticalTabGroupEntry_C_OnTabGamepadSelected__DelegateSignature_Params params {};
	params.ViewName = ViewName;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_VerticalTabGroupEntry.WBP_VerticalTabGroupEntry_C.OnTabSelected__DelegateSignature
//		Flags  -> (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
//		struct FName                                       ViewName                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWBP_VerticalTabGroupEntry_C::OnTabSelected__DelegateSignature(const struct FName& ViewName)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(60957);

	UWBP_VerticalTabGroupEntry_C_OnTabSelected__DelegateSignature_Params params {};
	params.ViewName = ViewName;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
