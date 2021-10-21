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

// Function WBP_news_screen.WBP_news_screen_C.NavigateBack
struct UWBP_news_screen_C_NavigateBack_Params
{
	bool                                               ReturnValue;                                               // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
};

// Function WBP_news_screen.WBP_news_screen_C.SetNavigationFocus
struct UWBP_news_screen_C_SetNavigationFocus_Params
{
	class UWidget*                                     Widget;                                                    // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function WBP_news_screen.WBP_news_screen_C.Populate Panel
struct UWBP_news_screen_C_Populate_Panel_Params
{
	class UKSWhatsNewPanel*                            NewsData;                                                  // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function WBP_news_screen.WBP_news_screen_C.Refresh News Info
struct UWBP_news_screen_C_Refresh_News_Info_Params
{
};

// Function WBP_news_screen.WBP_news_screen_C.InitializeWidget
struct UWBP_news_screen_C_InitializeWidget_Params
{
	class APUMG_HUD*                                   HUD;                                                       // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function WBP_news_screen.WBP_news_screen_C.InitializeWidgetNavigation
struct UWBP_news_screen_C_InitializeWidgetNavigation_Params
{
};

// Function WBP_news_screen.WBP_news_screen_C.OnJsonChanged
struct UWBP_news_screen_C_OnJsonChanged_Params
{
};

// Function WBP_news_screen.WBP_news_screen_C.HandleLoginStateChange
struct UWBP_news_screen_C_HandleLoginStateChange_Params
{
	PlatformUMG_EPUMG_LoginState                       NewLoginState;                                             // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function WBP_news_screen.WBP_news_screen_C.BndEvt__CloseButton_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature
struct UWBP_news_screen_C_BndEvt__CloseButton_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature_Params
{
	class UWidget*                                     Widget;                                                    // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function WBP_news_screen.WBP_news_screen_C.ExecuteUbergraph_WBP_news_screen
struct UWBP_news_screen_C_ExecuteUbergraph_WBP_news_screen_Params
{
	int                                                EntryPoint;                                                // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
