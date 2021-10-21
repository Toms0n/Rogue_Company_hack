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
//		Name   -> Function WBP_PlayerContextMenu.WBP_PlayerContextMenu_C.GetOptionWidgets
//		Flags  -> (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
//		TArray<class UWBP_PlayerContextMenuOption_C*>      Option_Widgets                                             (Parm, OutParm, ContainsInstancedReference, HasGetValueTypeHash)
void UWBP_PlayerContextMenu_C::GetOptionWidgets(TArray<class UWBP_PlayerContextMenuOption_C*>* Option_Widgets)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(86821);

	UWBP_PlayerContextMenu_C_GetOptionWidgets_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Option_Widgets != nullptr)
		*Option_Widgets = params.Option_Widgets;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_PlayerContextMenu.WBP_PlayerContextMenu_C.OnUpdateContextButtons
//		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
void UWBP_PlayerContextMenu_C::OnUpdateContextButtons()
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(86820);

	UWBP_PlayerContextMenu_C_OnUpdateContextButtons_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_PlayerContextMenu.WBP_PlayerContextMenu_C.HandleOptionSelected
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
//		KillstreakUINew_EPlayerContextOptions              ContextOption                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWBP_PlayerContextMenu_C::HandleOptionSelected(KillstreakUINew_EPlayerContextOptions ContextOption)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(86819);

	UWBP_PlayerContextMenu_C_HandleOptionSelected_Params params {};
	params.ContextOption = ContextOption;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_PlayerContextMenu.WBP_PlayerContextMenu_C.IsShowingPlayer
//		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
//		class UKSPlayerInfo*                               playerinfo                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		bool                                               Showing                                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UWBP_PlayerContextMenu_C::IsShowingPlayer(class UKSPlayerInfo* playerinfo, bool* Showing)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(86818);

	UWBP_PlayerContextMenu_C_IsShowingPlayer_Params params {};
	params.playerinfo = playerinfo;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Showing != nullptr)
		*Showing = params.Showing;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_PlayerContextMenu.WBP_PlayerContextMenu_C.IsContextMenuOpen
//		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
//		bool                                               IsOpen                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UWBP_PlayerContextMenu_C::IsContextMenuOpen(bool* IsOpen)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(86817);

	UWBP_PlayerContextMenu_C_IsContextMenuOpen_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (IsOpen != nullptr)
		*IsOpen = params.IsOpen;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_PlayerContextMenu.WBP_PlayerContextMenu_C.ShowForPlayerCard
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
//		class UWBP_player_card_module_C*                   PlayerCard                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWBP_PlayerContextMenu_C::ShowForPlayerCard(class UWBP_player_card_module_C* PlayerCard)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(86816);

	UWBP_PlayerContextMenu_C_ShowForPlayerCard_Params params {};
	params.PlayerCard = PlayerCard;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_PlayerContextMenu.WBP_PlayerContextMenu_C.MoveToWidgetSide
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
//		class UWidget*                                     Widget                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		KillstreakUINew_EViewSide                          side                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		struct FMargin                                     Padding                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UWBP_PlayerContextMenu_C::MoveToWidgetSide(class UWidget* Widget, KillstreakUINew_EViewSide side, const struct FMargin& Padding)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(86815);

	UWBP_PlayerContextMenu_C_MoveToWidgetSide_Params params {};
	params.Widget = Widget;
	params.side = side;
	params.Padding = Padding;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_PlayerContextMenu.WBP_PlayerContextMenu_C.UpdatePlayerAliases
//		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
//		TArray<struct FPlayerAlias>                        Aliases                                                    (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, HasGetValueTypeHash)
void UWBP_PlayerContextMenu_C::UpdatePlayerAliases(TArray<struct FPlayerAlias> Aliases)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(86814);

	UWBP_PlayerContextMenu_C_UpdatePlayerAliases_Params params {};
	params.Aliases = Aliases;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_PlayerContextMenu.WBP_PlayerContextMenu_C.MoveToWidget
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
//		class UWidget*                                     Widget                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWBP_PlayerContextMenu_C::MoveToWidget(class UWidget* Widget)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(86813);

	UWBP_PlayerContextMenu_C_MoveToWidget_Params params {};
	params.Widget = Widget;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_PlayerContextMenu.WBP_PlayerContextMenu_C.IsCurrentAccountId
