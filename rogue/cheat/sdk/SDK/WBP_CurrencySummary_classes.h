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

// WidgetBlueprintGeneratedClass WBP_CurrencySummary.WBP_CurrencySummary_C
// 0x0050 (FullSize[0x0568] - InheritedSize[0x0518])
class UWBP_CurrencySummary_C : public UKSWidget
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x0518(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class UWBP_AsyncIcon_C*                            CurrencyIcon0;                                             // 0x0520(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_AsyncIcon_C*                            CurrencyIcon1;                                             // 0x0528(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_AsyncIcon_C*                            CurrencyIcon2;                                             // 0x0530(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                                  CurrencyText0;                                             // 0x0538(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                                  CurrencyText1;                                             // 0x0540(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                                  CurrencyText2;                                             // 0x0548(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UKSPlayerDataFactory*                        PlayerDataFactory;                                         // 0x0550(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<int>                                        DisplayedCurrencies;                                       // 0x0558(0x0010) (Edit, BlueprintVisible, HasGetValueTypeHash)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::GetObjectCasted<UClass>(62514);
		return ptr;
	}



	void SetDisplayedCurrenciesWithPurchaseItem(class UPUMG_StoreItem* PurchaseItem);
	void GetCurrencyIconWidgets(TArray<class UWBP_AsyncIcon_C*>* IconWidgets);
	void GetCurrencyTextWidgets(TArray<class UWidget*>* TextWidgets);
	void SetDisplayedCurrencies(TArray<int>* CurrenciesToDisplay);
	void UpdateCurrencyDisplay();
	void InitializeWidget(class APUMG_HUD* HUD);
	void ExecuteUbergraph_WBP_CurrencySummary(int EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
