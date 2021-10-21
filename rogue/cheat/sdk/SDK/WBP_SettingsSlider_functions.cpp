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
//		Name   -> Function WBP_SettingsSlider.WBP_SettingsSlider_C.IsSliderKey
//		Flags  -> (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
//		struct FKey                                        InKey                                                      (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
//		bool                                               IsKey                                                      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UWBP_SettingsSlider_C::IsSliderKey(const struct FKey& InKey, bool* IsKey)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(44663);

	UWBP_SettingsSlider_C_IsSliderKey_Params params {};
	params.InKey = InKey;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (IsKey != nullptr)
		*IsKey = params.IsKey;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_SettingsSlider.WBP_SettingsSlider_C.ResetCurrentAcceleration
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
void UWBP_SettingsSlider_C::ResetCurrentAcceleration()
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(44662);

	UWBP_SettingsSlider_C_ResetCurrentAcceleration_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_SettingsSlider.WBP_SettingsSlider_C.IncreaseCurrentAcceleration
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
void UWBP_SettingsSlider_C::IncreaseCurrentAcceleration()
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(44661);

	UWBP_SettingsSlider_C_IncreaseCurrentAcceleration_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_SettingsSlider.WBP_SettingsSlider_C.OnKeyUp
//		Flags  -> (BlueprintCosmetic, Event, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
//		struct FGeometry                                   MyGeometry                                                 (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
//		struct FKeyEvent                                   InKeyEvent                                                 (BlueprintVisible, BlueprintReadOnly, Parm)
//		struct FEventReply                                 ReturnValue                                                (Parm, OutParm, ReturnParm)
struct FEventReply UWBP_SettingsSlider_C::OnKeyUp(const struct FGeometry& MyGeometry, const struct FKeyEvent& InKeyEvent)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(44660);

	UWBP_SettingsSlider_C_OnKeyUp_Params params {};
	params.MyGeometry = MyGeometry;
	params.InKeyEvent = InKeyEvent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_SettingsSlider.WBP_SettingsSlider_C.OnKeyDown
//		Flags  -> (BlueprintCosmetic, Event, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
//		struct FGeometry                                   MyGeometry                                                 (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
//		struct FKeyEvent                                   InKeyEvent                                                 (BlueprintVisible, BlueprintReadOnly, Parm)
//		struct FEventReply                                 ReturnValue                                                (Parm, OutParm, ReturnParm)
struct FEventReply UWBP_SettingsSlider_C::OnKeyDown(const struct FGeometry& MyGeometry, const struct FKeyEvent& InKeyEvent)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(44659);

	UWBP_SettingsSlider_C_OnKeyDown_Params params {};
	params.MyGeometry = MyGeometry;
	params.InKeyEvent = InKeyEvent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_SettingsSlider.WBP_SettingsSlider_C.Step Left
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
void UWBP_SettingsSlider_C::Step_Left()
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(44658);

	UWBP_SettingsSlider_C_Step_Left_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_SettingsSlider.WBP_SettingsSlider_C.Step
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
//		float                                              Multiplier                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWBP_SettingsSlider_C::Step(float Multiplier)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(44657);

	UWBP_SettingsSlider_C_Step_Params params {};
	params.Multiplier = Multiplier;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_SettingsSlider.WBP_SettingsSlider_C.Step Right
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
void UWBP_SettingsSlider_C::Step_Right()
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(44656);

	UWBP_SettingsSlider_C_Step_Right_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_SettingsSlider.WBP_SettingsSlider_C.Set Display Text
//		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
void UWBP_SettingsSlider_C::Set_Display_Text()
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(44655);

	UWBP_SettingsSlider_C_Set_Display_Text_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_SettingsSlider.WBP_SettingsSlider_C.Set Desired Value
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
void UWBP_SettingsSlider_C::Set_Desired_Value()
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(44654);

	UWBP_SettingsSlider_C_Set_Desired_Value_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_SettingsSlider.WBP_SettingsSlider_C.Position Slider To Value
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
void UWBP_SettingsSlider_C::Position_Slider_To_Value()
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(44653);

	UWBP_SettingsSlider_C_Position_Slider_To_Value_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_SettingsSlider.WBP_SettingsSlider_C.Slider To Value
//		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
//		float                                              Value                                                      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWBP_SettingsSlider_C::Slider_To_Value(float* Value)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(44652);

	UWBP_SettingsSlider_C_Slider_To_Value_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Value != nullptr)
		*Value = params.Value;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_SettingsSlider.WBP_SettingsSlider_C.GetMaxSliderValue
//		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
//		float                                              Max_Value                                                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWBP_SettingsSlider_C::GetMaxSliderValue(float* Max_Value)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(44651);

	UWBP_SettingsSlider_C_GetMaxSliderValue_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Max_Value != nullptr)
		*Max_Value = params.Max_Value;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_SettingsSlider.WBP_SettingsSlider_C.GetMinSliderValue
//		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
//		float                                              Min_Value                                                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWBP_SettingsSlider_C::GetMinSliderValue(float* Min_Value)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(44650);

	UWBP_SettingsSlider_C_GetMinSliderValue_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Min_Value != nullptr)
		*Min_Value = params.Min_Value;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_SettingsSlider.WBP_SettingsSlider_C.Value To Slider
