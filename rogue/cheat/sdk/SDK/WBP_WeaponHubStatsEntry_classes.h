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

// WidgetBlueprintGeneratedClass WBP_WeaponHubStatsEntry.WBP_WeaponHubStatsEntry_C
// 0x0008 (FullSize[0x0520] - InheritedSize[0x0518])
class UWBP_WeaponHubStatsEntry_C : public UKSWidget
{
public:
	class UWBP_ItemInfoPanel_StatBar_C*                StatBar;                                                   // 0x0518(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::GetObjectCasted<UClass>(75967);
		return ptr;
	}



	void Get_Stat_Bar_Widget(class UWBP_ItemInfoPanel_StatBar_C** Return_Value);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
