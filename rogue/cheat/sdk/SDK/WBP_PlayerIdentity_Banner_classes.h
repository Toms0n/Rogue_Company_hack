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

// WidgetBlueprintGeneratedClass WBP_PlayerIdentity_Banner.WBP_PlayerIdentity_Banner_C
// 0x0010 (FullSize[0x0528] - InheritedSize[0x0518])
class UWBP_PlayerIdentity_Banner_C : public UKSWidget
{
public:
	class UWBP_AsyncIcon_C*                            BannerIcon;                                                // 0x0518(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_AsyncIcon_C*                            BorderIcon;                                                // 0x0520(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::GetObjectCasted<UClass>(62432);
		return ptr;
	}



	void SetBorderFromIconInfo(class UIconInfo* Icon_Info);
	void SetBannerFromIconInfo(class UIconInfo* Icon_Info);
	void HideBorder();
	void SetBorder();
	void SetBanner();
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
