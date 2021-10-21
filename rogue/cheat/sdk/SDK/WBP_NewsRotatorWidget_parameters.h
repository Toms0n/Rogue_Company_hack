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

// Function WBP_NewsRotatorWidget.WBP_NewsRotatorWidget_C.NavigateConfirm
struct UWBP_NewsRotatorWidget_C_NavigateConfirm_Params
{
	bool                                               ReturnValue;                                               // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
};

// Function WBP_NewsRotatorWidget.WBP_NewsRotatorWidget_C.UpdatePrompts
struct UWBP_NewsRotatorWidget_C_UpdatePrompts_Params
{
	unsigned char                                      InputState;                                                // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               HasFocus;                                                  // 0x0001(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function WBP_NewsRotatorWidget.WBP_NewsRotatorWidget_C.GetNavigationWidgets
struct UWBP_NewsRotatorWidget_C_GetNavigationWidgets_Params
{
	TArray<class UPUMG_Widget*>                        Widgets;                                                   // 0x0000(0x0010)  (Parm, OutParm, ContainsInstancedReference, HasGetValueTypeHash)
};

// Function WBP_NewsRotatorWidget.WBP_NewsRotatorWidget_C.ShowPanel
struct UWBP_NewsRotatorWidget_C_ShowPanel_Params
{
	int                                                NewPanelIndex;                                             // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function WBP_NewsRotatorWidget.WBP_NewsRotatorWidget_C.UpdateRotatorButtons
struct UWBP_NewsRotatorWidget_C_UpdateRotatorButtons_Params
{
};

// Function WBP_NewsRotatorWidget.WBP_NewsRotatorWidget_C.ShowPrevPanel
struct UWBP_NewsRotatorWidget_C_ShowPrevPanel_Params
{
};

// Function WBP_NewsRotatorWidget.WBP_NewsRotatorWidget_C.ShowNextPanel
struct UWBP_NewsRotatorWidget_C_ShowNextPanel_Params
{
};

// Function WBP_NewsRotatorWidget.WBP_NewsRotatorWidget_C.PopulateData
struct UWBP_NewsRotatorWidget_C_PopulateData_Params
{
};

// Function WBP_NewsRotatorWidget.WBP_NewsRotatorWidget_C.Tick
struct UWBP_NewsRotatorWidget_C_Tick_Params
{
	struct FGeometry                                   MyGeometry;                                                // 0x0000(0x0058)  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	float                                              InDeltaTime;                                               // 0x0058(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function WBP_NewsRotatorWidget.WBP_NewsRotatorWidget_C.InitializeWidget
struct UWBP_NewsRotatorWidget_C_InitializeWidget_Params
{
	class APUMG_HUD*                                   HUD;                                                       // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function WBP_NewsRotatorWidget.WBP_NewsRotatorWidget_C.OnJsonChanged
struct UWBP_NewsRotatorWidget_C_OnJsonChanged_Params
{
};

// Function WBP_NewsRotatorWidget.WBP_NewsRotatorWidget_C.OnAnimationFinished
struct UWBP_NewsRotatorWidget_C_OnAnimationFinished_Params
{
	class UWidgetAnimation*                            Animation;                                                 // 0x0000(0x0008)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function WBP_NewsRotatorWidget.WBP_NewsRotatorWidget_C.OnItemClicked
struct UWBP_NewsRotatorWidget_C_OnItemClicked_Params
{
	int                                                ButtonIndex;                                               // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function WBP_NewsRotatorWidget.WBP_NewsRotatorWidget_C.OnActionClicked
struct UWBP_NewsRotatorWidget_C_OnActionClicked_Params
{
	class UWidget*                                     Widget;                                                    // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function WBP_NewsRotatorWidget.WBP_NewsRotatorWidget_C.OnActionButtonHovered
struct UWBP_NewsRotatorWidget_C_OnActionButtonHovered_Params
{
	class UPUMG_Widget*                                Widget;                                                    // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               bHovered;                                                  // 0x0008(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function WBP_NewsRotatorWidget.WBP_NewsRotatorWidget_C.OnInputModeChange
struct UWBP_NewsRotatorWidget_C_OnInputModeChange_Params
{
	unsigned char                                      CurrentState;                                              // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function WBP_NewsRotatorWidget.WBP_NewsRotatorWidget_C.InitializeWidgetNavigation
struct UWBP_NewsRotatorWidget_C_InitializeWidgetNavigation_Params
{
};

// Function WBP_NewsRotatorWidget.WBP_NewsRotatorWidget_C.BindInputActions
struct UWBP_NewsRotatorWidget_C_BindInputActions_Params
{
};

// Function WBP_NewsRotatorWidget.WBP_NewsRotatorWidget_C.UnbindInputActions
struct UWBP_NewsRotatorWidget_C_UnbindInputActions_Params
{
};

// Function WBP_NewsRotatorWidget.WBP_NewsRotatorWidget_C.HandleGamepadHovered
struct UWBP_NewsRotatorWidget_C_HandleGamepadHovered_Params
{
	class UPUMG_Widget*                                Widget;                                                    // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               bHovered;                                                  // 0x0008(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function WBP_NewsRotatorWidget.WBP_NewsRotatorWidget_C.GamepadHover
struct UWBP_NewsRotatorWidget_C_GamepadHover_Params
{
};

// Function WBP_NewsRotatorWidget.WBP_NewsRotatorWidget_C.GamepadUnhover
struct UWBP_NewsRotatorWidget_C_GamepadUnhover_Params
{
};

// Function WBP_NewsRotatorWidget.WBP_NewsRotatorWidget_C.Event On Action Button Hovered
struct UWBP_NewsRotatorWidget_C_Event_On_Action_Button_Hovered_Params
{
	class UWidget*                                     Widget;                                                    // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function WBP_NewsRotatorWidget.WBP_NewsRotatorWidget_C.Event On Action Button Unhovered
struct UWBP_NewsRotatorWidget_C_Event_On_Action_Button_Unhovered_Params
{
	class UWidget*                                     Widget;                                                    // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function WBP_NewsRotatorWidget.WBP_NewsRotatorWidget_C.TriggerPanelTransition
struct UWBP_NewsRotatorWidget_C_TriggerPanelTransition_Params
{
};

// Function WBP_NewsRotatorWidget.WBP_NewsRotatorWidget_C.OnCycleAction
struct UWBP_NewsRotatorWidget_C_OnCycleAction_Params
{
	bool                                               bNext;                                                     // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function WBP_NewsRotatorWidget.WBP_NewsRotatorWidget_C.ExecuteUbergraph_WBP_NewsRotatorWidget
struct UWBP_NewsRotatorWidget_C_ExecuteUbergraph_WBP_NewsRotatorWidget_Params
{
	int                                                EntryPoint;                                                // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function WBP_NewsRotatorWidget.WBP_NewsRotatorWidget_C.NewsVisibilityUpdated__DelegateSignature
struct UWBP_NewsRotatorWidget_C_NewsVisibilityUpdated__DelegateSignature_Params
{
	bool                                               Visibility;                                                // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
