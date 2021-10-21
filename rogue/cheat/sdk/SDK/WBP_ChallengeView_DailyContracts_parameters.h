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

// Function WBP_ChallengeView_DailyContracts.WBP_ChallengeView_DailyContracts_C.GetDisplayingChallenges
struct UWBP_ChallengeView_DailyContracts_C_GetDisplayingChallenges_Params
{
	TArray<class UKSActivityInstance*>                 ReturnValue;                                               // 0x0000(0x0010)  (Parm, OutParm, ReturnParm, HasGetValueTypeHash)
};

// Function WBP_ChallengeView_DailyContracts.WBP_ChallengeView_DailyContracts_C.Get Daily Challenge Cards
struct UWBP_ChallengeView_DailyContracts_C_Get_Daily_Challenge_Cards_Params
{
	TArray<class UWBP_ChallengeEntry_Card_C*>          Return_Value;                                              // 0x0000(0x0010)  (Parm, OutParm, ContainsInstancedReference, HasGetValueTypeHash)
};

// Function WBP_ChallengeView_DailyContracts.WBP_ChallengeView_DailyContracts_C.InitializeWidgetNavigation
struct UWBP_ChallengeView_DailyContracts_C_InitializeWidgetNavigation_Params
{
};

// Function WBP_ChallengeView_DailyContracts.WBP_ChallengeView_DailyContracts_C.InitializeChallengeDisplays
struct UWBP_ChallengeView_DailyContracts_C_InitializeChallengeDisplays_Params
{
};

// Function WBP_ChallengeView_DailyContracts.WBP_ChallengeView_DailyContracts_C.DisplayChallenge
struct UWBP_ChallengeView_DailyContracts_C_DisplayChallenge_Params
{
	int                                                Index;                                                     // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UKSActivityInstance*                         ActivityInstance;                                          // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               PlayFlourish;                                              // 0x0010(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function WBP_ChallengeView_DailyContracts.WBP_ChallengeView_DailyContracts_C.DisplayChallengeTimeRemaining
struct UWBP_ChallengeView_DailyContracts_C_DisplayChallengeTimeRemaining_Params
{
	int                                                TimeRemainingSeconds;                                      // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function WBP_ChallengeView_DailyContracts.WBP_ChallengeView_DailyContracts_C.ExecuteUbergraph_WBP_ChallengeView_DailyContracts
struct UWBP_ChallengeView_DailyContracts_C_ExecuteUbergraph_WBP_ChallengeView_DailyContracts_Params
{
	int                                                EntryPoint;                                                // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
