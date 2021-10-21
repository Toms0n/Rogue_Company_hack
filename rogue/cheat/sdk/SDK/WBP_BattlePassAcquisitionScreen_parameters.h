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

// Function WBP_BattlePassAcquisitionScreen.WBP_BattlePassAcquisitionScreen_C.HandleOnUpsellButton
struct UWBP_BattlePassAcquisitionScreen_C_HandleOnUpsellButton_Params
{
};

// Function WBP_BattlePassAcquisitionScreen.WBP_BattlePassAcquisitionScreen_C.NavigateConfirm
struct UWBP_BattlePassAcquisitionScreen_C_NavigateConfirm_Params
{
	bool                                               ReturnValue;                                               // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
};

// Function WBP_BattlePassAcquisitionScreen.WBP_BattlePassAcquisitionScreen_C.OnKeyDown
struct UWBP_BattlePassAcquisitionScreen_C_OnKeyDown_Params
{
	struct FGeometry                                   MyGeometry;                                                // 0x0000(0x0058)  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	struct FKeyEvent                                   InKeyEvent;                                                // 0x0058(0x0038)  (BlueprintVisible, BlueprintReadOnly, Parm)
	struct FEventReply                                 ReturnValue;                                               // 0x0090(0x00C0)  (Parm, OutParm, ReturnParm)
};

// Function WBP_BattlePassAcquisitionScreen.WBP_BattlePassAcquisitionScreen_C.NavigateBack
struct UWBP_BattlePassAcquisitionScreen_C_NavigateBack_Params
{
	bool                                               ReturnValue;                                               // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
};

// Function WBP_BattlePassAcquisitionScreen.WBP_BattlePassAcquisitionScreen_C.HandleOnRewardButtonClicked
struct UWBP_BattlePassAcquisitionScreen_C_HandleOnRewardButtonClicked_Params
{
	class UWBP_RewardListEntry_C*                      Widget;                                                    // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FCosmeticSlotDetails                        RewardSlotDetails;                                         // 0x0008(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)
	class UPUMG_StoreItem*                             StoreItem;                                                 // 0x0020(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function WBP_BattlePassAcquisitionScreen.WBP_BattlePassAcquisitionScreen_C.HandleOnPageNavigated
struct UWBP_BattlePassAcquisitionScreen_C_HandleOnPageNavigated_Params
{
	int                                                Direction;                                                 // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function WBP_BattlePassAcquisitionScreen.WBP_BattlePassAcquisitionScreen_C.OnTransitionFinished
struct UWBP_BattlePassAcquisitionScreen_C_OnTransitionFinished_Params
{
};

// Function WBP_BattlePassAcquisitionScreen.WBP_BattlePassAcquisitionScreen_C.DisplayUpsellState
struct UWBP_BattlePassAcquisitionScreen_C_DisplayUpsellState_Params
{
};

// Function WBP_BattlePassAcquisitionScreen.WBP_BattlePassAcquisitionScreen_C.SetAcquisitionDisplay
struct UWBP_BattlePassAcquisitionScreen_C_SetAcquisitionDisplay_Params
{
	class UKSAcquisition*                              Acquisition;                                               // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function WBP_BattlePassAcquisitionScreen.WBP_BattlePassAcquisitionScreen_C.Construct
struct UWBP_BattlePassAcquisitionScreen_C_Construct_Params
{
};

// Function WBP_BattlePassAcquisitionScreen.WBP_BattlePassAcquisitionScreen_C.OnShown
struct UWBP_BattlePassAcquisitionScreen_C_OnShown_Params
{
};

// Function WBP_BattlePassAcquisitionScreen.WBP_BattlePassAcquisitionScreen_C.InitializeWidget
struct UWBP_BattlePassAcquisitionScreen_C_InitializeWidget_Params
{
	class APUMG_HUD*                                   HUD;                                                       // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function WBP_BattlePassAcquisitionScreen.WBP_BattlePassAcquisitionScreen_C.OnAcceptPrompt
struct UWBP_BattlePassAcquisitionScreen_C_OnAcceptPrompt_Params
{
};

// Function WBP_BattlePassAcquisitionScreen.WBP_BattlePassAcquisitionScreen_C.InitializeWidgetNavigation
struct UWBP_BattlePassAcquisitionScreen_C_InitializeWidgetNavigation_Params
{
};

// Function WBP_BattlePassAcquisitionScreen.WBP_BattlePassAcquisitionScreen_C.FocusGroupNavigateRightFailure
struct UWBP_BattlePassAcquisitionScreen_C_FocusGroupNavigateRightFailure_Params
{
	int                                                FocusGroup;                                                // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function WBP_BattlePassAcquisitionScreen.WBP_BattlePassAcquisitionScreen_C.FocusGroupNavigateLeftFailure
struct UWBP_BattlePassAcquisitionScreen_C_FocusGroupNavigateLeftFailure_Params
{
	int                                                FocusGroup;                                                // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function WBP_BattlePassAcquisitionScreen.WBP_BattlePassAcquisitionScreen_C.OnHide
struct UWBP_BattlePassAcquisitionScreen_C_OnHide_Params
{
};

// Function WBP_BattlePassAcquisitionScreen.WBP_BattlePassAcquisitionScreen_C.OnCycle
struct UWBP_BattlePassAcquisitionScreen_C_OnCycle_Params
{
	bool                                               bNext;                                                     // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function WBP_BattlePassAcquisitionScreen.WBP_BattlePassAcquisitionScreen_C.ExecuteUbergraph_WBP_BattlePassAcquisitionScreen
struct UWBP_BattlePassAcquisitionScreen_C_ExecuteUbergraph_WBP_BattlePassAcquisitionScreen_Params
{
	int                                                EntryPoint;                                                // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function WBP_BattlePassAcquisitionScreen.WBP_BattlePassAcquisitionScreen_C.PlayPremiumTransition__DelegateSignature
struct UWBP_BattlePassAcquisitionScreen_C_PlayPremiumTransition__DelegateSignature_Params
{
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
