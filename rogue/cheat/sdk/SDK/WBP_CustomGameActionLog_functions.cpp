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
//		Name   -> Function WBP_CustomGameActionLog.WBP_CustomGameActionLog_C.ClearLog
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
void UWBP_CustomGameActionLog_C::ClearLog()
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(87278);

	UWBP_CustomGameActionLog_C_ClearLog_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_CustomGameActionLog.WBP_CustomGameActionLog_C.AddLog
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
//		struct FText                                       Text                                                       (BlueprintVisible, BlueprintReadOnly, Parm)
void UWBP_CustomGameActionLog_C::AddLog(const struct FText& Text)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(87277);

	UWBP_CustomGameActionLog_C_AddLog_Params params {};
	params.Text = Text;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_CustomGameActionLog.WBP_CustomGameActionLog_C.PreConstruct
//		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
//		bool                                               IsDesignTime                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UWBP_CustomGameActionLog_C::PreConstruct(bool IsDesignTime)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(87276);

	UWBP_CustomGameActionLog_C_PreConstruct_Params params {};
	params.IsDesignTime = IsDesignTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_CustomGameActionLog.WBP_CustomGameActionLog_C.Construct
//		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
void UWBP_CustomGameActionLog_C::Construct()
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(87275);

	UWBP_CustomGameActionLog_C_Construct_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_CustomGameActionLog.WBP_CustomGameActionLog_C.HandleScrollBottom
//		Flags  -> (BlueprintCallable, BlueprintEvent)
void UWBP_CustomGameActionLog_C::HandleScrollBottom()
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(87274);

	UWBP_CustomGameActionLog_C_HandleScrollBottom_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_CustomGameActionLog.WBP_CustomGameActionLog_C.BndEvt__ScrollContainer_K2Node_ComponentBoundEvent_0_OnUserScrolledEvent__DelegateSignature
//		Flags  -> (BlueprintEvent)
// Parameters:
//		float                                              CurrentOffset                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWBP_CustomGameActionLog_C::BndEvt__ScrollContainer_K2Node_ComponentBoundEvent_0_OnUserScrolledEvent__DelegateSignature(float CurrentOffset)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(87273);

	UWBP_CustomGameActionLog_C_BndEvt__ScrollContainer_K2Node_ComponentBoundEvent_0_OnUserScrolledEvent__DelegateSignature_Params params {};
	params.CurrentOffset = CurrentOffset;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_CustomGameActionLog.WBP_CustomGameActionLog_C.ExecuteUbergraph_WBP_CustomGameActionLog
//		Flags  -> (Final)
// Parameters:
//		int                                                EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWBP_CustomGameActionLog_C::ExecuteUbergraph_WBP_CustomGameActionLog(int EntryPoint)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(87272);

	UWBP_CustomGameActionLog_C_ExecuteUbergraph_WBP_CustomGameActionLog_Params params {};
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
