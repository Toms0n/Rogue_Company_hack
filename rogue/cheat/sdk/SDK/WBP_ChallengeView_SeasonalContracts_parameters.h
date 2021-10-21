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

// Function WBP_ChallengeView_SeasonalContracts.WBP_ChallengeView_SeasonalContracts_C.RefreshSeasonalChallengesDescription
struct UWBP_ChallengeView_SeasonalContracts_C_RefreshSeasonalChallengesDescription_Params
{
};

// Function WBP_ChallengeView_SeasonalContracts.WBP_ChallengeView_SeasonalContracts_C.RefreshSequenceWidgets
struct UWBP_ChallengeView_SeasonalContracts_C_RefreshSequenceWidgets_Params
{
};

// Function WBP_ChallengeView_SeasonalContracts.WBP_ChallengeView_SeasonalContracts_C.GetWeeklySequenceWidgets
struct UWBP_ChallengeView_SeasonalContracts_C_GetWeeklySequenceWidgets_Params
{
	TArray<class UWBP_ChallengeEntry_Seasonal_C*>      Return_Value;                                              // 0x0000(0x0010)  (Parm, OutParm, ContainsInstancedReference, HasGetValueTypeHash)
};

// Function WBP_ChallengeView_SeasonalContracts.WBP_ChallengeView_SeasonalContracts_C.RefreshTimeRemaining
struct UWBP_ChallengeView_SeasonalContracts_C_RefreshTimeRemaining_Params
{
};

// Function WBP_ChallengeView_SeasonalContracts.WBP_ChallengeView_SeasonalContracts_C.InitializeWidget
struct UWBP_ChallengeView_SeasonalContracts_C_InitializeWidget_Params
{
	class APUMG_HUD*                                   HUD;                                                       // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function WBP_ChallengeView_SeasonalContracts.WBP_ChallengeView_SeasonalContracts_C.InitializeWidgetNavigation
struct UWBP_ChallengeView_SeasonalContracts_C_InitializeWidgetNavigation_Params
{
};

// Function WBP_ChallengeView_SeasonalContracts.WBP_ChallengeView_SeasonalContracts_C.OnChallengesUpdated
struct UWBP_ChallengeView_SeasonalContracts_C_OnChallengesUpdated_Params
{
};

// Function WBP_ChallengeView_SeasonalContracts.WBP_ChallengeView_SeasonalContracts_C.OnShown
struct UWBP_ChallengeView_SeasonalContracts_C_OnShown_Params
{
};

// Function WBP_ChallengeView_SeasonalContracts.WBP_ChallengeView_SeasonalContracts_C.Handle On Week Gamepad Hovered
struct UWBP_ChallengeView_SeasonalContracts_C_Handle_On_Week_Gamepad_Hovered_Params
{
	class UWBP_ChallengeEntry_Seasonal_C*              Hovered_Widget;                                            // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function WBP_ChallengeView_SeasonalContracts.WBP_ChallengeView_SeasonalContracts_C.ExecuteUbergraph_WBP_ChallengeView_SeasonalContracts
struct UWBP_ChallengeView_SeasonalContracts_C_ExecuteUbergraph_WBP_ChallengeView_SeasonalContracts_Params
{
	int                                                EntryPoint;                                                // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
