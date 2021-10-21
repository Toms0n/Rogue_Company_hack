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

// Function WBP_StoreButtonLarge.WBP_StoreButtonLarge_C.OnRotationTimerTick
struct UWBP_StoreButtonLarge_C_OnRotationTimerTick_Params
{
};

// Function WBP_StoreButtonLarge.WBP_StoreButtonLarge_C.OnInputStateChanged
struct UWBP_StoreButtonLarge_C_OnInputStateChanged_Params
{
	TEnumAsByte<PlatformGameFramework_EPGAME_INPUT_STATE> InputState;                                                // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function WBP_StoreButtonLarge.WBP_StoreButtonLarge_C.NavigateConfirm
struct UWBP_StoreButtonLarge_C_NavigateConfirm_Params
{
	bool                                               ReturnValue;                                               // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
};

// Function WBP_StoreButtonLarge.WBP_StoreButtonLarge_C.DisplayStoreItem
struct UWBP_StoreButtonLarge_C_DisplayStoreItem_Params
{
	class UKSStorePanelItem*                           StoreItem;                                                 // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               Animate;                                                   // 0x0008(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function WBP_StoreButtonLarge.WBP_StoreButtonLarge_C.SetStoreItems
struct UWBP_StoreButtonLarge_C_SetStoreItems_Params
{
	class UKSStoreSectionItem*                         StoreSection;                                              // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function WBP_StoreButtonLarge.WBP_StoreButtonLarge_C.GamepadUnhover
struct UWBP_StoreButtonLarge_C_GamepadUnhover_Params
{
};

// Function WBP_StoreButtonLarge.WBP_StoreButtonLarge_C.OnGamepadConfirm
struct UWBP_StoreButtonLarge_C_OnGamepadConfirm_Params
{
};

// Function WBP_StoreButtonLarge.WBP_StoreButtonLarge_C.BndEvt__WBP_StorePanelButton_K2Node_ComponentBoundEvent_3_OnBtnClicked__DelegateSignature
struct UWBP_StoreButtonLarge_C_BndEvt__WBP_StorePanelButton_K2Node_ComponentBoundEvent_3_OnBtnClicked__DelegateSignature_Params
{
};

// Function WBP_StoreButtonLarge.WBP_StoreButtonLarge_C.BndEvt__WBP_StorePanelButton_K2Node_ComponentBoundEvent_4_OnBtnHovered__DelegateSignature
struct UWBP_StoreButtonLarge_C_BndEvt__WBP_StorePanelButton_K2Node_ComponentBoundEvent_4_OnBtnHovered__DelegateSignature_Params
{
	bool                                               IsGamepad;                                                 // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function WBP_StoreButtonLarge.WBP_StoreButtonLarge_C.BndEvt__WBP_StorePanelButton_K2Node_ComponentBoundEvent_5_OnBtnUnhovered__DelegateSignature
struct UWBP_StoreButtonLarge_C_BndEvt__WBP_StorePanelButton_K2Node_ComponentBoundEvent_5_OnBtnUnhovered__DelegateSignature_Params
{
};

// Function WBP_StoreButtonLarge.WBP_StoreButtonLarge_C.OnComparePressed
struct UWBP_StoreButtonLarge_C_OnComparePressed_Params
{
};

// Function WBP_StoreButtonLarge.WBP_StoreButtonLarge_C.BndEvt__CompareButton_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
struct UWBP_StoreButtonLarge_C_BndEvt__CompareButton_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature_Params
{
};

// Function WBP_StoreButtonLarge.WBP_StoreButtonLarge_C.BndEvt__CompareButton_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature
struct UWBP_StoreButtonLarge_C_BndEvt__CompareButton_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature_Params
{
};

// Function WBP_StoreButtonLarge.WBP_StoreButtonLarge_C.BndEvt__CompareButton_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature
struct UWBP_StoreButtonLarge_C_BndEvt__CompareButton_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature_Params
{
};

// Function WBP_StoreButtonLarge.WBP_StoreButtonLarge_C.GamepadHover
struct UWBP_StoreButtonLarge_C_GamepadHover_Params
{
};

// Function WBP_StoreButtonLarge.WBP_StoreButtonLarge_C.Construct
struct UWBP_StoreButtonLarge_C_Construct_Params
{
};

// Function WBP_StoreButtonLarge.WBP_StoreButtonLarge_C.Tick
struct UWBP_StoreButtonLarge_C_Tick_Params
{
	struct FGeometry                                   MyGeometry;                                                // 0x0000(0x0058)  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	float                                              InDeltaTime;                                               // 0x0058(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function WBP_StoreButtonLarge.WBP_StoreButtonLarge_C.InitializeWidget
struct UWBP_StoreButtonLarge_C_InitializeWidget_Params
{
	class APUMG_HUD*                                   HUD;                                                       // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function WBP_StoreButtonLarge.WBP_StoreButtonLarge_C.ExecuteUbergraph_WBP_StoreButtonLarge
struct UWBP_StoreButtonLarge_C_ExecuteUbergraph_WBP_StoreButtonLarge_Params
{
	int                                                EntryPoint;                                                // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
