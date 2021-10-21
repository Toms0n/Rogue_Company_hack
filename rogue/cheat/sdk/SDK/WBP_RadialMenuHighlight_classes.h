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

// WidgetBlueprintGeneratedClass WBP_RadialMenuHighlight.WBP_RadialMenuHighlight_C
// 0x0018 (FullSize[0x0250] - InheritedSize[0x0238])
class UWBP_RadialMenuHighlight_C : public UUserWidget
{
public:
	class UWBP_RadialMenuEntry_Divider_Highlight_C*    DividerLeft;                                               // 0x0238(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_RadialMenuEntry_Divider_Highlight_C*    DividerRight;                                              // 0x0240(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                      Highlight;                                                 // 0x0248(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::GetObjectCasted<UClass>(56160);
		return ptr;
	}



	void SetDisabledAppearance(bool IsDisabled);
	class UMaterialInstanceDynamic* GetHighlightMat();
	void SetPosition(float Position);
	void SetWidth(float Width);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
