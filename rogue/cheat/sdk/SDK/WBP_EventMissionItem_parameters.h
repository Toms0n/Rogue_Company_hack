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

// Function WBP_EventMissionItem.WBP_EventMissionItem_C.SetIsSelectedVisualState
struct UWBP_EventMissionItem_C_SetIsSelectedVisualState_Params
{
	bool                                               IsSelected;                                                // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function WBP_EventMissionItem.WBP_EventMissionItem_C.Populate Slot
struct UWBP_EventMissionItem_C_Populate_Slot_Params
{
	class UKSActivityInstance*                         ActivityInstance;                                          // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function WBP_EventMissionItem.WBP_EventMissionItem_C.FormatMissionText
struct UWBP_EventMissionItem_C_FormatMissionText_Params
{
	struct FText                                       BaseText;                                                  // 0x0000(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm)
	struct FText                                       FormattedText;                                             // 0x0018(0x0018)  (Parm, OutParm)
};

// Function WBP_EventMissionItem.WBP_EventMissionItem_C.SetVisualState
struct UWBP_EventMissionItem_C_SetVisualState_Params
{
	TEnumAsByte<EChallengeEntry_Card_State_EChallengeEntry_Card_State> CurrentState;                                              // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               IsPremium;                                                 // 0x0001(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                               IsActive;                                                  // 0x0002(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function WBP_EventMissionItem.WBP_EventMissionItem_C.PreConstruct
struct UWBP_EventMissionItem_C_PreConstruct_Params
{
	bool                                               IsDesignTime;                                              // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function WBP_EventMissionItem.WBP_EventMissionItem_C.BndEvt__HitTarget_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature
struct UWBP_EventMissionItem_C_BndEvt__HitTarget_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature_Params
{
};

// Function WBP_EventMissionItem.WBP_EventMissionItem_C.BndEvt__HitTarget_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature
struct UWBP_EventMissionItem_C_BndEvt__HitTarget_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature_Params
{
};

// Function WBP_EventMissionItem.WBP_EventMissionItem_C.GamepadHover
struct UWBP_EventMissionItem_C_GamepadHover_Params
{
};

// Function WBP_EventMissionItem.WBP_EventMissionItem_C.GamepadUnhover
struct UWBP_EventMissionItem_C_GamepadUnhover_Params
{
};

// Function WBP_EventMissionItem.WBP_EventMissionItem_C.BndEvt__HitTarget_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
struct UWBP_EventMissionItem_C_BndEvt__HitTarget_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature_Params
{
};

// Function WBP_EventMissionItem.WBP_EventMissionItem_C.ExecuteUbergraph_WBP_EventMissionItem
struct UWBP_EventMissionItem_C_ExecuteUbergraph_WBP_EventMissionItem_Params
{
	int                                                EntryPoint;                                                // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function WBP_EventMissionItem.WBP_EventMissionItem_C.OnButtonFocused__DelegateSignature
struct UWBP_EventMissionItem_C_OnButtonFocused__DelegateSignature_Params
{
	class UKSActivityInstance*                         ActivityInstance;                                          // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UWBP_EventMissionItem_C*                     Widget;                                                    // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
