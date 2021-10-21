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

// Function WBP_SettingsPage.WBP_SettingsPage_C.GetScrollBox
struct UWBP_SettingsPage_C_GetScrollBox_Params
{
	class UScrollBox*                                  ReturnValue;                                               // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function WBP_SettingsPage.WBP_SettingsPage_C.Add Settings Section Widget
struct UWBP_SettingsPage_C_Add_Settings_Section_Widget_Params
{
	class UKSSettingsSection*                          Selection_Widget;                                          // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function WBP_SettingsPage.WBP_SettingsPage_C.InitializeTickAnimations
struct UWBP_SettingsPage_C_InitializeTickAnimations_Params
{
};

// Function WBP_SettingsPage.WBP_SettingsPage_C.HandleShowPageAnimFinished
struct UWBP_SettingsPage_C_HandleShowPageAnimFinished_Params
{
};

// Function WBP_SettingsPage.WBP_SettingsPage_C.HandleShowPageAnimUpdated
struct UWBP_SettingsPage_C_HandleShowPageAnimUpdated_Params
{
	float                                              ElapsedTime;                                               // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              ElapsedAlpha;                                              // 0x0004(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function WBP_SettingsPage.WBP_SettingsPage_C.HandleHidePageAnimFinished
struct UWBP_SettingsPage_C_HandleHidePageAnimFinished_Params
{
};

// Function WBP_SettingsPage.WBP_SettingsPage_C.HandleHidePageAnimUpdated
struct UWBP_SettingsPage_C_HandleHidePageAnimUpdated_Params
{
	float                                              ElapsedTime;                                               // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              ElapsedAlpha;                                              // 0x0004(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function WBP_SettingsPage.WBP_SettingsPage_C.PlayShowPageAnim
struct UWBP_SettingsPage_C_PlayShowPageAnim_Params
{
};

// Function WBP_SettingsPage.WBP_SettingsPage_C.PlayHidePageAnim
struct UWBP_SettingsPage_C_PlayHidePageAnim_Params
{
};

// Function WBP_SettingsPage.WBP_SettingsPage_C.SetInitPageState
struct UWBP_SettingsPage_C_SetInitPageState_Params
{
};

// Function WBP_SettingsPage.WBP_SettingsPage_C.Construct
struct UWBP_SettingsPage_C_Construct_Params
{
};

// Function WBP_SettingsPage.WBP_SettingsPage_C.AddSettingsSectionWidget
struct UWBP_SettingsPage_C_AddSettingsSectionWidget_Params
{
	class UKSSettingsSection*                          SettingsSection;                                           // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function WBP_SettingsPage.WBP_SettingsPage_C.ExecuteUbergraph_WBP_SettingsPage
struct UWBP_SettingsPage_C_ExecuteUbergraph_WBP_SettingsPage_Params
{
	int                                                EntryPoint;                                                // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
