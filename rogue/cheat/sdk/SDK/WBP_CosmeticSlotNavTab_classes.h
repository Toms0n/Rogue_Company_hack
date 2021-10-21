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

// WidgetBlueprintGeneratedClass WBP_CosmeticSlotNavTab.WBP_CosmeticSlotNavTab_C
// 0x0010 (FullSize[0x0679] - InheritedSize[0x0669])
class UWBP_CosmeticSlotNavTab_C : public UWBP_subscreen_nav_tab_C
{
public:
	unsigned char                                      UnknownData_IZIW[0x7];                                     // 0x0669(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x0670(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	Killstreak_EMercCosmeticSlot                       CosmeticSlot;                                              // 0x0678(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::GetObjectCasted<UClass>(60789);
		return ptr;
	}



	void Construct();
	void ExecuteUbergraph_WBP_CosmeticSlotNavTab(int EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
