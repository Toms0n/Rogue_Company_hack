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

// Class SkinnableAnimNotifies.AnimNotifyState_SkinnedPropBase
// 0x0058 (FullSize[0x0088] - InheritedSize[0x0030])
class UAnimNotifyState_SkinnedPropBase : public UAnimNotifyState
{
public:
	struct FName                                       SkinObjectName;                                            // 0x0030(0x0008) (Edit, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FName                                       MeshSkinKeyword;                                           // 0x0038(0x0008) (Edit, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FName                                       ComponentClassSkinKeyword;                                 // 0x0040(0x0008) (Edit, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FName                                       PropIdentifier;                                            // 0x0048(0x0008) (Edit, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              ExtendedLifetime;                                          // 0x0050(0x0004) (Edit, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bSkipExtendedLifetime;                                     // 0x0054(0x0001) (Edit, BlueprintReadOnly, ZeroConstructor, Transient, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_BICW[0x3];                                     // 0x0055(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FPoolAttachmentInfo                         PropAttachmentInfo;                                        // 0x0058(0x0030) (Edit, BlueprintReadOnly, NoDestructor, NativeAccessSpecifierPublic)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::GetObjectCasted<UClass>(394);
		return ptr;
	}



};

// Class SkinnableAnimNotifies.AnimNotifyState_SkinnedSkelProp
// 0x0010 (FullSize[0x0098] - InheritedSize[0x0088])
class UAnimNotifyState_SkinnedSkelProp : public UAnimNotifyState_SkinnedPropBase
{
public:
	struct FName                                       AnimClassSkinKeyword;                                      // 0x0088(0x0008) (Edit, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UAnimMontage*                                ActivationMontage;                                         // 0x0090(0x0008) (Edit, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::GetObjectCasted<UClass>(395);
		return ptr;
	}



};

// Class SkinnableAnimNotifies.AnimNotifyState_SkinStaticProp
// 0x0000 (FullSize[0x0088] - InheritedSize[0x0088])
class UAnimNotifyState_SkinStaticProp : public UAnimNotifyState_SkinnedPropBase
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::GetObjectCasted<UClass>(396);
		return ptr;
	}



};

// Class SkinnableAnimNotifies.SkelPropManagerComponent
// 0x0140 (FullSize[0x01F0] - InheritedSize[0x00B0])
class USkelPropManagerComponent : public UActorComponent
{
public:
	unsigned char                                      UnknownData_9Z52[0xD8];                                    // 0x00B0(0x00D8) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	TArray<struct FActiveSkelProp>                     ActiveNamelessProps;                                       // 0x0188(0x0010) (ZeroConstructor, Transient, DuplicateTransient, ContainsInstancedReference, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	TMap<struct FPropIdentifier, struct FActiveSkelProp> ActiveProps;                                               // 0x0198(0x0050) (Transient, DuplicateTransient, ContainsInstancedReference, NativeAccessSpecifierPrivate)
	bool                                               bAllowSpawnerPooling;                                      // 0x01E8(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_XZN3[0x3];                                     // 0x01E9(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	float                                              SpawnerPoolingLifespan;                                    // 0x01EC(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::GetObjectCasted<UClass>(397);
		return ptr;
	}



};

// Class SkinnableAnimNotifies.StaticPropManagerComponent
// 0x0140 (FullSize[0x01F0] - InheritedSize[0x00B0])
class UStaticPropManagerComponent : public UActorComponent
{
public:
	unsigned char                                      UnknownData_DW7Q[0xD8];                                    // 0x00B0(0x00D8) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	TArray<struct FActiveStaticProp>                   ActiveNamelessProps;                                       // 0x0188(0x0010) (ZeroConstructor, Transient, DuplicateTransient, ContainsInstancedReference, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	TMap<struct FPropIdentifier, struct FActiveStaticProp> ActiveProps;                                               // 0x0198(0x0050) (Transient, DuplicateTransient, ContainsInstancedReference, NativeAccessSpecifierPrivate)
	bool                                               bAllowSpawnerPooling;                                      // 0x01E8(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_L293[0x3];                                     // 0x01E9(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	float                                              SpawnerPoolingLifespan;                                    // 0x01EC(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::GetObjectCasted<UClass>(398);
		return ptr;
	}



};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
