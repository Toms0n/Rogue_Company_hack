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

// AnimBlueprintGeneratedClass BombActivator_ABP.BombActivator_ABP_C
// 0x056B (FullSize[0x07D3] - InheritedSize[0x0268])
class UBombActivator_ABP_C : public UAnimInstance
{
public:
	unsigned char                                      UnknownData_0STT[0x8];                                     // 0x0268(0x0008) Fix Super Size
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x0270(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	struct FAnimNode_Root                              AnimGraphNode_Root;                                        // 0x0278(0x0040)
	struct FAnimNode_Slot                              AnimGraphNode_Slot;                                        // 0x02B8(0x0058)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_4;                          // 0x0310(0x0038)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_3;                          // 0x0348(0x0038)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_2;                          // 0x0380(0x0038)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult;                            // 0x03B8(0x0038)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_4;                            // 0x03F0(0x0088)
	struct FAnimNode_StateResult                       AnimGraphNode_StateResult_4;                               // 0x0478(0x0040)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_3;                            // 0x04B8(0x0088)
	struct FAnimNode_StateResult                       AnimGraphNode_StateResult_3;                               // 0x0540(0x0040)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_2;                            // 0x0580(0x0088)
	struct FAnimNode_StateResult                       AnimGraphNode_StateResult_2;                               // 0x0608(0x0040)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer;                              // 0x0648(0x0088)
	struct FAnimNode_StateResult                       AnimGraphNode_StateResult;                                 // 0x06D0(0x0040)
	struct FAnimNode_StateMachine                      AnimGraphNode_StateMachine;                                // 0x0710(0x00C0)
	bool                                               BombDisarming;                                             // 0x07D0(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                               BombPlanted;                                               // 0x07D1(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                               NewVar_1;                                                  // 0x07D2(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::GetObjectCasted<UClass>(33469);
		return ptr;
	}



	void AnimGraph(struct FPoseLink* AnimGraph);
	void EvaluateGraphExposedInputs_ExecuteUbergraph_BombActivator_ABP_AnimGraphNode_TransitionResult_BAB1EF554FE8E3E61CD2458A88DC7339();
	void AnimNotify_PlayBombPlantedSFX();
	void AnimNotify_PlayBombLoopSFX();
	void AnimNotify_PlayBombDisarmingSFX();
	void AnimNotify_StopBombPlantedSFX();
	void AnimNotify_StopBombLoopSFX();
	void AnimNotify_StopBombDisarmingSFX();
	void ExecuteUbergraph_BombActivator_ABP(int EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
