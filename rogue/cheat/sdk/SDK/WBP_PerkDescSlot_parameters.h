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

// Function WBP_PerkDescSlot.WBP_PerkDescSlot_C.Construct
struct UWBP_PerkDescSlot_C_Construct_Params
{
};

// Function WBP_PerkDescSlot.WBP_PerkDescSlot_C.PopulateItemDescSlot
struct UWBP_PerkDescSlot_C_PopulateItemDescSlot_Params
{
	class UKSItem*                                     KSItem;                                                    // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function WBP_PerkDescSlot.WBP_PerkDescSlot_C.SetTextColors
struct UWBP_PerkDescSlot_C_SetTextColors_Params
{
	struct FLinearColor                                HeaderColor;                                               // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                                HeadingColor;                                              // 0x0010(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                                TextColor;                                                 // 0x0020(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function WBP_PerkDescSlot.WBP_PerkDescSlot_C.PreConstruct
struct UWBP_PerkDescSlot_C_PreConstruct_Params
{
	bool                                               IsDesignTime;                                              // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function WBP_PerkDescSlot.WBP_PerkDescSlot_C.ExecuteUbergraph_WBP_PerkDescSlot
struct UWBP_PerkDescSlot_C_ExecuteUbergraph_WBP_PerkDescSlot_Params
{
	int                                                EntryPoint;                                                // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
