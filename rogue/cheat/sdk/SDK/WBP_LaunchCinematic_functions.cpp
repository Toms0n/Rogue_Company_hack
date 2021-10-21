// Name: roguecompany, Version: 425

#include "../pch.h"

/*!!DEFINE!!*/

/*!!HELPER_DEF!!*/

/*!!HELPER_INC!!*/

#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

namespace CG
{
//---------------------------------------------------------------------------
// Functions
//---------------------------------------------------------------------------

// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_LaunchCinematic.WBP_LaunchCinematic_C.IsActiveView
//		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
//		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
bool UWBP_LaunchCinematic_C::IsActiveView()
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(77004);

	UWBP_LaunchCinematic_C_IsActiveView_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_LaunchCinematic.WBP_LaunchCinematic_C.StopVideoPlayback
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
void UWBP_LaunchCinematic_C::StopVideoPlayback()
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(77003);

	UWBP_LaunchCinematic_C_StopVideoPlayback_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_LaunchCinematic.WBP_LaunchCinematic_C.StopAudioPlayback
//		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
void UWBP_LaunchCinematic_C::StopAudioPlayback()
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(77002);

	UWBP_LaunchCinematic_C_StopAudioPlayback_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_LaunchCinematic.WBP_LaunchCinematic_C.HandleOnClicked
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
void UWBP_LaunchCinematic_C::HandleOnClicked()
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(77001);

	UWBP_LaunchCinematic_C_HandleOnClicked_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_LaunchCinematic.WBP_LaunchCinematic_C.PlayAnimationSmoothly
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
//		class UWidgetAnimation*                            InAnimation                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWBP_LaunchCinematic_C::PlayAnimationSmoothly(class UWidgetAnimation* InAnimation)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(77000);

	UWBP_LaunchCinematic_C_PlayAnimationSmoothly_Params params {};
	params.InAnimation = InAnimation;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_LaunchCinematic.WBP_LaunchCinematic_C.FinishPlayback
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
void UWBP_LaunchCinematic_C::FinishPlayback()
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(76999);

	UWBP_LaunchCinematic_C_FinishPlayback_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_LaunchCinematic.WBP_LaunchCinematic_C.OnKeyDown
//		Flags  -> (BlueprintCosmetic, Event, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
//		struct FGeometry                                   MyGeometry                                                 (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
//		struct FKeyEvent                                   InKeyEvent                                                 (BlueprintVisible, BlueprintReadOnly, Parm)
//		struct FEventReply                                 ReturnValue                                                (Parm, OutParm, ReturnParm)
struct FEventReply UWBP_LaunchCinematic_C::OnKeyDown(const struct FGeometry& MyGeometry, const struct FKeyEvent& InKeyEvent)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(76998);

	UWBP_LaunchCinematic_C_OnKeyDown_Params params {};
	params.MyGeometry = MyGeometry;
	params.InKeyEvent = InKeyEvent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_LaunchCinematic.WBP_LaunchCinematic_C.SetPromptKeyDisplay
//		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
void UWBP_LaunchCinematic_C::SetPromptKeyDisplay()
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(76997);

	UWBP_LaunchCinematic_C_SetPromptKeyDisplay_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_LaunchCinematic.WBP_LaunchCinematic_C.GetPromptKeys
//		Flags  -> (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
//		TArray<struct FKey>                                SkipPromptKeys                                             (Parm, OutParm, HasGetValueTypeHash)
void UWBP_LaunchCinematic_C::GetPromptKeys(TArray<struct FKey>* SkipPromptKeys)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(76996);

	UWBP_LaunchCinematic_C_GetPromptKeys_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (SkipPromptKeys != nullptr)
		*SkipPromptKeys = params.SkipPromptKeys;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_LaunchCinematic.WBP_LaunchCinematic_C.IsSkipKey
//		Flags  -> (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
//		struct FKeyEvent                                   InInput                                                    (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
//		bool                                               IsSkipKey                                                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UWBP_LaunchCinematic_C::IsSkipKey(const struct FKeyEvent& InInput, bool* IsSkipKey)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(76995);

	UWBP_LaunchCinematic_C_IsSkipKey_Params params {};
	params.InInput = InInput;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (IsSkipKey != nullptr)
		*IsSkipKey = params.IsSkipKey;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_LaunchCinematic.WBP_LaunchCinematic_C.TogglePromptDisplay
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
//		bool                                               ShouldShow                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UWBP_LaunchCinematic_C::TogglePromptDisplay(bool ShouldShow)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(76994);

	UWBP_LaunchCinematic_C_TogglePromptDisplay_Params params {};
	params.ShouldShow = ShouldShow;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_LaunchCinematic.WBP_LaunchCinematic_C.WhenCinematicDone
//		Flags  -> (BlueprintCallable, BlueprintEvent)
void UWBP_LaunchCinematic_C::WhenCinematicDone()
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(76993);

	UWBP_LaunchCinematic_C_WhenCinematicDone_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_LaunchCinematic.WBP_LaunchCinematic_C.OnReadyForPlayback
//		Flags  -> (Event, Public, BlueprintEvent)
// Parameters:
//		class UPlatformMediaSource*                        PlatformMediaSource                                        (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		class UAkAudioEvent*                               PlayEvent                                                  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		class UAkAudioEvent*                               StopEvent                                                  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWBP_LaunchCinematic_C::OnReadyForPlayback(class UPlatformMediaSource* PlatformMediaSource, class UAkAudioEvent* PlayEvent, class UAkAudioEvent* StopEvent)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(76992);

