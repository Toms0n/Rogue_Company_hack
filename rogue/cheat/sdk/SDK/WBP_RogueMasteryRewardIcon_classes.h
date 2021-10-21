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

// WidgetBlueprintGeneratedClass WBP_RogueMasteryRewardIcon.WBP_RogueMasteryRewardIcon_C
// 0x0010 (FullSize[0x0248] - InheritedSize[0x0238])
class UWBP_RogueMasteryRewardIcon_C : public UUserWidget
{
public:
	class UImage*                                      Fill;                                                      // 0x0238(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                      Stroke;                                                    // 0x0240(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::GetObjectCasted<UClass>(78795);
		return ptr;
	}



	void SetFromTagContainer(const struct FGameplayTagContainer& GameplayTagContainer);
	void SetFromRarity(const struct FGameplayTag& RarityTag);
	void SetRewardItem(class UPUMG_StoreItem* StoreItem);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
