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

// Function WBP_RogueMasteryTrackLevel.WBP_RogueMasteryTrackLevel_C.DisplayGamepadFocus
struct UWBP_RogueMasteryTrackLevel_C_DisplayGamepadFocus_Params
{
	bool                                               ShouldDisplayFocus;                                        // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function WBP_RogueMasteryTrackLevel.WBP_RogueMasteryTrackLevel_C.HideEdgeNavCallouts
struct UWBP_RogueMasteryTrackLevel_C_HideEdgeNavCallouts_Params
{
	int                                                TierNumber;                                                // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function WBP_RogueMasteryTrackLevel.WBP_RogueMasteryTrackLevel_C.SetSelected
struct UWBP_RogueMasteryTrackLevel_C_SetSelected_Params
{
	bool                                               Selected;                                                  // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function WBP_RogueMasteryTrackLevel.WBP_RogueMasteryTrackLevel_C.UpdateGamepadPromptState
struct UWBP_RogueMasteryTrackLevel_C_UpdateGamepadPromptState_Params
{
};

// Function WBP_RogueMasteryTrackLevel.WBP_RogueMasteryTrackLevel_C.OnInputStateChanged
struct UWBP_RogueMasteryTrackLevel_C_OnInputStateChanged_Params
{
	TEnumAsByte<PlatformGameFramework_EPGAME_INPUT_STATE> InputState;                                                // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function WBP_RogueMasteryTrackLevel.WBP_RogueMasteryTrackLevel_C.Set Tier Data
struct UWBP_RogueMasteryTrackLevel_C_Set_Tier_Data_Params
{
	struct FActivityTier                               ActivityTier;                                              // 0x0000(0x0040)  (BlueprintVisible, BlueprintReadOnly, Parm)
	int                                                CurrentTier;                                               // 0x0040(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function WBP_RogueMasteryTrackLevel.WBP_RogueMasteryTrackLevel_C.Construct
struct UWBP_RogueMasteryTrackLevel_C_Construct_Params
{
};

// Function WBP_RogueMasteryTrackLevel.WBP_RogueMasteryTrackLevel_C.BndEvt__Button_339_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
struct UWBP_RogueMasteryTrackLevel_C_BndEvt__Button_339_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature_Params
{
};

// Function WBP_RogueMasteryTrackLevel.WBP_RogueMasteryTrackLevel_C.BndEvt__Button_339_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature
struct UWBP_RogueMasteryTrackLevel_C_BndEvt__Button_339_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature_Params
{
};

// Function WBP_RogueMasteryTrackLevel.WBP_RogueMasteryTrackLevel_C.BndEvt__Button_339_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature
struct UWBP_RogueMasteryTrackLevel_C_BndEvt__Button_339_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature_Params
{
};

// Function WBP_RogueMasteryTrackLevel.WBP_RogueMasteryTrackLevel_C.GamepadHover
struct UWBP_RogueMasteryTrackLevel_C_GamepadHover_Params
{
};

// Function WBP_RogueMasteryTrackLevel.WBP_RogueMasteryTrackLevel_C.GamepadUnhover
struct UWBP_RogueMasteryTrackLevel_C_GamepadUnhover_Params
{
};

// Function WBP_RogueMasteryTrackLevel.WBP_RogueMasteryTrackLevel_C.InitializeWidget
struct UWBP_RogueMasteryTrackLevel_C_InitializeWidget_Params
{
	class APUMG_HUD*                                   HUD;                                                       // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function WBP_RogueMasteryTrackLevel.WBP_RogueMasteryTrackLevel_C.ExecuteUbergraph_WBP_RogueMasteryTrackLevel
struct UWBP_RogueMasteryTrackLevel_C_ExecuteUbergraph_WBP_RogueMasteryTrackLevel_Params
{
	int                                                EntryPoint;                                                // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function WBP_RogueMasteryTrackLevel.WBP_RogueMasteryTrackLevel_C.OnTrackLevelSelected__DelegateSignature
struct UWBP_RogueMasteryTrackLevel_C_OnTrackLevelSelected__DelegateSignature_Params
{
	struct FActivityTier                               Activity;                                                  // 0x0000(0x0040)  (BlueprintVisible, BlueprintReadOnly, Parm)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
