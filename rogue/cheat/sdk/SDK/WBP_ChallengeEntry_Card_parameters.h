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

// Function WBP_ChallengeEntry_Card.WBP_ChallengeEntry_Card_C.GetCurrentChallengeId
struct UWBP_ChallengeEntry_Card_C_GetCurrentChallengeId_Params
{
	int                                                Return_Value;                                              // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function WBP_ChallengeEntry_Card.WBP_ChallengeEntry_Card_C.NavigateConfirm
struct UWBP_ChallengeEntry_Card_C_NavigateConfirm_Params
{
	bool                                               ReturnValue;                                               // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
};

// Function WBP_ChallengeEntry_Card.WBP_ChallengeEntry_Card_C.SetChallengeData
struct UWBP_ChallengeEntry_Card_C_SetChallengeData_Params
{
	class UKSActivityInstance*                         ChallengeActivityInstance;                                 // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function WBP_ChallengeEntry_Card.WBP_ChallengeEntry_Card_C.SetVisualState
struct UWBP_ChallengeEntry_Card_C_SetVisualState_Params
{
	TEnumAsByte<EChallengeEntry_Card_State_EChallengeEntry_Card_State> State;                                                     // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function WBP_ChallengeEntry_Card.WBP_ChallengeEntry_Card_C.PreConstruct
struct UWBP_ChallengeEntry_Card_C_PreConstruct_Params
{
	bool                                               IsDesignTime;                                              // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function WBP_ChallengeEntry_Card.WBP_ChallengeEntry_Card_C.BndEvt__RerollButton_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature
struct UWBP_ChallengeEntry_Card_C_BndEvt__RerollButton_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature_Params
{
};

// Function WBP_ChallengeEntry_Card.WBP_ChallengeEntry_Card_C.BndEvt__RerollButton_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature
struct UWBP_ChallengeEntry_Card_C_BndEvt__RerollButton_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature_Params
{
};

// Function WBP_ChallengeEntry_Card.WBP_ChallengeEntry_Card_C.BndEvt__HoverButton_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature
struct UWBP_ChallengeEntry_Card_C_BndEvt__HoverButton_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature_Params
{
};

// Function WBP_ChallengeEntry_Card.WBP_ChallengeEntry_Card_C.BndEvt__HoverButton_K2Node_ComponentBoundEvent_3_OnButtonHoverEvent__DelegateSignature
struct UWBP_ChallengeEntry_Card_C_BndEvt__HoverButton_K2Node_ComponentBoundEvent_3_OnButtonHoverEvent__DelegateSignature_Params
{
};

// Function WBP_ChallengeEntry_Card.WBP_ChallengeEntry_Card_C.GamepadHover
struct UWBP_ChallengeEntry_Card_C_GamepadHover_Params
{
};

// Function WBP_ChallengeEntry_Card.WBP_ChallengeEntry_Card_C.GamepadUnhover
struct UWBP_ChallengeEntry_Card_C_GamepadUnhover_Params
{
};

// Function WBP_ChallengeEntry_Card.WBP_ChallengeEntry_Card_C.InitializeWidget
struct UWBP_ChallengeEntry_Card_C_InitializeWidget_Params
{
	class APUMG_HUD*                                   HUD;                                                       // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function WBP_ChallengeEntry_Card.WBP_ChallengeEntry_Card_C.Handle Input State Changed
struct UWBP_ChallengeEntry_Card_C_Handle_Input_State_Changed_Params
{
	TEnumAsByte<PlatformGameFramework_EPGAME_INPUT_STATE> InputState;                                                // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function WBP_ChallengeEntry_Card.WBP_ChallengeEntry_Card_C.BndEvt__RerollButton_K2Node_ComponentBoundEvent_4_OnButtonClickedEvent__DelegateSignature
struct UWBP_ChallengeEntry_Card_C_BndEvt__RerollButton_K2Node_ComponentBoundEvent_4_OnButtonClickedEvent__DelegateSignature_Params
{
};

// Function WBP_ChallengeEntry_Card.WBP_ChallengeEntry_Card_C.TryReroll
struct UWBP_ChallengeEntry_Card_C_TryReroll_Params
{
};

// Function WBP_ChallengeEntry_Card.WBP_ChallengeEntry_Card_C.BndEvt__HoverButton_K2Node_ComponentBoundEvent_5_OnButtonClickedEvent__DelegateSignature
struct UWBP_ChallengeEntry_Card_C_BndEvt__HoverButton_K2Node_ComponentBoundEvent_5_OnButtonClickedEvent__DelegateSignature_Params
{
};

// Function WBP_ChallengeEntry_Card.WBP_ChallengeEntry_Card_C.Play Reroll Anim
struct UWBP_ChallengeEntry_Card_C_Play_Reroll_Anim_Params
{
};

// Function WBP_ChallengeEntry_Card.WBP_ChallengeEntry_Card_C.ExecuteUbergraph_WBP_ChallengeEntry_Card
struct UWBP_ChallengeEntry_Card_C_ExecuteUbergraph_WBP_ChallengeEntry_Card_Params
{
	int                                                EntryPoint;                                                // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
