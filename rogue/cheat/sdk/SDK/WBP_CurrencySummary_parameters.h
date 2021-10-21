#pragma once

// Name: roguecompany, Version: 425


/*!!DEFINE!!*/

/*!!HELPER_DEF!!*/

/*!!HELPER_INC!!*/

#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

namespace CG
{
//---------------------------------------------------------------------------
// Parameters
//---------------------------------------------------------------------------

// Function WBP_CurrencySummary.WBP_CurrencySummary_C.SetDisplayedCurrenciesWithPurchaseItem
struct UWBP_CurrencySummary_C_SetDisplayedCurrenciesWithPurchaseItem_Params
{
	class UPUMG_StoreItem*                             PurchaseItem;                                              // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function WBP_CurrencySummary.WBP_CurrencySummary_C.GetCurrencyIconWidgets
struct UWBP_CurrencySummary_C_GetCurrencyIconWidgets_Params
{
	TArray<class UWBP_AsyncIcon_C*>                    IconWidgets;                                               // 0x0000(0x0010)  (Parm, OutParm, ContainsInstancedReference, HasGetValueTypeHash)
};

// Function WBP_CurrencySummary.WBP_CurrencySummary_C.GetCurrencyTextWidgets
struct UWBP_CurrencySummary_C_GetCurrencyTextWidgets_Params
{
	TArray<class UWidget*>                             TextWidgets;                                               // 0x0000(0x0010)  (Parm, OutParm, ContainsInstancedReference, HasGetValueTypeHash)
};

// Function WBP_CurrencySummary.WBP_CurrencySummary_C.SetDisplayedCurrencies
struct UWBP_CurrencySummary_C_SetDisplayedCurrencies_Params
{
	TArray<int>                                        CurrenciesToDisplay;                                       // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, HasGetValueTypeHash)
};

// Function WBP_CurrencySummary.WBP_CurrencySummary_C.UpdateCurrencyDisplay
struct UWBP_CurrencySummary_C_UpdateCurrencyDisplay_Params
{
};

// Function WBP_CurrencySummary.WBP_CurrencySummary_C.InitializeWidget
struct UWBP_CurrencySummary_C_InitializeWidget_Params
{
	class APUMG_HUD*                                   HUD;                                                       // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function WBP_CurrencySummary.WBP_CurrencySummary_C.ExecuteUbergraph_WBP_CurrencySummary
struct UWBP_CurrencySummary_C_ExecuteUbergraph_WBP_CurrencySummary_Params
{
	int                                                EntryPoint;                                                // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
