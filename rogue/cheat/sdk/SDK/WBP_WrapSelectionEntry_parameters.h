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

// Function WBP_WrapSelectionEntry.WBP_WrapSelectionEntry_C.NavigateConfirm
struct UWBP_WrapSelectionEntry_C_NavigateConfirm_Params
{
	bool                                               ReturnValue;                                               // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
};

// Function WBP_WrapSelectionEntry.WBP_WrapSelectionEntry_C.DisplayWrap
struct UWBP_WrapSelectionEntry_C_DisplayWrap_Params
{
	class UKSWeaponAttachment*                         WeaponAttachment;                                          // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function WBP_WrapSelectionEntry.WBP_WrapSelectionEntry_C.GamepadHover
struct UWBP_WrapSelectionEntry_C_GamepadHover_Params
{
};

// Function WBP_WrapSelectionEntry.WBP_WrapSelectionEntry_C.DisplaySelected
struct UWBP_WrapSelectionEntry_C_DisplaySelected_Params
{
	bool                                               IsSelected;                                                // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function WBP_WrapSelectionEntry.WBP_WrapSelectionEntry_C.DisplayEquipped
struct UWBP_WrapSelectionEntry_C_DisplayEquipped_Params
{
	bool                                               IsEquipped;                                                // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function WBP_WrapSelectionEntry.WBP_WrapSelectionEntry_C.BndEvt__WBP_KSCosmeticItemDisplay_K2Node_ComponentBoundEvent_5_OnCosmeticClicked__DelegateSignature
struct UWBP_WrapSelectionEntry_C_BndEvt__WBP_KSCosmeticItemDisplay_K2Node_ComponentBoundEvent_5_OnCosmeticClicked__DelegateSignature_Params
{
	class UWBP_KSCosmeticItemDisplay_C*                Widget;                                                    // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FCosmeticSlotDetails                        CosmeticSlotDetails;                                       // 0x0008(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)
};

// Function WBP_WrapSelectionEntry.WBP_WrapSelectionEntry_C.GamepadUnhover
struct UWBP_WrapSelectionEntry_C_GamepadUnhover_Params
{
};

// Function WBP_WrapSelectionEntry.WBP_WrapSelectionEntry_C.ExecuteUbergraph_WBP_WrapSelectionEntry
struct UWBP_WrapSelectionEntry_C_ExecuteUbergraph_WBP_WrapSelectionEntry_Params
{
	int                                                EntryPoint;                                                // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
