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
//		Name   -> Function WBP_BattlePassOfferPanel.WBP_BattlePassOfferPanel_C.NavigateConfirm
//		Flags  -> (Event, Protected, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
//		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
bool UWBP_BattlePassOfferPanel_C::NavigateConfirm()
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(81162);

	UWBP_BattlePassOfferPanel_C_NavigateConfirm_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_BattlePassOfferPanel.WBP_BattlePassOfferPanel_C.Display Battle Pass Bundle
//		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
//		class UPUMG_StoreItem*                             Bundle                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWBP_BattlePassOfferPanel_C::Display_Battle_Pass_Bundle(class UPUMG_StoreItem* Bundle)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(81161);

	UWBP_BattlePassOfferPanel_C_Display_Battle_Pass_Bundle_Params params {};
	params.Bundle = Bundle;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_BattlePassOfferPanel.WBP_BattlePassOfferPanel_C.BndEvt__WBP_StorePanelButton_K2Node_ComponentBoundEvent_0_OnBtnClicked__DelegateSignature
//		Flags  -> (BlueprintEvent)
void UWBP_BattlePassOfferPanel_C::BndEvt__WBP_StorePanelButton_K2Node_ComponentBoundEvent_0_OnBtnClicked__DelegateSignature()
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(81160);

	UWBP_BattlePassOfferPanel_C_BndEvt__WBP_StorePanelButton_K2Node_ComponentBoundEvent_0_OnBtnClicked__DelegateSignature_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_BattlePassOfferPanel.WBP_BattlePassOfferPanel_C.OnGamepadConfirm
//		Flags  -> (BlueprintCallable, BlueprintEvent)
void UWBP_BattlePassOfferPanel_C::OnGamepadConfirm()
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(81159);

	UWBP_BattlePassOfferPanel_C_OnGamepadConfirm_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_BattlePassOfferPanel.WBP_BattlePassOfferPanel_C.GamepadHover
//		Flags  -> (Event, Public, BlueprintEvent)
void UWBP_BattlePassOfferPanel_C::GamepadHover()
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(81158);

	UWBP_BattlePassOfferPanel_C_GamepadHover_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_BattlePassOfferPanel.WBP_BattlePassOfferPanel_C.GamepadUnhover
//		Flags  -> (Event, Public, BlueprintEvent)
void UWBP_BattlePassOfferPanel_C::GamepadUnhover()
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(81157);

	UWBP_BattlePassOfferPanel_C_GamepadUnhover_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_BattlePassOfferPanel.WBP_BattlePassOfferPanel_C.ExecuteUbergraph_WBP_BattlePassOfferPanel
//		Flags  -> (Final)
// Parameters:
//		int                                                EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWBP_BattlePassOfferPanel_C::ExecuteUbergraph_WBP_BattlePassOfferPanel(int EntryPoint)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(81156);

	UWBP_BattlePassOfferPanel_C_ExecuteUbergraph_WBP_BattlePassOfferPanel_Params params {};
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_BattlePassOfferPanel.WBP_BattlePassOfferPanel_C.OnOfferPanelClicked__DelegateSignature
//		Flags  -> (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
//		class UPUMG_StoreItem*                             BattlePassOffer                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWBP_BattlePassOfferPanel_C::OnOfferPanelClicked__DelegateSignature(class UPUMG_StoreItem* BattlePassOffer)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(81155);

	UWBP_BattlePassOfferPanel_C_OnOfferPanelClicked__DelegateSignature_Params params {};
	params.BattlePassOffer = BattlePassOffer;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
