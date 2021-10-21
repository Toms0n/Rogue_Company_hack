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

// WidgetBlueprintGeneratedClass WBP_PipProgressWidget.WBP_PipProgressWidget_C
// 0x0038 (FullSize[0x0270] - InheritedSize[0x0238])
class UWBP_PipProgressWidget_C : public UUserWidget
{
public:
	class UHorizontalBox*                              PipContainer;                                              // 0x0238(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_PipProgressEntry_C*                     WBP_PipProgressEntry;                                      // 0x0240(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_PipProgressEntry_C*                     WBP_PipProgressEntry_2;                                    // 0x0248(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	struct FLinearColor                                BaseColor;                                                 // 0x0250(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                                FillColor;                                                 // 0x0260(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::GetObjectCasted<UClass>(61089);
		return ptr;
	}



	void SetPipsState(int CompletedPips, int TotalPips);
	void GetPips(TArray<class UWBP_PipProgressEntry_C*>* PipEntries);
	void SetPipColors(const struct FLinearColor& BaseColor, const struct FLinearColor& FillColor);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
