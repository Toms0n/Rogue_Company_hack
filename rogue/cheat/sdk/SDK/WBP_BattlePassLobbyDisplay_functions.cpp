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
//		Name   -> Function WBP_BattlePassLobbyDisplay.WBP_BattlePassLobbyDisplay_C.PanelCTA
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
//		bool                                               start                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UWBP_BattlePassLobbyDisplay_C::PanelCTA(bool start)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(82826);

	UWBP_BattlePassLobbyDisplay_C_PanelCTA_Params params {};
	params.start = start;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_BattlePassLobbyDisplay.WBP_BattlePassLobbyDisplay_C.IsPanelSelectable
//		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
//		bool                                               IsSelectable                                               (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UWBP_BattlePassLobbyDisplay_C::IsPanelSelectable(bool* IsSelectable)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(82825);

	UWBP_BattlePassLobbyDisplay_C_IsPanelSelectable_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (IsSelectable != nullptr)
		*IsSelectable = params.IsSelectable;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_BattlePassLobbyDisplay.WBP_BattlePassLobbyDisplay_C.NavigateConfirmPressed
//		Flags  -> (Event, Protected, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
//		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
bool UWBP_BattlePassLobbyDisplay_C::NavigateConfirmPressed()
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(82824);

	UWBP_BattlePassLobbyDisplay_C_NavigateConfirmPressed_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_BattlePassLobbyDisplay.WBP_BattlePassLobbyDisplay_C.Set Progress Fill Colors
//		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
//		bool                                               IsPremium                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
//		bool                                               IsFinished                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UWBP_BattlePassLobbyDisplay_C::Set_Progress_Fill_Colors(bool IsPremium, bool IsFinished)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(82823);

	UWBP_BattlePassLobbyDisplay_C_Set_Progress_Fill_Colors_Params params {};
	params.IsPremium = IsPremium;
	params.IsFinished = IsFinished;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_BattlePassLobbyDisplay.WBP_BattlePassLobbyDisplay_C.Update Progress Bar
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
//		int                                                CurrentTierXP                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		int                                                NextTierXP                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWBP_BattlePassLobbyDisplay_C::Update_Progress_Bar(int CurrentTierXP, int NextTierXP)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(82822);

	UWBP_BattlePassLobbyDisplay_C_Update_Progress_Bar_Params params {};
	params.CurrentTierXP = CurrentTierXP;
	params.NextTierXP = NextTierXP;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_BattlePassLobbyDisplay.WBP_BattlePassLobbyDisplay_C.DisplayActivity
//		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
void UWBP_BattlePassLobbyDisplay_C::DisplayActivity()
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(82821);

	UWBP_BattlePassLobbyDisplay_C_DisplayActivity_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_BattlePassLobbyDisplay.WBP_BattlePassLobbyDisplay_C.BndEvt__HitTarget_K2Node_ComponentBoundEvent_4_OnButtonClickedEvent__DelegateSignature
//		Flags  -> (BlueprintEvent)
void UWBP_BattlePassLobbyDisplay_C::BndEvt__HitTarget_K2Node_ComponentBoundEvent_4_OnButtonClickedEvent__DelegateSignature()
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(82820);

	UWBP_BattlePassLobbyDisplay_C_BndEvt__HitTarget_K2Node_ComponentBoundEvent_4_OnButtonClickedEvent__DelegateSignature_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_BattlePassLobbyDisplay.WBP_BattlePassLobbyDisplay_C.BndEvt__HitTarget_K2Node_ComponentBoundEvent_2_OnButtonPressedEvent__DelegateSignature
//		Flags  -> (BlueprintEvent)
void UWBP_BattlePassLobbyDisplay_C::BndEvt__HitTarget_K2Node_ComponentBoundEvent_2_OnButtonPressedEvent__DelegateSignature()
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(82819);

	UWBP_BattlePassLobbyDisplay_C_BndEvt__HitTarget_K2Node_ComponentBoundEvent_2_OnButtonPressedEvent__DelegateSignature_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_BattlePassLobbyDisplay.WBP_BattlePassLobbyDisplay_C.BndEvt__HitTarget_K2Node_ComponentBoundEvent_3_OnButtonReleasedEvent__DelegateSignature
//		Flags  -> (BlueprintEvent)
void UWBP_BattlePassLobbyDisplay_C::BndEvt__HitTarget_K2Node_ComponentBoundEvent_3_OnButtonReleasedEvent__DelegateSignature()
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(82818);

	UWBP_BattlePassLobbyDisplay_C_BndEvt__HitTarget_K2Node_ComponentBoundEvent_3_OnButtonReleasedEvent__DelegateSignature_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_BattlePassLobbyDisplay.WBP_BattlePassLobbyDisplay_C.InitializeWidget
//		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
//		class APUMG_HUD*                                   HUD                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWBP_BattlePassLobbyDisplay_C::InitializeWidget(class APUMG_HUD* HUD)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(82817);

	UWBP_BattlePassLobbyDisplay_C_InitializeWidget_Params params {};
	params.HUD = HUD;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_BattlePassLobbyDisplay.WBP_BattlePassLobbyDisplay_C.OnBattlePassActivityProgressInitialized
//		Flags  -> (BlueprintCallable, BlueprintEvent)
// Parameters:
//		class UKSActivityInstance*                         Activity                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		int                                                Count                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWBP_BattlePassLobbyDisplay_C::OnBattlePassActivityProgressInitialized(class UKSActivityInstance* Activity, int Count)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(82816);

	UWBP_BattlePassLobbyDisplay_C_OnBattlePassActivityProgressInitialized_Params params {};
	params.Activity = Activity;
	params.Count = Count;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_BattlePassLobbyDisplay.WBP_BattlePassLobbyDisplay_C.BndEvt__HitTarget_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature
//		Flags  -> (BlueprintEvent)
void UWBP_BattlePassLobbyDisplay_C::BndEvt__HitTarget_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature()
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(82815);

	UWBP_BattlePassLobbyDisplay_C_BndEvt__HitTarget_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_BattlePassLobbyDisplay.WBP_BattlePassLobbyDisplay_C.GamepadHover
//		Flags  -> (Event, Public, BlueprintEvent)
void UWBP_BattlePassLobbyDisplay_C::GamepadHover()
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(82814);

	UWBP_BattlePassLobbyDisplay_C_GamepadHover_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_BattlePassLobbyDisplay.WBP_BattlePassLobbyDisplay_C.BndEvt__HitTarget_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature
//		Flags  -> (BlueprintEvent)
void UWBP_BattlePassLobbyDisplay_C::BndEvt__HitTarget_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature()
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(82813);

	UWBP_BattlePassLobbyDisplay_C_BndEvt__HitTarget_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_BattlePassLobbyDisplay.WBP_BattlePassLobbyDisplay_C.GamepadUnhover
//		Flags  -> (Event, Public, BlueprintEvent)
void UWBP_BattlePassLobbyDisplay_C::GamepadUnhover()
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(82812);

	UWBP_BattlePassLobbyDisplay_C_GamepadUnhover_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_BattlePassLobbyDisplay.WBP_BattlePassLobbyDisplay_C.ExecuteUbergraph_WBP_BattlePassLobbyDisplay
//		Flags  -> (Final, HasDefaults)
// Parameters:
//		int                                                EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWBP_BattlePassLobbyDisplay_C::ExecuteUbergraph_WBP_BattlePassLobbyDisplay(int EntryPoint)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(82811);

	UWBP_BattlePassLobbyDisplay_C_ExecuteUbergraph_WBP_BattlePassLobbyDisplay_Params params {};
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
