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

// Function WBP_WeaponHub.WBP_WeaponHub_C.NavigateBack
struct UWBP_WeaponHub_C_NavigateBack_Params
{
	bool                                               ReturnValue;                                               // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
};

// Function WBP_WeaponHub.WBP_WeaponHub_C.GetWeaponCategoryButtons
struct UWBP_WeaponHub_C_GetWeaponCategoryButtons_Params
{
	TArray<class UKSWeaponCategoryButton*>             ReturnValue;                                               // 0x0000(0x0010)  (Parm, OutParm, ReturnParm, ContainsInstancedReference, HasGetValueTypeHash)
};

// Function WBP_WeaponHub.WBP_WeaponHub_C.InitializeWidgetNavigation
struct UWBP_WeaponHub_C_InitializeWidgetNavigation_Params
{
};

// Function WBP_WeaponHub.WBP_WeaponHub_C.ViewRouteChanged
struct UWBP_WeaponHub_C_ViewRouteChanged_Params
{
	struct FName                                       CurrentRoute;                                              // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FName                                       PreviousRoute;                                             // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	PlatformUMG_EViewManagerLayer                      Layer;                                                     // 0x0010(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function WBP_WeaponHub.WBP_WeaponHub_C.InitializeWidget
struct UWBP_WeaponHub_C_InitializeWidget_Params
{
	class APUMG_HUD*                                   HUD;                                                       // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function WBP_WeaponHub.WBP_WeaponHub_C.OnShown
struct UWBP_WeaponHub_C_OnShown_Params
{
};

// Function WBP_WeaponHub.WBP_WeaponHub_C.FX_OnViewMasteryRewards
struct UWBP_WeaponHub_C_FX_OnViewMasteryRewards_Params
{
};

// Function WBP_WeaponHub.WBP_WeaponHub_C.ExecuteUbergraph_WBP_WeaponHub
struct UWBP_WeaponHub_C_ExecuteUbergraph_WBP_WeaponHub_Params
{
	int                                                EntryPoint;                                                // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
