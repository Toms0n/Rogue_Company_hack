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

// WidgetBlueprintGeneratedClass WBP_VersionNumber.WBP_VersionNumber_C
// 0x0010 (FullSize[0x0528] - InheritedSize[0x0518])
class UWBP_VersionNumber_C : public UKSWidget
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x0518(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class UTextBlock*                                  VersionDisplay;                                            // 0x0520(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::GetObjectCasted<UClass>(57460);
		return ptr;
	}



	void Set_Version_Text();
	void InitializeWidget(class APUMG_HUD* HUD);
	void ExecuteUbergraph_WBP_VersionNumber(int EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
