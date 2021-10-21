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

// Function WBP_WeaponProgressButton.WBP_WeaponProgressButton_C.BindToLoadouts
struct UWBP_WeaponProgressButton_C_BindToLoadouts_Params
{
};

// Function WBP_WeaponProgressButton.WBP_WeaponProgressButton_C.UpdateFavoriteWeaponStatus
struct UWBP_WeaponProgressButton_C_UpdateFavoriteWeaponStatus_Params
{
};

// Function WBP_WeaponProgressButton.WBP_WeaponProgressButton_C.SetVisualProperties
struct UWBP_WeaponProgressButton_C_SetVisualProperties_Params
{
};

// Function WBP_WeaponProgressButton.WBP_WeaponProgressButton_C.SetIsMasteredDisplay
struct UWBP_WeaponProgressButton_C_SetIsMasteredDisplay_Params
{
};

// Function WBP_WeaponProgressButton.WBP_WeaponProgressButton_C.NavigateConfirm
struct UWBP_WeaponProgressButton_C_NavigateConfirm_Params
{
	bool                                               ReturnValue;                                               // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
};

// Function WBP_WeaponProgressButton.WBP_WeaponProgressButton_C.BndEvt__HitTarget_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature
struct UWBP_WeaponProgressButton_C_BndEvt__HitTarget_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature_Params
{
};

// Function WBP_WeaponProgressButton.WBP_WeaponProgressButton_C.BndEvt__HitTarget_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature
struct UWBP_WeaponProgressButton_C_BndEvt__HitTarget_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature_Params
{
};

// Function WBP_WeaponProgressButton.WBP_WeaponProgressButton_C.GamepadHover
struct UWBP_WeaponProgressButton_C_GamepadHover_Params
{
};

// Function WBP_WeaponProgressButton.WBP_WeaponProgressButton_C.GamepadUnhover
struct UWBP_WeaponProgressButton_C_GamepadUnhover_Params
{
};

// Function WBP_WeaponProgressButton.WBP_WeaponProgressButton_C.BndEvt__HitTarget_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature
struct UWBP_WeaponProgressButton_C_BndEvt__HitTarget_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature_Params
{
};

// Function WBP_WeaponProgressButton.WBP_WeaponProgressButton_C.DisplayWeapon
struct UWBP_WeaponProgressButton_C_DisplayWeapon_Params
{
	class UKSWeaponAsset*                              DisplayedWeapon;                                           // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function WBP_WeaponProgressButton.WBP_WeaponProgressButton_C.PreConstruct
struct UWBP_WeaponProgressButton_C_PreConstruct_Params
{
	bool                                               IsDesignTime;                                              // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function WBP_WeaponProgressButton.WBP_WeaponProgressButton_C.DisplayCosmetic
struct UWBP_WeaponProgressButton_C_DisplayCosmetic_Params
{
	class UKSWeaponAttachment*                         Cosmetic;                                                  // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function WBP_WeaponProgressButton.WBP_WeaponProgressButton_C.BndEvt__SubButton_K2Node_ComponentBoundEvent_3_OnButtonHoverEvent__DelegateSignature
struct UWBP_WeaponProgressButton_C_BndEvt__SubButton_K2Node_ComponentBoundEvent_3_OnButtonHoverEvent__DelegateSignature_Params
{
};

// Function WBP_WeaponProgressButton.WBP_WeaponProgressButton_C.BndEvt__SubButton_K2Node_ComponentBoundEvent_4_OnButtonHoverEvent__DelegateSignature
struct UWBP_WeaponProgressButton_C_BndEvt__SubButton_K2Node_ComponentBoundEvent_4_OnButtonHoverEvent__DelegateSignature_Params
{
};

// Function WBP_WeaponProgressButton.WBP_WeaponProgressButton_C.BndEvt__SubButton_K2Node_ComponentBoundEvent_5_OnButtonClickedEvent__DelegateSignature
struct UWBP_WeaponProgressButton_C_BndEvt__SubButton_K2Node_ComponentBoundEvent_5_OnButtonClickedEvent__DelegateSignature_Params
{
};

// Function WBP_WeaponProgressButton.WBP_WeaponProgressButton_C.BndEvt__HitTarget_K2Node_ComponentBoundEvent_6_OnButtonPressedEvent__DelegateSignature
struct UWBP_WeaponProgressButton_C_BndEvt__HitTarget_K2Node_ComponentBoundEvent_6_OnButtonPressedEvent__DelegateSignature_Params
{
};

// Function WBP_WeaponProgressButton.WBP_WeaponProgressButton_C.BndEvt__HitTarget_K2Node_ComponentBoundEvent_7_OnButtonReleasedEvent__DelegateSignature
struct UWBP_WeaponProgressButton_C_BndEvt__HitTarget_K2Node_ComponentBoundEvent_7_OnButtonReleasedEvent__DelegateSignature_Params
{
};

// Function WBP_WeaponProgressButton.WBP_WeaponProgressButton_C.DisplayMasteryProgress
struct UWBP_WeaponProgressButton_C_DisplayMasteryProgress_Params
{
	int                                                MasteryLevel;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                LevelProgressCount;                                        // 0x0004(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                LevelProgressTotal;                                        // 0x0008(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function WBP_WeaponProgressButton.WBP_WeaponProgressButton_C.BndEvt__FavoriteStarButton_K2Node_ComponentBoundEvent_8_OnButtonHoverEvent__DelegateSignature
struct UWBP_WeaponProgressButton_C_BndEvt__FavoriteStarButton_K2Node_ComponentBoundEvent_8_OnButtonHoverEvent__DelegateSignature_Params
{
};

// Function WBP_WeaponProgressButton.WBP_WeaponProgressButton_C.BndEvt__FavoriteStarButton_K2Node_ComponentBoundEvent_9_OnButtonClickedEvent__DelegateSignature
struct UWBP_WeaponProgressButton_C_BndEvt__FavoriteStarButton_K2Node_ComponentBoundEvent_9_OnButtonClickedEvent__DelegateSignature_Params
{
};

// Function WBP_WeaponProgressButton.WBP_WeaponProgressButton_C.BndEvt__FavoriteStarButton_K2Node_ComponentBoundEvent_10_OnButtonHoverEvent__DelegateSignature
struct UWBP_WeaponProgressButton_C_BndEvt__FavoriteStarButton_K2Node_ComponentBoundEvent_10_OnButtonHoverEvent__DelegateSignature_Params
{
};

// Function WBP_WeaponProgressButton.WBP_WeaponProgressButton_C.ExecuteUbergraph_WBP_WeaponProgressButton
struct UWBP_WeaponProgressButton_C_ExecuteUbergraph_WBP_WeaponProgressButton_Params
{
	int                                                EntryPoint;                                                // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function WBP_WeaponProgressButton.WBP_WeaponProgressButton_C.OnFavoriteSelected__DelegateSignature
struct UWBP_WeaponProgressButton_C_OnFavoriteSelected__DelegateSignature_Params
{
	class UKSWeaponAsset*                              WeaponAsset;                                               // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
