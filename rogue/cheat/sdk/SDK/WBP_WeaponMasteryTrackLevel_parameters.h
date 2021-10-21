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

// Function WBP_WeaponMasteryTrackLevel.WBP_WeaponMasteryTrackLevel_C.GetItemTypeTexts
struct UWBP_WeaponMasteryTrackLevel_C_GetItemTypeTexts_Params
{
	TArray<struct FTierRewardItemData>                 Items;                                                     // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, HasGetValueTypeHash)
	TArray<struct FText>                               ReturnValue;                                               // 0x0010(0x0010)  (Parm, OutParm, ReturnParm, HasGetValueTypeHash)
};

// Function WBP_WeaponMasteryTrackLevel.WBP_WeaponMasteryTrackLevel_C.ToggleEdgeNavCallouts
struct UWBP_WeaponMasteryTrackLevel_C_ToggleEdgeNavCallouts_Params
{
	bool                                               ShowPrev;                                                  // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                               ShowNext;                                                  // 0x0001(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function WBP_WeaponMasteryTrackLevel.WBP_WeaponMasteryTrackLevel_C.DisplayWeaponsMaster
struct UWBP_WeaponMasteryTrackLevel_C_DisplayWeaponsMaster_Params
{
};

// Function WBP_WeaponMasteryTrackLevel.WBP_WeaponMasteryTrackLevel_C.DisplayWeaponCategory
struct UWBP_WeaponMasteryTrackLevel_C_DisplayWeaponCategory_Params
{
	class UKSWeaponCategoryAsset*                      Weapon_Category;                                           // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function WBP_WeaponMasteryTrackLevel.WBP_WeaponMasteryTrackLevel_C.DisplayWeaponAsset
struct UWBP_WeaponMasteryTrackLevel_C_DisplayWeaponAsset_Params
{
	class UKSWeaponAsset*                              Weapon_Asset;                                              // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function WBP_WeaponMasteryTrackLevel.WBP_WeaponMasteryTrackLevel_C.UpdateIsAchieved
struct UWBP_WeaponMasteryTrackLevel_C_UpdateIsAchieved_Params
{
	bool                                               IsAchieved;                                                // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function WBP_WeaponMasteryTrackLevel.WBP_WeaponMasteryTrackLevel_C.DisplayGamepadFocus
struct UWBP_WeaponMasteryTrackLevel_C_DisplayGamepadFocus_Params
{
	bool                                               ShouldDisplayFocus;                                        // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function WBP_WeaponMasteryTrackLevel.WBP_WeaponMasteryTrackLevel_C.SetSelected
struct UWBP_WeaponMasteryTrackLevel_C_SetSelected_Params
{
	bool                                               Selected;                                                  // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function WBP_WeaponMasteryTrackLevel.WBP_WeaponMasteryTrackLevel_C.UpdateGamepadPromptState
struct UWBP_WeaponMasteryTrackLevel_C_UpdateGamepadPromptState_Params
{
};

// Function WBP_WeaponMasteryTrackLevel.WBP_WeaponMasteryTrackLevel_C.OnInputStateChanged
struct UWBP_WeaponMasteryTrackLevel_C_OnInputStateChanged_Params
{
	TEnumAsByte<PlatformGameFramework_EPGAME_INPUT_STATE> InputState;                                                // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function WBP_WeaponMasteryTrackLevel.WBP_WeaponMasteryTrackLevel_C.Set Tier Data
struct UWBP_WeaponMasteryTrackLevel_C_Set_Tier_Data_Params
{
	struct FActivityTier                               ActivityTier;                                              // 0x0000(0x0040)  (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function WBP_WeaponMasteryTrackLevel.WBP_WeaponMasteryTrackLevel_C.Construct
struct UWBP_WeaponMasteryTrackLevel_C_Construct_Params
{
};

// Function WBP_WeaponMasteryTrackLevel.WBP_WeaponMasteryTrackLevel_C.BndEvt__Button_339_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
struct UWBP_WeaponMasteryTrackLevel_C_BndEvt__Button_339_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature_Params
{
};

// Function WBP_WeaponMasteryTrackLevel.WBP_WeaponMasteryTrackLevel_C.BndEvt__Button_339_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature
struct UWBP_WeaponMasteryTrackLevel_C_BndEvt__Button_339_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature_Params
{
};

// Function WBP_WeaponMasteryTrackLevel.WBP_WeaponMasteryTrackLevel_C.BndEvt__Button_339_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature
struct UWBP_WeaponMasteryTrackLevel_C_BndEvt__Button_339_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature_Params
{
};

// Function WBP_WeaponMasteryTrackLevel.WBP_WeaponMasteryTrackLevel_C.GamepadHover
struct UWBP_WeaponMasteryTrackLevel_C_GamepadHover_Params
{
};

// Function WBP_WeaponMasteryTrackLevel.WBP_WeaponMasteryTrackLevel_C.GamepadUnhover
struct UWBP_WeaponMasteryTrackLevel_C_GamepadUnhover_Params
{
};

// Function WBP_WeaponMasteryTrackLevel.WBP_WeaponMasteryTrackLevel_C.InitializeWidget
struct UWBP_WeaponMasteryTrackLevel_C_InitializeWidget_Params
{
	class APUMG_HUD*                                   HUD;                                                       // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function WBP_WeaponMasteryTrackLevel.WBP_WeaponMasteryTrackLevel_C.ExecuteUbergraph_WBP_WeaponMasteryTrackLevel
struct UWBP_WeaponMasteryTrackLevel_C_ExecuteUbergraph_WBP_WeaponMasteryTrackLevel_Params
{
	int                                                EntryPoint;                                                // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function WBP_WeaponMasteryTrackLevel.WBP_WeaponMasteryTrackLevel_C.OnTrackLevelSelected__DelegateSignature
struct UWBP_WeaponMasteryTrackLevel_C_OnTrackLevelSelected__DelegateSignature_Params
{
	struct FActivityTier                               Activity_Tier;                                             // 0x0000(0x0040)  (BlueprintVisible, BlueprintReadOnly, Parm)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
