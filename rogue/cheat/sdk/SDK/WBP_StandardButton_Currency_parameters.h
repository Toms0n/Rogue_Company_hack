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

// Function WBP_StandardButton_Currency.WBP_StandardButton_Currency_C.SetPrice
struct UWBP_StandardButton_Currency_C_SetPrice_Params
{
	int                                                Price;                                                     // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function WBP_StandardButton_Currency.WBP_StandardButton_Currency_C.GetGamepadPromptKey
struct UWBP_StandardButton_Currency_C_GetGamepadPromptKey_Params
{
	bool                                               HasValidKeyPrompt;                                         // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FKey                                        GamepadKey;                                                // 0x0008(0x0018)  (Parm, OutParm, HasGetValueTypeHash)
};

// Function WBP_StandardButton_Currency.WBP_StandardButton_Currency_C.SetKeyPrompt
struct UWBP_StandardButton_Currency_C_SetKeyPrompt_Params
{
	struct FKey                                        GamepadButton;                                             // 0x0000(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
};

// Function WBP_StandardButton_Currency.WBP_StandardButton_Currency_C.SetDefaultDisplay
struct UWBP_StandardButton_Currency_C_SetDefaultDisplay_Params
{
};

// Function WBP_StandardButton_Currency.WBP_StandardButton_Currency_C.SetWidth
struct UWBP_StandardButton_Currency_C_SetWidth_Params
{
	float                                              InWidth;                                                   // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function WBP_StandardButton_Currency.WBP_StandardButton_Currency_C.SetButtonText
struct UWBP_StandardButton_Currency_C_SetButtonText_Params
{
	struct FText                                       ButtonText;                                                // 0x0000(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function WBP_StandardButton_Currency.WBP_StandardButton_Currency_C.BndEvt__WBP_StandardButtonMedium_K2Node_ComponentBoundEvent_0_OnHovered__DelegateSignature
struct UWBP_StandardButton_Currency_C_BndEvt__WBP_StandardButtonMedium_K2Node_ComponentBoundEvent_0_OnHovered__DelegateSignature_Params
{
	class UWidget*                                     Widget;                                                    // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function WBP_StandardButton_Currency.WBP_StandardButton_Currency_C.BndEvt__WBP_StandardButtonMedium_K2Node_ComponentBoundEvent_1_OnUnhovered__DelegateSignature
struct UWBP_StandardButton_Currency_C_BndEvt__WBP_StandardButtonMedium_K2Node_ComponentBoundEvent_1_OnUnhovered__DelegateSignature_Params
{
	class UWidget*                                     Widget;                                                    // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function WBP_StandardButton_Currency.WBP_StandardButton_Currency_C.InitializeWidget
struct UWBP_StandardButton_Currency_C_InitializeWidget_Params
{
	class APUMG_HUD*                                   HUD;                                                       // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function WBP_StandardButton_Currency.WBP_StandardButton_Currency_C.ExecuteUbergraph_WBP_StandardButton_Currency
struct UWBP_StandardButton_Currency_C_ExecuteUbergraph_WBP_StandardButton_Currency_Params
{
	int                                                EntryPoint;                                                // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
