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

// Function WBP_EventBundleItem.WBP_EventBundleItem_C.GetStoreItem
struct UWBP_EventBundleItem_C_GetStoreItem_Params
{
	class UPUMG_StoreItem*                             Return_Value;                                              // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function WBP_EventBundleItem.WBP_EventBundleItem_C.SetVisualDisplayState
struct UWBP_EventBundleItem_C_SetVisualDisplayState_Params
{
	bool                                               IsOwned;                                                   // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function WBP_EventBundleItem.WBP_EventBundleItem_C.NavigateConfirm
struct UWBP_EventBundleItem_C_NavigateConfirm_Params
{
	bool                                               ReturnValue;                                               // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
};

// Function WBP_EventBundleItem.WBP_EventBundleItem_C.UpdateUnlockButtonDisplay
struct UWBP_EventBundleItem_C_UpdateUnlockButtonDisplay_Params
{
	bool                                               ShouldTryDisplay;                                          // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function WBP_EventBundleItem.WBP_EventBundleItem_C.PopulateSlot
struct UWBP_EventBundleItem_C_PopulateSlot_Params
{
	class UPUMG_StoreItem*                             StoreItem;                                                 // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function WBP_EventBundleItem.WBP_EventBundleItem_C.BndEvt__HitTarget_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
struct UWBP_EventBundleItem_C_BndEvt__HitTarget_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature_Params
{
};

// Function WBP_EventBundleItem.WBP_EventBundleItem_C.BndEvt__HitTarget_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature
struct UWBP_EventBundleItem_C_BndEvt__HitTarget_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature_Params
{
};

// Function WBP_EventBundleItem.WBP_EventBundleItem_C.BndEvt__HitTarget_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature
struct UWBP_EventBundleItem_C_BndEvt__HitTarget_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature_Params
{
};

// Function WBP_EventBundleItem.WBP_EventBundleItem_C.BndEvt__HitTarget_K2Node_ComponentBoundEvent_3_OnButtonReleasedEvent__DelegateSignature
struct UWBP_EventBundleItem_C_BndEvt__HitTarget_K2Node_ComponentBoundEvent_3_OnButtonReleasedEvent__DelegateSignature_Params
{
};

// Function WBP_EventBundleItem.WBP_EventBundleItem_C.BndEvt__Button_BuyBundle_K2Node_ComponentBoundEvent_4_OnClicked__DelegateSignature
struct UWBP_EventBundleItem_C_BndEvt__Button_BuyBundle_K2Node_ComponentBoundEvent_4_OnClicked__DelegateSignature_Params
{
	class UWidget*                                     Widget;                                                    // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function WBP_EventBundleItem.WBP_EventBundleItem_C.GamepadHover
struct UWBP_EventBundleItem_C_GamepadHover_Params
{
};

// Function WBP_EventBundleItem.WBP_EventBundleItem_C.GamepadUnhover
struct UWBP_EventBundleItem_C_GamepadUnhover_Params
{
};

// Function WBP_EventBundleItem.WBP_EventBundleItem_C.OnGamepadConfirm
struct UWBP_EventBundleItem_C_OnGamepadConfirm_Params
{
};

// Function WBP_EventBundleItem.WBP_EventBundleItem_C.InitializeWidget
struct UWBP_EventBundleItem_C_InitializeWidget_Params
{
	class APUMG_HUD*                                   HUD;                                                       // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function WBP_EventBundleItem.WBP_EventBundleItem_C.ExecuteUbergraph_WBP_EventBundleItem
struct UWBP_EventBundleItem_C_ExecuteUbergraph_WBP_EventBundleItem_Params
{
	int                                                EntryPoint;                                                // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function WBP_EventBundleItem.WBP_EventBundleItem_C.OnUnlockButtonClicked__DelegateSignature
struct UWBP_EventBundleItem_C_OnUnlockButtonClicked__DelegateSignature_Params
{
	class UWBP_EventBundleItem_C*                      Widget;                                                    // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function WBP_EventBundleItem.WBP_EventBundleItem_C.OnBundleItemClicked__DelegateSignature
struct UWBP_EventBundleItem_C_OnBundleItemClicked__DelegateSignature_Params
{
	class UWBP_EventBundleItem_C*                      Widget;                                                    // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