//		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
//		float                                              Slider_Value                                               (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWBP_SettingsSlider_C::Value_To_Slider(float* Slider_Value)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(44649);

	UWBP_SettingsSlider_C_Value_To_Slider_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Slider_Value != nullptr)
		*Slider_Value = params.Slider_Value;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_SettingsSlider.WBP_SettingsSlider_C.Get Dirty Value
//		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
//		float                                              Value                                                      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWBP_SettingsSlider_C::Get_Dirty_Value(float* Value)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(44648);

	UWBP_SettingsSlider_C_Get_Dirty_Value_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Value != nullptr)
		*Value = params.Value;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_SettingsSlider.WBP_SettingsSlider_C.Construct
//		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
void UWBP_SettingsSlider_C::Construct()
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(44647);

	UWBP_SettingsSlider_C_Construct_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_SettingsSlider.WBP_SettingsSlider_C.Tick
//		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
//		struct FGeometry                                   MyGeometry                                                 (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
//		float                                              InDeltaTime                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWBP_SettingsSlider_C::Tick(const struct FGeometry& MyGeometry, float InDeltaTime)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(44646);

	UWBP_SettingsSlider_C_Tick_Params params {};
	params.MyGeometry = MyGeometry;
	params.InDeltaTime = InDeltaTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_SettingsSlider.WBP_SettingsSlider_C.BndEvt__SettingsSlider_K2Node_ComponentBoundEvent_0_OnFloatValueChangedEvent__DelegateSignature
//		Flags  -> (BlueprintEvent)
// Parameters:
//		float                                              Value                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWBP_SettingsSlider_C::BndEvt__SettingsSlider_K2Node_ComponentBoundEvent_0_OnFloatValueChangedEvent__DelegateSignature(float Value)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(44645);

	UWBP_SettingsSlider_C_BndEvt__SettingsSlider_K2Node_ComponentBoundEvent_0_OnFloatValueChangedEvent__DelegateSignature_Params params {};
	params.Value = Value;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_SettingsSlider.WBP_SettingsSlider_C.OnWidgetSettingsInfoSet
//		Flags  -> (Event, Protected, BlueprintEvent)
void UWBP_SettingsSlider_C::OnWidgetSettingsInfoSet()
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(44644);

	UWBP_SettingsSlider_C_OnWidgetSettingsInfoSet_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_SettingsSlider.WBP_SettingsSlider_C.OnMouseEnter
//		Flags  -> (BlueprintCosmetic, Event, Public, HasOutParms, BlueprintEvent)
// Parameters:
//		struct FGeometry                                   MyGeometry                                                 (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
//		struct FPointerEvent                               MouseEvent                                                 (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
void UWBP_SettingsSlider_C::OnMouseEnter(const struct FGeometry& MyGeometry, const struct FPointerEvent& MouseEvent)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(44643);

	UWBP_SettingsSlider_C_OnMouseEnter_Params params {};
	params.MyGeometry = MyGeometry;
	params.MouseEvent = MouseEvent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_SettingsSlider.WBP_SettingsSlider_C.OnMouseLeave
//		Flags  -> (BlueprintCosmetic, Event, Public, HasOutParms, BlueprintEvent)
// Parameters:
//		struct FPointerEvent                               MouseEvent                                                 (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
void UWBP_SettingsSlider_C::OnMouseLeave(const struct FPointerEvent& MouseEvent)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(44642);

	UWBP_SettingsSlider_C_OnMouseLeave_Params params {};
	params.MouseEvent = MouseEvent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_SettingsSlider.WBP_SettingsSlider_C.GamepadHover
//		Flags  -> (Event, Public, BlueprintEvent)
void UWBP_SettingsSlider_C::GamepadHover()
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(44641);

	UWBP_SettingsSlider_C_GamepadHover_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_SettingsSlider.WBP_SettingsSlider_C.GamepadUnhover
//		Flags  -> (Event, Public, BlueprintEvent)
void UWBP_SettingsSlider_C::GamepadUnhover()
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(44640);

	UWBP_SettingsSlider_C_GamepadUnhover_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_SettingsSlider.WBP_SettingsSlider_C.NavigateLeftFailure
//		Flags  -> (Event, Public, BlueprintEvent)
void UWBP_SettingsSlider_C::NavigateLeftFailure()
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(44639);

	UWBP_SettingsSlider_C_NavigateLeftFailure_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_SettingsSlider.WBP_SettingsSlider_C.NavigateRightFailure
//		Flags  -> (Event, Public, BlueprintEvent)
void UWBP_SettingsSlider_C::NavigateRightFailure()
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(44638);

	UWBP_SettingsSlider_C_NavigateRightFailure_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_SettingsSlider.WBP_SettingsSlider_C.OnSettingsInfoValueChanged
//		Flags  -> (Event, Protected, BlueprintCallable, BlueprintEvent)
// Parameters:
//		bool                                               bChangedExternally                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UWBP_SettingsSlider_C::OnSettingsInfoValueChanged(bool bChangedExternally)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(44637);

	UWBP_SettingsSlider_C_OnSettingsInfoValueChanged_Params params {};
	params.bChangedExternally = bChangedExternally;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_SettingsSlider.WBP_SettingsSlider_C.ExecuteUbergraph_WBP_SettingsSlider
//		Flags  -> (Final, HasDefaults)
// Parameters:
//		int                                                EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWBP_SettingsSlider_C::ExecuteUbergraph_WBP_SettingsSlider(int EntryPoint)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(44636);

	UWBP_SettingsSlider_C_ExecuteUbergraph_WBP_SettingsSlider_Params params {};
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
