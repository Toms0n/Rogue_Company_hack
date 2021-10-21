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

// WidgetBlueprintGeneratedClass WBP_LoginRewardsGrid.WBP_LoginRewardsGrid_C
// 0x00E8 (FullSize[0x0600] - InheritedSize[0x0518])
class UWBP_LoginRewardsGrid_C : public UKSWidget
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x0518(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class UUniformGridPanel*                           RewardGrid;                                                // 0x0520(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_LoginRewardItem_C*                      WBP_LoginRewardItem_C_1;                                   // 0x0528(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_LoginRewardItem_C*                      WBP_LoginRewardItem_C_2;                                   // 0x0530(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_LoginRewardItem_C*                      WBP_LoginRewardItem_C_3;                                   // 0x0538(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_LoginRewardItem_C*                      WBP_LoginRewardItem_C_4;                                   // 0x0540(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_LoginRewardItem_C*                      WBP_LoginRewardItem_C_5;                                   // 0x0548(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_LoginRewardItem_C*                      WBP_LoginRewardItem_C_6;                                   // 0x0550(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_LoginRewardItem_C*                      WBP_LoginRewardItem_C_7;                                   // 0x0558(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_LoginRewardItem_C*                      WBP_LoginRewardItem_C_8;                                   // 0x0560(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_LoginRewardItem_C*                      WBP_LoginRewardItem_C_9;                                   // 0x0568(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_LoginRewardItem_C*                      WBP_LoginRewardItem_C_10;                                  // 0x0570(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_LoginRewardItem_C*                      WBP_LoginRewardItem_C_11;                                  // 0x0578(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_LoginRewardItem_C*                      WBP_LoginRewardItem_C_12;                                  // 0x0580(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_LoginRewardItem_C*                      WBP_LoginRewardItem_C_13;                                  // 0x0588(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_LoginRewardItem_C*                      WBP_LoginRewardItem_C_14;                                  // 0x0590(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	int                                                MaxPerRow;                                                 // 0x0598(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	unsigned char                                      UnknownData_E6C5[0x4];                                     // 0x059C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FScriptMulticastDelegate                    OnClaimRewardAnimComplete;                                 // 0x05A0(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	TArray<class UWBP_LoginRewardItem_C*>              LoginRewardItems;                                          // 0x05B0(0x0010) (Edit, BlueprintVisible, DisableEditOnInstance, ContainsInstancedReference, HasGetValueTypeHash)
	struct FScriptMulticastDelegate                    OnRewardItemsPopulated;                                    // 0x05C0(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	struct FScriptMulticastDelegate                    OnRewardHovered;                                           // 0x05D0(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	struct FScriptMulticastDelegate                    OnRewardUnhovered;                                         // 0x05E0(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	struct FScriptMulticastDelegate                    OnRewardClicked;                                           // 0x05F0(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::GetObjectCasted<UClass>(80309);
		return ptr;
	}



	void GetRewardItems(TArray<class UWBP_LoginRewardItem_C*>* RewardItems);
	void SetMaxPerRow(int Num);
	void GetRewardItemAtIndex(int Index, class UWBP_LoginRewardItem_C** RewardItem);
	void HandleClaimRewardAnimFinished();
	void ResetGrid();
	void PopulateRewardGrid(TArray<struct FLoginRewardItem>* RewardItems, bool AllowClaimReward);
	void HandleOnRewardHovered(class UWBP_LoginRewardItem_C* RewardItemWidget);
	void HandleOnRewardUnhovered();
	void HandleOnRewardClicked(const struct FLoginRewardItem& RewardItem);
	void ExecuteUbergraph_WBP_LoginRewardsGrid(int EntryPoint);
	void OnRewardClicked__DelegateSignature(const struct FLoginRewardItem& RewardItem);
	void OnRewardUnhovered__DelegateSignature();
	void OnRewardHovered__DelegateSignature(class UWBP_LoginRewardItem_C* Widget);
	void OnRewardItemsPopulated__DelegateSignature();
	void OnClaimRewardAnimComplete__DelegateSignature();
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
