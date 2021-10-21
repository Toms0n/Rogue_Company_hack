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

// Function WBP_Challenge_Hub.WBP_Challenge_Hub_C.GetCurrentViewWidget
struct UWBP_Challenge_Hub_C_GetCurrentViewWidget_Params
{
	class UPUMG_Widget*                                ReturnValue;                                               // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function WBP_Challenge_Hub.WBP_Challenge_Hub_C.GetAllViews
struct UWBP_Challenge_Hub_C_GetAllViews_Params
{
	TArray<class UPUMG_Widget*>                        ReturnValue;                                               // 0x0000(0x0010)  (Parm, OutParm, ReturnParm, ContainsInstancedReference, HasGetValueTypeHash)
};

// Function WBP_Challenge_Hub.WBP_Challenge_Hub_C.Set Context Bar Prompts
struct UWBP_Challenge_Hub_C_Set_Context_Bar_Prompts_Params
{
};

// Function WBP_Challenge_Hub.WBP_Challenge_Hub_C.NavigateBack
struct UWBP_Challenge_Hub_C_NavigateBack_Params
{
	bool                                               ReturnValue;                                               // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
};

// Function WBP_Challenge_Hub.WBP_Challenge_Hub_C.Bind Vertical Tab Group
struct UWBP_Challenge_Hub_C_Bind_Vertical_Tab_Group_Params
{
};

// Function WBP_Challenge_Hub.WBP_Challenge_Hub_C.InitializeWidget
struct UWBP_Challenge_Hub_C_InitializeWidget_Params
{
	class APUMG_HUD*                                   HUD;                                                       // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function WBP_Challenge_Hub.WBP_Challenge_Hub_C.InitializeWidgetNavigation
struct UWBP_Challenge_Hub_C_InitializeWidgetNavigation_Params
{
};

// Function WBP_Challenge_Hub.WBP_Challenge_Hub_C.OnShown
struct UWBP_Challenge_Hub_C_OnShown_Params
{
};

// Function WBP_Challenge_Hub.WBP_Challenge_Hub_C.OnBackPrompt
struct UWBP_Challenge_Hub_C_OnBackPrompt_Params
{
};

// Function WBP_Challenge_Hub.WBP_Challenge_Hub_C.AddView
struct UWBP_Challenge_Hub_C_AddView_Params
{
	struct FName                                       ViewName;                                                  // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FOverlayTabViewRow                          ViewInfo;                                                  // 0x0008(0x0030)  (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function WBP_Challenge_Hub.WBP_Challenge_Hub_C.ClearAllViews
struct UWBP_Challenge_Hub_C_ClearAllViews_Params
{
};

// Function WBP_Challenge_Hub.WBP_Challenge_Hub_C.PreConstruct
struct UWBP_Challenge_Hub_C_PreConstruct_Params
{
	bool                                               IsDesignTime;                                              // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function WBP_Challenge_Hub.WBP_Challenge_Hub_C.SelectViewAndShow
struct UWBP_Challenge_Hub_C_SelectViewAndShow_Params
{
	struct FName                                       ViewName;                                                  // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function WBP_Challenge_Hub.WBP_Challenge_Hub_C.OnTabsFocused
struct UWBP_Challenge_Hub_C_OnTabsFocused_Params
{
};

// Function WBP_Challenge_Hub.WBP_Challenge_Hub_C.OnViewFocused
struct UWBP_Challenge_Hub_C_OnViewFocused_Params
{
};

// Function WBP_Challenge_Hub.WBP_Challenge_Hub_C.ExecuteUbergraph_WBP_Challenge_Hub
struct UWBP_Challenge_Hub_C_ExecuteUbergraph_WBP_Challenge_Hub_Params
{
	int                                                EntryPoint;                                                // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
