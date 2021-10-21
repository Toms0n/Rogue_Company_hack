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
// Parameters
//---------------------------------------------------------------------------

// Function WBP_LaunchCinematic.WBP_LaunchCinematic_C.IsActiveView
struct UWBP_LaunchCinematic_C_IsActiveView_Params
{
	bool                                               ReturnValue;                                               // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
};

// Function WBP_LaunchCinematic.WBP_LaunchCinematic_C.StopVideoPlayback
struct UWBP_LaunchCinematic_C_StopVideoPlayback_Params
{
};

// Function WBP_LaunchCinematic.WBP_LaunchCinematic_C.StopAudioPlayback
struct UWBP_LaunchCinematic_C_StopAudioPlayback_Params
{
};

// Function WBP_LaunchCinematic.WBP_LaunchCinematic_C.HandleOnClicked
struct UWBP_LaunchCinematic_C_HandleOnClicked_Params
{
};

// Function WBP_LaunchCinematic.WBP_LaunchCinematic_C.PlayAnimationSmoothly
struct UWBP_LaunchCinematic_C_PlayAnimationSmoothly_Params
{
	class UWidgetAnimation*                            InAnimation;                                               // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function WBP_LaunchCinematic.WBP_LaunchCinematic_C.FinishPlayback
struct UWBP_LaunchCinematic_C_FinishPlayback_Params
{
};

// Function WBP_LaunchCinematic.WBP_LaunchCinematic_C.OnKeyDown
struct UWBP_LaunchCinematic_C_OnKeyDown_Params
{
	struct FGeometry                                   MyGeometry;                                                // 0x0000(0x0058)  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	struct FKeyEvent                                   InKeyEvent;                                                // 0x0058(0x0038)  (BlueprintVisible, BlueprintReadOnly, Parm)
	struct FEventReply                                 ReturnValue;                                               // 0x0090(0x00C0)  (Parm, OutParm, ReturnParm)
};

// Function WBP_LaunchCinematic.WBP_LaunchCinematic_C.SetPromptKeyDisplay
struct UWBP_LaunchCinematic_C_SetPromptKeyDisplay_Params
{
};

// Function WBP_LaunchCinematic.WBP_LaunchCinematic_C.GetPromptKeys
struct UWBP_LaunchCinematic_C_GetPromptKeys_Params
{
	TArray<struct FKey>                                SkipPromptKeys;                                            // 0x0000(0x0010)  (Parm, OutParm, HasGetValueTypeHash)
};

// Function WBP_LaunchCinematic.WBP_LaunchCinematic_C.IsSkipKey
struct UWBP_LaunchCinematic_C_IsSkipKey_Params
{
	struct FKeyEvent                                   InInput;                                                   // 0x0000(0x0038)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	bool                                               IsSkipKey;                                                 // 0x0038(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function WBP_LaunchCinematic.WBP_LaunchCinematic_C.TogglePromptDisplay
struct UWBP_LaunchCinematic_C_TogglePromptDisplay_Params
{
	bool                                               ShouldShow;                                                // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function WBP_LaunchCinematic.WBP_LaunchCinematic_C.WhenCinematicDone
struct UWBP_LaunchCinematic_C_WhenCinematicDone_Params
{
};

// Function WBP_LaunchCinematic.WBP_LaunchCinematic_C.OnReadyForPlayback
struct UWBP_LaunchCinematic_C_OnReadyForPlayback_Params
{
	class UPlatformMediaSource*                        PlatformMediaSource;                                       // 0x0000(0x0008)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UAkAudioEvent*                               PlayEvent;                                                 // 0x0008(0x0008)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UAkAudioEvent*                               StopEvent;                                                 // 0x0010(0x0008)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function WBP_LaunchCinematic.WBP_LaunchCinematic_C.OnShouldShowPromptChanged
struct UWBP_LaunchCinematic_C_OnShouldShowPromptChanged_Params
{
	bool                                               bCanSkipEntry;                                             // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function WBP_LaunchCinematic.WBP_LaunchCinematic_C.InitializeWidgetNavigation
struct UWBP_LaunchCinematic_C_InitializeWidgetNavigation_Params
{
};

// Function WBP_LaunchCinematic.WBP_LaunchCinematic_C.HandleInputStateChanged
struct UWBP_LaunchCinematic_C_HandleInputStateChanged_Params
{
	TEnumAsByte<PlatformGameFramework_EPGAME_INPUT_STATE> InputState;                                                // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function WBP_LaunchCinematic.WBP_LaunchCinematic_C.OnShown
struct UWBP_LaunchCinematic_C_OnShown_Params
{
};

// Function WBP_LaunchCinematic.WBP_LaunchCinematic_C.FadeTextureIn
struct UWBP_LaunchCinematic_C_FadeTextureIn_Params
{
};

// Function WBP_LaunchCinematic.WBP_LaunchCinematic_C.FadeTextureOut
struct UWBP_LaunchCinematic_C_FadeTextureOut_Params
{
};

// Function WBP_LaunchCinematic.WBP_LaunchCinematic_C.HandleFadeOutAnimFinished
struct UWBP_LaunchCinematic_C_HandleFadeOutAnimFinished_Params
{
};

// Function WBP_LaunchCinematic.WBP_LaunchCinematic_C.OnHide
struct UWBP_LaunchCinematic_C_OnHide_Params
{
};

// Function WBP_LaunchCinematic.WBP_LaunchCinematic_C.HandleOnMediaOpened
struct UWBP_LaunchCinematic_C_HandleOnMediaOpened_Params
{
	struct FString                                     OpenedUrl;                                                 // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
};

// Function WBP_LaunchCinematic.WBP_LaunchCinematic_C.HandleOnMediaOpenFailed
struct UWBP_LaunchCinematic_C_HandleOnMediaOpenFailed_Params
{
	struct FString                                     FailedUrl;                                                 // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
};

// Function WBP_LaunchCinematic.WBP_LaunchCinematic_C.OnBeginLoadingMedia
struct UWBP_LaunchCinematic_C_OnBeginLoadingMedia_Params
{
};

// Function WBP_LaunchCinematic.WBP_LaunchCinematic_C.OnEndLoadingMedia
struct UWBP_LaunchCinematic_C_OnEndLoadingMedia_Params
{
};

// Function WBP_LaunchCinematic.WBP_LaunchCinematic_C.ExecuteUbergraph_WBP_LaunchCinematic
struct UWBP_LaunchCinematic_C_ExecuteUbergraph_WBP_LaunchCinematic_Params
{
	int                                                EntryPoint;                                                // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
