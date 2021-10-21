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

// Function WBP_ActiveMissionPanel.WBP_ActiveMissionPanel_C.NavigateConfirm
struct UWBP_ActiveMissionPanel_C_NavigateConfirm_Params
{
	bool                                               ReturnValue;                                               // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
};

// Function WBP_ActiveMissionPanel.WBP_ActiveMissionPanel_C.RefreshDisplay
struct UWBP_ActiveMissionPanel_C_RefreshDisplay_Params
{
};

// Function WBP_ActiveMissionPanel.WBP_ActiveMissionPanel_C.OnMouseEnter
struct UWBP_ActiveMissionPanel_C_OnMouseEnter_Params
{
	struct FGeometry                                   MyGeometry;                                                // 0x0000(0x0058)  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	struct FPointerEvent                               MouseEvent;                                                // 0x0058(0x0070)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};

// Function WBP_ActiveMissionPanel.WBP_ActiveMissionPanel_C.BndEvt__HitTarget_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature
struct UWBP_ActiveMissionPanel_C_BndEvt__HitTarget_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature_Params
{
};

// Function WBP_ActiveMissionPanel.WBP_ActiveMissionPanel_C.BndEvt__HitTarget_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature
struct UWBP_ActiveMissionPanel_C_BndEvt__HitTarget_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature_Params
{
};

// Function WBP_ActiveMissionPanel.WBP_ActiveMissionPanel_C.BndEvt__MissionPanel_K2Node_ComponentBoundEvent_0_OnBtnClicked__DelegateSignature
struct UWBP_ActiveMissionPanel_C_BndEvt__MissionPanel_K2Node_ComponentBoundEvent_0_OnBtnClicked__DelegateSignature_Params
{
};

// Function WBP_ActiveMissionPanel.WBP_ActiveMissionPanel_C.Handle Input State Changed
struct UWBP_ActiveMissionPanel_C_Handle_Input_State_Changed_Params
{
	TEnumAsByte<PlatformGameFramework_EPGAME_INPUT_STATE> InputState;                                                // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function WBP_ActiveMissionPanel.WBP_ActiveMissionPanel_C.InitializeWidget
struct UWBP_ActiveMissionPanel_C_InitializeWidget_Params
{
	class APUMG_HUD*                                   HUD;                                                       // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function WBP_ActiveMissionPanel.WBP_ActiveMissionPanel_C.GamepadHover
struct UWBP_ActiveMissionPanel_C_GamepadHover_Params
{
};

// Function WBP_ActiveMissionPanel.WBP_ActiveMissionPanel_C.GamepadUnhover
struct UWBP_ActiveMissionPanel_C_GamepadUnhover_Params
{
};

// Function WBP_ActiveMissionPanel.WBP_ActiveMissionPanel_C.ExecuteUbergraph_WBP_ActiveMissionPanel
struct UWBP_ActiveMissionPanel_C_ExecuteUbergraph_WBP_ActiveMissionPanel_Params
{
	int                                                EntryPoint;                                                // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function WBP_ActiveMissionPanel.WBP_ActiveMissionPanel_C.OnPanelClicked__DelegateSignature
struct UWBP_ActiveMissionPanel_C_OnPanelClicked__DelegateSignature_Params
{
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
