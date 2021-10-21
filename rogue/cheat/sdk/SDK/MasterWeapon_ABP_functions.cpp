// Name: roguecompany, Version: 425

#include "../pch.h"

/*!!DEFINE!!*/

/*!!HELPER_DEF!!*/

/*!!HELPER_INC!!*/

#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

namespace CG
{
//---------------------------------------------------------------------------
// Functions
//---------------------------------------------------------------------------

// Function:
//		Offset -> 0x0184F470
//		Name   -> Function MasterWeapon_ABP.MasterWeapon_ABP_C.UpdateUnspentShellVisibility
//		Flags  -> (Native, Public, BlueprintCallable)
// Parameters:
//		int                                                bpp__ShellIndex__pf                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		bool                                               bpp__NewxVisibility__pfT                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UMasterWeapon_ABP_C::UpdateUnspentShellVisibility(int bpp__ShellIndex__pf, bool bpp__NewxVisibility__pfT)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(25639);

	UMasterWeapon_ABP_C_UpdateUnspentShellVisibility_Params params {};
	params.bpp__ShellIndex__pf = bpp__ShellIndex__pf;
	params.bpp__NewxVisibility__pfT = bpp__NewxVisibility__pfT;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x0184F3A0
//		Name   -> Function MasterWeapon_ABP.MasterWeapon_ABP_C.UpdateSpentShellVisibility
//		Flags  -> (Native, Public, BlueprintCallable)
// Parameters:
//		int                                                bpp__ShellIndex__pf                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		bool                                               bpp__NewxVisibility__pfT                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UMasterWeapon_ABP_C::UpdateSpentShellVisibility(int bpp__ShellIndex__pf, bool bpp__NewxVisibility__pfT)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(25638);

	UMasterWeapon_ABP_C_UpdateSpentShellVisibility_Params params {};
	params.bpp__ShellIndex__pf = bpp__ShellIndex__pf;
	params.bpp__NewxVisibility__pfT = bpp__NewxVisibility__pfT;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x0184F310
//		Name   -> Function MasterWeapon_ABP.MasterWeapon_ABP_C.Set Multi Stage Reload
//		Flags  -> (Native, Public, BlueprintCallable)
// Parameters:
//		bool                                               bpp__NewxIsxMultixStagexReload__pfTTTT                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UMasterWeapon_ABP_C::Set_Multi_Stage_Reload(bool bpp__NewxIsxMultixStagexReload__pfTTTT)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(25637);

	UMasterWeapon_ABP_C_Set_Multi_Stage_Reload_Params params {};
	params.bpp__NewxIsxMultixStagexReload__pfTTTT = bpp__NewxIsxMultixStagexReload__pfTTTT;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x0184F210
//		Name   -> Function MasterWeapon_ABP.MasterWeapon_ABP_C.SetWeaponState
//		Flags  -> (Native, Event, Public, BlueprintCallable)
// Parameters:
//		class UKSWeaponComponent*                          bpp__OwningWeaponComponent__pf                             (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		Killstreak_EWeaponStateNew                         bpp__OldState__pf                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		Killstreak_EWeaponStateNew                         bpp__NewState__pf                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UMasterWeapon_ABP_C::SetWeaponState(class UKSWeaponComponent* bpp__OwningWeaponComponent__pf, Killstreak_EWeaponStateNew bpp__OldState__pf, Killstreak_EWeaponStateNew bpp__NewState__pf)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(25636);

	UMasterWeapon_ABP_C_SetWeaponState_Params params {};
	params.bpp__OwningWeaponComponent__pf = bpp__OwningWeaponComponent__pf;
	params.bpp__OldState__pf = bpp__OldState__pf;
	params.bpp__NewState__pf = bpp__NewState__pf;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x0184F180
//		Name   -> Function MasterWeapon_ABP.MasterWeapon_ABP_C.SetShieldActive
//		Flags  -> (Native, Event, Public, BlueprintCallable)
// Parameters:
//		bool                                               bpp__bSetIsShieldActive__pf                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UMasterWeapon_ABP_C::SetShieldActive(bool bpp__bSetIsShieldActive__pf)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(25635);

