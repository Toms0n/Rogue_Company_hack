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

// Function WBP_RogueStatsScreen.WBP_RogueStatsScreen_C.SetStatHeader
struct UWBP_RogueStatsScreen_C_SetStatHeader_Params
{
	class UWBP_RogueStatsScreen_TabEntry_C*            CurrentTab;                                                // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function WBP_RogueStatsScreen.WBP_RogueStatsScreen_C.RegisterScrollingInput
struct UWBP_RogueStatsScreen_C_RegisterScrollingInput_Params
{
};

// Function WBP_RogueStatsScreen.WBP_RogueStatsScreen_C.NavigateBack
struct UWBP_RogueStatsScreen_C_NavigateBack_Params
{
	bool                                               ReturnValue;                                               // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
};

// Function WBP_RogueStatsScreen.WBP_RogueStatsScreen_C.GoBack
struct UWBP_RogueStatsScreen_C_GoBack_Params
{
};

// Function WBP_RogueStatsScreen.WBP_RogueStatsScreen_C.TickScrolling
struct UWBP_RogueStatsScreen_C_TickScrolling_Params
{
	float                                              DeltaTime;                                                 // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function WBP_RogueStatsScreen.WBP_RogueStatsScreen_C.ScrollReleased
struct UWBP_RogueStatsScreen_C_ScrollReleased_Params
{
};

// Function WBP_RogueStatsScreen.WBP_RogueStatsScreen_C.ScrollDownPressed
struct UWBP_RogueStatsScreen_C_ScrollDownPressed_Params
{
};

// Function WBP_RogueStatsScreen.WBP_RogueStatsScreen_C.ScrollUpPressed
struct UWBP_RogueStatsScreen_C_ScrollUpPressed_Params
{
};

// Function WBP_RogueStatsScreen.WBP_RogueStatsScreen_C.SetupTabNavigation
struct UWBP_RogueStatsScreen_C_SetupTabNavigation_Params
{
};

// Function WBP_RogueStatsScreen.WBP_RogueStatsScreen_C.GetPooledStatEntry
struct UWBP_RogueStatsScreen_C_GetPooledStatEntry_Params
{
	class UWBP_RogueStatsScreen_RogueEntry_C*          StatEntry;                                                 // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function WBP_RogueStatsScreen.WBP_RogueStatsScreen_C.ReturnAllStatEntriesToPool
struct UWBP_RogueStatsScreen_C_ReturnAllStatEntriesToPool_Params
{
};

// Function WBP_RogueStatsScreen.WBP_RogueStatsScreen_C.On_PnlStatEntries_SortCompareChildren_1
struct UWBP_RogueStatsScreen_C_On_PnlStatEntries_SortCompareChildren_1_Params
{
	class UWidget*                                     LHS;                                                       // 0x0000(0x0008)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UWidget*                                     RHS;                                                       // 0x0008(0x0008)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               ReturnValue;                                               // 0x0010(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
};

// Function WBP_RogueStatsScreen.WBP_RogueStatsScreen_C.SelectStat
struct UWBP_RogueStatsScreen_C_SelectStat_Params
{
	class UClass*                                      PlayerStat;                                                // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UClass*                                      RogueStat;                                                 // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function WBP_RogueStatsScreen.WBP_RogueStatsScreen_C.AddStatTabs
struct UWBP_RogueStatsScreen_C_AddStatTabs_Params
{
};

// Function WBP_RogueStatsScreen.WBP_RogueStatsScreen_C.Construct
struct UWBP_RogueStatsScreen_C_Construct_Params
{
};

// Function WBP_RogueStatsScreen.WBP_RogueStatsScreen_C.Tick
struct UWBP_RogueStatsScreen_C_Tick_Params
{
	struct FGeometry                                   MyGeometry;                                                // 0x0000(0x0058)  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	float                                              InDeltaTime;                                               // 0x0058(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function WBP_RogueStatsScreen.WBP_RogueStatsScreen_C.InitializeWidget
struct UWBP_RogueStatsScreen_C_InitializeWidget_Params
{
	class APUMG_HUD*                                   HUD;                                                       // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function WBP_RogueStatsScreen.WBP_RogueStatsScreen_C.BndEvt__KeyboardBackButton_K2Node_ComponentBoundEvent_2_OnBackButtonClicked__DelegateSignature
struct UWBP_RogueStatsScreen_C_BndEvt__KeyboardBackButton_K2Node_ComponentBoundEvent_2_OnBackButtonClicked__DelegateSignature_Params
{
};

// Function WBP_RogueStatsScreen.WBP_RogueStatsScreen_C.InitializeWidgetNavigation
struct UWBP_RogueStatsScreen_C_InitializeWidgetNavigation_Params
{
};

// Function WBP_RogueStatsScreen.WBP_RogueStatsScreen_C.InitializeWidgetButtonListeners
struct UWBP_RogueStatsScreen_C_InitializeWidgetButtonListeners_Params
{
};

// Function WBP_RogueStatsScreen.WBP_RogueStatsScreen_C.OnShown
struct UWBP_RogueStatsScreen_C_OnShown_Params
{
};

// Function WBP_RogueStatsScreen.WBP_RogueStatsScreen_C.OnBackPrompt
struct UWBP_RogueStatsScreen_C_OnBackPrompt_Params
{
};

// Function WBP_RogueStatsScreen.WBP_RogueStatsScreen_C.ExecuteUbergraph_WBP_RogueStatsScreen
struct UWBP_RogueStatsScreen_C_ExecuteUbergraph_WBP_RogueStatsScreen_Params
{
	int                                                EntryPoint;                                                // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
