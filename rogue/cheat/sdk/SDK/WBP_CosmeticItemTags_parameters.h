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

// Function WBP_CosmeticItemTags.WBP_CosmeticItemTags_C.SetJustification
struct UWBP_CosmeticItemTags_C_SetJustification_Params
{
};

// Function WBP_CosmeticItemTags.WBP_CosmeticItemTags_C.ClearTags
struct UWBP_CosmeticItemTags_C_ClearTags_Params
{
};

// Function WBP_CosmeticItemTags.WBP_CosmeticItemTags_C.AddCosmeticTags
struct UWBP_CosmeticItemTags_C_AddCosmeticTags_Params
{
	struct FGameplayTagContainer                       InTags;                                                    // 0x0000(0x0020)  (BlueprintVisible, BlueprintReadOnly, Parm)
	bool                                               TagsFound;                                                 // 0x0020(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function WBP_CosmeticItemTags.WBP_CosmeticItemTags_C.PreConstruct
struct UWBP_CosmeticItemTags_C_PreConstruct_Params
{
	bool                                               IsDesignTime;                                              // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function WBP_CosmeticItemTags.WBP_CosmeticItemTags_C.Construct
struct UWBP_CosmeticItemTags_C_Construct_Params
{
};

// Function WBP_CosmeticItemTags.WBP_CosmeticItemTags_C.ExecuteUbergraph_WBP_CosmeticItemTags
struct UWBP_CosmeticItemTags_C_ExecuteUbergraph_WBP_CosmeticItemTags_Params
{
	int                                                EntryPoint;                                                // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
