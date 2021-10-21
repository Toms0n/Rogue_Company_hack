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
//		Name   -> Function WBP_SettingsDropdown.WBP_SettingsDropdown_C.SetPreviewIndex
//		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
//		int                                                Index                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		bool                                               Success                                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UWBP_SettingsDropdown_C::SetPreviewIndex(int Index, bool* Success)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(45322);

	UWBP_SettingsDropdown_C_SetPreviewIndex_Params params {};
	params.Index = Index;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Success != nullptr)
		*Success = params.Success;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_SettingsDropdown.WBP_SettingsDropdown_C.NavigateBack
//		Flags  -> (Event, Protected, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
//		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
bool UWBP_SettingsDropdown_C::NavigateBack()
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(45321);

	UWBP_SettingsDropdown_C_NavigateBack_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_SettingsDropdown.WBP_SettingsDropdown_C.NavigateConfirmPressed
//		Flags  -> (Event, Protected, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
//		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
bool UWBP_SettingsDropdown_C::NavigateConfirmPressed()
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(45320);

	UWBP_SettingsDropdown_C_NavigateConfirmPressed_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_SettingsDropdown.WBP_SettingsDropdown_C.NavigateConfirm
//		Flags  -> (Event, Protected, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
//		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
bool UWBP_SettingsDropdown_C::NavigateConfirm()
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(45319);

	UWBP_SettingsDropdown_C_NavigateConfirm_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_SettingsDropdown.WBP_SettingsDropdown_C.SetDesiredIndex
//		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
//		int                                                Index                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		bool                                               Success                                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UWBP_SettingsDropdown_C::SetDesiredIndex(int Index, bool* Success)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(45318);

	UWBP_SettingsDropdown_C_SetDesiredIndex_Params params {};
	params.Index = Index;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Success != nullptr)
		*Success = params.Success;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_SettingsDropdown.WBP_SettingsDropdown_C.GetDirtyIndex
//		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
//		int                                                Index                                                      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWBP_SettingsDropdown_C::GetDirtyIndex(int* Index)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(45317);

	UWBP_SettingsDropdown_C_GetDirtyIndex_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Index != nullptr)
		*Index = params.Index;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_SettingsDropdown.WBP_SettingsDropdown_C.Set Text To Index
//		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
//		int                                                Index                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWBP_SettingsDropdown_C::Set_Text_To_Index(int Index)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(45316);

	UWBP_SettingsDropdown_C_Set_Text_To_Index_Params params {};
	params.Index = Index;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_SettingsDropdown.WBP_SettingsDropdown_C.OnWidgetSettingsInfoSet
//		Flags  -> (Event, Protected, BlueprintEvent)
void UWBP_SettingsDropdown_C::OnWidgetSettingsInfoSet()
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(45315);

	UWBP_SettingsDropdown_C_OnWidgetSettingsInfoSet_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_SettingsDropdown.WBP_SettingsDropdown_C.Selection Made
//		Flags  -> (BlueprintCallable, BlueprintEvent)
// Parameters:
//		struct FText                                       Text                                                       (BlueprintVisible, BlueprintReadOnly, Parm)
//		int                                                Index                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWBP_SettingsDropdown_C::Selection_Made(const struct FText& Text, int Index)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(45314);

	UWBP_SettingsDropdown_C_Selection_Made_Params params {};
	params.Text = Text;
	params.Index = Index;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_SettingsDropdown.WBP_SettingsDropdown_C.InitializeWidget
//		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
//		class APUMG_HUD*                                   HUD                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWBP_SettingsDropdown_C::InitializeWidget(class APUMG_HUD* HUD)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(45313);

	UWBP_SettingsDropdown_C_InitializeWidget_Params params {};
	params.HUD = HUD;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_SettingsDropdown.WBP_SettingsDropdown_C.GamepadHover
//		Flags  -> (Event, Public, BlueprintEvent)
void UWBP_SettingsDropdown_C::GamepadHover()
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(45312);

	UWBP_SettingsDropdown_C_GamepadHover_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_SettingsDropdown.WBP_SettingsDropdown_C.InitializeWidgetNavigation
//		Flags  -> (Event, Public, BlueprintEvent)
void UWBP_SettingsDropdown_C::InitializeWidgetNavigation()
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(45311);

	UWBP_SettingsDropdown_C_InitializeWidgetNavigation_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_SettingsDropdown.WBP_SettingsDropdown_C.FocusGroupNavigateDownFailure
//		Flags  -> (Event, Public, BlueprintEvent)
// Parameters:
//		int                                                FocusGroup                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWBP_SettingsDropdown_C::FocusGroupNavigateDownFailure(int FocusGroup)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(45310);

	UWBP_SettingsDropdown_C_FocusGroupNavigateDownFailure_Params params {};
	params.FocusGroup = FocusGroup;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_SettingsDropdown.WBP_SettingsDropdown_C.FocusGroupNavigateUpFailure
//		Flags  -> (Event, Public, BlueprintEvent)
// Parameters:
//		int                                                FocusGroup                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWBP_SettingsDropdown_C::FocusGroupNavigateUpFailure(int FocusGroup)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(45309);

	UWBP_SettingsDropdown_C_FocusGroupNavigateUpFailure_Params params {};
	params.FocusGroup = FocusGroup;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_SettingsDropdown.WBP_SettingsDropdown_C.OnSettingsInfoValueChanged
//		Flags  -> (Event, Protected, BlueprintCallable, BlueprintEvent)
// Parameters:
//		bool                                               bChangedExternally                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UWBP_SettingsDropdown_C::OnSettingsInfoValueChanged(bool bChangedExternally)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(45308);

	UWBP_SettingsDropdown_C_OnSettingsInfoValueChanged_Params params {};
	params.bChangedExternally = bChangedExternally;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_SettingsDropdown.WBP_SettingsDropdown_C.HoverPreview
//		Flags  -> (BlueprintCallable, BlueprintEvent)
// Parameters:
//		int                                                Index                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWBP_SettingsDropdown_C::HoverPreview(int Index)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(45307);

	UWBP_SettingsDropdown_C_HoverPreview_Params params {};
	params.Index = Index;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_SettingsDropdown.WBP_SettingsDropdown_C.SelectionCanceled
//		Flags  -> (BlueprintCallable, BlueprintEvent)
void UWBP_SettingsDropdown_C::SelectionCanceled()
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(45092);

	UWBP_SettingsDropdown_C_SelectionCanceled_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_SettingsDropdown.WBP_SettingsDropdown_C.ExecuteUbergraph_WBP_SettingsDropdown
//		Flags  -> (Final, HasDefaults)
// Parameters:
//		int                                                EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWBP_SettingsDropdown_C::ExecuteUbergraph_WBP_SettingsDropdown(int EntryPoint)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(45091);

	UWBP_SettingsDropdown_C_ExecuteUbergraph_WBP_SettingsDropdown_Params params {};
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
