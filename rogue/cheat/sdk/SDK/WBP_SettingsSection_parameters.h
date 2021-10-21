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

// Function WBP_SettingsSection.WBP_SettingsSection_C.Add Settings Group Widget
struct UWBP_SettingsSection_C_Add_Settings_Group_Widget_Params
{
	class UKSSettingsGroup*                            Settings_Group_Widget;                                     // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function WBP_SettingsSection.WBP_SettingsSection_C.PreConstruct
struct UWBP_SettingsSection_C_PreConstruct_Params
{
	bool                                               IsDesignTime;                                              // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function WBP_SettingsSection.WBP_SettingsSection_C.InitializeWidget
struct UWBP_SettingsSection_C_InitializeWidget_Params
{
	class APUMG_HUD*                                   HUD;                                                       // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function WBP_SettingsSection.WBP_SettingsSection_C.AddSettingsGroupWidget
struct UWBP_SettingsSection_C_AddSettingsGroupWidget_Params
{
	class UKSSettingsGroup*                            SettingsGroup;                                             // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function WBP_SettingsSection.WBP_SettingsSection_C.OnSectionConfigSet
struct UWBP_SettingsSection_C_OnSectionConfigSet_Params
{
};

// Function WBP_SettingsSection.WBP_SettingsSection_C.ExecuteUbergraph_WBP_SettingsSection
struct UWBP_SettingsSection_C_ExecuteUbergraph_WBP_SettingsSection_Params
{
	int                                                EntryPoint;                                                // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
