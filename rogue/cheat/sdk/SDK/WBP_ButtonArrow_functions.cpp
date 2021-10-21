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
//		Name   -> Function WBP_ButtonArrow.WBP_ButtonArrow_C.OnHoveredLogic
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
//		bool                                               IsGamepad                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UWBP_ButtonArrow_C::OnHoveredLogic(bool IsGamepad)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(57497);

	UWBP_ButtonArrow_C_OnHoveredLogic_Params params {};
	params.IsGamepad = IsGamepad;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_ButtonArrow.WBP_ButtonArrow_C.NavigateConfirm
//		Flags  -> (Event, Protected, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
//		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
bool UWBP_ButtonArrow_C::NavigateConfirm()
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(57496);

	UWBP_ButtonArrow_C_NavigateConfirm_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_ButtonArrow.WBP_ButtonArrow_C.OnClickSound
//		Flags  -> (BlueprintCallable, BlueprintEvent)
void UWBP_ButtonArrow_C::OnClickSound()
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(57495);

	UWBP_ButtonArrow_C_OnClickSound_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_ButtonArrow.WBP_ButtonArrow_C.OnHoverSound
//		Flags  -> (BlueprintCallable, BlueprintEvent)
void UWBP_ButtonArrow_C::OnHoverSound()
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(57494);

	UWBP_ButtonArrow_C_OnHoverSound_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_ButtonArrow.WBP_ButtonArrow_C.Construct
//		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
void UWBP_ButtonArrow_C::Construct()
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(57493);

	UWBP_ButtonArrow_C_Construct_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_ButtonArrow.WBP_ButtonArrow_C.OnGamepadConfirmed
//		Flags  -> (BlueprintCallable, BlueprintEvent)
void UWBP_ButtonArrow_C::OnGamepadConfirmed()
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(57492);

	UWBP_ButtonArrow_C_OnGamepadConfirmed_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_ButtonArrow.WBP_ButtonArrow_C.BndEvt__HitTarget_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
//		Flags  -> (BlueprintEvent)
void UWBP_ButtonArrow_C::BndEvt__HitTarget_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature()
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(57491);

	UWBP_ButtonArrow_C_BndEvt__HitTarget_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_ButtonArrow.WBP_ButtonArrow_C.BndEvt__HitTarget_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature
//		Flags  -> (BlueprintEvent)
void UWBP_ButtonArrow_C::BndEvt__HitTarget_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature()
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(57490);

	UWBP_ButtonArrow_C_BndEvt__HitTarget_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_ButtonArrow.WBP_ButtonArrow_C.BndEvt__HitTarget_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature
//		Flags  -> (BlueprintEvent)
void UWBP_ButtonArrow_C::BndEvt__HitTarget_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature()
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(57489);

	UWBP_ButtonArrow_C_BndEvt__HitTarget_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_ButtonArrow.WBP_ButtonArrow_C.GamepadHover
//		Flags  -> (Event, Public, BlueprintEvent)
void UWBP_ButtonArrow_C::GamepadHover()
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(57488);

	UWBP_ButtonArrow_C_GamepadHover_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_ButtonArrow.WBP_ButtonArrow_C.GamepadUnhover
//		Flags  -> (Event, Public, BlueprintEvent)
void UWBP_ButtonArrow_C::GamepadUnhover()
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(57487);

	UWBP_ButtonArrow_C_GamepadUnhover_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_ButtonArrow.WBP_ButtonArrow_C.DisableButton
//		Flags  -> (BlueprintCallable, BlueprintEvent)
// Parameters:
//		bool                                               bShouldDisable                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UWBP_ButtonArrow_C::DisableButton(bool bShouldDisable)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(57486);

	UWBP_ButtonArrow_C_DisableButton_Params params {};
	params.bShouldDisable = bShouldDisable;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_ButtonArrow.WBP_ButtonArrow_C.CallButtonHover
//		Flags  -> (BlueprintCallable, BlueprintEvent)
void UWBP_ButtonArrow_C::CallButtonHover()
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(57485);

	UWBP_ButtonArrow_C_CallButtonHover_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_ButtonArrow.WBP_ButtonArrow_C.CallButtonUnhover
//		Flags  -> (BlueprintCallable, BlueprintEvent)
void UWBP_ButtonArrow_C::CallButtonUnhover()
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(57484);

	UWBP_ButtonArrow_C_CallButtonUnhover_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_ButtonArrow.WBP_ButtonArrow_C.PreConstruct
//		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
//		bool                                               IsDesignTime                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UWBP_ButtonArrow_C::PreConstruct(bool IsDesignTime)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(57483);

	UWBP_ButtonArrow_C_PreConstruct_Params params {};
	params.IsDesignTime = IsDesignTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_ButtonArrow.WBP_ButtonArrow_C.ExecuteUbergraph_WBP_ButtonArrow
//		Flags  -> (Final, HasDefaults)
// Parameters:
//		int                                                EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWBP_ButtonArrow_C::ExecuteUbergraph_WBP_ButtonArrow(int EntryPoint)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(57482);

	UWBP_ButtonArrow_C_ExecuteUbergraph_WBP_ButtonArrow_Params params {};
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_ButtonArrow.WBP_ButtonArrow_C.OnBtnUnhovered__DelegateSignature
//		Flags  -> (Public, Delegate, BlueprintCallable, BlueprintEvent)
void UWBP_ButtonArrow_C::OnBtnUnhovered__DelegateSignature()
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(57481);

	UWBP_ButtonArrow_C_OnBtnUnhovered__DelegateSignature_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_ButtonArrow.WBP_ButtonArrow_C.OnBtnHovered__DelegateSignature
//		Flags  -> (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
//		bool                                               IsGamepad                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UWBP_ButtonArrow_C::OnBtnHovered__DelegateSignature(bool IsGamepad)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(57480);

	UWBP_ButtonArrow_C_OnBtnHovered__DelegateSignature_Params params {};
	params.IsGamepad = IsGamepad;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_ButtonArrow.WBP_ButtonArrow_C.OnBtnClicked__DelegateSignature
//		Flags  -> (Public, Delegate, BlueprintCallable, BlueprintEvent)
void UWBP_ButtonArrow_C::OnBtnClicked__DelegateSignature()
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(57479);

	UWBP_ButtonArrow_C_OnBtnClicked__DelegateSignature_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