	UWBP_LaunchCinematic_C_OnReadyForPlayback_Params params {};
	params.PlatformMediaSource = PlatformMediaSource;
	params.PlayEvent = PlayEvent;
	params.StopEvent = StopEvent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_LaunchCinematic.WBP_LaunchCinematic_C.OnShouldShowPromptChanged
//		Flags  -> (Event, Public, BlueprintEvent)
// Parameters:
//		bool                                               bCanSkipEntry                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UWBP_LaunchCinematic_C::OnShouldShowPromptChanged(bool bCanSkipEntry)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(76991);

	UWBP_LaunchCinematic_C_OnShouldShowPromptChanged_Params params {};
	params.bCanSkipEntry = bCanSkipEntry;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_LaunchCinematic.WBP_LaunchCinematic_C.InitializeWidgetNavigation
//		Flags  -> (Event, Public, BlueprintEvent)
void UWBP_LaunchCinematic_C::InitializeWidgetNavigation()
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(76990);

	UWBP_LaunchCinematic_C_InitializeWidgetNavigation_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_LaunchCinematic.WBP_LaunchCinematic_C.HandleInputStateChanged
//		Flags  -> (BlueprintCallable, BlueprintEvent)
// Parameters:
//		TEnumAsByte<PlatformGameFramework_EPGAME_INPUT_STATE> InputState                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWBP_LaunchCinematic_C::HandleInputStateChanged(TEnumAsByte<PlatformGameFramework_EPGAME_INPUT_STATE> InputState)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(76989);

	UWBP_LaunchCinematic_C_HandleInputStateChanged_Params params {};
	params.InputState = InputState;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_LaunchCinematic.WBP_LaunchCinematic_C.OnShown
//		Flags  -> (Event, Public, BlueprintEvent)
void UWBP_LaunchCinematic_C::OnShown()
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(76988);

	UWBP_LaunchCinematic_C_OnShown_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_LaunchCinematic.WBP_LaunchCinematic_C.FadeTextureIn
//		Flags  -> (BlueprintCallable, BlueprintEvent)
void UWBP_LaunchCinematic_C::FadeTextureIn()
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(76987);

	UWBP_LaunchCinematic_C_FadeTextureIn_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_LaunchCinematic.WBP_LaunchCinematic_C.FadeTextureOut
//		Flags  -> (BlueprintCallable, BlueprintEvent)
void UWBP_LaunchCinematic_C::FadeTextureOut()
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(76986);

	UWBP_LaunchCinematic_C_FadeTextureOut_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_LaunchCinematic.WBP_LaunchCinematic_C.HandleFadeOutAnimFinished
//		Flags  -> (BlueprintCallable, BlueprintEvent)
void UWBP_LaunchCinematic_C::HandleFadeOutAnimFinished()
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(76985);

	UWBP_LaunchCinematic_C_HandleFadeOutAnimFinished_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_LaunchCinematic.WBP_LaunchCinematic_C.OnHide
//		Flags  -> (Event, Public, BlueprintEvent)
void UWBP_LaunchCinematic_C::OnHide()
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(76984);

	UWBP_LaunchCinematic_C_OnHide_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_LaunchCinematic.WBP_LaunchCinematic_C.HandleOnMediaOpened
//		Flags  -> (BlueprintCallable, BlueprintEvent)
// Parameters:
//		struct FString                                     OpenedUrl                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
void UWBP_LaunchCinematic_C::HandleOnMediaOpened(const struct FString& OpenedUrl)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(76983);

	UWBP_LaunchCinematic_C_HandleOnMediaOpened_Params params {};
	params.OpenedUrl = OpenedUrl;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_LaunchCinematic.WBP_LaunchCinematic_C.HandleOnMediaOpenFailed
//		Flags  -> (BlueprintCallable, BlueprintEvent)
// Parameters:
//		struct FString                                     FailedUrl                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
void UWBP_LaunchCinematic_C::HandleOnMediaOpenFailed(const struct FString& FailedUrl)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(76982);

	UWBP_LaunchCinematic_C_HandleOnMediaOpenFailed_Params params {};
	params.FailedUrl = FailedUrl;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_LaunchCinematic.WBP_LaunchCinematic_C.OnBeginLoadingMedia
//		Flags  -> (Event, Public, BlueprintEvent)
void UWBP_LaunchCinematic_C::OnBeginLoadingMedia()
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(76981);

	UWBP_LaunchCinematic_C_OnBeginLoadingMedia_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_LaunchCinematic.WBP_LaunchCinematic_C.OnEndLoadingMedia
//		Flags  -> (Event, Public, BlueprintEvent)
void UWBP_LaunchCinematic_C::OnEndLoadingMedia()
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(76980);

	UWBP_LaunchCinematic_C_OnEndLoadingMedia_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_LaunchCinematic.WBP_LaunchCinematic_C.ExecuteUbergraph_WBP_LaunchCinematic
//		Flags  -> (Final, HasDefaults)
// Parameters:
//		int                                                EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWBP_LaunchCinematic_C::ExecuteUbergraph_WBP_LaunchCinematic(int EntryPoint)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(76979);

	UWBP_LaunchCinematic_C_ExecuteUbergraph_WBP_LaunchCinematic_Params params {};
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
