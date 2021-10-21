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

// Function WBP_RewardListEntry.WBP_RewardListEntry_C.HandleGamepadAutoSelect
struct UWBP_RewardListEntry_C_HandleGamepadAutoSelect_Params
{
};

// Function WBP_RewardListEntry.WBP_RewardListEntry_C.GamepadHover
struct UWBP_RewardListEntry_C_GamepadHover_Params
{
};

// Function WBP_RewardListEntry.WBP_RewardListEntry_C.GamepadUnhover
struct UWBP_RewardListEntry_C_GamepadUnhover_Params
{
};

// Function WBP_RewardListEntry.WBP_RewardListEntry_C.BndEvt__HitTest_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature
struct UWBP_RewardListEntry_C_BndEvt__HitTest_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature_Params
{
};

// Function WBP_RewardListEntry.WBP_RewardListEntry_C.PlaySelected
struct UWBP_RewardListEntry_C_PlaySelected_Params
{
};

// Function WBP_RewardListEntry.WBP_RewardListEntry_C.PlayUnselected
struct UWBP_RewardListEntry_C_PlayUnselected_Params
{
};

// Function WBP_RewardListEntry.WBP_RewardListEntry_C.PreConstruct
struct UWBP_RewardListEntry_C_PreConstruct_Params
{
	bool                                               IsDesignTime;                                              // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function WBP_RewardListEntry.WBP_RewardListEntry_C.PopulateSlotWithStoreItem
struct UWBP_RewardListEntry_C_PopulateSlotWithStoreItem_Params
{
	class UPUMG_StoreItem*                             StoreItem;                                                 // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function WBP_RewardListEntry.WBP_RewardListEntry_C.PopulateSlotWithActivityInfo
struct UWBP_RewardListEntry_C_PopulateSlotWithActivityInfo_Params
{
	class UKSActivityInstance*                         ActivityInstance;                                          // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FActivityTier                               ActivityTier;                                              // 0x0008(0x0040)  (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function WBP_RewardListEntry.WBP_RewardListEntry_C.BndEvt__HitTest_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature
struct UWBP_RewardListEntry_C_BndEvt__HitTest_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature_Params
{
};

// Function WBP_RewardListEntry.WBP_RewardListEntry_C.BndEvt__HitTest_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature
struct UWBP_RewardListEntry_C_BndEvt__HitTest_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature_Params
{
};

// Function WBP_RewardListEntry.WBP_RewardListEntry_C.ExecuteUbergraph_WBP_RewardListEntry
struct UWBP_RewardListEntry_C_ExecuteUbergraph_WBP_RewardListEntry_Params
{
	int                                                EntryPoint;                                                // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function WBP_RewardListEntry.WBP_RewardListEntry_C.OnBtnUnhovered__DelegateSignature
struct UWBP_RewardListEntry_C_OnBtnUnhovered__DelegateSignature_Params
{
};

// Function WBP_RewardListEntry.WBP_RewardListEntry_C.OnBtnHovered__DelegateSignature
struct UWBP_RewardListEntry_C_OnBtnHovered__DelegateSignature_Params
{
};

// Function WBP_RewardListEntry.WBP_RewardListEntry_C.OnBtnClicked__DelegateSignature
struct UWBP_RewardListEntry_C_OnBtnClicked__DelegateSignature_Params
{
	class UWBP_RewardListEntry_C*                      Widget;                                                    // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FCosmeticSlotDetails                        RewardSlotDetails;                                         // 0x0008(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)
	class UPUMG_StoreItem*                             StoreItem;                                                 // 0x0020(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
