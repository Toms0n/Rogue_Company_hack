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
//		Name   -> Function WBP_player_card_module.WBP_player_card_module_C.HideRankedBadge
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
//		bool                                               Should_Hide                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UWBP_player_card_module_C::HideRankedBadge(bool Should_Hide)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(87040);

	UWBP_player_card_module_C_HideRankedBadge_Params params {};
	params.Should_Hide = Should_Hide;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_player_card_module.WBP_player_card_module_C.SetPlayerCardStyle
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
//		TEnumAsByte<EPlayerCardStyle_EPlayerCardStyle>     PlayerCardStyle                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWBP_player_card_module_C::SetPlayerCardStyle(TEnumAsByte<EPlayerCardStyle_EPlayerCardStyle> PlayerCardStyle)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(87039);

	UWBP_player_card_module_C_SetPlayerCardStyle_Params params {};
	params.PlayerCardStyle = PlayerCardStyle;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_player_card_module.WBP_player_card_module_C.SetVoiceState
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
//		bool                                               ShouldShow                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
//		bool                                               IsTalking                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
//		bool                                               IsMuted                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UWBP_player_card_module_C::SetVoiceState(bool ShouldShow, bool IsTalking, bool IsMuted)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(87038);

	UWBP_player_card_module_C_SetVoiceState_Params params {};
	params.ShouldShow = ShouldShow;
	params.IsTalking = IsTalking;
	params.IsMuted = IsMuted;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_player_card_module.WBP_player_card_module_C.View_ResetPlayerCardState
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
void UWBP_player_card_module_C::View_ResetPlayerCardState()
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(87037);

	UWBP_player_card_module_C_View_ResetPlayerCardState_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_player_card_module.WBP_player_card_module_C.NavigateConfirm
//		Flags  -> (Event, Protected, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
//		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
bool UWBP_player_card_module_C::NavigateConfirm()
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(87036);

	UWBP_player_card_module_C_NavigateConfirm_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_player_card_module.WBP_player_card_module_C.PlayerUpdate
//		Flags  -> (Protected, BlueprintCallable, BlueprintEvent)
// Parameters:
//		class UPUMG_PlayerInfo*                            Player_Info                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWBP_player_card_module_C::PlayerUpdate(class UPUMG_PlayerInfo* Player_Info)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(87035);

	UWBP_player_card_module_C_PlayerUpdate_Params params {};
	params.Player_Info = Player_Info;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_player_card_module.WBP_player_card_module_C.View_SetDefault
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
void UWBP_player_card_module_C::View_SetDefault()
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(87034);

	UWBP_player_card_module_C_View_SetDefault_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_player_card_module.WBP_player_card_module_C.View_SetEmpty
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
void UWBP_player_card_module_C::View_SetEmpty()
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(87033);

	UWBP_player_card_module_C_View_SetEmpty_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_player_card_module.WBP_player_card_module_C.SocialPlayerCardHoverSFX
//		Flags  -> (BlueprintCallable, BlueprintEvent)
void UWBP_player_card_module_C::SocialPlayerCardHoverSFX()
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(87032);

	UWBP_player_card_module_C_SocialPlayerCardHoverSFX_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_player_card_module.WBP_player_card_module_C.SocialPlayerCardClickSFX
//		Flags  -> (BlueprintCallable, BlueprintEvent)
void UWBP_player_card_module_C::SocialPlayerCardClickSFX()
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(87031);

	UWBP_player_card_module_C_SocialPlayerCardClickSFX_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_player_card_module.WBP_player_card_module_C.ShowPlayerCardAnimation
//		Flags  -> (BlueprintCallable, BlueprintEvent)
// Parameters:
//		float                                              ElapsedTime                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		float                                              ElapsedAlpha                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWBP_player_card_module_C::ShowPlayerCardAnimation(float ElapsedTime, float ElapsedAlpha)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(87030);

	UWBP_player_card_module_C_ShowPlayerCardAnimation_Params params {};
	params.ElapsedTime = ElapsedTime;
	params.ElapsedAlpha = ElapsedAlpha;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_player_card_module.WBP_player_card_module_C.ShowPlayerCardAnimationFinished
//		Flags  -> (BlueprintCallable, BlueprintEvent)
void UWBP_player_card_module_C::ShowPlayerCardAnimationFinished()
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(87029);

	UWBP_player_card_module_C_ShowPlayerCardAnimationFinished_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_player_card_module.WBP_player_card_module_C.AddShowPlayerCardAnimation
