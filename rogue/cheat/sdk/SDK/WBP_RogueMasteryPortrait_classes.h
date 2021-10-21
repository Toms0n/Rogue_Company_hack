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

// WidgetBlueprintGeneratedClass WBP_RogueMasteryPortrait.WBP_RogueMasteryPortrait_C
// 0x0048 (FullSize[0x0280] - InheritedSize[0x0238])
class UWBP_RogueMasteryPortrait_C : public UUserWidget
{
public:
	class UKSAsyncImage*                               JobIcon;                                                   // 0x0238(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                      MasteryBorder_1to4;                                        // 0x0240(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                      MasteryBorder_5to9;                                        // 0x0248(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                      MasteryBorder_Max;                                         // 0x0250(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWidgetSwitcher*                             MasteryFrameSwitcher;                                      // 0x0258(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_RogueMasteryIcon_C*                     MasteryIcon;                                               // 0x0260(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class AKSPlayerState*                              PlayerOwner;                                               // 0x0268(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UKSJobItem*                                  JobItem;                                                   // 0x0270(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UKSPersistentPlayerData*                     PersistentPlayerOwner;                                     // 0x0278(0x0008) (Edit, BlueprintVisible, ZeroConstructor, Transient, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::GetObjectCasted<UClass>(56613);
		return ptr;
	}



	void Has_Player_Owner(bool* Return_Value);
	void GetOwnerJobMasteryLevel(int* Mastery_Level);
	void GetOwnerJob(class UKSJobItem** Job);
	void MatchesBoundPlayer(class AKSPlayerState* PlayerState, class UKSPersistentPlayerData* PersistentData, bool* Return_Value);
	void ClearPreviousOwner();
	void SetPersistentPlayerOwner(class UKSPersistentPlayerData* PlayerData);
	void SetMasteryLevelExplicit(int MasteryLevel);
	void SetMasteryFrameToLevel(int MasteryLevel);
	void OnJobMasteryLevelUpdated();
	void SetJobPortraitFromSoftTexture();
	void Set_Mastery_Frame();
	void SetPlayerOwner(class AKSPlayerState* PlayerState);
	void SetJobInformation(class UKSJobItem* JobItem);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
