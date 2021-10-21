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

// WidgetBlueprintGeneratedClass WBP_RegionSelectRedirect.WBP_RegionSelectRedirect_C
// 0x0018 (FullSize[0x0530] - InheritedSize[0x0518])
class UWBP_RegionSelectRedirect_C : public UKSRegionSelectModal
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x0518(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class UWBP_RegionSelect_C*                         WBP_RegionSelect;                                          // 0x0520(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UAkAudioEvent*                               ShowSFX;                                                   // 0x0528(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::GetObjectCasted<UClass>(63241);
		return ptr;
	}



	void InitializeWidget(class APUMG_HUD* HUD);
	void Handle_Region_Selected();
	void Handle_Region_Select_Entries_Created();
	void InitializeWidgetNavigation();
	void OnShown();
	void ExecuteUbergraph_WBP_RegionSelectRedirect(int EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
