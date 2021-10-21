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
//		Name   -> Function WBP_HomeScreen_v2.WBP_HomeScreen_v2_C.GetChallengePanel
//		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
//		class UKSWidget*                                   Return_Value                                               (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWBP_HomeScreen_v2_C::GetChallengePanel(class UKSWidget** Return_Value)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(90206);

	UWBP_HomeScreen_v2_C_GetChallengePanel_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Return_Value != nullptr)
		*Return_Value = params.Return_Value;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_HomeScreen_v2.WBP_HomeScreen_v2_C.OnMouseButtonDown
//		Flags  -> (BlueprintCosmetic, Event, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
//		struct FGeometry                                   MyGeometry                                                 (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
//		struct FPointerEvent                               MouseEvent                                                 (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
//		struct FEventReply                                 ReturnValue                                                (Parm, OutParm, ReturnParm)
struct FEventReply UWBP_HomeScreen_v2_C::OnMouseButtonDown(const struct FGeometry& MyGeometry, const struct FPointerEvent& MouseEvent)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(90205);

	UWBP_HomeScreen_v2_C_OnMouseButtonDown_Params params {};
	params.MyGeometry = MyGeometry;
	params.MouseEvent = MouseEvent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_HomeScreen_v2.WBP_HomeScreen_v2_C.OnKeyUp
//		Flags  -> (BlueprintCosmetic, Event, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
//		struct FGeometry                                   MyGeometry                                                 (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
//		struct FKeyEvent                                   InKeyEvent                                                 (BlueprintVisible, BlueprintReadOnly, Parm)
//		struct FEventReply                                 ReturnValue                                                (Parm, OutParm, ReturnParm)
struct FEventReply UWBP_HomeScreen_v2_C::OnKeyUp(const struct FGeometry& MyGeometry, const struct FKeyEvent& InKeyEvent)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(90204);

	UWBP_HomeScreen_v2_C_OnKeyUp_Params params {};
	params.MyGeometry = MyGeometry;
	params.InKeyEvent = InKeyEvent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_HomeScreen_v2.WBP_HomeScreen_v2_C.CanFocus
//		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
//		bool                                               bAllowFous                                                 (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UWBP_HomeScreen_v2_C::CanFocus(bool* bAllowFous)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(90203);

	UWBP_HomeScreen_v2_C_CanFocus_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (bAllowFous != nullptr)
		*bAllowFous = params.bAllowFous;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_HomeScreen_v2.WBP_HomeScreen_v2_C.UpdateContextPrompts
//		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
void UWBP_HomeScreen_v2_C::UpdateContextPrompts()
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(90202);

	UWBP_HomeScreen_v2_C_UpdateContextPrompts_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_HomeScreen_v2.WBP_HomeScreen_v2_C.StopConflictingAnimation
//		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
//		struct FName                                       AnimName                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWBP_HomeScreen_v2_C::StopConflictingAnimation(const struct FName& AnimName)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(90201);

	UWBP_HomeScreen_v2_C_StopConflictingAnimation_Params params {};
	params.AnimName = AnimName;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_HomeScreen_v2.WBP_HomeScreen_v2_C.NavigateBack
//		Flags  -> (Event, Protected, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
//		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
bool UWBP_HomeScreen_v2_C::NavigateBack()
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(90200);

	UWBP_HomeScreen_v2_C_NavigateBack_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_HomeScreen_v2.WBP_HomeScreen_v2_C.HandleQueueStatusChange
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
//		PlatformUMG_EPUMG_MatchStatus                      NewStatus                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWBP_HomeScreen_v2_C::HandleQueueStatusChange(PlatformUMG_EPUMG_MatchStatus NewStatus)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(90199);

	UWBP_HomeScreen_v2_C_HandleQueueStatusChange_Params params {};
	params.NewStatus = NewStatus;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_HomeScreen_v2.WBP_HomeScreen_v2_C.UnbindLobbyAnimationHandling
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
void UWBP_HomeScreen_v2_C::UnbindLobbyAnimationHandling()
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(90198);

	UWBP_HomeScreen_v2_C_UnbindLobbyAnimationHandling_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_HomeScreen_v2.WBP_HomeScreen_v2_C.BindLobbyAnimationHandling
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
void UWBP_HomeScreen_v2_C::BindLobbyAnimationHandling()
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(90197);

	UWBP_HomeScreen_v2_C_BindLobbyAnimationHandling_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_HomeScreen_v2.WBP_HomeScreen_v2_C.InitializeContentWidgets
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
void UWBP_HomeScreen_v2_C::InitializeContentWidgets()
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(90196);

	UWBP_HomeScreen_v2_C_InitializeContentWidgets_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_HomeScreen_v2.WBP_HomeScreen_v2_C.StartShowAnim
