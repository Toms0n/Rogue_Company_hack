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

// Function WBP_GameModeInfoPanel_Lobby.WBP_GameModeInfoPanel_Lobby_C.GetQueueImageById
struct UWBP_GameModeInfoPanel_Lobby_C_GetQueueImageById_Params
{
	int                                                QueueId;                                                   // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UTexture2D*                                  QueueImage;                                                // 0x0008(0x0008)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function WBP_GameModeInfoPanel_Lobby.WBP_GameModeInfoPanel_Lobby_C.SetDisplayInfo
struct UWBP_GameModeInfoPanel_Lobby_C_SetDisplayInfo_Params
{
	struct FText                                       Title;                                                     // 0x0000(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm)
	struct FText                                       Description;                                               // 0x0018(0x0018)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	bool                                               UseMapImage;                                               // 0x0058(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FMapDetail                                  MapInfo;                                                   // 0x0060(0x0048)  (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function WBP_GameModeInfoPanel_Lobby.WBP_GameModeInfoPanel_Lobby_C.SetQueueInfo
struct UWBP_GameModeInfoPanel_Lobby_C_SetQueueInfo_Params
{
	struct FClientQueueInfo                            QueueInfo;                                                 // 0x0000(0x00C8)  (BlueprintVisible, BlueprintReadOnly, Parm)
	bool                                               UseMapImage;                                               // 0x00C8(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FMapDetail                                  MapInfo;                                                   // 0x00D0(0x0048)  (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function WBP_GameModeInfoPanel_Lobby.WBP_GameModeInfoPanel_Lobby_C.ExecuteUbergraph_WBP_GameModeInfoPanel_Lobby
struct UWBP_GameModeInfoPanel_Lobby_C_ExecuteUbergraph_WBP_GameModeInfoPanel_Lobby_Params
{
	int                                                EntryPoint;                                                // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
