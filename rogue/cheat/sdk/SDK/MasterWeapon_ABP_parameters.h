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

// Function MasterWeapon_ABP.MasterWeapon_ABP_C.UpdateUnspentShellVisibility
struct UMasterWeapon_ABP_C_UpdateUnspentShellVisibility_Params
{
	int                                                bpp__ShellIndex__pf;                                       // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bpp__NewxVisibility__pfT;                                  // 0x0004(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function MasterWeapon_ABP.MasterWeapon_ABP_C.UpdateSpentShellVisibility
struct UMasterWeapon_ABP_C_UpdateSpentShellVisibility_Params
{
	int                                                bpp__ShellIndex__pf;                                       // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bpp__NewxVisibility__pfT;                                  // 0x0004(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function MasterWeapon_ABP.MasterWeapon_ABP_C.Set Multi Stage Reload
struct UMasterWeapon_ABP_C_Set_Multi_Stage_Reload_Params
{
	bool                                               bpp__NewxIsxMultixStagexReload__pfTTTT;                    // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function MasterWeapon_ABP.MasterWeapon_ABP_C.SetWeaponState
struct UMasterWeapon_ABP_C_SetWeaponState_Params
{
	class UKSWeaponComponent*                          bpp__OwningWeaponComponent__pf;                            // 0x0000(0x0008)  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	Killstreak_EWeaponStateNew                         bpp__OldState__pf;                                         // 0x0008(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	Killstreak_EWeaponStateNew                         bpp__NewState__pf;                                         // 0x0009(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function MasterWeapon_ABP.MasterWeapon_ABP_C.SetShieldActive
struct UMasterWeapon_ABP_C_SetShieldActive_Params
{
	bool                                               bpp__bSetIsShieldActive__pf;                               // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function MasterWeapon_ABP.MasterWeapon_ABP_C.SetScopeScaleAlpha
struct UMasterWeapon_ABP_C_SetScopeScaleAlpha_Params
{
	float                                              bpp__NewAlpha__pf;                                         // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function MasterWeapon_ABP.MasterWeapon_ABP_C.SetRevolverChamberRotatae
struct UMasterWeapon_ABP_C_SetRevolverChamberRotatae_Params
{
	struct FRotator                                    bpp__NewRevolverChamberRot__pf;                            // 0x0000(0x000C)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
};

// Function MasterWeapon_ABP.MasterWeapon_ABP_C.InitSetWeaponState
struct UMasterWeapon_ABP_C_InitSetWeaponState_Params
{
	Killstreak_EWeaponStateNew                         bpp__NewWeaponState__pf;                                   // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function MasterWeapon_ABP.MasterWeapon_ABP_C.InitSetUseWeaponAdditive
struct UMasterWeapon_ABP_C_InitSetUseWeaponAdditive_Params
{
	bool                                               bpp__bUseAdditive__pf;                                     // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function MasterWeapon_ABP.MasterWeapon_ABP_C.InitSetScopeMeshScale
struct UMasterWeapon_ABP_C_InitSetScopeMeshScale_Params
{
	float                                              bpp__NewAlpha__pf;                                         // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bpp__bIsRevolver__pf;                                      // 0x0004(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bpp__bIsMultiStageReload__pf;                              // 0x0005(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function MasterWeapon_ABP.MasterWeapon_ABP_C.InitSetHideMagazine
struct UMasterWeapon_ABP_C_InitSetHideMagazine_Params
{
	float                                              bpp__HideMagazineAlpha__pf;                                // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function MasterWeapon_ABP.MasterWeapon_ABP_C.InitSetFoldingStock
struct UMasterWeapon_ABP_C_InitSetFoldingStock_Params
{
	bool                                               bpp__bIsStockFolded__pf;                                   // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FRotator                                    bpp__StockRotationTarget__pf;                              // 0x0004(0x000C)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	struct FRotator                                    bpp__StockAltRotationTarget__pf;                           // 0x0010(0x000C)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
};

// Function MasterWeapon_ABP.MasterWeapon_ABP_C.Event Disable Alternate Mirroring
struct UMasterWeapon_ABP_C_Event_Disable_Alternate_Mirroring_Params
{
	bool                                               bpp__bool__pf;                                             // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function MasterWeapon_ABP.MasterWeapon_ABP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_MasterWeapon_ABP_KSAnimGraphNode_Mirror_F877D290460310F78FDDD3909FA57427
struct UMasterWeapon_ABP_C_EvaluateGraphExposedInputs_ExecuteUbergraph_MasterWeapon_ABP_KSAnimGraphNode_Mirror_F877D290460310F78FDDD3909FA57427_Params
{
};

// Function MasterWeapon_ABP.MasterWeapon_ABP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_MasterWeapon_ABP_KSAnimGraphNode_Mirror_9065EDDA49AAB039433C4A8A69B0D04C
struct UMasterWeapon_ABP_C_EvaluateGraphExposedInputs_ExecuteUbergraph_MasterWeapon_ABP_KSAnimGraphNode_Mirror_9065EDDA49AAB039433C4A8A69B0D04C_Params
{
};

// Function MasterWeapon_ABP.MasterWeapon_ABP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_MasterWeapon_ABP_AnimGraphNode_TransitionResult_C81FAA1C43A50F58E2735BA1DAFCEAC3
struct UMasterWeapon_ABP_C_EvaluateGraphExposedInputs_ExecuteUbergraph_MasterWeapon_ABP_AnimGraphNode_TransitionResult_C81FAA1C43A50F58E2735BA1DAFCEAC3_Params
{
};

// Function MasterWeapon_ABP.MasterWeapon_ABP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_MasterWeapon_ABP_AnimGraphNode_TransitionResult_611B83614EC94B902AE59986EF3BC03A
struct UMasterWeapon_ABP_C_EvaluateGraphExposedInputs_ExecuteUbergraph_MasterWeapon_ABP_AnimGraphNode_TransitionResult_611B83614EC94B902AE59986EF3BC03A_Params
{
};

// Function MasterWeapon_ABP.MasterWeapon_ABP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_MasterWeapon_ABP_AnimGraphNode_ModifyBone_52465FEA4D6701EB8BD2D5B0FF7D5E44
struct UMasterWeapon_ABP_C_EvaluateGraphExposedInputs_ExecuteUbergraph_MasterWeapon_ABP_AnimGraphNode_ModifyBone_52465FEA4D6701EB8BD2D5B0FF7D5E44_Params
{
};

// Function MasterWeapon_ABP.MasterWeapon_ABP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_MasterWeapon_ABP_AnimGraphNode_BlendListByBool_8D407D3B4E9DF8DEBA89FBB2A5413674
struct UMasterWeapon_ABP_C_EvaluateGraphExposedInputs_ExecuteUbergraph_MasterWeapon_ABP_AnimGraphNode_BlendListByBool_8D407D3B4E9DF8DEBA89FBB2A5413674_Params
{
};

// Function MasterWeapon_ABP.MasterWeapon_ABP_C.AnimNotify_Unhide Mag
struct UMasterWeapon_ABP_C_AnimNotify_Unhide_Mag_Params
{
};

// Function MasterWeapon_ABP.MasterWeapon_ABP_C.AnimNotify_Hide Mag
struct UMasterWeapon_ABP_C_AnimNotify_Hide_Mag_Params
{
};

// Function MasterWeapon_ABP.MasterWeapon_ABP_C.AnimGraph
struct UMasterWeapon_ABP_C_AnimGraph_Params
{
	struct FPoseLink                                   bpp__AnimGraph__pf;                                        // 0x0000(0x0010)  (Parm, OutParm, NoDestructor, NativeAccessSpecifierPublic)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
