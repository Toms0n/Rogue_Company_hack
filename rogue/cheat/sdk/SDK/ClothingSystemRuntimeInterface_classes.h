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

// Class ClothingSystemRuntimeInterface.ClothConfigBase
// 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
class UClothConfigBase : public UObject
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::GetObjectCasted<UClass>(670);
		return ptr;
	}



};

// Class ClothingSystemRuntimeInterface.ClothingSimulationFactory
// 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
class UClothingSimulationFactory : public UObject
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::GetObjectCasted<UClass>(677);
		return ptr;
	}



};

// Class ClothingSystemRuntimeInterface.ClothingSimulationInteractor
// 0x0008 (FullSize[0x0030] - InheritedSize[0x0028])
class UClothingSimulationInteractor : public UObject
{
public:
	unsigned char                                      UnknownData_O6OJ[0x8];                                     // 0x0028(0x0008) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::GetObjectCasted<UClass>(679);
		return ptr;
	}



	void SetAnimDriveSpringStiffness(float InStiffness);
	void PhysicsAssetUpdated();
	void EnableGravityOverride(const struct FVector& InVector);
	void DisableGravityOverride();
	void ClothConfigUpdated();
};

// Class ClothingSystemRuntimeInterface.ClothSharedSimConfigBase
// 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
class UClothSharedSimConfigBase : public UObject
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::GetObjectCasted<UClass>(2507);
		return ptr;
	}



};

// Class ClothingSystemRuntimeInterface.ClothingAssetBase
// 0x0020 (FullSize[0x0048] - InheritedSize[0x0028])
class UClothingAssetBase : public UObject
{
public:
	struct FString                                     ImportedFilePath;                                          // 0x0028(0x0010) (Edit, ZeroConstructor, EditConst, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FGuid                                       AssetGuid;                                                 // 0x0038(0x0010) (ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::GetObjectCasted<UClass>(2508);
		return ptr;
	}



};

// Class ClothingSystemRuntimeInterface.ClothPhysicalMeshDataBase_Legacy
// 0x00B8 (FullSize[0x00E0] - InheritedSize[0x0028])
class UClothPhysicalMeshDataBase_Legacy : public UObject
{
public:
	TArray<struct FVector>                             Vertices;                                                  // 0x0028(0x0010) (ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<struct FVector>                             Normals;                                                   // 0x0038(0x0010) (ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<uint32_t>                                   Indices;                                                   // 0x0048(0x0010) (ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<float>                                      InverseMasses;                                             // 0x0058(0x0010) (ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<struct FClothVertBoneData>                  BoneData;                                                  // 0x0068(0x0010) (ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                NumFixedVerts;                                             // 0x0078(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                MaxBoneWeights;                                            // 0x007C(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<uint32_t>                                   SelfCollisionIndices;                                      // 0x0080(0x0010) (ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_LTYN[0x50];                                    // 0x0090(0x0050) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::GetObjectCasted<UClass>(2509);
		return ptr;
	}



};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
