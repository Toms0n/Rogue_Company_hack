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

// Function WBP_TopNavBar.WBP_TopNavBar_C.UpdateArmoryNewIndicator
struct UWBP_TopNavBar_C_UpdateArmoryNewIndicator_Params
{
};

// Function WBP_TopNavBar.WBP_TopNavBar_C.Check Experiments
struct UWBP_TopNavBar_C_Check_Experiments_Params
{
};

// Function WBP_TopNavBar.WBP_TopNavBar_C.UpdateBattlePassTabVisibility
struct UWBP_TopNavBar_C_UpdateBattlePassTabVisibility_Params
{
};

// Function WBP_TopNavBar.WBP_TopNavBar_C.OnHasNewStoreItems
struct UWBP_TopNavBar_C_OnHasNewStoreItems_Params
{
	bool                                               HasNew;                                                    // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function WBP_TopNavBar.WBP_TopNavBar_C.HandleViewRouteChanged
struct UWBP_TopNavBar_C_HandleViewRouteChanged_Params
{
	struct FName                                       CurrentRoute;                                              // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FName                                       NextRoute;                                                 // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	PlatformUMG_EViewManagerLayer                      Layer;                                                     // 0x0010(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function WBP_TopNavBar.WBP_TopNavBar_C.HandleInputStateChanged
struct UWBP_TopNavBar_C_HandleInputStateChanged_Params
{
	TEnumAsByte<PlatformGameFramework_EPGAME_INPUT_STATE> InputState;                                                // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function WBP_TopNavBar.WBP_TopNavBar_C.HandleNavRight
struct UWBP_TopNavBar_C_HandleNavRight_Params
{
};

// Function WBP_TopNavBar.WBP_TopNavBar_C.HandleNavLeft
struct UWBP_TopNavBar_C_HandleNavLeft_Params
{
};

// Function WBP_TopNavBar.WBP_TopNavBar_C.InitializeNavButtons
struct UWBP_TopNavBar_C_InitializeNavButtons_Params
{
};

// Function WBP_TopNavBar.WBP_TopNavBar_C.InitializeTickAnimations
struct UWBP_TopNavBar_C_InitializeTickAnimations_Params
{
};

// Function WBP_TopNavBar.WBP_TopNavBar_C.ShowTopBarFinished
struct UWBP_TopNavBar_C_ShowTopBarFinished_Params
{
};

// Function WBP_TopNavBar.WBP_TopNavBar_C.ShowTopBarAnim
struct UWBP_TopNavBar_C_ShowTopBarAnim_Params
{
	float                                              ElapsedTime;                                               // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              ElapsedAlpha;                                              // 0x0004(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function WBP_TopNavBar.WBP_TopNavBar_C.StartShowAnim
struct UWBP_TopNavBar_C_StartShowAnim_Params
{
};

// Function WBP_TopNavBar.WBP_TopNavBar_C.InitHideAnimation
struct UWBP_TopNavBar_C_InitHideAnimation_Params
{
};

// Function WBP_TopNavBar.WBP_TopNavBar_C.HideTopBarFinished
struct UWBP_TopNavBar_C_HideTopBarFinished_Params
{
};

// Function WBP_TopNavBar.WBP_TopNavBar_C.HideTopBarAnim
struct UWBP_TopNavBar_C_HideTopBarAnim_Params
{
	float                                              ElapsedTime;                                               // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              ElapsedAlpha;                                              // 0x0004(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function WBP_TopNavBar.WBP_TopNavBar_C.StartHideAnim
struct UWBP_TopNavBar_C_StartHideAnim_Params
{
};

// Function WBP_TopNavBar.WBP_TopNavBar_C.DisableTopBar
struct UWBP_TopNavBar_C_DisableTopBar_Params
{
	bool                                               IsDisable;                                                 // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function WBP_TopNavBar.WBP_TopNavBar_C.InitializeWidget
struct UWBP_TopNavBar_C_InitializeWidget_Params
{
	class APUMG_HUD*                                   HUD;                                                       // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function WBP_TopNavBar.WBP_TopNavBar_C.Construct
struct UWBP_TopNavBar_C_Construct_Params
{
};

// Function WBP_TopNavBar.WBP_TopNavBar_C.StartShowSequence
struct UWBP_TopNavBar_C_StartShowSequence_Params
{
	struct FName                                       FromRoute;                                                 // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FName                                       ToRoute;                                                   // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function WBP_TopNavBar.WBP_TopNavBar_C.StartHideSequence
struct UWBP_TopNavBar_C_StartHideSequence_Params
{
	struct FName                                       FromRoute;                                                 // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FName                                       ToRoute;                                                   // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function WBP_TopNavBar.WBP_TopNavBar_C.Handle Login State Changed
struct UWBP_TopNavBar_C_Handle_Login_State_Changed_Params
{
	PlatformUMG_EPUMG_LoginState                       LoginState;                                                // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function WBP_TopNavBar.WBP_TopNavBar_C.OnLocalSettingSaved_Event_1
struct UWBP_TopNavBar_C_OnLocalSettingSaved_Event_1_Params
{
	struct FName                                       SettingName;                                               // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function WBP_TopNavBar.WBP_TopNavBar_C.OnPromptCycleAction
struct UWBP_TopNavBar_C_OnPromptCycleAction_Params
{
	bool                                               bNext;                                                     // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function WBP_TopNavBar.WBP_TopNavBar_C.ExecuteUbergraph_WBP_TopNavBar
struct UWBP_TopNavBar_C_ExecuteUbergraph_WBP_TopNavBar_Params
{
	int                                                EntryPoint;                                                // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