	UMasterWeapon_ABP_C_SetShieldActive_Params params {};
	params.bpp__bSetIsShieldActive__pf = bpp__bSetIsShieldActive__pf;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x0184F100
//		Name   -> Function MasterWeapon_ABP.MasterWeapon_ABP_C.SetScopeScaleAlpha
//		Flags  -> (Native, Event, Public, BlueprintCallable)
// Parameters:
//		float                                              bpp__NewAlpha__pf                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UMasterWeapon_ABP_C::SetScopeScaleAlpha(float bpp__NewAlpha__pf)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(25634);

	UMasterWeapon_ABP_C_SetScopeScaleAlpha_Params params {};
	params.bpp__NewAlpha__pf = bpp__NewAlpha__pf;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x0184F070
//		Name   -> Function MasterWeapon_ABP.MasterWeapon_ABP_C.SetRevolverChamberRotatae
//		Flags  -> (Native, Event, Public, HasDefaults, BlueprintCallable)
// Parameters:
//		struct FRotator                                    bpp__NewRevolverChamberRot__pf                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
void UMasterWeapon_ABP_C::SetRevolverChamberRotatae(const struct FRotator& bpp__NewRevolverChamberRot__pf)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(25633);

	UMasterWeapon_ABP_C_SetRevolverChamberRotatae_Params params {};
	params.bpp__NewRevolverChamberRot__pf = bpp__NewRevolverChamberRot__pf;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x0184EFF0
//		Name   -> Function MasterWeapon_ABP.MasterWeapon_ABP_C.InitSetWeaponState
//		Flags  -> (Native, Event, Public, BlueprintCallable)
// Parameters:
//		Killstreak_EWeaponStateNew                         bpp__NewWeaponState__pf                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UMasterWeapon_ABP_C::InitSetWeaponState(Killstreak_EWeaponStateNew bpp__NewWeaponState__pf)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(25632);

	UMasterWeapon_ABP_C_InitSetWeaponState_Params params {};
	params.bpp__NewWeaponState__pf = bpp__NewWeaponState__pf;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x0184EF60
//		Name   -> Function MasterWeapon_ABP.MasterWeapon_ABP_C.InitSetUseWeaponAdditive
//		Flags  -> (Native, Event, Public, BlueprintCallable)
// Parameters:
//		bool                                               bpp__bUseAdditive__pf                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UMasterWeapon_ABP_C::InitSetUseWeaponAdditive(bool bpp__bUseAdditive__pf)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(25631);

	UMasterWeapon_ABP_C_InitSetUseWeaponAdditive_Params params {};
	params.bpp__bUseAdditive__pf = bpp__bUseAdditive__pf;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x0184EE50
//		Name   -> Function MasterWeapon_ABP.MasterWeapon_ABP_C.InitSetScopeMeshScale
//		Flags  -> (Native, Event, Public, BlueprintCallable)
// Parameters:
//		float                                              bpp__NewAlpha__pf                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		bool                                               bpp__bIsRevolver__pf                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		bool                                               bpp__bIsMultiStageReload__pf                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UMasterWeapon_ABP_C::InitSetScopeMeshScale(float bpp__NewAlpha__pf, bool bpp__bIsRevolver__pf, bool bpp__bIsMultiStageReload__pf)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(25630);

	UMasterWeapon_ABP_C_InitSetScopeMeshScale_Params params {};
	params.bpp__NewAlpha__pf = bpp__NewAlpha__pf;
	params.bpp__bIsRevolver__pf = bpp__bIsRevolver__pf;
	params.bpp__bIsMultiStageReload__pf = bpp__bIsMultiStageReload__pf;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x0184EDD0
//		Name   -> Function MasterWeapon_ABP.MasterWeapon_ABP_C.InitSetHideMagazine
//		Flags  -> (Native, Event, Public, BlueprintCallable)
// Parameters:
//		float                                              bpp__HideMagazineAlpha__pf                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UMasterWeapon_ABP_C::InitSetHideMagazine(float bpp__HideMagazineAlpha__pf)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(25629);

