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

// Function WBP_BattlePassOffersScreen.WBP_BattlePassOffersScreen_C.Handle on Offer Panel Clicked
struct UWBP_BattlePassOffersScreen_C_Handle_on_Offer_Panel_Clicked_Params
{
	class UPUMG_StoreItem*                             BattlePassOffer;                                           // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function WBP_BattlePassOffersScreen.WBP_BattlePassOffersScreen_C.GetNavigationWidgets
struct UWBP_BattlePassOffersScreen_C_GetNavigationWidgets_Params
{
	TArray<class UWBP_BattlePassOfferPanel_C*>         Widgets;                                                   // 0x0000(0x0010)  (Parm, OutParm, ContainsInstancedReference, HasGetValueTypeHash)
};

// Function WBP_BattlePassOffersScreen.WBP_BattlePassOffersScreen_C.NavigateBack
struct UWBP_BattlePassOffersScreen_C_NavigateBack_Params
{
	bool                                               ReturnValue;                                               // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
};

// Function WBP_BattlePassOffersScreen.WBP_BattlePassOffersScreen_C.OnShown
struct UWBP_BattlePassOffersScreen_C_OnShown_Params
{
};

// Function WBP_BattlePassOffersScreen.WBP_BattlePassOffersScreen_C.InitializeWidget
struct UWBP_BattlePassOffersScreen_C_InitializeWidget_Params
{
	class APUMG_HUD*                                   HUD;                                                       // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function WBP_BattlePassOffersScreen.WBP_BattlePassOffersScreen_C.OnBackPrompt
struct UWBP_BattlePassOffersScreen_C_OnBackPrompt_Params
{
};

// Function WBP_BattlePassOffersScreen.WBP_BattlePassOffersScreen_C.InitializeWidgetNavigation
struct UWBP_BattlePassOffersScreen_C_InitializeWidgetNavigation_Params
{
};

// Function WBP_BattlePassOffersScreen.WBP_BattlePassOffersScreen_C.ExecuteUbergraph_WBP_BattlePassOffersScreen
struct UWBP_BattlePassOffersScreen_C_ExecuteUbergraph_WBP_BattlePassOffersScreen_Params
{
	int                                                EntryPoint;                                                // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
