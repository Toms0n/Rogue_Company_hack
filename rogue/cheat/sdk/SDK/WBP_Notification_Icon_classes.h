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

// WidgetBlueprintGeneratedClass WBP_Notification_Icon.WBP_Notification_Icon_C
// 0x0010 (FullSize[0x04C8] - InheritedSize[0x04B8])
class UWBP_Notification_Icon_C : public UPUMG_Widget
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x04B8(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class UWBP_CallToAction_C*                         WBP_CallToAction;                                          // 0x04C0(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::GetObjectCasted<UClass>(257767);
		return ptr;
	}



	void Construct();
	void OnShown();
	void OnHide();
	void HandleShown();
	void HandleHide();
	void ExecuteUbergraph_WBP_Notification_Icon(int EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
