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

// Function WBP_CustomGameConfirmation.WBP_CustomGameConfirmation_C.InitalizeButtons
struct UWBP_CustomGameConfirmation_C_InitalizeButtons_Params
{
};

// Function WBP_CustomGameConfirmation.WBP_CustomGameConfirmation_C.GetButtons
struct UWBP_CustomGameConfirmation_C_GetButtons_Params
{
	TArray<class UKSWidget*>                           Buttons;                                                   // 0x0000(0x0010)  (Parm, OutParm, ContainsInstancedReference, HasGetValueTypeHash)
};

// Function WBP_CustomGameConfirmation.WBP_CustomGameConfirmation_C.PopulateCustomPopup
struct UWBP_CustomGameConfirmation_C_PopulateCustomPopup_Params
{
	int                                                QueueId;                                                   // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                MapId;                                                     // 0x0004(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function WBP_CustomGameConfirmation.WBP_CustomGameConfirmation_C.InitializeWidget
struct UWBP_CustomGameConfirmation_C_InitializeWidget_Params
{
	class APUMG_HUD*                                   HUD;                                                       // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function WBP_CustomGameConfirmation.WBP_CustomGameConfirmation_C.BndEvt__CreateButton_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature
struct UWBP_CustomGameConfirmation_C_BndEvt__CreateButton_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature_Params
{
	int                                                Index;                                                     // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function WBP_CustomGameConfirmation.WBP_CustomGameConfirmation_C.BndEvt__CancelButton_K2Node_ComponentBoundEvent_1_OnClicked__DelegateSignature
struct UWBP_CustomGameConfirmation_C_BndEvt__CancelButton_K2Node_ComponentBoundEvent_1_OnClicked__DelegateSignature_Params
{
	int                                                Index;                                                     // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function WBP_CustomGameConfirmation.WBP_CustomGameConfirmation_C.BndEvt__WBP_ModalPopupContainer_K2Node_ComponentBoundEvent_2_CloseButtonClicked__DelegateSignature
struct UWBP_CustomGameConfirmation_C_BndEvt__WBP_ModalPopupContainer_K2Node_ComponentBoundEvent_2_CloseButtonClicked__DelegateSignature_Params
{
};

// Function WBP_CustomGameConfirmation.WBP_CustomGameConfirmation_C.ExecuteUbergraph_WBP_CustomGameConfirmation
struct UWBP_CustomGameConfirmation_C_ExecuteUbergraph_WBP_CustomGameConfirmation_Params
{
	int                                                EntryPoint;                                                // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function WBP_CustomGameConfirmation.WBP_CustomGameConfirmation_C.OnCreateLobby__DelegateSignature
struct UWBP_CustomGameConfirmation_C_OnCreateLobby__DelegateSignature_Params
{
	int                                                QueueId;                                                   // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function WBP_CustomGameConfirmation.WBP_CustomGameConfirmation_C.OnCancelLobby__DelegateSignature
struct UWBP_CustomGameConfirmation_C_OnCancelLobby__DelegateSignature_Params
{
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
