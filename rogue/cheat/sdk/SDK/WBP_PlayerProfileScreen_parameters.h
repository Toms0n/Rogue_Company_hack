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

// Function WBP_PlayerProfileScreen.WBP_PlayerProfileScreen_C.GetPlatformIcon
struct UWBP_PlayerProfileScreen_C_GetPlatformIcon_Params
{
	bool                                               Success;                                                   // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	class UTexture2D*                                  Icon;                                                      // 0x0008(0x0008)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function WBP_PlayerProfileScreen.WBP_PlayerProfileScreen_C.SetPlayerHint
struct UWBP_PlayerProfileScreen_C_SetPlayerHint_Params
{
};

// Function WBP_PlayerProfileScreen.WBP_PlayerProfileScreen_C.ClearPlayerHint
struct UWBP_PlayerProfileScreen_C_ClearPlayerHint_Params
{
};

// Function WBP_PlayerProfileScreen.WBP_PlayerProfileScreen_C.NavigateBack
struct UWBP_PlayerProfileScreen_C_NavigateBack_Params
{
	bool                                               ReturnValue;                                               // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
};

// Function WBP_PlayerProfileScreen.WBP_PlayerProfileScreen_C.Construct
struct UWBP_PlayerProfileScreen_C_Construct_Params
{
};

// Function WBP_PlayerProfileScreen.WBP_PlayerProfileScreen_C.OnShown
struct UWBP_PlayerProfileScreen_C_OnShown_Params
{
};

// Function WBP_PlayerProfileScreen.WBP_PlayerProfileScreen_C.InitializeWidget
struct UWBP_PlayerProfileScreen_C_InitializeWidget_Params
{
	class APUMG_HUD*                                   HUD;                                                       // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function WBP_PlayerProfileScreen.WBP_PlayerProfileScreen_C.AwardButtonClicked
struct UWBP_PlayerProfileScreen_C_AwardButtonClicked_Params
{
	class UWidget*                                     Widget;                                                    // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function WBP_PlayerProfileScreen.WBP_PlayerProfileScreen_C.StatsButtonClicked
struct UWBP_PlayerProfileScreen_C_StatsButtonClicked_Params
{
	class UWidget*                                     Widget;                                                    // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function WBP_PlayerProfileScreen.WBP_PlayerProfileScreen_C.CustomizeButtonClicked
struct UWBP_PlayerProfileScreen_C_CustomizeButtonClicked_Params
{
	class UWidget*                                     Widget;                                                    // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function WBP_PlayerProfileScreen.WBP_PlayerProfileScreen_C.InitializeWidgetNavigation
struct UWBP_PlayerProfileScreen_C_InitializeWidgetNavigation_Params
{
};

// Function WBP_PlayerProfileScreen.WBP_PlayerProfileScreen_C.OnBackPrompt
struct UWBP_PlayerProfileScreen_C_OnBackPrompt_Params
{
};

// Function WBP_PlayerProfileScreen.WBP_PlayerProfileScreen_C.HandleLoginStateChange
struct UWBP_PlayerProfileScreen_C_HandleLoginStateChange_Params
{
	PlatformUMG_EPUMG_LoginState                       LoginState;                                                // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function WBP_PlayerProfileScreen.WBP_PlayerProfileScreen_C.ExecuteUbergraph_WBP_PlayerProfileScreen
struct UWBP_PlayerProfileScreen_C_ExecuteUbergraph_WBP_PlayerProfileScreen_Params
{
	int                                                EntryPoint;                                                // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
