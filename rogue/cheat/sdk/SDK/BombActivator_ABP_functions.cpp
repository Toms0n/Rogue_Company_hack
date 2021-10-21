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
//		Name   -> Function BombActivator_ABP.BombActivator_ABP_C.AnimGraph
//		Flags  -> (HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
//		struct FPoseLink                                   AnimGraph                                                  (Parm, OutParm, NoDestructor)
void UBombActivator_ABP_C::AnimGraph(struct FPoseLink* AnimGraph)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(33478);

	UBombActivator_ABP_C_AnimGraph_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (AnimGraph != nullptr)
		*AnimGraph = params.AnimGraph;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function BombActivator_ABP.BombActivator_ABP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_BombActivator_ABP_AnimGraphNode_TransitionResult_BAB1EF554FE8E3E61CD2458A88DC7339
//		Flags  -> (BlueprintEvent)
void UBombActivator_ABP_C::EvaluateGraphExposedInputs_ExecuteUbergraph_BombActivator_ABP_AnimGraphNode_TransitionResult_BAB1EF554FE8E3E61CD2458A88DC7339()
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(33477);

	UBombActivator_ABP_C_EvaluateGraphExposedInputs_ExecuteUbergraph_BombActivator_ABP_AnimGraphNode_TransitionResult_BAB1EF554FE8E3E61CD2458A88DC7339_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function BombActivator_ABP.BombActivator_ABP_C.AnimNotify_PlayBombPlantedSFX
//		Flags  -> (BlueprintCallable, BlueprintEvent)
void UBombActivator_ABP_C::AnimNotify_PlayBombPlantedSFX()
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(33476);

	UBombActivator_ABP_C_AnimNotify_PlayBombPlantedSFX_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function BombActivator_ABP.BombActivator_ABP_C.AnimNotify_PlayBombLoopSFX
//		Flags  -> (BlueprintCallable, BlueprintEvent)
void UBombActivator_ABP_C::AnimNotify_PlayBombLoopSFX()
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(33475);

	UBombActivator_ABP_C_AnimNotify_PlayBombLoopSFX_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function BombActivator_ABP.BombActivator_ABP_C.AnimNotify_PlayBombDisarmingSFX
//		Flags  -> (BlueprintCallable, BlueprintEvent)
void UBombActivator_ABP_C::AnimNotify_PlayBombDisarmingSFX()
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(33474);

	UBombActivator_ABP_C_AnimNotify_PlayBombDisarmingSFX_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function BombActivator_ABP.BombActivator_ABP_C.AnimNotify_StopBombPlantedSFX
//		Flags  -> (BlueprintCallable, BlueprintEvent)
void UBombActivator_ABP_C::AnimNotify_StopBombPlantedSFX()
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(33473);

	UBombActivator_ABP_C_AnimNotify_StopBombPlantedSFX_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function BombActivator_ABP.BombActivator_ABP_C.AnimNotify_StopBombLoopSFX
//		Flags  -> (BlueprintCallable, BlueprintEvent)
void UBombActivator_ABP_C::AnimNotify_StopBombLoopSFX()
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(33472);

	UBombActivator_ABP_C_AnimNotify_StopBombLoopSFX_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function BombActivator_ABP.BombActivator_ABP_C.AnimNotify_StopBombDisarmingSFX
//		Flags  -> (BlueprintCallable, BlueprintEvent)
void UBombActivator_ABP_C::AnimNotify_StopBombDisarmingSFX()
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(33471);

	UBombActivator_ABP_C_AnimNotify_StopBombDisarmingSFX_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function BombActivator_ABP.BombActivator_ABP_C.ExecuteUbergraph_BombActivator_ABP
//		Flags  -> (Final, HasDefaults)
// Parameters:
//		int                                                EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UBombActivator_ABP_C::ExecuteUbergraph_BombActivator_ABP(int EntryPoint)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(33470);

	UBombActivator_ABP_C_ExecuteUbergraph_BombActivator_ABP_Params params {};
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
