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
//		Name   -> Function WBP_CustomGameLobby.WBP_CustomGameLobby_C.ToggleContextBar
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
//		bool                                               bShouldShow                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UWBP_CustomGameLobby_C::ToggleContextBar(bool bShouldShow)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(89139);

	UWBP_CustomGameLobby_C_ToggleContextBar_Params params {};
	params.bShouldShow = bShouldShow;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_CustomGameLobby.WBP_CustomGameLobby_C.UpdateSpectateState
//		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
void UWBP_CustomGameLobby_C::UpdateSpectateState()
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(89138);

	UWBP_CustomGameLobby_C_UpdateSpectateState_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_CustomGameLobby.WBP_CustomGameLobby_C.SetupSpectateButtonNavigation
//		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
//		int                                                FocusGroup                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWBP_CustomGameLobby_C::SetupSpectateButtonNavigation(int FocusGroup)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(89137);

	UWBP_CustomGameLobby_C_SetupSpectateButtonNavigation_Params params {};
	params.FocusGroup = FocusGroup;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_CustomGameLobby.WBP_CustomGameLobby_C.SetupStartButtonNavigation
//		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
//		int                                                FocusGroup                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWBP_CustomGameLobby_C::SetupStartButtonNavigation(int FocusGroup)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(89136);

	UWBP_CustomGameLobby_C_SetupStartButtonNavigation_Params params {};
	params.FocusGroup = FocusGroup;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_CustomGameLobby.WBP_CustomGameLobby_C.OnKeyUp
//		Flags  -> (BlueprintCosmetic, Event, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
//		struct FGeometry                                   MyGeometry                                                 (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
//		struct FKeyEvent                                   InKeyEvent                                                 (BlueprintVisible, BlueprintReadOnly, Parm)
//		struct FEventReply                                 ReturnValue                                                (Parm, OutParm, ReturnParm)
struct FEventReply UWBP_CustomGameLobby_C::OnKeyUp(const struct FGeometry& MyGeometry, const struct FKeyEvent& InKeyEvent)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(89135);

	UWBP_CustomGameLobby_C_OnKeyUp_Params params {};
	params.MyGeometry = MyGeometry;
	params.InKeyEvent = InKeyEvent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_CustomGameLobby.WBP_CustomGameLobby_C.TogglePlayerCardFor
//		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
//		class UKSPlayerInfo*                               playerinfo                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		class UWBP_CustomLobbyPlayer_C*                    PlayerWidget                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWBP_CustomGameLobby_C::TogglePlayerCardFor(class UKSPlayerInfo* playerinfo, class UWBP_CustomLobbyPlayer_C* PlayerWidget)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(89134);

	UWBP_CustomGameLobby_C_TogglePlayerCardFor_Params params {};
	params.playerinfo = playerinfo;
	params.PlayerWidget = PlayerWidget;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_CustomGameLobby.WBP_CustomGameLobby_C.HandleVoiceMemberUpdate
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
//		struct FString                                     AccountId                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
//		bool                                               bIsTalking                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
//		bool                                               bIsMuted                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UWBP_CustomGameLobby_C::HandleVoiceMemberUpdate(const struct FString& AccountId, bool bIsTalking, bool bIsMuted)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(89133);

	UWBP_CustomGameLobby_C_HandleVoiceMemberUpdate_Params params {};
	params.AccountId = AccountId;
	params.bIsTalking = bIsTalking;
	params.bIsMuted = bIsMuted;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_CustomGameLobby.WBP_CustomGameLobby_C.HandleVoiceMemberRemoved
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
//		struct FString                                     AccountId                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
void UWBP_CustomGameLobby_C::HandleVoiceMemberRemoved(const struct FString& AccountId)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(89132);

	UWBP_CustomGameLobby_C_HandleVoiceMemberRemoved_Params params {};
	params.AccountId = AccountId;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_CustomGameLobby.WBP_CustomGameLobby_C.HandleVoiceMemberAdded
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
//		struct FString                                     AccountId                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
void UWBP_CustomGameLobby_C::HandleVoiceMemberAdded(const struct FString& AccountId)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(89131);

	UWBP_CustomGameLobby_C_HandleVoiceMemberAdded_Params params {};
	params.AccountId = AccountId;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_CustomGameLobby.WBP_CustomGameLobby_C.GetMemberWidgetForVoice
