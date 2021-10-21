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

// Function NameplateWidget.NameplateWidget_C.Update Visibility
struct UNameplateWidget_C_Update_Visibility_Params
{
	float                                              bpp__DeltaSeconds__pf;                                     // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bpp__ForceUpdate__pf;                                      // 0x0004(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function NameplateWidget.NameplateWidget_C.UpdateColorCorrectionValue
struct UNameplateWidget_C_UpdateColorCorrectionValue_Params
{
	SlateCore_EColorVisionDeficiency                   bpp__ColorCorrection__pf;                                  // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function NameplateWidget.NameplateWidget_C.Unbind Events From PlayerState
struct UNameplateWidget_C_Unbind_Events_From_PlayerState_Params
{
};

// Function NameplateWidget.NameplateWidget_C.Should Show Enemy Nameplate
struct UNameplateWidget_C_Should_Show_Enemy_Nameplate_Params
{
	bool                                               bpp__ShouldShow__pf;                                       // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function NameplateWidget.NameplateWidget_C.SetObjectiveMarkerFromGameState
struct UNameplateWidget_C_SetObjectiveMarkerFromGameState_Params
{
	bool                                               bpp__ShowObjective__pf;                                    // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UTexture2D*                                  bpp__ObjectiveIcon__pf;                                    // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bpp__ForceAlways__pf;                                      // 0x0010(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function NameplateWidget.NameplateWidget_C.SetNamePlateColor
struct UNameplateWidget_C_SetNamePlateColor_Params
{
	class AKSPlayerState*                              bpp__PlayerxState__pfT;                                    // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function NameplateWidget.NameplateWidget_C.PreConstruct
struct UNameplateWidget_C_PreConstruct_Params
{
	bool                                               bpp__IsDesignTime__pf;                                     // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function NameplateWidget.NameplateWidget_C.Player Is Blinded
struct UNameplateWidget_C_Player_Is_Blinded_Params
{
	bool                                               bpp__IsxBlind__pfT;                                        // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function NameplateWidget.NameplateWidget_C.OnUnhovered
struct UNameplateWidget_C_OnUnhovered_Params
{
};

// Function NameplateWidget.NameplateWidget_C.OnSettingsApplied
struct UNameplateWidget_C_OnSettingsApplied_Params
{
	struct FName                                       bpp__SettingName__pf;                                      // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function NameplateWidget.NameplateWidget_C.OnPossession
struct UNameplateWidget_C_OnPossession_Params
{
	class APlayerState*                                bpp__PlayerState__pf;                                      // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class AKSCharacter*                                bpp__Character__pf;                                        // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function NameplateWidget.NameplateWidget_C.OnPlayerUINeedsUpdate
struct UNameplateWidget_C_OnPlayerUINeedsUpdate_Params
{
	class AKSPlayerState*                              bpp__PlayerState__pf;                                      // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function NameplateWidget.NameplateWidget_C.OnPlayerDownedChanged_Event
struct UNameplateWidget_C_OnPlayerDownedChanged_Event_Params
{
	class AKSPlayerState*                              bpp__PlayerState__pf;                                      // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function NameplateWidget.NameplateWidget_C.OnModRemoved
struct UNameplateWidget_C_OnModRemoved_Params
{
	class UKSPlayerMod*                                bpp__Mod__pf;                                              // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UKSPlayerModInstance*                        bpp__ModInstance__pf;                                      // 0x0008(0x0008)  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function NameplateWidget.NameplateWidget_C.OnModAdded
struct UNameplateWidget_C_OnModAdded_Params
{
	class UKSPlayerMod*                                bpp__Mod__pf;                                              // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UKSPlayerModInstance*                        bpp__ModInstance__pf;                                      // 0x0008(0x0008)  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function NameplateWidget.NameplateWidget_C.OnKillCamEnabled
struct UNameplateWidget_C_OnKillCamEnabled_Params
{
	bool                                               bpp__IsEnabled__pf;                                        // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function NameplateWidget.NameplateWidget_C.OnHovered
struct UNameplateWidget_C_OnHovered_Params
{
};

// Function NameplateWidget.NameplateWidget_C.OnDead
struct UNameplateWidget_C_OnDead_Params
{
	class AKSPlayerState*                              bpp__PlayerState__pf;                                      // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function NameplateWidget.NameplateWidget_C.Manual Tick
struct UNameplateWidget_C_Manual_Tick_Params
{
};

// Function NameplateWidget.NameplateWidget_C.Handle Overheal Changed
struct UNameplateWidget_C_Handle_Overheal_Changed_Params
{
	class AKSCharacterBase*                            bpp__Character__pf__const;                                 // 0x0000(0x0008)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function NameplateWidget.NameplateWidget_C.Handle Job Changed
struct UNameplateWidget_C_Handle_Job_Changed_Params
{
};

// Function NameplateWidget.NameplateWidget_C.HandleObjectiveStateChanged
struct UNameplateWidget_C_HandleObjectiveStateChanged_Params
{
};

// Function NameplateWidget.NameplateWidget_C.HandleNameChanged
struct UNameplateWidget_C_HandleNameChanged_Params
{
	class AKSPlayerState*                              bpp__InKSPlayerState__pf;                                  // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function NameplateWidget.NameplateWidget_C.HandleModActivationChanged
struct UNameplateWidget_C_HandleModActivationChanged_Params
{
	class UKSPlayerMod_Activated*                      bpp__ActivatedxMod__pfT;                                   // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bpp__Active__pf;                                           // 0x0008(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function NameplateWidget.NameplateWidget_C.HandleGameObjectiveRegistered
struct UNameplateWidget_C_HandleGameObjectiveRegistered_Params
{
};

// Function NameplateWidget.NameplateWidget_C.HandleGameObjectiveChanged
struct UNameplateWidget_C_HandleGameObjectiveChanged_Params
{
};

// Function NameplateWidget.NameplateWidget_C.ExecuteUbergraph_NameplateWidget_6
struct UNameplateWidget_C_ExecuteUbergraph_NameplateWidget_6_Params
{
	int                                                bpp__EntryPoint__pf;                                       // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function NameplateWidget.NameplateWidget_C.Destruct
struct UNameplateWidget_C_Destruct_Params
{
};

// Function NameplateWidget.NameplateWidget_C.Deferred Player State Open
struct UNameplateWidget_C_Deferred_Player_State_Open_Params
{
};

// Function NameplateWidget.NameplateWidget_C.Construct
struct UNameplateWidget_C_Construct_Params
{
};

// Function NameplateWidget.NameplateWidget_C.CheckMods
struct UNameplateWidget_C_CheckMods_Params
{
	class AKSPlayerState*                              bpp__PlayerState__pf;                                      // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function NameplateWidget.NameplateWidget_C.CharacterHealthChange
struct UNameplateWidget_C_CharacterHealthChange_Params
{
	class AKSCharacterBase*                            bpp__Character__pf__const;                                 // 0x0000(0x0008)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// DelegateFunction NameplateWidget.NameplateWidget_C.OnUIRelevantPlayerStateChanged__DelegateSignature
struct UNameplateWidget_C_OnUIRelevantPlayerStateChanged__DelegateSignature_Params
{
	class AKSPlayerState*                              bpp__PlayerState__pf;                                      // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// DelegateFunction NameplateWidget.NameplateWidget_C.OnPlayerModActivationChange__DelegateSignature
struct UNameplateWidget_C_OnPlayerModActivationChange__DelegateSignature_Params
{
	class UKSPlayerMod_Activated*                      bpp__ActivatedMod__pf;                                     // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bpp__Active__pf;                                           // 0x0008(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// DelegateFunction NameplateWidget.NameplateWidget_C.OnPlayerEliminated__DelegateSignature
struct UNameplateWidget_C_OnPlayerEliminated__DelegateSignature_Params
{
	class AKSPlayerState*                              bpp__PlayerState__pf;                                      // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// DelegateFunction NameplateWidget.NameplateWidget_C.OnPlayerDownedChanged__DelegateSignature
struct UNameplateWidget_C_OnPlayerDownedChanged__DelegateSignature_Params
{
	class AKSPlayerState*                              bpp__PlayerState__pf;                                      // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// DelegateFunction NameplateWidget.NameplateWidget_C.OnModRemoved__DelegateSignature
struct UNameplateWidget_C_OnModRemoved__DelegateSignature_Params
{
	class UKSPlayerMod*                                bpp__Mod__pf;                                              // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UKSPlayerModInstance*                        bpp__ModInstance__pf;                                      // 0x0008(0x0008)  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// DelegateFunction NameplateWidget.NameplateWidget_C.OnModAdded__DelegateSignature
struct UNameplateWidget_C_OnModAdded__DelegateSignature_Params
{
	class UKSPlayerMod*                                bpp__Mod__pf;                                              // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UKSPlayerModInstance*                        bpp__ModInstance__pf;                                      // 0x0008(0x0008)  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// DelegateFunction NameplateWidget.NameplateWidget_C.OnLocalSettingSaved__DelegateSignature
struct UNameplateWidget_C_OnLocalSettingSaved__DelegateSignature_Params
{
	struct FName                                       bpp__SettingName__pf;                                      // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// DelegateFunction NameplateWidget.NameplateWidget_C.OnKSPlayerStateTeamChanged__DelegateSignature
struct UNameplateWidget_C_OnKSPlayerStateTeamChanged__DelegateSignature_Params
{
	class AKSPlayerState*                              bpp__KSPlayerState__pf;                                    // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// DelegateFunction NameplateWidget.NameplateWidget_C.OnKSPlayerStateNameChanged__DelegateSignature
struct UNameplateWidget_C_OnKSPlayerStateNameChanged__DelegateSignature_Params
{
	class AKSPlayerState*                              bpp__KSPlayerState__pf;                                    // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// DelegateFunction NameplateWidget.NameplateWidget_C.OnKillCamEnabled__DelegateSignature
struct UNameplateWidget_C_OnKillCamEnabled__DelegateSignature_Params
{
	bool                                               bpp__bEnabled__pf;                                         // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// DelegateFunction NameplateWidget.NameplateWidget_C.OnJobChanged__DelegateSignature
struct UNameplateWidget_C_OnJobChanged__DelegateSignature_Params
{
};

// DelegateFunction NameplateWidget.NameplateWidget_C.OnHealthChanged__DelegateSignature
struct UNameplateWidget_C_OnHealthChanged__DelegateSignature_Params
{
	class AKSCharacterBase*                            bpp__Character__pf;                                        // 0x0000(0x0008)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// DelegateFunction NameplateWidget.NameplateWidget_C.OnGameObjectiveChanged__DelegateSignature
struct UNameplateWidget_C_OnGameObjectiveChanged__DelegateSignature_Params
{
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
