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

// Function WBP_InWorld_Reticle.WBP_InWorld_Reticle_C.Check For Active View Mode Mod
struct UWBP_InWorld_Reticle_C_Check_For_Active_View_Mode_Mod_Params
{
	bool                                               ModsActive;                                                // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function WBP_InWorld_Reticle.WBP_InWorld_Reticle_C.SetConsoleSize
struct UWBP_InWorld_Reticle_C_SetConsoleSize_Params
{
};

// Function WBP_InWorld_Reticle.WBP_InWorld_Reticle_C.OnPaint
struct UWBP_InWorld_Reticle_C_OnPaint_Params
{
	struct FPaintContext                               Context;                                                   // 0x0000(0x0030)  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor)
};

// Function WBP_InWorld_Reticle.WBP_InWorld_Reticle_C.SetPlayerState
struct UWBP_InWorld_Reticle_C_SetPlayerState_Params
{
	class APlayerState*                                PlayerState;                                               // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function WBP_InWorld_Reticle.WBP_InWorld_Reticle_C.SetReticleImageColor
struct UWBP_InWorld_Reticle_C_SetReticleImageColor_Params
{
	bool                                               Active;                                                    // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function WBP_InWorld_Reticle.WBP_InWorld_Reticle_C.OnWeaponSet
struct UWBP_InWorld_Reticle_C_OnWeaponSet_Params
{
	class UKSWeaponComponent*                          WeaponComponent;                                           // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function WBP_InWorld_Reticle.WBP_InWorld_Reticle_C.Construct
struct UWBP_InWorld_Reticle_C_Construct_Params
{
};

// Function WBP_InWorld_Reticle.WBP_InWorld_Reticle_C.OnPossession
struct UWBP_InWorld_Reticle_C_OnPossession_Params
{
	class APlayerState*                                PlayerState;                                               // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function WBP_InWorld_Reticle.WBP_InWorld_Reticle_C.OnModActivated
struct UWBP_InWorld_Reticle_C_OnModActivated_Params
{
	bool                                               bActive;                                                   // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function WBP_InWorld_Reticle.WBP_InWorld_Reticle_C.Destruct
struct UWBP_InWorld_Reticle_C_Destruct_Params
{
};

// Function WBP_InWorld_Reticle.WBP_InWorld_Reticle_C.SetWeaponComponent
struct UWBP_InWorld_Reticle_C_SetWeaponComponent_Params
{
	class UKSWeaponComponent*                          WeaponComponent;                                           // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function WBP_InWorld_Reticle.WBP_InWorld_Reticle_C.ExecuteUbergraph_WBP_InWorld_Reticle
struct UWBP_InWorld_Reticle_C_ExecuteUbergraph_WBP_InWorld_Reticle_Params
{
	int                                                EntryPoint;                                                // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
