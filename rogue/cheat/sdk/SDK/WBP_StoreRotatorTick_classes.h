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

// WidgetBlueprintGeneratedClass WBP_StoreRotatorTick.WBP_StoreRotatorTick_C
// 0x0008 (FullSize[0x0520] - InheritedSize[0x0518])
class UWBP_StoreRotatorTick_C : public UKSWidget
{
public:
	class UBorder*                                     TickMark;                                                  // 0x0518(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::GetObjectCasted<UClass>(79760);
		return ptr;
	}



	void SetTickActive(bool IsActive);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
