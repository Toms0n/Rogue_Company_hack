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

// Function WBP_BattlePassTitle.WBP_BattlePassTitle_C.RefreshTimeRemaining
struct UWBP_BattlePassTitle_C_RefreshTimeRemaining_Params
{
};

// Function WBP_BattlePassTitle.WBP_BattlePassTitle_C.InitializeWithActivityInstance
struct UWBP_BattlePassTitle_C_InitializeWithActivityInstance_Params
{
	class UKSActivityInstance*                         ActivityInstance;                                          // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function WBP_BattlePassTitle.WBP_BattlePassTitle_C.InitializeWidget
struct UWBP_BattlePassTitle_C_InitializeWidget_Params
{
	class APUMG_HUD*                                   HUD;                                                       // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function WBP_BattlePassTitle.WBP_BattlePassTitle_C.ExecuteUbergraph_WBP_BattlePassTitle
struct UWBP_BattlePassTitle_C_ExecuteUbergraph_WBP_BattlePassTitle_Params
{
	int                                                EntryPoint;                                                // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
