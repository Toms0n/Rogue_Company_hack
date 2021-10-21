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
//		Name   -> Function NewWBP_LobbyNameplate.NewWBP_LobbyNameplate_C.UpdateRankedTotal
//		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
//		bool                                               Index                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
//		int                                                RequiredPlacementMatches                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UNewWBP_LobbyNameplate_C::UpdateRankedTotal(bool Index, int RequiredPlacementMatches)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(54850);

	UNewWBP_LobbyNameplate_C_UpdateRankedTotal_Params params {};
	params.Index = Index;
	params.RequiredPlacementMatches = RequiredPlacementMatches;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function NewWBP_LobbyNameplate.NewWBP_LobbyNameplate_C.UpdatePlayerName
//		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
void UNewWBP_LobbyNameplate_C::UpdatePlayerName()
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(54849);

	UNewWBP_LobbyNameplate_C_UpdatePlayerName_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function NewWBP_LobbyNameplate.NewWBP_LobbyNameplate_C.UpdateRankedData
//		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
void UNewWBP_LobbyNameplate_C::UpdateRankedData()
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(54848);

	UNewWBP_LobbyNameplate_C_UpdateRankedData_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function NewWBP_LobbyNameplate.NewWBP_LobbyNameplate_C.OnPartyUpdated
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
void UNewWBP_LobbyNameplate_C::OnPartyUpdated()
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(54847);

	UNewWBP_LobbyNameplate_C_OnPartyUpdated_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function NewWBP_LobbyNameplate.NewWBP_LobbyNameplate_C.UpdateSelectedQueue
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
void UNewWBP_LobbyNameplate_C::UpdateSelectedQueue()
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(54846);

	UNewWBP_LobbyNameplate_C_UpdateSelectedQueue_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function NewWBP_LobbyNameplate.NewWBP_LobbyNameplate_C.SetPlayerDisplayVisible
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
//		bool                                               IsVisible                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UNewWBP_LobbyNameplate_C::SetPlayerDisplayVisible(bool IsVisible)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(54845);

	UNewWBP_LobbyNameplate_C_SetPlayerDisplayVisible_Params params {};
	params.IsVisible = IsVisible;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function NewWBP_LobbyNameplate.NewWBP_LobbyNameplate_C.UpdatePartyLeaderIcon
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
void UNewWBP_LobbyNameplate_C::UpdatePartyLeaderIcon()
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(54844);

	UNewWBP_LobbyNameplate_C_UpdatePartyLeaderIcon_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function NewWBP_LobbyNameplate.NewWBP_LobbyNameplate_C.SetPlayerInfo
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
//		class UKSPlayerInfo*                               playerinfo                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UNewWBP_LobbyNameplate_C::SetPlayerInfo(class UKSPlayerInfo* playerinfo)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(54843);

	UNewWBP_LobbyNameplate_C_SetPlayerInfo_Params params {};
	params.playerinfo = playerinfo;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function NewWBP_LobbyNameplate.NewWBP_LobbyNameplate_C.OnPossession
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
//		class APlayerState*                                PlayerState                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		class AKSCharacter*                                Character                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UNewWBP_LobbyNameplate_C::OnPossession(class APlayerState* PlayerState, class AKSCharacter* Character)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(54842);

	UNewWBP_LobbyNameplate_C_OnPossession_Params params {};
	params.PlayerState = PlayerState;
	params.Character = Character;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function NewWBP_LobbyNameplate.NewWBP_LobbyNameplate_C.OnHovered
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
void UNewWBP_LobbyNameplate_C::OnHovered()
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(54841);

	UNewWBP_LobbyNameplate_C_OnHovered_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function NewWBP_LobbyNameplate.NewWBP_LobbyNameplate_C.OnUnhovered
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
void UNewWBP_LobbyNameplate_C::OnUnhovered()
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(54840);

	UNewWBP_LobbyNameplate_C_OnUnhovered_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function NewWBP_LobbyNameplate.NewWBP_LobbyNameplate_C.Construct
//		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
void UNewWBP_LobbyNameplate_C::Construct()
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(54839);

	UNewWBP_LobbyNameplate_C_Construct_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function NewWBP_LobbyNameplate.NewWBP_LobbyNameplate_C.SetName
//		Flags  -> (BlueprintCallable, BlueprintEvent)
// Parameters:
//		struct FText                                       InName                                                     (BlueprintVisible, BlueprintReadOnly, Parm)
void UNewWBP_LobbyNameplate_C::SetName(const struct FText& InName)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(54838);

	UNewWBP_LobbyNameplate_C_SetName_Params params {};
	params.InName = InName;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function NewWBP_LobbyNameplate.NewWBP_LobbyNameplate_C.SetAvatar
//		Flags  -> (BlueprintCallable, BlueprintEvent)
// Parameters:
//		class UKSItem*                                     AvatarItem                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UNewWBP_LobbyNameplate_C::SetAvatar(class UKSItem* AvatarItem)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(54837);

	UNewWBP_LobbyNameplate_C_SetAvatar_Params params {};
	params.AvatarItem = AvatarItem;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function NewWBP_LobbyNameplate.NewWBP_LobbyNameplate_C.PreConstruct
//		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
//		bool                                               IsDesignTime                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UNewWBP_LobbyNameplate_C::PreConstruct(bool IsDesignTime)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(54836);

	UNewWBP_LobbyNameplate_C_PreConstruct_Params params {};
	params.IsDesignTime = IsDesignTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function NewWBP_LobbyNameplate.NewWBP_LobbyNameplate_C.OnInitialized
//		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
void UNewWBP_LobbyNameplate_C::OnInitialized()
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(54835);

	UNewWBP_LobbyNameplate_C_OnInitialized_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function NewWBP_LobbyNameplate.NewWBP_LobbyNameplate_C.RefreshRankedData
//		Flags  -> (Event, Public, BlueprintEvent)
void UNewWBP_LobbyNameplate_C::RefreshRankedData()
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(54834);

	UNewWBP_LobbyNameplate_C_RefreshRankedData_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function NewWBP_LobbyNameplate.NewWBP_LobbyNameplate_C.HandleOnPartyMemberPromoted
//		Flags  -> (BlueprintCallable, BlueprintEvent)
// Parameters:
//		int64_t                                            PlayerId                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UNewWBP_LobbyNameplate_C::HandleOnPartyMemberPromoted(int64_t PlayerId)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(54833);

	UNewWBP_LobbyNameplate_C_HandleOnPartyMemberPromoted_Params params {};
	params.PlayerId = PlayerId;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function NewWBP_LobbyNameplate.NewWBP_LobbyNameplate_C.ExecuteUbergraph_NewWBP_LobbyNameplate
//		Flags  -> (Final, HasDefaults)
// Parameters:
//		int                                                EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UNewWBP_LobbyNameplate_C::ExecuteUbergraph_NewWBP_LobbyNameplate(int EntryPoint)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(54832);

	UNewWBP_LobbyNameplate_C_ExecuteUbergraph_NewWBP_LobbyNameplate_Params params {};
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