//		Flags  -> (BlueprintCallable, BlueprintEvent)
void UWBP_HomeScreen_v2_C::StartShowAnim()
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(90195);

	UWBP_HomeScreen_v2_C_StartShowAnim_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_HomeScreen_v2.WBP_HomeScreen_v2_C.InitializeTickAnimations
//		Flags  -> (Event, Protected, BlueprintEvent)
void UWBP_HomeScreen_v2_C::InitializeTickAnimations()
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(90194);

	UWBP_HomeScreen_v2_C_InitializeTickAnimations_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_HomeScreen_v2.WBP_HomeScreen_v2_C.ShowQuickPlayFinished
//		Flags  -> (BlueprintCallable, BlueprintEvent)
void UWBP_HomeScreen_v2_C::ShowQuickPlayFinished()
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(90193);

	UWBP_HomeScreen_v2_C_ShowQuickPlayFinished_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_HomeScreen_v2.WBP_HomeScreen_v2_C.ShowQuickPlayAnim
//		Flags  -> (BlueprintCallable, BlueprintEvent)
// Parameters:
//		float                                              ElapsedTime                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		float                                              ElapsedAlpha                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWBP_HomeScreen_v2_C::ShowQuickPlayAnim(float ElapsedTime, float ElapsedAlpha)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(90192);

	UWBP_HomeScreen_v2_C_ShowQuickPlayAnim_Params params {};
	params.ElapsedTime = ElapsedTime;
	params.ElapsedAlpha = ElapsedAlpha;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_HomeScreen_v2.WBP_HomeScreen_v2_C.InitHideAnimation
//		Flags  -> (BlueprintCallable, BlueprintEvent)
void UWBP_HomeScreen_v2_C::InitHideAnimation()
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(90191);

	UWBP_HomeScreen_v2_C_InitHideAnimation_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_HomeScreen_v2.WBP_HomeScreen_v2_C.HideQuickPlayFinished
//		Flags  -> (BlueprintCallable, BlueprintEvent)
void UWBP_HomeScreen_v2_C::HideQuickPlayFinished()
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(90190);

	UWBP_HomeScreen_v2_C_HideQuickPlayFinished_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_HomeScreen_v2.WBP_HomeScreen_v2_C.HideQuickPlayAnim
//		Flags  -> (BlueprintCallable, BlueprintEvent)
// Parameters:
//		float                                              ElapsedTime                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		float                                              ElapsedAlpha                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWBP_HomeScreen_v2_C::HideQuickPlayAnim(float ElapsedTime, float ElapsedAlpha)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(90189);

	UWBP_HomeScreen_v2_C_HideQuickPlayAnim_Params params {};
	params.ElapsedTime = ElapsedTime;
	params.ElapsedAlpha = ElapsedAlpha;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_HomeScreen_v2.WBP_HomeScreen_v2_C.StartHideAnim
//		Flags  -> (BlueprintCallable, BlueprintEvent)
void UWBP_HomeScreen_v2_C::StartHideAnim()
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(90188);

	UWBP_HomeScreen_v2_C_StartHideAnim_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_HomeScreen_v2.WBP_HomeScreen_v2_C.InitializeWidget
//		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
//		class APUMG_HUD*                                   HUD                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWBP_HomeScreen_v2_C::InitializeWidget(class APUMG_HUD* HUD)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(90187);

	UWBP_HomeScreen_v2_C_InitializeWidget_Params params {};
	params.HUD = HUD;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_HomeScreen_v2.WBP_HomeScreen_v2_C.OnShown