//		Flags  -> (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
//		struct FString                                     VoiceId                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
//		class UWBP_CustomLobbyPlayer_C*                    Widget                                                     (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWBP_CustomGameLobby_C::GetMemberWidgetForVoice(const struct FString& VoiceId, class UWBP_CustomLobbyPlayer_C** Widget)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(89130);

	UWBP_CustomGameLobby_C_GetMemberWidgetForVoice_Params params {};
	params.VoiceId = VoiceId;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Widget != nullptr)
		*Widget = params.Widget;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_CustomGameLobby.WBP_CustomGameLobby_C.SetupExistingPlayers
//		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
void UWBP_CustomGameLobby_C::SetupExistingPlayers()
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(89129);

	UWBP_CustomGameLobby_C_SetupExistingPlayers_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_CustomGameLobby.WBP_CustomGameLobby_C.SetupQueueFactoryEvents
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
void UWBP_CustomGameLobby_C::SetupQueueFactoryEvents()
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(89128);

	UWBP_CustomGameLobby_C_SetupQueueFactoryEvents_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_CustomGameLobby.WBP_CustomGameLobby_C.OnQueueStateUpdated
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
//		PlatformUMG_EPUMG_MatchStatus                      MatchStatus                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWBP_CustomGameLobby_C::OnQueueStateUpdated(PlatformUMG_EPUMG_MatchStatus MatchStatus)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(89127);

	UWBP_CustomGameLobby_C_OnQueueStateUpdated_Params params {};
	params.MatchStatus = MatchStatus;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_CustomGameLobby.WBP_CustomGameLobby_C.GetTeamButtons
//		Flags  -> (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
//		TArray<class UKSWidget*>                           TeamButtons                                                (Parm, OutParm, ContainsInstancedReference, HasGetValueTypeHash)
void UWBP_CustomGameLobby_C::GetTeamButtons(TArray<class UKSWidget*>* TeamButtons)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(89126);

	UWBP_CustomGameLobby_C_GetTeamButtons_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (TeamButtons != nullptr)
		*TeamButtons = params.TeamButtons;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_CustomGameLobby.WBP_CustomGameLobby_C.MassInvite_Close
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
void UWBP_CustomGameLobby_C::MassInvite_Close()
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(89125);

	UWBP_CustomGameLobby_C_MassInvite_Close_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_CustomGameLobby.WBP_CustomGameLobby_C.MassInvite_Select
//		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
//		class UKSPlayerInfo*                               playerinfo                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		KillstreakUINew_EKSInviteSelectResult              ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
KillstreakUINew_EKSInviteSelectResult UWBP_CustomGameLobby_C::MassInvite_Select(class UKSPlayerInfo* playerinfo)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(89124);

	UWBP_CustomGameLobby_C_MassInvite_Select_Params params {};
	params.playerinfo = playerinfo;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_CustomGameLobby.WBP_CustomGameLobby_C.MassInvite_IsSelected
//		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
//		class UKSPlayerInfo*                               playerinfo                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
bool UWBP_CustomGameLobby_C::MassInvite_IsSelected(class UKSPlayerInfo* playerinfo)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(89123);

	UWBP_CustomGameLobby_C_MassInvite_IsSelected_Params params {};
	params.playerinfo = playerinfo;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_CustomGameLobby.WBP_CustomGameLobby_C.MassInvite_ShouldShowPlayer
//		Flags  -> (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
//		class UKSPlayerInfo*                               playerinfo                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
bool UWBP_CustomGameLobby_C::MassInvite_ShouldShowPlayer(class UKSPlayerInfo* playerinfo)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(89122);

	UWBP_CustomGameLobby_C_MassInvite_ShouldShowPlayer_Params params {};
	params.playerinfo = playerinfo;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_CustomGameLobby.WBP_CustomGameLobby_C.OnReceiveHostName
//		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
void UWBP_CustomGameLobby_C::OnReceiveHostName()
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(89121);

	UWBP_CustomGameLobby_C_OnReceiveHostName_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_CustomGameLobby.WBP_CustomGameLobby_C.UpdateQueueState
