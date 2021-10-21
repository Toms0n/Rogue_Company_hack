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
//		Name   -> Function WBP_BattlePassOffersScreen.WBP_BattlePassOffersScreen_C.Handle on Offer Panel Clicked
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
//		class UPUMG_StoreItem*                             BattlePassOffer                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWBP_BattlePassOffersScreen_C::Handle_on_Offer_Panel_Clicked(class UPUMG_StoreItem* BattlePassOffer)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(90823);

	UWBP_BattlePassOffersScreen_C_Handle_on_Offer_Panel_Clicked_Params params {};
	params.BattlePassOffer = BattlePassOffer;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_BattlePassOffersScreen.WBP_BattlePassOffersScreen_C.GetNavigationWidgets
//		Flags  -> (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
//		TArray<class UWBP_BattlePassOfferPanel_C*>         Widgets                                                    (Parm, OutParm, ContainsInstancedReference, HasGetValueTypeHash)
void UWBP_BattlePassOffersScreen_C::GetNavigationWidgets(TArray<class UWBP_BattlePassOfferPanel_C*>* Widgets)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(90822);

	UWBP_BattlePassOffersScreen_C_GetNavigationWidgets_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Widgets != nullptr)
		*Widgets = params.Widgets;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_BattlePassOffersScreen.WBP_BattlePassOffersScreen_C.NavigateBack
//		Flags  -> (Event, Protected, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
//		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
bool UWBP_BattlePassOffersScreen_C::NavigateBack()
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(90821);

	UWBP_BattlePassOffersScreen_C_NavigateBack_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_BattlePassOffersScreen.WBP_BattlePassOffersScreen_C.OnShown
//		Flags  -> (Event, Public, BlueprintEvent)
void UWBP_BattlePassOffersScreen_C::OnShown()
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(90820);

	UWBP_BattlePassOffersScreen_C_OnShown_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_BattlePassOffersScreen.WBP_BattlePassOffersScreen_C.InitializeWidget
//		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
//		class APUMG_HUD*                                   HUD                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWBP_BattlePassOffersScreen_C::InitializeWidget(class APUMG_HUD* HUD)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(90819);

	UWBP_BattlePassOffersScreen_C_InitializeWidget_Params params {};
	params.HUD = HUD;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_BattlePassOffersScreen.WBP_BattlePassOffersScreen_C.OnBackPrompt
//		Flags  -> (BlueprintCallable, BlueprintEvent)
void UWBP_BattlePassOffersScreen_C::OnBackPrompt()
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(90818);

	UWBP_BattlePassOffersScreen_C_OnBackPrompt_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_BattlePassOffersScreen.WBP_BattlePassOffersScreen_C.InitializeWidgetNavigation
//		Flags  -> (Event, Public, BlueprintEvent)
void UWBP_BattlePassOffersScreen_C::InitializeWidgetNavigation()
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(90817);

	UWBP_BattlePassOffersScreen_C_InitializeWidgetNavigation_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_BattlePassOffersScreen.WBP_BattlePassOffersScreen_C.ExecuteUbergraph_WBP_BattlePassOffersScreen
//		Flags  -> (Final, HasDefaults)
// Parameters:
//		int                                                EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWBP_BattlePassOffersScreen_C::ExecuteUbergraph_WBP_BattlePassOffersScreen(int EntryPoint)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(90816);

	UWBP_BattlePassOffersScreen_C_ExecuteUbergraph_WBP_BattlePassOffersScreen_Params params {};
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
