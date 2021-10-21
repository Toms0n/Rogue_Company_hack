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

// Function WBP_Challenge_Panel.WBP_Challenge_Panel_C.DisplayRerollPrompt
struct UWBP_Challenge_Panel_C_DisplayRerollPrompt_Params
{
	bool                                               Show;                                                      // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function WBP_Challenge_Panel.WBP_Challenge_Panel_C.GetNavigationWidgets
struct UWBP_Challenge_Panel_C_GetNavigationWidgets_Params
{
	TArray<class UPUMG_Widget*>                        Widgets;                                                   // 0x0000(0x0010)  (Parm, OutParm, ContainsInstancedReference, HasGetValueTypeHash)
};

// Function WBP_Challenge_Panel.WBP_Challenge_Panel_C.PopulateChallenges
struct UWBP_Challenge_Panel_C_PopulateChallenges_Params
{
};

// Function WBP_Challenge_Panel.WBP_Challenge_Panel_C.PreConstruct
struct UWBP_Challenge_Panel_C_PreConstruct_Params
{
	bool                                               IsDesignTime;                                              // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function WBP_Challenge_Panel.WBP_Challenge_Panel_C.InitializeWidget
struct UWBP_Challenge_Panel_C_InitializeWidget_Params
{
	class APUMG_HUD*                                   HUD;                                                       // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function WBP_Challenge_Panel.WBP_Challenge_Panel_C.ExecuteUbergraph_WBP_Challenge_Panel
struct UWBP_Challenge_Panel_C_ExecuteUbergraph_WBP_Challenge_Panel_Params
{
	int                                                EntryPoint;                                                // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
