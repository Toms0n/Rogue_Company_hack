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
//		Name   -> Function WBP_SettingsEntryList.WBP_SettingsEntryList_C.SetDesiredIndex
//		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
//		int                                                Index                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		bool                                               Success                                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UWBP_SettingsEntryList_C::SetDesiredIndex(int Index, bool* Success)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(61162);

	UWBP_SettingsEntryList_C_SetDesiredIndex_Params params {};
	params.Index = Index;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Success != nullptr)
		*Success = params.Success;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_SettingsEntryList.WBP_SettingsEntryList_C.NavigateBack
//		Flags  -> (Event, Protected, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
//		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
bool UWBP_SettingsEntryList_C::NavigateBack()
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(61161);

	UWBP_SettingsEntryList_C_NavigateBack_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_SettingsEntryList.WBP_SettingsEntryList_C.NavigateConfirmPressed
//		Flags  -> (Event, Protected, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
//		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
bool UWBP_SettingsEntryList_C::NavigateConfirmPressed()
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(61160);

	UWBP_SettingsEntryList_C_NavigateConfirmPressed_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_SettingsEntryList.WBP_SettingsEntryList_C.NavigateConfirm
//		Flags  -> (Event, Protected, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
//		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
bool UWBP_SettingsEntryList_C::NavigateConfirm()
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(61159);

	UWBP_SettingsEntryList_C_NavigateConfirm_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_SettingsEntryList.WBP_SettingsEntryList_C.GetDirtyIndex
//		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
//		int                                                Index                                                      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWBP_SettingsEntryList_C::GetDirtyIndex(int* Index)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(61158);

	UWBP_SettingsEntryList_C_GetDirtyIndex_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Index != nullptr)
		*Index = params.Index;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_SettingsEntryList.WBP_SettingsEntryList_C.OnWidgetSettingsInfoSet
//		Flags  -> (Event, Protected, BlueprintEvent)
void UWBP_SettingsEntryList_C::OnWidgetSettingsInfoSet()
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(61157);

	UWBP_SettingsEntryList_C_OnWidgetSettingsInfoSet_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_SettingsEntryList.WBP_SettingsEntryList_C.Selection Made
//		Flags  -> (BlueprintCallable, BlueprintEvent)
// Parameters:
//		int                                                Index                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		struct FText                                       Text                                                       (BlueprintVisible, BlueprintReadOnly, Parm)
void UWBP_SettingsEntryList_C::Selection_Made(int Index, const struct FText& Text)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(61156);

	UWBP_SettingsEntryList_C_Selection_Made_Params params {};
	params.Index = Index;
	params.Text = Text;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_SettingsEntryList.WBP_SettingsEntryList_C.ExecuteUbergraph_WBP_SettingsEntryList
//		Flags  -> (Final, HasDefaults)
// Parameters:
//		int                                                EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWBP_SettingsEntryList_C::ExecuteUbergraph_WBP_SettingsEntryList(int EntryPoint)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(61155);

	UWBP_SettingsEntryList_C_ExecuteUbergraph_WBP_SettingsEntryList_Params params {};
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_SettingsEntryList.WBP_SettingsEntryList_C.OnSelection__DelegateSignature
//		Flags  -> (Public, Delegate, BlueprintCallable, BlueprintEvent)
void UWBP_SettingsEntryList_C::OnSelection__DelegateSignature()
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(61154);

	UWBP_SettingsEntryList_C_OnSelection__DelegateSignature_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
