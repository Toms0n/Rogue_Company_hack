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

// Function WBP_YellowButton.WBP_YellowButton_C.GetGamepadPromptKey
struct UWBP_YellowButton_C_GetGamepadPromptKey_Params
{
	bool                                               HasValidKeyPrompt;                                         // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FKey                                        GamepadKey;                                                // 0x0008(0x0018)  (Parm, OutParm, HasGetValueTypeHash)
};

// Function WBP_YellowButton.WBP_YellowButton_C.SetKeyPrompt
struct UWBP_YellowButton_C_SetKeyPrompt_Params
{
	struct FKey                                        GamepadButton;                                             // 0x0000(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
};

// Function WBP_YellowButton.WBP_YellowButton_C.SetDefaultDisplay
struct UWBP_YellowButton_C_SetDefaultDisplay_Params
{
};

// Function WBP_YellowButton.WBP_YellowButton_C.SetButtonText
struct UWBP_YellowButton_C_SetButtonText_Params
{
	struct FText                                       ButtonText;                                                // 0x0000(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function WBP_YellowButton.WBP_YellowButton_C.NavigateConfirm
struct UWBP_YellowButton_C_NavigateConfirm_Params
{
	bool                                               ReturnValue;                                               // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
};

// Function WBP_YellowButton.WBP_YellowButton_C.PreConstruct
struct UWBP_YellowButton_C_PreConstruct_Params
{
	bool                                               IsDesignTime;                                              // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function WBP_YellowButton.WBP_YellowButton_C.Construct
struct UWBP_YellowButton_C_Construct_Params
{
};

// Function WBP_YellowButton.WBP_YellowButton_C.Tick
struct UWBP_YellowButton_C_Tick_Params
{
	struct FGeometry                                   MyGeometry;                                                // 0x0000(0x0058)  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	float                                              InDeltaTime;                                               // 0x0058(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function WBP_YellowButton.WBP_YellowButton_C.BndEvt__LoadoutButton_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
struct UWBP_YellowButton_C_BndEvt__LoadoutButton_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature_Params
{
};

// Function WBP_YellowButton.WBP_YellowButton_C.BndEvt__LoadoutButton_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature
struct UWBP_YellowButton_C_BndEvt__LoadoutButton_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature_Params
{
};

// Function WBP_YellowButton.WBP_YellowButton_C.BndEvt__LoadoutButton_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature
struct UWBP_YellowButton_C_BndEvt__LoadoutButton_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature_Params
{
};

// Function WBP_YellowButton.WBP_YellowButton_C.GamepadHover
struct UWBP_YellowButton_C_GamepadHover_Params
{
};

// Function WBP_YellowButton.WBP_YellowButton_C.GamepadUnhover
struct UWBP_YellowButton_C_GamepadUnhover_Params
{
};

// Function WBP_YellowButton.WBP_YellowButton_C.GamepadConfirm
struct UWBP_YellowButton_C_GamepadConfirm_Params
{
};

// Function WBP_YellowButton.WBP_YellowButton_C.Do Hover
struct UWBP_YellowButton_C_Do_Hover_Params
{
};

// Function WBP_YellowButton.WBP_YellowButton_C.Do Unhover
struct UWBP_YellowButton_C_Do_Unhover_Params
{
};

// Function WBP_YellowButton.WBP_YellowButton_C.InitializeWidget
struct UWBP_YellowButton_C_InitializeWidget_Params
{
	class APUMG_HUD*                                   HUD;                                                       // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function WBP_YellowButton.WBP_YellowButton_C.HandleInputStateChanged
struct UWBP_YellowButton_C_HandleInputStateChanged_Params
{
	TEnumAsByte<PlatformGameFramework_EPGAME_INPUT_STATE> InputState;                                                // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function WBP_YellowButton.WBP_YellowButton_C.OnInitialized
struct UWBP_YellowButton_C_OnInitialized_Params
{
};

// Function WBP_YellowButton.WBP_YellowButton_C.ExecuteUbergraph_WBP_YellowButton
struct UWBP_YellowButton_C_ExecuteUbergraph_WBP_YellowButton_Params
{
	int                                                EntryPoint;                                                // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function WBP_YellowButton.WBP_YellowButton_C.OnUnhovered__DelegateSignature
struct UWBP_YellowButton_C_OnUnhovered__DelegateSignature_Params
{
	class UWidget*                                     Widget;                                                    // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function WBP_YellowButton.WBP_YellowButton_C.OnHovered__DelegateSignature
struct UWBP_YellowButton_C_OnHovered__DelegateSignature_Params
{
	class UWidget*                                     Widget;                                                    // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function WBP_YellowButton.WBP_YellowButton_C.OnClicked__DelegateSignature
struct UWBP_YellowButton_C_OnClicked__DelegateSignature_Params
{
	class UWidget*                                     Widget;                                                    // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
