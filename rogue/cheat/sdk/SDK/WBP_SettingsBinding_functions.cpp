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
//		Name   -> Function WBP_SettingsBinding.WBP_SettingsBinding_C.Set Desired Gamepad Combo
//		Flags  -> (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
//		struct FKey                                        Gamepad_Key                                                (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
//		struct FKey                                        Combo_Key                                                  (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
//		bool                                               Dirtied                                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UWBP_SettingsBinding_C::Set_Desired_Gamepad_Combo(const struct FKey& Gamepad_Key, const struct FKey& Combo_Key, bool* Dirtied)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(44242);

	UWBP_SettingsBinding_C_Set_Desired_Gamepad_Combo_Params params {};
	params.Gamepad_Key = Gamepad_Key;
	params.Combo_Key = Combo_Key;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Dirtied != nullptr)
		*Dirtied = params.Dirtied;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_SettingsBinding.WBP_SettingsBinding_C.Get Dirty Combo Key
//		Flags  -> (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
//		struct FKey                                        Key                                                        (Parm, OutParm, HasGetValueTypeHash)
//		Killstreak_EKSInputActionType                      Type                                                       (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWBP_SettingsBinding_C::Get_Dirty_Combo_Key(struct FKey* Key, Killstreak_EKSInputActionType* Type)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(44241);

	UWBP_SettingsBinding_C_Get_Dirty_Combo_Key_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Key != nullptr)
		*Key = params.Key;
	if (Type != nullptr)
		*Type = params.Type;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_SettingsBinding.WBP_SettingsBinding_C.OnInputStateChanged
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
//		TEnumAsByte<PlatformGameFramework_EPGAME_INPUT_STATE> Input_State                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWBP_SettingsBinding_C::OnInputStateChanged(TEnumAsByte<PlatformGameFramework_EPGAME_INPUT_STATE> Input_State)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(44240);

	UWBP_SettingsBinding_C_OnInputStateChanged_Params params {};
	params.Input_State = Input_State;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_SettingsBinding.WBP_SettingsBinding_C.CanGamepadNavigate
//		Flags  -> (Event, Protected, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
//		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
bool UWBP_SettingsBinding_C::CanGamepadNavigate()
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(44239);

	UWBP_SettingsBinding_C_CanGamepadNavigate_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_SettingsBinding.WBP_SettingsBinding_C.DisableUnbindableKeybinds
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
//		class UKSSettingsInfo_Binding*                     Binding_Settings_Info                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWBP_SettingsBinding_C::DisableUnbindableKeybinds(class UKSSettingsInfo_Binding* Binding_Settings_Info)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(44238);

	UWBP_SettingsBinding_C_DisableUnbindableKeybinds_Params params {};
	params.Binding_Settings_Info = Binding_Settings_Info;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_SettingsBinding.WBP_SettingsBinding_C.NavigateBack
//		Flags  -> (Event, Protected, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
//		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
bool UWBP_SettingsBinding_C::NavigateBack()
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(44237);

	UWBP_SettingsBinding_C_NavigateBack_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_SettingsBinding.WBP_SettingsBinding_C.Set Desired Gamepad Key
//		Flags  -> (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
//		struct FKey                                        Key                                                        (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
//		bool                                               Dirtied                                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UWBP_SettingsBinding_C::Set_Desired_Gamepad_Key(const struct FKey& Key, bool* Dirtied)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(44236);

	UWBP_SettingsBinding_C_Set_Desired_Gamepad_Key_Params params {};
	params.Key = Key;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Dirtied != nullptr)
		*Dirtied = params.Dirtied;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_SettingsBinding.WBP_SettingsBinding_C.Set Desired Secondary Key
//		Flags  -> (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
//		struct FKey                                        Key                                                        (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
//		bool                                               Dirtied                                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UWBP_SettingsBinding_C::Set_Desired_Secondary_Key(const struct FKey& Key, bool* Dirtied)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(44235);

	UWBP_SettingsBinding_C_Set_Desired_Secondary_Key_Params params {};
	params.Key = Key;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Dirtied != nullptr)
		*Dirtied = params.Dirtied;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_SettingsBinding.WBP_SettingsBinding_C.Set Desired Primary Key
//		Flags  -> (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
//		struct FKey                                        Key                                                        (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
//		bool                                               Dirtied                                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UWBP_SettingsBinding_C::Set_Desired_Primary_Key(const struct FKey& Key, bool* Dirtied)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(44234);

	UWBP_SettingsBinding_C_Set_Desired_Primary_Key_Params params {};
	params.Key = Key;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Dirtied != nullptr)
		*Dirtied = params.Dirtied;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_SettingsBinding.WBP_SettingsBinding_C.Get Dirty Gamepad Key
