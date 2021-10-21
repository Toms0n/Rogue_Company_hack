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
//		Name   -> Function WBP_BoosterInventoryScreen.WBP_BoosterInventoryScreen_C.Navigate Back Passthrough
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
void UWBP_BoosterInventoryScreen_C::Navigate_Back_Passthrough()
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(90639);

	UWBP_BoosterInventoryScreen_C_Navigate_Back_Passthrough_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_BoosterInventoryScreen.WBP_BoosterInventoryScreen_C.OnKeyUp
//		Flags  -> (BlueprintCosmetic, Event, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
//		struct FGeometry                                   MyGeometry                                                 (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
//		struct FKeyEvent                                   InKeyEvent                                                 (BlueprintVisible, BlueprintReadOnly, Parm)
//		struct FEventReply                                 ReturnValue                                                (Parm, OutParm, ReturnParm)
struct FEventReply UWBP_BoosterInventoryScreen_C::OnKeyUp(const struct FGeometry& MyGeometry, const struct FKeyEvent& InKeyEvent)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(90638);

	UWBP_BoosterInventoryScreen_C_OnKeyUp_Params params {};
	params.MyGeometry = MyGeometry;
	params.InKeyEvent = InKeyEvent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_BoosterInventoryScreen.WBP_BoosterInventoryScreen_C.PopulateActiveBoosts
//		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
void UWBP_BoosterInventoryScreen_C::PopulateActiveBoosts()
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(90637);

	UWBP_BoosterInventoryScreen_C_PopulateActiveBoosts_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_BoosterInventoryScreen.WBP_BoosterInventoryScreen_C.PopulateInactiveBoostInventory
//		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
void UWBP_BoosterInventoryScreen_C::PopulateInactiveBoostInventory()
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(90636);

	UWBP_BoosterInventoryScreen_C_PopulateInactiveBoostInventory_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_BoosterInventoryScreen.WBP_BoosterInventoryScreen_C.NavigateBack
//		Flags  -> (Event, Protected, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
//		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
bool UWBP_BoosterInventoryScreen_C::NavigateBack()
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(90635);

	UWBP_BoosterInventoryScreen_C_NavigateBack_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_BoosterInventoryScreen.WBP_BoosterInventoryScreen_C.BndEvt__Blocker_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
//		Flags  -> (BlueprintEvent)
void UWBP_BoosterInventoryScreen_C::BndEvt__Blocker_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature()
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(90634);

	UWBP_BoosterInventoryScreen_C_BndEvt__Blocker_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_BoosterInventoryScreen.WBP_BoosterInventoryScreen_C.StartHideSequence
//		Flags  -> (Event, Public, BlueprintEvent)
// Parameters:
//		struct FName                                       FromRoute                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		struct FName                                       ToRoute                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWBP_BoosterInventoryScreen_C::StartHideSequence(const struct FName& FromRoute, const struct FName& ToRoute)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(90633);

	UWBP_BoosterInventoryScreen_C_StartHideSequence_Params params {};
	params.FromRoute = FromRoute;
	params.ToRoute = ToRoute;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_BoosterInventoryScreen.WBP_BoosterInventoryScreen_C.StartShowSequence
//		Flags  -> (Event, Public, BlueprintEvent)
// Parameters:
//		struct FName                                       FromRoute                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		struct FName                                       ToRoute                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWBP_BoosterInventoryScreen_C::StartShowSequence(const struct FName& FromRoute, const struct FName& ToRoute)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(90632);

	UWBP_BoosterInventoryScreen_C_StartShowSequence_Params params {};
	params.FromRoute = FromRoute;
	params.ToRoute = ToRoute;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_BoosterInventoryScreen.WBP_BoosterInventoryScreen_C.OnShown
//		Flags  -> (Event, Public, BlueprintEvent)
void UWBP_BoosterInventoryScreen_C::OnShown()
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(90631);

	UWBP_BoosterInventoryScreen_C_OnShown_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_BoosterInventoryScreen.WBP_BoosterInventoryScreen_C.InitializeWidgetNavigation
//		Flags  -> (Event, Public, BlueprintEvent)
void UWBP_BoosterInventoryScreen_C::InitializeWidgetNavigation()
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(90630);

	UWBP_BoosterInventoryScreen_C_InitializeWidgetNavigation_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_BoosterInventoryScreen.WBP_BoosterInventoryScreen_C.OnViewStateChange
//		Flags  -> (BlueprintCallable, BlueprintEvent)
// Parameters:
//		struct FName                                       CurrentRoute                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		struct FName                                       PreviousRoute                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		PlatformUMG_EViewManagerLayer                      Layer                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWBP_BoosterInventoryScreen_C::OnViewStateChange(const struct FName& CurrentRoute, const struct FName& PreviousRoute, PlatformUMG_EViewManagerLayer Layer)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(90629);

	UWBP_BoosterInventoryScreen_C_OnViewStateChange_Params params {};
	params.CurrentRoute = CurrentRoute;
	params.PreviousRoute = PreviousRoute;
	params.Layer = Layer;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_BoosterInventoryScreen.WBP_BoosterInventoryScreen_C.InitializeWidget
//		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
//		class APUMG_HUD*                                   HUD                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWBP_BoosterInventoryScreen_C::InitializeWidget(class APUMG_HUD* HUD)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(90628);

	UWBP_BoosterInventoryScreen_C_InitializeWidget_Params params {};
	params.HUD = HUD;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_BoosterInventoryScreen.WBP_BoosterInventoryScreen_C.OnAcquisition
//		Flags  -> (BlueprintCallable, BlueprintEvent)
// Parameters:
//		class UKSAcquisition*                              Acquisition                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWBP_BoosterInventoryScreen_C::OnAcquisition(class UKSAcquisition* Acquisition)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(90627);

	UWBP_BoosterInventoryScreen_C_OnAcquisition_Params params {};
	params.Acquisition = Acquisition;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_BoosterInventoryScreen.WBP_BoosterInventoryScreen_C.ExecuteUbergraph_WBP_BoosterInventoryScreen
//		Flags  -> (Final, HasDefaults)
// Parameters:
//		int                                                EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWBP_BoosterInventoryScreen_C::ExecuteUbergraph_WBP_BoosterInventoryScreen(int EntryPoint)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(90626);

	UWBP_BoosterInventoryScreen_C_ExecuteUbergraph_WBP_BoosterInventoryScreen_Params params {};
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
