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

// Function WBP_subscreen_nav_tab.WBP_subscreen_nav_tab_C.SetSelected
struct UWBP_subscreen_nav_tab_C_SetSelected_Params
{
	bool                                               bNewSelected;                                              // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function WBP_subscreen_nav_tab.WBP_subscreen_nav_tab_C.SetDisabled
struct UWBP_subscreen_nav_tab_C_SetDisabled_Params
{
	bool                                               bNewDisabled;                                              // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function WBP_subscreen_nav_tab.WBP_subscreen_nav_tab_C.TryCreateCalloutWidget
struct UWBP_subscreen_nav_tab_C_TryCreateCalloutWidget_Params
{
	bool                                               Created;                                                   // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function WBP_subscreen_nav_tab.WBP_subscreen_nav_tab_C.SetShowCallout
struct UWBP_subscreen_nav_tab_C_SetShowCallout_Params
{
	bool                                               Show;                                                      // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function WBP_subscreen_nav_tab.WBP_subscreen_nav_tab_C.SettingsSubScreenNavTabClickedSFX
struct UWBP_subscreen_nav_tab_C_SettingsSubScreenNavTabClickedSFX_Params
{
};

// Function WBP_subscreen_nav_tab.WBP_subscreen_nav_tab_C.SettingsSubScreenNavTabHoveredSFX
struct UWBP_subscreen_nav_tab_C_SettingsSubScreenNavTabHoveredSFX_Params
{
};

// Function WBP_subscreen_nav_tab.WBP_subscreen_nav_tab_C.Construct
struct UWBP_subscreen_nav_tab_C_Construct_Params
{
};

// Function WBP_subscreen_nav_tab.WBP_subscreen_nav_tab_C.BndEvt__TabButton_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
struct UWBP_subscreen_nav_tab_C_BndEvt__TabButton_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature_Params
{
};

// Function WBP_subscreen_nav_tab.WBP_subscreen_nav_tab_C.BndEvt__TabButton_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature
struct UWBP_subscreen_nav_tab_C_BndEvt__TabButton_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature_Params
{
};

// Function WBP_subscreen_nav_tab.WBP_subscreen_nav_tab_C.BndEvt__TabButton_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature
struct UWBP_subscreen_nav_tab_C_BndEvt__TabButton_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature_Params
{
};

// Function WBP_subscreen_nav_tab.WBP_subscreen_nav_tab_C.SetButtonText
struct UWBP_subscreen_nav_tab_C_SetButtonText_Params
{
	struct FText                                       ButtonText;                                                // 0x0000(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function WBP_subscreen_nav_tab.WBP_subscreen_nav_tab_C.InitializeWidget
struct UWBP_subscreen_nav_tab_C_InitializeWidget_Params
{
	class APUMG_HUD*                                   HUD;                                                       // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function WBP_subscreen_nav_tab.WBP_subscreen_nav_tab_C.PreConstruct
struct UWBP_subscreen_nav_tab_C_PreConstruct_Params
{
	bool                                               IsDesignTime;                                              // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function WBP_subscreen_nav_tab.WBP_subscreen_nav_tab_C.SelectNavTab
struct UWBP_subscreen_nav_tab_C_SelectNavTab_Params
{
};

// Function WBP_subscreen_nav_tab.WBP_subscreen_nav_tab_C.UnselectNavTab
struct UWBP_subscreen_nav_tab_C_UnselectNavTab_Params
{
};

// Function WBP_subscreen_nav_tab.WBP_subscreen_nav_tab_C.Handle View State Changed
struct UWBP_subscreen_nav_tab_C_Handle_View_State_Changed_Params
{
	struct FName                                       CurrentRoute;                                              // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FName                                       PreviousRoute;                                             // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	PlatformUMG_EViewManagerLayer                      Layer;                                                     // 0x0010(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function WBP_subscreen_nav_tab.WBP_subscreen_nav_tab_C.ExecuteUbergraph_WBP_subscreen_nav_tab
struct UWBP_subscreen_nav_tab_C_ExecuteUbergraph_WBP_subscreen_nav_tab_Params
{
	int                                                EntryPoint;                                                // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
