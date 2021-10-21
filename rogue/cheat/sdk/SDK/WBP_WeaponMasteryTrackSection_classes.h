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

// WidgetBlueprintGeneratedClass WBP_WeaponMasteryTrackSection.WBP_WeaponMasteryTrackSection_C
// 0x0098 (FullSize[0x05B0] - InheritedSize[0x0518])
class UWBP_WeaponMasteryTrackSection_C : public UKSWidget
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x0518(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class UHorizontalBox*                              MasteryRewardEntries;                                      // 0x0520(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_ProgressEarnedBar_C*                    WBP_ProgressEarnedBar;                                     // 0x0528(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_WeaponMasteryTrackLevel_C*              WBP_WeaponMasteryTrackLevel;                               // 0x0530(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_WeaponMasteryTrackLevel_C*              WBP_WeaponMasteryTrackLevel_2;                             // 0x0538(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_WeaponMasteryTrackLevel_C*              WBP_WeaponMasteryTrackLevel_3;                             // 0x0540(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_WeaponMasteryTrackLevel_C*              WBP_WeaponMasteryTrackLevel_4;                             // 0x0548(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_WeaponMasteryTrackLevel_C*              WBP_WeaponMasteryTrackLevel_5;                             // 0x0550(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_WeaponMasteryTrackLevel_C*              WBP_WeaponMasteryTrackLevel_6;                             // 0x0558(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	struct FScriptMulticastDelegate                    OnTrackEntrySelected;                                      // 0x0560(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	struct FActivityTier                               LastSelectedActivity;                                      // 0x0570(0x0040) (Edit, BlueprintVisible, DisableEditOnInstance)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::GetObjectCasted<UClass>(75813);
		return ptr;
	}



	void GetTrackEntries(TArray<class UWBP_WeaponMasteryTrackLevel_C*>* Return_Value);
	void DisplayWeaponsMaster();
	void DisplayWeaponCategory(class UKSWeaponCategoryAsset* WeaponCategory);
	void DisplayWeaponAsset(class UKSWeaponAsset* WeaponAsset);
	void Highlight_Reward_Tier(const struct FActivityTier& Selected_Tier);
	void UpdateCurrentTier(int CurrentTier);
	void DisplayGamepadFocus(bool ShouldDisplayFocus);
	void SetSectionData(TArray<struct FActivityTier>* SectionTiers, float SectionProgress);
	void OnMasteryLevelSelected(const struct FActivityTier& Activity_Tier);
	void PreConstruct(bool IsDesignTime);
	void Construct();
	void InitializeWidget(class APUMG_HUD* HUD);
	void ExecuteUbergraph_WBP_WeaponMasteryTrackSection(int EntryPoint);
	void OnTrackEntrySelected__DelegateSignature(const struct FActivityTier& ActivityTier);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