//		Flags  -> (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
//		struct FKey                                        Key                                                        (Parm, OutParm, HasGetValueTypeHash)
//		Killstreak_EKSInputActionType                      Type                                                       (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWBP_SettingsBinding_C::Get_Dirty_Gamepad_Key(struct FKey* Key, Killstreak_EKSInputActionType* Type)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(44233);

	UWBP_SettingsBinding_C_Get_Dirty_Gamepad_Key_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Key != nullptr)
		*Key = params.Key;
	if (Type != nullptr)
		*Type = params.Type;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_SettingsBinding.WBP_SettingsBinding_C.Get Dirty Secondary Key
//		Flags  -> (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
//		struct FKey                                        Key                                                        (Parm, OutParm, HasGetValueTypeHash)
//		Killstreak_EKSInputActionType                      Type                                                       (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWBP_SettingsBinding_C::Get_Dirty_Secondary_Key(struct FKey* Key, Killstreak_EKSInputActionType* Type)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(44232);

	UWBP_SettingsBinding_C_Get_Dirty_Secondary_Key_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Key != nullptr)
		*Key = params.Key;
	if (Type != nullptr)
		*Type = params.Type;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_SettingsBinding.WBP_SettingsBinding_C.Get Dirty Primary Key
//		Flags  -> (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
//		struct FKey                                        Key                                                        (Parm, OutParm, HasGetValueTypeHash)
//		Killstreak_EKSInputActionType                      Type                                                       (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWBP_SettingsBinding_C::Get_Dirty_Primary_Key(struct FKey* Key, Killstreak_EKSInputActionType* Type)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(44231);

	UWBP_SettingsBinding_C_Get_Dirty_Primary_Key_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Key != nullptr)
		*Key = params.Key;
	if (Type != nullptr)
		*Type = params.Type;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_SettingsBinding.WBP_SettingsBinding_C.SetKeysForBindingDisplays
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
void UWBP_SettingsBinding_C::SetKeysForBindingDisplays()
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(44230);

	UWBP_SettingsBinding_C_SetKeysForBindingDisplays_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_SettingsBinding.WBP_SettingsBinding_C.SetKeyForGamepadBindingDisplay
//		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
void UWBP_SettingsBinding_C::SetKeyForGamepadBindingDisplay()
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(44229);

	UWBP_SettingsBinding_C_SetKeyForGamepadBindingDisplay_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_SettingsBinding.WBP_SettingsBinding_C.SetKeyForSecondaryBindingDisplay
//		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
void UWBP_SettingsBinding_C::SetKeyForSecondaryBindingDisplay()
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(44228);

	UWBP_SettingsBinding_C_SetKeyForSecondaryBindingDisplay_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_SettingsBinding.WBP_SettingsBinding_C.SetKeyForPrimaryBindingDisplay
//		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
void UWBP_SettingsBinding_C::SetKeyForPrimaryBindingDisplay()
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(44227);

	UWBP_SettingsBinding_C_SetKeyForPrimaryBindingDisplay_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_SettingsBinding.WBP_SettingsBinding_C.OnWidgetSettingsInfoSet
//		Flags  -> (Event, Protected, BlueprintEvent)
void UWBP_SettingsBinding_C::OnWidgetSettingsInfoSet()
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(44226);

	UWBP_SettingsBinding_C_OnWidgetSettingsInfoSet_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_SettingsBinding.WBP_SettingsBinding_C.GamepadHover
//		Flags  -> (Event, Public, BlueprintEvent)
void UWBP_SettingsBinding_C::GamepadHover()
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(44225);

	UWBP_SettingsBinding_C_GamepadHover_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_SettingsBinding.WBP_SettingsBinding_C.GamepadUnhover
//		Flags  -> (Event, Public, BlueprintEvent)
void UWBP_SettingsBinding_C::GamepadUnhover()
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(44224);

	UWBP_SettingsBinding_C_GamepadUnhover_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_SettingsBinding.WBP_SettingsBinding_C.InitializeWidgetNavigation
//		Flags  -> (Event, Public, BlueprintEvent)
void UWBP_SettingsBinding_C::InitializeWidgetNavigation()
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(44223);

	UWBP_SettingsBinding_C_InitializeWidgetNavigation_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_SettingsBinding.WBP_SettingsBinding_C.BndEvt__WBP_InputKeySelector_K2Node_ComponentBoundEvent_6_OnKeySelected__DelegateSignature
