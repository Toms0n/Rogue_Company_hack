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

// Enum KillstreakAnimGraphRuntime.EPoseMirrorPlane
enum class KillstreakAnimGraphRuntime_EPoseMirrorPlane : uint8_t
{
	EPoseMirrorPlane__XZ           = 0,
	EPoseMirrorPlane__XY           = 1,
	EPoseMirrorPlane__YZ           = 2,
	EPoseMirrorPlane__EPoseMirrorPlane_MAX = 3,

};

// Enum KillstreakAnimGraphRuntime.ERecoilAllowMirror
enum class KillstreakAnimGraphRuntime_ERecoilAllowMirror : uint8_t
{
	ERecoilAllowMirror__Both       = 0,
	ERecoilAllowMirror__UnmirroredOnly = 1,
	ERecoilAllowMirror__MirroredOnly = 2,
	ERecoilAllowMirror__ERecoilAllowMirror_MAX = 3,

};

// Enum KillstreakAnimGraphRuntime.ERecoilStart
enum class KillstreakAnimGraphRuntime_ERecoilStart : uint8_t
{
	ERS_SpecifyOffset              = 0,
	ERS_Random                     = 1,
	ERS_SpecifyOffsetRandom        = 2,

};

//---------------------------------------------------------------------------
// Script Structs
//---------------------------------------------------------------------------

// ScriptStruct KillstreakAnimGraphRuntime.RecoilParams
// 0x0010
struct FRecoilParams
{
	struct FVector                                     PhaseOffset;                                               // 0x0000(0x000C) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TEnumAsByte<KillstreakAnimGraphRuntime_ERecoilStart> X;                                                         // 0x000C(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	TEnumAsByte<KillstreakAnimGraphRuntime_ERecoilStart> Y;                                                         // 0x000D(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	TEnumAsByte<KillstreakAnimGraphRuntime_ERecoilStart> Z;                                                         // 0x000E(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_B2Z4[0x1];                                     // 0x000F(0x0001) MISSED OFFSET (PADDING)

};

// ScriptStruct KillstreakAnimGraphRuntime.RecoilInfo
// 0x0060
struct FRecoilInfo
{
	float                                              TimeDurationPos;                                           // 0x0000(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              TimeDurationRot;                                           // 0x0004(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                                     RotAmplitude;                                              // 0x0008(0x000C) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                                     RotFrequency;                                              // 0x0014(0x000C) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FRecoilParams                               RotParams;                                                 // 0x0020(0x0010) (Edit, DisableEditOnInstance, NoDestructor, NativeAccessSpecifierPublic)
	struct FVector                                     LocAmplitude;                                              // 0x0030(0x000C) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                                     LocFrequency;                                              // 0x003C(0x000C) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FRecoilParams                               LocParams;                                                 // 0x0048(0x0010) (Edit, DisableEditOnInstance, NoDestructor, NativeAccessSpecifierPublic)
	float                                              BlendInTime;                                               // 0x0058(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               Enabled;                                                   // 0x005C(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               Mirrored;                                                  // 0x005D(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_5EGX[0x2];                                     // 0x005E(0x0002) MISSED OFFSET (PADDING)

};

