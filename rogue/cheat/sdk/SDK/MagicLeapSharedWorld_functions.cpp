﻿// Name: roguecompany, Version: 425

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
//		Offset -> 0x019A6220
//		Name   -> Function MagicLeapSharedWorld.MagicLeapSharedWorldGameMode.SendSharedWorldDataToClients
//		Flags  -> (Final, BlueprintAuthorityOnly, Native, Public, BlueprintCallable)
// Parameters:
//		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool AMagicLeapSharedWorldGameMode::SendSharedWorldDataToClients()
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(8032);

	AMagicLeapSharedWorldGameMode_SendSharedWorldDataToClients_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x01860C60
//		Name   -> Function MagicLeapSharedWorld.MagicLeapSharedWorldGameMode.SelectChosenOne
//		Flags  -> (BlueprintAuthorityOnly, Native, Event, Public, BlueprintCallable, BlueprintEvent)
void AMagicLeapSharedWorldGameMode::SelectChosenOne()
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(8031);

	AMagicLeapSharedWorldGameMode_SelectChosenOne_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> DelegateFunction MagicLeapSharedWorld.MagicLeapSharedWorldGameMode.MagicLeapOnNewLocalDataFromClients__DelegateSignature
//		Flags  -> (MulticastDelegate, Public, Delegate)
void AMagicLeapSharedWorldGameMode::MagicLeapOnNewLocalDataFromClients__DelegateSignature()
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(8030);

	AMagicLeapSharedWorldGameMode_MagicLeapOnNewLocalDataFromClients__DelegateSignature_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x019A6100
//		Name   -> Function MagicLeapSharedWorld.MagicLeapSharedWorldGameMode.DetermineSharedWorldData
//		Flags  -> (BlueprintAuthorityOnly, Native, Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
//		struct FMagicLeapSharedWorldSharedData             NewSharedWorldData                                         (Parm, OutParm, NativeAccessSpecifierPublic)
void AMagicLeapSharedWorldGameMode::DetermineSharedWorldData(struct FMagicLeapSharedWorldSharedData* NewSharedWorldData)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(8028);

	AMagicLeapSharedWorldGameMode_DetermineSharedWorldData_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (NewSharedWorldData != nullptr)
		*NewSharedWorldData = params.NewSharedWorldData;

}


// Function:
//		Offset -> 0x019A6200
//		Name   -> Function MagicLeapSharedWorld.MagicLeapSharedWorldGameState.OnReplicate_SharedWorldData
//		Flags  -> (Final, Native, Private)
void AMagicLeapSharedWorldGameState::OnReplicate_SharedWorldData()
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(8048);

	AMagicLeapSharedWorldGameState_OnReplicate_SharedWorldData_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x019A61E0
//		Name   -> Function MagicLeapSharedWorld.MagicLeapSharedWorldGameState.OnReplicate_AlignmentTransforms
//		Flags  -> (Final, Native, Private)
void AMagicLeapSharedWorldGameState::OnReplicate_AlignmentTransforms()
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(8047);

	AMagicLeapSharedWorldGameState_OnReplicate_AlignmentTransforms_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> DelegateFunction MagicLeapSharedWorld.MagicLeapSharedWorldGameState.MagicLeapSharedWorldEvent__DelegateSignature
//		Flags  -> (MulticastDelegate, Public, Delegate)
void AMagicLeapSharedWorldGameState::MagicLeapSharedWorldEvent__DelegateSignature()
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(8046);

	AMagicLeapSharedWorldGameState_MagicLeapSharedWorldEvent__DelegateSignature_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x019A5FB0
//		Name   -> Function MagicLeapSharedWorld.MagicLeapSharedWorldGameState.CalculateXRCameraRootTransform
//		Flags  -> (Native, Event, Public, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
//		struct FTransform                                  ReturnValue                                                (Parm, OutParm, ReturnParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
struct FTransform AMagicLeapSharedWorldGameState::CalculateXRCameraRootTransform()
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(8045);

	AMagicLeapSharedWorldGameState_CalculateXRCameraRootTransform_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x019A62F0
//		Name   -> Function MagicLeapSharedWorld.MagicLeapSharedWorldPlayerController.ServerSetLocalWorldData
//		Flags  -> (Net, NetReliable, Native, Event, Public, NetServer, BlueprintCallable)
// Parameters:
//		struct FMagicLeapSharedWorldLocalData              LocalWorldReplicationData                                  (ConstParm, Parm, ReferenceParm, NativeAccessSpecifierPublic)
void AMagicLeapSharedWorldPlayerController::ServerSetLocalWorldData(const struct FMagicLeapSharedWorldLocalData& LocalWorldReplicationData)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(11300);

	AMagicLeapSharedWorldPlayerController_ServerSetLocalWorldData_Params params {};
	params.LocalWorldReplicationData = LocalWorldReplicationData;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x019A6250
//		Name   -> Function MagicLeapSharedWorld.MagicLeapSharedWorldPlayerController.ServerSetAlignmentTransforms
//		Flags  -> (Net, NetReliable, Native, Event, Public, NetServer, BlueprintCallable)
// Parameters:
//		struct FMagicLeapSharedWorldAlignmentTransforms    InAlignmentTransforms                                      (ConstParm, Parm, ReferenceParm, NativeAccessSpecifierPublic)
void AMagicLeapSharedWorldPlayerController::ServerSetAlignmentTransforms(const struct FMagicLeapSharedWorldAlignmentTransforms& InAlignmentTransforms)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(11299);

	AMagicLeapSharedWorldPlayerController_ServerSetAlignmentTransforms_Params params {};
	params.InAlignmentTransforms = InAlignmentTransforms;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x019A61B0
//		Name   -> Function MagicLeapSharedWorld.MagicLeapSharedWorldPlayerController.IsChosenOne
//		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
//		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool AMagicLeapSharedWorldPlayerController::IsChosenOne()
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(11298);

	AMagicLeapSharedWorldPlayerController_IsChosenOne_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x019A6070
//		Name   -> Function MagicLeapSharedWorld.MagicLeapSharedWorldPlayerController.ClientSetChosenOne
//		Flags  -> (Net, NetReliable, Native, Event, Public, NetClient, BlueprintCallable)
// Parameters:
//		bool                                               bChosenOne                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void AMagicLeapSharedWorldPlayerController::ClientSetChosenOne(bool bChosenOne)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(11297);

	AMagicLeapSharedWorldPlayerController_ClientSetChosenOne_Params params {};
	params.bChosenOne = bChosenOne;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x019A6050
//		Name   -> Function MagicLeapSharedWorld.MagicLeapSharedWorldPlayerController.ClientMarkReadyForSendingLocalData
//		Flags  -> (Net, NetReliable, Native, Event, Public, NetClient)
void AMagicLeapSharedWorldPlayerController::ClientMarkReadyForSendingLocalData()
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(11296);

	AMagicLeapSharedWorldPlayerController_ClientMarkReadyForSendingLocalData_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x019A6020
//		Name   -> Function MagicLeapSharedWorld.MagicLeapSharedWorldPlayerController.CanSendLocalDataToServer
//		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
//		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool AMagicLeapSharedWorldPlayerController::CanSendLocalDataToServer()
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(11295);

	AMagicLeapSharedWorldPlayerController_CanSendLocalDataToServer_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
