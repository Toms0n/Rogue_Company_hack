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
//		Name   -> Function WBP_ActiveMissionPanel.WBP_ActiveMissionPanel_C.NavigateConfirm
//		Flags  -> (Event, Protected, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
//		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
bool UWBP_ActiveMissionPanel_C::NavigateConfirm()
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(218088);

	UWBP_ActiveMissionPanel_C_NavigateConfirm_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_ActiveMissionPanel.WBP_ActiveMissionPanel_C.RefreshDisplay
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
void UWBP_ActiveMissionPanel_C::RefreshDisplay()
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(218087);

	UWBP_ActiveMissionPanel_C_RefreshDisplay_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_ActiveMissionPanel.WBP_ActiveMissionPanel_C.OnMouseEnter
//		Flags  -> (BlueprintCosmetic, Event, Public, HasOutParms, BlueprintEvent)
// Parameters:
//		struct FGeometry                                   MyGeometry                                                 (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
//		struct FPointerEvent                               MouseEvent                                                 (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
void UWBP_ActiveMissionPanel_C::OnMouseEnter(const struct FGeometry& MyGeometry, const struct FPointerEvent& MouseEvent)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(218086);

	UWBP_ActiveMissionPanel_C_OnMouseEnter_Params params {};
	params.MyGeometry = MyGeometry;
	params.MouseEvent = MouseEvent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_ActiveMissionPanel.WBP_ActiveMissionPanel_C.BndEvt__HitTarget_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature
//		Flags  -> (BlueprintEvent)
void UWBP_ActiveMissionPanel_C::BndEvt__HitTarget_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature()
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(218085);

	UWBP_ActiveMissionPanel_C_BndEvt__HitTarget_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_ActiveMissionPanel.WBP_ActiveMissionPanel_C.BndEvt__HitTarget_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature
//		Flags  -> (BlueprintEvent)
void UWBP_ActiveMissionPanel_C::BndEvt__HitTarget_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature()
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(218084);

	UWBP_ActiveMissionPanel_C_BndEvt__HitTarget_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_ActiveMissionPanel.WBP_ActiveMissionPanel_C.BndEvt__MissionPanel_K2Node_ComponentBoundEvent_0_OnBtnClicked__DelegateSignature
//		Flags  -> (BlueprintEvent)
void UWBP_ActiveMissionPanel_C::BndEvt__MissionPanel_K2Node_ComponentBoundEvent_0_OnBtnClicked__DelegateSignature()
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(218083);

	UWBP_ActiveMissionPanel_C_BndEvt__MissionPanel_K2Node_ComponentBoundEvent_0_OnBtnClicked__DelegateSignature_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_ActiveMissionPanel.WBP_ActiveMissionPanel_C.Handle Input State Changed
//		Flags  -> (BlueprintCallable, BlueprintEvent)
// Parameters:
//		TEnumAsByte<PlatformGameFramework_EPGAME_INPUT_STATE> InputState                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWBP_ActiveMissionPanel_C::Handle_Input_State_Changed(TEnumAsByte<PlatformGameFramework_EPGAME_INPUT_STATE> InputState)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(218082);

	UWBP_ActiveMissionPanel_C_Handle_Input_State_Changed_Params params {};
	params.InputState = InputState;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_ActiveMissionPanel.WBP_ActiveMissionPanel_C.InitializeWidget
//		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
//		class APUMG_HUD*                                   HUD                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWBP_ActiveMissionPanel_C::InitializeWidget(class APUMG_HUD* HUD)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(218081);

	UWBP_ActiveMissionPanel_C_InitializeWidget_Params params {};
	params.HUD = HUD;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_ActiveMissionPanel.WBP_ActiveMissionPanel_C.GamepadHover
//		Flags  -> (Event, Public, BlueprintEvent)
void UWBP_ActiveMissionPanel_C::GamepadHover()
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(218080);

	UWBP_ActiveMissionPanel_C_GamepadHover_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_ActiveMissionPanel.WBP_ActiveMissionPanel_C.GamepadUnhover
//		Flags  -> (Event, Public, BlueprintEvent)
void UWBP_ActiveMissionPanel_C::GamepadUnhover()
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(218079);

	UWBP_ActiveMissionPanel_C_GamepadUnhover_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_ActiveMissionPanel.WBP_ActiveMissionPanel_C.ExecuteUbergraph_WBP_ActiveMissionPanel
//		Flags  -> (Final, HasDefaults)
// Parameters:
//		int                                                EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWBP_ActiveMissionPanel_C::ExecuteUbergraph_WBP_ActiveMissionPanel(int EntryPoint)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(218078);

	UWBP_ActiveMissionPanel_C_ExecuteUbergraph_WBP_ActiveMissionPanel_Params params {};
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_ActiveMissionPanel.WBP_ActiveMissionPanel_C.OnPanelClicked__DelegateSignature
//		Flags  -> (Public, Delegate, BlueprintCallable, BlueprintEvent)
void UWBP_ActiveMissionPanel_C::OnPanelClicked__DelegateSignature()
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(81932);

	UWBP_ActiveMissionPanel_C_OnPanelClicked__DelegateSignature_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
