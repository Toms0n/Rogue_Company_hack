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

// Function WBP_TextInputButton.WBP_TextInputButton_C.FocusTextEntry
struct UWBP_TextInputButton_C_FocusTextEntry_Params
{
};

// Function WBP_TextInputButton.WBP_TextInputButton_C.NavigateConfirm
struct UWBP_TextInputButton_C_NavigateConfirm_Params
{
	bool                                               ReturnValue;                                               // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
};

// Function WBP_TextInputButton.WBP_TextInputButton_C.GetText
struct UWBP_TextInputButton_C_GetText_Params
{
	struct FText                                       Text;                                                      // 0x0000(0x0018)  (Parm, OutParm)
};

// Function WBP_TextInputButton.WBP_TextInputButton_C.SetHintText
struct UWBP_TextInputButton_C_SetHintText_Params
{
	struct FText                                       HintText;                                                  // 0x0000(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function WBP_TextInputButton.WBP_TextInputButton_C.PreConstruct
struct UWBP_TextInputButton_C_PreConstruct_Params
{
	bool                                               IsDesignTime;                                              // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function WBP_TextInputButton.WBP_TextInputButton_C.Construct
struct UWBP_TextInputButton_C_Construct_Params
{
};

// Function WBP_TextInputButton.WBP_TextInputButton_C.InitializeWidget
struct UWBP_TextInputButton_C_InitializeWidget_Params
{
	class APUMG_HUD*                                   HUD;                                                       // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function WBP_TextInputButton.WBP_TextInputButton_C.OnInputTextChanged
struct UWBP_TextInputButton_C_OnInputTextChanged_Params
{
	struct FText                                       Text;                                                      // 0x0000(0x0018)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};

// Function WBP_TextInputButton.WBP_TextInputButton_C.GamepadHover
struct UWBP_TextInputButton_C_GamepadHover_Params
{
};

// Function WBP_TextInputButton.WBP_TextInputButton_C.GamepadUnhover
struct UWBP_TextInputButton_C_GamepadUnhover_Params
{
};

// Function WBP_TextInputButton.WBP_TextInputButton_C.BndEvt__EmailInputButtonWrapper_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature
struct UWBP_TextInputButton_C_BndEvt__EmailInputButtonWrapper_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature_Params
{
};

// Function WBP_TextInputButton.WBP_TextInputButton_C.BndEvt__EmailInputButtonWrapper_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature
struct UWBP_TextInputButton_C_BndEvt__EmailInputButtonWrapper_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature_Params
{
};

// Function WBP_TextInputButton.WBP_TextInputButton_C.ExecuteUbergraph_WBP_TextInputButton
struct UWBP_TextInputButton_C_ExecuteUbergraph_WBP_TextInputButton_Params
{
	int                                                EntryPoint;                                                // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function WBP_TextInputButton.WBP_TextInputButton_C.OnTextChanged__DelegateSignature
struct UWBP_TextInputButton_C_OnTextChanged__DelegateSignature_Params
{
	struct FText                                       Text;                                                      // 0x0000(0x0018)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
