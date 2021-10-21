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

// WidgetBlueprintGeneratedClass WBP_PlayerProfileScreen.WBP_PlayerProfileScreen_C
// 0x0040 (FullSize[0x0558] - InheritedSize[0x0518])
class UWBP_PlayerProfileScreen_C : public UKSWidget
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x0518(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class UWidgetAnimation*                            OnShow;                                                    // 0x0520(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UImage*                                      BG;                                                        // 0x0528(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                                  PlayerIdDisplay;                                           // 0x0530(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UKSAsyncImage*                               PortalIcon;                                                // 0x0538(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_PlayerProfileScreen_AccountPanel_C*     WBP_PlayerProfileScreen_AccountPanel;                      // 0x0540(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_PlayerProfileScreen_AwardPanel_C*       WBP_PlayerProfileScreen_AwardPanel;                        // 0x0548(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_PlayerProfileScreen_StatPanel_C*        WBP_PlayerProfileScreen_StatPanel;                         // 0x0550(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::GetObjectCasted<UClass>(89653);
		return ptr;
	}



	void GetPlatformIcon(bool* Success, class UTexture2D** Icon);
	void SetPlayerHint();
	void ClearPlayerHint();
	bool NavigateBack();
	void Construct();
	void OnShown();
	void InitializeWidget(class APUMG_HUD* HUD);
	void AwardButtonClicked(class UWidget* Widget);
	void StatsButtonClicked(class UWidget* Widget);
	void CustomizeButtonClicked(class UWidget* Widget);
	void InitializeWidgetNavigation();
	void OnBackPrompt();
	void HandleLoginStateChange(PlatformUMG_EPUMG_LoginState LoginState);
	void ExecuteUbergraph_WBP_PlayerProfileScreen(int EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
