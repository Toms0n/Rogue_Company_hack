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

// Function WBP_StandardButtonInner.WBP_StandardButtonInner_C.SetDefaultValues
struct UWBP_StandardButtonInner_C_SetDefaultValues_Params
{
	float                                              Height;                                                    // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              Width;                                                     // 0x0004(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FText                                       ButtonText;                                                // 0x0008(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm)
	struct FName                                       Action;                                                    // 0x0020(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               ShowPromptOnFocus;                                         // 0x0028(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function WBP_StandardButtonInner.WBP_StandardButtonInner_C.SetHeight
struct UWBP_StandardButtonInner_C_SetHeight_Params
{
	float                                              InHeight;                                                  // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function WBP_StandardButtonInner.WBP_StandardButtonInner_C.HasGamepadAction
struct UWBP_StandardButtonInner_C_HasGamepadAction_Params
{
	bool                                               HasGamepadAction;                                          // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function WBP_StandardButtonInner.WBP_StandardButtonInner_C.SetGamepadPromptForAction
struct UWBP_StandardButtonInner_C_SetGamepadPromptForAction_Params
{
	struct FName                                       Action;                                                    // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function WBP_StandardButtonInner.WBP_StandardButtonInner_C.SetDefaultDisplay
struct UWBP_StandardButtonInner_C_SetDefaultDisplay_Params
{
};

// Function WBP_StandardButtonInner.WBP_StandardButtonInner_C.SetWidth
struct UWBP_StandardButtonInner_C_SetWidth_Params
{
	float                                              InWidth;                                                   // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function WBP_StandardButtonInner.WBP_StandardButtonInner_C.SetButtonText
struct UWBP_StandardButtonInner_C_SetButtonText_Params
{
	struct FText                                       ButtonText;                                                // 0x0000(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function WBP_StandardButtonInner.WBP_StandardButtonInner_C.NavigateConfirm
struct UWBP_StandardButtonInner_C_NavigateConfirm_Params
{
	bool                                               ReturnValue;                                               // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
};

// Function WBP_StandardButtonInner.WBP_StandardButtonInner_C.PreConstruct
struct UWBP_StandardButtonInner_C_PreConstruct_Params
{
	bool                                               IsDesignTime;                                              // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function WBP_StandardButtonInner.WBP_StandardButtonInner_C.Construct
struct UWBP_StandardButtonInner_C_Construct_Params
{
};

// Function WBP_StandardButtonInner.WBP_StandardButtonInner_C.BndEvt__LoadoutButton_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
struct UWBP_StandardButtonInner_C_BndEvt__LoadoutButton_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature_Params
{
};

// Function WBP_StandardButtonInner.WBP_StandardButtonInner_C.BndEvt__LoadoutButton_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature
struct UWBP_StandardButtonInner_C_BndEvt__LoadoutButton_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature_Params
{
};

// Function WBP_StandardButtonInner.WBP_StandardButtonInner_C.BndEvt__LoadoutButton_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature
struct UWBP_StandardButtonInner_C_BndEvt__LoadoutButton_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature_Params
{
};

// Function WBP_StandardButtonInner.WBP_StandardButtonInner_C.GamepadHover
struct UWBP_StandardButtonInner_C_GamepadHover_Params
{
};

// Function WBP_StandardButtonInner.WBP_StandardButtonInner_C.GamepadUnhover
struct UWBP_StandardButtonInner_C_GamepadUnhover_Params
{
};

// Function WBP_StandardButtonInner.WBP_StandardButtonInner_C.GamepadConfirm
struct UWBP_StandardButtonInner_C_GamepadConfirm_Params
{
};

// Function WBP_StandardButtonInner.WBP_StandardButtonInner_C.Do Hover
struct UWBP_StandardButtonInner_C_Do_Hover_Params
{
};

// Function WBP_StandardButtonInner.WBP_StandardButtonInner_C.Do Unhover
struct UWBP_StandardButtonInner_C_Do_Unhover_Params
{
};

// Function WBP_StandardButtonInner.WBP_StandardButtonInner_C.InitializeWidget
struct UWBP_StandardButtonInner_C_InitializeWidget_Params
{
	class APUMG_HUD*                                   HUD;                                                       // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function WBP_StandardButtonInner.WBP_StandardButtonInner_C.HandleInputStateChanged
struct UWBP_StandardButtonInner_C_HandleInputStateChanged_Params
{
	TEnumAsByte<PlatformGameFramework_EPGAME_INPUT_STATE> InputState;                                                // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function WBP_StandardButtonInner.WBP_StandardButtonInner_C.ExecuteUbergraph_WBP_StandardButtonInner
struct UWBP_StandardButtonInner_C_ExecuteUbergraph_WBP_StandardButtonInner_Params
{
	int                                                EntryPoint;                                                // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function WBP_StandardButtonInner.WBP_StandardButtonInner_C.OnUnhovered__DelegateSignature
struct UWBP_StandardButtonInner_C_OnUnhovered__DelegateSignature_Params
{
	class UWidget*                                     Widget;                                                    // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function WBP_StandardButtonInner.WBP_StandardButtonInner_C.OnHovered__DelegateSignature
struct UWBP_StandardButtonInner_C_OnHovered__DelegateSignature_Params
{
	class UWidget*                                     Widget;                                                    // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function WBP_StandardButtonInner.WBP_StandardButtonInner_C.OnClicked__DelegateSignature
struct UWBP_StandardButtonInner_C_OnClicked__DelegateSignature_Params
{
	class UWidget*                                     Widget;                                                    // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
