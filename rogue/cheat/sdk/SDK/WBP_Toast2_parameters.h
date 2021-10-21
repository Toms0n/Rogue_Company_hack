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

// Function WBP_Toast2.WBP_Toast2_C.DisplayWeaponMasteryToast
struct UWBP_Toast2_C_DisplayWeaponMasteryToast_Params
{
};

// Function WBP_Toast2.WBP_Toast2_C.DisplayEventMissionToast
struct UWBP_Toast2_C_DisplayEventMissionToast_Params
{
};

// Function WBP_Toast2.WBP_Toast2_C.DisplayPlayerLevelUp
struct UWBP_Toast2_C_DisplayPlayerLevelUp_Params
{
};

// Function WBP_Toast2.WBP_Toast2_C.DisplayBoostActivation
struct UWBP_Toast2_C_DisplayBoostActivation_Params
{
};

// Function WBP_Toast2.WBP_Toast2_C.DisplayBattlePassUnlock
struct UWBP_Toast2_C_DisplayBattlePassUnlock_Params
{
};

// Function WBP_Toast2.WBP_Toast2_C.DisplayAwardUnlock
struct UWBP_Toast2_C_DisplayAwardUnlock_Params
{
};

// Function WBP_Toast2.WBP_Toast2_C.DisplayItemUnlock
struct UWBP_Toast2_C_DisplayItemUnlock_Params
{
};

// Function WBP_Toast2.WBP_Toast2_C.DisplayMercMasteryLevelUp
struct UWBP_Toast2_C_DisplayMercMasteryLevelUp_Params
{
};

// Function WBP_Toast2.WBP_Toast2_C.DisplayChallengeAchievement
struct UWBP_Toast2_C_DisplayChallengeAchievement_Params
{
};

// Function WBP_Toast2.WBP_Toast2_C.OnOutroFinished
struct UWBP_Toast2_C_OnOutroFinished_Params
{
};

// Function WBP_Toast2.WBP_Toast2_C.OnWaitingFinished
struct UWBP_Toast2_C_OnWaitingFinished_Params
{
};

// Function WBP_Toast2.WBP_Toast2_C.OnIntroFinished
struct UWBP_Toast2_C_OnIntroFinished_Params
{
};

// Function WBP_Toast2.WBP_Toast2_C.SetRarityTint
struct UWBP_Toast2_C_SetRarityTint_Params
{
	struct FLinearColor                                RarityBase;                                                // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                                RarityHighlight;                                           // 0x0010(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function WBP_Toast2.WBP_Toast2_C.Construct
struct UWBP_Toast2_C_Construct_Params
{
};

// Function WBP_Toast2.WBP_Toast2_C.PreConstruct
struct UWBP_Toast2_C_PreConstruct_Params
{
	bool                                               IsDesignTime;                                              // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function WBP_Toast2.WBP_Toast2_C.ExecuteUbergraph_WBP_Toast2
struct UWBP_Toast2_C_ExecuteUbergraph_WBP_Toast2_Params
{
	int                                                EntryPoint;                                                // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function WBP_Toast2.WBP_Toast2_C.FinishedOutroAnimation__DelegateSignature
struct UWBP_Toast2_C_FinishedOutroAnimation__DelegateSignature_Params
{
};

// Function WBP_Toast2.WBP_Toast2_C.OnRemoveToastNotification__DelegateSignature
struct UWBP_Toast2_C_OnRemoveToastNotification__DelegateSignature_Params
{
	class UKSWidget*                                   ToastWidget;                                               // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
