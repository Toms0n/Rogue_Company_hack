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

// Function WBP_SettingsGroup.WBP_SettingsGroup_C.Add Sub Settings Widget
struct UWBP_SettingsGroup_C_Add_Sub_Settings_Widget_Params
{
	class UKSSettingsContainer*                        Settings_Container;                                        // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function WBP_SettingsGroup.WBP_SettingsGroup_C.Add Main Settings Widget
struct UWBP_SettingsGroup_C_Add_Main_Settings_Widget_Params
{
	class UKSSettingsContainer*                        Settings_Container;                                        // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function WBP_SettingsGroup.WBP_SettingsGroup_C.AddSettingsWidget
struct UWBP_SettingsGroup_C_AddSettingsWidget_Params
{
	class UKSSettingsContainer*                        Settings_Container;                                        // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UVerticalBox*                                Vertical_Box;                                              // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function WBP_SettingsGroup.WBP_SettingsGroup_C.InitializeWidget
struct UWBP_SettingsGroup_C_InitializeWidget_Params
{
	class APUMG_HUD*                                   HUD;                                                       // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function WBP_SettingsGroup.WBP_SettingsGroup_C.AddSubSettingsContainerWidget
struct UWBP_SettingsGroup_C_AddSubSettingsContainerWidget_Params
{
	class UKSSettingsContainer*                        SettingsContainer;                                         // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function WBP_SettingsGroup.WBP_SettingsGroup_C.AddMainSettingsContainerWidget
struct UWBP_SettingsGroup_C_AddMainSettingsContainerWidget_Params
{
	class UKSSettingsContainer*                        SettingsContainer;                                         // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function WBP_SettingsGroup.WBP_SettingsGroup_C.ExecuteUbergraph_WBP_SettingsGroup
struct UWBP_SettingsGroup_C_ExecuteUbergraph_WBP_SettingsGroup_Params
{
	int                                                EntryPoint;                                                // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
