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
//		Name   -> Function WBP_StandardButtonLarge.WBP_StandardButtonLarge_C.SetDisabled
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
//		bool                                               Disabled                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UWBP_StandardButtonLarge_C::SetDisabled(bool Disabled)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(62962);

	UWBP_StandardButtonLarge_C_SetDisabled_Params params {};
	params.Disabled = Disabled;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_StandardButtonLarge.WBP_StandardButtonLarge_C.GetFontStyleNameByType
//		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
//		struct FName                                       FontName                                                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWBP_StandardButtonLarge_C::GetFontStyleNameByType(struct FName* FontName)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(62961);

	UWBP_StandardButtonLarge_C_GetFontStyleNameByType_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (FontName != nullptr)
		*FontName = params.FontName;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_StandardButtonLarge.WBP_StandardButtonLarge_C.SetHeight
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
//		float                                              InHeight                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWBP_StandardButtonLarge_C::SetHeight(float InHeight)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(62960);

	UWBP_StandardButtonLarge_C_SetHeight_Params params {};
	params.InHeight = InHeight;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_StandardButtonLarge.WBP_StandardButtonLarge_C.GetGamepadPromptKey
//		Flags  -> (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
//		bool                                               HasValidKeyPrompt                                          (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
//		struct FKey                                        GamepadKey                                                 (Parm, OutParm, HasGetValueTypeHash)
void UWBP_StandardButtonLarge_C::GetGamepadPromptKey(bool* HasValidKeyPrompt, struct FKey* GamepadKey)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(62959);

	UWBP_StandardButtonLarge_C_GetGamepadPromptKey_Params params {};

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
//		Name   -> Function WBP_StandardButtonLarge.WBP_StandardButtonLarge_C.Set Key Prompt
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
//		struct FKey                                        Prompt                                                     (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
void UWBP_StandardButtonLarge_C::Set_Key_Prompt(const struct FKey& Prompt)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(62958);

	UWBP_StandardButtonLarge_C_Set_Key_Prompt_Params params {};
	params.Prompt = Prompt;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_StandardButtonLarge.WBP_StandardButtonLarge_C.SetGamepadPromptForAction
//		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
//		struct FName                                       Action                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWBP_StandardButtonLarge_C::SetGamepadPromptForAction(const struct FName& Action)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(62957);

	UWBP_StandardButtonLarge_C_SetGamepadPromptForAction_Params params {};
	params.Action = Action;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_StandardButtonLarge.WBP_StandardButtonLarge_C.SetDefaultDisplay
//		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
void UWBP_StandardButtonLarge_C::SetDefaultDisplay()
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(62956);

	UWBP_StandardButtonLarge_C_SetDefaultDisplay_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_StandardButtonLarge.WBP_StandardButtonLarge_C.SetWidth
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
//		float                                              InWidth                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWBP_StandardButtonLarge_C::SetWidth(float InWidth)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(62955);

	UWBP_StandardButtonLarge_C_SetWidth_Params params {};
	params.InWidth = InWidth;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_StandardButtonLarge.WBP_StandardButtonLarge_C.SetButtonText
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
//		struct FText                                       ButtonText                                                 (BlueprintVisible, BlueprintReadOnly, Parm)
void UWBP_StandardButtonLarge_C::SetButtonText(const struct FText& ButtonText)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(62954);

	UWBP_StandardButtonLarge_C_SetButtonText_Params params {};
	params.ButtonText = ButtonText;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_StandardButtonLarge.WBP_StandardButtonLarge_C.NavigateConfirm
//		Flags  -> (Event, Protected, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
//		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
bool UWBP_StandardButtonLarge_C::NavigateConfirm()
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(62953);

	UWBP_StandardButtonLarge_C_NavigateConfirm_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_StandardButtonLarge.WBP_StandardButtonLarge_C.PreConstruct
//		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
//		bool                                               IsDesignTime                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UWBP_StandardButtonLarge_C::PreConstruct(bool IsDesignTime)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(62952);

	UWBP_StandardButtonLarge_C_PreConstruct_Params params {};
	params.IsDesignTime = IsDesignTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_StandardButtonLarge.WBP_StandardButtonLarge_C.Construct
//		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
void UWBP_StandardButtonLarge_C::Construct()
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(62951);

	UWBP_StandardButtonLarge_C_Construct_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_StandardButtonLarge.WBP_StandardButtonLarge_C.BndEvt__LoadoutButton_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
//		Flags  -> (BlueprintEvent)
void UWBP_StandardButtonLarge_C::BndEvt__LoadoutButton_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature()
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(62950);

	UWBP_StandardButtonLarge_C_BndEvt__LoadoutButton_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_StandardButtonLarge.WBP_StandardButtonLarge_C.BndEvt__LoadoutButton_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature
