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

// Function WBP_SettingsContainer.WBP_SettingsContainer_C.GetPreviewWidget
struct UWBP_SettingsContainer_C_GetPreviewWidget_Params
{
	class UKSWidget*                                   PreviewWidget;                                             // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function WBP_SettingsContainer.WBP_SettingsContainer_C.Add Setting Widget To Box
struct UWBP_SettingsContainer_C_Add_Setting_Widget_To_Box_Params
{
	class UKSSettingsWidget*                           Setting_Widget;                                            // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function WBP_SettingsContainer.WBP_SettingsContainer_C.SettingsContainerHoverSFX
struct UWBP_SettingsContainer_C_SettingsContainerHoverSFX_Params
{
};

// Function WBP_SettingsContainer.WBP_SettingsContainer_C.OnContainerConfigSet
struct UWBP_SettingsContainer_C_OnContainerConfigSet_Params
{
};

// Function WBP_SettingsContainer.WBP_SettingsContainer_C.AddSettingsWidget
struct UWBP_SettingsContainer_C_AddSettingsWidget_Params
{
	class UKSSettingsWidget*                           SettingsWidget;                                            // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function WBP_SettingsContainer.WBP_SettingsContainer_C.OnMouseEnter
struct UWBP_SettingsContainer_C_OnMouseEnter_Params
{
	struct FGeometry                                   MyGeometry;                                                // 0x0000(0x0058)  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	struct FPointerEvent                               MouseEvent;                                                // 0x0058(0x0070)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};

// Function WBP_SettingsContainer.WBP_SettingsContainer_C.OnMouseLeave
struct UWBP_SettingsContainer_C_OnMouseLeave_Params
{
	struct FPointerEvent                               MouseEvent;                                                // 0x0000(0x0070)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};

// Function WBP_SettingsContainer.WBP_SettingsContainer_C.PlayHoverAnim
struct UWBP_SettingsContainer_C_PlayHoverAnim_Params
{
};

// Function WBP_SettingsContainer.WBP_SettingsContainer_C.PlayUnhoverAnim
struct UWBP_SettingsContainer_C_PlayUnhoverAnim_Params
{
};

// Function WBP_SettingsContainer.WBP_SettingsContainer_C.AddPreviewWidget
struct UWBP_SettingsContainer_C_AddPreviewWidget_Params
{
	class UKSSettingsPreview*                          PreviewWidget;                                             // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function WBP_SettingsContainer.WBP_SettingsContainer_C.ExecuteUbergraph_WBP_SettingsContainer
struct UWBP_SettingsContainer_C_ExecuteUbergraph_WBP_SettingsContainer_Params
{
	int                                                EntryPoint;                                                // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function WBP_SettingsContainer.WBP_SettingsContainer_C.OnAddToPreview__DelegateSignature
struct UWBP_SettingsContainer_C_OnAddToPreview__DelegateSignature_Params
{
	class UKSWidget*                                   PreviewWidget;                                             // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
