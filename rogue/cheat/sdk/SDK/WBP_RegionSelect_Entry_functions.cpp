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
//		Name   -> Function WBP_RegionSelect_Entry.WBP_RegionSelect_Entry_C.ShowPreferredSiteIcon
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
//		bool                                               IsPreferredSite                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UWBP_RegionSelect_Entry_C::ShowPreferredSiteIcon(bool IsPreferredSite)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(71573);

	UWBP_RegionSelect_Entry_C_ShowPreferredSiteIcon_Params params {};
	params.IsPreferredSite = IsPreferredSite;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_RegionSelect_Entry.WBP_RegionSelect_Entry_C.NavigateConfirm
//		Flags  -> (Event, Protected, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
//		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
bool UWBP_RegionSelect_Entry_C::NavigateConfirm()
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(71572);

	UWBP_RegionSelect_Entry_C_NavigateConfirm_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_RegionSelect_Entry.WBP_RegionSelect_Entry_C.PreConstruct
//		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
//		bool                                               IsDesignTime                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UWBP_RegionSelect_Entry_C::PreConstruct(bool IsDesignTime)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(71571);

	UWBP_RegionSelect_Entry_C_PreConstruct_Params params {};
	params.IsDesignTime = IsDesignTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_RegionSelect_Entry.WBP_RegionSelect_Entry_C.Construct
//		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
void UWBP_RegionSelect_Entry_C::Construct()
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(71570);

	UWBP_RegionSelect_Entry_C_Construct_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_RegionSelect_Entry.WBP_RegionSelect_Entry_C.BndEvt__Button_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature
//		Flags  -> (BlueprintEvent)
void UWBP_RegionSelect_Entry_C::BndEvt__Button_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature()
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(71569);

	UWBP_RegionSelect_Entry_C_BndEvt__Button_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_RegionSelect_Entry.WBP_RegionSelect_Entry_C.BndEvt__Button_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature
//		Flags  -> (BlueprintEvent)
void UWBP_RegionSelect_Entry_C::BndEvt__Button_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature()
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(71568);

	UWBP_RegionSelect_Entry_C_BndEvt__Button_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_RegionSelect_Entry.WBP_RegionSelect_Entry_C.BndEvt__Button_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature
//		Flags  -> (BlueprintEvent)
void UWBP_RegionSelect_Entry_C::BndEvt__Button_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature()
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(71567);

	UWBP_RegionSelect_Entry_C_BndEvt__Button_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_RegionSelect_Entry.WBP_RegionSelect_Entry_C.GamepadHover
//		Flags  -> (Event, Public, BlueprintEvent)
void UWBP_RegionSelect_Entry_C::GamepadHover()
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(71566);

	UWBP_RegionSelect_Entry_C_GamepadHover_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_RegionSelect_Entry.WBP_RegionSelect_Entry_C.GamepadUnhover
//		Flags  -> (Event, Public, BlueprintEvent)
void UWBP_RegionSelect_Entry_C::GamepadUnhover()
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(71565);

	UWBP_RegionSelect_Entry_C_GamepadUnhover_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_RegionSelect_Entry.WBP_RegionSelect_Entry_C.OnGamepadConfirm
//		Flags  -> (BlueprintCallable, BlueprintEvent)
void UWBP_RegionSelect_Entry_C::OnGamepadConfirm()
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(71564);

	UWBP_RegionSelect_Entry_C_OnGamepadConfirm_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_RegionSelect_Entry.WBP_RegionSelect_Entry_C.ExecuteUbergraph_WBP_RegionSelect_Entry
//		Flags  -> (Final, HasDefaults)
// Parameters:
//		int                                                EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWBP_RegionSelect_Entry_C::ExecuteUbergraph_WBP_RegionSelect_Entry(int EntryPoint)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(71563);

	UWBP_RegionSelect_Entry_C_ExecuteUbergraph_WBP_RegionSelect_Entry_Params params {};
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_RegionSelect_Entry.WBP_RegionSelect_Entry_C.OnRegionSelected__DelegateSignature
//		Flags  -> (Public, Delegate, BlueprintCallable, BlueprintEvent)
void UWBP_RegionSelect_Entry_C::OnRegionSelected__DelegateSignature()
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(71562);

	UWBP_RegionSelect_Entry_C_OnRegionSelected__DelegateSignature_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
