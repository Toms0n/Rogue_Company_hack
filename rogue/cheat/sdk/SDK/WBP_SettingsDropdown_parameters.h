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

// Function WBP_SettingsDropdown.WBP_SettingsDropdown_C.SetPreviewIndex
struct UWBP_SettingsDropdown_C_SetPreviewIndex_Params
{
	int                                                Index;                                                     // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               Success;                                                   // 0x0004(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function WBP_SettingsDropdown.WBP_SettingsDropdown_C.NavigateBack
struct UWBP_SettingsDropdown_C_NavigateBack_Params
{
	bool                                               ReturnValue;                                               // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
};

// Function WBP_SettingsDropdown.WBP_SettingsDropdown_C.NavigateConfirmPressed
struct UWBP_SettingsDropdown_C_NavigateConfirmPressed_Params
{
	bool                                               ReturnValue;                                               // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
};

// Function WBP_SettingsDropdown.WBP_SettingsDropdown_C.NavigateConfirm
struct UWBP_SettingsDropdown_C_NavigateConfirm_Params
{
	bool                                               ReturnValue;                                               // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
};

// Function WBP_SettingsDropdown.WBP_SettingsDropdown_C.SetDesiredIndex
struct UWBP_SettingsDropdown_C_SetDesiredIndex_Params
{
	int                                                Index;                                                     // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               Success;                                                   // 0x0004(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function WBP_SettingsDropdown.WBP_SettingsDropdown_C.GetDirtyIndex
struct UWBP_SettingsDropdown_C_GetDirtyIndex_Params
{
	int                                                Index;                                                     // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function WBP_SettingsDropdown.WBP_SettingsDropdown_C.Set Text To Index
struct UWBP_SettingsDropdown_C_Set_Text_To_Index_Params
{
	int                                                Index;                                                     // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function WBP_SettingsDropdown.WBP_SettingsDropdown_C.OnWidgetSettingsInfoSet
struct UWBP_SettingsDropdown_C_OnWidgetSettingsInfoSet_Params
{
};

// Function WBP_SettingsDropdown.WBP_SettingsDropdown_C.Selection Made
struct UWBP_SettingsDropdown_C_Selection_Made_Params
{
	struct FText                                       Text;                                                      // 0x0000(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm)
	int                                                Index;                                                     // 0x0018(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function WBP_SettingsDropdown.WBP_SettingsDropdown_C.InitializeWidget
struct UWBP_SettingsDropdown_C_InitializeWidget_Params
{
	class APUMG_HUD*                                   HUD;                                                       // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function WBP_SettingsDropdown.WBP_SettingsDropdown_C.GamepadHover
struct UWBP_SettingsDropdown_C_GamepadHover_Params
{
};

// Function WBP_SettingsDropdown.WBP_SettingsDropdown_C.InitializeWidgetNavigation
struct UWBP_SettingsDropdown_C_InitializeWidgetNavigation_Params
{
};

// Function WBP_SettingsDropdown.WBP_SettingsDropdown_C.FocusGroupNavigateDownFailure
struct UWBP_SettingsDropdown_C_FocusGroupNavigateDownFailure_Params
{
	int                                                FocusGroup;                                                // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function WBP_SettingsDropdown.WBP_SettingsDropdown_C.FocusGroupNavigateUpFailure
struct UWBP_SettingsDropdown_C_FocusGroupNavigateUpFailure_Params
{
	int                                                FocusGroup;                                                // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function WBP_SettingsDropdown.WBP_SettingsDropdown_C.OnSettingsInfoValueChanged
struct UWBP_SettingsDropdown_C_OnSettingsInfoValueChanged_Params
{
	bool                                               bChangedExternally;                                        // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function WBP_SettingsDropdown.WBP_SettingsDropdown_C.HoverPreview
struct UWBP_SettingsDropdown_C_HoverPreview_Params
{
	int                                                Index;                                                     // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function WBP_SettingsDropdown.WBP_SettingsDropdown_C.SelectionCanceled
struct UWBP_SettingsDropdown_C_SelectionCanceled_Params
{
};

// Function WBP_SettingsDropdown.WBP_SettingsDropdown_C.ExecuteUbergraph_WBP_SettingsDropdown
struct UWBP_SettingsDropdown_C_ExecuteUbergraph_WBP_SettingsDropdown_Params
{
	int                                                EntryPoint;                                                // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
