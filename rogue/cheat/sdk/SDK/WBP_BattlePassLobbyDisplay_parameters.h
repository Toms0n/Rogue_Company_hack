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

// Function WBP_BattlePassLobbyDisplay.WBP_BattlePassLobbyDisplay_C.PanelCTA
struct UWBP_BattlePassLobbyDisplay_C_PanelCTA_Params
{
	bool                                               start;                                                     // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function WBP_BattlePassLobbyDisplay.WBP_BattlePassLobbyDisplay_C.IsPanelSelectable
struct UWBP_BattlePassLobbyDisplay_C_IsPanelSelectable_Params
{
	bool                                               IsSelectable;                                              // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function WBP_BattlePassLobbyDisplay.WBP_BattlePassLobbyDisplay_C.NavigateConfirmPressed
struct UWBP_BattlePassLobbyDisplay_C_NavigateConfirmPressed_Params
{
	bool                                               ReturnValue;                                               // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
};

// Function WBP_BattlePassLobbyDisplay.WBP_BattlePassLobbyDisplay_C.Set Progress Fill Colors
struct UWBP_BattlePassLobbyDisplay_C_Set_Progress_Fill_Colors_Params
{
	bool                                               IsPremium;                                                 // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                               IsFinished;                                                // 0x0001(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function WBP_BattlePassLobbyDisplay.WBP_BattlePassLobbyDisplay_C.Update Progress Bar
struct UWBP_BattlePassLobbyDisplay_C_Update_Progress_Bar_Params
{
	int                                                CurrentTierXP;                                             // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                NextTierXP;                                                // 0x0004(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function WBP_BattlePassLobbyDisplay.WBP_BattlePassLobbyDisplay_C.DisplayActivity
struct UWBP_BattlePassLobbyDisplay_C_DisplayActivity_Params
{
};

// Function WBP_BattlePassLobbyDisplay.WBP_BattlePassLobbyDisplay_C.BndEvt__HitTarget_K2Node_ComponentBoundEvent_4_OnButtonClickedEvent__DelegateSignature
struct UWBP_BattlePassLobbyDisplay_C_BndEvt__HitTarget_K2Node_ComponentBoundEvent_4_OnButtonClickedEvent__DelegateSignature_Params
{
};

// Function WBP_BattlePassLobbyDisplay.WBP_BattlePassLobbyDisplay_C.BndEvt__HitTarget_K2Node_ComponentBoundEvent_2_OnButtonPressedEvent__DelegateSignature
struct UWBP_BattlePassLobbyDisplay_C_BndEvt__HitTarget_K2Node_ComponentBoundEvent_2_OnButtonPressedEvent__DelegateSignature_Params
{
};

// Function WBP_BattlePassLobbyDisplay.WBP_BattlePassLobbyDisplay_C.BndEvt__HitTarget_K2Node_ComponentBoundEvent_3_OnButtonReleasedEvent__DelegateSignature
struct UWBP_BattlePassLobbyDisplay_C_BndEvt__HitTarget_K2Node_ComponentBoundEvent_3_OnButtonReleasedEvent__DelegateSignature_Params
{
};

// Function WBP_BattlePassLobbyDisplay.WBP_BattlePassLobbyDisplay_C.InitializeWidget
struct UWBP_BattlePassLobbyDisplay_C_InitializeWidget_Params
{
	class APUMG_HUD*                                   HUD;                                                       // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function WBP_BattlePassLobbyDisplay.WBP_BattlePassLobbyDisplay_C.OnBattlePassActivityProgressInitialized
struct UWBP_BattlePassLobbyDisplay_C_OnBattlePassActivityProgressInitialized_Params
{
	class UKSActivityInstance*                         Activity;                                                  // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                Count;                                                     // 0x0008(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function WBP_BattlePassLobbyDisplay.WBP_BattlePassLobbyDisplay_C.BndEvt__HitTarget_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature
struct UWBP_BattlePassLobbyDisplay_C_BndEvt__HitTarget_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature_Params
{
};

// Function WBP_BattlePassLobbyDisplay.WBP_BattlePassLobbyDisplay_C.GamepadHover
struct UWBP_BattlePassLobbyDisplay_C_GamepadHover_Params
{
};

// Function WBP_BattlePassLobbyDisplay.WBP_BattlePassLobbyDisplay_C.BndEvt__HitTarget_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature
struct UWBP_BattlePassLobbyDisplay_C_BndEvt__HitTarget_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature_Params
{
};

// Function WBP_BattlePassLobbyDisplay.WBP_BattlePassLobbyDisplay_C.GamepadUnhover
struct UWBP_BattlePassLobbyDisplay_C_GamepadUnhover_Params
{
};

// Function WBP_BattlePassLobbyDisplay.WBP_BattlePassLobbyDisplay_C.ExecuteUbergraph_WBP_BattlePassLobbyDisplay
struct UWBP_BattlePassLobbyDisplay_C_ExecuteUbergraph_WBP_BattlePassLobbyDisplay_Params
{
	int                                                EntryPoint;                                                // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
