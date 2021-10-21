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

// Function WBP_BattlepassTransitionBanner.WBP_BattlepassTransitionBanner_C.SequenceEvent__ENTRYPOINTWBP_BattlepassTransitionBanner_2
struct UWBP_BattlepassTransitionBanner_C_SequenceEvent__ENTRYPOINTWBP_BattlepassTransitionBanner_2_Params
{
};

// Function WBP_BattlepassTransitionBanner.WBP_BattlepassTransitionBanner_C.SequenceEvent__ENTRYPOINTWBP_BattlepassTransitionBanner_1
struct UWBP_BattlepassTransitionBanner_C_SequenceEvent__ENTRYPOINTWBP_BattlepassTransitionBanner_1_Params
{
};

// Function WBP_BattlepassTransitionBanner.WBP_BattlepassTransitionBanner_C.EndTransitionAnimationEarly
struct UWBP_BattlepassTransitionBanner_C_EndTransitionAnimationEarly_Params
{
};

// Function WBP_BattlepassTransitionBanner.WBP_BattlepassTransitionBanner_C.DisplayAcquiredTier
struct UWBP_BattlepassTransitionBanner_C_DisplayAcquiredTier_Params
{
	class UKSAcquisition*                              Acquisition;                                               // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function WBP_BattlepassTransitionBanner.WBP_BattlepassTransitionBanner_C.PlayAnimation_PremiumUnlocked
struct UWBP_BattlepassTransitionBanner_C_PlayAnimation_PremiumUnlocked_Params
{
};

// Function WBP_BattlepassTransitionBanner.WBP_BattlepassTransitionBanner_C.PlayAnimation_NewTierPremium
struct UWBP_BattlepassTransitionBanner_C_PlayAnimation_NewTierPremium_Params
{
};

// Function WBP_BattlepassTransitionBanner.WBP_BattlepassTransitionBanner_C.PlayAnimation_NewTierFree
struct UWBP_BattlepassTransitionBanner_C_PlayAnimation_NewTierFree_Params
{
};

// Function WBP_BattlepassTransitionBanner.WBP_BattlepassTransitionBanner_C.UpdateColors_Premium
struct UWBP_BattlepassTransitionBanner_C_UpdateColors_Premium_Params
{
};

// Function WBP_BattlepassTransitionBanner.WBP_BattlepassTransitionBanner_C.UpdateColors_Free
struct UWBP_BattlepassTransitionBanner_C_UpdateColors_Free_Params
{
};

// Function WBP_BattlepassTransitionBanner.WBP_BattlepassTransitionBanner_C.PreConstruct
struct UWBP_BattlepassTransitionBanner_C_PreConstruct_Params
{
	bool                                               IsDesignTime;                                              // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function WBP_BattlepassTransitionBanner.WBP_BattlepassTransitionBanner_C.Tick
struct UWBP_BattlepassTransitionBanner_C_Tick_Params
{
	struct FGeometry                                   MyGeometry;                                                // 0x0000(0x0058)  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	float                                              InDeltaTime;                                               // 0x0058(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function WBP_BattlepassTransitionBanner.WBP_BattlepassTransitionBanner_C.MakeColorsPremium
struct UWBP_BattlepassTransitionBanner_C_MakeColorsPremium_Params
{
};

// Function WBP_BattlepassTransitionBanner.WBP_BattlepassTransitionBanner_C.SetBannerText_NewTier
struct UWBP_BattlepassTransitionBanner_C_SetBannerText_NewTier_Params
{
};

// Function WBP_BattlepassTransitionBanner.WBP_BattlepassTransitionBanner_C.SetBannerText_PremiumUnlocked
struct UWBP_BattlepassTransitionBanner_C_SetBannerText_PremiumUnlocked_Params
{
};

// Function WBP_BattlepassTransitionBanner.WBP_BattlepassTransitionBanner_C.MakeColorsFree
struct UWBP_BattlepassTransitionBanner_C_MakeColorsFree_Params
{
};

// Function WBP_BattlepassTransitionBanner.WBP_BattlepassTransitionBanner_C.OnAnimationFinished
struct UWBP_BattlepassTransitionBanner_C_OnAnimationFinished_Params
{
	class UWidgetAnimation*                            Animation;                                                 // 0x0000(0x0008)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function WBP_BattlepassTransitionBanner.WBP_BattlepassTransitionBanner_C.OnAnimationStarted
struct UWBP_BattlepassTransitionBanner_C_OnAnimationStarted_Params
{
	class UWidgetAnimation*                            Animation;                                                 // 0x0000(0x0008)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function WBP_BattlepassTransitionBanner.WBP_BattlepassTransitionBanner_C.SequenceEvent_1
struct UWBP_BattlepassTransitionBanner_C_SequenceEvent_1_Params
{
};

// Function WBP_BattlepassTransitionBanner.WBP_BattlepassTransitionBanner_C.InitializeWidget
struct UWBP_BattlepassTransitionBanner_C_InitializeWidget_Params
{
	class APUMG_HUD*                                   HUD;                                                       // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function WBP_BattlepassTransitionBanner.WBP_BattlepassTransitionBanner_C.ExecuteUbergraph_WBP_BattlepassTransitionBanner
struct UWBP_BattlepassTransitionBanner_C_ExecuteUbergraph_WBP_BattlepassTransitionBanner_Params
{
	int                                                EntryPoint;                                                // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function WBP_BattlepassTransitionBanner.WBP_BattlepassTransitionBanner_C.TransitionFinished__DelegateSignature
struct UWBP_BattlepassTransitionBanner_C_TransitionFinished__DelegateSignature_Params
{
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
