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

// WidgetBlueprintGeneratedClass WBP_LaunchCinematic.WBP_LaunchCinematic_C
// 0x0080 (FullSize[0x05D0] - InheritedSize[0x0550])
class UWBP_LaunchCinematic_C : public UKSMediaPlayerWidget
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x0550(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class UWidgetAnimation*                            FadeOutThrobber;                                           // 0x0558(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                            FadeInThrobber;                                            // 0x0560(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                            FadeOutMediaTexture;                                       // 0x0568(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                            FadeInMediaTexture;                                        // 0x0570(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UImage*                                      CinematicMediaTexture;                                     // 0x0578(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UGamepadPromptBasic_C*                       GamepadPromptBasic;                                        // 0x0580(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UButton*                                     HitTarget;                                                 // 0x0588(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_ThrobberShield_C*                       WBP_ThrobberShield;                                        // 0x0590(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UMediaPlayer*                                MediaPlayer;                                               // 0x0598(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FText                                       Msg_SkipPrompt;                                            // 0x05A0(0x0018) (Edit, BlueprintVisible, DisableEditOnInstance)
	class UAkAudioEvent*                               AudioStartEvent;                                           // 0x05B8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UAkAudioEvent*                               AudioStopEvent;                                            // 0x05C0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FName                                       LocalActionName;                                           // 0x05C8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::GetObjectCasted<UClass>(76978);
		return ptr;
	}



	bool IsActiveView();
	void StopVideoPlayback();
	void StopAudioPlayback();
	void HandleOnClicked();
	void PlayAnimationSmoothly(class UWidgetAnimation* InAnimation);
	void FinishPlayback();
	struct FEventReply OnKeyDown(const struct FGeometry& MyGeometry, const struct FKeyEvent& InKeyEvent);
	void SetPromptKeyDisplay();
	void GetPromptKeys(TArray<struct FKey>* SkipPromptKeys);
	void IsSkipKey(const struct FKeyEvent& InInput, bool* IsSkipKey);
	void TogglePromptDisplay(bool ShouldShow);
	void WhenCinematicDone();
	void OnReadyForPlayback(class UPlatformMediaSource* PlatformMediaSource, class UAkAudioEvent* PlayEvent, class UAkAudioEvent* StopEvent);
	void OnShouldShowPromptChanged(bool bCanSkipEntry);
	void InitializeWidgetNavigation();
	void HandleInputStateChanged(TEnumAsByte<PlatformGameFramework_EPGAME_INPUT_STATE> InputState);
	void OnShown();
	void FadeTextureIn();
	void FadeTextureOut();
	void HandleFadeOutAnimFinished();
	void OnHide();
	void HandleOnMediaOpened(const struct FString& OpenedUrl);
	void HandleOnMediaOpenFailed(const struct FString& FailedUrl);
	void OnBeginLoadingMedia();
	void OnEndLoadingMedia();
	void ExecuteUbergraph_WBP_LaunchCinematic(int EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
