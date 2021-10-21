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

// Function WBP_JobGeneralButton.WBP_JobGeneralButton_C.ShouldShowNewBadge
struct UWBP_JobGeneralButton_C_ShouldShowNewBadge_Params
{
	bool                                               ShowNewBadge;                                              // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function WBP_JobGeneralButton.WBP_JobGeneralButton_C.IsJobOwned
struct UWBP_JobGeneralButton_C_IsJobOwned_Params
{
	bool                                               owned;                                                     // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function WBP_JobGeneralButton.WBP_JobGeneralButton_C.UpdateOwnershipDisplay
struct UWBP_JobGeneralButton_C_UpdateOwnershipDisplay_Params
{
};

// Function WBP_JobGeneralButton.WBP_JobGeneralButton_C.DisplayFavoriteStatus
struct UWBP_JobGeneralButton_C_DisplayFavoriteStatus_Params
{
};

// Function WBP_JobGeneralButton.WBP_JobGeneralButton_C.PopulateJobButton
struct UWBP_JobGeneralButton_C_PopulateJobButton_Params
{
};

// Function WBP_JobGeneralButton.WBP_JobGeneralButton_C.NavigateConfirm
struct UWBP_JobGeneralButton_C_NavigateConfirm_Params
{
	bool                                               ReturnValue;                                               // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
};

// Function WBP_JobGeneralButton.WBP_JobGeneralButton_C.OnClickSound
struct UWBP_JobGeneralButton_C_OnClickSound_Params
{
};

// Function WBP_JobGeneralButton.WBP_JobGeneralButton_C.OnHoverSound
struct UWBP_JobGeneralButton_C_OnHoverSound_Params
{
};

// Function WBP_JobGeneralButton.WBP_JobGeneralButton_C.OnHoverFavoriteSFX
struct UWBP_JobGeneralButton_C_OnHoverFavoriteSFX_Params
{
};

// Function WBP_JobGeneralButton.WBP_JobGeneralButton_C.OnClickFavoriteSFX
struct UWBP_JobGeneralButton_C_OnClickFavoriteSFX_Params
{
};

// Function WBP_JobGeneralButton.WBP_JobGeneralButton_C.BndEvt__HitTarget_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
struct UWBP_JobGeneralButton_C_BndEvt__HitTarget_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature_Params
{
};

// Function WBP_JobGeneralButton.WBP_JobGeneralButton_C.Construct
struct UWBP_JobGeneralButton_C_Construct_Params
{
};

// Function WBP_JobGeneralButton.WBP_JobGeneralButton_C.PreConstruct
struct UWBP_JobGeneralButton_C_PreConstruct_Params
{
	bool                                               IsDesignTime;                                              // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function WBP_JobGeneralButton.WBP_JobGeneralButton_C.OnGamepadConfirm
struct UWBP_JobGeneralButton_C_OnGamepadConfirm_Params
{
};

// Function WBP_JobGeneralButton.WBP_JobGeneralButton_C.GamepadHover
struct UWBP_JobGeneralButton_C_GamepadHover_Params
{
};

// Function WBP_JobGeneralButton.WBP_JobGeneralButton_C.GamepadUnhover
struct UWBP_JobGeneralButton_C_GamepadUnhover_Params
{
};

// Function WBP_JobGeneralButton.WBP_JobGeneralButton_C.BndEvt__HitTarget_K2Node_ComponentBoundEvent_7_OnButtonHoverEvent__DelegateSignature
struct UWBP_JobGeneralButton_C_BndEvt__HitTarget_K2Node_ComponentBoundEvent_7_OnButtonHoverEvent__DelegateSignature_Params
{
};

// Function WBP_JobGeneralButton.WBP_JobGeneralButton_C.BndEvt__HitTarget_K2Node_ComponentBoundEvent_8_OnButtonHoverEvent__DelegateSignature
struct UWBP_JobGeneralButton_C_BndEvt__HitTarget_K2Node_ComponentBoundEvent_8_OnButtonHoverEvent__DelegateSignature_Params
{
};

// Function WBP_JobGeneralButton.WBP_JobGeneralButton_C.InitializeWidget
struct UWBP_JobGeneralButton_C_InitializeWidget_Params
{
	class APUMG_HUD*                                   HUD;                                                       // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function WBP_JobGeneralButton.WBP_JobGeneralButton_C.BndEvt__HitTarget_K2Node_ComponentBoundEvent_1_OnButtonPressedEvent__DelegateSignature
struct UWBP_JobGeneralButton_C_BndEvt__HitTarget_K2Node_ComponentBoundEvent_1_OnButtonPressedEvent__DelegateSignature_Params
{
};

// Function WBP_JobGeneralButton.WBP_JobGeneralButton_C.BndEvt__FavoriteHitBox_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature
struct UWBP_JobGeneralButton_C_BndEvt__FavoriteHitBox_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature_Params
{
};

// Function WBP_JobGeneralButton.WBP_JobGeneralButton_C.BndEvt__FavoriteHitBox_K2Node_ComponentBoundEvent_3_OnButtonHoverEvent__DelegateSignature
struct UWBP_JobGeneralButton_C_BndEvt__FavoriteHitBox_K2Node_ComponentBoundEvent_3_OnButtonHoverEvent__DelegateSignature_Params
{
};

// Function WBP_JobGeneralButton.WBP_JobGeneralButton_C.BndEvt__FavoriteHitBox_K2Node_ComponentBoundEvent_4_OnButtonClickedEvent__DelegateSignature
struct UWBP_JobGeneralButton_C_BndEvt__FavoriteHitBox_K2Node_ComponentBoundEvent_4_OnButtonClickedEvent__DelegateSignature_Params
{
};

// Function WBP_JobGeneralButton.WBP_JobGeneralButton_C.UninitializeWidget
struct UWBP_JobGeneralButton_C_UninitializeWidget_Params
{
};

// Function WBP_JobGeneralButton.WBP_JobGeneralButton_C.ExecuteUbergraph_WBP_JobGeneralButton
struct UWBP_JobGeneralButton_C_ExecuteUbergraph_WBP_JobGeneralButton_Params
{
	int                                                EntryPoint;                                                // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function WBP_JobGeneralButton.WBP_JobGeneralButton_C.OnFavorited__DelegateSignature
struct UWBP_JobGeneralButton_C_OnFavorited__DelegateSignature_Params
{
};

// Function WBP_JobGeneralButton.WBP_JobGeneralButton_C.OnUnhovered__DelegateSignature
struct UWBP_JobGeneralButton_C_OnUnhovered__DelegateSignature_Params
{
};

// Function WBP_JobGeneralButton.WBP_JobGeneralButton_C.OnHovered__DelegateSignature
struct UWBP_JobGeneralButton_C_OnHovered__DelegateSignature_Params
{
	class UKSJobItem*                                  JobItem;                                                   // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function WBP_JobGeneralButton.WBP_JobGeneralButton_C.OnClicked__DelegateSignature
struct UWBP_JobGeneralButton_C_OnClicked__DelegateSignature_Params
{
	class UKSJobItem*                                  JobItem;                                                   // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
