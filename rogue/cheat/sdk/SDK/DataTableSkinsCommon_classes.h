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

// Class DataTableSkinsCommon.DynamicSkinTable
// 0x0270 (FullSize[0x0298] - InheritedSize[0x0028])
class UDynamicSkinTable : public UObject
{
public:
	TArray<struct FDataTableInfo>                      ActiveDataTables;                                          // 0x0028(0x0010) (ZeroConstructor, Transient, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<struct FDataTableInfo>                      InactiveDataTables;                                        // 0x0038(0x0010) (ZeroConstructor, Transient, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FScriptMulticastDelegate                    OnFinishedAllPendingLoadsDel;                              // 0x0048(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_FO19[0x220];                                   // 0x0058(0x0220) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	unsigned char                                      bWantsToBeRecycled : 1;                                    // 0x0278(0x0001) BIT_FIELD (Transient, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData_ONWG[0x7];                                     // 0x0279(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	unsigned char                                      SkinTagAsset[0x10];                                        // 0x0279(0x0010) UNKNOWN PROPERTY: InterfaceProperty
	unsigned char                                      UnknownData_0WGB[0x8];                                     // 0x0290(0x0008) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::GetObjectCasted<UClass>(374);
		return ptr;
	}



	void RemoveDataTables(TArray<class UDataTable*> InTables);
	void RemoveDataTable(class UDataTable* InTable);
	bool IsTablePendingAssetLoad();
	class UTexture* GetTexture(const struct FName& RowName, int* Priority);
	class UStaticMesh* GetStaticMesh(const struct FName& RowName, int* Priority);
	class USkeletalMesh* GetSkeletalMesh(const struct FName& RowName, int* Priority);
	class USelectiveAkAudioEvent* GetSelectiveAudioEvent(const struct FName& RowName, int* Priority);
	class UPoseAsset* GetPoseAsset(const struct FName& RowName, int* Priority);
	class UPhysicsAsset* GetPhysicsAsset(const struct FName& RowName, int* Priority);
	class UParticleSystem* GetParticleSystem(const struct FName& RowName, int* Priority);
	struct FName GetNameField(const struct FName& RowName, int* Priority);
	class UMaterialInterface* GetMaterialInterface(const struct FName& RowName, int* Priority);
	struct FLinearColor GetLinearColor(const struct FName& RowName, int* Priority);
	int GetInt(const struct FName& RowName, int* Priority);
	float GetFloat(const struct FName& RowName, int* Priority);
	class UClass* GetClass(const struct FName& RowName, int* Priority);
	bool GetBool(const struct FName& RowName, int* Priority);
	class UAkAudioEvent* GetAudioEvent(const struct FName& RowName, int* Priority);
	class UAnimSequence* GetAnimSequence(const struct FName& RowName, int* Priority);
	class UAnimMontage* GetAnimMontage(const struct FName& RowName, int* Priority);
	class UBlendSpace* GetAnimBlendSpace(const struct FName& RowName, int* Priority);
	class UAnimationAsset* GetAnimationAsset(const struct FName& RowName, int* Priority);
	class UAimOffsetBlendSpace* GetAnimAimOffset(const struct FName& RowName, int* Priority);
	void GetAllKeywords();
	void AddDataTableWithQuery(class UDataTable* InTable, int InPriority, const struct FGameplayTagQuery& InQuery);
	void AddDataTables(TArray<struct FDataTableInfo> InTableInfos);
	void AddDataTable(class UDataTable* InTable, int InPriority);
};

