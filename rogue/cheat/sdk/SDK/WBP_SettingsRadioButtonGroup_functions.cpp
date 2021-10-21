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
//		Name   -> Function WBP_SettingsRadioButtonGroup.WBP_SettingsRadioButtonGroup_C.NavigateBack
//		Flags  -> (Event, Protected, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
//		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
bool UWBP_SettingsRadioButtonGroup_C::NavigateBack()
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(45127);

	UWBP_SettingsRadioButtonGroup_C_NavigateBack_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_SettingsRadioButtonGroup.WBP_SettingsRadioButtonGroup_C.Set Selection To Index
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
//		int                                                Index                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWBP_SettingsRadioButtonGroup_C::Set_Selection_To_Index(int Index)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(45126);

	UWBP_SettingsRadioButtonGroup_C_Set_Selection_To_Index_Params params {};
	params.Index = Index;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_SettingsRadioButtonGroup.WBP_SettingsRadioButtonGroup_C.Get Dirty Index
//		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
//		int                                                Index                                                      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWBP_SettingsRadioButtonGroup_C::Get_Dirty_Index(int* Index)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(45125);

	UWBP_SettingsRadioButtonGroup_C_Get_Dirty_Index_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Index != nullptr)
		*Index = params.Index;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_SettingsRadioButtonGroup.WBP_SettingsRadioButtonGroup_C.Set Desired Index
//		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
//		int                                                Index                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		bool                                               Success                                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UWBP_SettingsRadioButtonGroup_C::Set_Desired_Index(int Index, bool* Success)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(45124);

	UWBP_SettingsRadioButtonGroup_C_Set_Desired_Index_Params params {};
	params.Index = Index;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Success != nullptr)
		*Success = params.Success;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_SettingsRadioButtonGroup.WBP_SettingsRadioButtonGroup_C.OnWidgetSettingsInfoSet
//		Flags  -> (Event, Protected, BlueprintEvent)
void UWBP_SettingsRadioButtonGroup_C::OnWidgetSettingsInfoSet()
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(45123);

	UWBP_SettingsRadioButtonGroup_C_OnWidgetSettingsInfoSet_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_SettingsRadioButtonGroup.WBP_SettingsRadioButtonGroup_C.On Radio Button Clicked
//		Flags  -> (BlueprintCallable, BlueprintEvent)
// Parameters:
//		class UWBP_SettingsRadio_C*                        Radio_Button                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWBP_SettingsRadioButtonGroup_C::On_Radio_Button_Clicked(class UWBP_SettingsRadio_C* Radio_Button)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(45122);

	UWBP_SettingsRadioButtonGroup_C_On_Radio_Button_Clicked_Params params {};
	params.Radio_Button = Radio_Button;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_SettingsRadioButtonGroup.WBP_SettingsRadioButtonGroup_C.On Setting Value Changed
//		Flags  -> (BlueprintCallable, BlueprintEvent)
// Parameters:
//		bool                                               bChangedExternally                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UWBP_SettingsRadioButtonGroup_C::On_Setting_Value_Changed(bool bChangedExternally)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(45121);

	UWBP_SettingsRadioButtonGroup_C_On_Setting_Value_Changed_Params params {};
	params.bChangedExternally = bChangedExternally;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_SettingsRadioButtonGroup.WBP_SettingsRadioButtonGroup_C.GamepadHover
//		Flags  -> (Event, Public, BlueprintEvent)
void UWBP_SettingsRadioButtonGroup_C::GamepadHover()
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(45120);

	UWBP_SettingsRadioButtonGroup_C_GamepadHover_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_SettingsRadioButtonGroup.WBP_SettingsRadioButtonGroup_C.InitializeWidgetNavigation
//		Flags  -> (Event, Public, BlueprintEvent)
void UWBP_SettingsRadioButtonGroup_C::InitializeWidgetNavigation()
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(45119);

	UWBP_SettingsRadioButtonGroup_C_InitializeWidgetNavigation_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_SettingsRadioButtonGroup.WBP_SettingsRadioButtonGroup_C.FocusGroupNavigateDownFailure
//		Flags  -> (Event, Public, BlueprintEvent)
// Parameters:
//		int                                                FocusGroup                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWBP_SettingsRadioButtonGroup_C::FocusGroupNavigateDownFailure(int FocusGroup)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(45118);

	UWBP_SettingsRadioButtonGroup_C_FocusGroupNavigateDownFailure_Params params {};
	params.FocusGroup = FocusGroup;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_SettingsRadioButtonGroup.WBP_SettingsRadioButtonGroup_C.FocusGroupNavigateUpFailure
//		Flags  -> (Event, Public, BlueprintEvent)
// Parameters:
//		int                                                FocusGroup                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWBP_SettingsRadioButtonGroup_C::FocusGroupNavigateUpFailure(int FocusGroup)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(45117);

	UWBP_SettingsRadioButtonGroup_C_FocusGroupNavigateUpFailure_Params params {};
	params.FocusGroup = FocusGroup;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_SettingsRadioButtonGroup.WBP_SettingsRadioButtonGroup_C.ExecuteUbergraph_WBP_SettingsRadioButtonGroup
//		Flags  -> (Final, HasDefaults)
// Parameters:
//		int                                                EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWBP_SettingsRadioButtonGroup_C::ExecuteUbergraph_WBP_SettingsRadioButtonGroup(int EntryPoint)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(45116);

	UWBP_SettingsRadioButtonGroup_C_ExecuteUbergraph_WBP_SettingsRadioButtonGroup_Params params {};
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