//		Flags  -> (BlueprintEvent)
// Parameters:
//		struct FInputChord                                 Selected_Key                                               (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
void UWBP_SettingsBinding_C::BndEvt__WBP_InputKeySelector_K2Node_ComponentBoundEvent_6_OnKeySelected__DelegateSignature(const struct FInputChord& Selected_Key)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(44222);

	UWBP_SettingsBinding_C_BndEvt__WBP_InputKeySelector_K2Node_ComponentBoundEvent_6_OnKeySelected__DelegateSignature_Params params {};
	params.Selected_Key = Selected_Key;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_SettingsBinding.WBP_SettingsBinding_C.BndEvt__WBP_InputKeySelector_K2Node_ComponentBoundEvent_7_OnIsSelectingKeyChanged__DelegateSignature
//		Flags  -> (BlueprintEvent)
void UWBP_SettingsBinding_C::BndEvt__WBP_InputKeySelector_K2Node_ComponentBoundEvent_7_OnIsSelectingKeyChanged__DelegateSignature()
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(44221);

	UWBP_SettingsBinding_C_BndEvt__WBP_InputKeySelector_K2Node_ComponentBoundEvent_7_OnIsSelectingKeyChanged__DelegateSignature_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_SettingsBinding.WBP_SettingsBinding_C.BndEvt__WBP_InputKeySelector_Secondary_K2Node_ComponentBoundEvent_8_OnKeySelected__DelegateSignature
//		Flags  -> (BlueprintEvent)
// Parameters:
//		struct FInputChord                                 Selected_Key                                               (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
void UWBP_SettingsBinding_C::BndEvt__WBP_InputKeySelector_Secondary_K2Node_ComponentBoundEvent_8_OnKeySelected__DelegateSignature(const struct FInputChord& Selected_Key)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(44220);

	UWBP_SettingsBinding_C_BndEvt__WBP_InputKeySelector_Secondary_K2Node_ComponentBoundEvent_8_OnKeySelected__DelegateSignature_Params params {};
	params.Selected_Key = Selected_Key;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_SettingsBinding.WBP_SettingsBinding_C.BndEvt__WBP_InputKeySelector_Secondary_K2Node_ComponentBoundEvent_9_OnIsSelectingKeyChanged__DelegateSignature
//		Flags  -> (BlueprintEvent)
void UWBP_SettingsBinding_C::BndEvt__WBP_InputKeySelector_Secondary_K2Node_ComponentBoundEvent_9_OnIsSelectingKeyChanged__DelegateSignature()
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(44219);

	UWBP_SettingsBinding_C_BndEvt__WBP_InputKeySelector_Secondary_K2Node_ComponentBoundEvent_9_OnIsSelectingKeyChanged__DelegateSignature_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_SettingsBinding.WBP_SettingsBinding_C.BndEvt__WBP_InputKeySelector_Gamepad_K2Node_ComponentBoundEvent_10_OnKeySelected__DelegateSignature
//		Flags  -> (BlueprintEvent)
// Parameters:
//		struct FInputChord                                 Selected_Key                                               (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
void UWBP_SettingsBinding_C::BndEvt__WBP_InputKeySelector_Gamepad_K2Node_ComponentBoundEvent_10_OnKeySelected__DelegateSignature(const struct FInputChord& Selected_Key)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(44218);

	UWBP_SettingsBinding_C_BndEvt__WBP_InputKeySelector_Gamepad_K2Node_ComponentBoundEvent_10_OnKeySelected__DelegateSignature_Params params {};
	params.Selected_Key = Selected_Key;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_SettingsBinding.WBP_SettingsBinding_C.BndEvt__WBP_InputKeySelector_Gamepad_K2Node_ComponentBoundEvent_11_OnIsSelectingKeyChanged__DelegateSignature
//		Flags  -> (BlueprintEvent)
void UWBP_SettingsBinding_C::BndEvt__WBP_InputKeySelector_Gamepad_K2Node_ComponentBoundEvent_11_OnIsSelectingKeyChanged__DelegateSignature()
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(44217);

	UWBP_SettingsBinding_C_BndEvt__WBP_InputKeySelector_Gamepad_K2Node_ComponentBoundEvent_11_OnIsSelectingKeyChanged__DelegateSignature_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_SettingsBinding.WBP_SettingsBinding_C.FocusGroupNavigateDownFailure
//		Flags  -> (Event, Public, BlueprintEvent)
// Parameters:
//		int                                                FocusGroup                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWBP_SettingsBinding_C::FocusGroupNavigateDownFailure(int FocusGroup)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(44216);

	UWBP_SettingsBinding_C_FocusGroupNavigateDownFailure_Params params {};
	params.FocusGroup = FocusGroup;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_SettingsBinding.WBP_SettingsBinding_C.FocusGroupNavigateUpFailure