//		Flags  -> (Event, Public, BlueprintEvent)
void UWBP_HomeScreen_v2_C::OnShown()
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(90186);

	UWBP_HomeScreen_v2_C_OnShown_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_HomeScreen_v2.WBP_HomeScreen_v2_C.UninitializeWidget
//		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
void UWBP_HomeScreen_v2_C::UninitializeWidget()
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(90185);

	UWBP_HomeScreen_v2_C_UninitializeWidget_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_HomeScreen_v2.WBP_HomeScreen_v2_C.StartShowSequence
//		Flags  -> (Event, Public, BlueprintEvent)
// Parameters:
//		struct FName                                       FromRoute                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		struct FName                                       ToRoute                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWBP_HomeScreen_v2_C::StartShowSequence(const struct FName& FromRoute, const struct FName& ToRoute)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(90184);

	UWBP_HomeScreen_v2_C_StartShowSequence_Params params {};
	params.FromRoute = FromRoute;
	params.ToRoute = ToRoute;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_HomeScreen_v2.WBP_HomeScreen_v2_C.StartHideSequence
//		Flags  -> (Event, Public, BlueprintEvent)
// Parameters:
//		struct FName                                       FromRoute                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		struct FName                                       ToRoute                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWBP_HomeScreen_v2_C::StartHideSequence(const struct FName& FromRoute, const struct FName& ToRoute)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(90183);

	UWBP_HomeScreen_v2_C_StartHideSequence_Params params {};
	params.FromRoute = FromRoute;
	params.ToRoute = ToRoute;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_HomeScreen_v2.WBP_HomeScreen_v2_C.InitializeWidgetNavigation
//		Flags  -> (Event, Public, BlueprintEvent)
void UWBP_HomeScreen_v2_C::InitializeWidgetNavigation()
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(90182);

	UWBP_HomeScreen_v2_C_InitializeWidgetNavigation_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_HomeScreen_v2.WBP_HomeScreen_v2_C.Construct
//		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
void UWBP_HomeScreen_v2_C::Construct()
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(90181);

	UWBP_HomeScreen_v2_C_Construct_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_HomeScreen_v2.WBP_HomeScreen_v2_C.OnCrossplayChanged
//		Flags  -> (BlueprintCallable, BlueprintEvent)
void UWBP_HomeScreen_v2_C::OnCrossplayChanged()
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(90180);

	UWBP_HomeScreen_v2_C_OnCrossplayChanged_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_HomeScreen_v2.WBP_HomeScreen_v2_C.UpdateCrossplay
//		Flags  -> (BlueprintCallable, BlueprintEvent)
void UWBP_HomeScreen_v2_C::UpdateCrossplay()
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(90179);

	UWBP_HomeScreen_v2_C_UpdateCrossplay_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_HomeScreen_v2.WBP_HomeScreen_v2_C.LoginState
//		Flags  -> (BlueprintCallable, BlueprintEvent)
// Parameters:
//		PlatformUMG_EPUMG_LoginState                       LoginState                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWBP_HomeScreen_v2_C::LoginState(PlatformUMG_EPUMG_LoginState LoginState)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(90178);

	UWBP_HomeScreen_v2_C_LoginState_Params params {};
	params.LoginState = LoginState;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_HomeScreen_v2.WBP_HomeScreen_v2_C.Update Region
//		Flags  -> (BlueprintCallable, BlueprintEvent)
void UWBP_HomeScreen_v2_C::Update_Region()
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(90177);

	UWBP_HomeScreen_v2_C_Update_Region_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_HomeScreen_v2.WBP_HomeScreen_v2_C.Handle Party Player Card Selected
//		Flags  -> (BlueprintCallable, BlueprintEvent)
// Parameters:
//		class UWBP_player_card_module_C*                   Selected_Player_Card                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWBP_HomeScreen_v2_C::Handle_Party_Player_Card_Selected(class UWBP_player_card_module_C* Selected_Player_Card)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(90176);

	UWBP_HomeScreen_v2_C_Handle_Party_Player_Card_Selected_Params params {};
	params.Selected_Player_Card = Selected_Player_Card;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_HomeScreen_v2.WBP_HomeScreen_v2_C.Handle Context Menu Navigation