// Class DataTableSkinsCommon.MultiSkinObject
// 0x01A8 (FullSize[0x01D0] - InheritedSize[0x0028])
class UMultiSkinObject : public UObject
{
public:
	TArray<class UMultiSkinObject*>                    ParentSkinnedObjects;                                      // 0x0028(0x0010) (ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	TArray<TWeakObjectPtr<class UMultiSkinObject>>     ChildSkinnedObjects;                                       // 0x0038(0x0010) (ZeroConstructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	unsigned char                                      SubscribedKeywords[0x50];                                  // 0x0048(0x0050) UNKNOWN PROPERTY: SetProperty
	unsigned char                                      SubscribedMaterialPrefixes[0x50];                          // 0x0098(0x0050) UNKNOWN PROPERTY: SetProperty
	unsigned char                                      bSubscribeToAllKeywords : 1;                               // 0x00E8(0x0001) BIT_FIELD (NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	unsigned char                                      bWantsToBeRecycled : 1;                                    // 0x00E8(0x0001) BIT_FIELD (NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData_MKMP[0x1F];                                    // 0x00E9(0x001F) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FScriptMulticastDelegate                    OnFinishedAllPendingLoadsDel;                              // 0x0108(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData_5NSL[0x18];                                    // 0x0118(0x0018) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	TMap<int, struct FDynamicSkinTableMapEntry>        DynamicSkinTables;                                         // 0x0130(0x0050) (NativeAccessSpecifierPrivate)
	TMap<struct FName, struct FCachedRowsEntry>        CachedRows;                                                // 0x0180(0x0050) (NativeAccessSpecifierPrivate)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::GetObjectCasted<UClass>(375);
		return ptr;
	}



	void UnsubscribeToKeywords(TArray<struct FName> InKeywords);
	void UnsubscribeToKeyword(const struct FName& InKeyword);
	void UnsubscribeToAllKeywords();
	void SubscribeToKeywords(TArray<struct FName> InKeywords);
	void SubscribeToKeyword(const struct FName& InKeyword);
	void SubscribeToAllKeywords();
	void RemoveParent(class UMultiSkinObject* InParent);
	class UTexture* GetTexture(const struct FName& RowName, int* Priority);
	class UStaticMesh* GetStaticMesh(const struct FName& RowName, int* Priority);
	class USkeletalMesh* GetSkeletalMesh(const struct FName& RowName, int* Priority);
	class USelectiveAkAudioEvent* GetSelectiveAudioEvent(const struct FName& RowName, int* Priority);
	class UPoseAsset* GetPoseAsset(const struct FName& RowName, int* Priority);
	class UPhysicsAsset* GetPhysicsAsset(const struct FName& RowName, int* Priority);
	class UParticleSystem* GetParticleSystem(const struct FName& RowName, int* Priority);
	struct FName GetNameField(const struct FName& RowName, int* Priority);
	class UMaterialInterface* GetMaterialInterface(const struct FName& RowName, int* Priority);
	struct FLinearColor GetLinearColor(const struct FName& RowName, int* Priority);
	int GetInt(const struct FName& RowName, int* Priority);
	float GetFloat(const struct FName& RowName, int* Priority);
	class UClass* GetClass(const struct FName& RowName, int* Priority);
	bool GetBool(const struct FName& RowName, int* Priority);
	class UAkAudioEvent* GetAudioEvent(const struct FName& RowName, int* Priority);
	class UAnimSequence* GetAnimSequence(const struct FName& RowName, int* Priority);
	class UAnimMontage* GetAnimMontage(const struct FName& RowName, int* Priority);
	class UBlendSpace* GetAnimBlendSpace(const struct FName& RowName, int* Priority);
	class UAimOffsetBlendSpace* GetAnimAimOffset(const struct FName& RowName, int* Priority);
	void GetAllSkinKeywords();
	void AddParent(class UMultiSkinObject* InParent);
};

