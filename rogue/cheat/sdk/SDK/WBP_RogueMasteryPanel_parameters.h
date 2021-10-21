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

// Function WBP_RogueMasteryPanel.WBP_RogueMasteryPanel_C.OnInputModeChanged
struct UWBP_RogueMasteryPanel_C_OnInputModeChanged_Params
{
	TEnumAsByte<PlatformGameFramework_EPGAME_INPUT_STATE> InputState;                                                // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function WBP_RogueMasteryPanel.WBP_RogueMasteryPanel_C.EvaluateFocusDisplay
struct UWBP_RogueMasteryPanel_C_EvaluateFocusDisplay_Params
{
};

// Function WBP_RogueMasteryPanel.WBP_RogueMasteryPanel_C.DisplayGamepadFocus
struct UWBP_RogueMasteryPanel_C_DisplayGamepadFocus_Params
{
	bool                                               ShouldDisplayFocus;                                        // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function WBP_RogueMasteryPanel.WBP_RogueMasteryPanel_C.NavigateNextMasteryLevel
struct UWBP_RogueMasteryPanel_C_NavigateNextMasteryLevel_Params
{
	int                                                FocusGroup;                                                // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UPUMG_Widget*                                Widget;                                                    // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function WBP_RogueMasteryPanel.WBP_RogueMasteryPanel_C.NavigatePreviousMasteryLevel
struct UWBP_RogueMasteryPanel_C_NavigatePreviousMasteryLevel_Params
{
	int                                                FocusGroup;                                                // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UPUMG_Widget*                                Widget;                                                    // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function WBP_RogueMasteryPanel.WBP_RogueMasteryPanel_C.SetupInput
struct UWBP_RogueMasteryPanel_C_SetupInput_Params
{
	class UKSWidget*                                   NavigationParent;                                          // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                FocusGroup;                                                // 0x0008(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function WBP_RogueMasteryPanel.WBP_RogueMasteryPanel_C.SetJob
struct UWBP_RogueMasteryPanel_C_SetJob_Params
{
	class UKSJobItem*                                  JobItem;                                                   // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function WBP_RogueMasteryPanel.WBP_RogueMasteryPanel_C.Display Reward
struct UWBP_RogueMasteryPanel_C_Display_Reward_Params
{
	struct FMasteryRewardData                          RewardItem;                                                // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
	class UWBP_ListButton_Cosmetic_C*                  SelectedWidget;                                            // 0x0010(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function WBP_RogueMasteryPanel.WBP_RogueMasteryPanel_C.SetRewardDisplayLevel
struct UWBP_RogueMasteryPanel_C_SetRewardDisplayLevel_Params
{
	int                                                Level;                                                     // 0x0000(0x0004)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function WBP_RogueMasteryPanel.WBP_RogueMasteryPanel_C.DisplayPrestigeLevels
struct UWBP_RogueMasteryPanel_C_DisplayPrestigeLevels_Params
{
};

// Function WBP_RogueMasteryPanel.WBP_RogueMasteryPanel_C.DisplayMasteryLevel
struct UWBP_RogueMasteryPanel_C_DisplayMasteryLevel_Params
{
	struct FActivityTier                               ActivityTier;                                              // 0x0000(0x0040)  (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function WBP_RogueMasteryPanel.WBP_RogueMasteryPanel_C.Construct
struct UWBP_RogueMasteryPanel_C_Construct_Params
{
};

// Function WBP_RogueMasteryPanel.WBP_RogueMasteryPanel_C.InitializeWidget
struct UWBP_RogueMasteryPanel_C_InitializeWidget_Params
{
	class APUMG_HUD*                                   HUD;                                                       // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function WBP_RogueMasteryPanel.WBP_RogueMasteryPanel_C.OnHide
struct UWBP_RogueMasteryPanel_C_OnHide_Params
{
};

// Function WBP_RogueMasteryPanel.WBP_RogueMasteryPanel_C.OnViewPreviousMasteryLevelFailed
struct UWBP_RogueMasteryPanel_C_OnViewPreviousMasteryLevelFailed_Params
{
};

// Function WBP_RogueMasteryPanel.WBP_RogueMasteryPanel_C.ExecuteUbergraph_WBP_RogueMasteryPanel
struct UWBP_RogueMasteryPanel_C_ExecuteUbergraph_WBP_RogueMasteryPanel_Params
{
	int                                                EntryPoint;                                                // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function WBP_RogueMasteryPanel.WBP_RogueMasteryPanel_C.OnNavLeftFailed__DelegateSignature
struct UWBP_RogueMasteryPanel_C_OnNavLeftFailed__DelegateSignature_Params
{
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
