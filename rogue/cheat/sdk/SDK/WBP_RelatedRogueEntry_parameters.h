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

// Function WBP_RelatedRogueEntry.WBP_RelatedRogueEntry_C.DisplayJob
struct UWBP_RelatedRogueEntry_C_DisplayJob_Params
{
	class UKSJobItem*                                  JobItem;                                                   // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function WBP_RelatedRogueEntry.WBP_RelatedRogueEntry_C.DisplayLocked
struct UWBP_RelatedRogueEntry_C_DisplayLocked_Params
{
	bool                                               bLocked;                                                   // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function WBP_RelatedRogueEntry.WBP_RelatedRogueEntry_C.ExecuteUbergraph_WBP_RelatedRogueEntry
struct UWBP_RelatedRogueEntry_C_ExecuteUbergraph_WBP_RelatedRogueEntry_Params
{
	int                                                EntryPoint;                                                // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
