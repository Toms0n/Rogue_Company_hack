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

// Function WBP_ButtonSlot_Cosmetic.WBP_ButtonSlot_Cosmetic_C.ShowMythicRarityFrame
struct UWBP_ButtonSlot_Cosmetic_C_ShowMythicRarityFrame_Params
{
	bool                                               ShowMythicRarityFrame;                                     // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function WBP_ButtonSlot_Cosmetic.WBP_ButtonSlot_Cosmetic_C.SetIsLocked
struct UWBP_ButtonSlot_Cosmetic_C_SetIsLocked_Params
{
	bool                                               IsLocked;                                                  // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function WBP_ButtonSlot_Cosmetic.WBP_ButtonSlot_Cosmetic_C.ReverseHoverNoZoom
struct UWBP_ButtonSlot_Cosmetic_C_ReverseHoverNoZoom_Params
{
};

// Function WBP_ButtonSlot_Cosmetic.WBP_ButtonSlot_Cosmetic_C.PlayHoverNoZoom
struct UWBP_ButtonSlot_Cosmetic_C_PlayHoverNoZoom_Params
{
};

// Function WBP_ButtonSlot_Cosmetic.WBP_ButtonSlot_Cosmetic_C.RestoreDefaultColor
struct UWBP_ButtonSlot_Cosmetic_C_RestoreDefaultColor_Params
{
};

// Function WBP_ButtonSlot_Cosmetic.WBP_ButtonSlot_Cosmetic_C.OverrideColor
struct UWBP_ButtonSlot_Cosmetic_C_OverrideColor_Params
{
	struct FLinearColor                                New_Base_Color;                                            // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                                New_Highlight_Color;                                       // 0x0010(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function WBP_ButtonSlot_Cosmetic.WBP_ButtonSlot_Cosmetic_C.Set Tint
struct UWBP_ButtonSlot_Cosmetic_C_Set_Tint_Params
{
	struct FLinearColor                                BaseColor;                                                 // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                                HighlightColor;                                            // 0x0010(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function WBP_ButtonSlot_Cosmetic.WBP_ButtonSlot_Cosmetic_C.OnHoveredLogic
struct UWBP_ButtonSlot_Cosmetic_C_OnHoveredLogic_Params
{
	bool                                               IsGamepad;                                                 // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function WBP_ButtonSlot_Cosmetic.WBP_ButtonSlot_Cosmetic_C.NavigateConfirm
struct UWBP_ButtonSlot_Cosmetic_C_NavigateConfirm_Params
{
	bool                                               ReturnValue;                                               // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
};

// Function WBP_ButtonSlot_Cosmetic.WBP_ButtonSlot_Cosmetic_C.OnHoverSound
struct UWBP_ButtonSlot_Cosmetic_C_OnHoverSound_Params
{
};

// Function WBP_ButtonSlot_Cosmetic.WBP_ButtonSlot_Cosmetic_C.Construct
struct UWBP_ButtonSlot_Cosmetic_C_Construct_Params
{
};

// Function WBP_ButtonSlot_Cosmetic.WBP_ButtonSlot_Cosmetic_C.OnGamepadConfirmed
struct UWBP_ButtonSlot_Cosmetic_C_OnGamepadConfirmed_Params
{
};

// Function WBP_ButtonSlot_Cosmetic.WBP_ButtonSlot_Cosmetic_C.BndEvt__HitTarget_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
struct UWBP_ButtonSlot_Cosmetic_C_BndEvt__HitTarget_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature_Params
{
};

// Function WBP_ButtonSlot_Cosmetic.WBP_ButtonSlot_Cosmetic_C.BndEvt__HitTarget_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature
struct UWBP_ButtonSlot_Cosmetic_C_BndEvt__HitTarget_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature_Params
{
};

// Function WBP_ButtonSlot_Cosmetic.WBP_ButtonSlot_Cosmetic_C.BndEvt__HitTarget_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature
struct UWBP_ButtonSlot_Cosmetic_C_BndEvt__HitTarget_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature_Params
{
};

// Function WBP_ButtonSlot_Cosmetic.WBP_ButtonSlot_Cosmetic_C.GamepadHover
struct UWBP_ButtonSlot_Cosmetic_C_GamepadHover_Params
{
};

// Function WBP_ButtonSlot_Cosmetic.WBP_ButtonSlot_Cosmetic_C.GamepadUnhover
struct UWBP_ButtonSlot_Cosmetic_C_GamepadUnhover_Params
{
};

// Function WBP_ButtonSlot_Cosmetic.WBP_ButtonSlot_Cosmetic_C.DisableButton
struct UWBP_ButtonSlot_Cosmetic_C_DisableButton_Params
{
	bool                                               bShouldDisable;                                            // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function WBP_ButtonSlot_Cosmetic.WBP_ButtonSlot_Cosmetic_C.CallButtonHover
struct UWBP_ButtonSlot_Cosmetic_C_CallButtonHover_Params
{
};

// Function WBP_ButtonSlot_Cosmetic.WBP_ButtonSlot_Cosmetic_C.CallButtonUnhover
struct UWBP_ButtonSlot_Cosmetic_C_CallButtonUnhover_Params
{
};

// Function WBP_ButtonSlot_Cosmetic.WBP_ButtonSlot_Cosmetic_C.SetIsActiveState
struct UWBP_ButtonSlot_Cosmetic_C_SetIsActiveState_Params
{
	bool                                               bIsActive;                                                 // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function WBP_ButtonSlot_Cosmetic.WBP_ButtonSlot_Cosmetic_C.PreConstruct
struct UWBP_ButtonSlot_Cosmetic_C_PreConstruct_Params
{
	bool                                               IsDesignTime;                                              // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function WBP_ButtonSlot_Cosmetic.WBP_ButtonSlot_Cosmetic_C.BndEvt__HitTarget_K2Node_ComponentBoundEvent_3_OnButtonPressedEvent__DelegateSignature
struct UWBP_ButtonSlot_Cosmetic_C_BndEvt__HitTarget_K2Node_ComponentBoundEvent_3_OnButtonPressedEvent__DelegateSignature_Params
{
};

// Function WBP_ButtonSlot_Cosmetic.WBP_ButtonSlot_Cosmetic_C.BndEvt__HitTarget_K2Node_ComponentBoundEvent_4_OnButtonReleasedEvent__DelegateSignature
struct UWBP_ButtonSlot_Cosmetic_C_BndEvt__HitTarget_K2Node_ComponentBoundEvent_4_OnButtonReleasedEvent__DelegateSignature_Params
{
};

// Function WBP_ButtonSlot_Cosmetic.WBP_ButtonSlot_Cosmetic_C.OnClickSound
struct UWBP_ButtonSlot_Cosmetic_C_OnClickSound_Params
{
};

// Function WBP_ButtonSlot_Cosmetic.WBP_ButtonSlot_Cosmetic_C.Event Display Selected
struct UWBP_ButtonSlot_Cosmetic_C_Event_Display_Selected_Params
{
	bool                                               IsSelected;                                                // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function WBP_ButtonSlot_Cosmetic.WBP_ButtonSlot_Cosmetic_C.Event Display Equipped
struct UWBP_ButtonSlot_Cosmetic_C_Event_Display_Equipped_Params
{
	bool                                               IsEquipped;                                                // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function WBP_ButtonSlot_Cosmetic.WBP_ButtonSlot_Cosmetic_C.ExecuteUbergraph_WBP_ButtonSlot_Cosmetic
struct UWBP_ButtonSlot_Cosmetic_C_ExecuteUbergraph_WBP_ButtonSlot_Cosmetic_Params
{
	int                                                EntryPoint;                                                // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function WBP_ButtonSlot_Cosmetic.WBP_ButtonSlot_Cosmetic_C.OnBtnUnhovered__DelegateSignature
struct UWBP_ButtonSlot_Cosmetic_C_OnBtnUnhovered__DelegateSignature_Params
{
};

// Function WBP_ButtonSlot_Cosmetic.WBP_ButtonSlot_Cosmetic_C.OnBtnHovered__DelegateSignature
struct UWBP_ButtonSlot_Cosmetic_C_OnBtnHovered__DelegateSignature_Params
{
	bool                                               IsGamepad;                                                 // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function WBP_ButtonSlot_Cosmetic.WBP_ButtonSlot_Cosmetic_C.OnBtnClicked__DelegateSignature
struct UWBP_ButtonSlot_Cosmetic_C_OnBtnClicked__DelegateSignature_Params
{
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
