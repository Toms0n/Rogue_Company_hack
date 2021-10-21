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
//		Name   -> Function WBP_StoreSectionTab.WBP_StoreSectionTab_C.ShowCTA
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
//		bool                                               ShowCTA                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UWBP_StoreSectionTab_C::ShowCTA(bool ShowCTA)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(79669);

	UWBP_StoreSectionTab_C_ShowCTA_Params params {};
	params.ShowCTA = ShowCTA;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_StoreSectionTab.WBP_StoreSectionTab_C.SetPromptButton
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
//		struct FKey                                        PromptKey                                                  (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
void UWBP_StoreSectionTab_C::SetPromptButton(const struct FKey& PromptKey)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(79668);

	UWBP_StoreSectionTab_C_SetPromptButton_Params params {};
	params.PromptKey = PromptKey;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_StoreSectionTab.WBP_StoreSectionTab_C.OnInputStateChanged
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
//		TEnumAsByte<PlatformGameFramework_EPGAME_INPUT_STATE> InputState                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWBP_StoreSectionTab_C::OnInputStateChanged(TEnumAsByte<PlatformGameFramework_EPGAME_INPUT_STATE> InputState)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(79667);

	UWBP_StoreSectionTab_C_OnInputStateChanged_Params params {};
	params.InputState = InputState;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_StoreSectionTab.WBP_StoreSectionTab_C.NavigateConfirm
//		Flags  -> (Event, Protected, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
//		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
bool UWBP_StoreSectionTab_C::NavigateConfirm()
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(79666);

	UWBP_StoreSectionTab_C_NavigateConfirm_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_StoreSectionTab.WBP_StoreSectionTab_C.Construct
//		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
void UWBP_StoreSectionTab_C::Construct()
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(79665);

	UWBP_StoreSectionTab_C_Construct_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_StoreSectionTab.WBP_StoreSectionTab_C.BndEvt__TabButton_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
//		Flags  -> (BlueprintEvent)
void UWBP_StoreSectionTab_C::BndEvt__TabButton_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature()
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(79664);

	UWBP_StoreSectionTab_C_BndEvt__TabButton_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_StoreSectionTab.WBP_StoreSectionTab_C.GamepadConfirm
//		Flags  -> (BlueprintCallable, BlueprintEvent)
void UWBP_StoreSectionTab_C::GamepadConfirm()
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(79663);

	UWBP_StoreSectionTab_C_GamepadConfirm_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_StoreSectionTab.WBP_StoreSectionTab_C.BndEvt__TabButton_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature
//		Flags  -> (BlueprintEvent)
void UWBP_StoreSectionTab_C::BndEvt__TabButton_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature()
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(79662);

	UWBP_StoreSectionTab_C_BndEvt__TabButton_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_StoreSectionTab.WBP_StoreSectionTab_C.BndEvt__TabButton_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature
//		Flags  -> (BlueprintEvent)
void UWBP_StoreSectionTab_C::BndEvt__TabButton_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature()
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(79661);

	UWBP_StoreSectionTab_C_BndEvt__TabButton_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_StoreSectionTab.WBP_StoreSectionTab_C.SetActive
//		Flags  -> (BlueprintCallable, BlueprintEvent)
void UWBP_StoreSectionTab_C::SetActive()
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(79660);

	UWBP_StoreSectionTab_C_SetActive_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_StoreSectionTab.WBP_StoreSectionTab_C.SetInactive
//		Flags  -> (BlueprintCallable, BlueprintEvent)
void UWBP_StoreSectionTab_C::SetInactive()
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(79659);

	UWBP_StoreSectionTab_C_SetInactive_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_StoreSectionTab.WBP_StoreSectionTab_C.PreConstruct
//		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
//		bool                                               IsDesignTime                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UWBP_StoreSectionTab_C::PreConstruct(bool IsDesignTime)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(79658);

	UWBP_StoreSectionTab_C_PreConstruct_Params params {};
	params.IsDesignTime = IsDesignTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_StoreSectionTab.WBP_StoreSectionTab_C.InitializeWidget
//		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
//		class APUMG_HUD*                                   HUD                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWBP_StoreSectionTab_C::InitializeWidget(class APUMG_HUD* HUD)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(79657);

	UWBP_StoreSectionTab_C_InitializeWidget_Params params {};
	params.HUD = HUD;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_StoreSectionTab.WBP_StoreSectionTab_C.ExecuteUbergraph_WBP_StoreSectionTab
//		Flags  -> (Final, HasDefaults)
// Parameters:
//		int                                                EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWBP_StoreSectionTab_C::ExecuteUbergraph_WBP_StoreSectionTab(int EntryPoint)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(79656);

	UWBP_StoreSectionTab_C_ExecuteUbergraph_WBP_StoreSectionTab_Params params {};
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_StoreSectionTab.WBP_StoreSectionTab_C.OnUnhovered__DelegateSignature
//		Flags  -> (Public, Delegate, BlueprintCallable, BlueprintEvent)
void UWBP_StoreSectionTab_C::OnUnhovered__DelegateSignature()
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(79655);

	UWBP_StoreSectionTab_C_OnUnhovered__DelegateSignature_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_StoreSectionTab.WBP_StoreSectionTab_C.OnHovered__DelegateSignature
//		Flags  -> (Public, Delegate, BlueprintCallable, BlueprintEvent)
void UWBP_StoreSectionTab_C::OnHovered__DelegateSignature()
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(79654);

	UWBP_StoreSectionTab_C_OnHovered__DelegateSignature_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_StoreSectionTab.WBP_StoreSectionTab_C.OnClicked__DelegateSignature
//		Flags  -> (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
//		int                                                Index                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWBP_StoreSectionTab_C::OnClicked__DelegateSignature(int Index)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(79653);

	UWBP_StoreSectionTab_C_OnClicked__DelegateSignature_Params params {};
	params.Index = Index;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
