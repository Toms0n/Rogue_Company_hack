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

// Function WBP_BattlePassEmblem.WBP_BattlePassEmblem_C.SetPremiumUpsellState
struct UWBP_BattlePassEmblem_C_SetPremiumUpsellState_Params
{
};

// Function WBP_BattlePassEmblem.WBP_BattlePassEmblem_C.SetBattlePassInfoExplicit
struct UWBP_BattlePassEmblem_C_SetBattlePassInfoExplicit_Params
{
	bool                                               HasPremium;                                                // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	int                                                Tier;                                                      // 0x0004(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function WBP_BattlePassEmblem.WBP_BattlePassEmblem_C.SetBattlePassInfoFromStoreItem
struct UWBP_BattlePassEmblem_C_SetBattlePassInfoFromStoreItem_Params
{
	class UPUMG_StoreItem*                             StoreItem;                                                 // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function WBP_BattlePassEmblem.WBP_BattlePassEmblem_C.SetBattlePassInfoFromActivityInstance
struct UWBP_BattlePassEmblem_C_SetBattlePassInfoFromActivityInstance_Params
{
	class UKSActivityInstance*                         ActivityInstance;                                          // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function WBP_BattlePassEmblem.WBP_BattlePassEmblem_C.InitializeBadgeTextures
struct UWBP_BattlePassEmblem_C_InitializeBadgeTextures_Params
{
};

// Function WBP_BattlePassEmblem.WBP_BattlePassEmblem_C.InitializeWidget
struct UWBP_BattlePassEmblem_C_InitializeWidget_Params
{
	class APUMG_HUD*                                   HUD;                                                       // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function WBP_BattlePassEmblem.WBP_BattlePassEmblem_C.ExecuteUbergraph_WBP_BattlePassEmblem
struct UWBP_BattlePassEmblem_C_ExecuteUbergraph_WBP_BattlePassEmblem_Params
{
	int                                                EntryPoint;                                                // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
