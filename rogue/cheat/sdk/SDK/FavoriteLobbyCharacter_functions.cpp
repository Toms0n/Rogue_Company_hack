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
//		Name   -> Function FavoriteLobbyCharacter.FavoriteLobbyCharacter_C.SetLobbyNameplate
//		Flags  -> (Event, Public, BlueprintEvent)
// Parameters:
//		class UKSPlayerInfo*                               playerinfo                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void AFavoriteLobbyCharacter_C::SetLobbyNameplate(class UKSPlayerInfo* playerinfo)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(245207);

	AFavoriteLobbyCharacter_C_SetLobbyNameplate_Params params {};
	params.playerinfo = playerinfo;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function FavoriteLobbyCharacter.FavoriteLobbyCharacter_C.HideLobbyNameplate
//		Flags  -> (Event, Public, BlueprintEvent)
void AFavoriteLobbyCharacter_C::HideLobbyNameplate()
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(245206);

	AFavoriteLobbyCharacter_C_HideLobbyNameplate_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function FavoriteLobbyCharacter.FavoriteLobbyCharacter_C.ShowLobbyNameplate
//		Flags  -> (Event, Public, BlueprintEvent)
void AFavoriteLobbyCharacter_C::ShowLobbyNameplate()
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(245205);

	AFavoriteLobbyCharacter_C_ShowLobbyNameplate_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function FavoriteLobbyCharacter.FavoriteLobbyCharacter_C.ReceiveTick
//		Flags  -> (Event, Public, BlueprintEvent)
// Parameters:
//		float                                              DeltaSeconds                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void AFavoriteLobbyCharacter_C::ReceiveTick(float DeltaSeconds)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(245204);

	AFavoriteLobbyCharacter_C_ReceiveTick_Params params {};
	params.DeltaSeconds = DeltaSeconds;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function FavoriteLobbyCharacter.FavoriteLobbyCharacter_C.ExecuteUbergraph_FavoriteLobbyCharacter
//		Flags  -> (Final)
// Parameters:
//		int                                                EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void AFavoriteLobbyCharacter_C::ExecuteUbergraph_FavoriteLobbyCharacter(int EntryPoint)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(245203);

	AFavoriteLobbyCharacter_C_ExecuteUbergraph_FavoriteLobbyCharacter_Params params {};
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
