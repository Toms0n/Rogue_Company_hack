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
//		Name   -> Function WBP_BattlePassAcquisitionScreen.WBP_BattlePassAcquisitionScreen_C.HandleOnUpsellButton
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
void UWBP_BattlePassAcquisitionScreen_C::HandleOnUpsellButton()
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(90870);

	UWBP_BattlePassAcquisitionScreen_C_HandleOnUpsellButton_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_BattlePassAcquisitionScreen.WBP_BattlePassAcquisitionScreen_C.NavigateConfirm
//		Flags  -> (Event, Protected, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
//		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
bool UWBP_BattlePassAcquisitionScreen_C::NavigateConfirm()
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(90869);

	UWBP_BattlePassAcquisitionScreen_C_NavigateConfirm_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_BattlePassAcquisitionScreen.WBP_BattlePassAcquisitionScreen_C.OnKeyDown
//		Flags  -> (BlueprintCosmetic, Event, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
//		struct FGeometry                                   MyGeometry                                                 (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
//		struct FKeyEvent                                   InKeyEvent                                                 (BlueprintVisible, BlueprintReadOnly, Parm)
//		struct FEventReply                                 ReturnValue                                                (Parm, OutParm, ReturnParm)
struct FEventReply UWBP_BattlePassAcquisitionScreen_C::OnKeyDown(const struct FGeometry& MyGeometry, const struct FKeyEvent& InKeyEvent)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(90868);

	UWBP_BattlePassAcquisitionScreen_C_OnKeyDown_Params params {};
	params.MyGeometry = MyGeometry;
	params.InKeyEvent = InKeyEvent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_BattlePassAcquisitionScreen.WBP_BattlePassAcquisitionScreen_C.NavigateBack
//		Flags  -> (Event, Protected, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
//		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
bool UWBP_BattlePassAcquisitionScreen_C::NavigateBack()
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(90867);

	UWBP_BattlePassAcquisitionScreen_C_NavigateBack_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_BattlePassAcquisitionScreen.WBP_BattlePassAcquisitionScreen_C.HandleOnRewardButtonClicked
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
//		class UWBP_RewardListEntry_C*                      Widget                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		struct FCosmeticSlotDetails                        RewardSlotDetails                                          (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)
//		class UPUMG_StoreItem*                             StoreItem                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWBP_BattlePassAcquisitionScreen_C::HandleOnRewardButtonClicked(class UWBP_RewardListEntry_C* Widget, const struct FCosmeticSlotDetails& RewardSlotDetails, class UPUMG_StoreItem* StoreItem)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(90866);

	UWBP_BattlePassAcquisitionScreen_C_HandleOnRewardButtonClicked_Params params {};
	params.Widget = Widget;
	params.RewardSlotDetails = RewardSlotDetails;
	params.StoreItem = StoreItem;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_BattlePassAcquisitionScreen.WBP_BattlePassAcquisitionScreen_C.HandleOnPageNavigated
//		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
//		int                                                Direction                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWBP_BattlePassAcquisitionScreen_C::HandleOnPageNavigated(int Direction)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(90865);

	UWBP_BattlePassAcquisitionScreen_C_HandleOnPageNavigated_Params params {};
	params.Direction = Direction;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_BattlePassAcquisitionScreen.WBP_BattlePassAcquisitionScreen_C.OnTransitionFinished
//		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
void UWBP_BattlePassAcquisitionScreen_C::OnTransitionFinished()
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(90864);

	UWBP_BattlePassAcquisitionScreen_C_OnTransitionFinished_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_BattlePassAcquisitionScreen.WBP_BattlePassAcquisitionScreen_C.DisplayUpsellState
//		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
void UWBP_BattlePassAcquisitionScreen_C::DisplayUpsellState()
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(90863);

	UWBP_BattlePassAcquisitionScreen_C_DisplayUpsellState_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_BattlePassAcquisitionScreen.WBP_BattlePassAcquisitionScreen_C.SetAcquisitionDisplay
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
//		class UKSAcquisition*                              Acquisition                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWBP_BattlePassAcquisitionScreen_C::SetAcquisitionDisplay(class UKSAcquisition* Acquisition)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(90862);

	UWBP_BattlePassAcquisitionScreen_C_SetAcquisitionDisplay_Params params {};
	params.Acquisition = Acquisition;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_BattlePassAcquisitionScreen.WBP_BattlePassAcquisitionScreen_C.Construct
