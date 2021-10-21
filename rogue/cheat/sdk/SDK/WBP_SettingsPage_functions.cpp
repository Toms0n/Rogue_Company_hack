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
//		Name   -> Function WBP_SettingsPage.WBP_SettingsPage_C.GetScrollBox
//		Flags  -> (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
//		class UScrollBox*                                  ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
class UScrollBox* UWBP_SettingsPage_C::GetScrollBox()
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(60146);

	UWBP_SettingsPage_C_GetScrollBox_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_SettingsPage.WBP_SettingsPage_C.Add Settings Section Widget
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
//		class UKSSettingsSection*                          Selection_Widget                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWBP_SettingsPage_C::Add_Settings_Section_Widget(class UKSSettingsSection* Selection_Widget)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(60145);

	UWBP_SettingsPage_C_Add_Settings_Section_Widget_Params params {};
	params.Selection_Widget = Selection_Widget;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_SettingsPage.WBP_SettingsPage_C.InitializeTickAnimations
//		Flags  -> (Event, Protected, BlueprintEvent)
void UWBP_SettingsPage_C::InitializeTickAnimations()
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(60144);

	UWBP_SettingsPage_C_InitializeTickAnimations_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_SettingsPage.WBP_SettingsPage_C.HandleShowPageAnimFinished
//		Flags  -> (BlueprintCallable, BlueprintEvent)
void UWBP_SettingsPage_C::HandleShowPageAnimFinished()
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(60143);

	UWBP_SettingsPage_C_HandleShowPageAnimFinished_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_SettingsPage.WBP_SettingsPage_C.HandleShowPageAnimUpdated
//		Flags  -> (BlueprintCallable, BlueprintEvent)
// Parameters:
//		float                                              ElapsedTime                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		float                                              ElapsedAlpha                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWBP_SettingsPage_C::HandleShowPageAnimUpdated(float ElapsedTime, float ElapsedAlpha)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(60142);

	UWBP_SettingsPage_C_HandleShowPageAnimUpdated_Params params {};
	params.ElapsedTime = ElapsedTime;
	params.ElapsedAlpha = ElapsedAlpha;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_SettingsPage.WBP_SettingsPage_C.HandleHidePageAnimFinished
//		Flags  -> (BlueprintCallable, BlueprintEvent)
void UWBP_SettingsPage_C::HandleHidePageAnimFinished()
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(60141);

	UWBP_SettingsPage_C_HandleHidePageAnimFinished_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_SettingsPage.WBP_SettingsPage_C.HandleHidePageAnimUpdated
//		Flags  -> (BlueprintCallable, BlueprintEvent)
// Parameters:
//		float                                              ElapsedTime                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		float                                              ElapsedAlpha                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWBP_SettingsPage_C::HandleHidePageAnimUpdated(float ElapsedTime, float ElapsedAlpha)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(60140);

	UWBP_SettingsPage_C_HandleHidePageAnimUpdated_Params params {};
	params.ElapsedTime = ElapsedTime;
	params.ElapsedAlpha = ElapsedAlpha;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_SettingsPage.WBP_SettingsPage_C.PlayShowPageAnim
//		Flags  -> (BlueprintCallable, BlueprintEvent)
void UWBP_SettingsPage_C::PlayShowPageAnim()
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(60139);

	UWBP_SettingsPage_C_PlayShowPageAnim_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_SettingsPage.WBP_SettingsPage_C.PlayHidePageAnim
//		Flags  -> (BlueprintCallable, BlueprintEvent)
void UWBP_SettingsPage_C::PlayHidePageAnim()
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(60138);

	UWBP_SettingsPage_C_PlayHidePageAnim_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_SettingsPage.WBP_SettingsPage_C.SetInitPageState
//		Flags  -> (BlueprintCallable, BlueprintEvent)
void UWBP_SettingsPage_C::SetInitPageState()
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(60137);

	UWBP_SettingsPage_C_SetInitPageState_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_SettingsPage.WBP_SettingsPage_C.Construct
//		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
void UWBP_SettingsPage_C::Construct()
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(60136);

	UWBP_SettingsPage_C_Construct_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_SettingsPage.WBP_SettingsPage_C.AddSettingsSectionWidget
//		Flags  -> (Event, Protected, BlueprintEvent)
// Parameters:
//		class UKSSettingsSection*                          SettingsSection                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWBP_SettingsPage_C::AddSettingsSectionWidget(class UKSSettingsSection* SettingsSection)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(60135);

	UWBP_SettingsPage_C_AddSettingsSectionWidget_Params params {};
	params.SettingsSection = SettingsSection;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_SettingsPage.WBP_SettingsPage_C.ExecuteUbergraph_WBP_SettingsPage
//		Flags  -> (Final)
// Parameters:
//		int                                                EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWBP_SettingsPage_C::ExecuteUbergraph_WBP_SettingsPage(int EntryPoint)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(60134);

	UWBP_SettingsPage_C_ExecuteUbergraph_WBP_SettingsPage_Params params {};
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
