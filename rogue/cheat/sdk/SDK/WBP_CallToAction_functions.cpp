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
//		Name   -> Function WBP_CallToAction.WBP_CallToAction_C.StopCTAAnim
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
void UWBP_CallToAction_C::StopCTAAnim()
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(56887);

	UWBP_CallToAction_C_StopCTAAnim_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_CallToAction.WBP_CallToAction_C.PlayCTAAnim
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
void UWBP_CallToAction_C::PlayCTAAnim()
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(56886);

	UWBP_CallToAction_C_PlayCTAAnim_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_CallToAction.WBP_CallToAction_C.PreConstruct
//		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
//		bool                                               IsDesignTime                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UWBP_CallToAction_C::PreConstruct(bool IsDesignTime)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(56885);

	UWBP_CallToAction_C_PreConstruct_Params params {};
	params.IsDesignTime = IsDesignTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_CallToAction.WBP_CallToAction_C.Construct
//		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
void UWBP_CallToAction_C::Construct()
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(56884);

	UWBP_CallToAction_C_Construct_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_CallToAction.WBP_CallToAction_C.ExecuteUbergraph_WBP_CallToAction
//		Flags  -> (Final)
// Parameters:
//		int                                                EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWBP_CallToAction_C::ExecuteUbergraph_WBP_CallToAction(int EntryPoint)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(56883);

	UWBP_CallToAction_C_ExecuteUbergraph_WBP_CallToAction_Params params {};
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
