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

// Class SceneComponentPools.BasePoolComponent
// 0x0020 (FullSize[0x00D0] - InheritedSize[0x00B0])
class UBasePoolComponent : public UActorComponent
{
public:
	int                                                MaxPoolSize;                                               // 0x00B0(0x0004) (Edit, ZeroConstructor, Config, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                StartingPoolSize;                                          // 0x00B4(0x0004) (Edit, ZeroConstructor, Config, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     ComponentClassName;                                        // 0x00B8(0x0010) (Edit, ZeroConstructor, Config, DisableEditOnInstance, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	SceneComponentPools_EPoolOverflowHandling          OverflowType;                                              // 0x00C8(0x0001) (Edit, ZeroConstructor, Config, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_I52U[0x7];                                     // 0x00C9(0x0007) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::GetObjectCasted<UClass>(408);
		return ptr;
	}



};

// Class SceneComponentPools.DecalPoolComponent
// 0x0078 (FullSize[0x0148] - InheritedSize[0x00D0])
class UDecalPoolComponent : public UBasePoolComponent
{
public:
	unsigned char                                      UnknownData_6JVX[0x8];                                     // 0x00D0(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UClass*                                      PooledDecalComponentClass;                                 // 0x00D8(0x0008) (ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	TArray<class UPoolableDecalComponent*>             UnusedComponentsArray;                                     // 0x00E0(0x0010) (ExportObject, ZeroConstructor, ContainsInstancedReference, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      UsedComponentsSet[0x50];                                   // 0x00F0(0x0050) UNKNOWN PROPERTY: SetProperty
	class UPoolableDecalComponent*                     PeekedDecalComponent;                                      // 0x0140(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::GetObjectCasted<UClass>(409);
		return ptr;
	}



};

// Class SceneComponentPools.FootprintDecalPoolComponent
// 0x0000 (FullSize[0x0148] - InheritedSize[0x0148])
class UFootprintDecalPoolComponent : public UDecalPoolComponent
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::GetObjectCasted<UClass>(410);
		return ptr;
	}



};

// Class SceneComponentPools.GunshotDecalPoolComponent
// 0x0000 (FullSize[0x0148] - InheritedSize[0x0148])
class UGunshotDecalPoolComponent : public UDecalPoolComponent
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::GetObjectCasted<UClass>(411);
		return ptr;
	}



};

// Class SceneComponentPools.ParticleSystemPoolComponentBase
// 0x0080 (FullSize[0x0150] - InheritedSize[0x00D0])
class UParticleSystemPoolComponentBase : public UBasePoolComponent
{
public:
	unsigned char                                      UnknownData_KDNR[0x8];                                     // 0x00D0(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UClass*                                      PooledParticleSystemComponentClass;                        // 0x00D8(0x0008) (ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	TArray<class UParticleSystemComponent*>            UnusedComponentsArray;                                     // 0x00E0(0x0010) (ExportObject, ZeroConstructor, ContainsInstancedReference, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      UsedComponentsSet[0x50];                                   // 0x00F0(0x0050) UNKNOWN PROPERTY: SetProperty
	class UParticleSystemComponent*                    PeekedParticleSystemComponent;                             // 0x0140(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                               bClearTemplateWhenReturnedToPool;                          // 0x0148(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_L320[0x7];                                     // 0x0149(0x0007) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::GetObjectCasted<UClass>(412);
		return ptr;
	}



	void OnPSCFinished(class UParticleSystemComponent* InPSC);
};

// Class SceneComponentPools.ParticleSystemPoolComponent
// 0x0000 (FullSize[0x0150] - InheritedSize[0x0150])
class UParticleSystemPoolComponent : public UParticleSystemPoolComponentBase
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::GetObjectCasted<UClass>(413);
		return ptr;
	}



};

// Class SceneComponentPools.PoolableDecalComponent
// 0x0030 (FullSize[0x0280] - InheritedSize[0x0250])
class UPoolableDecalComponent : public UDecalComponent
{
public:
	unsigned char                                      UnknownData_VOEB[0x10];                                    // 0x0250(0x0010) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FScriptMulticastDelegate                    OnDecalReturnedToPoolDelegate;                             // 0x0260(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	bool                                               bInUse;                                                    // 0x0270(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_N4Q5[0xF];                                     // 0x0271(0x000F) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::GetObjectCasted<UClass>(415);
		return ptr;
	}



	void ForceReturnToPool();
};