//		Flags  -> (BlueprintEvent)
void UWBP_StandardButtonLarge_C::BndEvt__LoadoutButton_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature()
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(62949);

	UWBP_StandardButtonLarge_C_BndEvt__LoadoutButton_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_StandardButtonLarge.WBP_StandardButtonLarge_C.BndEvt__LoadoutButton_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature
//		Flags  -> (BlueprintEvent)
void UWBP_StandardButtonLarge_C::BndEvt__LoadoutButton_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature()
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(62948);

	UWBP_StandardButtonLarge_C_BndEvt__LoadoutButton_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_StandardButtonLarge.WBP_StandardButtonLarge_C.GamepadHover
//		Flags  -> (Event, Public, BlueprintEvent)
void UWBP_StandardButtonLarge_C::GamepadHover()
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(62947);

	UWBP_StandardButtonLarge_C_GamepadHover_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_StandardButtonLarge.WBP_StandardButtonLarge_C.GamepadUnhover
//		Flags  -> (Event, Public, BlueprintEvent)
void UWBP_StandardButtonLarge_C::GamepadUnhover()
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(62946);

	UWBP_StandardButtonLarge_C_GamepadUnhover_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_StandardButtonLarge.WBP_StandardButtonLarge_C.GamepadConfirm
//		Flags  -> (BlueprintCallable, BlueprintEvent)
void UWBP_StandardButtonLarge_C::GamepadConfirm()
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(62945);

	UWBP_StandardButtonLarge_C_GamepadConfirm_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_StandardButtonLarge.WBP_StandardButtonLarge_C.Do Hover
//		Flags  -> (BlueprintCallable, BlueprintEvent)
void UWBP_StandardButtonLarge_C::Do_Hover()
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(62944);

	UWBP_StandardButtonLarge_C_Do_Hover_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_StandardButtonLarge.WBP_StandardButtonLarge_C.Do Unhover
//		Flags  -> (BlueprintCallable, BlueprintEvent)
void UWBP_StandardButtonLarge_C::Do_Unhover()
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(62943);

	UWBP_StandardButtonLarge_C_Do_Unhover_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_StandardButtonLarge.WBP_StandardButtonLarge_C.HandleInputStateChanged
//		Flags  -> (BlueprintCallable, BlueprintEvent)
// Parameters:
//		TEnumAsByte<PlatformGameFramework_EPGAME_INPUT_STATE> InputState                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWBP_StandardButtonLarge_C::HandleInputStateChanged(TEnumAsByte<PlatformGameFramework_EPGAME_INPUT_STATE> InputState)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(62942);

	UWBP_StandardButtonLarge_C_HandleInputStateChanged_Params params {};
	params.InputState = InputState;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_StandardButtonLarge.WBP_StandardButtonLarge_C.OnInitialized
//		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
void UWBP_StandardButtonLarge_C::OnInitialized()
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(62941);

	UWBP_StandardButtonLarge_C_OnInitialized_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_StandardButtonLarge.WBP_StandardButtonLarge_C.ExecuteUbergraph_WBP_StandardButtonLarge
//		Flags  -> (Final, HasDefaults)
// Parameters:
//		int                                                EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWBP_StandardButtonLarge_C::ExecuteUbergraph_WBP_StandardButtonLarge(int EntryPoint)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(62940);

	UWBP_StandardButtonLarge_C_ExecuteUbergraph_WBP_StandardButtonLarge_Params params {};
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_StandardButtonLarge.WBP_StandardButtonLarge_C.OnUnhovered__DelegateSignature
//		Flags  -> (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
//		class UWidget*                                     Widget                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWBP_StandardButtonLarge_C::OnUnhovered__DelegateSignature(class UWidget* Widget)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(62939);

	UWBP_StandardButtonLarge_C_OnUnhovered__DelegateSignature_Params params {};
	params.Widget = Widget;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_StandardButtonLarge.WBP_StandardButtonLarge_C.OnHovered__DelegateSignature
//		Flags  -> (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
//		class UWidget*                                     Widget                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWBP_StandardButtonLarge_C::OnHovered__DelegateSignature(class UWidget* Widget)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(62938);

	UWBP_StandardButtonLarge_C_OnHovered__DelegateSignature_Params params {};
	params.Widget = Widget;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_StandardButtonLarge.WBP_StandardButtonLarge_C.OnClicked__DelegateSignature
//		Flags  -> (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
//		class UWidget*                                     Widget                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWBP_StandardButtonLarge_C::OnClicked__DelegateSignature(class UWidget* Widget)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(62937);

	UWBP_StandardButtonLarge_C_OnClicked__DelegateSignature_Params params {};
	params.Widget = Widget;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
