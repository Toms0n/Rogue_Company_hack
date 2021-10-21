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

// Function WBP_WeaponCategoryScreen.WBP_WeaponCategoryScreen_C.NavigateBack
struct UWBP_WeaponCategoryScreen_C_NavigateBack_Params
{
	bool                                               ReturnValue;                                               // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
};

// Function WBP_WeaponCategoryScreen.WBP_WeaponCategoryScreen_C.GetWeaponProgressButtons
struct UWBP_WeaponCategoryScreen_C_GetWeaponProgressButtons_Params
{
	TArray<class UKSWeaponProgressButton*>             ReturnValue;                                               // 0x0000(0x0010)  (Parm, OutParm, ReturnParm, ContainsInstancedReference, HasGetValueTypeHash)
};

// Function WBP_WeaponCategoryScreen.WBP_WeaponCategoryScreen_C.CreateAndAddWeaponEntry
struct UWBP_WeaponCategoryScreen_C_CreateAndAddWeaponEntry_Params
{
	class UKSWeaponProgressButton*                     ReturnValue;                                               // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function WBP_WeaponCategoryScreen.WBP_WeaponCategoryScreen_C.PreConstruct
struct UWBP_WeaponCategoryScreen_C_PreConstruct_Params
{
	bool                                               IsDesignTime;                                              // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function WBP_WeaponCategoryScreen.WBP_WeaponCategoryScreen_C.ClearWeaponEntries
struct UWBP_WeaponCategoryScreen_C_ClearWeaponEntries_Params
{
};

// Function WBP_WeaponCategoryScreen.WBP_WeaponCategoryScreen_C.DisplayWeaponCategory
struct UWBP_WeaponCategoryScreen_C_DisplayWeaponCategory_Params
{
	class UKSWeaponCategoryAsset*                      WeaponCategory;                                            // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function WBP_WeaponCategoryScreen.WBP_WeaponCategoryScreen_C.InitializeWidgetNavigation
struct UWBP_WeaponCategoryScreen_C_InitializeWidgetNavigation_Params
{
};

// Function WBP_WeaponCategoryScreen.WBP_WeaponCategoryScreen_C.RefreshWidgetNavigation
struct UWBP_WeaponCategoryScreen_C_RefreshWidgetNavigation_Params
{
};

// Function WBP_WeaponCategoryScreen.WBP_WeaponCategoryScreen_C.OnShown
struct UWBP_WeaponCategoryScreen_C_OnShown_Params
{
};

// Function WBP_WeaponCategoryScreen.WBP_WeaponCategoryScreen_C.FX_OnCustomizeContextAction
struct UWBP_WeaponCategoryScreen_C_FX_OnCustomizeContextAction_Params
{
};

// Function WBP_WeaponCategoryScreen.WBP_WeaponCategoryScreen_C.FX_OnViewMasteryRewards
struct UWBP_WeaponCategoryScreen_C_FX_OnViewMasteryRewards_Params
{
};

// Function WBP_WeaponCategoryScreen.WBP_WeaponCategoryScreen_C.ExecuteUbergraph_WBP_WeaponCategoryScreen
struct UWBP_WeaponCategoryScreen_C_ExecuteUbergraph_WBP_WeaponCategoryScreen_Params
{
	int                                                EntryPoint;                                                // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