//		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
void UWBP_CustomGameLobby_C::UpdateQueueState()
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(89120);

	UWBP_CustomGameLobby_C_UpdateQueueState_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_CustomGameLobby.WBP_CustomGameLobby_C.FinalizeLog
//		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
//		struct FText                                       Text                                                       (BlueprintVisible, BlueprintReadOnly, Parm)
//		class UPUMG_PlayerInfo*                            playerinfo                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWBP_CustomGameLobby_C::FinalizeLog(const struct FText& Text, class UPUMG_PlayerInfo* playerinfo)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(89119);

	UWBP_CustomGameLobby_C_FinalizeLog_Params params {};
	params.Text = Text;
	params.playerinfo = playerinfo;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_CustomGameLobby.WBP_CustomGameLobby_C.LogPermissionChange
//		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
//		class UPUMG_PlayerInfo*                            playerinfo                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		PlatformUMG_EPUMG_CustomMatchPermission            NewPermissions                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		PlatformUMG_EPUMG_CustomMatchPermission            OldPermissions                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWBP_CustomGameLobby_C::LogPermissionChange(class UPUMG_PlayerInfo* playerinfo, PlatformUMG_EPUMG_CustomMatchPermission NewPermissions, PlatformUMG_EPUMG_CustomMatchPermission OldPermissions)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(89118);

	UWBP_CustomGameLobby_C_LogPermissionChange_Params params {};
	params.playerinfo = playerinfo;
	params.NewPermissions = NewPermissions;
	params.OldPermissions = OldPermissions;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_CustomGameLobby.WBP_CustomGameLobby_C.HandleReceivePlayerName
//		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
void UWBP_CustomGameLobby_C::HandleReceivePlayerName()
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(89117);

	UWBP_CustomGameLobby_C_HandleReceivePlayerName_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_CustomGameLobby.WBP_CustomGameLobby_C.GetTeamName
//		Flags  -> (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
//		struct FPUMG_CustomMatchMember                     PUMG_CustomMatchMember                                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor)
//		struct FText                                       ReturnValue                                                (Parm, OutParm, ReturnParm)
struct FText UWBP_CustomGameLobby_C::GetTeamName(const struct FPUMG_CustomMatchMember& PUMG_CustomMatchMember)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(89116);

	UWBP_CustomGameLobby_C_GetTeamName_Params params {};
	params.PUMG_CustomMatchMember = PUMG_CustomMatchMember;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_CustomGameLobby.WBP_CustomGameLobby_C.AddLog
//		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
//		struct FText                                       Text                                                       (BlueprintVisible, BlueprintReadOnly, Parm)
//		class UPUMG_PlayerInfo*                            playerinfo                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWBP_CustomGameLobby_C::AddLog(const struct FText& Text, class UPUMG_PlayerInfo* playerinfo)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(89115);

	UWBP_CustomGameLobby_C_AddLog_Params params {};
	params.Text = Text;
	params.playerinfo = playerinfo;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_CustomGameLobby.WBP_CustomGameLobby_C.RemoveMember
//		Flags  -> (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
//		struct FPUMG_CustomMatchMember                     FormerMember                                               (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor)
//		bool                                               Removed                                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UWBP_CustomGameLobby_C::RemoveMember(struct FPUMG_CustomMatchMember* FormerMember, bool* Removed)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(89114);

	UWBP_CustomGameLobby_C_RemoveMember_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (FormerMember != nullptr)
		*FormerMember = params.FormerMember;
	if (Removed != nullptr)
		*Removed = params.Removed;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_CustomGameLobby.WBP_CustomGameLobby_C.AddMember
//		Flags  -> (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
//		struct FPUMG_CustomMatchMember                     MatchMember                                                (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor)
//		bool                                               Added                                                      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UWBP_CustomGameLobby_C::AddMember(const struct FPUMG_CustomMatchMember& MatchMember, bool* Added)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(89113);

	UWBP_CustomGameLobby_C_AddMember_Params params {};
	params.MatchMember = MatchMember;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Added != nullptr)
		*Added = params.Added;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_CustomGameLobby.WBP_CustomGameLobby_C.NavigateBack