//		Flags  -> (BlueprintCallable, BlueprintEvent)
// Parameters:
//		float                                              Delay                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWBP_player_card_module_C::AddShowPlayerCardAnimation(float Delay)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(87028);

	UWBP_player_card_module_C_AddShowPlayerCardAnimation_Params params {};
	params.Delay = Delay;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_player_card_module.WBP_player_card_module_C.PreConstruct
//		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
//		bool                                               IsDesignTime                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UWBP_player_card_module_C::PreConstruct(bool IsDesignTime)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(87027);

	UWBP_player_card_module_C_PreConstruct_Params params {};
	params.IsDesignTime = IsDesignTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_player_card_module.WBP_player_card_module_C.BndEvt__HitTarget_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature
//		Flags  -> (BlueprintEvent)
void UWBP_player_card_module_C::BndEvt__HitTarget_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature()
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(87026);

	UWBP_player_card_module_C_BndEvt__HitTarget_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_player_card_module.WBP_player_card_module_C.BndEvt__HitTarget_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature
//		Flags  -> (BlueprintEvent)
void UWBP_player_card_module_C::BndEvt__HitTarget_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature()
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(87025);

	UWBP_player_card_module_C_BndEvt__HitTarget_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_player_card_module.WBP_player_card_module_C.BndEvt__HitTarget_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature
//		Flags  -> (BlueprintEvent)
void UWBP_player_card_module_C::BndEvt__HitTarget_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature()
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(87024);

	UWBP_player_card_module_C_BndEvt__HitTarget_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_player_card_module.WBP_player_card_module_C.Manual Clicked
//		Flags  -> (BlueprintCallable, BlueprintEvent)
void UWBP_player_card_module_C::Manual_Clicked()
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(87023);

	UWBP_player_card_module_C_Manual_Clicked_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_player_card_module.WBP_player_card_module_C.GamepadUnhover
//		Flags  -> (Event, Public, BlueprintEvent)
void UWBP_player_card_module_C::GamepadUnhover()
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(87022);

	UWBP_player_card_module_C_GamepadUnhover_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_player_card_module.WBP_player_card_module_C.GamepadHover
//		Flags  -> (Event, Public, BlueprintEvent)
void UWBP_player_card_module_C::GamepadHover()
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(87021);

	UWBP_player_card_module_C_GamepadHover_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_player_card_module.WBP_player_card_module_C.NavigateLeftFailure
//		Flags  -> (Event, Public, BlueprintEvent)
void UWBP_player_card_module_C::NavigateLeftFailure()
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(87020);

	UWBP_player_card_module_C_NavigateLeftFailure_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_player_card_module.WBP_player_card_module_C.NavigateRightFailure
//		Flags  -> (Event, Public, BlueprintEvent)
void UWBP_player_card_module_C::NavigateRightFailure()
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(87019);

	UWBP_player_card_module_C_NavigateRightFailure_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_player_card_module.WBP_player_card_module_C.Manual Hover
//		Flags  -> (BlueprintCallable, BlueprintEvent)
void UWBP_player_card_module_C::Manual_Hover()
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(87018);

	UWBP_player_card_module_C_Manual_Hover_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_player_card_module.WBP_player_card_module_C.Manual Unhover
//		Flags  -> (BlueprintCallable, BlueprintEvent)
void UWBP_player_card_module_C::Manual_Unhover()
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(87017);

	UWBP_player_card_module_C_Manual_Unhover_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_player_card_module.WBP_player_card_module_C.OnPlayerUpdate
//		Flags  -> (Event, Protected, BlueprintCallable, BlueprintEvent)
// Parameters:
//		class UPUMG_PlayerInfo*                            playerinfo                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		Killstreak_EKSPlayerOnlineStatus                   PlayerStatus                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		bool                                               IsPortalFriend                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
//		bool                                               IsPending                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UWBP_player_card_module_C::OnPlayerUpdate(class UPUMG_PlayerInfo* playerinfo, Killstreak_EKSPlayerOnlineStatus PlayerStatus, bool IsPortalFriend, bool IsPending)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(87016);

	UWBP_player_card_module_C_OnPlayerUpdate_Params params {};
	params.playerinfo = playerinfo;
	params.PlayerStatus = PlayerStatus;
	params.IsPortalFriend = IsPortalFriend;
	params.IsPending = IsPending;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_player_card_module.WBP_player_card_module_C.Handle Input State Changed