//		Flags  -> (HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
//		TArray<class UWidget*>                             NavWidgets                                                 (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, ContainsInstancedReference, HasGetValueTypeHash)
//		class UWidget*                                     Default_Widget                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWBP_HomeScreen_v2_C::Handle_Context_Menu_Navigation(TArray<class UWidget*>* NavWidgets, class UWidget* Default_Widget)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(90175);

	UWBP_HomeScreen_v2_C_Handle_Context_Menu_Navigation_Params params {};
	params.Default_Widget = Default_Widget;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (NavWidgets != nullptr)
		*NavWidgets = params.NavWidgets;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_HomeScreen_v2.WBP_HomeScreen_v2_C.Handle Context Menu Hidden
//		Flags  -> (BlueprintCallable, BlueprintEvent)
void UWBP_HomeScreen_v2_C::Handle_Context_Menu_Hidden()
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(90174);

	UWBP_HomeScreen_v2_C_Handle_Context_Menu_Hidden_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_HomeScreen_v2.WBP_HomeScreen_v2_C.HandleContextMenuShown
//		Flags  -> (BlueprintCallable, BlueprintEvent)
// Parameters:
//		class UWidget*                                     FocusWidget                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWBP_HomeScreen_v2_C::HandleContextMenuShown(class UWidget* FocusWidget)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(90173);

	UWBP_HomeScreen_v2_C_HandleContextMenuShown_Params params {};
	params.FocusWidget = FocusWidget;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_HomeScreen_v2.WBP_HomeScreen_v2_C.FocusGroupNavigateRightFailure
//		Flags  -> (Event, Public, BlueprintEvent)
// Parameters:
//		int                                                FocusGroup                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWBP_HomeScreen_v2_C::FocusGroupNavigateRightFailure(int FocusGroup)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(90172);

	UWBP_HomeScreen_v2_C_FocusGroupNavigateRightFailure_Params params {};
	params.FocusGroup = FocusGroup;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_HomeScreen_v2.WBP_HomeScreen_v2_C.FocusGroupNavigateLeftFailure
//		Flags  -> (Event, Public, BlueprintEvent)
// Parameters:
//		int                                                FocusGroup                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWBP_HomeScreen_v2_C::FocusGroupNavigateLeftFailure(int FocusGroup)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(90171);

	UWBP_HomeScreen_v2_C_FocusGroupNavigateLeftFailure_Params params {};
	params.FocusGroup = FocusGroup;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_HomeScreen_v2.WBP_HomeScreen_v2_C.NewsPanelVisibilityChanged
//		Flags  -> (BlueprintCallable, BlueprintEvent)
// Parameters:
//		bool                                               IsVisible                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UWBP_HomeScreen_v2_C::NewsPanelVisibilityChanged(bool IsVisible)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(90170);

	UWBP_HomeScreen_v2_C_NewsPanelVisibilityChanged_Params params {};
	params.IsVisible = IsVisible;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_HomeScreen_v2.WBP_HomeScreen_v2_C.OnEOMButton
//		Flags  -> (BlueprintCallable, BlueprintEvent)
void UWBP_HomeScreen_v2_C::OnEOMButton()
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(90169);

	UWBP_HomeScreen_v2_C_OnEOMButton_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_HomeScreen_v2.WBP_HomeScreen_v2_C.HandleViewSocial
//		Flags  -> (BlueprintCallable, BlueprintEvent)
void UWBP_HomeScreen_v2_C::HandleViewSocial()
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(90168);

	UWBP_HomeScreen_v2_C_HandleViewSocial_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_HomeScreen_v2.WBP_HomeScreen_v2_C.FocusGroupNavigateDownFailure
//		Flags  -> (Event, Public, BlueprintEvent)
// Parameters:
//		int                                                FocusGroup                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWBP_HomeScreen_v2_C::FocusGroupNavigateDownFailure(int FocusGroup)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(90167);

	UWBP_HomeScreen_v2_C_FocusGroupNavigateDownFailure_Params params {};
	params.FocusGroup = FocusGroup;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_HomeScreen_v2.WBP_HomeScreen_v2_C.FocusGroupNavigateUpFailure
