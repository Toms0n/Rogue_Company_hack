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

// WidgetBlueprintGeneratedClass WBP_ChallengeView_DailyContracts.WBP_ChallengeView_DailyContracts_C
// 0x0060 (FullSize[0x0588] - InheritedSize[0x0528])
class UWBP_ChallengeView_DailyContracts_C : public UKSDailyChallengeViewBase
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x0528(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class UImage*                                      Image_191;                                                 // 0x0530(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                      Image_362;                                                 // 0x0538(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                                  TimeRemaining;                                             // 0x0540(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWidgetSwitcher*                             TimerSwitcher;                                             // 0x0548(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_ChallengeEntry_Card_C*                  WBP_ChallengeEntry_Card;                                   // 0x0550(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_ChallengeEntry_Card_C*                  WBP_ChallengeEntry_Card_2;                                 // 0x0558(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_ChallengeEntry_Card_C*                  WBP_ChallengeEntry_Card_3;                                 // 0x0560(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_ChallengeEntry_Weekly_C*                WBP_ChallengeEntry_Weekly;                                 // 0x0568(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	int                                                CachedTimeRemainingSecs;                                   // 0x0570(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_4MVT[0x4];                                     // 0x0574(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	TArray<int>                                        CachedContractIds;                                         // 0x0578(0x0010) (Edit, BlueprintVisible, DisableEditOnInstance, HasGetValueTypeHash)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::GetObjectCasted<UClass>(80372);
		return ptr;
	}



	TArray<class UKSActivityInstance*> GetDisplayingChallenges();
	void Get_Daily_Challenge_Cards(TArray<class UWBP_ChallengeEntry_Card_C*>* Return_Value);
	void InitializeWidgetNavigation();
	void InitializeChallengeDisplays();
	void DisplayChallenge(int Index, class UKSActivityInstance* ActivityInstance, bool PlayFlourish);
	void DisplayChallengeTimeRemaining(int TimeRemainingSeconds);
	void ExecuteUbergraph_WBP_ChallengeView_DailyContracts(int EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
