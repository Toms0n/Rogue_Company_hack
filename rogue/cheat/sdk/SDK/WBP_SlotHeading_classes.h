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

// WidgetBlueprintGeneratedClass WBP_SlotHeading.WBP_SlotHeading_C
// 0x0030 (FullSize[0x0268] - InheritedSize[0x0238])
class UWBP_SlotHeading_C : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x0238(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class UTextBlock*                                  Heading;                                                   // 0x0240(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                      UnderlineBorder;                                           // 0x0248(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	struct FText                                       HeadingText;                                               // 0x0250(0x0018) (Edit, BlueprintVisible, ExposeOnSpawn)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::GetObjectCasted<UClass>(79381);
		return ptr;
	}



	void SetText(const struct FText& newText);
	void SetUnderlineColor(const struct FLinearColor& NewColor);
	void SetTextColor(const struct FSlateColor& NewColor);
	void PreConstruct(bool IsDesignTime);
	void Construct();
	void SetSlotHeading(const struct FText& Text);
	void ExecuteUbergraph_WBP_SlotHeading(int EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
