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

// Function WBP_WeaponHubStatsPanel.WBP_WeaponHubStatsPanel_C.GetCurrentStatCount
struct UWBP_WeaponHubStatsPanel_C_GetCurrentStatCount_Params
{
	int                                                ReturnValue;                                               // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function WBP_WeaponHubStatsPanel.WBP_WeaponHubStatsPanel_C.OnKeyUp
struct UWBP_WeaponHubStatsPanel_C_OnKeyUp_Params
{
	struct FGeometry                                   MyGeometry;                                                // 0x0000(0x0058)  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	struct FKeyEvent                                   InKeyEvent;                                                // 0x0058(0x0038)  (BlueprintVisible, BlueprintReadOnly, Parm)
	struct FEventReply                                 ReturnValue;                                               // 0x0090(0x00C0)  (Parm, OutParm, ReturnParm)
};

// Function WBP_WeaponHubStatsPanel.WBP_WeaponHubStatsPanel_C.BndEvt__PrevTierButton_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
struct UWBP_WeaponHubStatsPanel_C_BndEvt__PrevTierButton_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature_Params
{
};

// Function WBP_WeaponHubStatsPanel.WBP_WeaponHubStatsPanel_C.BndEvt__NextTierButton_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature
struct UWBP_WeaponHubStatsPanel_C_BndEvt__NextTierButton_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature_Params
{
};

// Function WBP_WeaponHubStatsPanel.WBP_WeaponHubStatsPanel_C.DisplayWeaponInfo
struct UWBP_WeaponHubStatsPanel_C_DisplayWeaponInfo_Params
{
	int                                                Level;                                                     // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UKSWeaponAsset*                              LevelWeapon;                                               // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function WBP_WeaponHubStatsPanel.WBP_WeaponHubStatsPanel_C.InitializeWidget
struct UWBP_WeaponHubStatsPanel_C_InitializeWidget_Params
{
	class APUMG_HUD*                                   HUD;                                                       // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function WBP_WeaponHubStatsPanel.WBP_WeaponHubStatsPanel_C.Handle Input State Changed
struct UWBP_WeaponHubStatsPanel_C_Handle_Input_State_Changed_Params
{
	TEnumAsByte<PlatformGameFramework_EPGAME_INPUT_STATE> InputState;                                                // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function WBP_WeaponHubStatsPanel.WBP_WeaponHubStatsPanel_C.AddStatWidget
struct UWBP_WeaponHubStatsPanel_C_AddStatWidget_Params
{
};

// Function WBP_WeaponHubStatsPanel.WBP_WeaponHubStatsPanel_C.RemoveStatWidget
struct UWBP_WeaponHubStatsPanel_C_RemoveStatWidget_Params
{
};

// Function WBP_WeaponHubStatsPanel.WBP_WeaponHubStatsPanel_C.UpdateStatAtIndex
struct UWBP_WeaponHubStatsPanel_C_UpdateStatAtIndex_Params
{
	int                                                WidgetIndex;                                               // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FItemDisplayStat                            WeaponStat;                                                // 0x0008(0x0038)  (BlueprintVisible, BlueprintReadOnly, Parm)
	struct FItemDisplayStat                            UpgradeStat;                                               // 0x0040(0x0038)  (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function WBP_WeaponHubStatsPanel.WBP_WeaponHubStatsPanel_C.UpdateSideNavigation
struct UWBP_WeaponHubStatsPanel_C_UpdateSideNavigation_Params
{
	bool                                               PrevLevelEnabled;                                          // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                               NextLevelEnabled;                                          // 0x0001(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function WBP_WeaponHubStatsPanel.WBP_WeaponHubStatsPanel_C.BndEvt__PrevTierButton_K2Node_ComponentBoundEvent_6_OnButtonHoverEvent__DelegateSignature
struct UWBP_WeaponHubStatsPanel_C_BndEvt__PrevTierButton_K2Node_ComponentBoundEvent_6_OnButtonHoverEvent__DelegateSignature_Params
{
};

// Function WBP_WeaponHubStatsPanel.WBP_WeaponHubStatsPanel_C.BndEvt__NextTierButton_K2Node_ComponentBoundEvent_7_OnButtonHoverEvent__DelegateSignature
struct UWBP_WeaponHubStatsPanel_C_BndEvt__NextTierButton_K2Node_ComponentBoundEvent_7_OnButtonHoverEvent__DelegateSignature_Params
{
};

// Function WBP_WeaponHubStatsPanel.WBP_WeaponHubStatsPanel_C.ExecuteUbergraph_WBP_WeaponHubStatsPanel
struct UWBP_WeaponHubStatsPanel_C_ExecuteUbergraph_WBP_WeaponHubStatsPanel_Params
{
	int                                                EntryPoint;                                                // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
