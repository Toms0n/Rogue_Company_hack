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

// Function WBP_Challenge_Panel_v2.WBP_Challenge_Panel_v2_C.NavigateConfirm
struct UWBP_Challenge_Panel_v2_C_NavigateConfirm_Params
{
	bool                                               ReturnValue;                                               // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
};

// Function WBP_Challenge_Panel_v2.WBP_Challenge_Panel_v2_C.GetNavigationWidgets
struct UWBP_Challenge_Panel_v2_C_GetNavigationWidgets_Params
{
	TArray<class UPUMG_Widget*>                        Return_Value;                                              // 0x0000(0x0010)  (Parm, OutParm, ContainsInstancedReference, HasGetValueTypeHash)
};

// Function WBP_Challenge_Panel_v2.WBP_Challenge_Panel_v2_C.GetChallengeCards
struct UWBP_Challenge_Panel_v2_C_GetChallengeCards_Params
{
	TArray<class UWBP_ChallengeEntry_Daily_Truncated_C*> Return_Value;                                              // 0x0000(0x0010)  (Parm, OutParm, ContainsInstancedReference, HasGetValueTypeHash)
};

// Function WBP_Challenge_Panel_v2.WBP_Challenge_Panel_v2_C.PreConstruct
struct UWBP_Challenge_Panel_v2_C_PreConstruct_Params
{
	bool                                               IsDesignTime;                                              // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function WBP_Challenge_Panel_v2.WBP_Challenge_Panel_v2_C.InitializeWidget
struct UWBP_Challenge_Panel_v2_C_InitializeWidget_Params
{
	class APUMG_HUD*                                   HUD;                                                       // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function WBP_Challenge_Panel_v2.WBP_Challenge_Panel_v2_C.BndEvt__HitTarget_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature
struct UWBP_Challenge_Panel_v2_C_BndEvt__HitTarget_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature_Params
{
};

// Function WBP_Challenge_Panel_v2.WBP_Challenge_Panel_v2_C.BndEvt__HitTarget_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature
struct UWBP_Challenge_Panel_v2_C_BndEvt__HitTarget_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature_Params
{
};

// Function WBP_Challenge_Panel_v2.WBP_Challenge_Panel_v2_C.InitializeWidgetNavigation
struct UWBP_Challenge_Panel_v2_C_InitializeWidgetNavigation_Params
{
};

// Function WBP_Challenge_Panel_v2.WBP_Challenge_Panel_v2_C.PopulateChallenges
struct UWBP_Challenge_Panel_v2_C_PopulateChallenges_Params
{
};

// Function WBP_Challenge_Panel_v2.WBP_Challenge_Panel_v2_C.BndEvt__HitTarget_K2Node_ComponentBoundEvent_5_OnButtonClickedEvent__DelegateSignature
struct UWBP_Challenge_Panel_v2_C_BndEvt__HitTarget_K2Node_ComponentBoundEvent_5_OnButtonClickedEvent__DelegateSignature_Params
{
};

// Function WBP_Challenge_Panel_v2.WBP_Challenge_Panel_v2_C.GamepadHover
struct UWBP_Challenge_Panel_v2_C_GamepadHover_Params
{
};

// Function WBP_Challenge_Panel_v2.WBP_Challenge_Panel_v2_C.GamepadUnhover
struct UWBP_Challenge_Panel_v2_C_GamepadUnhover_Params
{
};

// Function WBP_Challenge_Panel_v2.WBP_Challenge_Panel_v2_C.Force Click
struct UWBP_Challenge_Panel_v2_C_Force_Click_Params
{
};

// Function WBP_Challenge_Panel_v2.WBP_Challenge_Panel_v2_C.Handle View State Changed
struct UWBP_Challenge_Panel_v2_C_Handle_View_State_Changed_Params
{
	struct FName                                       CurrentRoute;                                              // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FName                                       PreviousRoute;                                             // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	PlatformUMG_EViewManagerLayer                      Layer;                                                     // 0x0010(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function WBP_Challenge_Panel_v2.WBP_Challenge_Panel_v2_C.ExecuteUbergraph_WBP_Challenge_Panel_v2
struct UWBP_Challenge_Panel_v2_C_ExecuteUbergraph_WBP_Challenge_Panel_v2_Params
{
	int                                                EntryPoint;                                                // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
