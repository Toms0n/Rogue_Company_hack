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
//		Name   -> Function WBP_LeaveParty.WBP_LeaveParty_C.NavigateConfirm
//		Flags  -> (Event, Protected, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
//		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
bool UWBP_LeaveParty_C::NavigateConfirm()
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(70868);

	UWBP_LeaveParty_C_NavigateConfirm_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_LeaveParty.WBP_LeaveParty_C.HandleInputStateChanged
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
//		TEnumAsByte<PlatformGameFramework_EPGAME_INPUT_STATE> CurrentInputState                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWBP_LeaveParty_C::HandleInputStateChanged(TEnumAsByte<PlatformGameFramework_EPGAME_INPUT_STATE> CurrentInputState)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(70867);

	UWBP_LeaveParty_C_HandleInputStateChanged_Params params {};
	params.CurrentInputState = CurrentInputState;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_LeaveParty.WBP_LeaveParty_C.SocialLeavePartyHoverSFX
//		Flags  -> (BlueprintCallable, BlueprintEvent)
void UWBP_LeaveParty_C::SocialLeavePartyHoverSFX()
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(70866);

	UWBP_LeaveParty_C_SocialLeavePartyHoverSFX_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_LeaveParty.WBP_LeaveParty_C.SocialLeavePartyClickSFX
//		Flags  -> (BlueprintCallable, BlueprintEvent)
void UWBP_LeaveParty_C::SocialLeavePartyClickSFX()
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(70865);

	UWBP_LeaveParty_C_SocialLeavePartyClickSFX_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_LeaveParty.WBP_LeaveParty_C.InitializeWidget
//		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
//		class APUMG_HUD*                                   HUD                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWBP_LeaveParty_C::InitializeWidget(class APUMG_HUD* HUD)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(70864);

	UWBP_LeaveParty_C_InitializeWidget_Params params {};
	params.HUD = HUD;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_LeaveParty.WBP_LeaveParty_C.HandlePartyUpdated
//		Flags  -> (BlueprintCallable, BlueprintEvent)
void UWBP_LeaveParty_C::HandlePartyUpdated()
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(70863);

	UWBP_LeaveParty_C_HandlePartyUpdated_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_LeaveParty.WBP_LeaveParty_C.CallLeaveParty
//		Flags  -> (BlueprintCallable, BlueprintEvent)
void UWBP_LeaveParty_C::CallLeaveParty()
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(70862);

	UWBP_LeaveParty_C_CallLeaveParty_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_LeaveParty.WBP_LeaveParty_C.BndEvt__Button_101_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
//		Flags  -> (BlueprintEvent)
void UWBP_LeaveParty_C::BndEvt__Button_101_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature()
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(70861);

	UWBP_LeaveParty_C_BndEvt__Button_101_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_LeaveParty.WBP_LeaveParty_C.BndEvt__Button_101_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature
//		Flags  -> (BlueprintEvent)
void UWBP_LeaveParty_C::BndEvt__Button_101_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature()
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(70860);

	UWBP_LeaveParty_C_BndEvt__Button_101_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_LeaveParty.WBP_LeaveParty_C.BndEvt__Button_101_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature
//		Flags  -> (BlueprintEvent)
void UWBP_LeaveParty_C::BndEvt__Button_101_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature()
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(70859);

	UWBP_LeaveParty_C_BndEvt__Button_101_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_LeaveParty.WBP_LeaveParty_C.GamepadHover
//		Flags  -> (Event, Public, BlueprintEvent)
void UWBP_LeaveParty_C::GamepadHover()
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(70858);

	UWBP_LeaveParty_C_GamepadHover_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_LeaveParty.WBP_LeaveParty_C.GamepadUnhover
//		Flags  -> (Event, Public, BlueprintEvent)
void UWBP_LeaveParty_C::GamepadUnhover()
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(70857);

	UWBP_LeaveParty_C_GamepadUnhover_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_LeaveParty.WBP_LeaveParty_C.ExecuteUbergraph_WBP_LeaveParty
//		Flags  -> (Final, HasDefaults)
// Parameters:
//		int                                                EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWBP_LeaveParty_C::ExecuteUbergraph_WBP_LeaveParty(int EntryPoint)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(70856);

	UWBP_LeaveParty_C_ExecuteUbergraph_WBP_LeaveParty_Params params {};
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_LeaveParty.WBP_LeaveParty_C.OnPartyLeaveVisibilityChange__DelegateSignature
//		Flags  -> (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
//		bool                                               Visible                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UWBP_LeaveParty_C::OnPartyLeaveVisibilityChange__DelegateSignature(bool Visible)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(70855);

	UWBP_LeaveParty_C_OnPartyLeaveVisibilityChange__DelegateSignature_Params params {};
	params.Visible = Visible;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
