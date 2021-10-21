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
//		Name   -> Function WBP_RogueMasteryPortrait.WBP_RogueMasteryPortrait_C.Has Player Owner
//		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
//		bool                                               Return_Value                                               (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UWBP_RogueMasteryPortrait_C::Has_Player_Owner(bool* Return_Value)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(56626);

	UWBP_RogueMasteryPortrait_C_Has_Player_Owner_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Return_Value != nullptr)
		*Return_Value = params.Return_Value;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_RogueMasteryPortrait.WBP_RogueMasteryPortrait_C.GetOwnerJobMasteryLevel
//		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
//		int                                                Mastery_Level                                              (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWBP_RogueMasteryPortrait_C::GetOwnerJobMasteryLevel(int* Mastery_Level)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(56625);

	UWBP_RogueMasteryPortrait_C_GetOwnerJobMasteryLevel_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Mastery_Level != nullptr)
		*Mastery_Level = params.Mastery_Level;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_RogueMasteryPortrait.WBP_RogueMasteryPortrait_C.GetOwnerJob
//		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
//		class UKSJobItem*                                  Job                                                        (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWBP_RogueMasteryPortrait_C::GetOwnerJob(class UKSJobItem** Job)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(56624);

	UWBP_RogueMasteryPortrait_C_GetOwnerJob_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Job != nullptr)
		*Job = params.Job;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_RogueMasteryPortrait.WBP_RogueMasteryPortrait_C.MatchesBoundPlayer
//		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
//		class AKSPlayerState*                              PlayerState                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		class UKSPersistentPlayerData*                     PersistentData                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		bool                                               Return_Value                                               (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UWBP_RogueMasteryPortrait_C::MatchesBoundPlayer(class AKSPlayerState* PlayerState, class UKSPersistentPlayerData* PersistentData, bool* Return_Value)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(56623);

	UWBP_RogueMasteryPortrait_C_MatchesBoundPlayer_Params params {};
	params.PlayerState = PlayerState;
	params.PersistentData = PersistentData;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Return_Value != nullptr)
		*Return_Value = params.Return_Value;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_RogueMasteryPortrait.WBP_RogueMasteryPortrait_C.ClearPreviousOwner
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
void UWBP_RogueMasteryPortrait_C::ClearPreviousOwner()
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(56622);

	UWBP_RogueMasteryPortrait_C_ClearPreviousOwner_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_RogueMasteryPortrait.WBP_RogueMasteryPortrait_C.SetPersistentPlayerOwner
//		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
//		class UKSPersistentPlayerData*                     PlayerData                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWBP_RogueMasteryPortrait_C::SetPersistentPlayerOwner(class UKSPersistentPlayerData* PlayerData)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(56621);

	UWBP_RogueMasteryPortrait_C_SetPersistentPlayerOwner_Params params {};
	params.PlayerData = PlayerData;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_RogueMasteryPortrait.WBP_RogueMasteryPortrait_C.SetMasteryLevelExplicit
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
//		int                                                MasteryLevel                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWBP_RogueMasteryPortrait_C::SetMasteryLevelExplicit(int MasteryLevel)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(56620);

	UWBP_RogueMasteryPortrait_C_SetMasteryLevelExplicit_Params params {};
	params.MasteryLevel = MasteryLevel;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_RogueMasteryPortrait.WBP_RogueMasteryPortrait_C.SetMasteryFrameToLevel
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
//		int                                                MasteryLevel                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWBP_RogueMasteryPortrait_C::SetMasteryFrameToLevel(int MasteryLevel)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(56619);

	UWBP_RogueMasteryPortrait_C_SetMasteryFrameToLevel_Params params {};
	params.MasteryLevel = MasteryLevel;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_RogueMasteryPortrait.WBP_RogueMasteryPortrait_C.OnJobMasteryLevelUpdated
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
void UWBP_RogueMasteryPortrait_C::OnJobMasteryLevelUpdated()
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(56618);

	UWBP_RogueMasteryPortrait_C_OnJobMasteryLevelUpdated_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_RogueMasteryPortrait.WBP_RogueMasteryPortrait_C.SetJobPortraitFromSoftTexture
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
void UWBP_RogueMasteryPortrait_C::SetJobPortraitFromSoftTexture()
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(56617);

	UWBP_RogueMasteryPortrait_C_SetJobPortraitFromSoftTexture_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_RogueMasteryPortrait.WBP_RogueMasteryPortrait_C.Set Mastery Frame
//		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
void UWBP_RogueMasteryPortrait_C::Set_Mastery_Frame()
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(56616);

	UWBP_RogueMasteryPortrait_C_Set_Mastery_Frame_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_RogueMasteryPortrait.WBP_RogueMasteryPortrait_C.SetPlayerOwner
//		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
//		class AKSPlayerState*                              PlayerState                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWBP_RogueMasteryPortrait_C::SetPlayerOwner(class AKSPlayerState* PlayerState)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(56615);

	UWBP_RogueMasteryPortrait_C_SetPlayerOwner_Params params {};
	params.PlayerState = PlayerState;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_RogueMasteryPortrait.WBP_RogueMasteryPortrait_C.SetJobInformation
//		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
//		class UKSJobItem*                                  JobItem                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWBP_RogueMasteryPortrait_C::SetJobInformation(class UKSJobItem* JobItem)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(56614);

	UWBP_RogueMasteryPortrait_C_SetJobInformation_Params params {};
	params.JobItem = JobItem;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