//		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
//		struct FString                                     AccountId                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
//		bool                                               IsAccountId                                                (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UWBP_PlayerContextMenu_C::IsCurrentAccountId(const struct FString& AccountId, bool* IsAccountId)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(86812);

	UWBP_PlayerContextMenu_C_IsCurrentAccountId_Params params {};
	params.AccountId = AccountId;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (IsAccountId != nullptr)
		*IsAccountId = params.IsAccountId;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_PlayerContextMenu.WBP_PlayerContextMenu_C.RefreshOptionsPadding
//		Flags  -> (Private, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
void UWBP_PlayerContextMenu_C::RefreshOptionsPadding()
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(86811);

	UWBP_PlayerContextMenu_C_RefreshOptionsPadding_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_PlayerContextMenu.WBP_PlayerContextMenu_C.HideContextMenu
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
void UWBP_PlayerContextMenu_C::HideContextMenu()
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(86810);

	UWBP_PlayerContextMenu_C_HideContextMenu_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_PlayerContextMenu.WBP_PlayerContextMenu_C.Move To Player Card And Show
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
//		class UWBP_player_card_module_C*                   Selected_Player_Card                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWBP_PlayerContextMenu_C::Move_To_Player_Card_And_Show(class UWBP_player_card_module_C* Selected_Player_Card)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(86809);

	UWBP_PlayerContextMenu_C_Move_To_Player_Card_And_Show_Params params {};
	params.Selected_Player_Card = Selected_Player_Card;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_PlayerContextMenu.WBP_PlayerContextMenu_C.Is Any Option Visible
//		Flags  -> (Private, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
//		bool                                               Return_Value                                               (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UWBP_PlayerContextMenu_C::Is_Any_Option_Visible(bool* Return_Value)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(86808);

	UWBP_PlayerContextMenu_C_Is_Any_Option_Visible_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Return_Value != nullptr)
		*Return_Value = params.Return_Value;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_PlayerContextMenu.WBP_PlayerContextMenu_C.OnKeyUp
//		Flags  -> (BlueprintCosmetic, Event, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
//		struct FGeometry                                   MyGeometry                                                 (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
//		struct FKeyEvent                                   InKeyEvent                                                 (BlueprintVisible, BlueprintReadOnly, Parm)
//		struct FEventReply                                 ReturnValue                                                (Parm, OutParm, ReturnParm)
struct FEventReply UWBP_PlayerContextMenu_C::OnKeyUp(const struct FGeometry& MyGeometry, const struct FKeyEvent& InKeyEvent)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(86807);

	UWBP_PlayerContextMenu_C_OnKeyUp_Params params {};
	params.MyGeometry = MyGeometry;
	params.InKeyEvent = InKeyEvent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_PlayerContextMenu.WBP_PlayerContextMenu_C.OnKeyDown
//		Flags  -> (BlueprintCosmetic, Event, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
//		struct FGeometry                                   MyGeometry                                                 (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
//		struct FKeyEvent                                   InKeyEvent                                                 (BlueprintVisible, BlueprintReadOnly, Parm)
//		struct FEventReply                                 ReturnValue                                                (Parm, OutParm, ReturnParm)
struct FEventReply UWBP_PlayerContextMenu_C::OnKeyDown(const struct FGeometry& MyGeometry, const struct FKeyEvent& InKeyEvent)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(86806);

	UWBP_PlayerContextMenu_C_OnKeyDown_Params params {};
	params.MyGeometry = MyGeometry;
	params.InKeyEvent = InKeyEvent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_PlayerContextMenu.WBP_PlayerContextMenu_C.GetAllActiveButtons
//		Flags  -> (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
//		TArray<class UWidget*>                             Buttons                                                    (Parm, OutParm, ContainsInstancedReference, HasGetValueTypeHash)
void UWBP_PlayerContextMenu_C::GetAllActiveButtons(TArray<class UWidget*>* Buttons)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(86805);

	UWBP_PlayerContextMenu_C_GetAllActiveButtons_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Buttons != nullptr)
		*Buttons = params.Buttons;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_PlayerContextMenu.WBP_PlayerContextMenu_C.GetFirstActiveButton
