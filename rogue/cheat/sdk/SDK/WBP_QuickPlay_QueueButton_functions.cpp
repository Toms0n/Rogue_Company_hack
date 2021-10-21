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
//		Name   -> Function WBP_QuickPlay_QueueButton.WBP_QuickPlay_QueueButton_C.UpdateStatus
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
void UWBP_QuickPlay_QueueButton_C::UpdateStatus()
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(71621);

	UWBP_QuickPlay_QueueButton_C_UpdateStatus_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_QuickPlay_QueueButton.WBP_QuickPlay_QueueButton_C.NavigateConfirm
//		Flags  -> (Event, Protected, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
//		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
bool UWBP_QuickPlay_QueueButton_C::NavigateConfirm()
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(71620);

	UWBP_QuickPlay_QueueButton_C_NavigateConfirm_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_QuickPlay_QueueButton.WBP_QuickPlay_QueueButton_C.BndEvt__WBP_Graphic_Button_K2Node_ComponentBoundEvent_0_OnGraphicBtnClicked__DelegateSignature
//		Flags  -> (BlueprintEvent)
void UWBP_QuickPlay_QueueButton_C::BndEvt__WBP_Graphic_Button_K2Node_ComponentBoundEvent_0_OnGraphicBtnClicked__DelegateSignature()
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(71619);

	UWBP_QuickPlay_QueueButton_C_BndEvt__WBP_Graphic_Button_K2Node_ComponentBoundEvent_0_OnGraphicBtnClicked__DelegateSignature_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_QuickPlay_QueueButton.WBP_QuickPlay_QueueButton_C.BndEvt__WBP_Graphic_Button_K2Node_ComponentBoundEvent_1_OnGraphicBtnHovered__DelegateSignature
//		Flags  -> (BlueprintEvent)
// Parameters:
//		bool                                               IsGamepad                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UWBP_QuickPlay_QueueButton_C::BndEvt__WBP_Graphic_Button_K2Node_ComponentBoundEvent_1_OnGraphicBtnHovered__DelegateSignature(bool IsGamepad)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(71618);

	UWBP_QuickPlay_QueueButton_C_BndEvt__WBP_Graphic_Button_K2Node_ComponentBoundEvent_1_OnGraphicBtnHovered__DelegateSignature_Params params {};
	params.IsGamepad = IsGamepad;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_QuickPlay_QueueButton.WBP_QuickPlay_QueueButton_C.BndEvt__WBP_Graphic_Button_K2Node_ComponentBoundEvent_2_OnGraphicBtnUnhovered__DelegateSignature
//		Flags  -> (BlueprintEvent)
void UWBP_QuickPlay_QueueButton_C::BndEvt__WBP_Graphic_Button_K2Node_ComponentBoundEvent_2_OnGraphicBtnUnhovered__DelegateSignature()
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(71617);

	UWBP_QuickPlay_QueueButton_C_BndEvt__WBP_Graphic_Button_K2Node_ComponentBoundEvent_2_OnGraphicBtnUnhovered__DelegateSignature_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_QuickPlay_QueueButton.WBP_QuickPlay_QueueButton_C.InitializeWidget
//		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
//		class APUMG_HUD*                                   HUD                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWBP_QuickPlay_QueueButton_C::InitializeWidget(class APUMG_HUD* HUD)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(71616);

	UWBP_QuickPlay_QueueButton_C_InitializeWidget_Params params {};
	params.HUD = HUD;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_QuickPlay_QueueButton.WBP_QuickPlay_QueueButton_C.Construct
//		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
void UWBP_QuickPlay_QueueButton_C::Construct()
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(71615);

	UWBP_QuickPlay_QueueButton_C_Construct_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_QuickPlay_QueueButton.WBP_QuickPlay_QueueButton_C.OnButtonHovered
//		Flags  -> (BlueprintCallable, BlueprintEvent)
void UWBP_QuickPlay_QueueButton_C::OnButtonHovered()
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(71614);

	UWBP_QuickPlay_QueueButton_C_OnButtonHovered_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_QuickPlay_QueueButton.WBP_QuickPlay_QueueButton_C.OnButtonUnhovered
