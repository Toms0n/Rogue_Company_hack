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
//		Name   -> Function WBP_ScoreboardDisconnectedSection_Lobby.WBP_ScoreboardDisconnectedSection_Lobby_C.SetExpanded
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
//		bool                                               Expanded                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UWBP_ScoreboardDisconnectedSection_Lobby_C::SetExpanded(bool Expanded)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(77057);

	UWBP_ScoreboardDisconnectedSection_Lobby_C_SetExpanded_Params params {};
	params.Expanded = Expanded;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_ScoreboardDisconnectedSection_Lobby.WBP_ScoreboardDisconnectedSection_Lobby_C.GamepadHover
//		Flags  -> (Event, Public, BlueprintEvent)
void UWBP_ScoreboardDisconnectedSection_Lobby_C::GamepadHover()
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(77056);

	UWBP_ScoreboardDisconnectedSection_Lobby_C_GamepadHover_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_ScoreboardDisconnectedSection_Lobby.WBP_ScoreboardDisconnectedSection_Lobby_C.BndEvt__HitArea_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature
//		Flags  -> (BlueprintEvent)
void UWBP_ScoreboardDisconnectedSection_Lobby_C::BndEvt__HitArea_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature()
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(77055);

	UWBP_ScoreboardDisconnectedSection_Lobby_C_BndEvt__HitArea_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_ScoreboardDisconnectedSection_Lobby.WBP_ScoreboardDisconnectedSection_Lobby_C.BndEvt__HitArea_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature
//		Flags  -> (BlueprintEvent)
void UWBP_ScoreboardDisconnectedSection_Lobby_C::BndEvt__HitArea_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature()
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(77054);

	UWBP_ScoreboardDisconnectedSection_Lobby_C_BndEvt__HitArea_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_ScoreboardDisconnectedSection_Lobby.WBP_ScoreboardDisconnectedSection_Lobby_C.GamepadUnhover
//		Flags  -> (Event, Public, BlueprintEvent)
void UWBP_ScoreboardDisconnectedSection_Lobby_C::GamepadUnhover()
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(77053);

	UWBP_ScoreboardDisconnectedSection_Lobby_C_GamepadUnhover_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_ScoreboardDisconnectedSection_Lobby.WBP_ScoreboardDisconnectedSection_Lobby_C.ExecuteUbergraph_WBP_ScoreboardDisconnectedSection_Lobby
//		Flags  -> (Final)
// Parameters:
//		int                                                EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWBP_ScoreboardDisconnectedSection_Lobby_C::ExecuteUbergraph_WBP_ScoreboardDisconnectedSection_Lobby(int EntryPoint)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(77052);

	UWBP_ScoreboardDisconnectedSection_Lobby_C_ExecuteUbergraph_WBP_ScoreboardDisconnectedSection_Lobby_Params params {};
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
