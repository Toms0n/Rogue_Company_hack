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

// Function WBP_EventRulesPopup.WBP_EventRulesPopup_C.NavigateConfirm
struct UWBP_EventRulesPopup_C_NavigateConfirm_Params
{
	bool                                               ReturnValue;                                               // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
};

// Function WBP_EventRulesPopup.WBP_EventRulesPopup_C.GetNavigationWidgets
struct UWBP_EventRulesPopup_C_GetNavigationWidgets_Params
{
	TArray<class UPUMG_Widget*>                        Widgets;                                                   // 0x0000(0x0010)  (Parm, OutParm, ContainsInstancedReference, HasGetValueTypeHash)
};

// Function WBP_EventRulesPopup.WBP_EventRulesPopup_C.NavigateBack
struct UWBP_EventRulesPopup_C_NavigateBack_Params
{
	bool                                               ReturnValue;                                               // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
};

// Function WBP_EventRulesPopup.WBP_EventRulesPopup_C.InitializeWidget
struct UWBP_EventRulesPopup_C_InitializeWidget_Params
{
	class APUMG_HUD*                                   HUD;                                                       // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function WBP_EventRulesPopup.WBP_EventRulesPopup_C.OnBackPrompt
struct UWBP_EventRulesPopup_C_OnBackPrompt_Params
{
};

// Function WBP_EventRulesPopup.WBP_EventRulesPopup_C.InitializeWidgetNavigation
struct UWBP_EventRulesPopup_C_InitializeWidgetNavigation_Params
{
};

// Function WBP_EventRulesPopup.WBP_EventRulesPopup_C.OnShown
struct UWBP_EventRulesPopup_C_OnShown_Params
{
};

// Function WBP_EventRulesPopup.WBP_EventRulesPopup_C.BndEvt__Button_GotIt_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature
struct UWBP_EventRulesPopup_C_BndEvt__Button_GotIt_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature_Params
{
	class UWidget*                                     Widget;                                                    // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function WBP_EventRulesPopup.WBP_EventRulesPopup_C.ExecuteUbergraph_WBP_EventRulesPopup
struct UWBP_EventRulesPopup_C_ExecuteUbergraph_WBP_EventRulesPopup_Params
{
	int                                                EntryPoint;                                                // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
