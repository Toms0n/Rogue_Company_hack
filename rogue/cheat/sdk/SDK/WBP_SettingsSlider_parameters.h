#pragma once

// Name: roguecompany, Version: 425


/*!!DEFINE!!*/

/*!!HELPER_DEF!!*/

/*!!HELPER_INC!!*/

#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

namespace CG
{
//---------------------------------------------------------------------------
// Parameters
//---------------------------------------------------------------------------

// Function WBP_SettingsSlider.WBP_SettingsSlider_C.IsSliderKey
struct UWBP_SettingsSlider_C_IsSliderKey_Params
{
	struct FKey                                        InKey;                                                     // 0x0000(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
	bool                                               IsKey;                                                     // 0x0018(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function WBP_SettingsSlider.WBP_SettingsSlider_C.ResetCurrentAcceleration
struct UWBP_SettingsSlider_C_ResetCurrentAcceleration_Params
{
};

// Function WBP_SettingsSlider.WBP_SettingsSlider_C.IncreaseCurrentAcceleration
struct UWBP_SettingsSlider_C_IncreaseCurrentAcceleration_Params
{
};

// Function WBP_SettingsSlider.WBP_SettingsSlider_C.OnKeyUp
struct UWBP_SettingsSlider_C_OnKeyUp_Params
{
	struct FGeometry                                   MyGeometry;                                                // 0x0000(0x0058)  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	struct FKeyEvent                                   InKeyEvent;                                                // 0x0058(0x0038)  (BlueprintVisible, BlueprintReadOnly, Parm)
	struct FEventReply                                 ReturnValue;                                               // 0x0090(0x00C0)  (Parm, OutParm, ReturnParm)
};

// Function WBP_SettingsSlider.WBP_SettingsSlider_C.OnKeyDown
struct UWBP_SettingsSlider_C_OnKeyDown_Params
{
	struct FGeometry                                   MyGeometry;                                                // 0x0000(0x0058)  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	struct FKeyEvent                                   InKeyEvent;                                                // 0x0058(0x0038)  (BlueprintVisible, BlueprintReadOnly, Parm)
	struct FEventReply                                 ReturnValue;                                               // 0x0090(0x00C0)  (Parm, OutParm, ReturnParm)
};

// Function WBP_SettingsSlider.WBP_SettingsSlider_C.Step Left
struct UWBP_SettingsSlider_C_Step_Left_Params
{
};

// Function WBP_SettingsSlider.WBP_SettingsSlider_C.Step
struct UWBP_SettingsSlider_C_Step_Params
{
	float                                              Multiplier;                                                // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function WBP_SettingsSlider.WBP_SettingsSlider_C.Step Right
struct UWBP_SettingsSlider_C_Step_Right_Params
{
};

// Function WBP_SettingsSlider.WBP_SettingsSlider_C.Set Display Text
struct UWBP_SettingsSlider_C_Set_Display_Text_Params
{
};

// Function WBP_SettingsSlider.WBP_SettingsSlider_C.Set Desired Value
struct UWBP_SettingsSlider_C_Set_Desired_Value_Params
{
};

// Function WBP_SettingsSlider.WBP_SettingsSlider_C.Position Slider To Value
struct UWBP_SettingsSlider_C_Position_Slider_To_Value_Params
{
};

// Function WBP_SettingsSlider.WBP_SettingsSlider_C.Slider To Value
struct UWBP_SettingsSlider_C_Slider_To_Value_Params
{
	float                                              Value;                                                     // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function WBP_SettingsSlider.WBP_SettingsSlider_C.GetMaxSliderValue
struct UWBP_SettingsSlider_C_GetMaxSliderValue_Params
{
	float                                              Max_Value;                                                 // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function WBP_SettingsSlider.WBP_SettingsSlider_C.GetMinSliderValue
struct UWBP_SettingsSlider_C_GetMinSliderValue_Params
{
	float                                              Min_Value;                                                 // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function WBP_SettingsSlider.WBP_SettingsSlider_C.Value To Slider
struct UWBP_SettingsSlider_C_Value_To_Slider_Params
{
	float                                              Slider_Value;                                              // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function WBP_SettingsSlider.WBP_SettingsSlider_C.Get Dirty Value
struct UWBP_SettingsSlider_C_Get_Dirty_Value_Params
{
	float                                              Value;                                                     // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function WBP_SettingsSlider.WBP_SettingsSlider_C.Construct
struct UWBP_SettingsSlider_C_Construct_Params
{
};

// Function WBP_SettingsSlider.WBP_SettingsSlider_C.Tick
struct UWBP_SettingsSlider_C_Tick_Params
{
	struct FGeometry                                   MyGeometry;                                                // 0x0000(0x0058)  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	float                                              InDeltaTime;                                               // 0x0058(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function WBP_SettingsSlider.WBP_SettingsSlider_C.BndEvt__SettingsSlider_K2Node_ComponentBoundEvent_0_OnFloatValueChangedEvent__DelegateSignature
struct UWBP_SettingsSlider_C_BndEvt__SettingsSlider_K2Node_ComponentBoundEvent_0_OnFloatValueChangedEvent__DelegateSignature_Params
{
	float                                              Value;                                                     // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function WBP_SettingsSlider.WBP_SettingsSlider_C.OnWidgetSettingsInfoSet
struct UWBP_SettingsSlider_C_OnWidgetSettingsInfoSet_Params
{
};

// Function WBP_SettingsSlider.WBP_SettingsSlider_C.OnMouseEnter
struct UWBP_SettingsSlider_C_OnMouseEnter_Params
{
	struct FGeometry                                   MyGeometry;                                                // 0x0000(0x0058)  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	struct FPointerEvent                               MouseEvent;                                                // 0x0058(0x0070)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};

// Function WBP_SettingsSlider.WBP_SettingsSlider_C.OnMouseLeave
struct UWBP_SettingsSlider_C_OnMouseLeave_Params
{
	struct FPointerEvent                               MouseEvent;                                                // 0x0000(0x0070)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};

// Function WBP_SettingsSlider.WBP_SettingsSlider_C.GamepadHover
struct UWBP_SettingsSlider_C_GamepadHover_Params
{
};

// Function WBP_SettingsSlider.WBP_SettingsSlider_C.GamepadUnhover
struct UWBP_SettingsSlider_C_GamepadUnhover_Params
{
};

// Function WBP_SettingsSlider.WBP_SettingsSlider_C.NavigateLeftFailure
struct UWBP_SettingsSlider_C_NavigateLeftFailure_Params
{
};

// Function WBP_SettingsSlider.WBP_SettingsSlider_C.NavigateRightFailure
struct UWBP_SettingsSlider_C_NavigateRightFailure_Params
{
};

// Function WBP_SettingsSlider.WBP_SettingsSlider_C.OnSettingsInfoValueChanged
struct UWBP_SettingsSlider_C_OnSettingsInfoValueChanged_Params
{
	bool                                               bChangedExternally;                                        // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function WBP_SettingsSlider.WBP_SettingsSlider_C.ExecuteUbergraph_WBP_SettingsSlider
struct UWBP_SettingsSlider_C_ExecuteUbergraph_WBP_SettingsSlider_Params
{
	int                                                EntryPoint;                                                // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
