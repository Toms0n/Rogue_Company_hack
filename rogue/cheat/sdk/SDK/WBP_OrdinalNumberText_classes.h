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

// WidgetBlueprintGeneratedClass WBP_OrdinalNumberText.WBP_OrdinalNumberText_C
// 0x001C (FullSize[0x0254] - InheritedSize[0x0238])
class UWBP_OrdinalNumberText_C : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x0238(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class UTextBlock*                                  MainText;                                                  // 0x0240(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                                  SuperscriptText;                                           // 0x0248(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	int                                                Number;                                                    // 0x0250(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::GetObjectCasted<UClass>(61763);
		return ptr;
	}



	void Get_Language_Specific_Superscript_Text(const struct FString& Language_Code, struct FText* Return_Value);
	void Get_Language_Specific_Main_Text(const struct FString& Language_Code, struct FText* Return_Value);
	void PreConstruct(bool IsDesignTime);
	void Set_Font(const struct FSlateFontInfo& InFontInfo);
	void Set_Value(int Number);
	void ExecuteUbergraph_WBP_OrdinalNumberText(int EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
