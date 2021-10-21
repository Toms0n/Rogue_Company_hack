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
//		Name   -> Function WBP_InputKeySelector.WBP_InputKeySelector_C.SetMouseWheel
//		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
//		float                                              WheelDelta                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWBP_InputKeySelector_C::SetMouseWheel(float WheelDelta)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(44158);

	UWBP_InputKeySelector_C_SetMouseWheel_Params params {};
	params.WheelDelta = WheelDelta;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_InputKeySelector.WBP_InputKeySelector_C.OnMouseWheel
//		Flags  -> (BlueprintCosmetic, Event, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
//		struct FGeometry                                   MyGeometry                                                 (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
//		struct FPointerEvent                               MouseEvent                                                 (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
//		struct FEventReply                                 ReturnValue                                                (Parm, OutParm, ReturnParm)
struct FEventReply UWBP_InputKeySelector_C::OnMouseWheel(const struct FGeometry& MyGeometry, const struct FPointerEvent& MouseEvent)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(44157);

	UWBP_InputKeySelector_C_OnMouseWheel_Params params {};
	params.MyGeometry = MyGeometry;
	params.MouseEvent = MouseEvent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_InputKeySelector.WBP_InputKeySelector_C.OnKeyUp
//		Flags  -> (BlueprintCosmetic, Event, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
//		struct FGeometry                                   MyGeometry                                                 (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
//		struct FKeyEvent                                   InKeyEvent                                                 (BlueprintVisible, BlueprintReadOnly, Parm)
//		struct FEventReply                                 ReturnValue                                                (Parm, OutParm, ReturnParm)
struct FEventReply UWBP_InputKeySelector_C::OnKeyUp(const struct FGeometry& MyGeometry, const struct FKeyEvent& InKeyEvent)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(44156);

	UWBP_InputKeySelector_C_OnKeyUp_Params params {};
	params.MyGeometry = MyGeometry;
	params.InKeyEvent = InKeyEvent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_InputKeySelector.WBP_InputKeySelector_C.InputKeySelectorInputSelectedSFX
//		Flags  -> (BlueprintCallable, BlueprintEvent)
void UWBP_InputKeySelector_C::InputKeySelectorInputSelectedSFX()
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(44155);

	UWBP_InputKeySelector_C_InputKeySelectorInputSelectedSFX_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_InputKeySelector.WBP_InputKeySelector_C.InputKeySelectorClickSFX
//		Flags  -> (BlueprintCallable, BlueprintEvent)
void UWBP_InputKeySelector_C::InputKeySelectorClickSFX()
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(44154);

	UWBP_InputKeySelector_C_InputKeySelectorClickSFX_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_InputKeySelector.WBP_InputKeySelector_C.InputKeySelectorHoverSFX
//		Flags  -> (BlueprintCallable, BlueprintEvent)
void UWBP_InputKeySelector_C::InputKeySelectorHoverSFX()
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(44153);

	UWBP_InputKeySelector_C_InputKeySelectorHoverSFX_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_InputKeySelector.WBP_InputKeySelector_C.Construct
//		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
void UWBP_InputKeySelector_C::Construct()
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(44152);

	UWBP_InputKeySelector_C_Construct_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_InputKeySelector.WBP_InputKeySelector_C.BndEvt__KeySelector_K2Node_ComponentBoundEvent_0_OnKeySelected__DelegateSignature
//		Flags  -> (BlueprintEvent)
// Parameters:
//		struct FInputChord                                 SelectedKey                                                (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
void UWBP_InputKeySelector_C::BndEvt__KeySelector_K2Node_ComponentBoundEvent_0_OnKeySelected__DelegateSignature(const struct FInputChord& SelectedKey)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(44151);

	UWBP_InputKeySelector_C_BndEvt__KeySelector_K2Node_ComponentBoundEvent_0_OnKeySelected__DelegateSignature_Params params {};
	params.SelectedKey = SelectedKey;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_InputKeySelector.WBP_InputKeySelector_C.BndEvt__KeySelector_K2Node_ComponentBoundEvent_1_OnIsSelectingKeyChanged__DelegateSignature
//		Flags  -> (BlueprintEvent)
void UWBP_InputKeySelector_C::BndEvt__KeySelector_K2Node_ComponentBoundEvent_1_OnIsSelectingKeyChanged__DelegateSignature()
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(44150);

	UWBP_InputKeySelector_C_BndEvt__KeySelector_K2Node_ComponentBoundEvent_1_OnIsSelectingKeyChanged__DelegateSignature_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_InputKeySelector.WBP_InputKeySelector_C.GamepadHover
//		Flags  -> (Event, Public, BlueprintEvent)
void UWBP_InputKeySelector_C::GamepadHover()
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(44149);

	UWBP_InputKeySelector_C_GamepadHover_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_InputKeySelector.WBP_InputKeySelector_C.GamepadUnhover
//		Flags  -> (Event, Public, BlueprintEvent)
void UWBP_InputKeySelector_C::GamepadUnhover()
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(44148);

	UWBP_InputKeySelector_C_GamepadUnhover_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_InputKeySelector.WBP_InputKeySelector_C.Set Selected Key
