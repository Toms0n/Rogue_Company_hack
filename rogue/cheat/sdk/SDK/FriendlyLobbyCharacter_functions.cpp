// Name: roguecompany, Version: 425

#include "../pch.h"

/*!!DEFINE!!*/

/*!!HELPER_DEF!!*/

/*!!HELPER_INC!!*/

#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

namespace CG
{
//---------------------------------------------------------------------------
// Functions
//---------------------------------------------------------------------------

// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function FriendlyLobbyCharacter.FriendlyLobbyCharacter_C.ReceiveTick
//		Flags  -> (Event, Public, BlueprintEvent)
// Parameters:
//		float                                              DeltaSeconds                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void AFriendlyLobbyCharacter_C::ReceiveTick(float DeltaSeconds)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(245219);

	AFriendlyLobbyCharacter_C_ReceiveTick_Params params {};
	params.DeltaSeconds = DeltaSeconds;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function FriendlyLobbyCharacter.FriendlyLobbyCharacter_C.HideLobbyNameplate
//		Flags  -> (Event, Public, BlueprintEvent)
void AFriendlyLobbyCharacter_C::HideLobbyNameplate()
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(245218);

	AFriendlyLobbyCharacter_C_HideLobbyNameplate_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function FriendlyLobbyCharacter.FriendlyLobbyCharacter_C.ShowLobbyNameplate
//		Flags  -> (Event, Public, BlueprintEvent)
void AFriendlyLobbyCharacter_C::ShowLobbyNameplate()
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(245217);

	AFriendlyLobbyCharacter_C_ShowLobbyNameplate_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function FriendlyLobbyCharacter.FriendlyLobbyCharacter_C.SetLobbyNameplate
//		Flags  -> (Event, Public, BlueprintEvent)
// Parameters:
//		class UKSPlayerInfo*                               playerinfo                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void AFriendlyLobbyCharacter_C::SetLobbyNameplate(class UKSPlayerInfo* playerinfo)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(245216);

	AFriendlyLobbyCharacter_C_SetLobbyNameplate_Params params {};
	params.playerinfo = playerinfo;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function FriendlyLobbyCharacter.FriendlyLobbyCharacter_C.ExecuteUbergraph_FriendlyLobbyCharacter
//		Flags  -> (Final)
// Parameters:
//		int                                                EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void AFriendlyLobbyCharacter_C::ExecuteUbergraph_FriendlyLobbyCharacter(int EntryPoint)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(245215);

	AFriendlyLobbyCharacter_C_ExecuteUbergraph_FriendlyLobbyCharacter_Params params {};
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
