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

// AnimBlueprintGeneratedClass Sub_Hero_ABP_MountedWeapon.Sub_Hero_ABP_MountedWeapon_C
// 0x0BE0 (FullSize[0x1CC8] - InheritedSize[0x10E8])
class USub_Hero_ABP_MountedWeapon_C : public UKSCharacterAnimInst
{
public:
	unsigned char                                      UnknownData_PH0U[0x8];                                     // 0x10E8(0x0008) Fix Super Size
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x10F0(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	struct FAnimNode_Root                              AnimGraphNode_Root;                                        // 0x10F8(0x0040)
	struct FAnimNode_BlendSpacePlayerSkinned           AnimGraphNode_BlendSpaceSkinned;                           // 0x1138(0x0200)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_2;                            // 0x1338(0x0088)
	struct FAnimNode_BlendListByBool                   AnimGraphNode_BlendListByBool_2;                           // 0x13C0(0x00B0)
	struct FAnimNode_SequenceSkinned                   AnimGraphNode_SequenceSkinned;                             // 0x1470(0x0160)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer;                              // 0x15D0(0x0088)
	struct FAnimNode_StateResult                       AnimGraphNode_StateResult;                                 // 0x1658(0x0040)
	struct FAnimNode_StateMachine                      AnimGraphNode_StateMachine;                                // 0x1698(0x00C0)
	struct FAnimNode_AimOffsetSkinned                  AnimGraphNode_AimOffsetSkinned_2;                          // 0x1758(0x01C0)
	struct FAnimNode_BlendListByBool                   AnimGraphNode_BlendListByBool;                             // 0x1918(0x00B0)
	struct FAnimNode_AimOffsetSkinned                  AnimGraphNode_AimOffsetSkinned;                            // 0x19C8(0x01C0)
	struct FAnimNode_SaveCachedPose                    AnimGraphNode_SaveCachedPose;                              // 0x1B88(0x00C8)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_2;                             // 0x1C50(0x0038)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose;                               // 0x1C88(0x0038)
	class AKSCharacter*                                Character;                                                 // 0x1CC0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::GetObjectCasted<UClass>(30335);
		return ptr;
	}



	void AnimGraph(struct FPoseLink* AnimGraph);
	void EvaluateGraphExposedInputs_ExecuteUbergraph_Sub_Hero_ABP_MountedWeapon_AnimGraphNode_AimOffsetSkinned_1149DF16425BF36771ECBFAB5883FCFD();
	void BlueprintUpdateAnimation(float DeltaTimeX);
	void BlueprintInitializeAnimation();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_Sub_Hero_ABP_MountedWeapon_AnimGraphNode_AimOffsetSkinned_F46D9F994AFD701F3540A7A6C3C3AE29();
	void ExecuteUbergraph_Sub_Hero_ABP_MountedWeapon(int EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
