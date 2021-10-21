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

// Function WBP_RogueMasteryTrackSection.WBP_RogueMasteryTrackSection_C.DisplayGamepadFocus
struct UWBP_RogueMasteryTrackSection_C_DisplayGamepadFocus_Params
{
	bool                                               ShouldDisplayFocus;                                        // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function WBP_RogueMasteryTrackSection.WBP_RogueMasteryTrackSection_C.SetSelectedEntry
struct UWBP_RogueMasteryTrackSection_C_SetSelectedEntry_Params
{
	int                                                ActivityTierNumber;                                        // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function WBP_RogueMasteryTrackSection.WBP_RogueMasteryTrackSection_C.SetSectionData
struct UWBP_RogueMasteryTrackSection_C_SetSectionData_Params
{
	struct FMasterySectionData                         SectionData;                                               // 0x0000(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	int                                                CurrentTier;                                               // 0x0018(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function WBP_RogueMasteryTrackSection.WBP_RogueMasteryTrackSection_C.GetSelectedActivity
struct UWBP_RogueMasteryTrackSection_C_GetSelectedActivity_Params
{
	int                                                Index;                                                     // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FActivityTier                               Activity;                                                  // 0x0008(0x0040)  (Parm, OutParm)
};

// Function WBP_RogueMasteryTrackSection.WBP_RogueMasteryTrackSection_C.OnMasteryLevelSelected
struct UWBP_RogueMasteryTrackSection_C_OnMasteryLevelSelected_Params
{
	struct FActivityTier                               Activity;                                                  // 0x0000(0x0040)  (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function WBP_RogueMasteryTrackSection.WBP_RogueMasteryTrackSection_C.PreConstruct
struct UWBP_RogueMasteryTrackSection_C_PreConstruct_Params
{
	bool                                               IsDesignTime;                                              // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function WBP_RogueMasteryTrackSection.WBP_RogueMasteryTrackSection_C.Construct
struct UWBP_RogueMasteryTrackSection_C_Construct_Params
{
};

// Function WBP_RogueMasteryTrackSection.WBP_RogueMasteryTrackSection_C.InitializeWidget
struct UWBP_RogueMasteryTrackSection_C_InitializeWidget_Params
{
	class APUMG_HUD*                                   HUD;                                                       // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function WBP_RogueMasteryTrackSection.WBP_RogueMasteryTrackSection_C.ExecuteUbergraph_WBP_RogueMasteryTrackSection
struct UWBP_RogueMasteryTrackSection_C_ExecuteUbergraph_WBP_RogueMasteryTrackSection_Params
{
	int                                                EntryPoint;                                                // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function WBP_RogueMasteryTrackSection.WBP_RogueMasteryTrackSection_C.OnTrackEntrySelected__DelegateSignature
struct UWBP_RogueMasteryTrackSection_C_OnTrackEntrySelected__DelegateSignature_Params
{
	struct FActivityTier                               ActivityTier;                                              // 0x0000(0x0040)  (BlueprintVisible, BlueprintReadOnly, Parm)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
