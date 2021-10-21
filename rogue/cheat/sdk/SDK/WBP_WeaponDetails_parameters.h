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

// Function WBP_WeaponDetails.WBP_WeaponDetails_C.NavigateConfirm
struct UWBP_WeaponDetails_C_NavigateConfirm_Params
{
	bool                                               ReturnValue;                                               // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
};

// Function WBP_WeaponDetails.WBP_WeaponDetails_C.NavigateBack
struct UWBP_WeaponDetails_C_NavigateBack_Params
{
	bool                                               ReturnValue;                                               // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
};

// Function WBP_WeaponDetails.WBP_WeaponDetails_C.OnKeyUp
struct UWBP_WeaponDetails_C_OnKeyUp_Params
{
	struct FGeometry                                   MyGeometry;                                                // 0x0000(0x0058)  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	struct FKeyEvent                                   InKeyEvent;                                                // 0x0058(0x0038)  (BlueprintVisible, BlueprintReadOnly, Parm)
	struct FEventReply                                 ReturnValue;                                               // 0x0090(0x00C0)  (Parm, OutParm, ReturnParm)
};

// Function WBP_WeaponDetails.WBP_WeaponDetails_C.DisplayWeapon
struct UWBP_WeaponDetails_C_DisplayWeapon_Params
{
	class UKSWeaponAsset*                              WeaponAsset;                                               // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UKSWeaponCategoryAsset*                      WeaponCategory;                                            // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function WBP_WeaponDetails.WBP_WeaponDetails_C.OnShown
struct UWBP_WeaponDetails_C_OnShown_Params
{
};

// Function WBP_WeaponDetails.WBP_WeaponDetails_C.ConfigureViewModel
struct UWBP_WeaponDetails_C_ConfigureViewModel_Params
{
	class UKSWeaponAsset*                              WeaponAsset;                                               // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UKSWeaponAttachment*                         WeaponWrap;                                                // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function WBP_WeaponDetails.WBP_WeaponDetails_C.DisplayEquippedWrap
struct UWBP_WeaponDetails_C_DisplayEquippedWrap_Params
{
	class UKSWeaponAttachment*                         EquippedWrap;                                              // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function WBP_WeaponDetails.WBP_WeaponDetails_C.InitializeWidget
struct UWBP_WeaponDetails_C_InitializeWidget_Params
{
	class APUMG_HUD*                                   HUD;                                                       // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function WBP_WeaponDetails.WBP_WeaponDetails_C.BndEvt__EquippedWrap_K2Node_ComponentBoundEvent_0_OnSelected__DelegateSignature
struct UWBP_WeaponDetails_C_BndEvt__EquippedWrap_K2Node_ComponentBoundEvent_0_OnSelected__DelegateSignature_Params
{
};

// Function WBP_WeaponDetails.WBP_WeaponDetails_C.InitializeWidgetNavigation
struct UWBP_WeaponDetails_C_InitializeWidgetNavigation_Params
{
};

// Function WBP_WeaponDetails.WBP_WeaponDetails_C.OnHide
struct UWBP_WeaponDetails_C_OnHide_Params
{
};

// Function WBP_WeaponDetails.WBP_WeaponDetails_C.On Weapon Set
struct UWBP_WeaponDetails_C_On_Weapon_Set_Params
{
};

// Function WBP_WeaponDetails.WBP_WeaponDetails_C.BndEvt__UnlockMilestonesButton_K2Node_ComponentBoundEvent_1_OnClicked__DelegateSignature
struct UWBP_WeaponDetails_C_BndEvt__UnlockMilestonesButton_K2Node_ComponentBoundEvent_1_OnClicked__DelegateSignature_Params
{
	class UWidget*                                     Widget;                                                    // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function WBP_WeaponDetails.WBP_WeaponDetails_C.FX_OnCustomizeContextAction
struct UWBP_WeaponDetails_C_FX_OnCustomizeContextAction_Params
{
};

// Function WBP_WeaponDetails.WBP_WeaponDetails_C.FX_OnViewMasteryRewards
struct UWBP_WeaponDetails_C_FX_OnViewMasteryRewards_Params
{
};

// Function WBP_WeaponDetails.WBP_WeaponDetails_C.ExecuteUbergraph_WBP_WeaponDetails
struct UWBP_WeaponDetails_C_ExecuteUbergraph_WBP_WeaponDetails_Params
{
	int                                                EntryPoint;                                                // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