//		Flags  -> (Event, Protected, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
//		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
bool UWBP_CustomGameLobby_C::NavigateBack()
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(89112);

	UWBP_CustomGameLobby_C_NavigateBack_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_CustomGameLobby.WBP_CustomGameLobby_C.TEST_InviteNextAvailablePlayer
//		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
void UWBP_CustomGameLobby_C::TEST_InviteNextAvailablePlayer()
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(89111);

	UWBP_CustomGameLobby_C_TEST_InviteNextAvailablePlayer_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_CustomGameLobby.WBP_CustomGameLobby_C.SetupTeamNavigation
//		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
//		int                                                FocusGroup                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWBP_CustomGameLobby_C::SetupTeamNavigation(int FocusGroup)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(89110);

	UWBP_CustomGameLobby_C_SetupTeamNavigation_Params params {};
	params.FocusGroup = FocusGroup;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_CustomGameLobby.WBP_CustomGameLobby_C.UpdateWidgetsWithData
//		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
//		struct FFBP_CustomMatchTeam                        Team                                                       (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, ContainsInstancedReference, HasGetValueTypeHash)
void UWBP_CustomGameLobby_C::UpdateWidgetsWithData(struct FFBP_CustomMatchTeam* Team)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(89109);

	UWBP_CustomGameLobby_C_UpdateWidgetsWithData_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Team != nullptr)
		*Team = params.Team;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_CustomGameLobby.WBP_CustomGameLobby_C.OnMemberUpdate
//		Flags  -> (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
//		struct FPUMG_CustomMatchMember                     MatchMember                                                (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor)
//		struct FPUMG_CustomMatchMember                     PreviousData                                               (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor)
void UWBP_CustomGameLobby_C::OnMemberUpdate(const struct FPUMG_CustomMatchMember& MatchMember, const struct FPUMG_CustomMatchMember& PreviousData)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(89108);

	UWBP_CustomGameLobby_C_OnMemberUpdate_Params params {};
	params.MatchMember = MatchMember;
	params.PreviousData = PreviousData;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_CustomGameLobby.WBP_CustomGameLobby_C.OnMemberRemoved
//		Flags  -> (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
//		struct FPUMG_CustomMatchMember                     FormerMember                                               (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor)
void UWBP_CustomGameLobby_C::OnMemberRemoved(const struct FPUMG_CustomMatchMember& FormerMember)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(89107);

	UWBP_CustomGameLobby_C_OnMemberRemoved_Params params {};
	params.FormerMember = FormerMember;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_CustomGameLobby.WBP_CustomGameLobby_C.OnMemberAdded
//		Flags  -> (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
//		struct FPUMG_CustomMatchMember                     MatchMember                                                (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor)
void UWBP_CustomGameLobby_C::OnMemberAdded(const struct FPUMG_CustomMatchMember& MatchMember)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(89106);

	UWBP_CustomGameLobby_C_OnMemberAdded_Params params {};
	params.MatchMember = MatchMember;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_CustomGameLobby.WBP_CustomGameLobby_C.OnQueueUpdate
//		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
void UWBP_CustomGameLobby_C::OnQueueUpdate()
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(89105);

	UWBP_CustomGameLobby_C_OnQueueUpdate_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_CustomGameLobby.WBP_CustomGameLobby_C.GetQueueDataFactory
//		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
//		class UKSQueueDataFactory*                         DataFactory                                                (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWBP_CustomGameLobby_C::GetQueueDataFactory(class UKSQueueDataFactory** DataFactory)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(89104);

	UWBP_CustomGameLobby_C_GetQueueDataFactory_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (DataFactory != nullptr)
		*DataFactory = params.DataFactory;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_CustomGameLobby.WBP_CustomGameLobby_C.PopulateTeamRenderers
//		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
//		class UPanelWidget*                                TeamPanel                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		int                                                TeamId                                                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		TEnumAsByte<ELaterality_ELaterality>               ControlsSide                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		int                                                NumPlayers                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWBP_CustomGameLobby_C::PopulateTeamRenderers(class UPanelWidget* TeamPanel, int TeamId, TEnumAsByte<ELaterality_ELaterality> ControlsSide, int NumPlayers)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(89103);

	UWBP_CustomGameLobby_C_PopulateTeamRenderers_Params params {};
	params.TeamPanel = TeamPanel;
	params.TeamId = TeamId;
	params.ControlsSide = ControlsSide;
	params.NumPlayers = NumPlayers;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_CustomGameLobby.WBP_CustomGameLobby_C.SetupRenderers
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
void UWBP_CustomGameLobby_C::SetupRenderers()
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(89102);

	UWBP_CustomGameLobby_C_SetupRenderers_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_CustomGameLobby.WBP_CustomGameLobby_C.SetupDisplayElements
