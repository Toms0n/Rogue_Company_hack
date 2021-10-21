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

// WidgetBlueprintGeneratedClass WBP_WeaponMasteryMilestoneProgress.WBP_WeaponMasteryMilestoneProgress_C
// 0x0056 (FullSize[0x05A6] - InheritedSize[0x0550])
class UWBP_WeaponMasteryMilestoneProgress_C : public UKSMilestoneCompletedScreen
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x0550(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class UWidgetAnimation*                            AnimOnShown;                                               // 0x0558(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UHorizontalBox*                              MilestoneEntryContainer;                                   // 0x0560(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                      ShadeBox;                                                  // 0x0568(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_StandardButtonMedium_C*                 WBP_StandardButtonMedium;                                  // 0x0570(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_WeaponMilestoneEntry_Progression_C*     WBP_WeaponMilestoneEntry_Progression;                      // 0x0578(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_WeaponMilestoneEntry_Progression_C*     WBP_WeaponMilestoneEntry_Progression_2;                    // 0x0580(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_WeaponMilestoneEntry_Progression_C*     WBP_WeaponMilestoneEntry_Progression_3;                    // 0x0588(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_WeaponMilestoneEntry_Progression_C*     WBP_WeaponMilestoneEntry_Progression_4;                    // 0x0590(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	struct FName                                       WeaponViewActorName;                                       // 0x0598(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                CurrentAnimRewardXpBonus;                                  // 0x05A0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               WaitingForModel;                                           // 0x05A4(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                               WaitingForWeaponMeter;                                     // 0x05A5(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::GetObjectCasted<UClass>(89912);
		return ptr;
	}



	void StartNextWaitingMilestoneEntry();
	void GetMilestoneEntryByActivity(class UKSActivityInstance* Activity_Instance, class UWBP_WeaponMilestoneEntry_Progression_C** Milestone_Entry);
	void GetMilestoneEntryByTier(int Milestone_Number, class UWBP_WeaponMilestoneEntry_Progression_C** Return_Value);
	void GetMilestoneEntries(TArray<class UWBP_WeaponMilestoneEntry_Progression_C*>* Return_Value);
	void InitializeWidgetNavigation();
	void BndEvt__WBP_StandardButtonMedium_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature(class UWidget* Widget);
	void InitializeWidget(class APUMG_HUD* HUD);
	void ConfigureViewModel(class UKSWeaponAsset* WeaponAsset, class UKSWeaponAttachment* WeaponWrap);
	void DisplayWeaponAsset(class UKSWeaponAsset* WeaponAsset);
	void OnShown();
	void PopulateMilestoneData(TArray<struct FKSMilestoneCompletedSummaryEntry> MilestonesForWeapon);
	void HandleMilestoneCompletedDuringAnim(int RewardCount);
	void Handle_Model_Set();
	void StartAnimSequence();
	void Handle_Meter_Level_Up_Complete();
	void ExecuteUbergraph_WBP_WeaponMasteryMilestoneProgress(int EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
