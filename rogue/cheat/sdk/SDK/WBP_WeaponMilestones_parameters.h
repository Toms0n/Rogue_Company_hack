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

// Function WBP_WeaponMilestones.WBP_WeaponMilestones_C.GetNumLockedEntries
struct UWBP_WeaponMilestones_C_GetNumLockedEntries_Params
{
	int                                                ReturnValue;                                               // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function WBP_WeaponMilestones.WBP_WeaponMilestones_C.GetMilestoneEntries
struct UWBP_WeaponMilestones_C_GetMilestoneEntries_Params
{
	TArray<class UKSWeaponMilestoneEntry*>             Entries;                                                   // 0x0000(0x0010)  (Parm, OutParm, ContainsInstancedReference, HasGetValueTypeHash)
};

// Function WBP_WeaponMilestones.WBP_WeaponMilestones_C.InitializeWidget
struct UWBP_WeaponMilestones_C_InitializeWidget_Params
{
	class APUMG_HUD*                                   HUD;                                                       // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function WBP_WeaponMilestones.WBP_WeaponMilestones_C.ExecuteUbergraph_WBP_WeaponMilestones
struct UWBP_WeaponMilestones_C_ExecuteUbergraph_WBP_WeaponMilestones_Params
{
	int                                                EntryPoint;                                                // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
