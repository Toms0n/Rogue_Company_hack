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

// Function RedeemCodeScreen.RedeemCodeScreen_C.UpdateSubmitButtonState
struct URedeemCodeScreen_C_UpdateSubmitButtonState_Params
{
};

// Function RedeemCodeScreen.RedeemCodeScreen_C.SetErrorMessage
struct URedeemCodeScreen_C_SetErrorMessage_Params
{
	struct FText                                       ErrorMessage;                                              // 0x0000(0x0018)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function RedeemCodeScreen.RedeemCodeScreen_C.OnSpamPreventTimeout
struct URedeemCodeScreen_C_OnSpamPreventTimeout_Params
{
};

// Function RedeemCodeScreen.RedeemCodeScreen_C.GetPaletteColor
struct URedeemCodeScreen_C_GetPaletteColor_Params
{
	struct FName                                       Color_Name;                                                // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FSlateColor                                 Color;                                                     // 0x0008(0x0028)  (Parm, OutParm)
};

// Function RedeemCodeScreen.RedeemCodeScreen_C.ShowPending
struct URedeemCodeScreen_C_ShowPending_Params
{
};

// Function RedeemCodeScreen.RedeemCodeScreen_C.EndPending
struct URedeemCodeScreen_C_EndPending_Params
{
};

// Function RedeemCodeScreen.RedeemCodeScreen_C.NavigateBack
struct URedeemCodeScreen_C_NavigateBack_Params
{
	bool                                               ReturnValue;                                               // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
};

// Function RedeemCodeScreen.RedeemCodeScreen_C.StartShowAnim
struct URedeemCodeScreen_C_StartShowAnim_Params
{
};

// Function RedeemCodeScreen.RedeemCodeScreen_C.InitializeTickAnimations
struct URedeemCodeScreen_C_InitializeTickAnimations_Params
{
};

// Function RedeemCodeScreen.RedeemCodeScreen_C.ShowCodeRedeemFinished
struct URedeemCodeScreen_C_ShowCodeRedeemFinished_Params
{
};

// Function RedeemCodeScreen.RedeemCodeScreen_C.ShowCodeRedeemAnim
struct URedeemCodeScreen_C_ShowCodeRedeemAnim_Params
{
	float                                              ElapsedTime;                                               // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              ElapsedAlpha;                                              // 0x0004(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function RedeemCodeScreen.RedeemCodeScreen_C.InitHideAnimation
struct URedeemCodeScreen_C_InitHideAnimation_Params
{
};

// Function RedeemCodeScreen.RedeemCodeScreen_C.HideCodeRedeemFinished
struct URedeemCodeScreen_C_HideCodeRedeemFinished_Params
{
};

// Function RedeemCodeScreen.RedeemCodeScreen_C.HideCodeRedeemAnim
struct URedeemCodeScreen_C_HideCodeRedeemAnim_Params
{
	float                                              ElapsedTime;                                               // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              ElapsedAlpha;                                              // 0x0004(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function RedeemCodeScreen.RedeemCodeScreen_C.StartHideAnim
struct URedeemCodeScreen_C_StartHideAnim_Params
{
};

// Function RedeemCodeScreen.RedeemCodeScreen_C.InitializeWidget
struct URedeemCodeScreen_C_InitializeWidget_Params
{
	class APUMG_HUD*                                   HUD;                                                       // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function RedeemCodeScreen.RedeemCodeScreen_C.InitializeWidgetNavigation
struct URedeemCodeScreen_C_InitializeWidgetNavigation_Params
{
};

// Function RedeemCodeScreen.RedeemCodeScreen_C.Construct
struct URedeemCodeScreen_C_Construct_Params
{
};

// Function RedeemCodeScreen.RedeemCodeScreen_C.InitializeWidgetButtonListeners
struct URedeemCodeScreen_C_InitializeWidgetButtonListeners_Params
{
};

// Function RedeemCodeScreen.RedeemCodeScreen_C.SubmitCode
struct URedeemCodeScreen_C_SubmitCode_Params
{
};

// Function RedeemCodeScreen.RedeemCodeScreen_C.StartShowSequence
struct URedeemCodeScreen_C_StartShowSequence_Params
{
	struct FName                                       FromRoute;                                                 // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FName                                       ToRoute;                                                   // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function RedeemCodeScreen.RedeemCodeScreen_C.StartHideSequence
struct URedeemCodeScreen_C_StartHideSequence_Params
{
	struct FName                                       FromRoute;                                                 // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FName                                       ToRoute;                                                   // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function RedeemCodeScreen.RedeemCodeScreen_C.OnShown
struct URedeemCodeScreen_C_OnShown_Params
{
};

// Function RedeemCodeScreen.RedeemCodeScreen_C.OnHide
struct URedeemCodeScreen_C_OnHide_Params
{
};

// Function RedeemCodeScreen.RedeemCodeScreen_C.OnCloseButtonClicked
struct URedeemCodeScreen_C_OnCloseButtonClicked_Params
{
};

// Function RedeemCodeScreen.RedeemCodeScreen_C.BndEvt__WBP_StandardButtonMedium_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature
struct URedeemCodeScreen_C_BndEvt__WBP_StandardButtonMedium_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature_Params
{
	class UWidget*                                     Widget;                                                    // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function RedeemCodeScreen.RedeemCodeScreen_C.OnRedeemCodeSubmit
struct URedeemCodeScreen_C_OnRedeemCodeSubmit_Params
{
};

// Function RedeemCodeScreen.RedeemCodeScreen_C.OnRedeemCodeResult
struct URedeemCodeScreen_C_OnRedeemCodeResult_Params
{
	bool                                               Success;                                                   // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FText                                       Error;                                                     // 0x0008(0x0018)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};

// Function RedeemCodeScreen.RedeemCodeScreen_C.HandleInputStateChanged
struct URedeemCodeScreen_C_HandleInputStateChanged_Params
{
	TEnumAsByte<PlatformGameFramework_EPGAME_INPUT_STATE> InputState;                                                // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function RedeemCodeScreen.RedeemCodeScreen_C.OnCodeTextChanged
struct URedeemCodeScreen_C_OnCodeTextChanged_Params
{
	struct FText                                       Text;                                                      // 0x0000(0x0018)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};

// Function RedeemCodeScreen.RedeemCodeScreen_C.OnCodeTextCommit
struct URedeemCodeScreen_C_OnCodeTextCommit_Params
{
	struct FText                                       Text;                                                      // 0x0000(0x0018)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	TEnumAsByte<SlateCore_ETextCommit>                 CommitMethod;                                              // 0x0018(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function RedeemCodeScreen.RedeemCodeScreen_C.ExecuteUbergraph_RedeemCodeScreen
struct URedeemCodeScreen_C_ExecuteUbergraph_RedeemCodeScreen_Params
{
	int                                                EntryPoint;                                                // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
