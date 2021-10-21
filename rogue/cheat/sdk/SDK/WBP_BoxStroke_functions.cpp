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
//		Name   -> Function WBP_BoxStroke.WBP_BoxStroke_C.SetStrokeColor
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
//		struct FLinearColor                                NewColor                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWBP_BoxStroke_C::SetStrokeColor(const struct FLinearColor& NewColor)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(55390);

	UWBP_BoxStroke_C_SetStrokeColor_Params params {};
	params.NewColor = NewColor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_BoxStroke.WBP_BoxStroke_C.SetStrokeSize
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
//		float                                              NewSize                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWBP_BoxStroke_C::SetStrokeSize(float NewSize)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(55389);

	UWBP_BoxStroke_C_SetStrokeSize_Params params {};
	params.NewSize = NewSize;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_BoxStroke.WBP_BoxStroke_C.ApplyStrokeColor
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
void UWBP_BoxStroke_C::ApplyStrokeColor()
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(55388);

	UWBP_BoxStroke_C_ApplyStrokeColor_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_BoxStroke.WBP_BoxStroke_C.ApplyStrokeSize
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
void UWBP_BoxStroke_C::ApplyStrokeSize()
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(55387);

	UWBP_BoxStroke_C_ApplyStrokeSize_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_BoxStroke.WBP_BoxStroke_C.PreConstruct
//		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
//		bool                                               IsDesignTime                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UWBP_BoxStroke_C::PreConstruct(bool IsDesignTime)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(55386);

	UWBP_BoxStroke_C_PreConstruct_Params params {};
	params.IsDesignTime = IsDesignTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_BoxStroke.WBP_BoxStroke_C.Construct
//		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
void UWBP_BoxStroke_C::Construct()
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(55385);

	UWBP_BoxStroke_C_Construct_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_BoxStroke.WBP_BoxStroke_C.ExecuteUbergraph_WBP_BoxStroke
//		Flags  -> (Final)
// Parameters:
//		int                                                EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWBP_BoxStroke_C::ExecuteUbergraph_WBP_BoxStroke(int EntryPoint)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(55384);

	UWBP_BoxStroke_C_ExecuteUbergraph_WBP_BoxStroke_Params params {};
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
