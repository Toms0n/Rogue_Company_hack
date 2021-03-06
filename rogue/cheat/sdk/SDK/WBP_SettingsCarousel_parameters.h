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

// Function WBP_SettingsCarousel.WBP_SettingsCarousel_C.Make Indicator Lights
struct UWBP_SettingsCarousel_C_Make_Indicator_Lights_Params
{
};

// Function WBP_SettingsCarousel.WBP_SettingsCarousel_C.Add Indicator Light
struct UWBP_SettingsCarousel_C_Add_Indicator_Light_Params
{
};

// Function WBP_SettingsCarousel.WBP_SettingsCarousel_C.SetAnimationTextToIndex
struct UWBP_SettingsCarousel_C_SetAnimationTextToIndex_Params
{
	int                                                Index;                                                     // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function WBP_SettingsCarousel.WBP_SettingsCarousel_C.SetDisplayTextToIndex
struct UWBP_SettingsCarousel_C_SetDisplayTextToIndex_Params
{
	int                                                Index;                                                     // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function WBP_SettingsCarousel.WBP_SettingsCarousel_C.GetDirtyIndex
struct UWBP_SettingsCarousel_C_GetDirtyIndex_Params
{
	int                                                Index;                                                     // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function WBP_SettingsCarousel.WBP_SettingsCarousel_C.SetDesiredIndex
struct UWBP_SettingsCarousel_C_SetDesiredIndex_Params
{
	int                                                Desired_Index;                                             // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               Index_Changed;                                             // 0x0004(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function WBP_SettingsCarousel.WBP_SettingsCarousel_C.SetTextToIndex
struct UWBP_SettingsCarousel_C_SetTextToIndex_Params
{
	class UTextBlock*                                  Text_Widget;                                               // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                Index;                                                     // 0x0008(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function WBP_SettingsCarousel.WBP_SettingsCarousel_C.SettingsCarouselHoverSFX
struct UWBP_SettingsCarousel_C_SettingsCarouselHoverSFX_Params
{
};

// Function WBP_SettingsCarousel.WBP_SettingsCarousel_C.SettingsCarouselClickedSFX
struct UWBP_SettingsCarousel_C_SettingsCarouselClickedSFX_Params
{
};

// Function WBP_SettingsCarousel.WBP_SettingsCarousel_C.GamepadHover
struct UWBP_SettingsCarousel_C_GamepadHover_Params
{
};

// Function WBP_SettingsCarousel.WBP_SettingsCarousel_C.GamepadUnhover
struct UWBP_SettingsCarousel_C_GamepadUnhover_Params
{
};

// Function WBP_SettingsCarousel.WBP_SettingsCarousel_C.BndEvt__Right_Button_K2Node_ComponentBoundEvent_4_OnButtonHoverEvent__DelegateSignature
struct UWBP_SettingsCarousel_C_BndEvt__Right_Button_K2Node_ComponentBoundEvent_4_OnButtonHoverEvent__DelegateSignature_Params
{
};

// Function WBP_SettingsCarousel.WBP_SettingsCarousel_C.BndEvt__Right_Button_K2Node_ComponentBoundEvent_5_OnButtonHoverEvent__DelegateSignature
struct UWBP_SettingsCarousel_C_BndEvt__Right_Button_K2Node_ComponentBoundEvent_5_OnButtonHoverEvent__DelegateSignature_Params
{
};

// Function WBP_SettingsCarousel.WBP_SettingsCarousel_C.BndEvt__Left_Button_K2Node_ComponentBoundEvent_6_OnButtonHoverEvent__DelegateSignature
struct UWBP_SettingsCarousel_C_BndEvt__Left_Button_K2Node_ComponentBoundEvent_6_OnButtonHoverEvent__DelegateSignature_Params
{
};

// Function WBP_SettingsCarousel.WBP_SettingsCarousel_C.BndEvt__Left_Button_K2Node_ComponentBoundEvent_7_OnButtonHoverEvent__DelegateSignature
struct UWBP_SettingsCarousel_C_BndEvt__Left_Button_K2Node_ComponentBoundEvent_7_OnButtonHoverEvent__DelegateSignature_Params
{
};

// Function WBP_SettingsCarousel.WBP_SettingsCarousel_C.Master Hover
struct UWBP_SettingsCarousel_C_Master_Hover_Params
{
};

// Function WBP_SettingsCarousel.WBP_SettingsCarousel_C.Master Unhover
struct UWBP_SettingsCarousel_C_Master_Unhover_Params
{
};

// Function WBP_SettingsCarousel.WBP_SettingsCarousel_C.InitializeWidget
struct UWBP_SettingsCarousel_C_InitializeWidget_Params
{
	class APUMG_HUD*                                   HUD;                                                       // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function WBP_SettingsCarousel.WBP_SettingsCarousel_C.OnWidgetSettingsInfoSet
struct UWBP_SettingsCarousel_C_OnWidgetSettingsInfoSet_Params
{
};

// Function WBP_SettingsCarousel.WBP_SettingsCarousel_C.OnWidgetConfigSet
struct UWBP_SettingsCarousel_C_OnWidgetConfigSet_Params
{
};

// Function WBP_SettingsCarousel.WBP_SettingsCarousel_C.BndEvt__Left_Button_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
struct UWBP_SettingsCarousel_C_BndEvt__Left_Button_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature_Params
{
};

// Function WBP_SettingsCarousel.WBP_SettingsCarousel_C.BndEvt__Right_Button_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature
struct UWBP_SettingsCarousel_C_BndEvt__Right_Button_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature_Params
{
};

// Function WBP_SettingsCarousel.WBP_SettingsCarousel_C.Reset Text
struct UWBP_SettingsCarousel_C_Reset_Text_Params
{
};

// Function WBP_SettingsCarousel.WBP_SettingsCarousel_C.Reset Indicator Light
struct UWBP_SettingsCarousel_C_Reset_Indicator_Light_Params
{
};

// Function WBP_SettingsCarousel.WBP_SettingsCarousel_C.Reset
struct UWBP_SettingsCarousel_C_Reset_Params
{
};

// Function WBP_SettingsCarousel.WBP_SettingsCarousel_C.NavigateRightFailure
struct UWBP_SettingsCarousel_C_NavigateRightFailure_Params
{
};

// Function WBP_SettingsCarousel.WBP_SettingsCarousel_C.NavigateLeftFailure
struct UWBP_SettingsCarousel_C_NavigateLeftFailure_Params
{
};

// Function WBP_SettingsCarousel.WBP_SettingsCarousel_C.FocusGroupNavigateDownFailure
struct UWBP_SettingsCarousel_C_FocusGroupNavigateDownFailure_Params
{
	int                                                FocusGroup;                                                // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function WBP_SettingsCarousel.WBP_SettingsCarousel_C.FocusGroupNavigateUpFailure
struct UWBP_SettingsCarousel_C_FocusGroupNavigateUpFailure_Params
{
	int                                                FocusGroup;                                                // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function WBP_SettingsCarousel.WBP_SettingsCarousel_C.Reset Indicator Lights
struct UWBP_SettingsCarousel_C_Reset_Indicator_Lights_Params
{
};

// Function WBP_SettingsCarousel.WBP_SettingsCarousel_C.OnSettingsInfoValueChanged
struct UWBP_SettingsCarousel_C_OnSettingsInfoValueChanged_Params
{
	bool                                               bChangedExternally;                                        // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function WBP_SettingsCarousel.WBP_SettingsCarousel_C.ExecuteUbergraph_WBP_SettingsCarousel
struct UWBP_SettingsCarousel_C_ExecuteUbergraph_WBP_SettingsCarousel_Params
{
	int                                                EntryPoint;                                                // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
