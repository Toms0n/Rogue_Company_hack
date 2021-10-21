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

// WidgetBlueprintGeneratedClass WBP_WeaponMasteryTrack.WBP_WeaponMasteryTrack_C
// 0x0048 (FullSize[0x0560] - InheritedSize[0x0518])
class UWBP_WeaponMasteryTrack_C : public UKSWidget
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x0518(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class UTextBlock*                                  MasteryLevel;                                              // 0x0520(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_MasteryPointsCount_C*                   WBP_MasteryPointsCount;                                    // 0x0528(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_WeaponMasteryTrackSection_C*            WeaponMasterySection;                                      // 0x0530(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UHorizontalBox*                              XPWrapper;                                                 // 0x0538(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	struct FScriptMulticastDelegate                    OnMasteryLevelSelectedEvent;                               // 0x0540(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	struct FScriptMulticastDelegate                    OnPrestiegeSelected;                                       // 0x0550(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::GetObjectCasted<UClass>(75857);
		return ptr;
	}



	void Display_Weapons_Master();
	void Display_Weapon_Asset(class UKSWeaponAsset* WeaponAsset);
	void Display_Weapon_Category(class UKSWeaponCategoryAsset* WeaponCategory);
	void Highlight_Reward_Tier(const struct FActivityTier& SelectedTier);
	void PopulateRewardTiers(TArray<struct FActivityTier>* SectionTiers, float SectionProgress);
	void DisplayActivityProgress(int Level, float CurrentLevelProgress, int CurrentXp, int RequiredXPForLevel);
	void OnInputStateChanged(TEnumAsByte<PlatformGameFramework_EPGAME_INPUT_STATE> InputState);
	void OnMasteryLevelSelected(const struct FActivityTier& ActivityTier);
	void DisplayProgress(int Mastery_Level, int CurrentXp, int RequiredXPForLevel);
	void Construct();
	void InitializeWidget(class APUMG_HUD* HUD);
	void ExecuteUbergraph_WBP_WeaponMasteryTrack(int EntryPoint);
	void OnPrestiegeSelected__DelegateSignature();
	void OnMasteryLevelSelectedEvent__DelegateSignature(const struct FActivityTier& ActivityTier);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
