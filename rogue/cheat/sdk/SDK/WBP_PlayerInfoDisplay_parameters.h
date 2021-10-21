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

// Function WBP_PlayerInfoDisplay.WBP_PlayerInfoDisplay_C.UpdateVoiceDisplay
struct UWBP_PlayerInfoDisplay_C_UpdateVoiceDisplay_Params
{
};

// Function WBP_PlayerInfoDisplay.WBP_PlayerInfoDisplay_C.Get Status Message
struct UWBP_PlayerInfoDisplay_C_Get_Status_Message_Params
{
	struct FText                                       StatusMessage;                                             // 0x0000(0x0018)  (Parm, OutParm)
};

// Function WBP_PlayerInfoDisplay.WBP_PlayerInfoDisplay_C.SetPlayerNameFont
struct UWBP_PlayerInfoDisplay_C_SetPlayerNameFont_Params
{
	struct FSlateFontInfo                              Font;                                                      // 0x0000(0x0050)  (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
};

// Function WBP_PlayerInfoDisplay.WBP_PlayerInfoDisplay_C.SetPlayerNameColor
struct UWBP_PlayerInfoDisplay_C_SetPlayerNameColor_Params
{
	struct FSlateColor                                 Color;                                                     // 0x0000(0x0028)  (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function WBP_PlayerInfoDisplay.WBP_PlayerInfoDisplay_C.TogglePartyLeaderIcon
struct UWBP_PlayerInfoDisplay_C_TogglePartyLeaderIcon_Params
{
	bool                                               ShowLeaderIcon;                                            // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function WBP_PlayerInfoDisplay.WBP_PlayerInfoDisplay_C.SetVoiceActive
struct UWBP_PlayerInfoDisplay_C_SetVoiceActive_Params
{
	bool                                               IsActive;                                                  // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function WBP_PlayerInfoDisplay.WBP_PlayerInfoDisplay_C.SetVoiceTalking
struct UWBP_PlayerInfoDisplay_C_SetVoiceTalking_Params
{
	bool                                               Talking;                                                   // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function WBP_PlayerInfoDisplay.WBP_PlayerInfoDisplay_C.SetVoiceMuted
struct UWBP_PlayerInfoDisplay_C_SetVoiceMuted_Params
{
	bool                                               Muted;                                                     // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function WBP_PlayerInfoDisplay.WBP_PlayerInfoDisplay_C.GetStatusColor
struct UWBP_PlayerInfoDisplay_C_GetStatusColor_Params
{
	struct FSlateColor                                 StatusColor;                                               // 0x0000(0x0028)  (Parm, OutParm)
};

// Function WBP_PlayerInfoDisplay.WBP_PlayerInfoDisplay_C.UpdateStatus
struct UWBP_PlayerInfoDisplay_C_UpdateStatus_Params
{
};

// Function WBP_PlayerInfoDisplay.WBP_PlayerInfoDisplay_C.UpdatePlayerInfoIcons
struct UWBP_PlayerInfoDisplay_C_UpdatePlayerInfoIcons_Params
{
};

// Function WBP_PlayerInfoDisplay.WBP_PlayerInfoDisplay_C.UpdateAvatarDisplay
struct UWBP_PlayerInfoDisplay_C_UpdateAvatarDisplay_Params
{
};

// Function WBP_PlayerInfoDisplay.WBP_PlayerInfoDisplay_C.SetPlayerInfo
struct UWBP_PlayerInfoDisplay_C_SetPlayerInfo_Params
{
	class UKSPlayerInfo*                               playerinfo;                                                // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function WBP_PlayerInfoDisplay.WBP_PlayerInfoDisplay_C.SetVoiceState
struct UWBP_PlayerInfoDisplay_C_SetVoiceState_Params
{
	bool                                               ShouldShow;                                                // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                               IsTalking;                                                 // 0x0001(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                               IsMuted;                                                   // 0x0002(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function WBP_PlayerInfoDisplay.WBP_PlayerInfoDisplay_C.ToggleStatusDisplay
struct UWBP_PlayerInfoDisplay_C_ToggleStatusDisplay_Params
{
	bool                                               ShowStatus;                                                // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function WBP_PlayerInfoDisplay.WBP_PlayerInfoDisplay_C.PreConstruct
struct UWBP_PlayerInfoDisplay_C_PreConstruct_Params
{
	bool                                               IsDesignTime;                                              // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function WBP_PlayerInfoDisplay.WBP_PlayerInfoDisplay_C.HandleFilteredNameUpdate
struct UWBP_PlayerInfoDisplay_C_HandleFilteredNameUpdate_Params
{
};

// Function WBP_PlayerInfoDisplay.WBP_PlayerInfoDisplay_C.OnInitialized
struct UWBP_PlayerInfoDisplay_C_OnInitialized_Params
{
};

// Function WBP_PlayerInfoDisplay.WBP_PlayerInfoDisplay_C.ExecuteUbergraph_WBP_PlayerInfoDisplay
struct UWBP_PlayerInfoDisplay_C_ExecuteUbergraph_WBP_PlayerInfoDisplay_Params
{
	int                                                EntryPoint;                                                // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
