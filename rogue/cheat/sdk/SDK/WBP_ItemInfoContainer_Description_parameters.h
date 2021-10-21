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

// Function WBP_ItemInfoContainer_Description.WBP_ItemInfoContainer_Description_C.SetInfoFieldDataFromInventoryItem
struct UWBP_ItemInfoContainer_Description_C_SetInfoFieldDataFromInventoryItem_Params
{
	class UPlatformInventoryItem*                      InventoryItem;                                             // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function WBP_ItemInfoContainer_Description.WBP_ItemInfoContainer_Description_C.SetAlignment
struct UWBP_ItemInfoContainer_Description_C_SetAlignment_Params
{
};

// Function WBP_ItemInfoContainer_Description.WBP_ItemInfoContainer_Description_C.SetItemRarityInfo
struct UWBP_ItemInfoContainer_Description_C_SetItemRarityInfo_Params
{
	class UPlatformInventoryItem*                      CosmeticItem;                                              // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function WBP_ItemInfoContainer_Description.WBP_ItemInfoContainer_Description_C.SetInfoFieldData
struct UWBP_ItemInfoContainer_Description_C_SetInfoFieldData_Params
{
	class UPUMG_StoreItem*                             StoreItem;                                                 // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                Quantity;                                                  // 0x0008(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function WBP_ItemInfoContainer_Description.WBP_ItemInfoContainer_Description_C.PreConstruct
struct UWBP_ItemInfoContainer_Description_C_PreConstruct_Params
{
	bool                                               IsDesignTime;                                              // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function WBP_ItemInfoContainer_Description.WBP_ItemInfoContainer_Description_C.Construct
struct UWBP_ItemInfoContainer_Description_C_Construct_Params
{
};

// Function WBP_ItemInfoContainer_Description.WBP_ItemInfoContainer_Description_C.ExecuteUbergraph_WBP_ItemInfoContainer_Description
struct UWBP_ItemInfoContainer_Description_C_ExecuteUbergraph_WBP_ItemInfoContainer_Description_Params
{
	int                                                EntryPoint;                                                // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
