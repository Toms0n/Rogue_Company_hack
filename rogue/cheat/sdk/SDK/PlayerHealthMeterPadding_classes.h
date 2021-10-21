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

// WidgetBlueprintGeneratedClass PlayerHealthMeterPadding.PlayerHealthMeterPadding_C
// 0x0008 (FullSize[0x0240] - InheritedSize[0x0238])
class UPlayerHealthMeterPadding_C : public UUserWidget
{
public:
	class UHorizontalBox*                              PaddingContainer;                                          // 0x0238(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::GetObjectCasted<UClass>(25138);
		return ptr;
	}



	void SetNumSegments(int NumSegments);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
