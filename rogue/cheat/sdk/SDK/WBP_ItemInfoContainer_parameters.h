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

// Function WBP_ItemInfoContainer.WBP_ItemInfoContainer_C.SetDefault
struct UWBP_ItemInfoContainer_C_SetDefault_Params
{
	struct FText                                       DefaultText;                                               // 0x0000(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function WBP_ItemInfoContainer.WBP_ItemInfoContainer_C.SetAlignment
struct UWBP_ItemInfoContainer_C_SetAlignment_Params
{
};

// Function WBP_ItemInfoContainer.WBP_ItemInfoContainer_C.SetItemRarityInfo
struct UWBP_ItemInfoContainer_C_SetItemRarityInfo_Params
{
	class UPlatformInventoryItem*                      CosmeticItem;                                              // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function WBP_ItemInfoContainer.WBP_ItemInfoContainer_C.SetInfoFieldData
struct UWBP_ItemInfoContainer_C_SetInfoFieldData_Params
{
	class UPlatformInventoryItem*                      CosmeticItem;                                              // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function WBP_ItemInfoContainer.WBP_ItemInfoContainer_C.PreConstruct
struct UWBP_ItemInfoContainer_C_PreConstruct_Params
{
	bool                                               IsDesignTime;                                              // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function WBP_ItemInfoContainer.WBP_ItemInfoContainer_C.Construct
struct UWBP_ItemInfoContainer_C_Construct_Params
{
};

// Function WBP_ItemInfoContainer.WBP_ItemInfoContainer_C.ExecuteUbergraph_WBP_ItemInfoContainer
struct UWBP_ItemInfoContainer_C_ExecuteUbergraph_WBP_ItemInfoContainer_Params
{
	int                                                EntryPoint;                                                // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
