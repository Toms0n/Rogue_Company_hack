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

// Function Lobby_Core_RogueScreen.Lobby_Core_RogueScreen_C.On Rogue Preview Fully Loaded
struct ALobby_Core_RogueScreen_C_On_Rogue_Preview_Fully_Loaded_Params
{
};

// Function Lobby_Core_RogueScreen.Lobby_Core_RogueScreen_C.Time Dilation for  Posed Rogues
struct ALobby_Core_RogueScreen_C_Time_Dilation_for__Posed_Rogues_Params
{
};

// Function Lobby_Core_RogueScreen.Lobby_Core_RogueScreen_C.ReceiveTick
struct ALobby_Core_RogueScreen_C_ReceiveTick_Params
{
	float                                              DeltaSeconds;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Lobby_Core_RogueScreen.Lobby_Core_RogueScreen_C.ReceiveBeginPlay
struct ALobby_Core_RogueScreen_C_ReceiveBeginPlay_Params
{
};

// Function Lobby_Core_RogueScreen.Lobby_Core_RogueScreen_C.On Player Rogue Preview Changed
struct ALobby_Core_RogueScreen_C_On_Player_Rogue_Preview_Changed_Params
{
	class AKSJobSelectPreviewActor*                    PreviewActor;                                              // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	Killstreak_EKSJobSelectPreviewLoadState            PreviousState;                                             // 0x0008(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Lobby_Core_RogueScreen.Lobby_Core_RogueScreen_C.ExecuteUbergraph_Lobby_Core_RogueScreen
struct ALobby_Core_RogueScreen_C_ExecuteUbergraph_Lobby_Core_RogueScreen_Params
{
	int                                                EntryPoint;                                                // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
