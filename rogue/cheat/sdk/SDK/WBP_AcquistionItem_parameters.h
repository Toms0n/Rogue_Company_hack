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

// Function WBP_AcquistionItem.WBP_AcquistionItem_C.OnSlotHovered
struct UWBP_AcquistionItem_C_OnSlotHovered_Params
{
	struct FCosmeticSlotDetails                        CosmeticSlotDetails;                                       // 0x0000(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)
	bool                                               IsGamepad;                                                 // 0x0018(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	class UWBP_KSCosmeticItemDisplay_C*                Widget;                                                    // 0x0020(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function WBP_AcquistionItem.WBP_AcquistionItem_C.OnSlotClicked
struct UWBP_AcquistionItem_C_OnSlotClicked_Params
{
	class UWBP_KSCosmeticItemDisplay_C*                Widget;                                                    // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FCosmeticSlotDetails                        CosmeticSlotDetails;                                       // 0x0008(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)
};

// Function WBP_AcquistionItem.WBP_AcquistionItem_C.SetSlotItem
struct UWBP_AcquistionItem_C_SetSlotItem_Params
{
	class UAcquisitionItemData*                        SlotItem;                                                  // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function WBP_AcquistionItem.WBP_AcquistionItem_C.InitializeWidget
struct UWBP_AcquistionItem_C_InitializeWidget_Params
{
	class APUMG_HUD*                                   HUD;                                                       // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function WBP_AcquistionItem.WBP_AcquistionItem_C.ExecuteUbergraph_WBP_AcquistionItem
struct UWBP_AcquistionItem_C_ExecuteUbergraph_WBP_AcquistionItem_Params
{
	int                                                EntryPoint;                                                // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function WBP_AcquistionItem.WBP_AcquistionItem_C.OnSlotHover__DelegateSignature
struct UWBP_AcquistionItem_C_OnSlotHover__DelegateSignature_Params
{
	class UAcquisitionItemData*                        AcquisitionItem;                                           // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UKSWidget*                                   Widget;                                                    // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function WBP_AcquistionItem.WBP_AcquistionItem_C.OnSlotSelected__DelegateSignature
struct UWBP_AcquistionItem_C_OnSlotSelected__DelegateSignature_Params
{
	class UAcquisitionItemData*                        AcquisitionItem;                                           // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