//		Flags  -> (Event, Public, BlueprintEvent)
// Parameters:
//		int                                                FocusGroup                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWBP_SettingsBinding_C::FocusGroupNavigateUpFailure(int FocusGroup)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(44215);

	UWBP_SettingsBinding_C_FocusGroupNavigateUpFailure_Params params {};
	params.FocusGroup = FocusGroup;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_SettingsBinding.WBP_SettingsBinding_C.InitializeWidget
//		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
//		class APUMG_HUD*                                   HUD                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWBP_SettingsBinding_C::InitializeWidget(class APUMG_HUD* HUD)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(44214);

	UWBP_SettingsBinding_C_InitializeWidget_Params params {};
	params.HUD = HUD;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_SettingsBinding.WBP_SettingsBinding_C.StopCapturingCombo
//		Flags  -> (BlueprintCallable, BlueprintEvent)
void UWBP_SettingsBinding_C::StopCapturingCombo()
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(44213);

	UWBP_SettingsBinding_C_StopCapturingCombo_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_SettingsBinding.WBP_SettingsBinding_C.StartCapturingCombo
//		Flags  -> (BlueprintCallable, BlueprintEvent)
void UWBP_SettingsBinding_C::StartCapturingCombo()
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(44212);

	UWBP_SettingsBinding_C_StartCapturingCombo_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_SettingsBinding.WBP_SettingsBinding_C.Combo Succeed
//		Flags  -> (BlueprintCallable, BlueprintEvent)
// Parameters:
//		struct FInputChord                                 Combo_Key                                                  (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
void UWBP_SettingsBinding_C::Combo_Succeed(const struct FInputChord& Combo_Key)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(44211);

	UWBP_SettingsBinding_C_Combo_Succeed_Params params {};
	params.Combo_Key = Combo_Key;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_SettingsBinding.WBP_SettingsBinding_C.Combo Failed
//		Flags  -> (BlueprintCallable, BlueprintEvent)
void UWBP_SettingsBinding_C::Combo_Failed()
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(44210);

	UWBP_SettingsBinding_C_Combo_Failed_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_SettingsBinding.WBP_SettingsBinding_C.OnInputAttached
//		Flags  -> (Event, Public, BlueprintEvent)
// Parameters:
//		bool                                               bGamepadAttached                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
//		bool                                               bMouseAttached                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UWBP_SettingsBinding_C::OnInputAttached(bool bGamepadAttached, bool bMouseAttached)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(44209);

	UWBP_SettingsBinding_C_OnInputAttached_Params params {};
	params.bGamepadAttached = bGamepadAttached;
	params.bMouseAttached = bMouseAttached;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_SettingsBinding.WBP_SettingsBinding_C.OnSettingsInfoValueChanged
//		Flags  -> (Event, Protected, BlueprintCallable, BlueprintEvent)
// Parameters:
//		bool                                               bChangedExternally                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UWBP_SettingsBinding_C::OnSettingsInfoValueChanged(bool bChangedExternally)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(44208);

	UWBP_SettingsBinding_C_OnSettingsInfoValueChanged_Params params {};
	params.bChangedExternally = bChangedExternally;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_SettingsBinding.WBP_SettingsBinding_C.BndEvt__WBP_SettingsBinding_Clear_K2Node_ComponentBoundEvent_0_On Cleared__DelegateSignature
//		Flags  -> (BlueprintEvent)
void UWBP_SettingsBinding_C::BndEvt__WBP_SettingsBinding_Clear_K2Node_ComponentBoundEvent_0_On_Cleared__DelegateSignature()
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(44207);

	UWBP_SettingsBinding_C_BndEvt__WBP_SettingsBinding_Clear_K2Node_ComponentBoundEvent_0_On_Cleared__DelegateSignature_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_SettingsBinding.WBP_SettingsBinding_C.BndEvt__WBP_SettingsBinding_Clear_GP_K2Node_ComponentBoundEvent_1_On Cleared__DelegateSignature
//		Flags  -> (BlueprintEvent)
void UWBP_SettingsBinding_C::BndEvt__WBP_SettingsBinding_Clear_GP_K2Node_ComponentBoundEvent_1_On_Cleared__DelegateSignature()
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(44206);

	UWBP_SettingsBinding_C_BndEvt__WBP_SettingsBinding_Clear_GP_K2Node_ComponentBoundEvent_1_On_Cleared__DelegateSignature_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_SettingsBinding.WBP_SettingsBinding_C.ExecuteUbergraph_WBP_SettingsBinding
//		Flags  -> (Final, HasDefaults)
// Parameters:
//		int                                                EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWBP_SettingsBinding_C::ExecuteUbergraph_WBP_SettingsBinding(int EntryPoint)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(44205);

	UWBP_SettingsBinding_C_ExecuteUbergraph_WBP_SettingsBinding_Params params {};
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
