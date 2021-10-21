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

// Function LobbyAnnouncer.LobbyAnnouncer_C.OnLoadingScreenEnded
struct ALobbyAnnouncer_C_OnLoadingScreenEnded_Params
{
};

// Function LobbyAnnouncer.LobbyAnnouncer_C.OnLobbyWidgetReady
struct ALobbyAnnouncer_C_OnLobbyWidgetReady_Params
{
};

// Function LobbyAnnouncer.LobbyAnnouncer_C.ReceiveBeginPlay
struct ALobbyAnnouncer_C_ReceiveBeginPlay_Params
{
};

// Function LobbyAnnouncer.LobbyAnnouncer_C.OnViewStateChangedStarted
struct ALobbyAnnouncer_C_OnViewStateChangedStarted_Params
{
	struct FName                                       CurrentRoute;                                              // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FName                                       NextRoute;                                                 // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	PlatformUMG_EViewManagerLayer                      Layer;                                                     // 0x0010(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function LobbyAnnouncer.LobbyAnnouncer_C.ReceiveEndPlay
struct ALobbyAnnouncer_C_ReceiveEndPlay_Params
{
	TEnumAsByte<Engine_EEndPlayReason>                 EndPlayReason;                                             // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function LobbyAnnouncer.LobbyAnnouncer_C.EventQueueInGame
struct ALobbyAnnouncer_C_EventQueueInGame_Params
{
};

// Function LobbyAnnouncer.LobbyAnnouncer_C.ExecuteUbergraph_LobbyAnnouncer
struct ALobbyAnnouncer_C_ExecuteUbergraph_LobbyAnnouncer_Params
{
	int                                                EntryPoint;                                                // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
