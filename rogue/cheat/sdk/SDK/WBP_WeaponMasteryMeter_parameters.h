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

// Function WBP_WeaponMasteryMeter.WBP_WeaponMasteryMeter_C.SequenceEvent__ENTRYPOINTWBP_WeaponMasteryMeter_3
struct UWBP_WeaponMasteryMeter_C_SequenceEvent__ENTRYPOINTWBP_WeaponMasteryMeter_3_Params
{
};

// Function WBP_WeaponMasteryMeter.WBP_WeaponMasteryMeter_C.SequenceEvent__ENTRYPOINTWBP_WeaponMasteryMeter_2
struct UWBP_WeaponMasteryMeter_C_SequenceEvent__ENTRYPOINTWBP_WeaponMasteryMeter_2_Params
{
};

// Function WBP_WeaponMasteryMeter.WBP_WeaponMasteryMeter_C.SequenceEvent__ENTRYPOINTWBP_WeaponMasteryMeter_1
struct UWBP_WeaponMasteryMeter_C_SequenceEvent__ENTRYPOINTWBP_WeaponMasteryMeter_1_Params
{
};

// Function WBP_WeaponMasteryMeter.WBP_WeaponMasteryMeter_C.SetBarColors
struct UWBP_WeaponMasteryMeter_C_SetBarColors_Params
{
	struct FSlateColor                                 BaseColor;                                                 // 0x0000(0x0028)  (BlueprintVisible, BlueprintReadOnly, Parm)
	struct FSlateColor                                 IncreaseColor;                                             // 0x0028(0x0028)  (BlueprintVisible, BlueprintReadOnly, Parm)
	struct FSlateColor                                 DecreaseColor;                                             // 0x0050(0x0028)  (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function WBP_WeaponMasteryMeter.WBP_WeaponMasteryMeter_C.Revert Delta Anim
struct UWBP_WeaponMasteryMeter_C_Revert_Delta_Anim_Params
{
};

// Function WBP_WeaponMasteryMeter.WBP_WeaponMasteryMeter_C.DisplayAnimState
struct UWBP_WeaponMasteryMeter_C_DisplayAnimState_Params
{
	int                                                BaseCount;                                                 // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              ProgressCount;                                             // 0x0004(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function WBP_WeaponMasteryMeter.WBP_WeaponMasteryMeter_C.StartDeltaAnim
struct UWBP_WeaponMasteryMeter_C_StartDeltaAnim_Params
{
};

// Function WBP_WeaponMasteryMeter.WBP_WeaponMasteryMeter_C.InitializeDeltaAnim
struct UWBP_WeaponMasteryMeter_C_InitializeDeltaAnim_Params
{
	int                                                BaseCount;                                                 // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                ProgressCount;                                             // 0x0004(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                FinalProgressCount;                                        // 0x0008(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               FromLevelUp;                                               // 0x000C(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function WBP_WeaponMasteryMeter.WBP_WeaponMasteryMeter_C.GetItemTypeTexts
struct UWBP_WeaponMasteryMeter_C_GetItemTypeTexts_Params
{
	TArray<struct FTierRewardItemData>                 RewardItems;                                               // 0x0000(0x0010)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, HasGetValueTypeHash)
	TArray<struct FText>                               ReturnValue;                                               // 0x0010(0x0010)  (Parm, OutParm, ReturnParm, HasGetValueTypeHash)
};

// Function WBP_WeaponMasteryMeter.WBP_WeaponMasteryMeter_C.Apply Layout for Mastery Type
struct UWBP_WeaponMasteryMeter_C_Apply_Layout_for_Mastery_Type_Params
{
};

// Function WBP_WeaponMasteryMeter.WBP_WeaponMasteryMeter_C.SetPageTitleText
struct UWBP_WeaponMasteryMeter_C_SetPageTitleText_Params
{
	struct FText                                       PageTitleText;                                             // 0x0000(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm)
	struct FText                                       WeaponCategoryText;                                        // 0x0018(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function WBP_WeaponMasteryMeter.WBP_WeaponMasteryMeter_C.LevelUp_EmblemSwap
struct UWBP_WeaponMasteryMeter_C_LevelUp_EmblemSwap_Params
{
};

// Function WBP_WeaponMasteryMeter.WBP_WeaponMasteryMeter_C.LevelUp_BarFlash
struct UWBP_WeaponMasteryMeter_C_LevelUp_BarFlash_Params
{
};

// Function WBP_WeaponMasteryMeter.WBP_WeaponMasteryMeter_C.LevelUp_RewardSwap
struct UWBP_WeaponMasteryMeter_C_LevelUp_RewardSwap_Params
{
};

// Function WBP_WeaponMasteryMeter.WBP_WeaponMasteryMeter_C.InitializeTickAnimations
struct UWBP_WeaponMasteryMeter_C_InitializeTickAnimations_Params
{
};

// Function WBP_WeaponMasteryMeter.WBP_WeaponMasteryMeter_C.DeltaAnim_Update
struct UWBP_WeaponMasteryMeter_C_DeltaAnim_Update_Params
{
	float                                              ElapsedTime;                                               // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              ElapsedAlpha;                                              // 0x0004(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function WBP_WeaponMasteryMeter.WBP_WeaponMasteryMeter_C.DeltaAnim_Finished
struct UWBP_WeaponMasteryMeter_C_DeltaAnim_Finished_Params
{
};

// Function WBP_WeaponMasteryMeter.WBP_WeaponMasteryMeter_C.PreConstruct
struct UWBP_WeaponMasteryMeter_C_PreConstruct_Params
{
	bool                                               IsDesignTime;                                              // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function WBP_WeaponMasteryMeter.WBP_WeaponMasteryMeter_C.Construct
struct UWBP_WeaponMasteryMeter_C_Construct_Params
{
};

// Function WBP_WeaponMasteryMeter.WBP_WeaponMasteryMeter_C.DisplayProgressReward
struct UWBP_WeaponMasteryMeter_C_DisplayProgressReward_Params
{
	struct FWeaponMasteryRewardDisplayData             RewardDisplayData;                                         // 0x0000(0x0098)  (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function WBP_WeaponMasteryMeter.WBP_WeaponMasteryMeter_C.BndEvt__WBP_KSCosmeticItemDisplay_2_K2Node_ComponentBoundEvent_0_OnCosmeticClicked__DelegateSignature
struct UWBP_WeaponMasteryMeter_C_BndEvt__WBP_KSCosmeticItemDisplay_2_K2Node_ComponentBoundEvent_0_OnCosmeticClicked__DelegateSignature_Params
{
	class UWBP_KSCosmeticItemDisplay_C*                Widget;                                                    // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FCosmeticSlotDetails                        CosmeticSlotDetails;                                       // 0x0008(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)
};

// Function WBP_WeaponMasteryMeter.WBP_WeaponMasteryMeter_C.DisplayAltDescription
struct UWBP_WeaponMasteryMeter_C_DisplayAltDescription_Params
{
	struct FText                                       DescriptionText;                                           // 0x0000(0x0018)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};

// Function WBP_WeaponMasteryMeter.WBP_WeaponMasteryMeter_C.DisplayWeaponCategory
struct UWBP_WeaponMasteryMeter_C_DisplayWeaponCategory_Params
{
	class UKSWeaponCategoryAsset*                      WeaponCategory;                                            // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function WBP_WeaponMasteryMeter.WBP_WeaponMasteryMeter_C.DisplayWeapon
struct UWBP_WeaponMasteryMeter_C_DisplayWeapon_Params
{
	class UKSWeaponAsset*                              WeaponAsset;                                               // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function WBP_WeaponMasteryMeter.WBP_WeaponMasteryMeter_C.DisplayWeaponsMaster
struct UWBP_WeaponMasteryMeter_C_DisplayWeaponsMaster_Params
{
};

// Function WBP_WeaponMasteryMeter.WBP_WeaponMasteryMeter_C.HandleInputStateChanged
struct UWBP_WeaponMasteryMeter_C_HandleInputStateChanged_Params
{
	TEnumAsByte<PlatformGameFramework_EPGAME_INPUT_STATE> InputState;                                                // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function WBP_WeaponMasteryMeter.WBP_WeaponMasteryMeter_C.OnInitialized
struct UWBP_WeaponMasteryMeter_C_OnInitialized_Params
{
};

// Function WBP_WeaponMasteryMeter.WBP_WeaponMasteryMeter_C.DisplayProgress
struct UWBP_WeaponMasteryMeter_C_DisplayProgress_Params
{
	int                                                MasteryLevel;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                LevelProgressCount;                                        // 0x0004(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                LevelProgressTotal;                                        // 0x0008(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function WBP_WeaponMasteryMeter.WBP_WeaponMasteryMeter_C.ClearProgressReward
struct UWBP_WeaponMasteryMeter_C_ClearProgressReward_Params
{
};

// Function WBP_WeaponMasteryMeter.WBP_WeaponMasteryMeter_C.BndEvt__Button_261_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature
struct UWBP_WeaponMasteryMeter_C_BndEvt__Button_261_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature_Params
{
};

// Function WBP_WeaponMasteryMeter.WBP_WeaponMasteryMeter_C.BndEvt__MasteryRewardsTextHitTarget_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature
struct UWBP_WeaponMasteryMeter_C_BndEvt__MasteryRewardsTextHitTarget_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature_Params
{
};

// Function WBP_WeaponMasteryMeter.WBP_WeaponMasteryMeter_C.BndEvt__MasteryRewardsTextHitTarget_K2Node_ComponentBoundEvent_3_OnButtonHoverEvent__DelegateSignature
struct UWBP_WeaponMasteryMeter_C_BndEvt__MasteryRewardsTextHitTarget_K2Node_ComponentBoundEvent_3_OnButtonHoverEvent__DelegateSignature_Params
{
};

// Function WBP_WeaponMasteryMeter.WBP_WeaponMasteryMeter_C.BndEvt__WBP_KSCosmeticItemDisplay_2_K2Node_ComponentBoundEvent_4_OnHover__DelegateSignature
struct UWBP_WeaponMasteryMeter_C_BndEvt__WBP_KSCosmeticItemDisplay_2_K2Node_ComponentBoundEvent_4_OnHover__DelegateSignature_Params
{
	struct FCosmeticSlotDetails                        CosmeticSlotDetails;                                       // 0x0000(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)
	bool                                               IsGamepad;                                                 // 0x0018(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	class UWBP_KSCosmeticItemDisplay_C*                Widget;                                                    // 0x0020(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function WBP_WeaponMasteryMeter.WBP_WeaponMasteryMeter_C.BndEvt__WBP_KSCosmeticItemDisplay_2_K2Node_ComponentBoundEvent_5_OnUnhover__DelegateSignature
struct UWBP_WeaponMasteryMeter_C_BndEvt__WBP_KSCosmeticItemDisplay_2_K2Node_ComponentBoundEvent_5_OnUnhover__DelegateSignature_Params
{
};

// Function WBP_WeaponMasteryMeter.WBP_WeaponMasteryMeter_C.InitializeWidget
struct UWBP_WeaponMasteryMeter_C_InitializeWidget_Params
{
	class APUMG_HUD*                                   HUD;                                                       // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function WBP_WeaponMasteryMeter.WBP_WeaponMasteryMeter_C.Handle LevelUp Anim Finished
struct UWBP_WeaponMasteryMeter_C_Handle_LevelUp_Anim_Finished_Params
{
};

// Function WBP_WeaponMasteryMeter.WBP_WeaponMasteryMeter_C.ExecuteUbergraph_WBP_WeaponMasteryMeter
struct UWBP_WeaponMasteryMeter_C_ExecuteUbergraph_WBP_WeaponMasteryMeter_Params
{
	int                                                EntryPoint;                                                // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function WBP_WeaponMasteryMeter.WBP_WeaponMasteryMeter_C.LevelUpComplete__DelegateSignature
struct UWBP_WeaponMasteryMeter_C_LevelUpComplete__DelegateSignature_Params
{
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
