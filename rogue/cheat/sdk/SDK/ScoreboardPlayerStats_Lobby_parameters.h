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

// Function ScoreboardPlayerStats_Lobby.ScoreboardPlayerStats_Lobby_C.Set Level From Player Info
struct UScoreboardPlayerStats_Lobby_C_Set_Level_From_Player_Info_Params
{
	class UKSPlayerInfo*                               KS_Player_Info;                                            // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function ScoreboardPlayerStats_Lobby.ScoreboardPlayerStats_Lobby_C.Set Avatar From Player Info
struct UScoreboardPlayerStats_Lobby_C_Set_Avatar_From_Player_Info_Params
{
	class UKSPlayerInfo*                               KS_Player_Info;                                            // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function ScoreboardPlayerStats_Lobby.ScoreboardPlayerStats_Lobby_C.NavigateConfirm
struct UScoreboardPlayerStats_Lobby_C_NavigateConfirm_Params
{
	bool                                               ReturnValue;                                               // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
};

// Function ScoreboardPlayerStats_Lobby.ScoreboardPlayerStats_Lobby_C.SetColors
struct UScoreboardPlayerStats_Lobby_C_SetColors_Params
{
	bool                                               IsFriendly;                                                // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function ScoreboardPlayerStats_Lobby.ScoreboardPlayerStats_Lobby_C.Construct
struct UScoreboardPlayerStats_Lobby_C_Construct_Params
{
};

// Function ScoreboardPlayerStats_Lobby.ScoreboardPlayerStats_Lobby_C.SetTeamColor
struct UScoreboardPlayerStats_Lobby_C_SetTeamColor_Params
{
	bool                                               IsFriendlyTeam;                                            // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function ScoreboardPlayerStats_Lobby.ScoreboardPlayerStats_Lobby_C.SetLocalPlayer
struct UScoreboardPlayerStats_Lobby_C_SetLocalPlayer_Params
{
	bool                                               IsLocalPlayer;                                             // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function ScoreboardPlayerStats_Lobby.ScoreboardPlayerStats_Lobby_C.SetJobIcon
struct UScoreboardPlayerStats_Lobby_C_SetJobIcon_Params
{
	class UKSJobItem*                                  JobItem;                                                   // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function ScoreboardPlayerStats_Lobby.ScoreboardPlayerStats_Lobby_C.InitializeWidget
struct UScoreboardPlayerStats_Lobby_C_InitializeWidget_Params
{
	class APUMG_HUD*                                   HUD;                                                       // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function ScoreboardPlayerStats_Lobby.ScoreboardPlayerStats_Lobby_C.BndEvt__HitTarget_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
struct UScoreboardPlayerStats_Lobby_C_BndEvt__HitTarget_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature_Params
{
};

// Function ScoreboardPlayerStats_Lobby.ScoreboardPlayerStats_Lobby_C.BndEvt__HitTarget_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature
struct UScoreboardPlayerStats_Lobby_C_BndEvt__HitTarget_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature_Params
{
};

// Function ScoreboardPlayerStats_Lobby.ScoreboardPlayerStats_Lobby_C.BndEvt__HitTarget_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature
struct UScoreboardPlayerStats_Lobby_C_BndEvt__HitTarget_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature_Params
{
};

// Function ScoreboardPlayerStats_Lobby.ScoreboardPlayerStats_Lobby_C.GamepadHover
struct UScoreboardPlayerStats_Lobby_C_GamepadHover_Params
{
};

// Function ScoreboardPlayerStats_Lobby.ScoreboardPlayerStats_Lobby_C.GamepadUnhover
struct UScoreboardPlayerStats_Lobby_C_GamepadUnhover_Params
{
};

// Function ScoreboardPlayerStats_Lobby.ScoreboardPlayerStats_Lobby_C.ExecuteUbergraph_ScoreboardPlayerStats_Lobby
struct UScoreboardPlayerStats_Lobby_C_ExecuteUbergraph_ScoreboardPlayerStats_Lobby_Params
{
	int                                                EntryPoint;                                                // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function ScoreboardPlayerStats_Lobby.ScoreboardPlayerStats_Lobby_C.OnClicked__DelegateSignature
struct UScoreboardPlayerStats_Lobby_C_OnClicked__DelegateSignature_Params
{
	class UWidget*                                     Widget;                                                    // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int64_t                                            PlayerId;                                                  // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
