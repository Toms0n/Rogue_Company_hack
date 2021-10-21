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

// Function WBP_StoreItemInterior.WBP_StoreItemInterior_C.GetStoreIconForSize
struct UWBP_StoreItemInterior_C_GetStoreIconForSize_Params
{
	class UPlatformInventoryItem*                      InventoryItem;                                             // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FSoftObjectPath                             ReturnValue;                                               // 0x0008(0x0018)  (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash)
};

// Function WBP_StoreItemInterior.WBP_StoreItemInterior_C.SetRarityDisplay
struct UWBP_StoreItemInterior_C_SetRarityDisplay_Params
{
	class UPlatformInventoryItem*                      InventoryItem;                                             // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function WBP_StoreItemInterior.WBP_StoreItemInterior_C.SetStoreItem
struct UWBP_StoreItemInterior_C_SetStoreItem_Params
{
	class UKSStorePanelItem*                           StoreItem;                                                 // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function WBP_StoreItemInterior.WBP_StoreItemInterior_C.PreConstruct
struct UWBP_StoreItemInterior_C_PreConstruct_Params
{
	bool                                               IsDesignTime;                                              // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function WBP_StoreItemInterior.WBP_StoreItemInterior_C.OnParentHovered
struct UWBP_StoreItemInterior_C_OnParentHovered_Params
{
};

// Function WBP_StoreItemInterior.WBP_StoreItemInterior_C.OnParentUnhovered
struct UWBP_StoreItemInterior_C_OnParentUnhovered_Params
{
};

// Function WBP_StoreItemInterior.WBP_StoreItemInterior_C.ExecuteUbergraph_WBP_StoreItemInterior
struct UWBP_StoreItemInterior_C_ExecuteUbergraph_WBP_StoreItemInterior_Params
{
	int                                                EntryPoint;                                                // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
