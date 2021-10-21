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
//		Name   -> Function WBP_BattlePassRewardsScreen.WBP_BattlePassRewardsScreen_C.OnPurchaseBattlepass
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
void UWBP_BattlePassRewardsScreen_C::OnPurchaseBattlepass()
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(90720);

	UWBP_BattlePassRewardsScreen_C_OnPurchaseBattlepass_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_BattlePassRewardsScreen.WBP_BattlePassRewardsScreen_C.GetRewardEntryFromPendingRouteData
//		Flags  -> (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
//		class UWBP_RewardListEntry_C*                      RewardEntry                                                (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWBP_BattlePassRewardsScreen_C::GetRewardEntryFromPendingRouteData(class UWBP_RewardListEntry_C** RewardEntry)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(90719);

	UWBP_BattlePassRewardsScreen_C_GetRewardEntryFromPendingRouteData_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (RewardEntry != nullptr)
		*RewardEntry = params.RewardEntry;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_BattlePassRewardsScreen.WBP_BattlePassRewardsScreen_C.HandleOnLevelPurchase
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
void UWBP_BattlePassRewardsScreen_C::HandleOnLevelPurchase()
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(90718);

	UWBP_BattlePassRewardsScreen_C_HandleOnLevelPurchase_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_BattlePassRewardsScreen.WBP_BattlePassRewardsScreen_C.HandleOnBattlePassOffers
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
void UWBP_BattlePassRewardsScreen_C::HandleOnBattlePassOffers()
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(90717);

	UWBP_BattlePassRewardsScreen_C_HandleOnBattlePassOffers_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_BattlePassRewardsScreen.WBP_BattlePassRewardsScreen_C.HandleOnPageNavigated
//		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
//		int                                                Direction                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWBP_BattlePassRewardsScreen_C::HandleOnPageNavigated(int Direction)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(90716);

	UWBP_BattlePassRewardsScreen_C_HandleOnPageNavigated_Params params {};
	params.Direction = Direction;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_BattlePassRewardsScreen.WBP_BattlePassRewardsScreen_C.Select Initial Item
//		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
void UWBP_BattlePassRewardsScreen_C::Select_Initial_Item()
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(90715);

	UWBP_BattlePassRewardsScreen_C_Select_Initial_Item_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_BattlePassRewardsScreen.WBP_BattlePassRewardsScreen_C.OnRewardButtonClicked
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
//		class UWBP_RewardListEntry_C*                      Widget                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		struct FCosmeticSlotDetails                        RewardSlotDetails                                          (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)
//		class UPUMG_StoreItem*                             StoreItem                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWBP_BattlePassRewardsScreen_C::OnRewardButtonClicked(class UWBP_RewardListEntry_C* Widget, const struct FCosmeticSlotDetails& RewardSlotDetails, class UPUMG_StoreItem* StoreItem)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(90714);

	UWBP_BattlePassRewardsScreen_C_OnRewardButtonClicked_Params params {};
	params.Widget = Widget;
	params.RewardSlotDetails = RewardSlotDetails;
	params.StoreItem = StoreItem;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_BattlePassRewardsScreen.WBP_BattlePassRewardsScreen_C.NavigateBack
//		Flags  -> (Event, Protected, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
//		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
bool UWBP_BattlePassRewardsScreen_C::NavigateBack()
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(90713);

	UWBP_BattlePassRewardsScreen_C_NavigateBack_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_BattlePassRewardsScreen.WBP_BattlePassRewardsScreen_C.PerformInitialSetup
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
void UWBP_BattlePassRewardsScreen_C::PerformInitialSetup()
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(90712);

	UWBP_BattlePassRewardsScreen_C_PerformInitialSetup_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_BattlePassRewardsScreen.WBP_BattlePassRewardsScreen_C.OnShown
//		Flags  -> (Event, Public, BlueprintEvent)
void UWBP_BattlePassRewardsScreen_C::OnShown()
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(90711);

	UWBP_BattlePassRewardsScreen_C_OnShown_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_BattlePassRewardsScreen.WBP_BattlePassRewardsScreen_C.InitializeWidget
//		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
//		class APUMG_HUD*                                   HUD                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWBP_BattlePassRewardsScreen_C::InitializeWidget(class APUMG_HUD* HUD)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(90710);

	UWBP_BattlePassRewardsScreen_C_InitializeWidget_Params params {};
	params.HUD = HUD;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_BattlePassRewardsScreen.WBP_BattlePassRewardsScreen_C.OnBackPrompt
//		Flags  -> (BlueprintCallable, BlueprintEvent)
void UWBP_BattlePassRewardsScreen_C::OnBackPrompt()
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(90709);

	UWBP_BattlePassRewardsScreen_C_OnBackPrompt_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_BattlePassRewardsScreen.WBP_BattlePassRewardsScreen_C.InitializeWidgetNavigation
//		Flags  -> (Event, Public, BlueprintEvent)
void UWBP_BattlePassRewardsScreen_C::InitializeWidgetNavigation()
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(90708);

	UWBP_BattlePassRewardsScreen_C_InitializeWidgetNavigation_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_BattlePassRewardsScreen.WBP_BattlePassRewardsScreen_C.FocusGroupNavigateRightFailure
//		Flags  -> (Event, Public, BlueprintEvent)
// Parameters:
//		int                                                FocusGroup                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWBP_BattlePassRewardsScreen_C::FocusGroupNavigateRightFailure(int FocusGroup)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(90707);

	UWBP_BattlePassRewardsScreen_C_FocusGroupNavigateRightFailure_Params params {};
	params.FocusGroup = FocusGroup;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_BattlePassRewardsScreen.WBP_BattlePassRewardsScreen_C.FocusGroupNavigateLeftFailure
//		Flags  -> (Event, Public, BlueprintEvent)
// Parameters:
//		int                                                FocusGroup                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWBP_BattlePassRewardsScreen_C::FocusGroupNavigateLeftFailure(int FocusGroup)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(90706);

	UWBP_BattlePassRewardsScreen_C_FocusGroupNavigateLeftFailure_Params params {};
	params.FocusGroup = FocusGroup;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_BattlePassRewardsScreen.WBP_BattlePassRewardsScreen_C.OnHide
//		Flags  -> (Event, Public, BlueprintEvent)
void UWBP_BattlePassRewardsScreen_C::OnHide()
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(90705);

	UWBP_BattlePassRewardsScreen_C_OnHide_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_BattlePassRewardsScreen.WBP_BattlePassRewardsScreen_C.OnCycle
//		Flags  -> (BlueprintCallable, BlueprintEvent)
// Parameters:
//		bool                                               bNext                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UWBP_BattlePassRewardsScreen_C::OnCycle(bool bNext)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(90704);

	UWBP_BattlePassRewardsScreen_C_OnCycle_Params params {};
	params.bNext = bNext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_BattlePassRewardsScreen.WBP_BattlePassRewardsScreen_C.ExecuteUbergraph_WBP_BattlePassRewardsScreen
//		Flags  -> (Final, HasDefaults)
// Parameters:
//		int                                                EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWBP_BattlePassRewardsScreen_C::ExecuteUbergraph_WBP_BattlePassRewardsScreen(int EntryPoint)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(90703);

	UWBP_BattlePassRewardsScreen_C_ExecuteUbergraph_WBP_BattlePassRewardsScreen_Params params {};
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
