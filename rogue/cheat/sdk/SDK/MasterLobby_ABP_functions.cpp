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
//		Name   -> Function MasterLobby_ABP.MasterLobby_ABP_C.AnimGraph
//		Flags  -> (HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
//		struct FPoseLink                                   AnimGraph                                                  (Parm, OutParm, NoDestructor)
void UMasterLobby_ABP_C::AnimGraph(struct FPoseLink* AnimGraph)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(54613);

	UMasterLobby_ABP_C_AnimGraph_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (AnimGraph != nullptr)
		*AnimGraph = params.AnimGraph;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function MasterLobby_ABP.MasterLobby_ABP_C.AnimNotify_Lobby_Unlock_LProp
//		Flags  -> (BlueprintCallable, BlueprintEvent)
void UMasterLobby_ABP_C::AnimNotify_Lobby_Unlock_LProp()
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(54612);

	UMasterLobby_ABP_C_AnimNotify_Lobby_Unlock_LProp_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function MasterLobby_ABP.MasterLobby_ABP_C.AnimNotify_Lobby_Unlock_RProp
//		Flags  -> (BlueprintCallable, BlueprintEvent)
void UMasterLobby_ABP_C::AnimNotify_Lobby_Unlock_RProp()
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(54611);

	UMasterLobby_ABP_C_AnimNotify_Lobby_Unlock_RProp_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function MasterLobby_ABP.MasterLobby_ABP_C.AnimNotify_Lobby_Lock_LProp
//		Flags  -> (BlueprintCallable, BlueprintEvent)
void UMasterLobby_ABP_C::AnimNotify_Lobby_Lock_LProp()
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(54610);

	UMasterLobby_ABP_C_AnimNotify_Lobby_Lock_LProp_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function MasterLobby_ABP.MasterLobby_ABP_C.AnimNotify_Lobby_Lock_RProp
//		Flags  -> (BlueprintCallable, BlueprintEvent)
void UMasterLobby_ABP_C::AnimNotify_Lobby_Lock_RProp()
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(54609);

	UMasterLobby_ABP_C_AnimNotify_Lobby_Lock_RProp_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function MasterLobby_ABP.MasterLobby_ABP_C.BlueprintInitializeAnimation
//		Flags  -> (Event, Public, BlueprintEvent)
void UMasterLobby_ABP_C::BlueprintInitializeAnimation()
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(54608);

	UMasterLobby_ABP_C_BlueprintInitializeAnimation_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function MasterLobby_ABP.MasterLobby_ABP_C.Set Skinned Local Parameters
//		Flags  -> (HasOutParms, BlueprintCallable, BlueprintEvent)
void UMasterLobby_ABP_C::Set_Skinned_Local_Parameters()
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(54607);

	UMasterLobby_ABP_C_Set_Skinned_Local_Parameters_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function MasterLobby_ABP.MasterLobby_ABP_C.UpdateTurnInPlace
//		Flags  -> (Event, Protected, BlueprintEvent)
// Parameters:
//		float                                              DeltaSeconds                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UMasterLobby_ABP_C::UpdateTurnInPlace(float DeltaSeconds)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(54606);

	UMasterLobby_ABP_C_UpdateTurnInPlace_Params params {};
	params.DeltaSeconds = DeltaSeconds;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function MasterLobby_ABP.MasterLobby_ABP_C.ExecuteUbergraph_MasterLobby_ABP
//		Flags  -> (Final, HasDefaults)
// Parameters:
//		int                                                EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UMasterLobby_ABP_C::ExecuteUbergraph_MasterLobby_ABP(int EntryPoint)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(54605);

	UMasterLobby_ABP_C_ExecuteUbergraph_MasterLobby_ABP_Params params {};
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
