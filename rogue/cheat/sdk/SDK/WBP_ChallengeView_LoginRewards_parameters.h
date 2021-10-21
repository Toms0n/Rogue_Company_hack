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

// Function WBP_ChallengeView_LoginRewards.WBP_ChallengeView_LoginRewards_C.BindRewardGridEvents
struct UWBP_ChallengeView_LoginRewards_C_BindRewardGridEvents_Params
{
};

// Function WBP_ChallengeView_LoginRewards.WBP_ChallengeView_LoginRewards_C.HandleRewardItemUnhovered
struct UWBP_ChallengeView_LoginRewards_C_HandleRewardItemUnhovered_Params
{
};

// Function WBP_ChallengeView_LoginRewards.WBP_ChallengeView_LoginRewards_C.HandleRewardItemHovered
struct UWBP_ChallengeView_LoginRewards_C_HandleRewardItemHovered_Params
{
	class UWBP_LoginRewardItem_C*                      RewardItemWidget;                                          // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function WBP_ChallengeView_LoginRewards.WBP_ChallengeView_LoginRewards_C.BindRewardItems
struct UWBP_ChallengeView_LoginRewards_C_BindRewardItems_Params
{
};

// Function WBP_ChallengeView_LoginRewards.WBP_ChallengeView_LoginRewards_C.SetupRewardItems
struct UWBP_ChallengeView_LoginRewards_C_SetupRewardItems_Params
{
};

// Function WBP_ChallengeView_LoginRewards.WBP_ChallengeView_LoginRewards_C.ResetRewardItemsNavigation
struct UWBP_ChallengeView_LoginRewards_C_ResetRewardItemsNavigation_Params
{
};

// Function WBP_ChallengeView_LoginRewards.WBP_ChallengeView_LoginRewards_C.SetRewardItemNavigation
struct UWBP_ChallengeView_LoginRewards_C_SetRewardItemNavigation_Params
{
};

// Function WBP_ChallengeView_LoginRewards.WBP_ChallengeView_LoginRewards_C.HandleRewardItemsReady
struct UWBP_ChallengeView_LoginRewards_C_HandleRewardItemsReady_Params
{
	TArray<struct FLoginRewardItem>                    RewardItems;                                               // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, HasGetValueTypeHash)
};

// Function WBP_ChallengeView_LoginRewards.WBP_ChallengeView_LoginRewards_C.Construct
struct UWBP_ChallengeView_LoginRewards_C_Construct_Params
{
};

// Function WBP_ChallengeView_LoginRewards.WBP_ChallengeView_LoginRewards_C.InitializeWidget
struct UWBP_ChallengeView_LoginRewards_C_InitializeWidget_Params
{
	class APUMG_HUD*                                   HUD;                                                       // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function WBP_ChallengeView_LoginRewards.WBP_ChallengeView_LoginRewards_C.InitializeWidgetNavigation
struct UWBP_ChallengeView_LoginRewards_C_InitializeWidgetNavigation_Params
{
};

// Function WBP_ChallengeView_LoginRewards.WBP_ChallengeView_LoginRewards_C.ExecuteUbergraph_WBP_ChallengeView_LoginRewards
struct UWBP_ChallengeView_LoginRewards_C_ExecuteUbergraph_WBP_ChallengeView_LoginRewards_Params
{
	int                                                EntryPoint;                                                // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