//		Flags  -> (Protected, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
void UWBP_CustomGameLobby_C::SetupDisplayElements()
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(89101);

	UWBP_CustomGameLobby_C_SetupDisplayElements_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_CustomGameLobby.WBP_CustomGameLobby_C.UpdateQueueInfo
//		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
//		struct FClientQueueInfo                            QueueInfo                                                  (BlueprintVisible, BlueprintReadOnly, Parm)
void UWBP_CustomGameLobby_C::UpdateQueueInfo(const struct FClientQueueInfo& QueueInfo)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(89100);

	UWBP_CustomGameLobby_C_UpdateQueueInfo_Params params {};
	params.QueueInfo = QueueInfo;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_CustomGameLobby.WBP_CustomGameLobby_C.PreConstruct
//		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
//		bool                                               IsDesignTime                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UWBP_CustomGameLobby_C::PreConstruct(bool IsDesignTime)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(89099);

	UWBP_CustomGameLobby_C_PreConstruct_Params params {};
	params.IsDesignTime = IsDesignTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_CustomGameLobby.WBP_CustomGameLobby_C.Construct
//		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
void UWBP_CustomGameLobby_C::Construct()
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(89098);

	UWBP_CustomGameLobby_C_Construct_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_CustomGameLobby.WBP_CustomGameLobby_C.OnInitialized
//		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
void UWBP_CustomGameLobby_C::OnInitialized()
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(89097);

	UWBP_CustomGameLobby_C_OnInitialized_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_CustomGameLobby.WBP_CustomGameLobby_C.HandleDataChange
//		Flags  -> (BlueprintCallable, BlueprintEvent)
void UWBP_CustomGameLobby_C::HandleDataChange()
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(89096);

	UWBP_CustomGameLobby_C_HandleDataChange_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_CustomGameLobby.WBP_CustomGameLobby_C.InvalidateData
//		Flags  -> (BlueprintCallable, BlueprintEvent)
void UWBP_CustomGameLobby_C::InvalidateData()
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(89095);

	UWBP_CustomGameLobby_C_InvalidateData_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_CustomGameLobby.WBP_CustomGameLobby_C.InitializeWidgetNavigation
//		Flags  -> (Event, Public, BlueprintEvent)
void UWBP_CustomGameLobby_C::InitializeWidgetNavigation()
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(89094);

	UWBP_CustomGameLobby_C_InitializeWidgetNavigation_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_CustomGameLobby.WBP_CustomGameLobby_C.HandlePlayerClicked
//		Flags  -> (BlueprintCallable, BlueprintEvent)
// Parameters:
//		class UKSPlayerInfo*                               playerinfo                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		class UKSWidget*                                   Widget                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWBP_CustomGameLobby_C::HandlePlayerClicked(class UKSPlayerInfo* playerinfo, class UKSWidget* Widget)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(89093);

	UWBP_CustomGameLobby_C_HandlePlayerClicked_Params params {};
	params.playerinfo = playerinfo;
	params.Widget = Widget;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_CustomGameLobby.WBP_CustomGameLobby_C.HandleEmptyClicked
//		Flags  -> (BlueprintCallable, BlueprintEvent)
// Parameters:
//		class UKSWidget*                                   Widget                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWBP_CustomGameLobby_C::HandleEmptyClicked(class UKSWidget* Widget)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(89092);

	UWBP_CustomGameLobby_C_HandleEmptyClicked_Params params {};
	params.Widget = Widget;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_CustomGameLobby.WBP_CustomGameLobby_C.HandlePlayerKick
