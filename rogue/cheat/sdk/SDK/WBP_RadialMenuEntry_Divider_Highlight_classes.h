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

// WidgetBlueprintGeneratedClass WBP_RadialMenuEntry_Divider_Highlight.WBP_RadialMenuEntry_Divider_Highlight_C
// 0x0010 (FullSize[0x0248] - InheritedSize[0x0238])
class UWBP_RadialMenuEntry_Divider_Highlight_C : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x0238(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class UWBP_AsyncIcon_C*                            WBP_AsyncIcon;                                             // 0x0240(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::GetObjectCasted<UClass>(56171);
		return ptr;
	}



	void SetDisabledAppearance(bool IsDisabled);
	void OnInitialized();
	void ExecuteUbergraph_WBP_RadialMenuEntry_Divider_Highlight(int EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
