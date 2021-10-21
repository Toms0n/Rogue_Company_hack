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

// Function WBP_StandardButtonLarge.WBP_StandardButtonLarge_C.SetDisabled
struct UWBP_StandardButtonLarge_C_SetDisabled_Params
{
	bool                                               Disabled;                                                  // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function WBP_StandardButtonLarge.WBP_StandardButtonLarge_C.GetFontStyleNameByType
struct UWBP_StandardButtonLarge_C_GetFontStyleNameByType_Params
{
	struct FName                                       FontName;                                                  // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function WBP_StandardButtonLarge.WBP_StandardButtonLarge_C.SetHeight
struct UWBP_StandardButtonLarge_C_SetHeight_Params
{
	float                                              InHeight;                                                  // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function WBP_StandardButtonLarge.WBP_StandardButtonLarge_C.GetGamepadPromptKey
struct UWBP_StandardButtonLarge_C_GetGamepadPromptKey_Params
{
	bool                                               HasValidKeyPrompt;                                         // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FKey                                        GamepadKey;                                                // 0x0008(0x0018)  (Parm, OutParm, HasGetValueTypeHash)
};

// Function WBP_StandardButtonLarge.WBP_StandardButtonLarge_C.Set Key Prompt
struct UWBP_StandardButtonLarge_C_Set_Key_Prompt_Params
{
	struct FKey                                        Prompt;                                                    // 0x0000(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
};

// Function WBP_StandardButtonLarge.WBP_StandardButtonLarge_C.SetGamepadPromptForAction
struct UWBP_StandardButtonLarge_C_SetGamepadPromptForAction_Params
{
	struct FName                                       Action;                                                    // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function WBP_StandardButtonLarge.WBP_StandardButtonLarge_C.SetDefaultDisplay
struct UWBP_StandardButtonLarge_C_SetDefaultDisplay_Params
{
};

// Function WBP_StandardButtonLarge.WBP_StandardButtonLarge_C.SetWidth
struct UWBP_StandardButtonLarge_C_SetWidth_Params
{
	float                                              InWidth;                                                   // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function WBP_StandardButtonLarge.WBP_StandardButtonLarge_C.SetButtonText
struct UWBP_StandardButtonLarge_C_SetButtonText_Params
{
	struct FText                                       ButtonText;                                                // 0x0000(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function WBP_StandardButtonLarge.WBP_StandardButtonLarge_C.NavigateConfirm
struct UWBP_StandardButtonLarge_C_NavigateConfirm_Params
{
	bool                                               ReturnValue;                                               // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
};

// Function WBP_StandardButtonLarge.WBP_StandardButtonLarge_C.PreConstruct
struct UWBP_StandardButtonLarge_C_PreConstruct_Params
{
	bool                                               IsDesignTime;                                              // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function WBP_StandardButtonLarge.WBP_StandardButtonLarge_C.Construct
struct UWBP_StandardButtonLarge_C_Construct_Params
{
};

// Function WBP_StandardButtonLarge.WBP_StandardButtonLarge_C.BndEvt__LoadoutButton_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
struct UWBP_StandardButtonLarge_C_BndEvt__LoadoutButton_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature_Params
{
};

// Function WBP_StandardButtonLarge.WBP_StandardButtonLarge_C.BndEvt__LoadoutButton_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature
struct UWBP_StandardButtonLarge_C_BndEvt__LoadoutButton_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature_Params
{
};

// Function WBP_StandardButtonLarge.WBP_StandardButtonLarge_C.BndEvt__LoadoutButton_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature
struct UWBP_StandardButtonLarge_C_BndEvt__LoadoutButton_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature_Params
{
};

// Function WBP_StandardButtonLarge.WBP_StandardButtonLarge_C.GamepadHover
struct UWBP_StandardButtonLarge_C_GamepadHover_Params
{
};

// Function WBP_StandardButtonLarge.WBP_StandardButtonLarge_C.GamepadUnhover
struct UWBP_StandardButtonLarge_C_GamepadUnhover_Params
{
};

// Function WBP_StandardButtonLarge.WBP_StandardButtonLarge_C.GamepadConfirm
struct UWBP_StandardButtonLarge_C_GamepadConfirm_Params
{
};

// Function WBP_StandardButtonLarge.WBP_StandardButtonLarge_C.Do Hover
struct UWBP_StandardButtonLarge_C_Do_Hover_Params
{
};

// Function WBP_StandardButtonLarge.WBP_StandardButtonLarge_C.Do Unhover
struct UWBP_StandardButtonLarge_C_Do_Unhover_Params
{
};

// Function WBP_StandardButtonLarge.WBP_StandardButtonLarge_C.HandleInputStateChanged
struct UWBP_StandardButtonLarge_C_HandleInputStateChanged_Params
{
	TEnumAsByte<PlatformGameFramework_EPGAME_INPUT_STATE> InputState;                                                // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function WBP_StandardButtonLarge.WBP_StandardButtonLarge_C.OnInitialized
struct UWBP_StandardButtonLarge_C_OnInitialized_Params
{
};

// Function WBP_StandardButtonLarge.WBP_StandardButtonLarge_C.ExecuteUbergraph_WBP_StandardButtonLarge
struct UWBP_StandardButtonLarge_C_ExecuteUbergraph_WBP_StandardButtonLarge_Params
{
	int                                                EntryPoint;                                                // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function WBP_StandardButtonLarge.WBP_StandardButtonLarge_C.OnUnhovered__DelegateSignature
struct UWBP_StandardButtonLarge_C_OnUnhovered__DelegateSignature_Params
{
	class UWidget*                                     Widget;                                                    // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function WBP_StandardButtonLarge.WBP_StandardButtonLarge_C.OnHovered__DelegateSignature
struct UWBP_StandardButtonLarge_C_OnHovered__DelegateSignature_Params
{
	class UWidget*                                     Widget;                                                    // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function WBP_StandardButtonLarge.WBP_StandardButtonLarge_C.OnClicked__DelegateSignature
struct UWBP_StandardButtonLarge_C_OnClicked__DelegateSignature_Params
{
	class UWidget*                                     Widget;                                                    // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
