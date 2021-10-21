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

// Function WBP_RogueMasteryRewardIcon.WBP_RogueMasteryRewardIcon_C.SetFromTagContainer
struct UWBP_RogueMasteryRewardIcon_C_SetFromTagContainer_Params
{
	struct FGameplayTagContainer                       GameplayTagContainer;                                      // 0x0000(0x0020)  (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function WBP_RogueMasteryRewardIcon.WBP_RogueMasteryRewardIcon_C.SetFromRarity
struct UWBP_RogueMasteryRewardIcon_C_SetFromRarity_Params
{
	struct FGameplayTag                                RarityTag;                                                 // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)
};

// Function WBP_RogueMasteryRewardIcon.WBP_RogueMasteryRewardIcon_C.SetRewardItem
struct UWBP_RogueMasteryRewardIcon_C_SetRewardItem_Params
{
	class UPUMG_StoreItem*                             StoreItem;                                                 // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
