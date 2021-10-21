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

// Function Master_Melee_ABP.Master_Melee_ABP_C.AnimGraph
struct UMaster_Melee_ABP_C_AnimGraph_Params
{
	struct FPoseLink                                   AnimGraph;                                                 // 0x0000(0x0010)  (Parm, OutParm, NoDestructor)
};

// Function Master_Melee_ABP.Master_Melee_ABP_C.Set Weapon State
struct UMaster_Melee_ABP_C_Set_Weapon_State_Params
{
	Killstreak_EWeaponStateNew                         Weapon_State;                                              // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Master_Melee_ABP.Master_Melee_ABP_C.InitSetWeaponState
struct UMaster_Melee_ABP_C_InitSetWeaponState_Params
{
	Killstreak_EWeaponStateNew                         NewWeaponState;                                            // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Master_Melee_ABP.Master_Melee_ABP_C.ExecuteUbergraph_Master_Melee_ABP
struct UMaster_Melee_ABP_C_ExecuteUbergraph_Master_Melee_ABP_Params
{
	int                                                EntryPoint;                                                // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
