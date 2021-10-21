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
//		Name   -> Function WBP_EquipAllPopup.WBP_EquipAllPopup_C.NavigateBack
//		Flags  -> (Event, Protected, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
//		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
bool UWBP_EquipAllPopup_C::NavigateBack()
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(63433);

	UWBP_EquipAllPopup_C_NavigateBack_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_EquipAllPopup.WBP_EquipAllPopup_C.OnShown
//		Flags  -> (Event, Public, BlueprintEvent)
void UWBP_EquipAllPopup_C::OnShown()
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(63432);

	UWBP_EquipAllPopup_C_OnShown_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_EquipAllPopup.WBP_EquipAllPopup_C.InitializeWidgetNavigation
//		Flags  -> (Event, Public, BlueprintEvent)
void UWBP_EquipAllPopup_C::InitializeWidgetNavigation()
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(63431);

	UWBP_EquipAllPopup_C_InitializeWidgetNavigation_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_EquipAllPopup.WBP_EquipAllPopup_C.BndEvt__AcceptEquipAll_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature
//		Flags  -> (BlueprintEvent)
// Parameters:
//		class UWidget*                                     Widget                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWBP_EquipAllPopup_C::BndEvt__AcceptEquipAll_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature(class UWidget* Widget)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(63430);

	UWBP_EquipAllPopup_C_BndEvt__AcceptEquipAll_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature_Params params {};
	params.Widget = Widget;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_EquipAllPopup.WBP_EquipAllPopup_C.BndEvt__CancelEquipAll_K2Node_ComponentBoundEvent_1_OnClicked__DelegateSignature
//		Flags  -> (BlueprintEvent)
// Parameters:
//		class UWidget*                                     Widget                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWBP_EquipAllPopup_C::BndEvt__CancelEquipAll_K2Node_ComponentBoundEvent_1_OnClicked__DelegateSignature(class UWidget* Widget)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(63429);

	UWBP_EquipAllPopup_C_BndEvt__CancelEquipAll_K2Node_ComponentBoundEvent_1_OnClicked__DelegateSignature_Params params {};
	params.Widget = Widget;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_EquipAllPopup.WBP_EquipAllPopup_C.On Close Button Clicked
//		Flags  -> (BlueprintCallable, BlueprintEvent)
void UWBP_EquipAllPopup_C::On_Close_Button_Clicked()
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(63428);

	UWBP_EquipAllPopup_C_On_Close_Button_Clicked_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_EquipAllPopup.WBP_EquipAllPopup_C.OnInitialized
//		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
void UWBP_EquipAllPopup_C::OnInitialized()
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(63427);

	UWBP_EquipAllPopup_C_OnInitialized_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_EquipAllPopup.WBP_EquipAllPopup_C.ExecuteUbergraph_WBP_EquipAllPopup
//		Flags  -> (Final, HasDefaults)
// Parameters:
//		int                                                EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWBP_EquipAllPopup_C::ExecuteUbergraph_WBP_EquipAllPopup(int EntryPoint)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(63426);

	UWBP_EquipAllPopup_C_ExecuteUbergraph_WBP_EquipAllPopup_Params params {};
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
