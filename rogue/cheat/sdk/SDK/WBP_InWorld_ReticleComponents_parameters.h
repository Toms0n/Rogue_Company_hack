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

// Function WBP_InWorld_ReticleComponents.WBP_InWorld_ReticleComponents_C.Check For Active View Mode Mod
struct UWBP_InWorld_ReticleComponents_C_Check_For_Active_View_Mode_Mod_Params
{
	bool                                               ModsActive;                                                // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function WBP_InWorld_ReticleComponents.WBP_InWorld_ReticleComponents_C.SetWeaponComponent
struct UWBP_InWorld_ReticleComponents_C_SetWeaponComponent_Params
{
	class UKSWeaponComponent*                          WeaponComponent;                                           // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function WBP_InWorld_ReticleComponents.WBP_InWorld_ReticleComponents_C.SetPlayerState
struct UWBP_InWorld_ReticleComponents_C_SetPlayerState_Params
{
	class APlayerState*                                PlayerState;                                               // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function WBP_InWorld_ReticleComponents.WBP_InWorld_ReticleComponents_C.SetAmmoColor
struct UWBP_InWorld_ReticleComponents_C_SetAmmoColor_Params
{
	bool                                               IsActive;                                                  // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function WBP_InWorld_ReticleComponents.WBP_InWorld_ReticleComponents_C.OnPossession
struct UWBP_InWorld_ReticleComponents_C_OnPossession_Params
{
	class APlayerState*                                PlayerState;                                               // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function WBP_InWorld_ReticleComponents.WBP_InWorld_ReticleComponents_C.OnWeaponSet
struct UWBP_InWorld_ReticleComponents_C_OnWeaponSet_Params
{
	class UKSWeaponComponent*                          WeaponComponent;                                           // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function WBP_InWorld_ReticleComponents.WBP_InWorld_ReticleComponents_C.OnModActivated
struct UWBP_InWorld_ReticleComponents_C_OnModActivated_Params
{
	bool                                               bActive;                                                   // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function WBP_InWorld_ReticleComponents.WBP_InWorld_ReticleComponents_C.Construct
struct UWBP_InWorld_ReticleComponents_C_Construct_Params
{
};

// Function WBP_InWorld_ReticleComponents.WBP_InWorld_ReticleComponents_C.Destruct
struct UWBP_InWorld_ReticleComponents_C_Destruct_Params
{
};

// Function WBP_InWorld_ReticleComponents.WBP_InWorld_ReticleComponents_C.ExecuteUbergraph_WBP_InWorld_ReticleComponents
struct UWBP_InWorld_ReticleComponents_C_ExecuteUbergraph_WBP_InWorld_ReticleComponents_Params
{
	int                                                EntryPoint;                                                // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
