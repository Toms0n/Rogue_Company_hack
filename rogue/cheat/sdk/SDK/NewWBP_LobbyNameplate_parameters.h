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

// Function NewWBP_LobbyNameplate.NewWBP_LobbyNameplate_C.UpdateRankedTotal
struct UNewWBP_LobbyNameplate_C_UpdateRankedTotal_Params
{
	bool                                               Index;                                                     // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	int                                                RequiredPlacementMatches;                                  // 0x0004(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function NewWBP_LobbyNameplate.NewWBP_LobbyNameplate_C.UpdatePlayerName
struct UNewWBP_LobbyNameplate_C_UpdatePlayerName_Params
{
};

// Function NewWBP_LobbyNameplate.NewWBP_LobbyNameplate_C.UpdateRankedData
struct UNewWBP_LobbyNameplate_C_UpdateRankedData_Params
{
};

// Function NewWBP_LobbyNameplate.NewWBP_LobbyNameplate_C.OnPartyUpdated
struct UNewWBP_LobbyNameplate_C_OnPartyUpdated_Params
{
};

// Function NewWBP_LobbyNameplate.NewWBP_LobbyNameplate_C.UpdateSelectedQueue
struct UNewWBP_LobbyNameplate_C_UpdateSelectedQueue_Params
{
};

// Function NewWBP_LobbyNameplate.NewWBP_LobbyNameplate_C.SetPlayerDisplayVisible
struct UNewWBP_LobbyNameplate_C_SetPlayerDisplayVisible_Params
{
	bool                                               IsVisible;                                                 // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function NewWBP_LobbyNameplate.NewWBP_LobbyNameplate_C.UpdatePartyLeaderIcon
struct UNewWBP_LobbyNameplate_C_UpdatePartyLeaderIcon_Params
{
};

// Function NewWBP_LobbyNameplate.NewWBP_LobbyNameplate_C.SetPlayerInfo
struct UNewWBP_LobbyNameplate_C_SetPlayerInfo_Params
{
	class UKSPlayerInfo*                               playerinfo;                                                // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function NewWBP_LobbyNameplate.NewWBP_LobbyNameplate_C.OnPossession
struct UNewWBP_LobbyNameplate_C_OnPossession_Params
{
	class APlayerState*                                PlayerState;                                               // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AKSCharacter*                                Character;                                                 // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function NewWBP_LobbyNameplate.NewWBP_LobbyNameplate_C.OnHovered
struct UNewWBP_LobbyNameplate_C_OnHovered_Params
{
};

// Function NewWBP_LobbyNameplate.NewWBP_LobbyNameplate_C.OnUnhovered
struct UNewWBP_LobbyNameplate_C_OnUnhovered_Params
{
};

// Function NewWBP_LobbyNameplate.NewWBP_LobbyNameplate_C.Construct
struct UNewWBP_LobbyNameplate_C_Construct_Params
{
};

// Function NewWBP_LobbyNameplate.NewWBP_LobbyNameplate_C.SetName
struct UNewWBP_LobbyNameplate_C_SetName_Params
{
	struct FText                                       InName;                                                    // 0x0000(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function NewWBP_LobbyNameplate.NewWBP_LobbyNameplate_C.SetAvatar
struct UNewWBP_LobbyNameplate_C_SetAvatar_Params
{
	class UKSItem*                                     AvatarItem;                                                // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function NewWBP_LobbyNameplate.NewWBP_LobbyNameplate_C.PreConstruct
struct UNewWBP_LobbyNameplate_C_PreConstruct_Params
{
	bool                                               IsDesignTime;                                              // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function NewWBP_LobbyNameplate.NewWBP_LobbyNameplate_C.OnInitialized
struct UNewWBP_LobbyNameplate_C_OnInitialized_Params
{
};

// Function NewWBP_LobbyNameplate.NewWBP_LobbyNameplate_C.RefreshRankedData
struct UNewWBP_LobbyNameplate_C_RefreshRankedData_Params
{
};

// Function NewWBP_LobbyNameplate.NewWBP_LobbyNameplate_C.HandleOnPartyMemberPromoted
struct UNewWBP_LobbyNameplate_C_HandleOnPartyMemberPromoted_Params
{
	int64_t                                            PlayerId;                                                  // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function NewWBP_LobbyNameplate.NewWBP_LobbyNameplate_C.ExecuteUbergraph_NewWBP_LobbyNameplate
struct UNewWBP_LobbyNameplate_C_ExecuteUbergraph_NewWBP_LobbyNameplate_Params
{
	int                                                EntryPoint;                                                // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
