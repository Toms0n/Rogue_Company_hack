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

// Function WBP_MasteryPointsCount.WBP_MasteryPointsCount_C.SetPercentageText
struct UWBP_MasteryPointsCount_C_SetPercentageText_Params
{
	float                                              NewParam;                                                  // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function WBP_MasteryPointsCount.WBP_MasteryPointsCount_C.SetProgressText
struct UWBP_MasteryPointsCount_C_SetProgressText_Params
{
	int                                                CurrentProgress;                                           // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                RequiredProgress;                                          // 0x0004(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function WBP_MasteryPointsCount.WBP_MasteryPointsCount_C.SetVisualStyle
struct UWBP_MasteryPointsCount_C_SetVisualStyle_Params
{
};

// Function WBP_MasteryPointsCount.WBP_MasteryPointsCount_C.PreConstruct
struct UWBP_MasteryPointsCount_C_PreConstruct_Params
{
	bool                                               IsDesignTime;                                              // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function WBP_MasteryPointsCount.WBP_MasteryPointsCount_C.Construct
struct UWBP_MasteryPointsCount_C_Construct_Params
{
};

// Function WBP_MasteryPointsCount.WBP_MasteryPointsCount_C.ExecuteUbergraph_WBP_MasteryPointsCount
struct UWBP_MasteryPointsCount_C_ExecuteUbergraph_WBP_MasteryPointsCount_Params
{
	int                                                EntryPoint;                                                // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
