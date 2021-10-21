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

// BlueprintGeneratedClass Lobby_Core_RogueScreen.Lobby_Core_RogueScreen_C
// 0x0020 (FullSize[0x0248] - InheritedSize[0x0228])
class ALobby_Core_RogueScreen_C : public ALevelScriptActor
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x0228(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	bool                                               Enable_Pose_Rogue_Time_Dilation;                           // 0x0230(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_OM8R[0x7];                                     // 0x0231(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class ARogueScreenPreviewActor_WithPose_C*         PosedRogueActor_ExecuteUbergraph_Lobby_Core_RogueScreen_RefProperty; // 0x0238(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AKSLobbyCameraActor*                         PosedRogueCamera_ExecuteUbergraph_Lobby_Core_RogueScreen_RefProperty; // 0x0240(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::GetObjectCasted<UClass>(245107);
		return ptr;
	}



	void On_Rogue_Preview_Fully_Loaded();
	void Time_Dilation_for__Posed_Rogues();
	void ReceiveTick(float DeltaSeconds);
	void ReceiveBeginPlay();
	void On_Player_Rogue_Preview_Changed(class AKSJobSelectPreviewActor* PreviewActor, Killstreak_EKSJobSelectPreviewLoadState PreviousState);
	void ExecuteUbergraph_Lobby_Core_RogueScreen(int EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
