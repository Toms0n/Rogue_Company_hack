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
//		Name   -> Function WBP_InputCallout.WBP_InputCallout_C.PropogateDefaultSettings
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
void UWBP_InputCallout_C::PropogateDefaultSettings()
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(43927);

	UWBP_InputCallout_C_PropogateDefaultSettings_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_InputCallout.WBP_InputCallout_C.GetActionKeys
//		Flags  -> (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
//		class UKSSettingsDataFactory*                      KSSettingsDataFactory                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		struct FName                                       Name                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		TEnumAsByte<PlatformGameFramework_EPGAME_INPUT_STATE> InputType                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		struct FKey                                        PrimaryButton                                              (Parm, OutParm, HasGetValueTypeHash)
//		struct FKey                                        SecondaryButton                                            (Parm, OutParm, HasGetValueTypeHash)
void UWBP_InputCallout_C::GetActionKeys(class UKSSettingsDataFactory* KSSettingsDataFactory, const struct FName& Name, TEnumAsByte<PlatformGameFramework_EPGAME_INPUT_STATE> InputType, struct FKey* PrimaryButton, struct FKey* SecondaryButton)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(43926);

	UWBP_InputCallout_C_GetActionKeys_Params params {};
	params.KSSettingsDataFactory = KSSettingsDataFactory;
	params.Name = Name;
	params.InputType = InputType;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (PrimaryButton != nullptr)
		*PrimaryButton = params.PrimaryButton;
	if (SecondaryButton != nullptr)
		*SecondaryButton = params.SecondaryButton;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_InputCallout.WBP_InputCallout_C.UpdateComboIndicator
//		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
void UWBP_InputCallout_C::UpdateComboIndicator()
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(43925);

	UWBP_InputCallout_C_UpdateComboIndicator_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_InputCallout.WBP_InputCallout_C.IsValidActionNameForCurrentInput
//		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
//		struct FName                                       Name                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		bool                                               Valid                                                      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UWBP_InputCallout_C::IsValidActionNameForCurrentInput(const struct FName& Name, bool* Valid)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(43924);

	UWBP_InputCallout_C_IsValidActionNameForCurrentInput_Params params {};
	params.Name = Name;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Valid != nullptr)
		*Valid = params.Valid;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_InputCallout.WBP_InputCallout_C.ResetHoldProgress
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
void UWBP_InputCallout_C::ResetHoldProgress()
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(43923);

	UWBP_InputCallout_C_ResetHoldProgress_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_InputCallout.WBP_InputCallout_C.SetHoldProgress
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
//		float                                              HoldProgress                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWBP_InputCallout_C::SetHoldProgress(float HoldProgress)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(43922);

	UWBP_InputCallout_C_SetHoldProgress_Params params {};
	params.HoldProgress = HoldProgress;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_InputCallout.WBP_InputCallout_C.SetSecondaryKey
//		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
//		struct FKey                                        Button                                                     (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
void UWBP_InputCallout_C::SetSecondaryKey(const struct FKey& Button)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(43921);

	UWBP_InputCallout_C_SetSecondaryKey_Params params {};
	params.Button = Button;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_InputCallout.WBP_InputCallout_C.SetPrimaryKey
//		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
//		struct FKey                                        Button                                                     (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
void UWBP_InputCallout_C::SetPrimaryKey(const struct FKey& Button)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(43920);

	UWBP_InputCallout_C_SetPrimaryKey_Params params {};
	params.Button = Button;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_InputCallout.WBP_InputCallout_C.OnKeyBindSettingChanged
//		Flags  -> (BlueprintCallable, BlueprintEvent)
// Parameters:
//		struct FName                                       KeyBindName                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWBP_InputCallout_C::OnKeyBindSettingChanged(const struct FName& KeyBindName)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(43919);

	UWBP_InputCallout_C_OnKeyBindSettingChanged_Params params {};
	params.KeyBindName = KeyBindName;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_InputCallout.WBP_InputCallout_C.InitializeWidget
//		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
//		class APUMG_HUD*                                   HUD                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWBP_InputCallout_C::InitializeWidget(class APUMG_HUD* HUD)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(43918);

	UWBP_InputCallout_C_InitializeWidget_Params params {};
	params.HUD = HUD;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_InputCallout.WBP_InputCallout_C.ModeChange
//		Flags  -> (BlueprintCallable, BlueprintEvent)
// Parameters:
//		TEnumAsByte<PlatformGameFramework_EPGAME_INPUT_STATE> InputState                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWBP_InputCallout_C::ModeChange(TEnumAsByte<PlatformGameFramework_EPGAME_INPUT_STATE> InputState)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(43917);

	UWBP_InputCallout_C_ModeChange_Params params {};
	params.InputState = InputState;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_InputCallout.WBP_InputCallout_C.SetActionName
//		Flags  -> (BlueprintCallable, BlueprintEvent)
// Parameters:
//		struct FName                                       KeyBoardAction                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		struct FName                                       GamepadAction                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		struct FName                                       MobileAction                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWBP_InputCallout_C::SetActionName(const struct FName& KeyBoardAction, const struct FName& GamepadAction, const struct FName& MobileAction)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(43916);

	UWBP_InputCallout_C_SetActionName_Params params {};
	params.KeyBoardAction = KeyBoardAction;
	params.GamepadAction = GamepadAction;
	params.MobileAction = MobileAction;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_InputCallout.WBP_InputCallout_C.RemoveActionName
//		Flags  -> (BlueprintCallable, BlueprintEvent)
// Parameters:
//		struct FName                                       Action                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWBP_InputCallout_C::RemoveActionName(const struct FName& Action)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(43915);

	UWBP_InputCallout_C_RemoveActionName_Params params {};
	params.Action = Action;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_InputCallout.WBP_InputCallout_C.ClearAllActionName
//		Flags  -> (BlueprintCallable, BlueprintEvent)
void UWBP_InputCallout_C::ClearAllActionName()
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(43914);

	UWBP_InputCallout_C_ClearAllActionName_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_InputCallout.WBP_InputCallout_C.ExecuteUbergraph_WBP_InputCallout
//		Flags  -> (Final, HasDefaults)
// Parameters:
//		int                                                EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWBP_InputCallout_C::ExecuteUbergraph_WBP_InputCallout(int EntryPoint)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(43913);

	UWBP_InputCallout_C_ExecuteUbergraph_WBP_InputCallout_Params params {};
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