//		Flags  -> (BlueprintCallable, BlueprintEvent)
// Parameters:
//		class UKSPlayerInfo*                               playerinfo                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		class UKSWidget*                                   Widget                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWBP_CustomGameLobby_C::HandlePlayerKick(class UKSPlayerInfo* playerinfo, class UKSWidget* Widget)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(89091);

	UWBP_CustomGameLobby_C_HandlePlayerKick_Params params {};
	params.playerinfo = playerinfo;
	params.Widget = Widget;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_CustomGameLobby.WBP_CustomGameLobby_C.HandlePlayerSwap
//		Flags  -> (BlueprintCallable, BlueprintEvent)
// Parameters:
//		class UKSPlayerInfo*                               playerinfo                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		class UKSWidget*                                   Widget                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWBP_CustomGameLobby_C::HandlePlayerSwap(class UKSPlayerInfo* playerinfo, class UKSWidget* Widget)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(89090);

	UWBP_CustomGameLobby_C_HandlePlayerSwap_Params params {};
	params.playerinfo = playerinfo;
	params.Widget = Widget;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_CustomGameLobby.WBP_CustomGameLobby_C.OnClickBack
//		Flags  -> (BlueprintCallable, BlueprintEvent)
void UWBP_CustomGameLobby_C::OnClickBack()
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(89089);

	UWBP_CustomGameLobby_C_OnClickBack_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_CustomGameLobby.WBP_CustomGameLobby_C.OnShown
//		Flags  -> (Event, Public, BlueprintEvent)
void UWBP_CustomGameLobby_C::OnShown()
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(89088);

	UWBP_CustomGameLobby_C_OnShown_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_CustomGameLobby.WBP_CustomGameLobby_C.BndEvt__WBP_StandardButtonLarge_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature
//		Flags  -> (BlueprintEvent)
// Parameters:
//		class UWidget*                                     Widget                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWBP_CustomGameLobby_C::BndEvt__WBP_StandardButtonLarge_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature(class UWidget* Widget)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(89087);

	UWBP_CustomGameLobby_C_BndEvt__WBP_StandardButtonLarge_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature_Params params {};
	params.Widget = Widget;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_CustomGameLobby.WBP_CustomGameLobby_C.OnQueueLeft
//		Flags  -> (BlueprintCallable, BlueprintEvent)
void UWBP_CustomGameLobby_C::OnQueueLeft()
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(89086);

	UWBP_CustomGameLobby_C_OnQueueLeft_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_CustomGameLobby.WBP_CustomGameLobby_C.BndEvt__Blocker_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature
//		Flags  -> (BlueprintEvent)
void UWBP_CustomGameLobby_C::BndEvt__Blocker_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature()
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(89085);

	UWBP_CustomGameLobby_C_BndEvt__Blocker_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_CustomGameLobby.WBP_CustomGameLobby_C.BndEvt__VoiceActivity_K2Node_ComponentBoundEvent_2_OnVoiceParticipantAdded__DelegateSignature
//		Flags  -> (BlueprintEvent)
// Parameters:
//		struct FString                                     AccountId                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
void UWBP_CustomGameLobby_C::BndEvt__VoiceActivity_K2Node_ComponentBoundEvent_2_OnVoiceParticipantAdded__DelegateSignature(const struct FString& AccountId)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(89084);

	UWBP_CustomGameLobby_C_BndEvt__VoiceActivity_K2Node_ComponentBoundEvent_2_OnVoiceParticipantAdded__DelegateSignature_Params params {};
	params.AccountId = AccountId;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_CustomGameLobby.WBP_CustomGameLobby_C.BndEvt__VoiceActivity_K2Node_ComponentBoundEvent_3_OnVoiceParticipantRemoved__DelegateSignature
//		Flags  -> (BlueprintEvent)
// Parameters:
//		struct FString                                     AccountId                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
void UWBP_CustomGameLobby_C::BndEvt__VoiceActivity_K2Node_ComponentBoundEvent_3_OnVoiceParticipantRemoved__DelegateSignature(const struct FString& AccountId)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(89083);

	UWBP_CustomGameLobby_C_BndEvt__VoiceActivity_K2Node_ComponentBoundEvent_3_OnVoiceParticipantRemoved__DelegateSignature_Params params {};
	params.AccountId = AccountId;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_CustomGameLobby.WBP_CustomGameLobby_C.BndEvt__VoiceActivity_K2Node_ComponentBoundEvent_4_OnVoiceParticipantUpdated__DelegateSignature
