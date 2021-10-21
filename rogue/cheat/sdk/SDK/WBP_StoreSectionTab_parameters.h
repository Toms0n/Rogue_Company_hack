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

// Function WBP_StoreSectionTab.WBP_StoreSectionTab_C.ShowCTA
struct UWBP_StoreSectionTab_C_ShowCTA_Params
{
	bool                                               ShowCTA;                                                   // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function WBP_StoreSectionTab.WBP_StoreSectionTab_C.SetPromptButton
struct UWBP_StoreSectionTab_C_SetPromptButton_Params
{
	struct FKey                                        PromptKey;                                                 // 0x0000(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
};

// Function WBP_StoreSectionTab.WBP_StoreSectionTab_C.OnInputStateChanged
struct UWBP_StoreSectionTab_C_OnInputStateChanged_Params
{
	TEnumAsByte<PlatformGameFramework_EPGAME_INPUT_STATE> InputState;                                                // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function WBP_StoreSectionTab.WBP_StoreSectionTab_C.NavigateConfirm
struct UWBP_StoreSectionTab_C_NavigateConfirm_Params
{
	bool                                               ReturnValue;                                               // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
};

// Function WBP_StoreSectionTab.WBP_StoreSectionTab_C.Construct
struct UWBP_StoreSectionTab_C_Construct_Params
{
};

// Function WBP_StoreSectionTab.WBP_StoreSectionTab_C.BndEvt__TabButton_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
struct UWBP_StoreSectionTab_C_BndEvt__TabButton_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature_Params
{
};

// Function WBP_StoreSectionTab.WBP_StoreSectionTab_C.GamepadConfirm
struct UWBP_StoreSectionTab_C_GamepadConfirm_Params
{
};

// Function WBP_StoreSectionTab.WBP_StoreSectionTab_C.BndEvt__TabButton_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature
struct UWBP_StoreSectionTab_C_BndEvt__TabButton_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature_Params
{
};

// Function WBP_StoreSectionTab.WBP_StoreSectionTab_C.BndEvt__TabButton_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature
struct UWBP_StoreSectionTab_C_BndEvt__TabButton_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature_Params
{
};

// Function WBP_StoreSectionTab.WBP_StoreSectionTab_C.SetActive
struct UWBP_StoreSectionTab_C_SetActive_Params
{
};

// Function WBP_StoreSectionTab.WBP_StoreSectionTab_C.SetInactive
struct UWBP_StoreSectionTab_C_SetInactive_Params
{
};

// Function WBP_StoreSectionTab.WBP_StoreSectionTab_C.PreConstruct
struct UWBP_StoreSectionTab_C_PreConstruct_Params
{
	bool                                               IsDesignTime;                                              // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function WBP_StoreSectionTab.WBP_StoreSectionTab_C.InitializeWidget
struct UWBP_StoreSectionTab_C_InitializeWidget_Params
{
	class APUMG_HUD*                                   HUD;                                                       // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function WBP_StoreSectionTab.WBP_StoreSectionTab_C.ExecuteUbergraph_WBP_StoreSectionTab
struct UWBP_StoreSectionTab_C_ExecuteUbergraph_WBP_StoreSectionTab_Params
{
	int                                                EntryPoint;                                                // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function WBP_StoreSectionTab.WBP_StoreSectionTab_C.OnUnhovered__DelegateSignature
struct UWBP_StoreSectionTab_C_OnUnhovered__DelegateSignature_Params
{
};

// Function WBP_StoreSectionTab.WBP_StoreSectionTab_C.OnHovered__DelegateSignature
struct UWBP_StoreSectionTab_C_OnHovered__DelegateSignature_Params
{
};

// Function WBP_StoreSectionTab.WBP_StoreSectionTab_C.OnClicked__DelegateSignature
struct UWBP_StoreSectionTab_C_OnClicked__DelegateSignature_Params
{
	int                                                Index;                                                     // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
