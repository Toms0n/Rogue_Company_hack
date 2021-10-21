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

// Function WBP_PlayerStatus_ContextMenu.WBP_PlayerStatus_ContextMenu_C.GetStatusColor
struct UWBP_PlayerStatus_ContextMenu_C_GetStatusColor_Params
{
	Killstreak_EKSPlayerOnlineStatus                   PlayerStatus;                                              // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FSlateColor                                 StatusColor;                                               // 0x0008(0x0028)  (Parm, OutParm)
};

// Function WBP_PlayerStatus_ContextMenu.WBP_PlayerStatus_ContextMenu_C.UpdatePlayerStatus
struct UWBP_PlayerStatus_ContextMenu_C_UpdatePlayerStatus_Params
{
};

// Function WBP_PlayerStatus_ContextMenu.WBP_PlayerStatus_ContextMenu_C.HideContextMenu
struct UWBP_PlayerStatus_ContextMenu_C_HideContextMenu_Params
{
};

// Function WBP_PlayerStatus_ContextMenu.WBP_PlayerStatus_ContextMenu_C.ShowContextMenu
struct UWBP_PlayerStatus_ContextMenu_C_ShowContextMenu_Params
{
};

// Function WBP_PlayerStatus_ContextMenu.WBP_PlayerStatus_ContextMenu_C.HandleOptionSelected
struct UWBP_PlayerStatus_ContextMenu_C_HandleOptionSelected_Params
{
	TEnumAsByte<EPlayerStatusOption_EPlayerStatusOption> EPlayerStatus;                                             // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function WBP_PlayerStatus_ContextMenu.WBP_PlayerStatus_ContextMenu_C.SetupOptionButton
struct UWBP_PlayerStatus_ContextMenu_C_SetupOptionButton_Params
{
};

// Function WBP_PlayerStatus_ContextMenu.WBP_PlayerStatus_ContextMenu_C.PreConstruct
struct UWBP_PlayerStatus_ContextMenu_C_PreConstruct_Params
{
	bool                                               IsDesignTime;                                              // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function WBP_PlayerStatus_ContextMenu.WBP_PlayerStatus_ContextMenu_C.InitializeWidget
struct UWBP_PlayerStatus_ContextMenu_C_InitializeWidget_Params
{
	class APUMG_HUD*                                   HUD;                                                       // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function WBP_PlayerStatus_ContextMenu.WBP_PlayerStatus_ContextMenu_C.Construct
struct UWBP_PlayerStatus_ContextMenu_C_Construct_Params
{
};

// Function WBP_PlayerStatus_ContextMenu.WBP_PlayerStatus_ContextMenu_C.SetPlayerInfo
struct UWBP_PlayerStatus_ContextMenu_C_SetPlayerInfo_Params
{
	class UKSPlayerInfo*                               playerinfo;                                                // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function WBP_PlayerStatus_ContextMenu.WBP_PlayerStatus_ContextMenu_C.DetermineToggleState
struct UWBP_PlayerStatus_ContextMenu_C_DetermineToggleState_Params
{
};

// Function WBP_PlayerStatus_ContextMenu.WBP_PlayerStatus_ContextMenu_C.ExecuteUbergraph_WBP_PlayerStatus_ContextMenu
struct UWBP_PlayerStatus_ContextMenu_C_ExecuteUbergraph_WBP_PlayerStatus_ContextMenu_Params
{
	int                                                EntryPoint;                                                // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function WBP_PlayerStatus_ContextMenu.WBP_PlayerStatus_ContextMenu_C.OnMenuStart__DelegateSignature
struct UWBP_PlayerStatus_ContextMenu_C_OnMenuStart__DelegateSignature_Params
{
	class UWBP_PlayerStatus_ContextMenuOption_C*       FirstFocusableButton;                                      // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function WBP_PlayerStatus_ContextMenu.WBP_PlayerStatus_ContextMenu_C.OnReadyNavigation__DelegateSignature
struct UWBP_PlayerStatus_ContextMenu_C_OnReadyNavigation__DelegateSignature_Params
{
	TArray<class UWBP_PlayerStatus_ContextMenuOption_C*> StatusButtons;                                             // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, ContainsInstancedReference, HasGetValueTypeHash)
};

// Function WBP_PlayerStatus_ContextMenu.WBP_PlayerStatus_ContextMenu_C.OnMenuHidden__DelegateSignature
struct UWBP_PlayerStatus_ContextMenu_C_OnMenuHidden__DelegateSignature_Params
{
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
