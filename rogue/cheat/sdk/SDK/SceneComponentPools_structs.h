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
// Enums
//---------------------------------------------------------------------------

// Enum SceneComponentPools.EPoolOverflowHandling
enum class SceneComponentPools_EPoolOverflowHandling : uint8_t
{
	EPoolOverflowHandling__IgnoreNewRequest = 0,
	EPoolOverflowHandling__KillExistingRequest = 1,
	EPoolOverflowHandling__CreateStandaloneInstance = 2,
	EPoolOverflowHandling__EPoolOverflowHandling_MAX = 3,

};

// Enum SceneComponentPools.EDecalComponentType
enum class SceneComponentPools_EDecalComponentType : uint8_t
{
	EDecalComponentType__Standard  = 0,
	EDecalComponentType__Gunshot   = 1,
	EDecalComponentType__Footprint = 2,
	EDecalComponentType__EDecalComponentType_MAX = 3,

};

//---------------------------------------------------------------------------
// Script Structs
//---------------------------------------------------------------------------

// ScriptStruct SceneComponentPools.PoolAttachmentInfo
// 0x0030
struct FPoolAttachmentInfo
{
	struct FName                                       AttachPoint;                                               // 0x0000(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                                     Location;                                                  // 0x0008(0x000C) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FRotator                                    Rotation;                                                  // 0x0014(0x000C) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	struct FVector                                     Scale;                                                     // 0x0020(0x000C) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TEnumAsByte<Engine_EAttachLocation>                LocationType;                                              // 0x002C(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_CBK1[0x3];                                     // 0x002D(0x0003) MISSED OFFSET (PADDING)

};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
