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

// Function PlatformInventoryItem.PlatformInventoryItem.ShouldDisplayToUser
struct UPlatformInventoryItem_ShouldDisplayToUser_Params
{
	int64_t                                            LootId;                                                    // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               ReturnValue;                                               // 0x0008(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function PlatformInventoryItem.PlatformInventoryItem.SetFriendlySearchName
struct UPlatformInventoryItem_SetFriendlySearchName_Params
{
	struct FString                                     InFriendlyName;                                            // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function PlatformInventoryItem.PlatformInventoryItem.SetCollectionContainer
struct UPlatformInventoryItem_SetCollectionContainer_Params
{
	struct FGameplayTagContainer                       InContainer;                                               // 0x0000(0x0020)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
};

// Function PlatformInventoryItem.PlatformInventoryItem.IsItemTempDisabled
struct UPlatformInventoryItem_IsItemTempDisabled_Params
{
	bool                                               ReturnValue;                                               // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function PlatformInventoryItem.PlatformInventoryItem.IsItemDisabled
struct UPlatformInventoryItem_IsItemDisabled_Params
{
	bool                                               bIncludeTempDisabled;                                      // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               ReturnValue;                                               // 0x0001(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function PlatformInventoryItem.PlatformInventoryItem.GetTextureAsync
struct UPlatformInventoryItem_GetTextureAsync_Params
{
	struct FScriptDelegate                             IconLoadedEvent;                                           // 0x0028(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
};

// Function PlatformInventoryItem.PlatformInventoryItem.GetSoftItemIconAsPath
struct UPlatformInventoryItem_GetSoftItemIconAsPath_Params
{
	struct FSoftObjectPath                             ReturnValue;                                               // 0x0000(0x0018)  (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function PlatformInventoryItem.PlatformInventoryItem.GetSoftItemIcon
struct UPlatformInventoryItem_GetSoftItemIcon_Params
{
};

// Function PlatformInventoryItem.PlatformInventoryItem.GetSoftIconByName
struct UPlatformInventoryItem_GetSoftIconByName_Params
{
	struct FName                                       IconType;                                                  // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               ReturnValue;                                               // 0x0030(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function PlatformInventoryItem.PlatformInventoryItem.GetSoftIconAsPathByName
struct UPlatformInventoryItem_GetSoftIconAsPathByName_Params
{
	struct FName                                       IconType;                                                  // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FSoftObjectPath                             Icon;                                                      // 0x0008(0x0018)  (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               ReturnValue;                                               // 0x0020(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function PlatformInventoryItem.PlatformInventoryItem.GetItemNameAsString
struct UPlatformInventoryItem_GetItemNameAsString_Params
{
	struct FString                                     ReturnValue;                                               // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function PlatformInventoryItem.PlatformInventoryItem.GetItemName
struct UPlatformInventoryItem_GetItemName_Params
{
	struct FText                                       ReturnValue;                                               // 0x0000(0x0018)  (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
};

// Function PlatformInventoryItem.PlatformInventoryItem.GetItemId
struct UPlatformInventoryItem_GetItemId_Params
{
	int                                                ReturnValue;                                               // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function PlatformInventoryItem.PlatformInventoryItem.GetItemDescriptionAsString
struct UPlatformInventoryItem_GetItemDescriptionAsString_Params
{
	struct FString                                     ReturnValue;                                               // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function PlatformInventoryItem.PlatformInventoryItem.GetItemDescription
struct UPlatformInventoryItem_GetItemDescription_Params
{
	struct FText                                       ReturnValue;                                               // 0x0000(0x0018)  (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
};

// Function PlatformInventoryItem.PlatformInventoryItem.GetItemByFriendlyName
struct UPlatformInventoryItem_GetItemByFriendlyName_Params
{
	struct FString                                     InFriendlyName;                                            // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function PlatformInventoryItem.PlatformInventoryItem.GetCollectionContainer
struct UPlatformInventoryItem_GetCollectionContainer_Params
{
	struct FGameplayTagContainer                       ReturnValue;                                               // 0x0000(0x0020)  (ConstParm, Parm, OutParm, ReturnParm, ReferenceParm, NativeAccessSpecifierPublic)
};

// Function PlatformInventoryItem.PlatformStoreAsset.GetLootId
struct UPlatformStoreAsset_GetLootId_Params
{
	int                                                ReturnValue;                                               // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
