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
//		Name   -> Function WBP_RogueListingOfferPanel.WBP_RogueListingOfferPanel_C.SetItemDisplay
//		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
//		class UKSCurrency*                                 KSCurrency                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		class UPUMG_StoreItem*                             StoreItem                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWBP_RogueListingOfferPanel_C::SetItemDisplay(class UKSCurrency* KSCurrency, class UPUMG_StoreItem* StoreItem)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(86346);

	UWBP_RogueListingOfferPanel_C_SetItemDisplay_Params params {};
	params.KSCurrency = KSCurrency;
	params.StoreItem = StoreItem;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_RogueListingOfferPanel.WBP_RogueListingOfferPanel_C.PreConstruct
//		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
//		bool                                               IsDesignTime                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UWBP_RogueListingOfferPanel_C::PreConstruct(bool IsDesignTime)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(86345);

	UWBP_RogueListingOfferPanel_C_PreConstruct_Params params {};
	params.IsDesignTime = IsDesignTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_RogueListingOfferPanel.WBP_RogueListingOfferPanel_C.Construct
//		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
void UWBP_RogueListingOfferPanel_C::Construct()
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(86344);

	UWBP_RogueListingOfferPanel_C_Construct_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_RogueListingOfferPanel.WBP_RogueListingOfferPanel_C.BndEvt__WBP_StorePanelButton_K2Node_ComponentBoundEvent_0_OnBtnHovered__DelegateSignature
//		Flags  -> (BlueprintEvent)
// Parameters:
//		bool                                               IsGamepad                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UWBP_RogueListingOfferPanel_C::BndEvt__WBP_StorePanelButton_K2Node_ComponentBoundEvent_0_OnBtnHovered__DelegateSignature(bool IsGamepad)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(86343);

	UWBP_RogueListingOfferPanel_C_BndEvt__WBP_StorePanelButton_K2Node_ComponentBoundEvent_0_OnBtnHovered__DelegateSignature_Params params {};
	params.IsGamepad = IsGamepad;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_RogueListingOfferPanel.WBP_RogueListingOfferPanel_C.BndEvt__WBP_StorePanelButton_K2Node_ComponentBoundEvent_1_OnBtnUnhovered__DelegateSignature
//		Flags  -> (BlueprintEvent)
void UWBP_RogueListingOfferPanel_C::BndEvt__WBP_StorePanelButton_K2Node_ComponentBoundEvent_1_OnBtnUnhovered__DelegateSignature()
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(86342);

	UWBP_RogueListingOfferPanel_C_BndEvt__WBP_StorePanelButton_K2Node_ComponentBoundEvent_1_OnBtnUnhovered__DelegateSignature_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_RogueListingOfferPanel.WBP_RogueListingOfferPanel_C.BndEvt__WBP_StorePanelButton_K2Node_ComponentBoundEvent_2_OnBtnClicked__DelegateSignature
//		Flags  -> (BlueprintEvent)
void UWBP_RogueListingOfferPanel_C::BndEvt__WBP_StorePanelButton_K2Node_ComponentBoundEvent_2_OnBtnClicked__DelegateSignature()
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(86341);

	UWBP_RogueListingOfferPanel_C_BndEvt__WBP_StorePanelButton_K2Node_ComponentBoundEvent_2_OnBtnClicked__DelegateSignature_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_RogueListingOfferPanel.WBP_RogueListingOfferPanel_C.InitializeWidget
//		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
//		class APUMG_HUD*                                   HUD                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWBP_RogueListingOfferPanel_C::InitializeWidget(class APUMG_HUD* HUD)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(86340);

	UWBP_RogueListingOfferPanel_C_InitializeWidget_Params params {};
	params.HUD = HUD;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_RogueListingOfferPanel.WBP_RogueListingOfferPanel_C.HandleInputStateChanged
//		Flags  -> (BlueprintCallable, BlueprintEvent)
// Parameters:
//		TEnumAsByte<PlatformGameFramework_EPGAME_INPUT_STATE> InputState                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWBP_RogueListingOfferPanel_C::HandleInputStateChanged(TEnumAsByte<PlatformGameFramework_EPGAME_INPUT_STATE> InputState)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(86339);

	UWBP_RogueListingOfferPanel_C_HandleInputStateChanged_Params params {};
	params.InputState = InputState;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_RogueListingOfferPanel.WBP_RogueListingOfferPanel_C.ExecuteUbergraph_WBP_RogueListingOfferPanel
//		Flags  -> (Final)
// Parameters:
//		int                                                EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWBP_RogueListingOfferPanel_C::ExecuteUbergraph_WBP_RogueListingOfferPanel(int EntryPoint)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(86338);

	UWBP_RogueListingOfferPanel_C_ExecuteUbergraph_WBP_RogueListingOfferPanel_Params params {};
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_RogueListingOfferPanel.WBP_RogueListingOfferPanel_C.OnOfferClicked__DelegateSignature
//		Flags  -> (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
//		class UPUMG_StoreItem*                             StoreItem                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWBP_RogueListingOfferPanel_C::OnOfferClicked__DelegateSignature(class UPUMG_StoreItem* StoreItem)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(86337);

	UWBP_RogueListingOfferPanel_C_OnOfferClicked__DelegateSignature_Params params {};
	params.StoreItem = StoreItem;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