//		Flags  -> (BlueprintCallable, BlueprintEvent)
void UWBP_QuickPlay_QueueButton_C::OnButtonUnhovered()
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(71613);

	UWBP_QuickPlay_QueueButton_C_OnButtonUnhovered_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_QuickPlay_QueueButton.WBP_QuickPlay_QueueButton_C.GamepadHover
//		Flags  -> (Event, Public, BlueprintEvent)
void UWBP_QuickPlay_QueueButton_C::GamepadHover()
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(71612);

	UWBP_QuickPlay_QueueButton_C_GamepadHover_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_QuickPlay_QueueButton.WBP_QuickPlay_QueueButton_C.GamepadUnhover
//		Flags  -> (Event, Public, BlueprintEvent)
void UWBP_QuickPlay_QueueButton_C::GamepadUnhover()
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(71611);

	UWBP_QuickPlay_QueueButton_C_GamepadUnhover_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_QuickPlay_QueueButton.WBP_QuickPlay_QueueButton_C.GamepadConfirm
//		Flags  -> (BlueprintCallable, BlueprintEvent)
void UWBP_QuickPlay_QueueButton_C::GamepadConfirm()
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(71610);

	UWBP_QuickPlay_QueueButton_C_GamepadConfirm_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_QuickPlay_QueueButton.WBP_QuickPlay_QueueButton_C.SetButtonActive
//		Flags  -> (BlueprintCallable, BlueprintEvent)
// Parameters:
//		bool                                               bIsActive                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UWBP_QuickPlay_QueueButton_C::SetButtonActive(bool bIsActive)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(71609);

	UWBP_QuickPlay_QueueButton_C_SetButtonActive_Params params {};
	params.bIsActive = bIsActive;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_QuickPlay_QueueButton.WBP_QuickPlay_QueueButton_C.PreConstruct
//		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
//		bool                                               IsDesignTime                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UWBP_QuickPlay_QueueButton_C::PreConstruct(bool IsDesignTime)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(71608);

	UWBP_QuickPlay_QueueButton_C_PreConstruct_Params params {};
	params.IsDesignTime = IsDesignTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_QuickPlay_QueueButton.WBP_QuickPlay_QueueButton_C.ExecuteUbergraph_WBP_QuickPlay_QueueButton
//		Flags  -> (Final, HasDefaults)
// Parameters:
//		int                                                EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWBP_QuickPlay_QueueButton_C::ExecuteUbergraph_WBP_QuickPlay_QueueButton(int EntryPoint)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(71607);

	UWBP_QuickPlay_QueueButton_C_ExecuteUbergraph_WBP_QuickPlay_QueueButton_Params params {};
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_QuickPlay_QueueButton.WBP_QuickPlay_QueueButton_C.OnQueueBtnUnhovered__DelegateSignature
//		Flags  -> (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
//		class UWidget*                                     UnhoverWidget                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWBP_QuickPlay_QueueButton_C::OnQueueBtnUnhovered__DelegateSignature(class UWidget* UnhoverWidget)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(71606);

	UWBP_QuickPlay_QueueButton_C_OnQueueBtnUnhovered__DelegateSignature_Params params {};
	params.UnhoverWidget = UnhoverWidget;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_QuickPlay_QueueButton.WBP_QuickPlay_QueueButton_C.OnQueueBtnHovered__DelegateSignature
//		Flags  -> (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
//		class UWidget*                                     HoveredWidget                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWBP_QuickPlay_QueueButton_C::OnQueueBtnHovered__DelegateSignature(class UWidget* HoveredWidget)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(71605);

	UWBP_QuickPlay_QueueButton_C_OnQueueBtnHovered__DelegateSignature_Params params {};
	params.HoveredWidget = HoveredWidget;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_QuickPlay_QueueButton.WBP_QuickPlay_QueueButton_C.OnQueueBtnClicked__DelegateSignature
//		Flags  -> (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
//		int                                                QueueId                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWBP_QuickPlay_QueueButton_C::OnQueueBtnClicked__DelegateSignature(int QueueId)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(71604);

	UWBP_QuickPlay_QueueButton_C_OnQueueBtnClicked__DelegateSignature_Params params {};
	params.QueueId = QueueId;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
