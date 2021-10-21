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

// WidgetBlueprintGeneratedClass WBP_AppliedEvents.WBP_AppliedEvents_C
// 0x0010 (FullSize[0x0530] - InheritedSize[0x0520])
class UWBP_AppliedEvents_C : public UKSActiveBonusesWidget
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x0520(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class UVerticalBox*                                ActiveEvents;                                              // 0x0528(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::GetObjectCasted<UClass>(84742);
		return ptr;
	}



	void PopulateActiveEvents();
	void PreConstruct(bool IsDesignTime);
	void ExecuteUbergraph_WBP_AppliedEvents(int EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
