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

// Function WBP_PlayerIdentity_Full.WBP_PlayerIdentity_Full_C.Populate Lobby Player
struct UWBP_PlayerIdentity_Full_C_Populate_Lobby_Player_Params
{
	class UKSPlayerInfo*                               KS_Player_Info;                                            // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function WBP_PlayerIdentity_Full.WBP_PlayerIdentity_Full_C.Update Title
struct UWBP_PlayerIdentity_Full_C_Update_Title_Params
{
	bool                                               Use_Game_State_Data;                                       // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function WBP_PlayerIdentity_Full.WBP_PlayerIdentity_Full_C.Set From Player Info
struct UWBP_PlayerIdentity_Full_C_Set_From_Player_Info_Params
{
	class UKSPlayerInfo*                               KS_Player_Info;                                            // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               Use_Game_State_Data;                                       // 0x0008(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function WBP_PlayerIdentity_Full.WBP_PlayerIdentity_Full_C.Update Border
struct UWBP_PlayerIdentity_Full_C_Update_Border_Params
{
	bool                                               Use_Game_State_Data;                                       // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function WBP_PlayerIdentity_Full.WBP_PlayerIdentity_Full_C.Update Banner
struct UWBP_PlayerIdentity_Full_C_Update_Banner_Params
{
	bool                                               Use_Game_State_Data;                                       // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function WBP_PlayerIdentity_Full.WBP_PlayerIdentity_Full_C.Update Avatar
struct UWBP_PlayerIdentity_Full_C_Update_Avatar_Params
{
	bool                                               Use_Game_State_Data;                                       // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function WBP_PlayerIdentity_Full.WBP_PlayerIdentity_Full_C.Update Level
struct UWBP_PlayerIdentity_Full_C_Update_Level_Params
{
};

// Function WBP_PlayerIdentity_Full.WBP_PlayerIdentity_Full_C.Update Current Name
struct UWBP_PlayerIdentity_Full_C_Update_Current_Name_Params
{
};

// Function WBP_PlayerIdentity_Full.WBP_PlayerIdentity_Full_C.Populate Game Player
struct UWBP_PlayerIdentity_Full_C_Populate_Game_Player_Params
{
	class AKSPlayerState*                              KSPlayerState;                                             // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function WBP_PlayerIdentity_Full.WBP_PlayerIdentity_Full_C.Apply Layout Type
struct UWBP_PlayerIdentity_Full_C_Apply_Layout_Type_Params
{
	TEnumAsByte<EPlayerIdentityLayoutType_EPlayerIdentityLayoutType> Layout_Type;                                               // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function WBP_PlayerIdentity_Full.WBP_PlayerIdentity_Full_C.SetInitialView
struct UWBP_PlayerIdentity_Full_C_SetInitialView_Params
{
};

// Function WBP_PlayerIdentity_Full.WBP_PlayerIdentity_Full_C.PreConstruct
struct UWBP_PlayerIdentity_Full_C_PreConstruct_Params
{
	bool                                               IsDesignTime;                                              // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function WBP_PlayerIdentity_Full.WBP_PlayerIdentity_Full_C.Construct
struct UWBP_PlayerIdentity_Full_C_Construct_Params
{
};

// Function WBP_PlayerIdentity_Full.WBP_PlayerIdentity_Full_C.ExecuteUbergraph_WBP_PlayerIdentity_Full
struct UWBP_PlayerIdentity_Full_C_ExecuteUbergraph_WBP_PlayerIdentity_Full_Params
{
	int                                                EntryPoint;                                                // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
