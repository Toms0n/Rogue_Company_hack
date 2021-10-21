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
//		Offset -> 0x00AC6A30
//		Name   -> Function Lobby.LobbyBeaconClient.ServerSetPartyOwner
//		Flags  -> (Net, NetReliable, Native, Event, Protected, NetServer, NetValidate)
// Parameters:
//		struct FUniqueNetIdRepl                            InUniqueId                                                 (ConstParm, Parm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		struct FUniqueNetIdRepl                            InPartyOwnerId                                             (ConstParm, Parm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void ALobbyBeaconClient::ServerSetPartyOwner(const struct FUniqueNetIdRepl& InUniqueId, const struct FUniqueNetIdRepl& InPartyOwnerId)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(10077);

	ALobbyBeaconClient_ServerSetPartyOwner_Params params {};
	params.InUniqueId = InUniqueId;
	params.InPartyOwnerId = InPartyOwnerId;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00AC69E0
//		Name   -> Function Lobby.LobbyBeaconClient.ServerNotifyJoiningServer
//		Flags  -> (Net, NetReliable, Native, Event, Protected, NetServer, NetValidate)
void ALobbyBeaconClient::ServerNotifyJoiningServer()
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(10076);

	ALobbyBeaconClient_ServerNotifyJoiningServer_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00AC6830
//		Name   -> Function Lobby.LobbyBeaconClient.ServerLoginPlayer
//		Flags  -> (Net, NetReliable, Native, Event, Protected, NetServer, NetValidate)
// Parameters:
//		struct FString                                     InSessionId                                                (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		struct FUniqueNetIdRepl                            InUniqueId                                                 (ConstParm, Parm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		struct FString                                     UrlString                                                  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void ALobbyBeaconClient::ServerLoginPlayer(const struct FString& InSessionId, const struct FUniqueNetIdRepl& InUniqueId, const struct FString& UrlString)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(10075);

	ALobbyBeaconClient_ServerLoginPlayer_Params params {};
	params.InSessionId = InSessionId;
	params.InUniqueId = InUniqueId;
	params.UrlString = UrlString;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00AC66A0
//		Name   -> Function Lobby.LobbyBeaconClient.ServerKickPlayer
//		Flags  -> (Net, NetReliable, Native, Event, Protected, NetServer, NetValidate)
// Parameters:
//		struct FUniqueNetIdRepl                            PlayerToKick                                               (ConstParm, Parm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		struct FText                                       Reason                                                     (ConstParm, Parm, ReferenceParm, NativeAccessSpecifierPublic)
void ALobbyBeaconClient::ServerKickPlayer(const struct FUniqueNetIdRepl& PlayerToKick, const struct FText& Reason)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(10074);

	ALobbyBeaconClient_ServerKickPlayer_Params params {};
	params.PlayerToKick = PlayerToKick;
	params.Reason = Reason;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00AC6650
//		Name   -> Function Lobby.LobbyBeaconClient.ServerDisconnectFromLobby
//		Flags  -> (Net, NetReliable, Native, Event, Protected, NetServer, NetValidate)
void ALobbyBeaconClient::ServerDisconnectFromLobby()
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(10073);

	ALobbyBeaconClient_ServerDisconnectFromLobby_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00AC6590
//		Name   -> Function Lobby.LobbyBeaconClient.ServerCheat
//		Flags  -> (Net, NetReliable, Native, Event, Public, NetServer, NetValidate)
// Parameters:
//		struct FString                                     Msg                                                        (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void ALobbyBeaconClient::ServerCheat(const struct FString& Msg)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(10072);

	ALobbyBeaconClient_ServerCheat_Params params {};
	params.Msg = Msg;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00AC6430
//		Name   -> Function Lobby.LobbyBeaconClient.ClientWasKicked
//		Flags  -> (Net, NetReliable, Native, Event, Protected, NetClient)
// Parameters:
//		struct FText                                       KickReason                                                 (ConstParm, Parm, ReferenceParm, NativeAccessSpecifierPublic)
void ALobbyBeaconClient::ClientWasKicked(const struct FText& KickReason)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(10071);

	ALobbyBeaconClient_ClientWasKicked_Params params {};
	params.KickReason = KickReason;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00AC63A0
//		Name   -> Function Lobby.LobbyBeaconClient.ClientSetInviteFlags
//		Flags  -> (Net, NetReliable, Native, Event, Public, NetClient)
// Parameters:
//		struct FJoinabilitySettings                        Settings                                                   (ConstParm, Parm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void ALobbyBeaconClient::ClientSetInviteFlags(const struct FJoinabilitySettings& Settings)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(10070);

	ALobbyBeaconClient_ClientSetInviteFlags_Params params {};
	params.Settings = Settings;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00AC62B0
