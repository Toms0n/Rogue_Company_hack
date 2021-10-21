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

// Function WBP_QueueTimer_v2.WBP_QueueTimer_v2_C.UpdateCancelButton
struct UWBP_QueueTimer_v2_C_UpdateCancelButton_Params
{
};

// Function WBP_QueueTimer_v2.WBP_QueueTimer_v2_C.SetNeutralLabel
struct UWBP_QueueTimer_v2_C_SetNeutralLabel_Params
{
	struct FText                                       InText;                                                    // 0x0000(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function WBP_QueueTimer_v2.WBP_QueueTimer_v2_C.GetColorFromPalette
struct UWBP_QueueTimer_v2_C_GetColorFromPalette_Params
{
	struct FName                                       RowName;                                                   // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                                LinearColor;                                               // 0x0008(0x0010)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function WBP_QueueTimer_v2.WBP_QueueTimer_v2_C.UpdatePenaltyTime
struct UWBP_QueueTimer_v2_C_UpdatePenaltyTime_Params
{
};

// Function WBP_QueueTimer_v2.WBP_QueueTimer_v2_C.UpdateStatusLabel
struct UWBP_QueueTimer_v2_C_UpdateStatusLabel_Params
{
};

// Function WBP_QueueTimer_v2.WBP_QueueTimer_v2_C.HandleInputStateChanged
struct UWBP_QueueTimer_v2_C_HandleInputStateChanged_Params
{
	TEnumAsByte<PlatformGameFramework_EPGAME_INPUT_STATE> InputState;                                                // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function WBP_QueueTimer_v2.WBP_QueueTimer_v2_C.SetGamepadCallout
struct UWBP_QueueTimer_v2_C_SetGamepadCallout_Params
{
};

// Function WBP_QueueTimer_v2.WBP_QueueTimer_v2_C.UpdateQueueTime
struct UWBP_QueueTimer_v2_C_UpdateQueueTime_Params
{
};

// Function WBP_QueueTimer_v2.WBP_QueueTimer_v2_C.InitializeWidget
struct UWBP_QueueTimer_v2_C_InitializeWidget_Params
{
	class APUMG_HUD*                                   HUD;                                                       // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function WBP_QueueTimer_v2.WBP_QueueTimer_v2_C.Construct
struct UWBP_QueueTimer_v2_C_Construct_Params
{
};

// Function WBP_QueueTimer_v2.WBP_QueueTimer_v2_C.CancelQueue
struct UWBP_QueueTimer_v2_C_CancelQueue_Params
{
};

// Function WBP_QueueTimer_v2.WBP_QueueTimer_v2_C.InitializeWidgetNavigation
struct UWBP_QueueTimer_v2_C_InitializeWidgetNavigation_Params
{
};

// Function WBP_QueueTimer_v2.WBP_QueueTimer_v2_C.InitializeWidgetButtonListeners
struct UWBP_QueueTimer_v2_C_InitializeWidgetButtonListeners_Params
{
};

// Function WBP_QueueTimer_v2.WBP_QueueTimer_v2_C.PreConstruct
struct UWBP_QueueTimer_v2_C_PreConstruct_Params
{
	bool                                               IsDesignTime;                                              // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function WBP_QueueTimer_v2.WBP_QueueTimer_v2_C.BndEvt__CancelQueueButton_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature
struct UWBP_QueueTimer_v2_C_BndEvt__CancelQueueButton_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature_Params
{
};

// Function WBP_QueueTimer_v2.WBP_QueueTimer_v2_C.BndEvt__CancelQueueButton_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature
struct UWBP_QueueTimer_v2_C_BndEvt__CancelQueueButton_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature_Params
{
};

// Function WBP_QueueTimer_v2.WBP_QueueTimer_v2_C.BndEvt__CancelQueueButton_K2Node_ComponentBoundEvent_5_OnButtonClickedEvent__DelegateSignature
struct UWBP_QueueTimer_v2_C_BndEvt__CancelQueueButton_K2Node_ComponentBoundEvent_5_OnButtonClickedEvent__DelegateSignature_Params
{
};

// Function WBP_QueueTimer_v2.WBP_QueueTimer_v2_C.OnUpdateQueueTime
struct UWBP_QueueTimer_v2_C_OnUpdateQueueTime_Params
{
	float                                              TimeSecs;                                                  // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function WBP_QueueTimer_v2.WBP_QueueTimer_v2_C.OnUpdateQueueTimerState
struct UWBP_QueueTimer_v2_C_OnUpdateQueueTimerState_Params
{
	KillstreakUINew_EQueueTimerState                   State;                                                     // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function WBP_QueueTimer_v2.WBP_QueueTimer_v2_C.OnControlQueuePermissionUpdate
struct UWBP_QueueTimer_v2_C_OnControlQueuePermissionUpdate_Params
{
	bool                                               CanControl;                                                // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function WBP_QueueTimer_v2.WBP_QueueTimer_v2_C.ExecuteUbergraph_WBP_QueueTimer_v2
struct UWBP_QueueTimer_v2_C_ExecuteUbergraph_WBP_QueueTimer_v2_Params
{
	int                                                EntryPoint;                                                // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
