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

// Function WBP_WrapCustomization.WBP_WrapCustomization_C.WBP_WrapCustomization_AutoGenFunc
struct UWBP_WrapCustomization_C_WBP_WrapCustomization_AutoGenFunc_Params
{
	class UWidget*                                     Widget;                                                    // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function WBP_WrapCustomization.WBP_WrapCustomization_C.GetWrapEntryByWeaponAttachment
struct UWBP_WrapCustomization_C_GetWrapEntryByWeaponAttachment_Params
{
	class UKSWeaponAttachment*                         WeaponAttachment;                                          // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UKSWrapSelectionEntry*                       OutWrapEntry;                                              // 0x0008(0x0008)  (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               ReturnValue;                                               // 0x0010(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
};

// Function WBP_WrapCustomization.WBP_WrapCustomization_C.GetModelViewerActorName
struct UWBP_WrapCustomization_C_GetModelViewerActorName_Params
{
	struct FName                                       ReturnValue;                                               // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function WBP_WrapCustomization.WBP_WrapCustomization_C.GetWrapEntry
struct UWBP_WrapCustomization_C_GetWrapEntry_Params
{
	int                                                Index;                                                     // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UKSWrapSelectionEntry*                       OutWrapEntry;                                              // 0x0008(0x0008)  (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               ReturnValue;                                               // 0x0010(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
};

// Function WBP_WrapCustomization.WBP_WrapCustomization_C.GetWrapEntryCount
struct UWBP_WrapCustomization_C_GetWrapEntryCount_Params
{
	int                                                ReturnValue;                                               // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function WBP_WrapCustomization.WBP_WrapCustomization_C.NavigateBack
struct UWBP_WrapCustomization_C_NavigateBack_Params
{
	bool                                               ReturnValue;                                               // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
};

// Function WBP_WrapCustomization.WBP_WrapCustomization_C.CreateAndAddWrapEntry
struct UWBP_WrapCustomization_C_CreateAndAddWrapEntry_Params
{
	class UKSWrapSelectionEntry*                       ReturnValue;                                               // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function WBP_WrapCustomization.WBP_WrapCustomization_C.ConfigureViewModel
struct UWBP_WrapCustomization_C_ConfigureViewModel_Params
{
	class UKSWeaponAsset*                              WeaponAsset;                                               // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UKSWeaponAttachment*                         WeaponWrap;                                                // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function WBP_WrapCustomization.WBP_WrapCustomization_C.DisplayWeaponInfo
struct UWBP_WrapCustomization_C_DisplayWeaponInfo_Params
{
	class UKSWeaponAsset*                              WeaponAsset;                                               // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UKSWeaponCategoryAsset*                      WeaponCategory;                                            // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function WBP_WrapCustomization.WBP_WrapCustomization_C.ClearEntries
struct UWBP_WrapCustomization_C_ClearEntries_Params
{
};

// Function WBP_WrapCustomization.WBP_WrapCustomization_C.DisplayWrapInfo
struct UWBP_WrapCustomization_C_DisplayWrapInfo_Params
{
	class UKSWeaponAttachment*                         WeaponWrap;                                                // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function WBP_WrapCustomization.WBP_WrapCustomization_C.Handle Input State Changed
struct UWBP_WrapCustomization_C_Handle_Input_State_Changed_Params
{
	TEnumAsByte<PlatformGameFramework_EPGAME_INPUT_STATE> InputState;                                                // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function WBP_WrapCustomization.WBP_WrapCustomization_C.InitializeWidget
struct UWBP_WrapCustomization_C_InitializeWidget_Params
{
	class APUMG_HUD*                                   HUD;                                                       // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function WBP_WrapCustomization.WBP_WrapCustomization_C.OnWrapPopulationFinished
struct UWBP_WrapCustomization_C_OnWrapPopulationFinished_Params
{
};

// Function WBP_WrapCustomization.WBP_WrapCustomization_C.RefreshWidgetNavigation
struct UWBP_WrapCustomization_C_RefreshWidgetNavigation_Params
{
};

// Function WBP_WrapCustomization.WBP_WrapCustomization_C.InitializeWidgetNavigation
struct UWBP_WrapCustomization_C_InitializeWidgetNavigation_Params
{
};

// Function WBP_WrapCustomization.WBP_WrapCustomization_C.OnShown
struct UWBP_WrapCustomization_C_OnShown_Params
{
};

// Function WBP_WrapCustomization.WBP_WrapCustomization_C.RemoveLastWrapEntry
struct UWBP_WrapCustomization_C_RemoveLastWrapEntry_Params
{
};

// Function WBP_WrapCustomization.WBP_WrapCustomization_C.DisplayReactiveStateDescription
struct UWBP_WrapCustomization_C_DisplayReactiveStateDescription_Params
{
	struct FText                                       DescText;                                                  // 0x0000(0x0018)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};

// Function WBP_WrapCustomization.WBP_WrapCustomization_C.SetActionButtonText
struct UWBP_WrapCustomization_C_SetActionButtonText_Params
{
	struct FText                                       DescText;                                                  // 0x0000(0x0018)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};

// Function WBP_WrapCustomization.WBP_WrapCustomization_C.OnHide
struct UWBP_WrapCustomization_C_OnHide_Params
{
};

// Function WBP_WrapCustomization.WBP_WrapCustomization_C.ExecuteUbergraph_WBP_WrapCustomization
struct UWBP_WrapCustomization_C_ExecuteUbergraph_WBP_WrapCustomization_Params
{
	int                                                EntryPoint;                                                // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
