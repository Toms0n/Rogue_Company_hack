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

// Function WBP_ListButton_Cosmetic.WBP_ListButton_Cosmetic_C.SetRewardFromDisplayData
struct UWBP_ListButton_Cosmetic_C_SetRewardFromDisplayData_Params
{
	struct FWeaponMasteryRewardDisplayData             Display_Data;                                              // 0x0000(0x0098)  (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function WBP_ListButton_Cosmetic.WBP_ListButton_Cosmetic_C.SetRewardItem
struct UWBP_ListButton_Cosmetic_C_SetRewardItem_Params
{
	struct FMasteryRewardData                          RewardItem;                                                // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
};

// Function WBP_ListButton_Cosmetic.WBP_ListButton_Cosmetic_C.Construct
struct UWBP_ListButton_Cosmetic_C_Construct_Params
{
};

// Function WBP_ListButton_Cosmetic.WBP_ListButton_Cosmetic_C.BndEvt__HitTarget_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
struct UWBP_ListButton_Cosmetic_C_BndEvt__HitTarget_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature_Params
{
};

// Function WBP_ListButton_Cosmetic.WBP_ListButton_Cosmetic_C.BndEvt__HitTarget_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature
struct UWBP_ListButton_Cosmetic_C_BndEvt__HitTarget_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature_Params
{
};

// Function WBP_ListButton_Cosmetic.WBP_ListButton_Cosmetic_C.BndEvt__HitTarget_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature
struct UWBP_ListButton_Cosmetic_C_BndEvt__HitTarget_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature_Params
{
};

// Function WBP_ListButton_Cosmetic.WBP_ListButton_Cosmetic_C.GamepadHover
struct UWBP_ListButton_Cosmetic_C_GamepadHover_Params
{
};

// Function WBP_ListButton_Cosmetic.WBP_ListButton_Cosmetic_C.GamepadUnhover
struct UWBP_ListButton_Cosmetic_C_GamepadUnhover_Params
{
};

// Function WBP_ListButton_Cosmetic.WBP_ListButton_Cosmetic_C.SetIsSelected
struct UWBP_ListButton_Cosmetic_C_SetIsSelected_Params
{
	bool                                               IsSelected;                                                // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function WBP_ListButton_Cosmetic.WBP_ListButton_Cosmetic_C.ExecuteUbergraph_WBP_ListButton_Cosmetic
struct UWBP_ListButton_Cosmetic_C_ExecuteUbergraph_WBP_ListButton_Cosmetic_Params
{
	int                                                EntryPoint;                                                // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function WBP_ListButton_Cosmetic.WBP_ListButton_Cosmetic_C.OnRewardSelected__DelegateSignature
struct UWBP_ListButton_Cosmetic_C_OnRewardSelected__DelegateSignature_Params
{
	struct FMasteryRewardData                          RewardItem;                                                // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
	class UWBP_ListButton_Cosmetic_C*                  WidgetObject;                                              // 0x0010(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
