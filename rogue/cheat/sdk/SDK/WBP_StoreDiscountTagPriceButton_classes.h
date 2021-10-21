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

// WidgetBlueprintGeneratedClass WBP_StoreDiscountTagPriceButton.WBP_StoreDiscountTagPriceButton_C
// 0x0008 (FullSize[0x0240] - InheritedSize[0x0238])
class UWBP_StoreDiscountTagPriceButton_C : public UUserWidget
{
public:
	class UTextBlock*                                  DiscountTag;                                               // 0x0238(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::GetObjectCasted<UClass>(72067);
		return ptr;
	}



	void SetSaleMessage();
	void SetDiscountPercentage(int Percentage);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
