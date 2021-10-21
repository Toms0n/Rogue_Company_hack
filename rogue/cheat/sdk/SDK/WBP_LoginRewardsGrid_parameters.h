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

// Function WBP_LoginRewardsGrid.WBP_LoginRewardsGrid_C.GetRewardItems
struct UWBP_LoginRewardsGrid_C_GetRewardItems_Params
{
	TArray<class UWBP_LoginRewardItem_C*>              RewardItems;                                               // 0x0000(0x0010)  (Parm, OutParm, ContainsInstancedReference, HasGetValueTypeHash)
};

// Function WBP_LoginRewardsGrid.WBP_LoginRewardsGrid_C.SetMaxPerRow
struct UWBP_LoginRewardsGrid_C_SetMaxPerRow_Params
{
	int                                                Num;                                                       // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function WBP_LoginRewardsGrid.WBP_LoginRewardsGrid_C.GetRewardItemAtIndex
struct UWBP_LoginRewardsGrid_C_GetRewardItemAtIndex_Params
{
	int                                                Index;                                                     // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UWBP_LoginRewardItem_C*                      RewardItem;                                                // 0x0008(0x0008)  (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function WBP_LoginRewardsGrid.WBP_LoginRewardsGrid_C.HandleClaimRewardAnimFinished
struct UWBP_LoginRewardsGrid_C_HandleClaimRewardAnimFinished_Params
{
};

// Function WBP_LoginRewardsGrid.WBP_LoginRewardsGrid_C.ResetGrid
struct UWBP_LoginRewardsGrid_C_ResetGrid_Params
{
};

// Function WBP_LoginRewardsGrid.WBP_LoginRewardsGrid_C.PopulateRewardGrid
struct UWBP_LoginRewardsGrid_C_PopulateRewardGrid_Params
{
	TArray<struct FLoginRewardItem>                    RewardItems;                                               // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, HasGetValueTypeHash)
	bool                                               AllowClaimReward;                                          // 0x0010(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function WBP_LoginRewardsGrid.WBP_LoginRewardsGrid_C.HandleOnRewardHovered
struct UWBP_LoginRewardsGrid_C_HandleOnRewardHovered_Params
{
	class UWBP_LoginRewardItem_C*                      RewardItemWidget;                                          // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function WBP_LoginRewardsGrid.WBP_LoginRewardsGrid_C.HandleOnRewardUnhovered
struct UWBP_LoginRewardsGrid_C_HandleOnRewardUnhovered_Params
{
};

// Function WBP_LoginRewardsGrid.WBP_LoginRewardsGrid_C.HandleOnRewardClicked
struct UWBP_LoginRewardsGrid_C_HandleOnRewardClicked_Params
{
	struct FLoginRewardItem                            RewardItem;                                                // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
};

// Function WBP_LoginRewardsGrid.WBP_LoginRewardsGrid_C.ExecuteUbergraph_WBP_LoginRewardsGrid
struct UWBP_LoginRewardsGrid_C_ExecuteUbergraph_WBP_LoginRewardsGrid_Params
{
	int                                                EntryPoint;                                                // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function WBP_LoginRewardsGrid.WBP_LoginRewardsGrid_C.OnRewardClicked__DelegateSignature
struct UWBP_LoginRewardsGrid_C_OnRewardClicked__DelegateSignature_Params
{
	struct FLoginRewardItem                            RewardItem;                                                // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
};

// Function WBP_LoginRewardsGrid.WBP_LoginRewardsGrid_C.OnRewardUnhovered__DelegateSignature
struct UWBP_LoginRewardsGrid_C_OnRewardUnhovered__DelegateSignature_Params
{
};

// Function WBP_LoginRewardsGrid.WBP_LoginRewardsGrid_C.OnRewardHovered__DelegateSignature
struct UWBP_LoginRewardsGrid_C_OnRewardHovered__DelegateSignature_Params
{
	class UWBP_LoginRewardItem_C*                      Widget;                                                    // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function WBP_LoginRewardsGrid.WBP_LoginRewardsGrid_C.OnRewardItemsPopulated__DelegateSignature
struct UWBP_LoginRewardsGrid_C_OnRewardItemsPopulated__DelegateSignature_Params
{
};

// Function WBP_LoginRewardsGrid.WBP_LoginRewardsGrid_C.OnClaimRewardAnimComplete__DelegateSignature
struct UWBP_LoginRewardsGrid_C_OnClaimRewardAnimComplete__DelegateSignature_Params
{
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