//		Name   -> Function Lobby.LobbyBeaconClient.ClientPlayerLeft
//		Flags  -> (Net, NetReliable, Native, Event, Protected, NetClient)
// Parameters:
//		struct FUniqueNetIdRepl                            InUniqueId                                                 (ConstParm, Parm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void ALobbyBeaconClient::ClientPlayerLeft(const struct FUniqueNetIdRepl& InUniqueId)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(10069);

	ALobbyBeaconClient_ClientPlayerLeft_Params params {};
	params.InUniqueId = InUniqueId;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00AC6140
//		Name   -> Function Lobby.LobbyBeaconClient.ClientPlayerJoined
//		Flags  -> (Net, NetReliable, Native, Event, Protected, NetClient)
// Parameters:
//		struct FText                                       NewPlayerName                                              (ConstParm, Parm, ReferenceParm, NativeAccessSpecifierPublic)
//		struct FUniqueNetIdRepl                            InUniqueId                                                 (ConstParm, Parm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void ALobbyBeaconClient::ClientPlayerJoined(const struct FText& NewPlayerName, const struct FUniqueNetIdRepl& InUniqueId)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(10068);

	ALobbyBeaconClient_ClientPlayerJoined_Params params {};
	params.NewPlayerName = NewPlayerName;
	params.InUniqueId = InUniqueId;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00AC6010
//		Name   -> Function Lobby.LobbyBeaconClient.ClientLoginComplete
//		Flags  -> (Net, NetReliable, Native, Event, Protected, NetClient)
// Parameters:
//		struct FUniqueNetIdRepl                            InUniqueId                                                 (ConstParm, Parm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		bool                                               bWasSuccessful                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void ALobbyBeaconClient::ClientLoginComplete(const struct FUniqueNetIdRepl& InUniqueId, bool bWasSuccessful)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(10067);

	ALobbyBeaconClient_ClientLoginComplete_Params params {};
	params.InUniqueId = InUniqueId;
	params.bWasSuccessful = bWasSuccessful;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00AC5FF0
//		Name   -> Function Lobby.LobbyBeaconClient.ClientJoinGame
//		Flags  -> (Net, NetReliable, Native, Event, Public, NetClient)
void ALobbyBeaconClient::ClientJoinGame()
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(10066);

	ALobbyBeaconClient_ClientJoinGame_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x009F3010
//		Name   -> Function Lobby.LobbyBeaconClient.ClientAckJoiningServer
//		Flags  -> (Net, NetReliable, Native, Event, Protected, NetClient)
void ALobbyBeaconClient::ClientAckJoiningServer()
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(10065);

	ALobbyBeaconClient_ClientAckJoiningServer_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00AC6550
//		Name   -> Function Lobby.LobbyBeaconPlayerState.OnRep_UniqueId
//		Flags  -> (Final, Native, Protected)
void ALobbyBeaconPlayerState::OnRep_UniqueId()
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(10080);

	ALobbyBeaconPlayerState_OnRep_UniqueId_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00AC6530
//		Name   -> Function Lobby.LobbyBeaconPlayerState.OnRep_PartyOwner
//		Flags  -> (Final, Native, Protected)
void ALobbyBeaconPlayerState::OnRep_PartyOwner()
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(10079);

	ALobbyBeaconPlayerState_OnRep_PartyOwner_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00AC64F0
//		Name   -> Function Lobby.LobbyBeaconPlayerState.OnRep_InLobby
//		Flags  -> (Final, Native, Protected)
void ALobbyBeaconPlayerState::OnRep_InLobby()
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(10078);

	ALobbyBeaconPlayerState_OnRep_InLobby_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00AC6570
//		Name   -> Function Lobby.LobbyBeaconState.OnRep_WaitForPlayersTimeRemaining
//		Flags  -> (Final, Native, Protected)
void ALobbyBeaconState::OnRep_WaitForPlayersTimeRemaining()
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(10082);

	ALobbyBeaconState_OnRep_WaitForPlayersTimeRemaining_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00AC6510
//		Name   -> Function Lobby.LobbyBeaconState.OnRep_LobbyStarted
//		Flags  -> (Final, Native, Protected)
void ALobbyBeaconState::OnRep_LobbyStarted()
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(10081);

	ALobbyBeaconState_OnRep_LobbyStarted_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
