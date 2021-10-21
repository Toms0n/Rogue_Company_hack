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

// Function FriendlyLobbyCharacter.FriendlyLobbyCharacter_C.ReceiveTick
struct AFriendlyLobbyCharacter_C_ReceiveTick_Params
{
	float                                              DeltaSeconds;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function FriendlyLobbyCharacter.FriendlyLobbyCharacter_C.HideLobbyNameplate
struct AFriendlyLobbyCharacter_C_HideLobbyNameplate_Params
{
};

// Function FriendlyLobbyCharacter.FriendlyLobbyCharacter_C.ShowLobbyNameplate
struct AFriendlyLobbyCharacter_C_ShowLobbyNameplate_Params
{
};

// Function FriendlyLobbyCharacter.FriendlyLobbyCharacter_C.SetLobbyNameplate
struct AFriendlyLobbyCharacter_C_SetLobbyNameplate_Params
{
	class UKSPlayerInfo*                               playerinfo;                                                // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function FriendlyLobbyCharacter.FriendlyLobbyCharacter_C.ExecuteUbergraph_FriendlyLobbyCharacter
struct AFriendlyLobbyCharacter_C_ExecuteUbergraph_FriendlyLobbyCharacter_Params
{
	int                                                EntryPoint;                                                // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
