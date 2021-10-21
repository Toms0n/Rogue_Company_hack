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
//		Name   -> Function WBP_ChevronProgressBar.WBP_ChevronProgressBar_C.SetColors
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
void UWBP_ChevronProgressBar_C::SetColors()
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(69855);

	UWBP_ChevronProgressBar_C_SetColors_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_ChevronProgressBar.WBP_ChevronProgressBar_C.SetProgress
//		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
//		float                                              Progress                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWBP_ChevronProgressBar_C::SetProgress(float Progress)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(69854);

	UWBP_ChevronProgressBar_C_SetProgress_Params params {};
	params.Progress = Progress;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_ChevronProgressBar.WBP_ChevronProgressBar_C.PreConstruct
//		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
//		bool                                               IsDesignTime                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UWBP_ChevronProgressBar_C::PreConstruct(bool IsDesignTime)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(69853);

	UWBP_ChevronProgressBar_C_PreConstruct_Params params {};
	params.IsDesignTime = IsDesignTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_ChevronProgressBar.WBP_ChevronProgressBar_C.Construct
//		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
void UWBP_ChevronProgressBar_C::Construct()
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(69852);

	UWBP_ChevronProgressBar_C_Construct_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_ChevronProgressBar.WBP_ChevronProgressBar_C.ExecuteUbergraph_WBP_ChevronProgressBar
//		Flags  -> (Final)
// Parameters:
//		int                                                EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWBP_ChevronProgressBar_C::ExecuteUbergraph_WBP_ChevronProgressBar(int EntryPoint)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(69757);

	UWBP_ChevronProgressBar_C_ExecuteUbergraph_WBP_ChevronProgressBar_Params params {};
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
