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
//		Name   -> Function WBP_PlayerProfileScreen_AwardPanel.WBP_PlayerProfileScreen_AwardPanel_C.SetDisableState
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
//		bool                                               IsDisable                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UWBP_PlayerProfileScreen_AwardPanel_C::SetDisableState(bool IsDisable)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(87689);

	UWBP_PlayerProfileScreen_AwardPanel_C_SetDisableState_Params params {};
	params.IsDisable = IsDisable;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_PlayerProfileScreen_AwardPanel.WBP_PlayerProfileScreen_AwardPanel_C.NavigateConfirm
//		Flags  -> (Event, Protected, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
//		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
bool UWBP_PlayerProfileScreen_AwardPanel_C::NavigateConfirm()
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(87688);

	UWBP_PlayerProfileScreen_AwardPanel_C_NavigateConfirm_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_PlayerProfileScreen_AwardPanel.WBP_PlayerProfileScreen_AwardPanel_C.RefreshAwards
//		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
void UWBP_PlayerProfileScreen_AwardPanel_C::RefreshAwards()
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(87687);

	UWBP_PlayerProfileScreen_AwardPanel_C_RefreshAwards_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_PlayerProfileScreen_AwardPanel.WBP_PlayerProfileScreen_AwardPanel_C.PreConstruct
//		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
//		bool                                               IsDesignTime                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UWBP_PlayerProfileScreen_AwardPanel_C::PreConstruct(bool IsDesignTime)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(87686);

	UWBP_PlayerProfileScreen_AwardPanel_C_PreConstruct_Params params {};
	params.IsDesignTime = IsDesignTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_PlayerProfileScreen_AwardPanel.WBP_PlayerProfileScreen_AwardPanel_C.Construct
//		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
void UWBP_PlayerProfileScreen_AwardPanel_C::Construct()
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(87685);

	UWBP_PlayerProfileScreen_AwardPanel_C_Construct_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_PlayerProfileScreen_AwardPanel.WBP_PlayerProfileScreen_AwardPanel_C.GamepadHover
//		Flags  -> (Event, Public, BlueprintEvent)
void UWBP_PlayerProfileScreen_AwardPanel_C::GamepadHover()
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(87684);

	UWBP_PlayerProfileScreen_AwardPanel_C_GamepadHover_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_PlayerProfileScreen_AwardPanel.WBP_PlayerProfileScreen_AwardPanel_C.GamepadUnhover
//		Flags  -> (Event, Public, BlueprintEvent)
void UWBP_PlayerProfileScreen_AwardPanel_C::GamepadUnhover()
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(87683);

	UWBP_PlayerProfileScreen_AwardPanel_C_GamepadUnhover_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_PlayerProfileScreen_AwardPanel.WBP_PlayerProfileScreen_AwardPanel_C.ExecuteUbergraph_WBP_PlayerProfileScreen_AwardPanel
//		Flags  -> (Final, HasDefaults)
// Parameters:
//		int                                                EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWBP_PlayerProfileScreen_AwardPanel_C::ExecuteUbergraph_WBP_PlayerProfileScreen_AwardPanel(int EntryPoint)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(87682);

	UWBP_PlayerProfileScreen_AwardPanel_C_ExecuteUbergraph_WBP_PlayerProfileScreen_AwardPanel_Params params {};
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
