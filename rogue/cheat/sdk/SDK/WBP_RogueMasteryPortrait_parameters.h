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

// Function WBP_RogueMasteryPortrait.WBP_RogueMasteryPortrait_C.Has Player Owner
struct UWBP_RogueMasteryPortrait_C_Has_Player_Owner_Params
{
	bool                                               Return_Value;                                              // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function WBP_RogueMasteryPortrait.WBP_RogueMasteryPortrait_C.GetOwnerJobMasteryLevel
struct UWBP_RogueMasteryPortrait_C_GetOwnerJobMasteryLevel_Params
{
	int                                                Mastery_Level;                                             // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function WBP_RogueMasteryPortrait.WBP_RogueMasteryPortrait_C.GetOwnerJob
struct UWBP_RogueMasteryPortrait_C_GetOwnerJob_Params
{
	class UKSJobItem*                                  Job;                                                       // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function WBP_RogueMasteryPortrait.WBP_RogueMasteryPortrait_C.MatchesBoundPlayer
struct UWBP_RogueMasteryPortrait_C_MatchesBoundPlayer_Params
{
	class AKSPlayerState*                              PlayerState;                                               // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UKSPersistentPlayerData*                     PersistentData;                                            // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               Return_Value;                                              // 0x0010(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function WBP_RogueMasteryPortrait.WBP_RogueMasteryPortrait_C.ClearPreviousOwner
struct UWBP_RogueMasteryPortrait_C_ClearPreviousOwner_Params
{
};

// Function WBP_RogueMasteryPortrait.WBP_RogueMasteryPortrait_C.SetPersistentPlayerOwner
struct UWBP_RogueMasteryPortrait_C_SetPersistentPlayerOwner_Params
{
	class UKSPersistentPlayerData*                     PlayerData;                                                // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function WBP_RogueMasteryPortrait.WBP_RogueMasteryPortrait_C.SetMasteryLevelExplicit
struct UWBP_RogueMasteryPortrait_C_SetMasteryLevelExplicit_Params
{
	int                                                MasteryLevel;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function WBP_RogueMasteryPortrait.WBP_RogueMasteryPortrait_C.SetMasteryFrameToLevel
struct UWBP_RogueMasteryPortrait_C_SetMasteryFrameToLevel_Params
{
	int                                                MasteryLevel;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function WBP_RogueMasteryPortrait.WBP_RogueMasteryPortrait_C.OnJobMasteryLevelUpdated
struct UWBP_RogueMasteryPortrait_C_OnJobMasteryLevelUpdated_Params
{
};

// Function WBP_RogueMasteryPortrait.WBP_RogueMasteryPortrait_C.SetJobPortraitFromSoftTexture
struct UWBP_RogueMasteryPortrait_C_SetJobPortraitFromSoftTexture_Params
{
};

// Function WBP_RogueMasteryPortrait.WBP_RogueMasteryPortrait_C.Set Mastery Frame
struct UWBP_RogueMasteryPortrait_C_Set_Mastery_Frame_Params
{
};

// Function WBP_RogueMasteryPortrait.WBP_RogueMasteryPortrait_C.SetPlayerOwner
struct UWBP_RogueMasteryPortrait_C_SetPlayerOwner_Params
{
	class AKSPlayerState*                              PlayerState;                                               // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function WBP_RogueMasteryPortrait.WBP_RogueMasteryPortrait_C.SetJobInformation
struct UWBP_RogueMasteryPortrait_C_SetJobInformation_Params
{
	class UKSJobItem*                                  JobItem;                                                   // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