//		Flags  -> (BlueprintCallable, BlueprintEvent)
// Parameters:
//		struct FInputChord                                 Selected_Key                                               (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
void UWBP_InputKeySelector_C::Set_Selected_Key(const struct FInputChord& Selected_Key)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(44147);

	UWBP_InputKeySelector_C_Set_Selected_Key_Params params {};
	params.Selected_Key = Selected_Key;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_InputKeySelector.WBP_InputKeySelector_C.OnMouseEnter
//		Flags  -> (BlueprintCosmetic, Event, Public, HasOutParms, BlueprintEvent)
// Parameters:
//		struct FGeometry                                   MyGeometry                                                 (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
//		struct FPointerEvent                               MouseEvent                                                 (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
void UWBP_InputKeySelector_C::OnMouseEnter(const struct FGeometry& MyGeometry, const struct FPointerEvent& MouseEvent)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(44146);

	UWBP_InputKeySelector_C_OnMouseEnter_Params params {};
	params.MyGeometry = MyGeometry;
	params.MouseEvent = MouseEvent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_InputKeySelector.WBP_InputKeySelector_C.OnMouseLeave
//		Flags  -> (BlueprintCosmetic, Event, Public, HasOutParms, BlueprintEvent)
// Parameters:
//		struct FPointerEvent                               MouseEvent                                                 (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
void UWBP_InputKeySelector_C::OnMouseLeave(const struct FPointerEvent& MouseEvent)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(44145);

	UWBP_InputKeySelector_C_OnMouseLeave_Params params {};
	params.MouseEvent = MouseEvent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_InputKeySelector.WBP_InputKeySelector_C.InitializeWidget
//		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
//		class APUMG_HUD*                                   HUD                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWBP_InputKeySelector_C::InitializeWidget(class APUMG_HUD* HUD)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(44144);

	UWBP_InputKeySelector_C_InitializeWidget_Params params {};
	params.HUD = HUD;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_InputKeySelector.WBP_InputKeySelector_C.SetDisabledText
//		Flags  -> (BlueprintCallable, BlueprintEvent)
void UWBP_InputKeySelector_C::SetDisabledText()
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(44143);

	UWBP_InputKeySelector_C_SetDisabledText_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_InputKeySelector.WBP_InputKeySelector_C.SetComboGamepadKey
//		Flags  -> (BlueprintCallable, BlueprintEvent)
// Parameters:
//		struct FInputChord                                 Selected_Key                                               (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
//		struct FInputChord                                 Selected_Combo_Key                                         (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
void UWBP_InputKeySelector_C::SetComboGamepadKey(const struct FInputChord& Selected_Key, const struct FInputChord& Selected_Combo_Key)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(44142);

	UWBP_InputKeySelector_C_SetComboGamepadKey_Params params {};
	params.Selected_Key = Selected_Key;
	params.Selected_Combo_Key = Selected_Combo_Key;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_InputKeySelector.WBP_InputKeySelector_C.Capture Combo
//		Flags  -> (BlueprintCallable, BlueprintEvent)
// Parameters:
//		bool                                               bCapture                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UWBP_InputKeySelector_C::Capture_Combo(bool bCapture)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(44141);

	UWBP_InputKeySelector_C_Capture_Combo_Params params {};
	params.bCapture = bCapture;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_InputKeySelector.WBP_InputKeySelector_C.TabRight
//		Flags  -> (BlueprintCallable, BlueprintEvent)
void UWBP_InputKeySelector_C::TabRight()
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(44140);

	UWBP_InputKeySelector_C_TabRight_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_InputKeySelector.WBP_InputKeySelector_C.ExecuteUbergraph_WBP_InputKeySelector
//		Flags  -> (Final, HasDefaults)
// Parameters:
//		int                                                EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWBP_InputKeySelector_C::ExecuteUbergraph_WBP_InputKeySelector(int EntryPoint)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(44139);

	UWBP_InputKeySelector_C_ExecuteUbergraph_WBP_InputKeySelector_Params params {};
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_InputKeySelector.WBP_InputKeySelector_C.OnComboKeySelected__DelegateSignature
//		Flags  -> (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
//		struct FInputChord                                 Combo_Key                                                  (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
void UWBP_InputKeySelector_C::OnComboKeySelected__DelegateSignature(const struct FInputChord& Combo_Key)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(44138);

	UWBP_InputKeySelector_C_OnComboKeySelected__DelegateSignature_Params params {};
	params.Combo_Key = Combo_Key;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_InputKeySelector.WBP_InputKeySelector_C.OnIsSelectingKeyChanged__DelegateSignature
//		Flags  -> (Public, Delegate, BlueprintCallable, BlueprintEvent)
void UWBP_InputKeySelector_C::OnIsSelectingKeyChanged__DelegateSignature()
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(44137);

	UWBP_InputKeySelector_C_OnIsSelectingKeyChanged__DelegateSignature_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_InputKeySelector.WBP_InputKeySelector_C.OnKeySelected__DelegateSignature
//		Flags  -> (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
//		struct FInputChord                                 Selected_Key                                               (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
void UWBP_InputKeySelector_C::OnKeySelected__DelegateSignature(const struct FInputChord& Selected_Key)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(44136);

	UWBP_InputKeySelector_C_OnKeySelected__DelegateSignature_Params params {};
	params.Selected_Key = Selected_Key;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
