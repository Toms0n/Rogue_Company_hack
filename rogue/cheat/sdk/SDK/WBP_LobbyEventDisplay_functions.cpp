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
//		Name   -> Function WBP_LobbyEventDisplay.WBP_LobbyEventDisplay_C.IsPanelSelectable
//		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
//		bool                                               IsSelectable                                               (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UWBP_LobbyEventDisplay_C::IsPanelSelectable(bool* IsSelectable)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(82579);

	UWBP_LobbyEventDisplay_C_IsPanelSelectable_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (IsSelectable != nullptr)
		*IsSelectable = params.IsSelectable;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_LobbyEventDisplay.WBP_LobbyEventDisplay_C.PanelCTA
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
//		bool                                               start                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UWBP_LobbyEventDisplay_C::PanelCTA(bool start)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(82578);

	UWBP_LobbyEventDisplay_C_PanelCTA_Params params {};
	params.start = start;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_LobbyEventDisplay.WBP_LobbyEventDisplay_C.DisplayBuyThroughEvent
//		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
void UWBP_LobbyEventDisplay_C::DisplayBuyThroughEvent()
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(82577);

	UWBP_LobbyEventDisplay_C_DisplayBuyThroughEvent_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_LobbyEventDisplay.WBP_LobbyEventDisplay_C.DisplayActivity
//		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
void UWBP_LobbyEventDisplay_C::DisplayActivity()
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(82576);

	UWBP_LobbyEventDisplay_C_DisplayActivity_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_LobbyEventDisplay.WBP_LobbyEventDisplay_C.Set Progress Fill Colors
//		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
//		bool                                               IsPremium                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UWBP_LobbyEventDisplay_C::Set_Progress_Fill_Colors(bool IsPremium)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(82575);

	UWBP_LobbyEventDisplay_C_Set_Progress_Fill_Colors_Params params {};
	params.IsPremium = IsPremium;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_LobbyEventDisplay.WBP_LobbyEventDisplay_C.NavigateConfirmPressed
//		Flags  -> (Event, Protected, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
//		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
bool UWBP_LobbyEventDisplay_C::NavigateConfirmPressed()
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(82574);

	UWBP_LobbyEventDisplay_C_NavigateConfirmPressed_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_LobbyEventDisplay.WBP_LobbyEventDisplay_C.UpdateProgressBar
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
//		int                                                CurrentTierXP                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		int                                                NeededTierXP                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWBP_LobbyEventDisplay_C::UpdateProgressBar(int CurrentTierXP, int NeededTierXP)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(82573);

	UWBP_LobbyEventDisplay_C_UpdateProgressBar_Params params {};
	params.CurrentTierXP = CurrentTierXP;
	params.NeededTierXP = NeededTierXP;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_LobbyEventDisplay.WBP_LobbyEventDisplay_C.RefreshDisplay
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
void UWBP_LobbyEventDisplay_C::RefreshDisplay()
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(82572);

	UWBP_LobbyEventDisplay_C_RefreshDisplay_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_LobbyEventDisplay.WBP_LobbyEventDisplay_C.BndEvt__HitTarget_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature
//		Flags  -> (BlueprintEvent)
void UWBP_LobbyEventDisplay_C::BndEvt__HitTarget_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature()
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(82571);

	UWBP_LobbyEventDisplay_C_BndEvt__HitTarget_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_LobbyEventDisplay.WBP_LobbyEventDisplay_C.BndEvt__HitTarget_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature
//		Flags  -> (BlueprintEvent)
void UWBP_LobbyEventDisplay_C::BndEvt__HitTarget_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature()
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(82570);

	UWBP_LobbyEventDisplay_C_BndEvt__HitTarget_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_LobbyEventDisplay.WBP_LobbyEventDisplay_C.BndEvt__HitTarget_K2Node_ComponentBoundEvent_2_OnButtonPressedEvent__DelegateSignature
