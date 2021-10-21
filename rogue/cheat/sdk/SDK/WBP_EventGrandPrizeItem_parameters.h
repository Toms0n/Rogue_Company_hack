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

// Function WBP_EventGrandPrizeItem.WBP_EventGrandPrizeItem_C.SetIsSelected
struct UWBP_EventGrandPrizeItem_C_SetIsSelected_Params
{
	bool                                               IsSelected;                                                // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function WBP_EventGrandPrizeItem.WBP_EventGrandPrizeItem_C.NavigateConfirm
struct UWBP_EventGrandPrizeItem_C_NavigateConfirm_Params
{
	bool                                               ReturnValue;                                               // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
};

// Function WBP_EventGrandPrizeItem.WBP_EventGrandPrizeItem_C.SetGrandPrizeProgress
struct UWBP_EventGrandPrizeItem_C_SetGrandPrizeProgress_Params
{
	struct FGrandPrizeProgression                      GrandPrizeProgress;                                        // 0x0000(0x000C)  (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
};

// Function WBP_EventGrandPrizeItem.WBP_EventGrandPrizeItem_C.PreConstruct
struct UWBP_EventGrandPrizeItem_C_PreConstruct_Params
{
	bool                                               IsDesignTime;                                              // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function WBP_EventGrandPrizeItem.WBP_EventGrandPrizeItem_C.PopulateSlot
struct UWBP_EventGrandPrizeItem_C_PopulateSlot_Params
{
	class UPUMG_StoreItem*                             StoreItem;                                                 // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function WBP_EventGrandPrizeItem.WBP_EventGrandPrizeItem_C.BndEvt__HitTarget_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
struct UWBP_EventGrandPrizeItem_C_BndEvt__HitTarget_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature_Params
{
};

// Function WBP_EventGrandPrizeItem.WBP_EventGrandPrizeItem_C.BndEvt__HitTarget_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature
struct UWBP_EventGrandPrizeItem_C_BndEvt__HitTarget_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature_Params
{
};

// Function WBP_EventGrandPrizeItem.WBP_EventGrandPrizeItem_C.BndEvt__HitTarget_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature
struct UWBP_EventGrandPrizeItem_C_BndEvt__HitTarget_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature_Params
{
};

// Function WBP_EventGrandPrizeItem.WBP_EventGrandPrizeItem_C.BndEvt__HitTarget_K2Node_ComponentBoundEvent_3_OnButtonReleasedEvent__DelegateSignature
struct UWBP_EventGrandPrizeItem_C_BndEvt__HitTarget_K2Node_ComponentBoundEvent_3_OnButtonReleasedEvent__DelegateSignature_Params
{
};

// Function WBP_EventGrandPrizeItem.WBP_EventGrandPrizeItem_C.GamepadUnhover
struct UWBP_EventGrandPrizeItem_C_GamepadUnhover_Params
{
};

// Function WBP_EventGrandPrizeItem.WBP_EventGrandPrizeItem_C.GamepadHover
struct UWBP_EventGrandPrizeItem_C_GamepadHover_Params
{
};

// Function WBP_EventGrandPrizeItem.WBP_EventGrandPrizeItem_C.OnGamepadConfirm
struct UWBP_EventGrandPrizeItem_C_OnGamepadConfirm_Params
{
};

// Function WBP_EventGrandPrizeItem.WBP_EventGrandPrizeItem_C.ExecuteUbergraph_WBP_EventGrandPrizeItem
struct UWBP_EventGrandPrizeItem_C_ExecuteUbergraph_WBP_EventGrandPrizeItem_Params
{
	int                                                EntryPoint;                                                // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function WBP_EventGrandPrizeItem.WBP_EventGrandPrizeItem_C.OnBundleItemClicked__DelegateSignature
struct UWBP_EventGrandPrizeItem_C_OnBundleItemClicked__DelegateSignature_Params
{
	class UWBP_EventGrandPrizeItem_C*                  Widget;                                                    // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UPUMG_StoreItem*                             StoreItem;                                                 // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
