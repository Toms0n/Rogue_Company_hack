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
//		Name   -> Function Tablet_Animinstance.Tablet_Animinstance_C.AnimGraph
//		Flags  -> (HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
//		struct FPoseLink                                   AnimGraph                                                  (Parm, OutParm, NoDestructor)
void UTablet_Animinstance_C::AnimGraph(struct FPoseLink* AnimGraph)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(25992);

	UTablet_Animinstance_C_AnimGraph_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (AnimGraph != nullptr)
		*AnimGraph = params.AnimGraph;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function Tablet_Animinstance.Tablet_Animinstance_C.CheckFullyClosed
//		Flags  -> (Event, Protected, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
//		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
bool UTablet_Animinstance_C::CheckFullyClosed()
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(25991);

	UTablet_Animinstance_C_CheckFullyClosed_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function Tablet_Animinstance.Tablet_Animinstance_C.CheckFullyOpened
//		Flags  -> (Event, Protected, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
//		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
bool UTablet_Animinstance_C::CheckFullyOpened()
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(25990);

	UTablet_Animinstance_C_CheckFullyOpened_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function Tablet_Animinstance.Tablet_Animinstance_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Tablet_Animinstance_AnimGraphNode_TransitionResult_C6030DE749FE3B92159BDE9A75441D4B
//		Flags  -> (BlueprintEvent)
void UTablet_Animinstance_C::EvaluateGraphExposedInputs_ExecuteUbergraph_Tablet_Animinstance_AnimGraphNode_TransitionResult_C6030DE749FE3B92159BDE9A75441D4B()
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(25989);

	UTablet_Animinstance_C_EvaluateGraphExposedInputs_ExecuteUbergraph_Tablet_Animinstance_AnimGraphNode_TransitionResult_C6030DE749FE3B92159BDE9A75441D4B_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function Tablet_Animinstance.Tablet_Animinstance_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Tablet_Animinstance_AnimGraphNode_TransitionResult_663822E3415C75ED19679CB91FC56195
//		Flags  -> (BlueprintEvent)
void UTablet_Animinstance_C::EvaluateGraphExposedInputs_ExecuteUbergraph_Tablet_Animinstance_AnimGraphNode_TransitionResult_663822E3415C75ED19679CB91FC56195()
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(25988);

	UTablet_Animinstance_C_EvaluateGraphExposedInputs_ExecuteUbergraph_Tablet_Animinstance_AnimGraphNode_TransitionResult_663822E3415C75ED19679CB91FC56195_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function Tablet_Animinstance.Tablet_Animinstance_C.AnimNotify_BecomeFullyOpened
//		Flags  -> (BlueprintCallable, BlueprintEvent)
void UTablet_Animinstance_C::AnimNotify_BecomeFullyOpened()
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(25987);

	UTablet_Animinstance_C_AnimNotify_BecomeFullyOpened_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function Tablet_Animinstance.Tablet_Animinstance_C.AnimNotify_EndFullyOpened
//		Flags  -> (BlueprintCallable, BlueprintEvent)
void UTablet_Animinstance_C::AnimNotify_EndFullyOpened()
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(25986);

	UTablet_Animinstance_C_AnimNotify_EndFullyOpened_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function Tablet_Animinstance.Tablet_Animinstance_C.AnimNotify_BecomeFullyClosed
//		Flags  -> (BlueprintCallable, BlueprintEvent)
void UTablet_Animinstance_C::AnimNotify_BecomeFullyClosed()
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(25985);

	UTablet_Animinstance_C_AnimNotify_BecomeFullyClosed_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function Tablet_Animinstance.Tablet_Animinstance_C.AnimNotify_EndFullyClosed
//		Flags  -> (BlueprintCallable, BlueprintEvent)
void UTablet_Animinstance_C::AnimNotify_EndFullyClosed()
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(25984);

	UTablet_Animinstance_C_AnimNotify_EndFullyClosed_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function Tablet_Animinstance.Tablet_Animinstance_C.ExecuteUbergraph_Tablet_Animinstance
//		Flags  -> (Final)
// Parameters:
//		int                                                EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UTablet_Animinstance_C::ExecuteUbergraph_Tablet_Animinstance(int EntryPoint)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(25983);

	UTablet_Animinstance_C_ExecuteUbergraph_Tablet_Animinstance_Params params {};
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
