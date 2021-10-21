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

// Function WBP_BattlePassAcquisitionTitle.WBP_BattlePassAcquisitionTitle_C.SetPremiumUpsellState
struct UWBP_BattlePassAcquisitionTitle_C_SetPremiumUpsellState_Params
{
	int                                                PremiumItems;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function WBP_BattlePassAcquisitionTitle.WBP_BattlePassAcquisitionTitle_C.InitializeWithAcquisition
struct UWBP_BattlePassAcquisitionTitle_C_InitializeWithAcquisition_Params
{
	class UKSAcquisition*                              Acquisition;                                               // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function WBP_BattlePassAcquisitionTitle.WBP_BattlePassAcquisitionTitle_C.InitializeWidget
struct UWBP_BattlePassAcquisitionTitle_C_InitializeWidget_Params
{
	class APUMG_HUD*                                   HUD;                                                       // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function WBP_BattlePassAcquisitionTitle.WBP_BattlePassAcquisitionTitle_C.ExecuteUbergraph_WBP_BattlePassAcquisitionTitle
struct UWBP_BattlePassAcquisitionTitle_C_ExecuteUbergraph_WBP_BattlePassAcquisitionTitle_Params
{
	int                                                EntryPoint;                                                // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
