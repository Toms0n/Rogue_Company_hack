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
//		Name   -> Function WBP_RegionSelect.WBP_RegionSelect_C.GetRegionSelectEntries
//		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
//		TArray<class UWBP_RegionSelect_Entry_C*>           RegionSelectEntries                                        (Parm, OutParm, ContainsInstancedReference, HasGetValueTypeHash)
void UWBP_RegionSelect_C::GetRegionSelectEntries(TArray<class UWBP_RegionSelect_Entry_C*>* RegionSelectEntries)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(62379);

	UWBP_RegionSelect_C_GetRegionSelectEntries_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (RegionSelectEntries != nullptr)
		*RegionSelectEntries = params.RegionSelectEntries;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_RegionSelect.WBP_RegionSelect_C.PreConstruct
//		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
//		bool                                               IsDesignTime                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UWBP_RegionSelect_C::PreConstruct(bool IsDesignTime)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(62378);

	UWBP_RegionSelect_C_PreConstruct_Params params {};
	params.IsDesignTime = IsDesignTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_RegionSelect.WBP_RegionSelect_C.Construct
//		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
void UWBP_RegionSelect_C::Construct()
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(62377);

	UWBP_RegionSelect_C_Construct_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_RegionSelect.WBP_RegionSelect_C.LoginState
//		Flags  -> (BlueprintCallable, BlueprintEvent)
// Parameters:
//		PlatformUMG_EPUMG_LoginState                       LoginState                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWBP_RegionSelect_C::LoginState(PlatformUMG_EPUMG_LoginState LoginState)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(62376);

	UWBP_RegionSelect_C_LoginState_Params params {};
	params.LoginState = LoginState;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_RegionSelect.WBP_RegionSelect_C.Populate Regions
//		Flags  -> (BlueprintCallable, BlueprintEvent)
void UWBP_RegionSelect_C::Populate_Regions()
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(62375);

	UWBP_RegionSelect_C_Populate_Regions_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_RegionSelect.WBP_RegionSelect_C.OnChildButtonSelectedRegion
//		Flags  -> (BlueprintCallable, BlueprintEvent)
void UWBP_RegionSelect_C::OnChildButtonSelectedRegion()
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(62374);

	UWBP_RegionSelect_C_OnChildButtonSelectedRegion_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_RegionSelect.WBP_RegionSelect_C.BndEvt__WBP_ModalPopupContainer_K2Node_ComponentBoundEvent_0_CloseButtonClicked__DelegateSignature
//		Flags  -> (BlueprintEvent)
void UWBP_RegionSelect_C::BndEvt__WBP_ModalPopupContainer_K2Node_ComponentBoundEvent_0_CloseButtonClicked__DelegateSignature()
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(62373);

	UWBP_RegionSelect_C_BndEvt__WBP_ModalPopupContainer_K2Node_ComponentBoundEvent_0_CloseButtonClicked__DelegateSignature_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_RegionSelect.WBP_RegionSelect_C.InitializeWidget
//		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
//		class APUMG_HUD*                                   HUD                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWBP_RegionSelect_C::InitializeWidget(class APUMG_HUD* HUD)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(62372);

	UWBP_RegionSelect_C_InitializeWidget_Params params {};
	params.HUD = HUD;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_RegionSelect.WBP_RegionSelect_C.OnShown
//		Flags  -> (Event, Public, BlueprintEvent)
void UWBP_RegionSelect_C::OnShown()
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(62371);

	UWBP_RegionSelect_C_OnShown_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_RegionSelect.WBP_RegionSelect_C.ExecuteUbergraph_WBP_RegionSelect
//		Flags  -> (Final, HasDefaults)
// Parameters:
//		int                                                EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWBP_RegionSelect_C::ExecuteUbergraph_WBP_RegionSelect(int EntryPoint)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(62370);

	UWBP_RegionSelect_C_ExecuteUbergraph_WBP_RegionSelect_Params params {};
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_RegionSelect.WBP_RegionSelect_C.OnRegionSelectEntriesCreated__DelegateSignature
//		Flags  -> (Public, Delegate, BlueprintCallable, BlueprintEvent)
void UWBP_RegionSelect_C::OnRegionSelectEntriesCreated__DelegateSignature()
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(62369);

	UWBP_RegionSelect_C_OnRegionSelectEntriesCreated__DelegateSignature_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_RegionSelect.WBP_RegionSelect_C.OnRegionSelected__DelegateSignature
//		Flags  -> (Public, Delegate, BlueprintCallable, BlueprintEvent)
void UWBP_RegionSelect_C::OnRegionSelected__DelegateSignature()
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(62368);

	UWBP_RegionSelect_C_OnRegionSelected__DelegateSignature_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