//		Flags  -> (Event, Public, BlueprintEvent)
// Parameters:
//		int                                                FocusGroup                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWBP_HomeScreen_v2_C::FocusGroupNavigateUpFailure(int FocusGroup)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(90166);

	UWBP_HomeScreen_v2_C_FocusGroupNavigateUpFailure_Params params {};
	params.FocusGroup = FocusGroup;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_HomeScreen_v2.WBP_HomeScreen_v2_C.Handle Player Card Back Button
//		Flags  -> (BlueprintCallable, BlueprintEvent)
void UWBP_HomeScreen_v2_C::Handle_Player_Card_Back_Button()
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(90165);

	UWBP_HomeScreen_v2_C_Handle_Player_Card_Back_Button_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_HomeScreen_v2.WBP_HomeScreen_v2_C.PreConstruct
//		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
//		bool                                               IsDesignTime                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UWBP_HomeScreen_v2_C::PreConstruct(bool IsDesignTime)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(90164);

	UWBP_HomeScreen_v2_C_PreConstruct_Params params {};
	params.IsDesignTime = IsDesignTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_HomeScreen_v2.WBP_HomeScreen_v2_C.OnSetQueueInputState
//		Flags  -> (BlueprintCallable, BlueprintEvent)
// Parameters:
//		TEnumAsByte<PlatformGameFramework_EPGAME_INPUT_STATE> InputState                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWBP_HomeScreen_v2_C::OnSetQueueInputState(TEnumAsByte<PlatformGameFramework_EPGAME_INPUT_STATE> InputState)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(90163);

	UWBP_HomeScreen_v2_C_OnSetQueueInputState_Params params {};
	params.InputState = InputState;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_HomeScreen_v2.WBP_HomeScreen_v2_C.OnpartyLeaveVisibilityChange
//		Flags  -> (BlueprintCallable, BlueprintEvent)
// Parameters:
//		bool                                               Visible                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UWBP_HomeScreen_v2_C::OnpartyLeaveVisibilityChange(bool Visible)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(90162);

	UWBP_HomeScreen_v2_C_OnpartyLeaveVisibilityChange_Params params {};
	params.Visible = Visible;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_HomeScreen_v2.WBP_HomeScreen_v2_C.On Boosts Context Button
//		Flags  -> (BlueprintCallable, BlueprintEvent)
void UWBP_HomeScreen_v2_C::On_Boosts_Context_Button()
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(90161);

	UWBP_HomeScreen_v2_C_On_Boosts_Context_Button_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_HomeScreen_v2.WBP_HomeScreen_v2_C.On Emote Context Button
//		Flags  -> (BlueprintCallable, BlueprintEvent)
void UWBP_HomeScreen_v2_C::On_Emote_Context_Button()
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(90160);

	UWBP_HomeScreen_v2_C_On_Emote_Context_Button_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_HomeScreen_v2.WBP_HomeScreen_v2_C.HandleOnPartyMemberLeft
//		Flags  -> (BlueprintCallable, BlueprintEvent)
// Parameters:
//		struct FPUMG_PartyMemberData                       PartyMember                                                (BlueprintVisible, BlueprintReadOnly, Parm)
void UWBP_HomeScreen_v2_C::HandleOnPartyMemberLeft(const struct FPUMG_PartyMemberData& PartyMember)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(90159);

	UWBP_HomeScreen_v2_C_HandleOnPartyMemberLeft_Params params {};
	params.PartyMember = PartyMember;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_HomeScreen_v2.WBP_HomeScreen_v2_C.ExecuteUbergraph_WBP_HomeScreen_v2
//		Flags  -> (Final, HasDefaults)
// Parameters:
//		int                                                EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWBP_HomeScreen_v2_C::ExecuteUbergraph_WBP_HomeScreen_v2(int EntryPoint)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(90158);

	UWBP_HomeScreen_v2_C_ExecuteUbergraph_WBP_HomeScreen_v2_Params params {};
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