//		Flags  -> (BlueprintEvent)
void UWBP_LobbyEventDisplay_C::BndEvt__HitTarget_K2Node_ComponentBoundEvent_2_OnButtonPressedEvent__DelegateSignature()
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(82569);

	UWBP_LobbyEventDisplay_C_BndEvt__HitTarget_K2Node_ComponentBoundEvent_2_OnButtonPressedEvent__DelegateSignature_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_LobbyEventDisplay.WBP_LobbyEventDisplay_C.BndEvt__HitTarget_K2Node_ComponentBoundEvent_3_OnButtonReleasedEvent__DelegateSignature
//		Flags  -> (BlueprintEvent)
void UWBP_LobbyEventDisplay_C::BndEvt__HitTarget_K2Node_ComponentBoundEvent_3_OnButtonReleasedEvent__DelegateSignature()
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(82568);

	UWBP_LobbyEventDisplay_C_BndEvt__HitTarget_K2Node_ComponentBoundEvent_3_OnButtonReleasedEvent__DelegateSignature_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_LobbyEventDisplay.WBP_LobbyEventDisplay_C.BndEvt__HitTarget_K2Node_ComponentBoundEvent_4_OnButtonClickedEvent__DelegateSignature
//		Flags  -> (BlueprintEvent)
void UWBP_LobbyEventDisplay_C::BndEvt__HitTarget_K2Node_ComponentBoundEvent_4_OnButtonClickedEvent__DelegateSignature()
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(82567);

	UWBP_LobbyEventDisplay_C_BndEvt__HitTarget_K2Node_ComponentBoundEvent_4_OnButtonClickedEvent__DelegateSignature_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_LobbyEventDisplay.WBP_LobbyEventDisplay_C.GamepadHover
//		Flags  -> (Event, Public, BlueprintEvent)
void UWBP_LobbyEventDisplay_C::GamepadHover()
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(82566);

	UWBP_LobbyEventDisplay_C_GamepadHover_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_LobbyEventDisplay.WBP_LobbyEventDisplay_C.GamepadUnhover
//		Flags  -> (Event, Public, BlueprintEvent)
void UWBP_LobbyEventDisplay_C::GamepadUnhover()
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(82565);

	UWBP_LobbyEventDisplay_C_GamepadUnhover_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_LobbyEventDisplay.WBP_LobbyEventDisplay_C.InitializeWidget
//		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
//		class APUMG_HUD*                                   HUD                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWBP_LobbyEventDisplay_C::InitializeWidget(class APUMG_HUD* HUD)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(82564);

	UWBP_LobbyEventDisplay_C_InitializeWidget_Params params {};
	params.HUD = HUD;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_LobbyEventDisplay.WBP_LobbyEventDisplay_C.OnBattlePassActivityProgressInitialized
//		Flags  -> (BlueprintCallable, BlueprintEvent)
// Parameters:
//		class UKSActivityInstance*                         Activity                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		int                                                Count                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWBP_LobbyEventDisplay_C::OnBattlePassActivityProgressInitialized(class UKSActivityInstance* Activity, int Count)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(82563);

	UWBP_LobbyEventDisplay_C_OnBattlePassActivityProgressInitialized_Params params {};
	params.Activity = Activity;
	params.Count = Count;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_LobbyEventDisplay.WBP_LobbyEventDisplay_C.OnMiniBattlePassActivityProgressInitialized
//		Flags  -> (BlueprintCallable, BlueprintEvent)
// Parameters:
//		class UKSActivityInstance*                         Activity                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		int                                                Count                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWBP_LobbyEventDisplay_C::OnMiniBattlePassActivityProgressInitialized(class UKSActivityInstance* Activity, int Count)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(82562);

	UWBP_LobbyEventDisplay_C_OnMiniBattlePassActivityProgressInitialized_Params params {};
	params.Activity = Activity;
	params.Count = Count;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_LobbyEventDisplay.WBP_LobbyEventDisplay_C.ExecuteUbergraph_WBP_LobbyEventDisplay
//		Flags  -> (Final, HasDefaults)
// Parameters:
//		int                                                EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWBP_LobbyEventDisplay_C::ExecuteUbergraph_WBP_LobbyEventDisplay(int EntryPoint)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(82561);

	UWBP_LobbyEventDisplay_C_ExecuteUbergraph_WBP_LobbyEventDisplay_Params params {};
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
