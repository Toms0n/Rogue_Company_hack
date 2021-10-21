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

// Function WBP_EventMissionSelect.WBP_EventMissionSelect_C.OnKeyUp
struct UWBP_EventMissionSelect_C_OnKeyUp_Params
{
	struct FGeometry                                   MyGeometry;                                                // 0x0000(0x0058)  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	struct FKeyEvent                                   InKeyEvent;                                                // 0x0058(0x0038)  (BlueprintVisible, BlueprintReadOnly, Parm)
	struct FEventReply                                 ReturnValue;                                               // 0x0090(0x00C0)  (Parm, OutParm, ReturnParm)
};

// Function WBP_EventMissionSelect.WBP_EventMissionSelect_C.OnClickedUnlockExlusiveMissions
struct UWBP_EventMissionSelect_C_OnClickedUnlockExlusiveMissions_Params
{
};

// Function WBP_EventMissionSelect.WBP_EventMissionSelect_C.UpdateExlusiveMissionUnlockButton
struct UWBP_EventMissionSelect_C_UpdateExlusiveMissionUnlockButton_Params
{
};

// Function WBP_EventMissionSelect.WBP_EventMissionSelect_C.UpdateCreditsCount
struct UWBP_EventMissionSelect_C_UpdateCreditsCount_Params
{
};

// Function WBP_EventMissionSelect.WBP_EventMissionSelect_C.NavigateConfirm
struct UWBP_EventMissionSelect_C_NavigateConfirm_Params
{
	bool                                               ReturnValue;                                               // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
};

// Function WBP_EventMissionSelect.WBP_EventMissionSelect_C.UpdateActivateButtonAndPrompt
struct UWBP_EventMissionSelect_C_UpdateActivateButtonAndPrompt_Params
{
};

// Function WBP_EventMissionSelect.WBP_EventMissionSelect_C.TryActivateFocusedMission
struct UWBP_EventMissionSelect_C_TryActivateFocusedMission_Params
{
	bool                                               DidActivate;                                               // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function WBP_EventMissionSelect.WBP_EventMissionSelect_C.PopulateMissions
struct UWBP_EventMissionSelect_C_PopulateMissions_Params
{
};

// Function WBP_EventMissionSelect.WBP_EventMissionSelect_C.RefreshScene
struct UWBP_EventMissionSelect_C_RefreshScene_Params
{
};

// Function WBP_EventMissionSelect.WBP_EventMissionSelect_C.OnInputStateChanged
struct UWBP_EventMissionSelect_C_OnInputStateChanged_Params
{
	TEnumAsByte<PlatformGameFramework_EPGAME_INPUT_STATE> InputState;                                                // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function WBP_EventMissionSelect.WBP_EventMissionSelect_C.GetNavigationWidgets
struct UWBP_EventMissionSelect_C_GetNavigationWidgets_Params
{
	TArray<class UWBP_EventMissionItem_C*>             Widgets;                                                   // 0x0000(0x0010)  (Parm, OutParm, ContainsInstancedReference, HasGetValueTypeHash)
};

// Function WBP_EventMissionSelect.WBP_EventMissionSelect_C.NavigateBack
struct UWBP_EventMissionSelect_C_NavigateBack_Params
{
	bool                                               ReturnValue;                                               // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
};

// Function WBP_EventMissionSelect.WBP_EventMissionSelect_C.InitializeWidget
struct UWBP_EventMissionSelect_C_InitializeWidget_Params
{
	class APUMG_HUD*                                   HUD;                                                       // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function WBP_EventMissionSelect.WBP_EventMissionSelect_C.OnBackPrompt
struct UWBP_EventMissionSelect_C_OnBackPrompt_Params
{
};

// Function WBP_EventMissionSelect.WBP_EventMissionSelect_C.InitializeWidgetNavigation
struct UWBP_EventMissionSelect_C_InitializeWidgetNavigation_Params
{
};

// Function WBP_EventMissionSelect.WBP_EventMissionSelect_C.OnShown
struct UWBP_EventMissionSelect_C_OnShown_Params
{
};

// Function WBP_EventMissionSelect.WBP_EventMissionSelect_C.OnActivateButtonClicked
struct UWBP_EventMissionSelect_C_OnActivateButtonClicked_Params
{
	class UWidget*                                     Widget;                                                    // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function WBP_EventMissionSelect.WBP_EventMissionSelect_C.OnMissionFocused
struct UWBP_EventMissionSelect_C_OnMissionFocused_Params
{
	class UKSActivityInstance*                         ActivityInstance;                                          // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UWBP_EventMissionItem_C*                     Widget;                                                    // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function WBP_EventMissionSelect.WBP_EventMissionSelect_C.OnUnlockExclusiveMissionsClicked
struct UWBP_EventMissionSelect_C_OnUnlockExclusiveMissionsClicked_Params
{
	class UWidget*                                     Widget;                                                    // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function WBP_EventMissionSelect.WBP_EventMissionSelect_C.ExecuteUbergraph_WBP_EventMissionSelect
struct UWBP_EventMissionSelect_C_ExecuteUbergraph_WBP_EventMissionSelect_Params
{
	int                                                EntryPoint;                                                // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
