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
//		Name   -> Function WBP_QuickPlay_QueueTypeHeader.WBP_QuickPlay_QueueTypeHeader_C.Construct
//		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
void UWBP_QuickPlay_QueueTypeHeader_C::Construct()
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(59748);

	UWBP_QuickPlay_QueueTypeHeader_C_Construct_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_QuickPlay_QueueTypeHeader.WBP_QuickPlay_QueueTypeHeader_C.SetHeaderText
//		Flags  -> (BlueprintCallable, BlueprintEvent)
// Parameters:
//		struct FText                                       QueueType                                                  (BlueprintVisible, BlueprintReadOnly, Parm)
void UWBP_QuickPlay_QueueTypeHeader_C::SetHeaderText(const struct FText& QueueType)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(59747);

	UWBP_QuickPlay_QueueTypeHeader_C_SetHeaderText_Params params {};
	params.QueueType = QueueType;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_QuickPlay_QueueTypeHeader.WBP_QuickPlay_QueueTypeHeader_C.ExecuteUbergraph_WBP_QuickPlay_QueueTypeHeader
//		Flags  -> (Final, HasDefaults)
// Parameters:
//		int                                                EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWBP_QuickPlay_QueueTypeHeader_C::ExecuteUbergraph_WBP_QuickPlay_QueueTypeHeader(int EntryPoint)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(59746);

	UWBP_QuickPlay_QueueTypeHeader_C_ExecuteUbergraph_WBP_QuickPlay_QueueTypeHeader_Params params {};
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
