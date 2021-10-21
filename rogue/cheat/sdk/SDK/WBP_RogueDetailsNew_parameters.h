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

// Function WBP_RogueDetailsNew.WBP_RogueDetailsNew_C.DisplayArmoryScreen
struct UWBP_RogueDetailsNew_C_DisplayArmoryScreen_Params
{
};

// Function WBP_RogueDetailsNew.WBP_RogueDetailsNew_C.SetBlur
struct UWBP_RogueDetailsNew_C_SetBlur_Params
{
	bool                                               Blur;                                                      // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function WBP_RogueDetailsNew.WBP_RogueDetailsNew_C.SetTabIsGamepadSelected
struct UWBP_RogueDetailsNew_C_SetTabIsGamepadSelected_Params
{
	class UWBP_RogueDetailsPanelButton_C*              NavButton;                                                 // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function WBP_RogueDetailsNew.WBP_RogueDetailsNew_C.PlayTransitionAnim
struct UWBP_RogueDetailsNew_C_PlayTransitionAnim_Params
{
};

// Function WBP_RogueDetailsNew.WBP_RogueDetailsNew_C.OnTabHovered
struct UWBP_RogueDetailsNew_C_OnTabHovered_Params
{
	class UPUMG_Widget*                                Widget;                                                    // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               bHovered;                                                  // 0x0008(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function WBP_RogueDetailsNew.WBP_RogueDetailsNew_C.Set Selected Tab
struct UWBP_RogueDetailsNew_C_Set_Selected_Tab_Params
{
	class UWBP_RogueDetailsPanelButton_C*              NewSelection;                                              // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               Force;                                                     // 0x0008(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                               SkipTransition;                                            // 0x0009(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function WBP_RogueDetailsNew.WBP_RogueDetailsNew_C.SetTabInput
struct UWBP_RogueDetailsNew_C_SetTabInput_Params
{
};

// Function WBP_RogueDetailsNew.WBP_RogueDetailsNew_C.SetLocalJobInfo
struct UWBP_RogueDetailsNew_C_SetLocalJobInfo_Params
{
	class UKSJobItem*                                  JobItem;                                                   // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function WBP_RogueDetailsNew.WBP_RogueDetailsNew_C.NavigateBack
struct UWBP_RogueDetailsNew_C_NavigateBack_Params
{
	bool                                               ReturnValue;                                               // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
};

// Function WBP_RogueDetailsNew.WBP_RogueDetailsNew_C.InitializeWidgetNavigation
struct UWBP_RogueDetailsNew_C_InitializeWidgetNavigation_Params
{
};

// Function WBP_RogueDetailsNew.WBP_RogueDetailsNew_C.OnCurrentJobChanged
struct UWBP_RogueDetailsNew_C_OnCurrentJobChanged_Params
{
	class UKSJobItem*                                  JobItem;                                                   // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               bFromShowEvent;                                            // 0x0008(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function WBP_RogueDetailsNew.WBP_RogueDetailsNew_C.InitializeWidget
struct UWBP_RogueDetailsNew_C_InitializeWidget_Params
{
	class APUMG_HUD*                                   HUD;                                                       // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function WBP_RogueDetailsNew.WBP_RogueDetailsNew_C.BndEvt__BioButton_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
struct UWBP_RogueDetailsNew_C_BndEvt__BioButton_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature_Params
{
};

// Function WBP_RogueDetailsNew.WBP_RogueDetailsNew_C.BndEvt__MasteryButton_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature
struct UWBP_RogueDetailsNew_C_BndEvt__MasteryButton_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature_Params
{
};

// Function WBP_RogueDetailsNew.WBP_RogueDetailsNew_C.BndEvt__PerksButton_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature
struct UWBP_RogueDetailsNew_C_BndEvt__PerksButton_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature_Params
{
};

// Function WBP_RogueDetailsNew.WBP_RogueDetailsNew_C.BndEvt__CustomizeButton_K2Node_ComponentBoundEvent_3_OnButtonClickedEvent__DelegateSignature
struct UWBP_RogueDetailsNew_C_BndEvt__CustomizeButton_K2Node_ComponentBoundEvent_3_OnButtonClickedEvent__DelegateSignature_Params
{
};

// Function WBP_RogueDetailsNew.WBP_RogueDetailsNew_C.BndEvt__ArmoryButton_K2Node_ComponentBoundEvent_4_OnButtonClickedEvent__DelegateSignature
struct UWBP_RogueDetailsNew_C_BndEvt__ArmoryButton_K2Node_ComponentBoundEvent_4_OnButtonClickedEvent__DelegateSignature_Params
{
};

// Function WBP_RogueDetailsNew.WBP_RogueDetailsNew_C.OnShown
struct UWBP_RogueDetailsNew_C_OnShown_Params
{
};

// Function WBP_RogueDetailsNew.WBP_RogueDetailsNew_C.OnClickedSwapPrimaryButton
struct UWBP_RogueDetailsNew_C_OnClickedSwapPrimaryButton_Params
{
};

// Function WBP_RogueDetailsNew.WBP_RogueDetailsNew_C.FocusGroupNavigateRightFailure
struct UWBP_RogueDetailsNew_C_FocusGroupNavigateRightFailure_Params
{
	int                                                FocusGroup;                                                // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function WBP_RogueDetailsNew.WBP_RogueDetailsNew_C.FocusGroupNavigateLeftFailure
struct UWBP_RogueDetailsNew_C_FocusGroupNavigateLeftFailure_Params
{
	int                                                FocusGroup;                                                // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function WBP_RogueDetailsNew.WBP_RogueDetailsNew_C.OnMasteryNavLeftFailed
struct UWBP_RogueDetailsNew_C_OnMasteryNavLeftFailed_Params
{
};

// Function WBP_RogueDetailsNew.WBP_RogueDetailsNew_C.Construct
struct UWBP_RogueDetailsNew_C_Construct_Params
{
};

// Function WBP_RogueDetailsNew.WBP_RogueDetailsNew_C.ExecuteUbergraph_WBP_RogueDetailsNew
struct UWBP_RogueDetailsNew_C_ExecuteUbergraph_WBP_RogueDetailsNew_Params
{
	int                                                EntryPoint;                                                // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
