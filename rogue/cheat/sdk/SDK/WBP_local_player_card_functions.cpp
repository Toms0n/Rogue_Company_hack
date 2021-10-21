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
//		Name   -> Function WBP_local_player_card.WBP_local_player_card_C.UpdatePendingPurchaseWarning
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
void UWBP_local_player_card_C::UpdatePendingPurchaseWarning()
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(56338);

	UWBP_local_player_card_C_UpdatePendingPurchaseWarning_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_local_player_card.WBP_local_player_card_C.SetPlayerAvatar
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
void UWBP_local_player_card_C::SetPlayerAvatar()
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(56337);

	UWBP_local_player_card_C_SetPlayerAvatar_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_local_player_card.WBP_local_player_card_C.SetPlayerCurrency
//		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
void UWBP_local_player_card_C::SetPlayerCurrency()
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(56336);

	UWBP_local_player_card_C_SetPlayerCurrency_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_local_player_card.WBP_local_player_card_C.SetPlayerLevel
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
void UWBP_local_player_card_C::SetPlayerLevel()
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(56335);

	UWBP_local_player_card_C_SetPlayerLevel_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_local_player_card.WBP_local_player_card_C.SetPlayerInfo
//		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
void UWBP_local_player_card_C::SetPlayerInfo()
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(56334);

	UWBP_local_player_card_C_SetPlayerInfo_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_local_player_card.WBP_local_player_card_C.InitializeWidget
//		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
//		class APUMG_HUD*                                   HUD                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWBP_local_player_card_C::InitializeWidget(class APUMG_HUD* HUD)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(56333);

	UWBP_local_player_card_C_InitializeWidget_Params params {};
	params.HUD = HUD;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_local_player_card.WBP_local_player_card_C.UninitializeWidget
//		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
void UWBP_local_player_card_C::UninitializeWidget()
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(56332);

	UWBP_local_player_card_C_UninitializeWidget_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_local_player_card.WBP_local_player_card_C.ExecuteUbergraph_WBP_local_player_card
//		Flags  -> (Final)
// Parameters:
//		int                                                EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWBP_local_player_card_C::ExecuteUbergraph_WBP_local_player_card(int EntryPoint)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(56331);

	UWBP_local_player_card_C_ExecuteUbergraph_WBP_local_player_card_Params params {};
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
