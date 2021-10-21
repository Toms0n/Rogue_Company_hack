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

// Function WBP_VerticalTabGroupEntry.WBP_VerticalTabGroupEntry_C.NavigateConfirm
struct UWBP_VerticalTabGroupEntry_C_NavigateConfirm_Params
{
	bool                                               ReturnValue;                                               // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
};

// Function WBP_VerticalTabGroupEntry.WBP_VerticalTabGroupEntry_C.ClearSelected
struct UWBP_VerticalTabGroupEntry_C_ClearSelected_Params
{
};

// Function WBP_VerticalTabGroupEntry.WBP_VerticalTabGroupEntry_C.SetViewState
struct UWBP_VerticalTabGroupEntry_C_SetViewState_Params
{
	TEnumAsByte<EVerticalTabState_EVerticalTabState>   TabState;                                                  // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               Force;                                                     // 0x0001(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function WBP_VerticalTabGroupEntry.WBP_VerticalTabGroupEntry_C.PreConstruct
struct UWBP_VerticalTabGroupEntry_C_PreConstruct_Params
{
	bool                                               IsDesignTime;                                              // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function WBP_VerticalTabGroupEntry.WBP_VerticalTabGroupEntry_C.Construct
struct UWBP_VerticalTabGroupEntry_C_Construct_Params
{
};

// Function WBP_VerticalTabGroupEntry.WBP_VerticalTabGroupEntry_C.BndEvt__HitTarget_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature
struct UWBP_VerticalTabGroupEntry_C_BndEvt__HitTarget_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature_Params
{
};

// Function WBP_VerticalTabGroupEntry.WBP_VerticalTabGroupEntry_C.BndEvt__HitTarget_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature
struct UWBP_VerticalTabGroupEntry_C_BndEvt__HitTarget_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature_Params
{
};

// Function WBP_VerticalTabGroupEntry.WBP_VerticalTabGroupEntry_C.BndEvt__HitTarget_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature
struct UWBP_VerticalTabGroupEntry_C_BndEvt__HitTarget_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature_Params
{
};

// Function WBP_VerticalTabGroupEntry.WBP_VerticalTabGroupEntry_C.GamepadHover
struct UWBP_VerticalTabGroupEntry_C_GamepadHover_Params
{
};

// Function WBP_VerticalTabGroupEntry.WBP_VerticalTabGroupEntry_C.GamepadUnhover
struct UWBP_VerticalTabGroupEntry_C_GamepadUnhover_Params
{
};

// Function WBP_VerticalTabGroupEntry.WBP_VerticalTabGroupEntry_C.InitializeWidget
struct UWBP_VerticalTabGroupEntry_C_InitializeWidget_Params
{
	class APUMG_HUD*                                   HUD;                                                       // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function WBP_VerticalTabGroupEntry.WBP_VerticalTabGroupEntry_C.Handle Input State Changed
struct UWBP_VerticalTabGroupEntry_C_Handle_Input_State_Changed_Params
{
	TEnumAsByte<PlatformGameFramework_EPGAME_INPUT_STATE> InputState;                                                // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function WBP_VerticalTabGroupEntry.WBP_VerticalTabGroupEntry_C.ExecuteUbergraph_WBP_VerticalTabGroupEntry
struct UWBP_VerticalTabGroupEntry_C_ExecuteUbergraph_WBP_VerticalTabGroupEntry_Params
{
	int                                                EntryPoint;                                                // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function WBP_VerticalTabGroupEntry.WBP_VerticalTabGroupEntry_C.OnTabGamepadSelected__DelegateSignature
struct UWBP_VerticalTabGroupEntry_C_OnTabGamepadSelected__DelegateSignature_Params
{
	struct FName                                       ViewName;                                                  // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function WBP_VerticalTabGroupEntry.WBP_VerticalTabGroupEntry_C.OnTabSelected__DelegateSignature
struct UWBP_VerticalTabGroupEntry_C_OnTabSelected__DelegateSignature_Params
{
	struct FName                                       ViewName;                                                  // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
