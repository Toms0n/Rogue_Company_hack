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

// Function WBP_PartyModule.WBP_PartyModule_C.GetPrimaryFocus
struct UWBP_PartyModule_C_GetPrimaryFocus_Params
{
	class UWBP_Social_Snapshot_C*                      Primary_Focus;                                             // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function WBP_PartyModule.WBP_PartyModule_C.FindPlayerCardByVoiceId
struct UWBP_PartyModule_C_FindPlayerCardByVoiceId_Params
{
	struct FString                                     VoiceId;                                                   // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	class UWBP_player_card_module_C*                   PlayerCard;                                                // 0x0010(0x0008)  (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function WBP_PartyModule.WBP_PartyModule_C.Get Navigation Widgets
struct UWBP_PartyModule_C_Get_Navigation_Widgets_Params
{
	TArray<class UPUMG_Widget*>                        Return_Value;                                              // 0x0000(0x0010)  (Parm, OutParm, ContainsInstancedReference, HasGetValueTypeHash)
};

// Function WBP_PartyModule.WBP_PartyModule_C.Get Other Party Members
struct UWBP_PartyModule_C_Get_Other_Party_Members_Params
{
	TArray<struct FPUMG_PartyMemberData>               Party_Members;                                             // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, HasGetValueTypeHash)
	TArray<struct FPUMG_PartyMemberData>               Return_Value;                                              // 0x0010(0x0010)  (Parm, OutParm, HasGetValueTypeHash)
};

// Function WBP_PartyModule.WBP_PartyModule_C.ApplyPartyData
struct UWBP_PartyModule_C_ApplyPartyData_Params
{
	TArray<struct FPUMG_PartyMemberData>               PartyMembers;                                              // 0x0000(0x0010)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, HasGetValueTypeHash)
};

// Function WBP_PartyModule.WBP_PartyModule_C.InitializeWidget
struct UWBP_PartyModule_C_InitializeWidget_Params
{
	class APUMG_HUD*                                   HUD;                                                       // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function WBP_PartyModule.WBP_PartyModule_C.VoiceParticipantAdded
struct UWBP_PartyModule_C_VoiceParticipantAdded_Params
{
	struct FString                                     AccountId;                                                 // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
};

// Function WBP_PartyModule.WBP_PartyModule_C.VoiceParticipantRemoved
struct UWBP_PartyModule_C_VoiceParticipantRemoved_Params
{
	struct FString                                     AccountId;                                                 // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
};

// Function WBP_PartyModule.WBP_PartyModule_C.VoiceParticipantUpdated
struct UWBP_PartyModule_C_VoiceParticipantUpdated_Params
{
	struct FString                                     AccountId;                                                 // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	bool                                               IsTalking;                                                 // 0x0010(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                               IsMuted;                                                   // 0x0011(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function WBP_PartyModule.WBP_PartyModule_C.VoiceStateChange
struct UWBP_PartyModule_C_VoiceStateChange_Params
{
	KillstreakUINew_EKSVoiceActivityAudioState         State;                                                     // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function WBP_PartyModule.WBP_PartyModule_C.Handle Player Card Clicked
struct UWBP_PartyModule_C_Handle_Player_Card_Clicked_Params
{
	class UWBP_player_card_module_C*                   Selected_Player_Card;                                      // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function WBP_PartyModule.WBP_PartyModule_C.Handle Player Card Back
struct UWBP_PartyModule_C_Handle_Player_Card_Back_Params
{
};

// Function WBP_PartyModule.WBP_PartyModule_C.HandlePartyLeaveVisibilityChange
struct UWBP_PartyModule_C_HandlePartyLeaveVisibilityChange_Params
{
	bool                                               Visible;                                                   // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function WBP_PartyModule.WBP_PartyModule_C.ExecuteUbergraph_WBP_PartyModule
struct UWBP_PartyModule_C_ExecuteUbergraph_WBP_PartyModule_Params
{
	int                                                EntryPoint;                                                // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function WBP_PartyModule.WBP_PartyModule_C.OnPartyLeaveVisibilityChange__DelegateSignature
struct UWBP_PartyModule_C_OnPartyLeaveVisibilityChange__DelegateSignature_Params
{
	bool                                               Visible;                                                   // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function WBP_PartyModule.WBP_PartyModule_C.OnPlayerCardBackButton__DelegateSignature
struct UWBP_PartyModule_C_OnPlayerCardBackButton__DelegateSignature_Params
{
};

// Function WBP_PartyModule.WBP_PartyModule_C.OnPlayerCardSelected__DelegateSignature
struct UWBP_PartyModule_C_OnPlayerCardSelected__DelegateSignature_Params
{
	class UWBP_player_card_module_C*                   Selected_Player_Card;                                      // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