//		Flags  -> (BlueprintCallable, BlueprintEvent)
// Parameters:
//		TEnumAsByte<PlatformGameFramework_EPGAME_INPUT_STATE> InputState                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWBP_player_card_module_C::Handle_Input_State_Changed(TEnumAsByte<PlatformGameFramework_EPGAME_INPUT_STATE> InputState)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(87015);

	UWBP_player_card_module_C_Handle_Input_State_Changed_Params params {};
	params.InputState = InputState;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_player_card_module.WBP_player_card_module_C.OnContextMenuOpen
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
//		KillstreakUINew_EViewSide                          side                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWBP_player_card_module_C::OnContextMenuOpen(KillstreakUINew_EViewSide side)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(87014);

	UWBP_player_card_module_C_OnContextMenuOpen_Params params {};
	params.side = side;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_player_card_module.WBP_player_card_module_C.OnContextMenuClose
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
void UWBP_player_card_module_C::OnContextMenuClose()
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(87013);

	UWBP_player_card_module_C_OnContextMenuClose_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_player_card_module.WBP_player_card_module_C.OnInitialized
//		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
void UWBP_player_card_module_C::OnInitialized()
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(87012);

	UWBP_player_card_module_C_OnInitialized_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_player_card_module.WBP_player_card_module_C.ExecuteUbergraph_WBP_player_card_module
//		Flags  -> (Final, HasDefaults)
// Parameters:
//		int                                                EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWBP_player_card_module_C::ExecuteUbergraph_WBP_player_card_module(int EntryPoint)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(87011);

	UWBP_player_card_module_C_ExecuteUbergraph_WBP_player_card_module_Params params {};
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_player_card_module.WBP_player_card_module_C.OnPlayerUpdated__DelegateSignature
//		Flags  -> (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
//		class UWBP_player_card_module_C*                   Player_Card                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWBP_player_card_module_C::OnPlayerUpdated__DelegateSignature(class UWBP_player_card_module_C* Player_Card)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(87010);

	UWBP_player_card_module_C_OnPlayerUpdated__DelegateSignature_Params params {};
	params.Player_Card = Player_Card;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_player_card_module.WBP_player_card_module_C.OnBackButton__DelegateSignature
//		Flags  -> (Public, Delegate, BlueprintCallable, BlueprintEvent)
void UWBP_player_card_module_C::OnBackButton__DelegateSignature()
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(87009);

	UWBP_player_card_module_C_OnBackButton__DelegateSignature_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_player_card_module.WBP_player_card_module_C.OnCardHovered__DelegateSignature
//		Flags  -> (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
//		class UPUMG_PlayerInfo*                            Card_Player_Info                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWBP_player_card_module_C::OnCardHovered__DelegateSignature(class UPUMG_PlayerInfo* Card_Player_Info)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(87008);

	UWBP_player_card_module_C_OnCardHovered__DelegateSignature_Params params {};
	params.Card_Player_Info = Card_Player_Info;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_player_card_module.WBP_player_card_module_C.OnNavigateRightFailure__DelegateSignature
//		Flags  -> (Public, Delegate, BlueprintCallable, BlueprintEvent)
void UWBP_player_card_module_C::OnNavigateRightFailure__DelegateSignature()
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(87007);

	UWBP_player_card_module_C_OnNavigateRightFailure__DelegateSignature_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_player_card_module.WBP_player_card_module_C.OnNavigateLeftFailure__DelegateSignature
//		Flags  -> (Public, Delegate, BlueprintCallable, BlueprintEvent)
void UWBP_player_card_module_C::OnNavigateLeftFailure__DelegateSignature()
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(87006);

	UWBP_player_card_module_C_OnNavigateLeftFailure__DelegateSignature_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_player_card_module.WBP_player_card_module_C.OnPlayerClicked__DelegateSignature
//		Flags  -> (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
//		class UWBP_player_card_module_C*                   Selected_Player_Card                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWBP_player_card_module_C::OnPlayerClicked__DelegateSignature(class UWBP_player_card_module_C* Selected_Player_Card)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(87005);

	UWBP_player_card_module_C_OnPlayerClicked__DelegateSignature_Params params {};
	params.Selected_Player_Card = Selected_Player_Card;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
