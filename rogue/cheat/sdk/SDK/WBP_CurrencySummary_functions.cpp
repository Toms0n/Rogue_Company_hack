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
//		Name   -> Function WBP_CurrencySummary.WBP_CurrencySummary_C.SetDisplayedCurrenciesWithPurchaseItem
//		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
//		class UPUMG_StoreItem*                             PurchaseItem                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWBP_CurrencySummary_C::SetDisplayedCurrenciesWithPurchaseItem(class UPUMG_StoreItem* PurchaseItem)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(62521);

	UWBP_CurrencySummary_C_SetDisplayedCurrenciesWithPurchaseItem_Params params {};
	params.PurchaseItem = PurchaseItem;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_CurrencySummary.WBP_CurrencySummary_C.GetCurrencyIconWidgets
//		Flags  -> (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
//		TArray<class UWBP_AsyncIcon_C*>                    IconWidgets                                                (Parm, OutParm, ContainsInstancedReference, HasGetValueTypeHash)
void UWBP_CurrencySummary_C::GetCurrencyIconWidgets(TArray<class UWBP_AsyncIcon_C*>* IconWidgets)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(62520);

	UWBP_CurrencySummary_C_GetCurrencyIconWidgets_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (IconWidgets != nullptr)
		*IconWidgets = params.IconWidgets;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_CurrencySummary.WBP_CurrencySummary_C.GetCurrencyTextWidgets
//		Flags  -> (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
//		TArray<class UWidget*>                             TextWidgets                                                (Parm, OutParm, ContainsInstancedReference, HasGetValueTypeHash)
void UWBP_CurrencySummary_C::GetCurrencyTextWidgets(TArray<class UWidget*>* TextWidgets)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(62519);

	UWBP_CurrencySummary_C_GetCurrencyTextWidgets_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (TextWidgets != nullptr)
		*TextWidgets = params.TextWidgets;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_CurrencySummary.WBP_CurrencySummary_C.SetDisplayedCurrencies
//		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
//		TArray<int>                                        CurrenciesToDisplay                                        (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, HasGetValueTypeHash)
void UWBP_CurrencySummary_C::SetDisplayedCurrencies(TArray<int>* CurrenciesToDisplay)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(62518);

	UWBP_CurrencySummary_C_SetDisplayedCurrencies_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (CurrenciesToDisplay != nullptr)
		*CurrenciesToDisplay = params.CurrenciesToDisplay;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_CurrencySummary.WBP_CurrencySummary_C.UpdateCurrencyDisplay
//		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
void UWBP_CurrencySummary_C::UpdateCurrencyDisplay()
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(62517);

	UWBP_CurrencySummary_C_UpdateCurrencyDisplay_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_CurrencySummary.WBP_CurrencySummary_C.InitializeWidget
//		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
//		class APUMG_HUD*                                   HUD                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWBP_CurrencySummary_C::InitializeWidget(class APUMG_HUD* HUD)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(62516);

	UWBP_CurrencySummary_C_InitializeWidget_Params params {};
	params.HUD = HUD;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_CurrencySummary.WBP_CurrencySummary_C.ExecuteUbergraph_WBP_CurrencySummary
//		Flags  -> (Final)
// Parameters:
//		int                                                EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWBP_CurrencySummary_C::ExecuteUbergraph_WBP_CurrencySummary(int EntryPoint)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(62515);

	UWBP_CurrencySummary_C_ExecuteUbergraph_WBP_CurrencySummary_Params params {};
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
