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

// Function WBP_ItemInfoContainer_Centered.WBP_ItemInfoContainer_Centered_C.Refresh Rarity Text
struct UWBP_ItemInfoContainer_Centered_C_Refresh_Rarity_Text_Params
{
};

// Function WBP_ItemInfoContainer_Centered.WBP_ItemInfoContainer_Centered_C.SetItemRarityInfo
struct UWBP_ItemInfoContainer_Centered_C_SetItemRarityInfo_Params
{
	struct FGameplayTagContainer                       RarityTag;                                                 // 0x0000(0x0020)  (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function WBP_ItemInfoContainer_Centered.WBP_ItemInfoContainer_Centered_C.SetInfoFieldData
struct UWBP_ItemInfoContainer_Centered_C_SetInfoFieldData_Params
{
	class UPUMG_StoreItem*                             StoreItem;                                                 // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                Quantity;                                                  // 0x0008(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function WBP_ItemInfoContainer_Centered.WBP_ItemInfoContainer_Centered_C.PreConstruct
struct UWBP_ItemInfoContainer_Centered_C_PreConstruct_Params
{
	bool                                               IsDesignTime;                                              // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function WBP_ItemInfoContainer_Centered.WBP_ItemInfoContainer_Centered_C.ExecuteUbergraph_WBP_ItemInfoContainer_Centered
struct UWBP_ItemInfoContainer_Centered_C_ExecuteUbergraph_WBP_ItemInfoContainer_Centered_Params
{
	int                                                EntryPoint;                                                // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
