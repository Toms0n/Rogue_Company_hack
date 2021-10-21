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

// Enum LiveLink.ELiveLinkAxis
enum class LiveLink_ELiveLinkAxis : uint8_t
{
	ELiveLinkAxis__X               = 0,
	ELiveLinkAxis__Y               = 1,
	ELiveLinkAxis__Z               = 2,
	ELiveLinkAxis__XNeg            = 3,
	ELiveLinkAxis__YNeg            = 4,
	ELiveLinkAxis__ZNeg            = 5,
	ELiveLinkAxis__ELiveLinkAxis_MAX = 6,

};

// Enum LiveLink.ELiveLinkTimecodeProviderEvaluationType
enum class LiveLink_ELiveLinkTimecodeProviderEvaluationType : uint8_t
{
	ELiveLinkTimecodeProviderEvaluationType__Lerp = 0,
	ELiveLinkTimecodeProviderEvaluationType__Nearest = 1,
	ELiveLinkTimecodeProviderEvaluationType__Latest = 2,
	ELiveLinkTimecodeProviderEvaluationType__ELiveLinkTimecodeProviderEvaluationType_MAX = 3,

};

//---------------------------------------------------------------------------
// Script Structs
//---------------------------------------------------------------------------

// ScriptStruct LiveLink.LiveLinkRoleProjectSetting
// 0x0028
struct FLiveLinkRoleProjectSetting
{
	class UClass*                                      Role;                                                      // 0x0000(0x0008) (Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UClass*                                      SettingClass;                                              // 0x0008(0x0008) (Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UClass*                                      FrameInterpolationProcessor;                               // 0x0010(0x0008) (Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<class UClass*>                              FramePreProcessors;                                        // 0x0018(0x0010) (Edit, ZeroConstructor, Config, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct LiveLink.AnimNode_LiveLinkPose
// 0x0040 (0x0060 - 0x0020)
struct FAnimNode_LiveLinkPose : public FAnimNode_Base
{
	struct FPoseLink                                   InputPose;                                                 // 0x0020(0x0010) (Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic)
	struct FLiveLinkSubjectName                        LiveLinkSubjectName;                                       // 0x0030(0x0008) (Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UClass*                                      RetargetAsset;                                             // 0x0038(0x0008) (Edit, BlueprintVisible, ZeroConstructor, NoClear, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class ULiveLinkRetargetAsset*                      CurrentRetargetAsset;                                      // 0x0040(0x0008) (ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_8MJH[0x18];                                    // 0x0048(0x0018) MISSED OFFSET (PADDING)

};

// ScriptStruct LiveLink.LiveLinkInstanceProxy
// 0x0060 (0x0740 - 0x06E0)
struct FLiveLinkInstanceProxy : public FAnimInstanceProxy
{
	struct FAnimNode_LiveLinkPose                      PoseNode;                                                  // 0x06E0(0x0060) (Edit, NativeAccessSpecifierPublic)

};

// ScriptStruct LiveLink.ProviderPollResult
// 0x0038
struct FProviderPollResult
{
	unsigned char                                      UnknownData_06GM[0x10];                                    // 0x0000(0x0010) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FString                                     Name;                                                      // 0x0010(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     MachineName;                                               // 0x0020(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	double                                             MachineTimeOffset;                                         // 0x0030(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct LiveLink.LiveLinkRetargetAssetReference
// 0x0001
struct FLiveLinkRetargetAssetReference
{
	unsigned char                                      UnknownData_UFMD[0x1];                                     // 0x0000(0x0001) MISSED OFFSET (PADDING)

};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
