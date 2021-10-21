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
//		Name   -> Function WBP_ReportMenuCommentField.WBP_ReportMenuCommentField_C.NavigateConfirm
//		Flags  -> (Event, Protected, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
//		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
bool UWBP_ReportMenuCommentField_C::NavigateConfirm()
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(61746);

	UWBP_ReportMenuCommentField_C_NavigateConfirm_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_ReportMenuCommentField.WBP_ReportMenuCommentField_C.ClearText
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
void UWBP_ReportMenuCommentField_C::ClearText()
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(61745);

	UWBP_ReportMenuCommentField_C_ClearText_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_ReportMenuCommentField.WBP_ReportMenuCommentField_C.GetText
//		Flags  -> (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
//		struct FText                                       Return_Value                                               (Parm, OutParm)
void UWBP_ReportMenuCommentField_C::GetText(struct FText* Return_Value)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(61744);

	UWBP_ReportMenuCommentField_C_GetText_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Return_Value != nullptr)
		*Return_Value = params.Return_Value;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_ReportMenuCommentField.WBP_ReportMenuCommentField_C.GamepadHover
//		Flags  -> (Event, Public, BlueprintEvent)
void UWBP_ReportMenuCommentField_C::GamepadHover()
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(61743);

	UWBP_ReportMenuCommentField_C_GamepadHover_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_ReportMenuCommentField.WBP_ReportMenuCommentField_C.GamepadUnhover
//		Flags  -> (Event, Public, BlueprintEvent)
void UWBP_ReportMenuCommentField_C::GamepadUnhover()
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(61742);

	UWBP_ReportMenuCommentField_C_GamepadUnhover_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_ReportMenuCommentField.WBP_ReportMenuCommentField_C.ExecuteUbergraph_WBP_ReportMenuCommentField
//		Flags  -> (Final, HasDefaults)
// Parameters:
//		int                                                EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWBP_ReportMenuCommentField_C::ExecuteUbergraph_WBP_ReportMenuCommentField(int EntryPoint)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(61741);

	UWBP_ReportMenuCommentField_C_ExecuteUbergraph_WBP_ReportMenuCommentField_Params params {};
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
