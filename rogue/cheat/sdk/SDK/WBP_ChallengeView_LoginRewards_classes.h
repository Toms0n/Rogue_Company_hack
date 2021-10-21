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

// WidgetBlueprintGeneratedClass WBP_ChallengeView_LoginRewards.WBP_ChallengeView_LoginRewards_C
// 0x0038 (FullSize[0x0578] - InheritedSize[0x0540])
class UWBP_ChallengeView_LoginRewards_C : public UKSLoginRewardsModal
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x0540(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class UImage*                                      Image_191;                                                 // 0x0548(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                      Image_362;                                                 // 0x0550(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_ItemInfoContainer_Centered_C*           ItemInfoContainer_2;                                       // 0x0558(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                                  TimeRemaining;                                             // 0x0560(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWidgetSwitcher*                             TimerSwitcher;                                             // 0x0568(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_LoginRewardsGrid_C*                     WBP_LoginRewardsGrid;                                      // 0x0570(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::GetObjectCasted<UClass>(86283);
		return ptr;
	}



	void BindRewardGridEvents();
	void HandleRewardItemUnhovered();
	void HandleRewardItemHovered(class UWBP_LoginRewardItem_C* RewardItemWidget);
	void BindRewardItems();
	void SetupRewardItems();
	void ResetRewardItemsNavigation();
	void SetRewardItemNavigation();
	void HandleRewardItemsReady(TArray<struct FLoginRewardItem>* RewardItems);
	void Construct();
	void InitializeWidget(class APUMG_HUD* HUD);
	void InitializeWidgetNavigation();
	void ExecuteUbergraph_WBP_ChallengeView_LoginRewards(int EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
