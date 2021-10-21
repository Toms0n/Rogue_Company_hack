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

// WidgetBlueprintGeneratedClass WBP_PartyModule.WBP_PartyModule_C
// 0x0080 (FullSize[0x05A8] - InheritedSize[0x0528])
class UWBP_PartyModule_C : public UKSPartyManagerWidgetBase
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x0528(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class UWBP_LeaveParty_C*                           LeaveParty;                                                // 0x0530(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_PartyModuleCardSlot_C*                  SlotA;                                                     // 0x0538(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_PartyModuleCardSlot_C*                  SlotB;                                                     // 0x0540(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_PartyModuleCardSlot_C*                  SlotC;                                                     // 0x0548(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_PartyModuleCardSlot_C*                  SlotD;                                                     // 0x0550(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_Header3_C*                              WBP_Header3_C;                                             // 0x0558(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_ModuleHeader_C*                         WBP_ModuleHeader;                                          // 0x0560(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_Social_Snapshot_C*                      WBP_Social_Snapshot;                                       // 0x0568(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_VoiceActivityContainer_C*               WBP_VoiceActivityContainer;                                // 0x0570(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	struct FScriptMulticastDelegate                    OnPlayerCardSelected;                                      // 0x0578(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	struct FScriptMulticastDelegate                    OnPlayerCardBackButton;                                    // 0x0588(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	struct FScriptMulticastDelegate                    OnpartyLeaveVisibilityChange;                              // 0x0598(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::GetObjectCasted<UClass>(82953);
		return ptr;
	}



	void GetPrimaryFocus(class UWBP_Social_Snapshot_C** Primary_Focus);
	void FindPlayerCardByVoiceId(const struct FString& VoiceId, class UWBP_player_card_module_C** PlayerCard);
	void Get_Navigation_Widgets(TArray<class UPUMG_Widget*>* Return_Value);
	void Get_Other_Party_Members(TArray<struct FPUMG_PartyMemberData>* Party_Members, TArray<struct FPUMG_PartyMemberData>* Return_Value);
	void ApplyPartyData(TArray<struct FPUMG_PartyMemberData> PartyMembers);
	void InitializeWidget(class APUMG_HUD* HUD);
	void VoiceParticipantAdded(const struct FString& AccountId);
	void VoiceParticipantRemoved(const struct FString& AccountId);
	void VoiceParticipantUpdated(const struct FString& AccountId, bool IsTalking, bool IsMuted);
	void VoiceStateChange(KillstreakUINew_EKSVoiceActivityAudioState State);
	void Handle_Player_Card_Clicked(class UWBP_player_card_module_C* Selected_Player_Card);
	void Handle_Player_Card_Back();
	void HandlePartyLeaveVisibilityChange(bool Visible);
	void ExecuteUbergraph_WBP_PartyModule(int EntryPoint);
	void OnPartyLeaveVisibilityChange__DelegateSignature(bool Visible);
	void OnPlayerCardBackButton__DelegateSignature();
	void OnPlayerCardSelected__DelegateSignature(class UWBP_player_card_module_C* Selected_Player_Card);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