//		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
//		class UWidget*                                     FocusWidget                                                (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWBP_PlayerContextMenu_C::GetFirstActiveButton(class UWidget** FocusWidget)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(86804);

	UWBP_PlayerContextMenu_C_GetFirstActiveButton_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (FocusWidget != nullptr)
		*FocusWidget = params.FocusWidget;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_PlayerContextMenu.WBP_PlayerContextMenu_C.ShowForPlayer
//		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
//		class UKSPlayerInfo*                               Friend_Info                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWBP_PlayerContextMenu_C::ShowForPlayer(class UKSPlayerInfo* Friend_Info)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(86803);

	UWBP_PlayerContextMenu_C_ShowForPlayer_Params params {};
	params.Friend_Info = Friend_Info;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_PlayerContextMenu.WBP_PlayerContextMenu_C.PreConstruct
//		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
//		bool                                               IsDesignTime                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UWBP_PlayerContextMenu_C::PreConstruct(bool IsDesignTime)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(86802);

	UWBP_PlayerContextMenu_C_PreConstruct_Params params {};
	params.IsDesignTime = IsDesignTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_PlayerContextMenu.WBP_PlayerContextMenu_C.Handle Input State Changed
//		Flags  -> (BlueprintCallable, BlueprintEvent)
// Parameters:
//		TEnumAsByte<PlatformGameFramework_EPGAME_INPUT_STATE> InputState                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWBP_PlayerContextMenu_C::Handle_Input_State_Changed(TEnumAsByte<PlatformGameFramework_EPGAME_INPUT_STATE> InputState)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(86801);

	UWBP_PlayerContextMenu_C_Handle_Input_State_Changed_Params params {};
	params.InputState = InputState;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_PlayerContextMenu.WBP_PlayerContextMenu_C.Handle View State Changed
//		Flags  -> (BlueprintCallable, BlueprintEvent)
// Parameters:
//		struct FName                                       CurrentRoute                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		struct FName                                       PreviousRoute                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		PlatformUMG_EViewManagerLayer                      Layer                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWBP_PlayerContextMenu_C::Handle_View_State_Changed(const struct FName& CurrentRoute, const struct FName& PreviousRoute, PlatformUMG_EViewManagerLayer Layer)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(86800);

	UWBP_PlayerContextMenu_C_Handle_View_State_Changed_Params params {};
	params.CurrentRoute = CurrentRoute;
	params.PreviousRoute = PreviousRoute;
	params.Layer = Layer;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_PlayerContextMenu.WBP_PlayerContextMenu_C.OnInitialized
//		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
void UWBP_PlayerContextMenu_C::OnInitialized()
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(86799);

	UWBP_PlayerContextMenu_C_OnInitialized_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_PlayerContextMenu.WBP_PlayerContextMenu_C.BndEvt__WBP_VoiceActivityContainer_K2Node_ComponentBoundEvent_0_OnVoiceParticipantUpdated__DelegateSignature
//		Flags  -> (BlueprintEvent)
// Parameters:
//		struct FString                                     AccountId                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
//		bool                                               bIsTalking                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
//		bool                                               bIsMuted                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UWBP_PlayerContextMenu_C::BndEvt__WBP_VoiceActivityContainer_K2Node_ComponentBoundEvent_0_OnVoiceParticipantUpdated__DelegateSignature(const struct FString& AccountId, bool bIsTalking, bool bIsMuted)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(86798);

	UWBP_PlayerContextMenu_C_BndEvt__WBP_VoiceActivityContainer_K2Node_ComponentBoundEvent_0_OnVoiceParticipantUpdated__DelegateSignature_Params params {};
	params.AccountId = AccountId;
	params.bIsTalking = bIsTalking;
	params.bIsMuted = bIsMuted;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_PlayerContextMenu.WBP_PlayerContextMenu_C.BndEvt__WBP_VoiceActivityContainer_K2Node_ComponentBoundEvent_1_OnVoiceAudioStateChange__DelegateSignature
