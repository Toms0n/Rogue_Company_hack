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
//		Name   -> Function WBP_NavBar.WBP_NavBar_C.ClearIndeces
//		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
void UWBP_NavBar_C::ClearIndeces()
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(229771);

	UWBP_NavBar_C_ClearIndeces_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_NavBar.WBP_NavBar_C.GetActiveIndex
//		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
//		int                                                Index                                                      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWBP_NavBar_C::GetActiveIndex(int* Index)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(229770);

	UWBP_NavBar_C_GetActiveIndex_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Index != nullptr)
		*Index = params.Index;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_NavBar.WBP_NavBar_C.HandleNavRightFromIndex
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
//		int                                                PreviousIndex                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWBP_NavBar_C::HandleNavRightFromIndex(int PreviousIndex)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(229769);

	UWBP_NavBar_C_HandleNavRightFromIndex_Params params {};
	params.PreviousIndex = PreviousIndex;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_NavBar.WBP_NavBar_C.HandleNavLeftFromIndex
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
//		int                                                PreviousIndex                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWBP_NavBar_C::HandleNavLeftFromIndex(int PreviousIndex)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(229768);

	UWBP_NavBar_C_HandleNavLeftFromIndex_Params params {};
	params.PreviousIndex = PreviousIndex;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_NavBar.WBP_NavBar_C.HandleInput
//		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
//		struct FKey                                        InKey                                                      (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
//		bool                                               Handled                                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UWBP_NavBar_C::HandleInput(const struct FKey& InKey, bool* Handled)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(229767);

	UWBP_NavBar_C_HandleInput_Params params {};
	params.InKey = InKey;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Handled != nullptr)
		*Handled = params.Handled;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_NavBar.WBP_NavBar_C.OnKeyUp
//		Flags  -> (BlueprintCosmetic, Event, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
//		struct FGeometry                                   MyGeometry                                                 (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
//		struct FKeyEvent                                   InKeyEvent                                                 (BlueprintVisible, BlueprintReadOnly, Parm)
//		struct FEventReply                                 ReturnValue                                                (Parm, OutParm, ReturnParm)
struct FEventReply UWBP_NavBar_C::OnKeyUp(const struct FGeometry& MyGeometry, const struct FKeyEvent& InKeyEvent)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(229766);

	UWBP_NavBar_C_OnKeyUp_Params params {};
	params.MyGeometry = MyGeometry;
	params.InKeyEvent = InKeyEvent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_NavBar.WBP_NavBar_C.SetButtonIndexActive
//		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
//		int                                                ButtonIndex                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWBP_NavBar_C::SetButtonIndexActive(int ButtonIndex)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(229765);

	UWBP_NavBar_C_SetButtonIndexActive_Params params {};
	params.ButtonIndex = ButtonIndex;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_NavBar.WBP_NavBar_C.HandleNavRight
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
void UWBP_NavBar_C::HandleNavRight()
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(229764);

	UWBP_NavBar_C_HandleNavRight_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_NavBar.WBP_NavBar_C.HandleNavLeft
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
void UWBP_NavBar_C::HandleNavLeft()
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(229763);

	UWBP_NavBar_C_HandleNavLeft_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_NavBar.WBP_NavBar_C.HandleInputStateChanged
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
//		TEnumAsByte<PlatformGameFramework_EPGAME_INPUT_STATE> InputState                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWBP_NavBar_C::HandleInputStateChanged(TEnumAsByte<PlatformGameFramework_EPGAME_INPUT_STATE> InputState)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(229762);

	UWBP_NavBar_C_HandleInputStateChanged_Params params {};
	params.InputState = InputState;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_NavBar.WBP_NavBar_C.SetupGamepadCallouts
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
void UWBP_NavBar_C::SetupGamepadCallouts()
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(229761);

	UWBP_NavBar_C_SetupGamepadCallouts_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_NavBar.WBP_NavBar_C.SetNavButtons
//		Flags  -> (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
//		TArray<struct FNavButtonData>                      Buttons                                                    (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, ContainsInstancedReference, HasGetValueTypeHash)
void UWBP_NavBar_C::SetNavButtons(TArray<struct FNavButtonData>* Buttons)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(229760);

	UWBP_NavBar_C_SetNavButtons_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Buttons != nullptr)
		*Buttons = params.Buttons;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_NavBar.WBP_NavBar_C.Construct
//		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
void UWBP_NavBar_C::Construct()
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(229759);

	UWBP_NavBar_C_Construct_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_NavBar.WBP_NavBar_C.OnButtonClicked
//		Flags  -> (BlueprintCallable, BlueprintEvent)
// Parameters:
//		class UKSWidget*                                   ButtonClicked                                              (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWBP_NavBar_C::OnButtonClicked(class UKSWidget* ButtonClicked)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(229758);

	UWBP_NavBar_C_OnButtonClicked_Params params {};
	params.ButtonClicked = ButtonClicked;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_NavBar.WBP_NavBar_C.InitializeWidget
//		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
//		class APUMG_HUD*                                   HUD                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWBP_NavBar_C::InitializeWidget(class APUMG_HUD* HUD)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(229757);

	UWBP_NavBar_C_InitializeWidget_Params params {};
	params.HUD = HUD;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_NavBar.WBP_NavBar_C.ExecuteUbergraph_WBP_NavBar
//		Flags  -> (Final, HasDefaults)
// Parameters:
//		int                                                EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWBP_NavBar_C::ExecuteUbergraph_WBP_NavBar(int EntryPoint)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(229756);

	UWBP_NavBar_C_ExecuteUbergraph_WBP_NavBar_Params params {};
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_NavBar.WBP_NavBar_C.OnButtonsCreated__DelegateSignature
//		Flags  -> (Public, Delegate, BlueprintCallable, BlueprintEvent)
void UWBP_NavBar_C::OnButtonsCreated__DelegateSignature()
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(229755);

	UWBP_NavBar_C_OnButtonsCreated__DelegateSignature_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_NavBar.WBP_NavBar_C.OnButtonSelected__DelegateSignature
//		Flags  -> (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
//		int                                                ButtonIndex                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWBP_NavBar_C::OnButtonSelected__DelegateSignature(int ButtonIndex)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(86719);

	UWBP_NavBar_C_OnButtonSelected__DelegateSignature_Params params {};
	params.ButtonIndex = ButtonIndex;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
