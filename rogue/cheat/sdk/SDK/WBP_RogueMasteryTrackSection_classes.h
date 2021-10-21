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

// WidgetBlueprintGeneratedClass WBP_RogueMasteryTrackSection.WBP_RogueMasteryTrackSection_C
// 0x00B8 (FullSize[0x05D0] - InheritedSize[0x0518])
class UWBP_RogueMasteryTrackSection_C : public UKSWidget
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x0518(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class UHorizontalBox*                              MasteryRewardEntries;                                      // 0x0520(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_ProgressEarnedBar_C*                    WBP_ProgressEarnedBar;                                     // 0x0528(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_RogueMasteryTrackLevel_C*               WBP_RogueMasteryTrackEntry;                                // 0x0530(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_RogueMasteryTrackLevel_C*               WBP_RogueMasteryTrackEntry_2;                              // 0x0538(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_RogueMasteryTrackLevel_C*               WBP_RogueMasteryTrackEntry_3;                              // 0x0540(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_RogueMasteryTrackLevel_C*               WBP_RogueMasteryTrackEntry_4;                              // 0x0548(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_RogueMasteryTrackLevel_C*               WBP_RogueMasteryTrackEntry_5;                              // 0x0550(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_RogueMasteryTrackLevel_C*               WBP_RogueMasteryTrackEntry_6;                              // 0x0558(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_RogueMasteryTrackLevel_C*               WBP_RogueMasteryTrackEntry_7;                              // 0x0560(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_RogueMasteryTrackLevel_C*               WBP_RogueMasteryTrackEntry_8;                              // 0x0568(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_RogueMasteryTrackLevel_C*               WBP_RogueMasteryTrackEntry_9;                              // 0x0570(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_RogueMasteryTrackLevel_C*               WBP_RogueMasteryTrackEntry_10;                             // 0x0578(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	struct FScriptMulticastDelegate                    OnTrackEntrySelected;                                      // 0x0580(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	struct FActivityTier                               LastSelectedActivity;                                      // 0x0590(0x0040) (Edit, BlueprintVisible, DisableEditOnInstance)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::GetObjectCasted<UClass>(79139);
		return ptr;
	}



	void DisplayGamepadFocus(bool ShouldDisplayFocus);
	void SetSelectedEntry(int ActivityTierNumber);
	void SetSectionData(struct FMasterySectionData* SectionData, int CurrentTier);
	void GetSelectedActivity(int Index, struct FActivityTier* Activity);
	void OnMasteryLevelSelected(const struct FActivityTier& Activity);
	void PreConstruct(bool IsDesignTime);
	void Construct();
	void InitializeWidget(class APUMG_HUD* HUD);
	void ExecuteUbergraph_WBP_RogueMasteryTrackSection(int EntryPoint);
	void OnTrackEntrySelected__DelegateSignature(const struct FActivityTier& ActivityTier);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
