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

// Class SkinnableAnimGraphRuntime.AnimNotify_PlaySkinnedParticleEffect
// 0x0010 (FullSize[0x00A0] - InheritedSize[0x0090])
class UAnimNotify_PlaySkinnedParticleEffect : public UAnimNotify_PlayParticleEffect
{
public:
	struct FName                                       SkinKeyword;                                               // 0x0090(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_MK9O[0x8];                                     // 0x0098(0x0008) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::GetObjectCasted<UClass>(385);
		return ptr;
	}



};

// Class SkinnableAnimGraphRuntime.AnimNotify_SkinnedAkEvent
// 0x0030 (FullSize[0x0068] - InheritedSize[0x0038])
class UAnimNotify_SkinnedAkEvent : public UAnimNotify
{
public:
	struct FName                                       AttachName;                                                // 0x0038(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UAkAudioEvent*                               Event;                                                     // 0x0040(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bFollow;                                                   // 0x0048(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_15LV[0x7];                                     // 0x0049(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FString                                     EventName;                                                 // 0x0050(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FName                                       SkinKeyword;                                               // 0x0060(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::GetObjectCasted<UClass>(386);
		return ptr;
	}



};

// Class SkinnableAnimGraphRuntime.AnimNotify_SkinSelectiveAkEvent
// 0x0008 (FullSize[0x0058] - InheritedSize[0x0050])
class UAnimNotify_SkinSelectiveAkEvent : public UAnimNotify_SelectiveAkEvent
{
public:
	struct FName                                       SkinKeyword;                                               // 0x0050(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::GetObjectCasted<UClass>(389);
		return ptr;
	}



};

// Class SkinnableAnimGraphRuntime.SkinnedAnimInstance
// 0x0068 (FullSize[0x02D0] - InheritedSize[0x0268])
class USkinnedAnimInstance : public UAnimInstance
{
public:
	unsigned char                                      UnknownData_CSIL[0x8];                                     // 0x0268(0x0008) Fix Super Size
	unsigned char                                      UnknownData_61KP[0x48];                                    // 0x0270(0x0048) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UMultiSkinObject*                            SkinObject;                                                // 0x02B8(0x0008) (ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_HZJY[0x10];                                    // 0x02C0(0x0010) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::GetObjectCasted<UClass>(391);
		return ptr;
	}



	class UMultiSkinObject* GetSkinObject();
	class UBlendSpace* GetSkinnedBlendSpace(const struct FName& Keyword, class UBlendSpace* Default, bool* bHasOverride);
	class UAnimSequence* GetSkinnedAnimSequence(const struct FName& Keyword, class UAnimSequence* Default, bool* bHasOverride);
	class UAimOffsetBlendSpace* GetSkinnedAnimOffset(const struct FName& Keyword, class UAimOffsetBlendSpace* Default, bool* bHasOverride);
	class UAnimMontage* GetSkinnedAnimMontage(const struct FName& Keyword, class UAnimMontage* Default, bool* bHasOverride);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