//		Flags  -> (BlueprintEvent)
// Parameters:
//		KillstreakUINew_EKSVoiceActivityAudioState         AudioState                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWBP_PlayerContextMenu_C::BndEvt__WBP_VoiceActivityContainer_K2Node_ComponentBoundEvent_1_OnVoiceAudioStateChange__DelegateSignature(KillstreakUINew_EKSVoiceActivityAudioState AudioState)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(86797);

	UWBP_PlayerContextMenu_C_BndEvt__WBP_VoiceActivityContainer_K2Node_ComponentBoundEvent_1_OnVoiceAudioStateChange__DelegateSignature_Params params {};
	params.AudioState = AudioState;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_PlayerContextMenu.WBP_PlayerContextMenu_C.DelayMoveMenu
//		Flags  -> (BlueprintCallable, BlueprintEvent)
// Parameters:
//		class UKSWidget*                                   Widget                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		struct FMargin                                     Padding                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
//		KillstreakUINew_EViewSide                          side                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWBP_PlayerContextMenu_C::DelayMoveMenu(class UKSWidget* Widget, const struct FMargin& Padding, KillstreakUINew_EViewSide side)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(86796);

	UWBP_PlayerContextMenu_C_DelayMoveMenu_Params params {};
	params.Widget = Widget;
	params.Padding = Padding;
	params.side = side;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_PlayerContextMenu.WBP_PlayerContextMenu_C.On Player Card Update
//		Flags  -> (BlueprintCallable, BlueprintEvent)
// Parameters:
//		class UWBP_player_card_module_C*                   Player_Card                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWBP_PlayerContextMenu_C::On_Player_Card_Update(class UWBP_player_card_module_C* Player_Card)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(86795);

	UWBP_PlayerContextMenu_C_On_Player_Card_Update_Params params {};
	params.Player_Card = Player_Card;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_PlayerContextMenu.WBP_PlayerContextMenu_C.ExecuteUbergraph_WBP_PlayerContextMenu
//		Flags  -> (Final, HasDefaults)
// Parameters:
//		int                                                EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWBP_PlayerContextMenu_C::ExecuteUbergraph_WBP_PlayerContextMenu(int EntryPoint)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(86794);

	UWBP_PlayerContextMenu_C_ExecuteUbergraph_WBP_PlayerContextMenu_Params params {};
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_PlayerContextMenu.WBP_PlayerContextMenu_C.OnReportPlayer_0__DelegateSignature
//		Flags  -> (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
//		class UKSPlayerInfo*                               playerinfo                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWBP_PlayerContextMenu_C::OnReportPlayer_0__DelegateSignature(class UKSPlayerInfo* playerinfo)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(86793);

	UWBP_PlayerContextMenu_C_OnReportPlayer_0__DelegateSignature_Params params {};
	params.playerinfo = playerinfo;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_PlayerContextMenu.WBP_PlayerContextMenu_C.OnMenuStart__DelegateSignature
//		Flags  -> (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
//		class UWidget*                                     FocusWidget                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWBP_PlayerContextMenu_C::OnMenuStart__DelegateSignature(class UWidget* FocusWidget)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(86792);

	UWBP_PlayerContextMenu_C_OnMenuStart__DelegateSignature_Params params {};
	params.FocusWidget = FocusWidget;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_PlayerContextMenu.WBP_PlayerContextMenu_C.OnMenuHidden__DelegateSignature
//		Flags  -> (Public, Delegate, BlueprintCallable, BlueprintEvent)
void UWBP_PlayerContextMenu_C::OnMenuHidden__DelegateSignature()
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(86791);

	UWBP_PlayerContextMenu_C_OnMenuHidden__DelegateSignature_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_PlayerContextMenu.WBP_PlayerContextMenu_C.OnReadyForNavigation__DelegateSignature
//		Flags  -> (Public, Delegate, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
//		TArray<class UWidget*>                             NavWidgets                                                 (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, ContainsInstancedReference, HasGetValueTypeHash)
//		class UWidget*                                     Default_Widget                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWBP_PlayerContextMenu_C::OnReadyForNavigation__DelegateSignature(TArray<class UWidget*>* NavWidgets, class UWidget* Default_Widget)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(86790);

	UWBP_PlayerContextMenu_C_OnReadyForNavigation__DelegateSignature_Params params {};
	params.Default_Widget = Default_Widget;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (NavWidgets != nullptr)
		*NavWidgets = params.NavWidgets;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
