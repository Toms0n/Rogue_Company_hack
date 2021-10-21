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

// WidgetBlueprintGeneratedClass WBP_StorePriceDisplay.WBP_StorePriceDisplay_C
// 0x0008 (FullSize[0x0240] - InheritedSize[0x0238])
class UWBP_StorePriceDisplay_C : public UUserWidget
{
public:
	class UHorizontalBox*                              PricesBox;                                                 // 0x0238(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::GetObjectCasted<UClass>(62627);
		return ptr;
	}



	void SetStorePrices(TArray<class UPUMG_StoreItemPrice*>* Prices, TArray<class UPUMG_PortalOffer*>* PortalOffers, class UPUMG_StoreItem* StoreItem);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
