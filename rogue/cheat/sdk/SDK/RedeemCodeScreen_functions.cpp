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
//		Name   -> Function RedeemCodeScreen.RedeemCodeScreen_C.UpdateSubmitButtonState
//		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
void URedeemCodeScreen_C::UpdateSubmitButtonState()
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(63281);

	URedeemCodeScreen_C_UpdateSubmitButtonState_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function RedeemCodeScreen.RedeemCodeScreen_C.SetErrorMessage
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
//		struct FText                                       ErrorMessage                                               (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm)
void URedeemCodeScreen_C::SetErrorMessage(const struct FText& ErrorMessage)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(63280);

	URedeemCodeScreen_C_SetErrorMessage_Params params {};
	params.ErrorMessage = ErrorMessage;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function RedeemCodeScreen.RedeemCodeScreen_C.OnSpamPreventTimeout
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
void URedeemCodeScreen_C::OnSpamPreventTimeout()
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(63279);

	URedeemCodeScreen_C_OnSpamPreventTimeout_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function RedeemCodeScreen.RedeemCodeScreen_C.GetPaletteColor
//		Flags  -> (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
//		struct FName                                       Color_Name                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		struct FSlateColor                                 Color                                                      (Parm, OutParm)
void URedeemCodeScreen_C::GetPaletteColor(const struct FName& Color_Name, struct FSlateColor* Color)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(63278);

	URedeemCodeScreen_C_GetPaletteColor_Params params {};
	params.Color_Name = Color_Name;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Color != nullptr)
		*Color = params.Color;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function RedeemCodeScreen.RedeemCodeScreen_C.ShowPending
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
void URedeemCodeScreen_C::ShowPending()
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(63277);

	URedeemCodeScreen_C_ShowPending_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function RedeemCodeScreen.RedeemCodeScreen_C.EndPending
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
void URedeemCodeScreen_C::EndPending()
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(63276);

	URedeemCodeScreen_C_EndPending_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function RedeemCodeScreen.RedeemCodeScreen_C.NavigateBack
//		Flags  -> (Event, Protected, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
//		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
bool URedeemCodeScreen_C::NavigateBack()
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(63275);

	URedeemCodeScreen_C_NavigateBack_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function RedeemCodeScreen.RedeemCodeScreen_C.StartShowAnim
//		Flags  -> (BlueprintCallable, BlueprintEvent)
void URedeemCodeScreen_C::StartShowAnim()
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(63274);

	URedeemCodeScreen_C_StartShowAnim_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function RedeemCodeScreen.RedeemCodeScreen_C.InitializeTickAnimations
//		Flags  -> (Event, Protected, BlueprintEvent)
void URedeemCodeScreen_C::InitializeTickAnimations()
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(63273);

	URedeemCodeScreen_C_InitializeTickAnimations_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function RedeemCodeScreen.RedeemCodeScreen_C.ShowCodeRedeemFinished
//		Flags  -> (BlueprintCallable, BlueprintEvent)
void URedeemCodeScreen_C::ShowCodeRedeemFinished()
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(63272);

	URedeemCodeScreen_C_ShowCodeRedeemFinished_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function RedeemCodeScreen.RedeemCodeScreen_C.ShowCodeRedeemAnim
//		Flags  -> (BlueprintCallable, BlueprintEvent)
// Parameters:
//		float                                              ElapsedTime                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		float                                              ElapsedAlpha                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void URedeemCodeScreen_C::ShowCodeRedeemAnim(float ElapsedTime, float ElapsedAlpha)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(63271);

	URedeemCodeScreen_C_ShowCodeRedeemAnim_Params params {};
	params.ElapsedTime = ElapsedTime;
	params.ElapsedAlpha = ElapsedAlpha;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function RedeemCodeScreen.RedeemCodeScreen_C.InitHideAnimation
