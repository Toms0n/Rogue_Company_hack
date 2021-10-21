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

// AnimBlueprintGeneratedClass MasterLobby_ABP.MasterLobby_ABP_C
// 0x164A (FullSize[0x2732] - InheritedSize[0x10E8])
class UMasterLobby_ABP_C : public UKSCharacterAnimInst
{
public:
	unsigned char                                      UnknownData_5IN7[0x8];                                     // 0x10E8(0x0008) Fix Super Size
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x10F0(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	struct FAnimNode_Root                              AnimGraphNode_Root;                                        // 0x10F8(0x0040)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_2;                            // 0x1138(0x0088)
	struct FAnimNode_SequenceSkinned                   AnimGraphNode_SequenceSkinned;                             // 0x11C0(0x0160)
	struct FAnimNode_StateResult                       AnimGraphNode_StateResult;                                 // 0x1320(0x0040)
	struct FAnimNode_StateMachine                      AnimGraphNode_StateMachine;                                // 0x1360(0x00C0)
	struct FAnimNode_ConvertLocalToComponentSpace      AnimGraphNode_LocalToComponentSpace_4;                     // 0x1420(0x0030)
	struct FAnimNode_ConvertComponentToLocalSpace      AnimGraphNode_ComponentToLocalSpace_4;                     // 0x1450(0x0030)
	struct FAnimNode_LayeredBoneBlend                  AnimGraphNode_LayeredBoneBlend;                            // 0x1480(0x00D0)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer;                              // 0x1550(0x0088)
	struct FAnimNode_CopyBone                          AnimGraphNode_CopyBone_2;                                  // 0x15D8(0x0100)
	struct FAnimNode_CopyBone                          AnimGraphNode_CopyBone;                                    // 0x16D8(0x0100)
	struct FAnimNode_SaveCachedPose                    AnimGraphNode_SaveCachedPose_3;                            // 0x17D8(0x00C8)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_5;                             // 0x18A0(0x0038)
	bool                                               __CustomProperty_bIsLobby_90FBADB5424A5A00D7B0F4B018D67A66; // 0x18D8(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                               __CustomProperty_bIsServer_90FBADB5424A5A00D7B0F4B018D67A66; // 0x18D9(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_6LYQ[0x6];                                     // 0x18DA(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FAnimNode_LinkedAnimGraph                   AnimGraphNode_SubInstance;                                 // 0x18E0(0x00B0)
	struct FAnimNode_Slot                              AnimGraphNode_Slot_2;                                      // 0x1990(0x0058)
	struct FAnimNode_BlendListByBool                   AnimGraphNode_BlendListByBool_2;                           // 0x19E8(0x00B0)
	struct FAnimNode_ConvertLocalToComponentSpace      AnimGraphNode_LocalToComponentSpace_3;                     // 0x1A98(0x0030)
	struct FAnimNode_ConvertComponentToLocalSpace      AnimGraphNode_ComponentToLocalSpace_3;                     // 0x1AC8(0x0030)
	struct FAnimNode_ModifyBone                        AnimGraphNode_ModifyBone_2;                                // 0x1AF8(0x0118)
	struct FAnimNode_SaveCachedPose                    AnimGraphNode_SaveCachedPose_2;                            // 0x1C10(0x00C8)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_4;                             // 0x1CD8(0x0038)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_3;                             // 0x1D10(0x0038)
	struct FAnimNode_BlendListByBool                   AnimGraphNode_BlendListByBool;                             // 0x1D48(0x00B0)
	unsigned char                                      UnknownData_SYV8[0x8];                                     // 0x1DF8(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FAnimNode_RigidBodySkipServer               AnimGraphNode_RigidBodySkipServer;                         // 0x1E00(0x05B0)
	struct FAnimNode_ConvertComponentToLocalSpace      AnimGraphNode_ComponentToLocalSpace_2;                     // 0x23B0(0x0030)
	struct FAnimNode_ConvertLocalToComponentSpace      AnimGraphNode_LocalToComponentSpace_2;                     // 0x23E0(0x0030)
	struct FAnimNode_SaveCachedPose                    AnimGraphNode_SaveCachedPose;                              // 0x2410(0x00C8)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_2;                             // 0x24D8(0x0038)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose;                               // 0x2510(0x0038)
	struct FAnimNode_Slot                              AnimGraphNode_Slot;                                        // 0x2548(0x0058)
	struct FAnimNode_ModifyBone                        AnimGraphNode_ModifyBone;                                  // 0x25A0(0x0118)
	struct FAnimNode_ConvertLocalToComponentSpace      AnimGraphNode_LocalToComponentSpace;                       // 0x26B8(0x0030)
	struct FAnimNode_ConvertComponentToLocalSpace      AnimGraphNode_ComponentToLocalSpace;                       // 0x26E8(0x0030)
	float                                              R_Prop_Lock_Alpha;                                         // 0x2718(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              L_Prop_Lock_Alpha;                                         // 0x271C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               bIsServer;                                                 // 0x2720(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                               SkinUseCharacterScale;                                     // 0x2721(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_KZ7L[0x2];                                     // 0x2722(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FVector                                     CharacterScale;                                            // 0x2724(0x000C) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               ChildPhysicsAssetEnable;                                   // 0x2730(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                               RemoveHeadAccessory;                                       // 0x2731(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::GetObjectCasted<UClass>(54604);
		return ptr;
	}



	void AnimGraph(struct FPoseLink* AnimGraph);
	void AnimNotify_Lobby_Unlock_LProp();
	void AnimNotify_Lobby_Unlock_RProp();
	void AnimNotify_Lobby_Lock_LProp();
	void AnimNotify_Lobby_Lock_RProp();
	void BlueprintInitializeAnimation();
	void Set_Skinned_Local_Parameters();
	void UpdateTurnInPlace(float DeltaSeconds);
	void ExecuteUbergraph_MasterLobby_ABP(int EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
