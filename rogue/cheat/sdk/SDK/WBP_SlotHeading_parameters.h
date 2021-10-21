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

// Function WBP_SlotHeading.WBP_SlotHeading_C.SetText
struct UWBP_SlotHeading_C_SetText_Params
{
	struct FText                                       newText;                                                   // 0x0000(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function WBP_SlotHeading.WBP_SlotHeading_C.SetUnderlineColor
struct UWBP_SlotHeading_C_SetUnderlineColor_Params
{
	struct FLinearColor                                NewColor;                                                  // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function WBP_SlotHeading.WBP_SlotHeading_C.SetTextColor
struct UWBP_SlotHeading_C_SetTextColor_Params
{
	struct FSlateColor                                 NewColor;                                                  // 0x0000(0x0028)  (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function WBP_SlotHeading.WBP_SlotHeading_C.PreConstruct
struct UWBP_SlotHeading_C_PreConstruct_Params
{
	bool                                               IsDesignTime;                                              // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function WBP_SlotHeading.WBP_SlotHeading_C.Construct
struct UWBP_SlotHeading_C_Construct_Params
{
};

// Function WBP_SlotHeading.WBP_SlotHeading_C.SetSlotHeading
struct UWBP_SlotHeading_C_SetSlotHeading_Params
{
	struct FText                                       Text;                                                      // 0x0000(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function WBP_SlotHeading.WBP_SlotHeading_C.ExecuteUbergraph_WBP_SlotHeading
struct UWBP_SlotHeading_C_ExecuteUbergraph_WBP_SlotHeading_Params
{
	int                                                EntryPoint;                                                // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
