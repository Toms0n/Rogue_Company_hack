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

// Function WBP_ProgressionTally_Entry.WBP_ProgressionTally_Entry_C.SetValue
struct UWBP_ProgressionTally_Entry_C_SetValue_Params
{
	int                                                BonusValue;                                                // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FText                                       OptionalTextFormat;                                        // 0x0008(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm)
	struct FLinearColor                                Optional_Color;                                            // 0x0020(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function WBP_ProgressionTally_Entry.WBP_ProgressionTally_Entry_C.SetColor
struct UWBP_ProgressionTally_Entry_C_SetColor_Params
{
	struct FLinearColor                                Color;                                                     // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function WBP_ProgressionTally_Entry.WBP_ProgressionTally_Entry_C.PreConstruct
struct UWBP_ProgressionTally_Entry_C_PreConstruct_Params
{
	bool                                               IsDesignTime;                                              // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function WBP_ProgressionTally_Entry.WBP_ProgressionTally_Entry_C.Construct
struct UWBP_ProgressionTally_Entry_C_Construct_Params
{
};

// Function WBP_ProgressionTally_Entry.WBP_ProgressionTally_Entry_C.ExecuteUbergraph_WBP_ProgressionTally_Entry
struct UWBP_ProgressionTally_Entry_C_ExecuteUbergraph_WBP_ProgressionTally_Entry_Params
{
	int                                                EntryPoint;                                                // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
