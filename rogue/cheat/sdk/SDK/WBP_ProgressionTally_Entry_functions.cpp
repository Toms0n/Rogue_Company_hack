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
//		Name   -> Function WBP_ProgressionTally_Entry.WBP_ProgressionTally_Entry_C.SetValue
//		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
//		int                                                BonusValue                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		struct FText                                       OptionalTextFormat                                         (BlueprintVisible, BlueprintReadOnly, Parm)
//		struct FLinearColor                                Optional_Color                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWBP_ProgressionTally_Entry_C::SetValue(int BonusValue, const struct FText& OptionalTextFormat, const struct FLinearColor& Optional_Color)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(84490);

	UWBP_ProgressionTally_Entry_C_SetValue_Params params {};
	params.BonusValue = BonusValue;
	params.OptionalTextFormat = OptionalTextFormat;
	params.Optional_Color = Optional_Color;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_ProgressionTally_Entry.WBP_ProgressionTally_Entry_C.SetColor
//		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
//		struct FLinearColor                                Color                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWBP_ProgressionTally_Entry_C::SetColor(const struct FLinearColor& Color)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(84489);

	UWBP_ProgressionTally_Entry_C_SetColor_Params params {};
	params.Color = Color;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_ProgressionTally_Entry.WBP_ProgressionTally_Entry_C.PreConstruct
//		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
//		bool                                               IsDesignTime                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UWBP_ProgressionTally_Entry_C::PreConstruct(bool IsDesignTime)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(84488);

	UWBP_ProgressionTally_Entry_C_PreConstruct_Params params {};
	params.IsDesignTime = IsDesignTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_ProgressionTally_Entry.WBP_ProgressionTally_Entry_C.Construct
//		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
void UWBP_ProgressionTally_Entry_C::Construct()
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(84487);

	UWBP_ProgressionTally_Entry_C_Construct_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_ProgressionTally_Entry.WBP_ProgressionTally_Entry_C.ExecuteUbergraph_WBP_ProgressionTally_Entry
//		Flags  -> (Final)
// Parameters:
//		int                                                EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWBP_ProgressionTally_Entry_C::ExecuteUbergraph_WBP_ProgressionTally_Entry(int EntryPoint)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(84486);

	UWBP_ProgressionTally_Entry_C_ExecuteUbergraph_WBP_ProgressionTally_Entry_Params params {};
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