// Class DataTableSkinsCommon.SkinnableSkeletalMeshComponent
// 0x0148 (FullSize[0x0CF8] - InheritedSize[0x0BB0])
class USkinnableSkeletalMeshComponent : public USkeletalMeshComponentBudgeted
{
public:
	bool                                               bDelaySkinUpdatesUntilTick;                                // 0x0BB0(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                               bSkinUpdateIsQueued;                                       // 0x0BB1(0x0001) (ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_953I[0x2];                                     // 0x0BB2(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FName                                       SkeletalMeshKeyword;                                       // 0x0BB4(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_C42O[0x4];                                     // 0x0BBC(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class USkeletalMesh*                               FailSafeSkeletalMesh;                                      // 0x0BC0(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	struct FName                                       PhysicsAssetKeyword;                                       // 0x0BC8(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UPhysicsAsset*                               FailSafePhysicsAsset;                                      // 0x0BD0(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	struct FName                                       AnimInstanceClassKeyword;                                  // 0x0BD8(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UClass*                                      FailSafeAnimClass;                                         // 0x0BE0(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UClass*                                      LastSkinnedAnimClass;                                      // 0x0BE8(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                               bForceAnimationUpdateOnSkinUpdate;                         // 0x0BF0(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_4YT7[0x7];                                     // 0x0BF1(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UMultiSkinObject*                            SkinObject;                                                // 0x0BF8(0x0008) (ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	struct FScriptMulticastDelegate                    OnAnimInitializedOnSkinnableMeshDel;                       // 0x0C00(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData_MRYN[0x30];                                    // 0x0C10(0x0030) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	bool                                               bAllowMaterialSkinning;                                    // 0x0C40(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_O5RM[0x7];                                     // 0x0C41(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	TArray<struct FString>                             MaterialSkinningPrefixes;                                  // 0x0C48(0x0010) (ZeroConstructor, Deprecated, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      MaterialSkinningPrefixes_New[0x50];                        // 0x0C58(0x0050) UNKNOWN PROPERTY: SetProperty
	unsigned char                                      UnknownData_UJYP[0x48];                                    // 0x0CA8(0x0048) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	int                                                ForcedLodModel_Skinned;                                    // 0x0CF0(0x0004) (ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData_M2IR[0x4];                                     // 0x0CF4(0x0004) Fix Super Size


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::GetObjectCasted<UClass>(376);
		return ptr;
	}



	void STATIC_StaticSetForcedLOD(class USkinnedMeshComponent* InMeshComp, int InForcedLOD);
	void SetSkeletalMeshKeyword(const struct FName& InKeyword, class USkeletalMesh* InFailSafeSkeletalMesh);
	void SetPhysicsAssetKeyword(const struct FName& InKeyword, class UPhysicsAsset* InFailSafePhysicsAsset);
	int SetPersistentVectorParameterOnAllMaterials(const struct FName& ParameterName, const struct FLinearColor& ParameterValue);
	int SetPersistentVectorParameter(int MaterialSlot, const struct FName& ParameterName, const struct FLinearColor& ParameterValue);
	int SetPersistentTextureParameterOnAllMaterials(const struct FName& ParameterName, class UTexture* ParameterValue);
	int SetPersistentTextureParameter(int MaterialSlot, const struct FName& ParameterName, class UTexture* ParameterValue);
	int SetPersistentScalarParameterOnAllMaterials(const struct FName& ParameterName, float ParameterValue);
	int SetPersistentScalarParameter(int MaterialSlot, const struct FName& ParameterName, float ParameterValue);
	int SetPersistentMaterialOverrideOnAllSlots(class UMaterialInterface* MaterialInterface);
	int SetPersistentMaterialOverride(int MaterialSlot, class UMaterialInterface* MaterialInterface);
	void SetForcedLOD_Skinned(int InNewForcedLOD);
	void SetAnimClassKeyword(const struct FName& InKeyword, class UClass* InFailSafeAnimClass);
	void RemovePersistentMaterialParameter(int ParameterId);
	class UMultiSkinObject* GetSkinObject();
	void ForwardAnimInitialized();
};