// ScriptStruct KillstreakAnimGraphRuntime.RecoilProfile
// 0x01EC
struct FRecoilProfile
{
	struct FRecoilInfo                                 PelvisRecoil;                                              // 0x0000(0x0060) (Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic)
	struct FRecoilInfo                                 SpineRecoil;                                               // 0x0060(0x0060) (Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic)
	struct FRecoilInfo                                 NeckRecoil;                                                // 0x00C0(0x0060) (Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic)
	struct FRecoilInfo                                 HandRecoil;                                                // 0x0120(0x0060) (Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic)
	struct FRecoilInfo                                 RightClavicleRecoil;                                       // 0x0180(0x0060) (Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic)
	float                                              Spine1RecoilAlpha;                                         // 0x01E0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              Spine2RecoilAlpha;                                         // 0x01E4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              Spine3RecoilAlpha;                                         // 0x01E8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct KillstreakAnimGraphRuntime.BoneMirrorPair
// 0x002C
struct FBoneMirrorPair
{
	struct FBoneReference                              BoneOne;                                                   // 0x0000(0x0010) (Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic)
	struct FBoneReference                              BoneTwo;                                                   // 0x0010(0x0010) (Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic)
	struct FVector                                     RotationFlipAxis;                                          // 0x0020(0x000C) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct KillstreakAnimGraphRuntime.BoneMirrorConfig
// 0x0020
struct FBoneMirrorConfig
{
	TArray<struct FBoneReference>                      UnpairedMirrorBones;                                       // 0x0000(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<struct FBoneMirrorPair>                     PairedMirrorBones;                                         // 0x0010(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct KillstreakAnimGraphRuntime.KSAnimNode_Mirror
// 0x0048 (0x0120 - 0x00D8)
struct FKSAnimNode_Mirror : public FAnimNode_SkeletalControlBase
{
	struct FBoneMirrorConfig                           BoneMirrorConfig;                                          // 0x00D8(0x0020) (Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	KillstreakAnimGraphRuntime_EPoseMirrorPlane        MirrorPlane;                                               // 0x00F8(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bAlternateMirroring;                                       // 0x00F9(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_U352[0x6];                                     // 0x00FA(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FBoneMirrorConfig                           MirrorConfigCache;                                         // 0x0100(0x0020) (Transient, Protected, NativeAccessSpecifierProtected)

};

// ScriptStruct KillstreakAnimGraphRuntime.AnimOrientationWarpDefinition
// 0x0038
struct FAnimOrientationWarpDefinition
{
	TEnumAsByte<CoreUObject_EAxis>                     YawRotationAxis;                                           // 0x0000(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               UseBoneSpaceForSpineWarp;                                  // 0x0001(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_JMYU[0x2];                                     // 0x0002(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	float                                              OrientationAlpha;                                          // 0x0004(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<struct FBoneReference>                      SpineBones;                                                // 0x0008(0x0010) (Edit, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FBoneReference                              IkFootRoot;                                                // 0x0018(0x0010) (Edit, NoDestructor, NativeAccessSpecifierPublic)
	TArray<struct FBoneReference>                      IkFootBones;                                               // 0x0028(0x0010) (Edit, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct KillstreakAnimGraphRuntime.KSAnimNode_OrientationWarp
// 0x0048 (0x0120 - 0x00D8)
struct FKSAnimNode_OrientationWarp : public FAnimNode_SkeletalControlBase
{
	float                                              Angle;                                                     // 0x00D8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              OrientationAlphaOverride;                                  // 0x00DC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FAnimOrientationWarpDefinition              WarpSettings;                                              // 0x00E0(0x0038) (Edit, NativeAccessSpecifierPublic)
	bool                                               bUseOrientationAlphaOverride;                              // 0x0118(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_B6QJ[0x7];                                     // 0x0119(0x0007) MISSED OFFSET (PADDING)

};

// ScriptStruct KillstreakAnimGraphRuntime.KSAnimNode_Recoil
// 0x00E8 (0x01C0 - 0x00D8)
struct FKSAnimNode_Recoil : public FAnimNode_SkeletalControlBase
{
	struct FBoneReference                              m_BoneToRecoil;                                            // 0x00D8(0x0010) (Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic)
	bool                                               m_bBoneSpaceRecoil;                                        // 0x00E8(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_MOAZ[0x3];                                     // 0x00E9(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	float                                              RotTimeToGo;                                               // 0x00EC(0x0004) (ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              PosTimeToGo;                                               // 0x00F0(0x0004) (ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FRecoilInfo                                 m_Recoil;                                                  // 0x00F4(0x0060) (Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic)
	bool                                               m_bApplyControl;                                           // 0x0154(0x0001) (ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_PWN4[0x3];                                     // 0x0155(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	float                                              m_fBlendInTime;                                            // 0x0158(0x0004) (Edit, BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              m_fBlendInRemainingTime;                                   // 0x015C(0x0004) (ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                                     m_vBlendLoc;                                               // 0x0160(0x000C) (ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FRotator                                    m_rBlendRot;                                               // 0x016C(0x000C) (ZeroConstructor, Transient, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	struct FRotator                                    RotOffset;                                                 // 0x0178(0x000C) (ZeroConstructor, Transient, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_KWGF[0xC];                                     // 0x0184(0x000C) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FVector                                     LocOffset;                                                 // 0x0190(0x000C) (ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_PI9U[0xC];                                     // 0x019C(0x000C) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	int                                                m_nFireImpulseCounter;                                     // 0x01A8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	KillstreakAnimGraphRuntime_ERecoilAllowMirror      m_eMirrorPermissions;                                      // 0x01AC(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	KillstreakAnimGraphRuntime_EPoseMirrorPlane        m_eMirrorPlane;                                            // 0x01AD(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_PPZ2[0x2];                                     // 0x01AE(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FVector                                     m_vRotationFlipAxis;                                       // 0x01B0(0x000C) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                m_nInternalFireImpulseCounter;                             // 0x01BC(0x0004) (ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct KillstreakAnimGraphRuntime.AnimSpeedWarpDefinition
// 0x0048
struct FAnimSpeedWarpDefinition
{
	struct FBoneReference                              IkFootRootBone;                                            // 0x0000(0x0010) (Edit, NoDestructor, NativeAccessSpecifierPublic)
	TArray<struct FBoneReference>                      IkFootBones;                                               // 0x0010(0x0010) (Edit, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FBoneReference                              PelvisBone;                                                // 0x0020(0x0010) (Edit, NoDestructor, NativeAccessSpecifierPublic)
	float                                              PelvisAdjustmentAlpha;                                     // 0x0030(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                PelvisAdjustmentMaxIterations;                             // 0x0034(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              PelvisAdjustmentStiffness;                                 // 0x0038(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              PelvisAdjustmentDamping;                                   // 0x003C(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FName                                       DisableSpeedWarpCurveName;                                 // 0x0040(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct KillstreakAnimGraphRuntime.KSAnimNode_SpeedWarp
// 0x0058 (0x0130 - 0x00D8)
struct FKSAnimNode_SpeedWarp : public FAnimNode_SkeletalControlBase
{
	float                                              SpeedScaling;                                              // 0x00D8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                                     SpeedWarpForwardAxis;                                      // 0x00DC(0x000C) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FAnimSpeedWarpDefinition                    SpeedWarpSettings;                                         // 0x00E8(0x0048) (Edit, BlueprintVisible, NativeAccessSpecifierPublic)

};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
