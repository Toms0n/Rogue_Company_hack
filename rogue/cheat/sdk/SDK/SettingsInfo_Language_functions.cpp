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
//		Name   -> Function SettingsInfo_Language.SettingsInfo_Language_C.FixupInvalidInt
//		Flags  -> (Event, Protected, HasOutParms, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
//		int                                                inInt                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		int                                                ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
int USettingsInfo_Language_C::FixupInvalidInt(int inInt)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(44989);

	USettingsInfo_Language_C_FixupInvalidInt_Params params {};
	params.inInt = inInt;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function SettingsInfo_Language.SettingsInfo_Language_C.IsValidValueInt
//		Flags  -> (Event, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
//		int                                                inInt                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
bool USettingsInfo_Language_C::IsValidValueInt(int inInt)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(44988);

	USettingsInfo_Language_C_IsValidValueInt_Params params {};
	params.inInt = inInt;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function SettingsInfo_Language.SettingsInfo_Language_C.GetCultureStringFromTextOptionIndex
//		Flags  -> (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
//		int                                                TextOptionIndex                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		bool                                               Success                                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
//		struct FString                                     CultureString                                              (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash)
void USettingsInfo_Language_C::GetCultureStringFromTextOptionIndex(int TextOptionIndex, bool* Success, struct FString* CultureString)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(44987);

	USettingsInfo_Language_C_GetCultureStringFromTextOptionIndex_Params params {};
	params.TextOptionIndex = TextOptionIndex;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Success != nullptr)
		*Success = params.Success;
	if (CultureString != nullptr)
		*CultureString = params.CultureString;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function SettingsInfo_Language.SettingsInfo_Language_C.GetLanguageTextOptionIndex
//		Flags  -> (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
//		struct FString                                     Language                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
//		int                                                TextOptionIndex                                            (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void USettingsInfo_Language_C::GetLanguageTextOptionIndex(const struct FString& Language, int* TextOptionIndex)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(44986);

	USettingsInfo_Language_C_GetLanguageTextOptionIndex_Params params {};
	params.Language = Language;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (TextOptionIndex != nullptr)
		*TextOptionIndex = params.TextOptionIndex;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function SettingsInfo_Language.SettingsInfo_Language_C.SetUpLanguageOptions
//		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
void USettingsInfo_Language_C::SetUpLanguageOptions()
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(44985);

	USettingsInfo_Language_C_SetUpLanguageOptions_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function SettingsInfo_Language.SettingsInfo_Language_C.SaveIntValue
//		Flags  -> (Event, Protected, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
//		int                                                inInt                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
bool USettingsInfo_Language_C::SaveIntValue(int inInt)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(44984);

	USettingsInfo_Language_C_SaveIntValue_Params params {};
	params.inInt = inInt;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function SettingsInfo_Language.SettingsInfo_Language_C.ApplyIntValue
//		Flags  -> (Event, Protected, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
//		int                                                inInt                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
bool USettingsInfo_Language_C::ApplyIntValue(int inInt)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(44983);

	USettingsInfo_Language_C_ApplyIntValue_Params params {};
	params.inInt = inInt;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function SettingsInfo_Language.SettingsInfo_Language_C.InitializeValue
//		Flags  -> (Event, Protected, BlueprintEvent)
void USettingsInfo_Language_C::InitializeValue()
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(44982);

	USettingsInfo_Language_C_InitializeValue_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function SettingsInfo_Language.SettingsInfo_Language_C.HandleOnDisplayLanguageApplied
//		Flags  -> (BlueprintCallable, BlueprintEvent)
// Parameters:
//		struct FString                                     StringValue                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
void USettingsInfo_Language_C::HandleOnDisplayLanguageApplied(const struct FString& StringValue)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(44981);

	USettingsInfo_Language_C_HandleOnDisplayLanguageApplied_Params params {};
	params.StringValue = StringValue;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function SettingsInfo_Language.SettingsInfo_Language_C.HandleOnDisplayLanguageSaved
//		Flags  -> (BlueprintCallable, BlueprintEvent)
// Parameters:
//		struct FString                                     StringValue                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
void USettingsInfo_Language_C::HandleOnDisplayLanguageSaved(const struct FString& StringValue)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(44980);

	USettingsInfo_Language_C_HandleOnDisplayLanguageSaved_Params params {};
	params.StringValue = StringValue;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function SettingsInfo_Language.SettingsInfo_Language_C.RevertSettingToDefault
//		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
void USettingsInfo_Language_C::RevertSettingToDefault()
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(44979);

	USettingsInfo_Language_C_RevertSettingToDefault_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function SettingsInfo_Language.SettingsInfo_Language_C.ExecuteUbergraph_SettingsInfo_Language
//		Flags  -> (Final)
// Parameters:
//		int                                                EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void USettingsInfo_Language_C::ExecuteUbergraph_SettingsInfo_Language(int EntryPoint)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(44978);

	USettingsInfo_Language_C_ExecuteUbergraph_SettingsInfo_Language_Params params {};
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
