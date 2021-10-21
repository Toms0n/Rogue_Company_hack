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

// Function WBP_InputCallout.WBP_InputCallout_C.PropogateDefaultSettings
struct UWBP_InputCallout_C_PropogateDefaultSettings_Params
{
};

// Function WBP_InputCallout.WBP_InputCallout_C.GetActionKeys
struct UWBP_InputCallout_C_GetActionKeys_Params
{
	class UKSSettingsDataFactory*                      KSSettingsDataFactory;                                     // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FName                                       Name;                                                      // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TEnumAsByte<PlatformGameFramework_EPGAME_INPUT_STATE> InputType;                                                 // 0x0010(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FKey                                        PrimaryButton;                                             // 0x0018(0x0018)  (Parm, OutParm, HasGetValueTypeHash)
	struct FKey                                        SecondaryButton;                                           // 0x0030(0x0018)  (Parm, OutParm, HasGetValueTypeHash)
};

// Function WBP_InputCallout.WBP_InputCallout_C.UpdateComboIndicator
struct UWBP_InputCallout_C_UpdateComboIndicator_Params
{
};

// Function WBP_InputCallout.WBP_InputCallout_C.IsValidActionNameForCurrentInput
struct UWBP_InputCallout_C_IsValidActionNameForCurrentInput_Params
{
	struct FName                                       Name;                                                      // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               Valid;                                                     // 0x0008(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function WBP_InputCallout.WBP_InputCallout_C.ResetHoldProgress
struct UWBP_InputCallout_C_ResetHoldProgress_Params
{
};

// Function WBP_InputCallout.WBP_InputCallout_C.SetHoldProgress
struct UWBP_InputCallout_C_SetHoldProgress_Params
{
	float                                              HoldProgress;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function WBP_InputCallout.WBP_InputCallout_C.SetSecondaryKey
struct UWBP_InputCallout_C_SetSecondaryKey_Params
{
	struct FKey                                        Button;                                                    // 0x0000(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
};

// Function WBP_InputCallout.WBP_InputCallout_C.SetPrimaryKey
struct UWBP_InputCallout_C_SetPrimaryKey_Params
{
	struct FKey                                        Button;                                                    // 0x0000(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
};

// Function WBP_InputCallout.WBP_InputCallout_C.OnKeyBindSettingChanged
struct UWBP_InputCallout_C_OnKeyBindSettingChanged_Params
{
	struct FName                                       KeyBindName;                                               // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function WBP_InputCallout.WBP_InputCallout_C.InitializeWidget
struct UWBP_InputCallout_C_InitializeWidget_Params
{
	class APUMG_HUD*                                   HUD;                                                       // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function WBP_InputCallout.WBP_InputCallout_C.ModeChange
struct UWBP_InputCallout_C_ModeChange_Params
{
	TEnumAsByte<PlatformGameFramework_EPGAME_INPUT_STATE> InputState;                                                // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function WBP_InputCallout.WBP_InputCallout_C.SetActionName
struct UWBP_InputCallout_C_SetActionName_Params
{
	struct FName                                       KeyBoardAction;                                            // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FName                                       GamepadAction;                                             // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FName                                       MobileAction;                                              // 0x0010(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function WBP_InputCallout.WBP_InputCallout_C.RemoveActionName
struct UWBP_InputCallout_C_RemoveActionName_Params
{
	struct FName                                       Action;                                                    // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function WBP_InputCallout.WBP_InputCallout_C.ClearAllActionName
struct UWBP_InputCallout_C_ClearAllActionName_Params
{
};

// Function WBP_InputCallout.WBP_InputCallout_C.ExecuteUbergraph_WBP_InputCallout
struct UWBP_InputCallout_C_ExecuteUbergraph_WBP_InputCallout_Params
{
	int                                                EntryPoint;                                                // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