	UMasterWeapon_ABP_C_InitSetHideMagazine_Params params {};
	params.bpp__HideMagazineAlpha__pf = bpp__HideMagazineAlpha__pf;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x0184EC90
//		Name   -> Function MasterWeapon_ABP.MasterWeapon_ABP_C.InitSetFoldingStock
//		Flags  -> (Native, Event, Public, HasDefaults, BlueprintCallable)
// Parameters:
//		bool                                               bpp__bIsStockFolded__pf                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		struct FRotator                                    bpp__StockRotationTarget__pf                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
//		struct FRotator                                    bpp__StockAltRotationTarget__pf                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
void UMasterWeapon_ABP_C::InitSetFoldingStock(bool bpp__bIsStockFolded__pf, const struct FRotator& bpp__StockRotationTarget__pf, const struct FRotator& bpp__StockAltRotationTarget__pf)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(25628);

	UMasterWeapon_ABP_C_InitSetFoldingStock_Params params {};
	params.bpp__bIsStockFolded__pf = bpp__bIsStockFolded__pf;
	params.bpp__StockRotationTarget__pf = bpp__StockRotationTarget__pf;
	params.bpp__StockAltRotationTarget__pf = bpp__StockAltRotationTarget__pf;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x0184EB80
//		Name   -> Function MasterWeapon_ABP.MasterWeapon_ABP_C.Event Disable Alternate Mirroring
//		Flags  -> (Native, Public, BlueprintCallable)
// Parameters:
//		bool                                               bpp__bool__pf                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UMasterWeapon_ABP_C::Event_Disable_Alternate_Mirroring(bool bpp__bool__pf)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(25627);

	UMasterWeapon_ABP_C_Event_Disable_Alternate_Mirroring_Params params {};
	params.bpp__bool__pf = bpp__bool__pf;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x0184EB60
//		Name   -> Function MasterWeapon_ABP.MasterWeapon_ABP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_MasterWeapon_ABP_KSAnimGraphNode_Mirror_F877D290460310F78FDDD3909FA57427
//		Flags  -> (Native, Public)
void UMasterWeapon_ABP_C::EvaluateGraphExposedInputs_ExecuteUbergraph_MasterWeapon_ABP_KSAnimGraphNode_Mirror_F877D290460310F78FDDD3909FA57427()
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(25626);

	UMasterWeapon_ABP_C_EvaluateGraphExposedInputs_ExecuteUbergraph_MasterWeapon_ABP_KSAnimGraphNode_Mirror_F877D290460310F78FDDD3909FA57427_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x0184EB40
//		Name   -> Function MasterWeapon_ABP.MasterWeapon_ABP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_MasterWeapon_ABP_KSAnimGraphNode_Mirror_9065EDDA49AAB039433C4A8A69B0D04C
//		Flags  -> (Native, Public)
void UMasterWeapon_ABP_C::EvaluateGraphExposedInputs_ExecuteUbergraph_MasterWeapon_ABP_KSAnimGraphNode_Mirror_9065EDDA49AAB039433C4A8A69B0D04C()
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(25625);

	UMasterWeapon_ABP_C_EvaluateGraphExposedInputs_ExecuteUbergraph_MasterWeapon_ABP_KSAnimGraphNode_Mirror_9065EDDA49AAB039433C4A8A69B0D04C_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x0184EB20
//		Name   -> Function MasterWeapon_ABP.MasterWeapon_ABP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_MasterWeapon_ABP_AnimGraphNode_TransitionResult_C81FAA1C43A50F58E2735BA1DAFCEAC3
//		Flags  -> (Native, Public)
void UMasterWeapon_ABP_C::EvaluateGraphExposedInputs_ExecuteUbergraph_MasterWeapon_ABP_AnimGraphNode_TransitionResult_C81FAA1C43A50F58E2735BA1DAFCEAC3()
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(25624);

