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

// Function WBP_RoguePrimaryWeaponSelectPanel.WBP_RoguePrimaryWeaponSelectPanel_C.FavoriteHoveredWeapon
struct UWBP_RoguePrimaryWeaponSelectPanel_C_FavoriteHoveredWeapon_Params
{
};

// Function WBP_RoguePrimaryWeaponSelectPanel.WBP_RoguePrimaryWeaponSelectPanel_C.OnFavoriteSelected
struct UWBP_RoguePrimaryWeaponSelectPanel_C_OnFavoriteSelected_Params
{
	class UKSWeaponAsset*                              WeaponAsset;                                               // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function WBP_RoguePrimaryWeaponSelectPanel.WBP_RoguePrimaryWeaponSelectPanel_C.CustomizeHoveredWeapon
struct UWBP_RoguePrimaryWeaponSelectPanel_C_CustomizeHoveredWeapon_Params
{
};

// Function WBP_RoguePrimaryWeaponSelectPanel.WBP_RoguePrimaryWeaponSelectPanel_C.SetCustomizeBind
struct UWBP_RoguePrimaryWeaponSelectPanel_C_SetCustomizeBind_Params
{
};

// Function WBP_RoguePrimaryWeaponSelectPanel.WBP_RoguePrimaryWeaponSelectPanel_C.CanWeaponBeFavorited
struct UWBP_RoguePrimaryWeaponSelectPanel_C_CanWeaponBeFavorited_Params
{
	class UKSWeaponAsset*                              WeaponAsset;                                               // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               CanFavorite;                                               // 0x0008(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function WBP_RoguePrimaryWeaponSelectPanel.WBP_RoguePrimaryWeaponSelectPanel_C.DisplayOnStatsPanel
struct UWBP_RoguePrimaryWeaponSelectPanel_C_DisplayOnStatsPanel_Params
{
	class UKSWeaponAsset*                              WeaponAsset;                                               // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function WBP_RoguePrimaryWeaponSelectPanel.WBP_RoguePrimaryWeaponSelectPanel_C.OnWeaponPreview
struct UWBP_RoguePrimaryWeaponSelectPanel_C_OnWeaponPreview_Params
{
	class UKSWeaponAsset*                              WeaponAsset;                                               // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function WBP_RoguePrimaryWeaponSelectPanel.WBP_RoguePrimaryWeaponSelectPanel_C.RebuildColumnNavigation
struct UWBP_RoguePrimaryWeaponSelectPanel_C_RebuildColumnNavigation_Params
{
	TArray<class UWidget*>                             PrimaryColumn;                                             // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, ContainsInstancedReference, HasGetValueTypeHash)
	TArray<class UWidget*>                             SecondaryColumn;                                           // 0x0010(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, ContainsInstancedReference, HasGetValueTypeHash)
	bool                                               IsLeftColumn;                                              // 0x0020(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function WBP_RoguePrimaryWeaponSelectPanel.WBP_RoguePrimaryWeaponSelectPanel_C.RebuildNavigation
struct UWBP_RoguePrimaryWeaponSelectPanel_C_RebuildNavigation_Params
{
};

// Function WBP_RoguePrimaryWeaponSelectPanel.WBP_RoguePrimaryWeaponSelectPanel_C.OnWeaponSelected
struct UWBP_RoguePrimaryWeaponSelectPanel_C_OnWeaponSelected_Params
{
	class UKSWeaponAsset*                              WeaponAsset;                                               // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function WBP_RoguePrimaryWeaponSelectPanel.WBP_RoguePrimaryWeaponSelectPanel_C.PopulateWeaponsInCategory
struct UWBP_RoguePrimaryWeaponSelectPanel_C_PopulateWeaponsInCategory_Params
{
	class UVerticalBox*                                Category;                                                  // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UTextBlock*                                  CategoryName;                                              // 0x0030(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UTextBlock*                                  CategoryQuantity;                                          // 0x0038(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UWBP_AsyncIcon_C*                            CategoryIcon;                                              // 0x0040(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function WBP_RoguePrimaryWeaponSelectPanel.WBP_RoguePrimaryWeaponSelectPanel_C.SetJob
struct UWBP_RoguePrimaryWeaponSelectPanel_C_SetJob_Params
{
	class UKSJobItem*                                  JobItem;                                                   // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function WBP_RoguePrimaryWeaponSelectPanel.WBP_RoguePrimaryWeaponSelectPanel_C.SetRogueDetailsWidget
struct UWBP_RoguePrimaryWeaponSelectPanel_C_SetRogueDetailsWidget_Params
{
	class UKSRogueDetailsWidget*                       RogueDetailsWidget;                                        // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function WBP_RoguePrimaryWeaponSelectPanel.WBP_RoguePrimaryWeaponSelectPanel_C.SetupInput
struct UWBP_RoguePrimaryWeaponSelectPanel_C_SetupInput_Params
{
	class UKSWidget*                                   NavigationParent;                                          // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                FocusGroup;                                                // 0x0008(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function WBP_RoguePrimaryWeaponSelectPanel.WBP_RoguePrimaryWeaponSelectPanel_C.PreConstruct
struct UWBP_RoguePrimaryWeaponSelectPanel_C_PreConstruct_Params
{
	bool                                               IsDesignTime;                                              // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function WBP_RoguePrimaryWeaponSelectPanel.WBP_RoguePrimaryWeaponSelectPanel_C.ExecuteUbergraph_WBP_RoguePrimaryWeaponSelectPanel
struct UWBP_RoguePrimaryWeaponSelectPanel_C_ExecuteUbergraph_WBP_RoguePrimaryWeaponSelectPanel_Params
{
	int                                                EntryPoint;                                                // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
