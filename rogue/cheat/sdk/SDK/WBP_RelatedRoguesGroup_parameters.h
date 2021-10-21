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

// Function WBP_RelatedRoguesGroup.WBP_RelatedRoguesGroup_C.CreateAndAddEntry
struct UWBP_RelatedRoguesGroup_C_CreateAndAddEntry_Params
{
	class UKSRelatedRogueEntry*                        ReturnValue;                                               // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function WBP_RelatedRoguesGroup.WBP_RelatedRoguesGroup_C.GetEntries
struct UWBP_RelatedRoguesGroup_C_GetEntries_Params
{
	TArray<class UKSRelatedRogueEntry*>                ReturnValue;                                               // 0x0000(0x0010)  (Parm, OutParm, ReturnParm, ContainsInstancedReference, HasGetValueTypeHash)
};

// Function WBP_RelatedRoguesGroup.WBP_RelatedRoguesGroup_C.PreConstruct
struct UWBP_RelatedRoguesGroup_C_PreConstruct_Params
{
	bool                                               IsDesignTime;                                              // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function WBP_RelatedRoguesGroup.WBP_RelatedRoguesGroup_C.Construct
struct UWBP_RelatedRoguesGroup_C_Construct_Params
{
};

// Function WBP_RelatedRoguesGroup.WBP_RelatedRoguesGroup_C.ClearEntries
struct UWBP_RelatedRoguesGroup_C_ClearEntries_Params
{
};

// Function WBP_RelatedRoguesGroup.WBP_RelatedRoguesGroup_C.DisplayIndividualWeaponLabel
struct UWBP_RelatedRoguesGroup_C_DisplayIndividualWeaponLabel_Params
{
};

// Function WBP_RelatedRoguesGroup.WBP_RelatedRoguesGroup_C.DisplayWeaponCategoryLabel
struct UWBP_RelatedRoguesGroup_C_DisplayWeaponCategoryLabel_Params
{
};

// Function WBP_RelatedRoguesGroup.WBP_RelatedRoguesGroup_C.DisplayNone
struct UWBP_RelatedRoguesGroup_C_DisplayNone_Params
{
};

// Function WBP_RelatedRoguesGroup.WBP_RelatedRoguesGroup_C.ExecuteUbergraph_WBP_RelatedRoguesGroup
struct UWBP_RelatedRoguesGroup_C_ExecuteUbergraph_WBP_RelatedRoguesGroup_Params
{
	int                                                EntryPoint;                                                // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
