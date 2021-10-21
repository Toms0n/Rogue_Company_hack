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

// WidgetBlueprintGeneratedClass WBP_Social_Friends_Tab.WBP_Social_Friends_Tab_C
// 0x0028 (FullSize[0x05B8] - InheritedSize[0x0590])
class UWBP_Social_Friends_Tab_C : public UKSSocialFriendsPanel
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x0590(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class UKSTreeView*                                 PlayerList;                                                // 0x0598(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UAkAudioEvent*                               ClickSocialFriendsSFX;                                     // 0x05A0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	struct FScriptMulticastDelegate                    OnPlayerListScrolled;                                      // 0x05A8(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::GetObjectCasted<UClass>(78637);
		return ptr;
	}



	void FocusFirstItem();
	void TryGetFirstItemForCategory(KillstreakUINew_EKSSocialOverlaySection Category, class UKSPlayerInfo** Output);
	void FindFirstOnlinePlayerOrDefault(class UObject** Item);
	void FocusFirstOnlinePlayer();
	struct FEventReply OnFocusReceived(const struct FGeometry& MyGeometry, const struct FFocusEvent& InFocusEvent);
	void HandleItemClicked(class UObject* Item);
	bool NavigateConfirm();
	void GetFocusTarget(class UWidget** Target);
	void InitializeWidget(class APUMG_HUD* HUD);
	void UninitializeWidget();
	void BndEvt__PlayerList_K2Node_ComponentBoundEvent_0_OnItemIsHoveredChangedDynamic__DelegateSignature(class UObject* Item, bool bIsHovered);
	void OnShown();
	void BndEvt__PlayerList_K2Node_ComponentBoundEvent_1_SimpleListItemEventDynamic__DelegateSignature(class UObject* Item);
	void OnInputStateChanged(TEnumAsByte<PlatformGameFramework_EPGAME_INPUT_STATE> InputState);
	void InitializeWidgetNavigation();
	void OnListScrolled(float ItemOffset, float DistanceRemaining);
	void ExecuteUbergraph_WBP_Social_Friends_Tab(int EntryPoint);
	void OnPlayerListScrolled__DelegateSignature();
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
