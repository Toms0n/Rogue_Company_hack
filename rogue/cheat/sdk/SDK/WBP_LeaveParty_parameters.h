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

// Function WBP_LeaveParty.WBP_LeaveParty_C.NavigateConfirm
struct UWBP_LeaveParty_C_NavigateConfirm_Params
{
	bool                                               ReturnValue;                                               // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
};

// Function WBP_LeaveParty.WBP_LeaveParty_C.HandleInputStateChanged
struct UWBP_LeaveParty_C_HandleInputStateChanged_Params
{
	TEnumAsByte<PlatformGameFramework_EPGAME_INPUT_STATE> CurrentInputState;                                         // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function WBP_LeaveParty.WBP_LeaveParty_C.SocialLeavePartyHoverSFX
struct UWBP_LeaveParty_C_SocialLeavePartyHoverSFX_Params
{
};

// Function WBP_LeaveParty.WBP_LeaveParty_C.SocialLeavePartyClickSFX
struct UWBP_LeaveParty_C_SocialLeavePartyClickSFX_Params
{
};

// Function WBP_LeaveParty.WBP_LeaveParty_C.InitializeWidget
struct UWBP_LeaveParty_C_InitializeWidget_Params
{
	class APUMG_HUD*                                   HUD;                                                       // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function WBP_LeaveParty.WBP_LeaveParty_C.HandlePartyUpdated
struct UWBP_LeaveParty_C_HandlePartyUpdated_Params
{
};

// Function WBP_LeaveParty.WBP_LeaveParty_C.CallLeaveParty
struct UWBP_LeaveParty_C_CallLeaveParty_Params
{
};

// Function WBP_LeaveParty.WBP_LeaveParty_C.BndEvt__Button_101_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
struct UWBP_LeaveParty_C_BndEvt__Button_101_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature_Params
{
};

// Function WBP_LeaveParty.WBP_LeaveParty_C.BndEvt__Button_101_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature
struct UWBP_LeaveParty_C_BndEvt__Button_101_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature_Params
{
};

// Function WBP_LeaveParty.WBP_LeaveParty_C.BndEvt__Button_101_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature
struct UWBP_LeaveParty_C_BndEvt__Button_101_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature_Params
{
};

// Function WBP_LeaveParty.WBP_LeaveParty_C.GamepadHover
struct UWBP_LeaveParty_C_GamepadHover_Params
{
};

// Function WBP_LeaveParty.WBP_LeaveParty_C.GamepadUnhover
struct UWBP_LeaveParty_C_GamepadUnhover_Params
{
};

// Function WBP_LeaveParty.WBP_LeaveParty_C.ExecuteUbergraph_WBP_LeaveParty
struct UWBP_LeaveParty_C_ExecuteUbergraph_WBP_LeaveParty_Params
{
	int                                                EntryPoint;                                                // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function WBP_LeaveParty.WBP_LeaveParty_C.OnPartyLeaveVisibilityChange__DelegateSignature
struct UWBP_LeaveParty_C_OnPartyLeaveVisibilityChange__DelegateSignature_Params
{
	bool                                               Visible;                                                   // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