// Class DataTableSkinsCommon.SkinnableMergedMeshComponent
// 0x0058 (FullSize[0x0D50] - InheritedSize[0x0CF8])
class USkinnableMergedMeshComponent : public USkinnableSkeletalMeshComponent
{
public:
	struct FScriptMulticastDelegate                    OnMeshMergeComplete;                                       // 0x0CF8(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	TArray<struct FName>                               CompositeSkeletalMeshKeywords;                             // 0x0D08(0x0010) (Edit, ZeroConstructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                               bAlwaysUseTheFailsafeMeshWhileMerging;                     // 0x0D18(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_4DZJ[0x3];                                     // 0x0D19(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FName                                       MeshNeedsCPUAccessKeyword;                                 // 0x0D1C(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                               bDelayFullSkinUpdateUntilMeshMergingIsComplete;            // 0x0D24(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_M6Z9[0x3];                                     // 0x0D25(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class USkeletalMesh*                               BestPlaceHolderMesh;                                       // 0x0D28(0x0008) (ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                               bMergeMarkedComplete;                                      // 0x0D30(0x0001) (ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_MD0X[0x7];                                     // 0x0D31(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class USkeletalMesh*                               CachedMergeResult;                                         // 0x0D38(0x0008) (ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_WG37[0x10];                                    // 0x0D40(0x0010) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::GetObjectCasted<UClass>(377);
		return ptr;
	}



	void SetSkeletalMeshKeywords(TArray<struct FName> InKeywords, class USkeletalMesh* InFailSafeSkeletalMesh);
	void RemoveSkeletalMeshKeyword(const struct FName& InKeyword);
	void OnMeshMergeComplete__DelegateSignature();
	void AddSkeletalMeshKeyword(const struct FName& InKeyword);
};

// Class DataTableSkinsCommon.SkinnableStaticMeshComponent
// 0x00C8 (FullSize[0x05B0] - InheritedSize[0x04E8])
class USkinnableStaticMeshComponent : public UStaticMeshComponent
{
public:
	unsigned char                                      UnknownData_TEYD[0x4];                                     // 0x04E8(0x0004) Fix Super Size
	struct FName                                       StaticMeshKeyword;                                         // 0x04EC(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_UNNN[0x4];                                     // 0x04F4(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UStaticMesh*                                 FailSafeStaticMesh;                                        // 0x04F8(0x0008) (ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UMultiSkinObject*                            SkinObject;                                                // 0x0500(0x0008) (ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	bool                                               bAllowMaterialSkinning;                                    // 0x0508(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_Q0Y6[0x7];                                     // 0x0509(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	unsigned char                                      MaterialSkinningPrefixes[0x50];                            // 0x0509(0x0050) UNKNOWN PROPERTY: SetProperty
	unsigned char                                      UnknownData_C60K[0x50];                                    // 0x0560(0x0050) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::GetObjectCasted<UClass>(379);
		return ptr;
	}



	void SetStaticMeshKeyword(const struct FName& InKeyword, class UStaticMesh* InFailSafeStaticMesh);
	int SetPersistentVectorParameterOnAllMaterials(const struct FName& ParameterName, const struct FLinearColor& ParameterValue);
	int SetPersistentVectorParameter(int MaterialSlot, const struct FName& ParameterName, const struct FLinearColor& ParameterValue);
	int SetPersistentTextureParameterOnAllMaterials(const struct FName& ParameterName, class UTexture* ParameterValue);
	int SetPersistentTextureParameter(int MaterialSlot, const struct FName& ParameterName, class UTexture* ParameterValue);
	int SetPersistentScalarParameterOnAllMaterials(const struct FName& ParameterName, float ParameterValue);
	int SetPersistentScalarParameter(int MaterialSlot, const struct FName& ParameterName, float ParameterValue);
	int SetPersistentMaterialOverrideOnAllSlots(class UMaterialInterface* MaterialInterface);
	int SetPersistentMaterialOverride(int MaterialSlot, class UMaterialInterface* MaterialInterface);
	void RemovePersistentMaterialParameter(int ParameterId);
	class UMultiSkinObject* GetSkinObject();
};

// Class DataTableSkinsCommon.SkinObjectManagerComponent
// 0x00A0 (FullSize[0x0150] - InheritedSize[0x00B0])
class USkinObjectManagerComponent : public UActorComponent
{
public:
	TMap<struct FName, class UMultiSkinObject*>        SkinObjects;                                               // 0x00B0(0x0050) (Transient, NativeAccessSpecifierPrivate)
	unsigned char                                      SkinObjectsSet[0x50];                                      // 0x0100(0x0050) UNKNOWN PROPERTY: SetProperty


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::GetObjectCasted<UClass>(380);
		return ptr;
	}



};

// Class DataTableSkinsCommon.SkinTagAssetInterface
// 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
class USkinTagAssetInterface : public UInterface
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::GetObjectCasted<UClass>(381);
		return ptr;
	}



};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
