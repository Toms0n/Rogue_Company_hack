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
//		Name   -> Function WBP_PlayerProfileScreen_StatPanel.WBP_PlayerProfileScreen_StatPanel_C.SetDisableState
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
//		bool                                               IsDisabled                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UWBP_PlayerProfileScreen_StatPanel_C::SetDisableState(bool IsDisabled)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(87644);

	UWBP_PlayerProfileScreen_StatPanel_C_SetDisableState_Params params {};
	params.IsDisabled = IsDisabled;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_PlayerProfileScreen_StatPanel.WBP_PlayerProfileScreen_StatPanel_C.NavigateConfirm
//		Flags  -> (Event, Protected, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
//		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
bool UWBP_PlayerProfileScreen_StatPanel_C::NavigateConfirm()
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(87643);

	UWBP_PlayerProfileScreen_StatPanel_C_NavigateConfirm_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_PlayerProfileScreen_StatPanel.WBP_PlayerProfileScreen_StatPanel_C.RefreshStats
//		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
void UWBP_PlayerProfileScreen_StatPanel_C::RefreshStats()
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(87642);

	UWBP_PlayerProfileScreen_StatPanel_C_RefreshStats_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_PlayerProfileScreen_StatPanel.WBP_PlayerProfileScreen_StatPanel_C.PreConstruct
//		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
//		bool                                               IsDesignTime                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UWBP_PlayerProfileScreen_StatPanel_C::PreConstruct(bool IsDesignTime)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(87641);

	UWBP_PlayerProfileScreen_StatPanel_C_PreConstruct_Params params {};
	params.IsDesignTime = IsDesignTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_PlayerProfileScreen_StatPanel.WBP_PlayerProfileScreen_StatPanel_C.Construct
//		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
void UWBP_PlayerProfileScreen_StatPanel_C::Construct()
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(87640);

	UWBP_PlayerProfileScreen_StatPanel_C_Construct_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_PlayerProfileScreen_StatPanel.WBP_PlayerProfileScreen_StatPanel_C.GamepadHover
//		Flags  -> (Event, Public, BlueprintEvent)
void UWBP_PlayerProfileScreen_StatPanel_C::GamepadHover()
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(87639);

	UWBP_PlayerProfileScreen_StatPanel_C_GamepadHover_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_PlayerProfileScreen_StatPanel.WBP_PlayerProfileScreen_StatPanel_C.GamepadUnhover
//		Flags  -> (Event, Public, BlueprintEvent)
void UWBP_PlayerProfileScreen_StatPanel_C::GamepadUnhover()
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(87638);

	UWBP_PlayerProfileScreen_StatPanel_C_GamepadUnhover_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_PlayerProfileScreen_StatPanel.WBP_PlayerProfileScreen_StatPanel_C.OnActivityInstanceChanged
//		Flags  -> (BlueprintCallable, BlueprintEvent)
// Parameters:
//		bool                                               IsLoaded                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UWBP_PlayerProfileScreen_StatPanel_C::OnActivityInstanceChanged(bool IsLoaded)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(87637);

	UWBP_PlayerProfileScreen_StatPanel_C_OnActivityInstanceChanged_Params params {};
	params.IsLoaded = IsLoaded;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_PlayerProfileScreen_StatPanel.WBP_PlayerProfileScreen_StatPanel_C.ExecuteUbergraph_WBP_PlayerProfileScreen_StatPanel
//		Flags  -> (Final, HasDefaults)
// Parameters:
//		int                                                EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWBP_PlayerProfileScreen_StatPanel_C::ExecuteUbergraph_WBP_PlayerProfileScreen_StatPanel(int EntryPoint)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(87636);

	UWBP_PlayerProfileScreen_StatPanel_C_ExecuteUbergraph_WBP_PlayerProfileScreen_StatPanel_Params params {};
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
