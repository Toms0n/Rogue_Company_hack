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

// Function WBP_LoginRewards_ClaimScreen.WBP_LoginRewards_ClaimScreen_C.PlayClaimedRewardAnim
struct UWBP_LoginRewards_ClaimScreen_C_PlayClaimedRewardAnim_Params
{
};

// Function WBP_LoginRewards_ClaimScreen.WBP_LoginRewards_ClaimScreen_C.HandleRewardsReady
struct UWBP_LoginRewards_ClaimScreen_C_HandleRewardsReady_Params
{
	TArray<struct FLoginRewardItem>                    RewardItems;                                               // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, HasGetValueTypeHash)
};

// Function WBP_LoginRewards_ClaimScreen.WBP_LoginRewards_ClaimScreen_C.Construct
struct UWBP_LoginRewards_ClaimScreen_C_Construct_Params
{
};

// Function WBP_LoginRewards_ClaimScreen.WBP_LoginRewards_ClaimScreen_C.InitializeWidget
struct UWBP_LoginRewards_ClaimScreen_C_InitializeWidget_Params
{
	class APUMG_HUD*                                   HUD;                                                       // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function WBP_LoginRewards_ClaimScreen.WBP_LoginRewards_ClaimScreen_C.BndEvt__WBP_StandardButtonLarge_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature
struct UWBP_LoginRewards_ClaimScreen_C_BndEvt__WBP_StandardButtonLarge_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature_Params
{
	class UWidget*                                     Widget;                                                    // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function WBP_LoginRewards_ClaimScreen.WBP_LoginRewards_ClaimScreen_C.CloseLoginClaimScreen
struct UWBP_LoginRewards_ClaimScreen_C_CloseLoginClaimScreen_Params
{
};

// Function WBP_LoginRewards_ClaimScreen.WBP_LoginRewards_ClaimScreen_C.OnShown
struct UWBP_LoginRewards_ClaimScreen_C_OnShown_Params
{
};

// Function WBP_LoginRewards_ClaimScreen.WBP_LoginRewards_ClaimScreen_C.InitializeWidgetNavigation
struct UWBP_LoginRewards_ClaimScreen_C_InitializeWidgetNavigation_Params
{
};

// Function WBP_LoginRewards_ClaimScreen.WBP_LoginRewards_ClaimScreen_C.ExecuteUbergraph_WBP_LoginRewards_ClaimScreen
struct UWBP_LoginRewards_ClaimScreen_C_ExecuteUbergraph_WBP_LoginRewards_ClaimScreen_Params
{
	int                                                EntryPoint;                                                // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
