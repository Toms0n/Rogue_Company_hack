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

// Function WBP_StoreButtonSmall.WBP_StoreButtonSmall_C.OnRotationTimerTick
struct UWBP_StoreButtonSmall_C_OnRotationTimerTick_Params
{
};

// Function WBP_StoreButtonSmall.WBP_StoreButtonSmall_C.NavigateConfirm
struct UWBP_StoreButtonSmall_C_NavigateConfirm_Params
{
	bool                                               ReturnValue;                                               // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
};

// Function WBP_StoreButtonSmall.WBP_StoreButtonSmall_C.DisplayStoreItem
struct UWBP_StoreButtonSmall_C_DisplayStoreItem_Params
{
	class UKSStorePanelItem*                           StoreItem;                                                 // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               Animate;                                                   // 0x0008(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function WBP_StoreButtonSmall.WBP_StoreButtonSmall_C.SetStoreItems
struct UWBP_StoreButtonSmall_C_SetStoreItems_Params
{
	class UKSStoreSectionItem*                         StoreItem;                                                 // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function WBP_StoreButtonSmall.WBP_StoreButtonSmall_C.Construct
struct UWBP_StoreButtonSmall_C_Construct_Params
{
};

// Function WBP_StoreButtonSmall.WBP_StoreButtonSmall_C.Tick
struct UWBP_StoreButtonSmall_C_Tick_Params
{
	struct FGeometry                                   MyGeometry;                                                // 0x0000(0x0058)  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	float                                              InDeltaTime;                                               // 0x0058(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function WBP_StoreButtonSmall.WBP_StoreButtonSmall_C.GamepadHover
struct UWBP_StoreButtonSmall_C_GamepadHover_Params
{
};

// Function WBP_StoreButtonSmall.WBP_StoreButtonSmall_C.GamepadUnhover
struct UWBP_StoreButtonSmall_C_GamepadUnhover_Params
{
};

// Function WBP_StoreButtonSmall.WBP_StoreButtonSmall_C.OnGamepadConfirm
struct UWBP_StoreButtonSmall_C_OnGamepadConfirm_Params
{
};

// Function WBP_StoreButtonSmall.WBP_StoreButtonSmall_C.BndEvt__WBP_StorePanelButton_K2Node_ComponentBoundEvent_3_OnBtnClicked__DelegateSignature
struct UWBP_StoreButtonSmall_C_BndEvt__WBP_StorePanelButton_K2Node_ComponentBoundEvent_3_OnBtnClicked__DelegateSignature_Params
{
};

// Function WBP_StoreButtonSmall.WBP_StoreButtonSmall_C.BndEvt__WBP_StorePanelButton_K2Node_ComponentBoundEvent_4_OnBtnHovered__DelegateSignature
struct UWBP_StoreButtonSmall_C_BndEvt__WBP_StorePanelButton_K2Node_ComponentBoundEvent_4_OnBtnHovered__DelegateSignature_Params
{
	bool                                               IsGamepad;                                                 // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function WBP_StoreButtonSmall.WBP_StoreButtonSmall_C.BndEvt__WBP_StorePanelButton_K2Node_ComponentBoundEvent_5_OnBtnUnhovered__DelegateSignature
struct UWBP_StoreButtonSmall_C_BndEvt__WBP_StorePanelButton_K2Node_ComponentBoundEvent_5_OnBtnUnhovered__DelegateSignature_Params
{
};

// Function WBP_StoreButtonSmall.WBP_StoreButtonSmall_C.ExecuteUbergraph_WBP_StoreButtonSmall
struct UWBP_StoreButtonSmall_C_ExecuteUbergraph_WBP_StoreButtonSmall_Params
{
	int                                                EntryPoint;                                                // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