	UMasterWeapon_ABP_C_EvaluateGraphExposedInputs_ExecuteUbergraph_MasterWeapon_ABP_AnimGraphNode_TransitionResult_C81FAA1C43A50F58E2735BA1DAFCEAC3_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x0184EB00
//		Name   -> Function MasterWeapon_ABP.MasterWeapon_ABP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_MasterWeapon_ABP_AnimGraphNode_TransitionResult_611B83614EC94B902AE59986EF3BC03A
//		Flags  -> (Native, Public)
void UMasterWeapon_ABP_C::EvaluateGraphExposedInputs_ExecuteUbergraph_MasterWeapon_ABP_AnimGraphNode_TransitionResult_611B83614EC94B902AE59986EF3BC03A()
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(25623);

	UMasterWeapon_ABP_C_EvaluateGraphExposedInputs_ExecuteUbergraph_MasterWeapon_ABP_AnimGraphNode_TransitionResult_611B83614EC94B902AE59986EF3BC03A_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x0184EAE0
//		Name   -> Function MasterWeapon_ABP.MasterWeapon_ABP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_MasterWeapon_ABP_AnimGraphNode_ModifyBone_52465FEA4D6701EB8BD2D5B0FF7D5E44
//		Flags  -> (Native, Public)
void UMasterWeapon_ABP_C::EvaluateGraphExposedInputs_ExecuteUbergraph_MasterWeapon_ABP_AnimGraphNode_ModifyBone_52465FEA4D6701EB8BD2D5B0FF7D5E44()
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(25622);

	UMasterWeapon_ABP_C_EvaluateGraphExposedInputs_ExecuteUbergraph_MasterWeapon_ABP_AnimGraphNode_ModifyBone_52465FEA4D6701EB8BD2D5B0FF7D5E44_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x0184EAC0
//		Name   -> Function MasterWeapon_ABP.MasterWeapon_ABP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_MasterWeapon_ABP_AnimGraphNode_BlendListByBool_8D407D3B4E9DF8DEBA89FBB2A5413674
//		Flags  -> (Native, Public)
void UMasterWeapon_ABP_C::EvaluateGraphExposedInputs_ExecuteUbergraph_MasterWeapon_ABP_AnimGraphNode_BlendListByBool_8D407D3B4E9DF8DEBA89FBB2A5413674()
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(25621);

	UMasterWeapon_ABP_C_EvaluateGraphExposedInputs_ExecuteUbergraph_MasterWeapon_ABP_AnimGraphNode_BlendListByBool_8D407D3B4E9DF8DEBA89FBB2A5413674_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x0184EAA0
//		Name   -> Function MasterWeapon_ABP.MasterWeapon_ABP_C.AnimNotify_Unhide Mag
//		Flags  -> (Native, Public, BlueprintCallable)
void UMasterWeapon_ABP_C::AnimNotify_Unhide_Mag()
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(25620);

	UMasterWeapon_ABP_C_AnimNotify_Unhide_Mag_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x0184EA80
//		Name   -> Function MasterWeapon_ABP.MasterWeapon_ABP_C.AnimNotify_Hide Mag
//		Flags  -> (Native, Public, BlueprintCallable)
void UMasterWeapon_ABP_C::AnimNotify_Hide_Mag()
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(25619);

	UMasterWeapon_ABP_C_AnimNotify_Hide_Mag_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x0184E9E0
//		Name   -> Function MasterWeapon_ABP.MasterWeapon_ABP_C.AnimGraph
//		Flags  -> (Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
//		struct FPoseLink                                   bpp__AnimGraph__pf                                         (Parm, OutParm, NoDestructor, NativeAccessSpecifierPublic)
void UMasterWeapon_ABP_C::AnimGraph(struct FPoseLink* bpp__AnimGraph__pf)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(25618);

	UMasterWeapon_ABP_C_AnimGraph_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (bpp__AnimGraph__pf != nullptr)
		*bpp__AnimGraph__pf = params.bpp__AnimGraph__pf;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
