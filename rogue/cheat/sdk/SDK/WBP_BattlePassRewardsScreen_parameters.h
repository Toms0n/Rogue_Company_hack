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

// Function WBP_BattlePassRewardsScreen.WBP_BattlePassRewardsScreen_C.OnPurchaseBattlepass
struct UWBP_BattlePassRewardsScreen_C_OnPurchaseBattlepass_Params
{
};

// Function WBP_BattlePassRewardsScreen.WBP_BattlePassRewardsScreen_C.GetRewardEntryFromPendingRouteData
struct UWBP_BattlePassRewardsScreen_C_GetRewardEntryFromPendingRouteData_Params
{
	class UWBP_RewardListEntry_C*                      RewardEntry;                                               // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function WBP_BattlePassRewardsScreen.WBP_BattlePassRewardsScreen_C.HandleOnLevelPurchase
struct UWBP_BattlePassRewardsScreen_C_HandleOnLevelPurchase_Params
{
};

// Function WBP_BattlePassRewardsScreen.WBP_BattlePassRewardsScreen_C.HandleOnBattlePassOffers
struct UWBP_BattlePassRewardsScreen_C_HandleOnBattlePassOffers_Params
{
};

// Function WBP_BattlePassRewardsScreen.WBP_BattlePassRewardsScreen_C.HandleOnPageNavigated
struct UWBP_BattlePassRewardsScreen_C_HandleOnPageNavigated_Params
{
	int                                                Direction;                                                 // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function WBP_BattlePassRewardsScreen.WBP_BattlePassRewardsScreen_C.Select Initial Item
struct UWBP_BattlePassRewardsScreen_C_Select_Initial_Item_Params
{
};

// Function WBP_BattlePassRewardsScreen.WBP_BattlePassRewardsScreen_C.OnRewardButtonClicked
struct UWBP_BattlePassRewardsScreen_C_OnRewardButtonClicked_Params
{
	class UWBP_RewardListEntry_C*                      Widget;                                                    // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FCosmeticSlotDetails                        RewardSlotDetails;                                         // 0x0008(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)
	class UPUMG_StoreItem*                             StoreItem;                                                 // 0x0020(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function WBP_BattlePassRewardsScreen.WBP_BattlePassRewardsScreen_C.NavigateBack
struct UWBP_BattlePassRewardsScreen_C_NavigateBack_Params
{
	bool                                               ReturnValue;                                               // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
};

// Function WBP_BattlePassRewardsScreen.WBP_BattlePassRewardsScreen_C.PerformInitialSetup
struct UWBP_BattlePassRewardsScreen_C_PerformInitialSetup_Params
{
};

// Function WBP_BattlePassRewardsScreen.WBP_BattlePassRewardsScreen_C.OnShown
struct UWBP_BattlePassRewardsScreen_C_OnShown_Params
{
};

// Function WBP_BattlePassRewardsScreen.WBP_BattlePassRewardsScreen_C.InitializeWidget
struct UWBP_BattlePassRewardsScreen_C_InitializeWidget_Params
{
	class APUMG_HUD*                                   HUD;                                                       // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function WBP_BattlePassRewardsScreen.WBP_BattlePassRewardsScreen_C.OnBackPrompt
struct UWBP_BattlePassRewardsScreen_C_OnBackPrompt_Params
{
};

// Function WBP_BattlePassRewardsScreen.WBP_BattlePassRewardsScreen_C.InitializeWidgetNavigation
struct UWBP_BattlePassRewardsScreen_C_InitializeWidgetNavigation_Params
{
};

// Function WBP_BattlePassRewardsScreen.WBP_BattlePassRewardsScreen_C.FocusGroupNavigateRightFailure
struct UWBP_BattlePassRewardsScreen_C_FocusGroupNavigateRightFailure_Params
{
	int                                                FocusGroup;                                                // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function WBP_BattlePassRewardsScreen.WBP_BattlePassRewardsScreen_C.FocusGroupNavigateLeftFailure
struct UWBP_BattlePassRewardsScreen_C_FocusGroupNavigateLeftFailure_Params
{
	int                                                FocusGroup;                                                // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function WBP_BattlePassRewardsScreen.WBP_BattlePassRewardsScreen_C.OnHide
struct UWBP_BattlePassRewardsScreen_C_OnHide_Params
{
};

// Function WBP_BattlePassRewardsScreen.WBP_BattlePassRewardsScreen_C.OnCycle
struct UWBP_BattlePassRewardsScreen_C_OnCycle_Params
{
	bool                                               bNext;                                                     // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function WBP_BattlePassRewardsScreen.WBP_BattlePassRewardsScreen_C.ExecuteUbergraph_WBP_BattlePassRewardsScreen
struct UWBP_BattlePassRewardsScreen_C_ExecuteUbergraph_WBP_BattlePassRewardsScreen_Params
{
	int                                                EntryPoint;                                                // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
