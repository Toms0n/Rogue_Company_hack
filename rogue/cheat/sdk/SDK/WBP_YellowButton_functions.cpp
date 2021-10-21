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
//		Name   -> Function WBP_YellowButton.WBP_YellowButton_C.GetGamepadPromptKey
//		Flags  -> (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
//		bool                                               HasValidKeyPrompt                                          (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
//		struct FKey                                        GamepadKey                                                 (Parm, OutParm, HasGetValueTypeHash)
void UWBP_YellowButton_C::GetGamepadPromptKey(bool* HasValidKeyPrompt, struct FKey* GamepadKey)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(69605);

	UWBP_YellowButton_C_GetGamepadPromptKey_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (HasValidKeyPrompt != nullptr)
		*HasValidKeyPrompt = params.HasValidKeyPrompt;
	if (GamepadKey != nullptr)
		*GamepadKey = params.GamepadKey;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_YellowButton.WBP_YellowButton_C.SetKeyPrompt
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
//		struct FKey                                        GamepadButton                                              (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
void UWBP_YellowButton_C::SetKeyPrompt(const struct FKey& GamepadButton)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(69604);

	UWBP_YellowButton_C_SetKeyPrompt_Params params {};
	params.GamepadButton = GamepadButton;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_YellowButton.WBP_YellowButton_C.SetDefaultDisplay
//		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
void UWBP_YellowButton_C::SetDefaultDisplay()
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(69603);

	UWBP_YellowButton_C_SetDefaultDisplay_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_YellowButton.WBP_YellowButton_C.SetButtonText
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
//		struct FText                                       ButtonText                                                 (BlueprintVisible, BlueprintReadOnly, Parm)
void UWBP_YellowButton_C::SetButtonText(const struct FText& ButtonText)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(69602);

	UWBP_YellowButton_C_SetButtonText_Params params {};
	params.ButtonText = ButtonText;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_YellowButton.WBP_YellowButton_C.NavigateConfirm
//		Flags  -> (Event, Protected, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
//		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
bool UWBP_YellowButton_C::NavigateConfirm()
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(69601);

	UWBP_YellowButton_C_NavigateConfirm_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_YellowButton.WBP_YellowButton_C.PreConstruct
//		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
//		bool                                               IsDesignTime                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UWBP_YellowButton_C::PreConstruct(bool IsDesignTime)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(69600);

	UWBP_YellowButton_C_PreConstruct_Params params {};
	params.IsDesignTime = IsDesignTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_YellowButton.WBP_YellowButton_C.Construct
//		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
void UWBP_YellowButton_C::Construct()
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(69599);

	UWBP_YellowButton_C_Construct_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_YellowButton.WBP_YellowButton_C.Tick
//		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
//		struct FGeometry                                   MyGeometry                                                 (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
//		float                                              InDeltaTime                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWBP_YellowButton_C::Tick(const struct FGeometry& MyGeometry, float InDeltaTime)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(69598);

	UWBP_YellowButton_C_Tick_Params params {};
	params.MyGeometry = MyGeometry;
	params.InDeltaTime = InDeltaTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_YellowButton.WBP_YellowButton_C.BndEvt__LoadoutButton_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
//		Flags  -> (BlueprintEvent)
void UWBP_YellowButton_C::BndEvt__LoadoutButton_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature()
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(69597);

	UWBP_YellowButton_C_BndEvt__LoadoutButton_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_YellowButton.WBP_YellowButton_C.BndEvt__LoadoutButton_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature
//		Flags  -> (BlueprintEvent)
void UWBP_YellowButton_C::BndEvt__LoadoutButton_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature()
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(69596);

	UWBP_YellowButton_C_BndEvt__LoadoutButton_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_YellowButton.WBP_YellowButton_C.BndEvt__LoadoutButton_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature
//		Flags  -> (BlueprintEvent)
void UWBP_YellowButton_C::BndEvt__LoadoutButton_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature()
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(69595);

	UWBP_YellowButton_C_BndEvt__LoadoutButton_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_YellowButton.WBP_YellowButton_C.GamepadHover