//		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
void UWBP_BattlePassAcquisitionScreen_C::Construct()
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(90861);

	UWBP_BattlePassAcquisitionScreen_C_Construct_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_BattlePassAcquisitionScreen.WBP_BattlePassAcquisitionScreen_C.OnShown
//		Flags  -> (Event, Public, BlueprintEvent)
void UWBP_BattlePassAcquisitionScreen_C::OnShown()
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(90860);

	UWBP_BattlePassAcquisitionScreen_C_OnShown_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_BattlePassAcquisitionScreen.WBP_BattlePassAcquisitionScreen_C.InitializeWidget
//		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
//		class APUMG_HUD*                                   HUD                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWBP_BattlePassAcquisitionScreen_C::InitializeWidget(class APUMG_HUD* HUD)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(90859);

	UWBP_BattlePassAcquisitionScreen_C_InitializeWidget_Params params {};
	params.HUD = HUD;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_BattlePassAcquisitionScreen.WBP_BattlePassAcquisitionScreen_C.OnAcceptPrompt
//		Flags  -> (BlueprintCallable, BlueprintEvent)
void UWBP_BattlePassAcquisitionScreen_C::OnAcceptPrompt()
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(90858);

	UWBP_BattlePassAcquisitionScreen_C_OnAcceptPrompt_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_BattlePassAcquisitionScreen.WBP_BattlePassAcquisitionScreen_C.InitializeWidgetNavigation
//		Flags  -> (Event, Public, BlueprintEvent)
void UWBP_BattlePassAcquisitionScreen_C::InitializeWidgetNavigation()
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(90857);

	UWBP_BattlePassAcquisitionScreen_C_InitializeWidgetNavigation_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_BattlePassAcquisitionScreen.WBP_BattlePassAcquisitionScreen_C.FocusGroupNavigateRightFailure
//		Flags  -> (Event, Public, BlueprintEvent)
// Parameters:
//		int                                                FocusGroup                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWBP_BattlePassAcquisitionScreen_C::FocusGroupNavigateRightFailure(int FocusGroup)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(90856);

	UWBP_BattlePassAcquisitionScreen_C_FocusGroupNavigateRightFailure_Params params {};
	params.FocusGroup = FocusGroup;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_BattlePassAcquisitionScreen.WBP_BattlePassAcquisitionScreen_C.FocusGroupNavigateLeftFailure
//		Flags  -> (Event, Public, BlueprintEvent)
// Parameters:
//		int                                                FocusGroup                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWBP_BattlePassAcquisitionScreen_C::FocusGroupNavigateLeftFailure(int FocusGroup)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(90855);

	UWBP_BattlePassAcquisitionScreen_C_FocusGroupNavigateLeftFailure_Params params {};
	params.FocusGroup = FocusGroup;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_BattlePassAcquisitionScreen.WBP_BattlePassAcquisitionScreen_C.OnHide
//		Flags  -> (Event, Public, BlueprintEvent)
void UWBP_BattlePassAcquisitionScreen_C::OnHide()
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(90854);

	UWBP_BattlePassAcquisitionScreen_C_OnHide_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_BattlePassAcquisitionScreen.WBP_BattlePassAcquisitionScreen_C.OnCycle
//		Flags  -> (BlueprintCallable, BlueprintEvent)
// Parameters:
//		bool                                               bNext                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UWBP_BattlePassAcquisitionScreen_C::OnCycle(bool bNext)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(90853);

	UWBP_BattlePassAcquisitionScreen_C_OnCycle_Params params {};
	params.bNext = bNext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_BattlePassAcquisitionScreen.WBP_BattlePassAcquisitionScreen_C.ExecuteUbergraph_WBP_BattlePassAcquisitionScreen
//		Flags  -> (Final, HasDefaults)
// Parameters:
//		int                                                EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWBP_BattlePassAcquisitionScreen_C::ExecuteUbergraph_WBP_BattlePassAcquisitionScreen(int EntryPoint)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(90852);

	UWBP_BattlePassAcquisitionScreen_C_ExecuteUbergraph_WBP_BattlePassAcquisitionScreen_Params params {};
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_BattlePassAcquisitionScreen.WBP_BattlePassAcquisitionScreen_C.PlayPremiumTransition__DelegateSignature
//		Flags  -> (Public, Delegate, BlueprintCallable, BlueprintEvent)
void UWBP_BattlePassAcquisitionScreen_C::PlayPremiumTransition__DelegateSignature()
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(90851);

	UWBP_BattlePassAcquisitionScreen_C_PlayPremiumTransition__DelegateSignature_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
