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

// Function WBP_QuickPlay_QueueButton.WBP_QuickPlay_QueueButton_C.UpdateStatus
struct UWBP_QuickPlay_QueueButton_C_UpdateStatus_Params
{
};

// Function WBP_QuickPlay_QueueButton.WBP_QuickPlay_QueueButton_C.NavigateConfirm
struct UWBP_QuickPlay_QueueButton_C_NavigateConfirm_Params
{
	bool                                               ReturnValue;                                               // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
};

// Function WBP_QuickPlay_QueueButton.WBP_QuickPlay_QueueButton_C.BndEvt__WBP_Graphic_Button_K2Node_ComponentBoundEvent_0_OnGraphicBtnClicked__DelegateSignature
struct UWBP_QuickPlay_QueueButton_C_BndEvt__WBP_Graphic_Button_K2Node_ComponentBoundEvent_0_OnGraphicBtnClicked__DelegateSignature_Params
{
};

// Function WBP_QuickPlay_QueueButton.WBP_QuickPlay_QueueButton_C.BndEvt__WBP_Graphic_Button_K2Node_ComponentBoundEvent_1_OnGraphicBtnHovered__DelegateSignature
struct UWBP_QuickPlay_QueueButton_C_BndEvt__WBP_Graphic_Button_K2Node_ComponentBoundEvent_1_OnGraphicBtnHovered__DelegateSignature_Params
{
	bool                                               IsGamepad;                                                 // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function WBP_QuickPlay_QueueButton.WBP_QuickPlay_QueueButton_C.BndEvt__WBP_Graphic_Button_K2Node_ComponentBoundEvent_2_OnGraphicBtnUnhovered__DelegateSignature
struct UWBP_QuickPlay_QueueButton_C_BndEvt__WBP_Graphic_Button_K2Node_ComponentBoundEvent_2_OnGraphicBtnUnhovered__DelegateSignature_Params
{
};

// Function WBP_QuickPlay_QueueButton.WBP_QuickPlay_QueueButton_C.InitializeWidget
struct UWBP_QuickPlay_QueueButton_C_InitializeWidget_Params
{
	class APUMG_HUD*                                   HUD;                                                       // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function WBP_QuickPlay_QueueButton.WBP_QuickPlay_QueueButton_C.Construct
struct UWBP_QuickPlay_QueueButton_C_Construct_Params
{
};

// Function WBP_QuickPlay_QueueButton.WBP_QuickPlay_QueueButton_C.OnButtonHovered
struct UWBP_QuickPlay_QueueButton_C_OnButtonHovered_Params
{
};

// Function WBP_QuickPlay_QueueButton.WBP_QuickPlay_QueueButton_C.OnButtonUnhovered
struct UWBP_QuickPlay_QueueButton_C_OnButtonUnhovered_Params
{
};

// Function WBP_QuickPlay_QueueButton.WBP_QuickPlay_QueueButton_C.GamepadHover
struct UWBP_QuickPlay_QueueButton_C_GamepadHover_Params
{
};

// Function WBP_QuickPlay_QueueButton.WBP_QuickPlay_QueueButton_C.GamepadUnhover
struct UWBP_QuickPlay_QueueButton_C_GamepadUnhover_Params
{
};

// Function WBP_QuickPlay_QueueButton.WBP_QuickPlay_QueueButton_C.GamepadConfirm
struct UWBP_QuickPlay_QueueButton_C_GamepadConfirm_Params
{
};

// Function WBP_QuickPlay_QueueButton.WBP_QuickPlay_QueueButton_C.SetButtonActive
struct UWBP_QuickPlay_QueueButton_C_SetButtonActive_Params
{
	bool                                               bIsActive;                                                 // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function WBP_QuickPlay_QueueButton.WBP_QuickPlay_QueueButton_C.PreConstruct
struct UWBP_QuickPlay_QueueButton_C_PreConstruct_Params
{
	bool                                               IsDesignTime;                                              // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function WBP_QuickPlay_QueueButton.WBP_QuickPlay_QueueButton_C.ExecuteUbergraph_WBP_QuickPlay_QueueButton
struct UWBP_QuickPlay_QueueButton_C_ExecuteUbergraph_WBP_QuickPlay_QueueButton_Params
{
	int                                                EntryPoint;                                                // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function WBP_QuickPlay_QueueButton.WBP_QuickPlay_QueueButton_C.OnQueueBtnUnhovered__DelegateSignature
struct UWBP_QuickPlay_QueueButton_C_OnQueueBtnUnhovered__DelegateSignature_Params
{
	class UWidget*                                     UnhoverWidget;                                             // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function WBP_QuickPlay_QueueButton.WBP_QuickPlay_QueueButton_C.OnQueueBtnHovered__DelegateSignature
struct UWBP_QuickPlay_QueueButton_C_OnQueueBtnHovered__DelegateSignature_Params
{
	class UWidget*                                     HoveredWidget;                                             // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function WBP_QuickPlay_QueueButton.WBP_QuickPlay_QueueButton_C.OnQueueBtnClicked__DelegateSignature
struct UWBP_QuickPlay_QueueButton_C_OnQueueBtnClicked__DelegateSignature_Params
{
	int                                                QueueId;                                                   // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