//		Flags  -> (Event, Public, BlueprintEvent)
void UWBP_YellowButton_C::GamepadHover()
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(69594);

	UWBP_YellowButton_C_GamepadHover_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_YellowButton.WBP_YellowButton_C.GamepadUnhover
//		Flags  -> (Event, Public, BlueprintEvent)
void UWBP_YellowButton_C::GamepadUnhover()
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(69593);

	UWBP_YellowButton_C_GamepadUnhover_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_YellowButton.WBP_YellowButton_C.GamepadConfirm
//		Flags  -> (BlueprintCallable, BlueprintEvent)
void UWBP_YellowButton_C::GamepadConfirm()
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(69592);

	UWBP_YellowButton_C_GamepadConfirm_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_YellowButton.WBP_YellowButton_C.Do Hover
//		Flags  -> (BlueprintCallable, BlueprintEvent)
void UWBP_YellowButton_C::Do_Hover()
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(69591);

	UWBP_YellowButton_C_Do_Hover_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_YellowButton.WBP_YellowButton_C.Do Unhover
//		Flags  -> (BlueprintCallable, BlueprintEvent)
void UWBP_YellowButton_C::Do_Unhover()
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(69590);

	UWBP_YellowButton_C_Do_Unhover_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_YellowButton.WBP_YellowButton_C.InitializeWidget
//		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
//		class APUMG_HUD*                                   HUD                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWBP_YellowButton_C::InitializeWidget(class APUMG_HUD* HUD)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(69589);

	UWBP_YellowButton_C_InitializeWidget_Params params {};
	params.HUD = HUD;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_YellowButton.WBP_YellowButton_C.HandleInputStateChanged
//		Flags  -> (BlueprintCallable, BlueprintEvent)
// Parameters:
//		TEnumAsByte<PlatformGameFramework_EPGAME_INPUT_STATE> InputState                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWBP_YellowButton_C::HandleInputStateChanged(TEnumAsByte<PlatformGameFramework_EPGAME_INPUT_STATE> InputState)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(69588);

	UWBP_YellowButton_C_HandleInputStateChanged_Params params {};
	params.InputState = InputState;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_YellowButton.WBP_YellowButton_C.OnInitialized
//		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
void UWBP_YellowButton_C::OnInitialized()
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(69587);

	UWBP_YellowButton_C_OnInitialized_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_YellowButton.WBP_YellowButton_C.ExecuteUbergraph_WBP_YellowButton
//		Flags  -> (Final, HasDefaults)
// Parameters:
//		int                                                EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWBP_YellowButton_C::ExecuteUbergraph_WBP_YellowButton(int EntryPoint)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(69586);

	UWBP_YellowButton_C_ExecuteUbergraph_WBP_YellowButton_Params params {};
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_YellowButton.WBP_YellowButton_C.OnUnhovered__DelegateSignature
//		Flags  -> (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
//		class UWidget*                                     Widget                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWBP_YellowButton_C::OnUnhovered__DelegateSignature(class UWidget* Widget)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(69585);

	UWBP_YellowButton_C_OnUnhovered__DelegateSignature_Params params {};
	params.Widget = Widget;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_YellowButton.WBP_YellowButton_C.OnHovered__DelegateSignature
//		Flags  -> (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
//		class UWidget*                                     Widget                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWBP_YellowButton_C::OnHovered__DelegateSignature(class UWidget* Widget)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(69584);

	UWBP_YellowButton_C_OnHovered__DelegateSignature_Params params {};
	params.Widget = Widget;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_YellowButton.WBP_YellowButton_C.OnClicked__DelegateSignature
//		Flags  -> (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
//		class UWidget*                                     Widget                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWBP_YellowButton_C::OnClicked__DelegateSignature(class UWidget* Widget)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(69583);

	UWBP_YellowButton_C_OnClicked__DelegateSignature_Params params {};
	params.Widget = Widget;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
