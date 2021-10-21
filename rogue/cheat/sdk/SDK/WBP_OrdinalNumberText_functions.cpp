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
//		Name   -> Function WBP_OrdinalNumberText.WBP_OrdinalNumberText_C.Get Language Specific Superscript Text
//		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
//		struct FString                                     Language_Code                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
//		struct FText                                       Return_Value                                               (Parm, OutParm)
void UWBP_OrdinalNumberText_C::Get_Language_Specific_Superscript_Text(const struct FString& Language_Code, struct FText* Return_Value)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(61769);

	UWBP_OrdinalNumberText_C_Get_Language_Specific_Superscript_Text_Params params {};
	params.Language_Code = Language_Code;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Return_Value != nullptr)
		*Return_Value = params.Return_Value;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_OrdinalNumberText.WBP_OrdinalNumberText_C.Get Language Specific Main Text
//		Flags  -> (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
//		struct FString                                     Language_Code                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
//		struct FText                                       Return_Value                                               (Parm, OutParm)
void UWBP_OrdinalNumberText_C::Get_Language_Specific_Main_Text(const struct FString& Language_Code, struct FText* Return_Value)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(61768);

	UWBP_OrdinalNumberText_C_Get_Language_Specific_Main_Text_Params params {};
	params.Language_Code = Language_Code;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Return_Value != nullptr)
		*Return_Value = params.Return_Value;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_OrdinalNumberText.WBP_OrdinalNumberText_C.PreConstruct
//		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
//		bool                                               IsDesignTime                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UWBP_OrdinalNumberText_C::PreConstruct(bool IsDesignTime)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(61767);

	UWBP_OrdinalNumberText_C_PreConstruct_Params params {};
	params.IsDesignTime = IsDesignTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_OrdinalNumberText.WBP_OrdinalNumberText_C.Set Font
//		Flags  -> (BlueprintCallable, BlueprintEvent)
// Parameters:
//		struct FSlateFontInfo                              InFontInfo                                                 (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
void UWBP_OrdinalNumberText_C::Set_Font(const struct FSlateFontInfo& InFontInfo)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(61766);

	UWBP_OrdinalNumberText_C_Set_Font_Params params {};
	params.InFontInfo = InFontInfo;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_OrdinalNumberText.WBP_OrdinalNumberText_C.Set Value
//		Flags  -> (BlueprintCallable, BlueprintEvent)
// Parameters:
//		int                                                Number                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWBP_OrdinalNumberText_C::Set_Value(int Number)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(61765);

	UWBP_OrdinalNumberText_C_Set_Value_Params params {};
	params.Number = Number;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_OrdinalNumberText.WBP_OrdinalNumberText_C.ExecuteUbergraph_WBP_OrdinalNumberText
//		Flags  -> (Final, HasDefaults)
// Parameters:
//		int                                                EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWBP_OrdinalNumberText_C::ExecuteUbergraph_WBP_OrdinalNumberText(int EntryPoint)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(61764);

	UWBP_OrdinalNumberText_C_ExecuteUbergraph_WBP_OrdinalNumberText_Params params {};
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
