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

// Function WBP_StoreButtonMedium.WBP_StoreButtonMedium_C.OnRotationTimerTick
struct UWBP_StoreButtonMedium_C_OnRotationTimerTick_Params
{
};

// Function WBP_StoreButtonMedium.WBP_StoreButtonMedium_C.NavigateConfirm
struct UWBP_StoreButtonMedium_C_NavigateConfirm_Params
{
	bool                                               ReturnValue;                                               // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
};

// Function WBP_StoreButtonMedium.WBP_StoreButtonMedium_C.DisplayStoreItem
struct UWBP_StoreButtonMedium_C_DisplayStoreItem_Params
{
	class UKSStorePanelItem*                           StoreItem;                                                 // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               Animate;                                                   // 0x0008(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function WBP_StoreButtonMedium.WBP_StoreButtonMedium_C.SetStoreItems
struct UWBP_StoreButtonMedium_C_SetStoreItems_Params
{
	class UKSStoreSectionItem*                         StoreItem;                                                 // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function WBP_StoreButtonMedium.WBP_StoreButtonMedium_C.Construct
struct UWBP_StoreButtonMedium_C_Construct_Params
{
};

// Function WBP_StoreButtonMedium.WBP_StoreButtonMedium_C.Tick
struct UWBP_StoreButtonMedium_C_Tick_Params
{
	struct FGeometry                                   MyGeometry;                                                // 0x0000(0x0058)  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	float                                              InDeltaTime;                                               // 0x0058(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function WBP_StoreButtonMedium.WBP_StoreButtonMedium_C.GamepadHover
struct UWBP_StoreButtonMedium_C_GamepadHover_Params
{
};

// Function WBP_StoreButtonMedium.WBP_StoreButtonMedium_C.GamepadUnhover
struct UWBP_StoreButtonMedium_C_GamepadUnhover_Params
{
};

// Function WBP_StoreButtonMedium.WBP_StoreButtonMedium_C.OnGamepadConfirm
struct UWBP_StoreButtonMedium_C_OnGamepadConfirm_Params
{
};

// Function WBP_StoreButtonMedium.WBP_StoreButtonMedium_C.BndEvt__WBP_StorePanelButton_K2Node_ComponentBoundEvent_4_OnBtnHovered__DelegateSignature
struct UWBP_StoreButtonMedium_C_BndEvt__WBP_StorePanelButton_K2Node_ComponentBoundEvent_4_OnBtnHovered__DelegateSignature_Params
{
	bool                                               IsGamepad;                                                 // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function WBP_StoreButtonMedium.WBP_StoreButtonMedium_C.BndEvt__WBP_StorePanelButton_K2Node_ComponentBoundEvent_5_OnBtnUnhovered__DelegateSignature
struct UWBP_StoreButtonMedium_C_BndEvt__WBP_StorePanelButton_K2Node_ComponentBoundEvent_5_OnBtnUnhovered__DelegateSignature_Params
{
};

// Function WBP_StoreButtonMedium.WBP_StoreButtonMedium_C.BndEvt__WBP_StorePanelButton_K2Node_ComponentBoundEvent_0_OnBtnClicked__DelegateSignature
struct UWBP_StoreButtonMedium_C_BndEvt__WBP_StorePanelButton_K2Node_ComponentBoundEvent_0_OnBtnClicked__DelegateSignature_Params
{
};

// Function WBP_StoreButtonMedium.WBP_StoreButtonMedium_C.ExecuteUbergraph_WBP_StoreButtonMedium
struct UWBP_StoreButtonMedium_C_ExecuteUbergraph_WBP_StoreButtonMedium_Params
{
	int                                                EntryPoint;                                                // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