//		Flags  -> (BlueprintCallable, BlueprintEvent)
void URedeemCodeScreen_C::InitHideAnimation()
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(63270);

	URedeemCodeScreen_C_InitHideAnimation_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function RedeemCodeScreen.RedeemCodeScreen_C.HideCodeRedeemFinished
//		Flags  -> (BlueprintCallable, BlueprintEvent)
void URedeemCodeScreen_C::HideCodeRedeemFinished()
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(63269);

	URedeemCodeScreen_C_HideCodeRedeemFinished_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function RedeemCodeScreen.RedeemCodeScreen_C.HideCodeRedeemAnim
//		Flags  -> (BlueprintCallable, BlueprintEvent)
// Parameters:
//		float                                              ElapsedTime                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		float                                              ElapsedAlpha                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void URedeemCodeScreen_C::HideCodeRedeemAnim(float ElapsedTime, float ElapsedAlpha)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(63268);

	URedeemCodeScreen_C_HideCodeRedeemAnim_Params params {};
	params.ElapsedTime = ElapsedTime;
	params.ElapsedAlpha = ElapsedAlpha;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function RedeemCodeScreen.RedeemCodeScreen_C.StartHideAnim
//		Flags  -> (BlueprintCallable, BlueprintEvent)
void URedeemCodeScreen_C::StartHideAnim()
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(63267);

	URedeemCodeScreen_C_StartHideAnim_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function RedeemCodeScreen.RedeemCodeScreen_C.InitializeWidget
//		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
//		class APUMG_HUD*                                   HUD                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void URedeemCodeScreen_C::InitializeWidget(class APUMG_HUD* HUD)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(63266);

	URedeemCodeScreen_C_InitializeWidget_Params params {};
	params.HUD = HUD;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function RedeemCodeScreen.RedeemCodeScreen_C.InitializeWidgetNavigation
//		Flags  -> (Event, Public, BlueprintEvent)
void URedeemCodeScreen_C::InitializeWidgetNavigation()
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(63265);

	URedeemCodeScreen_C_InitializeWidgetNavigation_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function RedeemCodeScreen.RedeemCodeScreen_C.Construct
//		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
void URedeemCodeScreen_C::Construct()
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(63264);

	URedeemCodeScreen_C_Construct_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function RedeemCodeScreen.RedeemCodeScreen_C.InitializeWidgetButtonListeners
//		Flags  -> (Event, Public, BlueprintEvent)
void URedeemCodeScreen_C::InitializeWidgetButtonListeners()
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(63263);

	URedeemCodeScreen_C_InitializeWidgetButtonListeners_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function RedeemCodeScreen.RedeemCodeScreen_C.SubmitCode
//		Flags  -> (BlueprintCallable, BlueprintEvent)
void URedeemCodeScreen_C::SubmitCode()
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(63262);

	URedeemCodeScreen_C_SubmitCode_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function RedeemCodeScreen.RedeemCodeScreen_C.StartShowSequence
//		Flags  -> (Event, Public, BlueprintEvent)
// Parameters:
//		struct FName                                       FromRoute                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		struct FName                                       ToRoute                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void URedeemCodeScreen_C::StartShowSequence(const struct FName& FromRoute, const struct FName& ToRoute)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(63261);

	URedeemCodeScreen_C_StartShowSequence_Params params {};
	params.FromRoute = FromRoute;
	params.ToRoute = ToRoute;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function RedeemCodeScreen.RedeemCodeScreen_C.StartHideSequence
//		Flags  -> (Event, Public, BlueprintEvent)
// Parameters:
//		struct FName                                       FromRoute                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		struct FName                                       ToRoute                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void URedeemCodeScreen_C::StartHideSequence(const struct FName& FromRoute, const struct FName& ToRoute)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(63260);

	URedeemCodeScreen_C_StartHideSequence_Params params {};
	params.FromRoute = FromRoute;
	params.ToRoute = ToRoute;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function RedeemCodeScreen.RedeemCodeScreen_C.OnShown
