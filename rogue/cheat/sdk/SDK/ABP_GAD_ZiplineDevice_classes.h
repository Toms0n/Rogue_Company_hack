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

// AnimBlueprintGeneratedClass ABP_GAD_ZiplineDevice.ABP_GAD_ZiplineDevice_C
// 0x105C (FullSize[0x217C] - InheritedSize[0x1120])
class UABP_GAD_ZiplineDevice_C : public UKSZiplineAnimInst
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x1120(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	struct FAnimNode_Root                              AnimGraphNode_Root;                                        // 0x1128(0x0040)
	struct FAnimNode_ModifyBone                        AnimGraphNode_ModifyBone_6;                                // 0x1168(0x0118)
	struct FAnimNode_ModifyBone                        AnimGraphNode_ModifyBone_5;                                // 0x1280(0x0118)
	struct FAnimNode_ModifyBone                        AnimGraphNode_ModifyBone_4;                                // 0x1398(0x0118)
	struct FAnimNode_ConvertLocalToComponentSpace      AnimGraphNode_LocalToComponentSpace_4;                     // 0x14B0(0x0030)
	struct FAnimNode_ConvertComponentToLocalSpace      AnimGraphNode_ComponentToLocalSpace_4;                     // 0x14E0(0x0030)
	struct FAnimNode_BlendListByBool                   AnimGraphNode_BlendListByBool_3;                           // 0x1510(0x00B0)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_4;                            // 0x15C0(0x0088)
	struct FAnimNode_StateResult                       AnimGraphNode_StateResult;                                 // 0x1648(0x0040)
	struct FAnimNode_StateMachine                      AnimGraphNode_StateMachine;                                // 0x1688(0x00C0)
	struct FAnimNode_ConvertLocalToComponentSpace      AnimGraphNode_LocalToComponentSpace_3;                     // 0x1748(0x0030)
	struct FAnimNode_ConvertComponentToLocalSpace      AnimGraphNode_ComponentToLocalSpace_3;                     // 0x1778(0x0030)
	struct FAnimNode_SaveCachedPose                    AnimGraphNode_SaveCachedPose;                              // 0x17A8(0x00C8)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose;                               // 0x1870(0x0038)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_3;                            // 0x18A8(0x0088)
	struct FAnimNode_CCDIK                             AnimGraphNode_CCDIK;                                       // 0x1930(0x0190)
	struct FAnimNode_ModifyBone                        AnimGraphNode_ModifyBone_3;                                // 0x1AC0(0x0118)
	struct FAnimNode_BlendListByBool                   AnimGraphNode_BlendListByBool_2;                           // 0x1BD8(0x00B0)
	struct FAnimNode_ConvertComponentToLocalSpace      AnimGraphNode_ComponentToLocalSpace_2;                     // 0x1C88(0x0030)
	struct FAnimNode_ConvertLocalToComponentSpace      AnimGraphNode_LocalToComponentSpace_2;                     // 0x1CB8(0x0030)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_2;                            // 0x1CE8(0x0088)
	struct FAnimNode_ModifyBone                        AnimGraphNode_ModifyBone_2;                                // 0x1D70(0x0118)
	struct FAnimNode_BlendListByBool                   AnimGraphNode_BlendListByBool;                             // 0x1E88(0x00B0)
	struct FAnimNode_ConvertComponentToLocalSpace      AnimGraphNode_ComponentToLocalSpace;                       // 0x1F38(0x0030)
	struct FAnimNode_ConvertLocalToComponentSpace      AnimGraphNode_LocalToComponentSpace;                       // 0x1F68(0x0030)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer;                              // 0x1F98(0x0088)
	struct FAnimNode_ModifyBone                        AnimGraphNode_ModifyBone;                                  // 0x2020(0x0118)
	class UPCM_Hero_ABP_C*                             HeroABP;                                                   // 0x2138(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                     Zipline_IK_Target_Location;                                // 0x2140(0x000C) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                     Zipline_Device_Rope_Pivot;                                 // 0x214C(0x000C) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FRotator                                    Zipline_IK_Target_Rotation;                                // 0x2158(0x000C) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	struct FVector                                     L_ZiplineDevice_Location;                                  // 0x2164(0x000C) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                     R_ZiplineDevice_Location;                                  // 0x2170(0x000C) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::GetObjectCasted<UClass>(25940);
		return ptr;
	}



	void AnimGraph(struct FPoseLink* AnimGraph);
	void BlueprintUpdateAnimation(float DeltaTimeX);
	void ExecuteUbergraph_ABP_GAD_ZiplineDevice(int EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
