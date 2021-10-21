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
// Classes
//---------------------------------------------------------------------------

// Class PlatformInventoryItem.ItemCollection
// 0x0068 (FullSize[0x0098] - InheritedSize[0x0030])
class UItemCollection : public UPrimaryDataAsset
{
public:
	struct FPrimaryAssetRules                          Rules;                                                     // 0x0030(0x000C) (Edit, NoDestructor, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_KCND[0x4];                                     // 0x003C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FGameplayTagQuery                           CollectionQuery;                                           // 0x0040(0x0048) (Edit, NativeAccessSpecifierPublic)
	struct FName                                       PrimaryAssetType;                                          // 0x0088(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, AssetRegistrySearchable, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_RHAK[0x8];                                     // 0x0090(0x0008) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::GetObjectCasted<UClass>(183);
		return ptr;
	}



};

// Class PlatformInventoryItem.PInv_AssetManager
// 0x0288 (FullSize[0x06C8] - InheritedSize[0x0440])
class UPInv_AssetManager : public UAssetManager
{
public:
	unsigned char                                      UnknownData_NZFN[0xA0];                                    // 0x0440(0x00A0) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	bool                                               bHasCompletedInitialAssetScan;                             // 0x04E0(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData_0AZQ[0x1E7];                                   // 0x04E1(0x01E7) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::GetObjectCasted<UClass>(185);
		return ptr;
	}



};

// Class PlatformInventoryItem.PlatformInventoryItem
// 0x0188 (FullSize[0x01B8] - InheritedSize[0x0030])
class UPlatformInventoryItem : public UPrimaryDataAsset
{
public:
	int                                                ItemId;                                                    // 0x0030(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, DuplicateTransient, IsPlainOldData, NoDestructor, AssetRegistrySearchable, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_L9ED[0x4];                                     // 0x0034(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FText                                       ItemDisplayName;                                           // 0x0038(0x0018) (Edit, DisableEditOnInstance, DuplicateTransient, AssetRegistrySearchable, Protected, NativeAccessSpecifierProtected)
	struct FText                                       ItemDescription;                                           // 0x0050(0x0018) (Edit, DisableEditOnInstance, DuplicateTransient, AssetRegistrySearchable, Protected, NativeAccessSpecifierProtected)
	struct FString                                     FriendlySearchName;                                        // 0x0068(0x0010) (Edit, ZeroConstructor, DisableEditOnInstance, DuplicateTransient, AssetRegistrySearchable, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                               IsOwnableInventoryItem;                                    // 0x0078(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, AssetRegistrySearchable, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_9R8I[0x7];                                     // 0x0079(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	TArray<int64_t>                                    DisplayableLootIds;                                        // 0x0080(0x0010) (Edit, ZeroConstructor, DisableEditOnInstance, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      ItemIcon[0x28];                                            // 0x0090(0x0028) UNKNOWN PROPERTY: SoftObjectProperty
	struct FSoftObjectPath                             ItemIconPath;                                              // 0x00B8(0x0018) (Edit, ZeroConstructor, DisableEditOnInstance, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      LegacyItemIconTexture[0x28];                               // 0x00D0(0x0028) UNKNOWN PROPERTY: SoftObjectProperty
	TArray<struct FIconReference>                      Icons;                                                     // 0x00F8(0x0010) (Edit, ZeroConstructor, DisableEditOnInstance, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	struct FGameplayTagContainer                       CollectionContainer;                                       // 0x0108(0x0020) (Edit, Config, DisableEditOnInstance, AssetRegistrySearchable, Protected, NativeAccessSpecifierProtected)
	TMap<PlatformInventoryItem_EExternalSkuSource, struct FString> ExternalProductSkus;                                       // 0x0128(0x0050) (Edit, DisableEditOnInstance, Protected, NativeAccessSpecifierProtected)
	bool                                               OnlyDisplayAcqusitionIfWhitelisted;                        // 0x0178(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_BB02[0x7];                                     // 0x0179(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	TArray<int64_t>                                    BlackListedLootIds;                                        // 0x0180(0x0010) (Edit, ZeroConstructor, DisableEditOnInstance, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_HWJL[0x28];                                    // 0x0190(0x0028) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::GetObjectCasted<UClass>(186);
		return ptr;
	}



	bool ShouldDisplayToUser(int64_t LootId);
	void SetFriendlySearchName(const struct FString& InFriendlyName);
	void SetCollectionContainer(const struct FGameplayTagContainer& InContainer);
	bool IsItemTempDisabled();
	bool IsItemDisabled(bool bIncludeTempDisabled);
	void GetTextureAsync(const struct FScriptDelegate& IconLoadedEvent);
	struct FSoftObjectPath GetSoftItemIconAsPath();
	void GetSoftItemIcon();
	bool GetSoftIconByName(const struct FName& IconType);
	bool GetSoftIconAsPathByName(const struct FName& IconType, struct FSoftObjectPath* Icon);
	struct FString GetItemNameAsString();
	struct FText GetItemName();
	int GetItemId();
	struct FString GetItemDescriptionAsString();
	struct FText GetItemDescription();
	void STATIC_GetItemByFriendlyName(const struct FString& InFriendlyName);
	struct FGameplayTagContainer GetCollectionContainer();
};

// Class PlatformInventoryItem.PlatformStoreAsset
// 0x0010 (FullSize[0x01C8] - InheritedSize[0x01B8])
class UPlatformStoreAsset : public UPlatformInventoryItem
{
public:
	int                                                LootId;                                                    // 0x01B8(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, DuplicateTransient, IsPlainOldData, NoDestructor, AssetRegistrySearchable, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	struct FPrimaryAssetRules                          Rules;                                                     // 0x01BC(0x000C) (Edit, NoDestructor, NativeAccessSpecifierPublic)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::GetObjectCasted<UClass>(187);
		return ptr;
	}



	int GetLootId();
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
