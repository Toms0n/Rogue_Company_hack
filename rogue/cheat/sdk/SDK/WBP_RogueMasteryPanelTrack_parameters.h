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

// Function WBP_RogueMasteryPanelTrack.WBP_RogueMasteryPanelTrack_C.DisplayGamepadFocus
struct UWBP_RogueMasteryPanelTrack_C_DisplayGamepadFocus_Params
{
	bool                                               ShouldDisplayFocus;                                        // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function WBP_RogueMasteryPanelTrack.WBP_RogueMasteryPanelTrack_C.UpdateSelectedTier
struct UWBP_RogueMasteryPanelTrack_C_UpdateSelectedTier_Params
{
};

// Function WBP_RogueMasteryPanelTrack.WBP_RogueMasteryPanelTrack_C.ViewPreviousMasteryLevel
struct UWBP_RogueMasteryPanelTrack_C_ViewPreviousMasteryLevel_Params
{
};

// Function WBP_RogueMasteryPanelTrack.WBP_RogueMasteryPanelTrack_C.ViewNextMasteryLevel
struct UWBP_RogueMasteryPanelTrack_C_ViewNextMasteryLevel_Params
{
};

// Function WBP_RogueMasteryPanelTrack.WBP_RogueMasteryPanelTrack_C.SetActiveSection
struct UWBP_RogueMasteryPanelTrack_C_SetActiveSection_Params
{
	int                                                SectionIndex;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function WBP_RogueMasteryPanelTrack.WBP_RogueMasteryPanelTrack_C.UpdateSectionViewed
struct UWBP_RogueMasteryPanelTrack_C_UpdateSectionViewed_Params
{
};

// Function WBP_RogueMasteryPanelTrack.WBP_RogueMasteryPanelTrack_C.OnInputStateChanged
struct UWBP_RogueMasteryPanelTrack_C_OnInputStateChanged_Params
{
	TEnumAsByte<PlatformGameFramework_EPGAME_INPUT_STATE> InputState;                                                // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function WBP_RogueMasteryPanelTrack.WBP_RogueMasteryPanelTrack_C.OnMasteryLevelSelected
struct UWBP_RogueMasteryPanelTrack_C_OnMasteryLevelSelected_Params
{
	struct FActivityTier                               ActivityTier;                                              // 0x0000(0x0040)  (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function WBP_RogueMasteryPanelTrack.WBP_RogueMasteryPanelTrack_C.SetupPersonalProgress
struct UWBP_RogueMasteryPanelTrack_C_SetupPersonalProgress_Params
{
	class UKSJobItem*                                  JobItem;                                                   // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UKSActivityInstance*                         ActivityInstance;                                          // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function WBP_RogueMasteryPanelTrack.WBP_RogueMasteryPanelTrack_C.SetupTrackSections
struct UWBP_RogueMasteryPanelTrack_C_SetupTrackSections_Params
{
	TArray<struct FMasterySectionData>                 SectionData;                                               // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, HasGetValueTypeHash)
	int                                                CurrentTier;                                               // 0x0010(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function WBP_RogueMasteryPanelTrack.WBP_RogueMasteryPanelTrack_C.SetTrackData
struct UWBP_RogueMasteryPanelTrack_C_SetTrackData_Params
{
	class UKSJobItem*                                  JobItem;                                                   // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<struct FMasterySectionData>                 SectionData;                                               // 0x0008(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, HasGetValueTypeHash)
};

// Function WBP_RogueMasteryPanelTrack.WBP_RogueMasteryPanelTrack_C.Construct
struct UWBP_RogueMasteryPanelTrack_C_Construct_Params
{
};

// Function WBP_RogueMasteryPanelTrack.WBP_RogueMasteryPanelTrack_C.BndEvt__ScrollRightButton_K2Node_ComponentBoundEvent_0_OnBtnClicked__DelegateSignature
struct UWBP_RogueMasteryPanelTrack_C_BndEvt__ScrollRightButton_K2Node_ComponentBoundEvent_0_OnBtnClicked__DelegateSignature_Params
{
};

// Function WBP_RogueMasteryPanelTrack.WBP_RogueMasteryPanelTrack_C.BndEvt__ScrollLeftButton_K2Node_ComponentBoundEvent_1_OnBtnClicked__DelegateSignature
struct UWBP_RogueMasteryPanelTrack_C_BndEvt__ScrollLeftButton_K2Node_ComponentBoundEvent_1_OnBtnClicked__DelegateSignature_Params
{
};

// Function WBP_RogueMasteryPanelTrack.WBP_RogueMasteryPanelTrack_C.InitializeWidget
struct UWBP_RogueMasteryPanelTrack_C_InitializeWidget_Params
{
	class APUMG_HUD*                                   HUD;                                                       // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function WBP_RogueMasteryPanelTrack.WBP_RogueMasteryPanelTrack_C.ExecuteUbergraph_WBP_RogueMasteryPanelTrack
struct UWBP_RogueMasteryPanelTrack_C_ExecuteUbergraph_WBP_RogueMasteryPanelTrack_Params
{
	int                                                EntryPoint;                                                // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function WBP_RogueMasteryPanelTrack.WBP_RogueMasteryPanelTrack_C.OnViewPreviousMasteryLevelFailed__DelegateSignature
struct UWBP_RogueMasteryPanelTrack_C_OnViewPreviousMasteryLevelFailed__DelegateSignature_Params
{
};

// Function WBP_RogueMasteryPanelTrack.WBP_RogueMasteryPanelTrack_C.OnPrestiegeSelected__DelegateSignature
struct UWBP_RogueMasteryPanelTrack_C_OnPrestiegeSelected__DelegateSignature_Params
{
};

// Function WBP_RogueMasteryPanelTrack.WBP_RogueMasteryPanelTrack_C.OnMasteryLevelSelectedEvent__DelegateSignature
struct UWBP_RogueMasteryPanelTrack_C_OnMasteryLevelSelectedEvent__DelegateSignature_Params
{
	struct FActivityTier                               ActivityTier;                                              // 0x0000(0x0040)  (BlueprintVisible, BlueprintReadOnly, Parm)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