//		Flags  -> (BlueprintEvent)
// Parameters:
//		struct FString                                     AccountId                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
//		bool                                               bIsTalking                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
//		bool                                               bIsMuted                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UWBP_CustomGameLobby_C::BndEvt__VoiceActivity_K2Node_ComponentBoundEvent_4_OnVoiceParticipantUpdated__DelegateSignature(const struct FString& AccountId, bool bIsTalking, bool bIsMuted)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(89082);

	UWBP_CustomGameLobby_C_BndEvt__VoiceActivity_K2Node_ComponentBoundEvent_4_OnVoiceParticipantUpdated__DelegateSignature_Params params {};
	params.AccountId = AccountId;
	params.bIsTalking = bIsTalking;
	params.bIsMuted = bIsMuted;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_CustomGameLobby.WBP_CustomGameLobby_C.BndEvt__SpectateButton_K2Node_ComponentBoundEvent_8_OnClicked__DelegateSignature
//		Flags  -> (BlueprintEvent)
// Parameters:
//		class UWidget*                                     Widget                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWBP_CustomGameLobby_C::BndEvt__SpectateButton_K2Node_ComponentBoundEvent_8_OnClicked__DelegateSignature(class UWidget* Widget)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(89081);

	UWBP_CustomGameLobby_C_BndEvt__SpectateButton_K2Node_ComponentBoundEvent_8_OnClicked__DelegateSignature_Params params {};
	params.Widget = Widget;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_CustomGameLobby.WBP_CustomGameLobby_C.BndEvt__ContextMenu_K2Node_ComponentBoundEvent_9_OnMenuStart__DelegateSignature
//		Flags  -> (BlueprintEvent)
// Parameters:
//		class UWidget*                                     FocusWidget                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWBP_CustomGameLobby_C::BndEvt__ContextMenu_K2Node_ComponentBoundEvent_9_OnMenuStart__DelegateSignature(class UWidget* FocusWidget)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(89080);

	UWBP_CustomGameLobby_C_BndEvt__ContextMenu_K2Node_ComponentBoundEvent_9_OnMenuStart__DelegateSignature_Params params {};
	params.FocusWidget = FocusWidget;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_CustomGameLobby.WBP_CustomGameLobby_C.BndEvt__ContextMenu_K2Node_ComponentBoundEvent_10_OnReadyForNavigation__DelegateSignature
//		Flags  -> (HasOutParms, BlueprintEvent)
// Parameters:
//		TArray<class UWidget*>                             NavWidgets                                                 (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, ContainsInstancedReference, HasGetValueTypeHash)
//		class UWidget*                                     Default_Widget                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWBP_CustomGameLobby_C::BndEvt__ContextMenu_K2Node_ComponentBoundEvent_10_OnReadyForNavigation__DelegateSignature(TArray<class UWidget*>* NavWidgets, class UWidget* Default_Widget)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(89079);

	UWBP_CustomGameLobby_C_BndEvt__ContextMenu_K2Node_ComponentBoundEvent_10_OnReadyForNavigation__DelegateSignature_Params params {};
	params.Default_Widget = Default_Widget;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (NavWidgets != nullptr)
		*NavWidgets = params.NavWidgets;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_CustomGameLobby.WBP_CustomGameLobby_C.BndEvt__ContextMenu_K2Node_ComponentBoundEvent_11_OnMenuHidden__DelegateSignature
//		Flags  -> (BlueprintEvent)
void UWBP_CustomGameLobby_C::BndEvt__ContextMenu_K2Node_ComponentBoundEvent_11_OnMenuHidden__DelegateSignature()
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(89078);

	UWBP_CustomGameLobby_C_BndEvt__ContextMenu_K2Node_ComponentBoundEvent_11_OnMenuHidden__DelegateSignature_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_CustomGameLobby.WBP_CustomGameLobby_C.ExecuteUbergraph_WBP_CustomGameLobby
//		Flags  -> (Final, HasDefaults)
// Parameters:
//		int                                                EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWBP_CustomGameLobby_C::ExecuteUbergraph_WBP_CustomGameLobby(int EntryPoint)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(89077);

	UWBP_CustomGameLobby_C_ExecuteUbergraph_WBP_CustomGameLobby_Params params {};
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