//		Flags  -> (Event, Public, BlueprintEvent)
void URedeemCodeScreen_C::OnShown()
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(63259);

	URedeemCodeScreen_C_OnShown_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function RedeemCodeScreen.RedeemCodeScreen_C.OnHide
//		Flags  -> (Event, Public, BlueprintEvent)
void URedeemCodeScreen_C::OnHide()
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(63258);

	URedeemCodeScreen_C_OnHide_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function RedeemCodeScreen.RedeemCodeScreen_C.OnCloseButtonClicked
//		Flags  -> (BlueprintCallable, BlueprintEvent)
void URedeemCodeScreen_C::OnCloseButtonClicked()
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(63257);

	URedeemCodeScreen_C_OnCloseButtonClicked_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function RedeemCodeScreen.RedeemCodeScreen_C.BndEvt__WBP_StandardButtonMedium_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature
//		Flags  -> (BlueprintEvent)
// Parameters:
//		class UWidget*                                     Widget                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void URedeemCodeScreen_C::BndEvt__WBP_StandardButtonMedium_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature(class UWidget* Widget)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(63256);

	URedeemCodeScreen_C_BndEvt__WBP_StandardButtonMedium_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature_Params params {};
	params.Widget = Widget;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function RedeemCodeScreen.RedeemCodeScreen_C.OnRedeemCodeSubmit
//		Flags  -> (Event, Protected, BlueprintCallable, BlueprintEvent)
void URedeemCodeScreen_C::OnRedeemCodeSubmit()
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(63255);

	URedeemCodeScreen_C_OnRedeemCodeSubmit_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function RedeemCodeScreen.RedeemCodeScreen_C.OnRedeemCodeResult
//		Flags  -> (Event, Protected, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
//		bool                                               Success                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
//		struct FText                                       Error                                                      (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
void URedeemCodeScreen_C::OnRedeemCodeResult(bool Success, const struct FText& Error)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(63254);

	URedeemCodeScreen_C_OnRedeemCodeResult_Params params {};
	params.Success = Success;
	params.Error = Error;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function RedeemCodeScreen.RedeemCodeScreen_C.HandleInputStateChanged
//		Flags  -> (BlueprintCallable, BlueprintEvent)
// Parameters:
//		TEnumAsByte<PlatformGameFramework_EPGAME_INPUT_STATE> InputState                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void URedeemCodeScreen_C::HandleInputStateChanged(TEnumAsByte<PlatformGameFramework_EPGAME_INPUT_STATE> InputState)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(63253);

	URedeemCodeScreen_C_HandleInputStateChanged_Params params {};
	params.InputState = InputState;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function RedeemCodeScreen.RedeemCodeScreen_C.OnCodeTextChanged
//		Flags  -> (HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
//		struct FText                                       Text                                                       (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
void URedeemCodeScreen_C::OnCodeTextChanged(const struct FText& Text)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(63252);

	URedeemCodeScreen_C_OnCodeTextChanged_Params params {};
	params.Text = Text;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function RedeemCodeScreen.RedeemCodeScreen_C.OnCodeTextCommit
//		Flags  -> (HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
//		struct FText                                       Text                                                       (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
//		TEnumAsByte<SlateCore_ETextCommit>                 CommitMethod                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void URedeemCodeScreen_C::OnCodeTextCommit(const struct FText& Text, TEnumAsByte<SlateCore_ETextCommit> CommitMethod)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(63251);

	URedeemCodeScreen_C_OnCodeTextCommit_Params params {};
	params.Text = Text;
	params.CommitMethod = CommitMethod;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function RedeemCodeScreen.RedeemCodeScreen_C.ExecuteUbergraph_RedeemCodeScreen
//		Flags  -> (Final, HasDefaults)
// Parameters:
//		int                                                EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void URedeemCodeScreen_C::ExecuteUbergraph_RedeemCodeScreen(int EntryPoint)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(63250);

	URedeemCodeScreen_C_ExecuteUbergraph_RedeemCodeScreen_Params params {};
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