// Class SceneComponentPools.SceneComponentPoolStatics
// 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
class USceneComponentPoolStatics : public UBlueprintFunctionLibrary
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::GetObjectCasted<UClass>(416);
		return ptr;
	}



	class UStaticMeshComponent* STATIC_SpawnStaticMeshAttached(class UStaticMesh* Mesh, class USceneComponent* AttachToComponent, const struct FPoolAttachmentInfo& AttachInfo);
	class USkeletalMeshComponent* STATIC_SpawnSkeletalMeshAttached(class USkeletalMesh* Mesh, class UClass* AnimClass, class USceneComponent* AttachToComponent, const struct FPoolAttachmentInfo& AttachInfo);
	class UParticleSystemComponent* STATIC_SpawnEmitterAttached(class UParticleSystem* EmitterTemplate, class USceneComponent* AttachToComponent, const struct FName& AttachPointName, const struct FVector& Location, const struct FRotator& Rotation, const struct FVector& Scale, TEnumAsByte<Engine_EAttachLocation> LocationType);
	class UParticleSystemComponent* STATIC_SpawnEmitterAtLocation(class UObject* WorldContextObject, class UParticleSystem* EmitterTemplate, const struct FVector& Location, const struct FRotator& Rotation, const struct FVector& Scale);
	class UPoolableDecalComponent* STATIC_SpawnDecalAttached(class UMaterialInterface* DecalMaterial, const struct FVector& DecalSize, class USceneComponent* AttachToComponent, const struct FName& AttachPointName, const struct FVector& Location, const struct FRotator& Rotation, TEnumAsByte<Engine_EAttachLocation> LocationType, float Lifespan, SceneComponentPools_EDecalComponentType DecalComponentType);
	class UPoolableDecalComponent* STATIC_SpawnDecalAtLocation(class UObject* WorldContextObject, class UMaterialInterface* DecalMaterial, const struct FVector& DecalSize, const struct FVector& Location, const struct FRotator& Rotation, float Lifespan, SceneComponentPools_EDecalComponentType DecalComponentType);
	void STATIC_ReleaseSpawnedStaticMeshes(class UObject* WorldContextObject);
	void STATIC_ReleaseSpawnedStaticMeshComponent(class UStaticMeshComponent* StaticMeshComponent);
	void STATIC_ReleaseSpawnedStaticMesh(class UStaticMesh* StaticMeshComponent, class USceneComponent* AttachToComponent, const struct FPoolAttachmentInfo& AttachInfo);
	void STATIC_ReleaseSpawnedSkeletalMeshes(class UObject* WorldContextObject);
	void STATIC_ReleaseSpawnedSkeletalMeshComponent(class USkeletalMeshComponent* SkeletalMeshComponent);
	void STATIC_ReleaseSpawnedSkeletalMesh(class USkeletalMesh* SkeletalMesh, class UClass* AnimClass, class USceneComponent* AttachToComponent, const struct FPoolAttachmentInfo& AttachInfo);
	void STATIC_ReleaseSpawnedEmitters(class UObject* WorldContextObject);
	void STATIC_ReleaseSpawnedDecals(class UObject* WorldContextObject);
	class UStaticMeshComponent* STATIC_GetComponentForStaticMesh(class UObject* WorldContextObject, class UStaticMesh* Mesh, class USceneComponent* AttachToComponent, const struct FName& AttachSocketName);
	class USkeletalMeshComponent* STATIC_GetComponentForSkeletalMesh(class UObject* WorldContextObject, class USkeletalMesh* Mesh, class USceneComponent* AttachToComponent, const struct FName& AttachSocketName);
};

// Class SceneComponentPools.SkeletalMeshPoolComponent
// 0x0078 (FullSize[0x0148] - InheritedSize[0x00D0])
class USkeletalMeshPoolComponent : public UBasePoolComponent
{
public:
	unsigned char                                      UnknownData_Y756[0x8];                                     // 0x00D0(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	TArray<class USkeletalMeshComponent*>              UnusedComponentsArray;                                     // 0x00D8(0x0010) (ExportObject, ZeroConstructor, ContainsInstancedReference, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      UsedComponentsSet[0x50];                                   // 0x00E8(0x0050) UNKNOWN PROPERTY: SetProperty
	class USkeletalMeshComponent*                      PeekedSkeletalMeshComponent;                               // 0x0138(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UClass*                                      PooledSkeletalMeshComponentClass;                          // 0x0140(0x0008) (ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::GetObjectCasted<UClass>(417);
		return ptr;
	}



};

// Class SceneComponentPools.StaticMeshPoolComponent
// 0x0078 (FullSize[0x0148] - InheritedSize[0x00D0])
class UStaticMeshPoolComponent : public UBasePoolComponent
{
public:
	unsigned char                                      UnknownData_MI6B[0x8];                                     // 0x00D0(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	TArray<class UStaticMeshComponent*>                UnusedComponentsArray;                                     // 0x00D8(0x0010) (ExportObject, ZeroConstructor, ContainsInstancedReference, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      UsedComponentsSet[0x50];                                   // 0x00E8(0x0050) UNKNOWN PROPERTY: SetProperty
	class UStaticMeshComponent*                        PeekedStaticMeshComponent;                                 // 0x0138(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UClass*                                      PooledStaticMeshComponentClass;                            // 0x0140(0x0008) (ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::GetObjectCasted<UClass>(418);
		return ptr;
	}



};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
