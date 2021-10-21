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

// Function MainCharacterVOComponent.MainCharacterVOComponent_C.On Take Damage
struct UMainCharacterVOComponent_C_On_Take_Damage_Params
{
	class AActor*                                      DamagedActor;                                              // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              Damage;                                                    // 0x0008(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UDamageType*                                 DamageType;                                                // 0x0010(0x0008)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AController*                                 InstigatedBy;                                              // 0x0018(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AActor*                                      DamageCauser;                                              // 0x0020(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function MainCharacterVOComponent.MainCharacterVOComponent_C.EnemyBehind
struct UMainCharacterVOComponent_C_EnemyBehind_Params
{
	class AActor*                                      EnemyActor;                                                // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               Behind;                                                    // 0x0008(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function MainCharacterVOComponent.MainCharacterVOComponent_C.BindToGameStateEvents
struct UMainCharacterVOComponent_C_BindToGameStateEvents_Params
{
	class AKSGameState*                                GameState;                                                 // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function MainCharacterVOComponent.MainCharacterVOComponent_C.OnLastManStanding
struct UMainCharacterVOComponent_C_OnLastManStanding_Params
{
	class AKSPlayerState*                              LastPlayer;                                                // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function MainCharacterVOComponent.MainCharacterVOComponent_C.OnWinnerSet
struct UMainCharacterVOComponent_C_OnWinnerSet_Params
{
	int                                                TeamNumber;                                                // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function MainCharacterVOComponent.MainCharacterVOComponent_C.OnRoundSetup
struct UMainCharacterVOComponent_C_OnRoundSetup_Params
{
	struct FRoundInitState                             RoundInitState;                                            // 0x0000(0x0010)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor)
};

// Function MainCharacterVOComponent.MainCharacterVOComponent_C.OnPhaseChange
struct UMainCharacterVOComponent_C_OnPhaseChange_Params
{
	struct FMatchPhase                                 NewPhase;                                                  // 0x0000(0x000C)  (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
	struct FMatchPhase                                 PreviousPhase;                                             // 0x000C(0x000C)  (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
};

// Function MainCharacterVOComponent.MainCharacterVOComponent_C.BindToPingManagerEvents
struct UMainCharacterVOComponent_C_BindToPingManagerEvents_Params
{
	class UKSPingManager*                              PingManager;                                               // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function MainCharacterVOComponent.MainCharacterVOComponent_C.PingAdded
struct UMainCharacterVOComponent_C_PingAdded_Params
{
	struct FPingInfo                                   PingInfo;                                                  // 0x0000(0x0050)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};

// Function MainCharacterVOComponent.MainCharacterVOComponent_C.PingAcknowledged
struct UMainCharacterVOComponent_C_PingAcknowledged_Params
{
	int                                                PingId;                                                    // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AKSPlayerState*                              PingingPlayer;                                             // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AKSPlayerState*                              AcknowledgingPlayer;                                       // 0x0010(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function MainCharacterVOComponent.MainCharacterVOComponent_C.SentVoiceLineOnly
struct UMainCharacterVOComponent_C_SentVoiceLineOnly_Params
{
	Killstreak_EPingMessage                            PingMessage;                                               // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AKSPlayerState*                              SendingPlayer;                                             // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function MainCharacterVOComponent.MainCharacterVOComponent_C.OnItemPickedUp
struct UMainCharacterVOComponent_C_OnItemPickedUp_Params
{
	class AKSCharacter*                                Character;                                                 // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AKSItemDrop*                                 ItemDrop;                                                  // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UKSItem*                                     Item;                                                      // 0x0010(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function MainCharacterVOComponent.MainCharacterVOComponent_C.OnReviveCompleted
struct UMainCharacterVOComponent_C_OnReviveCompleted_Params
{
	class AKSCharacter*                                Reviver;                                                   // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AKSCharacter*                                Revivee;                                                   // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function MainCharacterVOComponent.MainCharacterVOComponent_C.BindToCharacterEvents
struct UMainCharacterVOComponent_C_BindToCharacterEvents_Params
{
	class AKSCharacter*                                Character;                                                 // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function MainCharacterVOComponent.MainCharacterVOComponent_C.OnInteractStart
struct UMainCharacterVOComponent_C_OnInteractStart_Params
{
	class AActor*                                      Target;                                                    // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              Duration;                                                  // 0x0008(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function MainCharacterVOComponent.MainCharacterVOComponent_C.OnLanded
struct UMainCharacterVOComponent_C_OnLanded_Params
{
	struct FVector                                     Velocity;                                                  // 0x0000(0x000C)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function MainCharacterVOComponent.MainCharacterVOComponent_C.OnMantleChanged
struct UMainCharacterVOComponent_C_OnMantleChanged_Params
{
	bool                                               IsMantling;                                                // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function MainCharacterVOComponent.MainCharacterVOComponent_C.OnDOdgeRollChanged
struct UMainCharacterVOComponent_C_OnDOdgeRollChanged_Params
{
	bool                                               IsDodgeRolling;                                            // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function MainCharacterVOComponent.MainCharacterVOComponent_C.OnJumped
struct UMainCharacterVOComponent_C_OnJumped_Params
{
};

// Function MainCharacterVOComponent.MainCharacterVOComponent_C.OnCharacterFreeFallStarted
struct UMainCharacterVOComponent_C_OnCharacterFreeFallStarted_Params
{
};

// Function MainCharacterVOComponent.MainCharacterVOComponent_C.OnWeaponInventoryChanged
struct UMainCharacterVOComponent_C_OnWeaponInventoryChanged_Params
{
};

// Function MainCharacterVOComponent.MainCharacterVOComponent_C.BuildWeaponStateChanged
struct UMainCharacterVOComponent_C_BuildWeaponStateChanged_Params
{
	class AKSWeapon*                                   Weapon;                                                    // 0x0000(0x0008)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	Killstreak_EWeaponStateNew                         OldState;                                                  // 0x0008(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	Killstreak_EWeaponStateNew                         NewState;                                                  // 0x0009(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function MainCharacterVOComponent.MainCharacterVOComponent_C.GadgetWeaponStateChanged
struct UMainCharacterVOComponent_C_GadgetWeaponStateChanged_Params
{
	class AKSWeapon*                                   Weapon;                                                    // 0x0000(0x0008)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	Killstreak_EWeaponStateNew                         OldState;                                                  // 0x0008(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	Killstreak_EWeaponStateNew                         NewState;                                                  // 0x0009(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function MainCharacterVOComponent.MainCharacterVOComponent_C.ResetObjectiveVO
struct UMainCharacterVOComponent_C_ResetObjectiveVO_Params
{
};

// Function MainCharacterVOComponent.MainCharacterVOComponent_C.OnStartReviveOther
struct UMainCharacterVOComponent_C_OnStartReviveOther_Params
{
	class AKSCharacter*                                Reviver;                                                   // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AKSCharacter*                                Revivee;                                                   // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              ReviveTime;                                                // 0x0010(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               bRemote;                                                   // 0x0014(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function MainCharacterVOComponent.MainCharacterVOComponent_C.AnnounceBombSpotted
struct UMainCharacterVOComponent_C_AnnounceBombSpotted_Params
{
	bool                                               Armed;                                                     // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function MainCharacterVOComponent.MainCharacterVOComponent_C.OnDeathStateChanged
struct UMainCharacterVOComponent_C_OnDeathStateChanged_Params
{
};

// Function MainCharacterVOComponent.MainCharacterVOComponent_C.OnSprintChanged
struct UMainCharacterVOComponent_C_OnSprintChanged_Params
{
	bool                                               IsSprinting;                                               // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function MainCharacterVOComponent.MainCharacterVOComponent_C.FinalExhaleTimerSet
struct UMainCharacterVOComponent_C_FinalExhaleTimerSet_Params
{
};

// Function MainCharacterVOComponent.MainCharacterVOComponent_C.DoOnceResetDefusing
struct UMainCharacterVOComponent_C_DoOnceResetDefusing_Params
{
};

// Function MainCharacterVOComponent.MainCharacterVOComponent_C.DoOnceResetInteractObj
struct UMainCharacterVOComponent_C_DoOnceResetInteractObj_Params
{
};

// Function MainCharacterVOComponent.MainCharacterVOComponent_C.DoOnceResetPlanting
struct UMainCharacterVOComponent_C_DoOnceResetPlanting_Params
{
};

// Function MainCharacterVOComponent.MainCharacterVOComponent_C.ModFailedToActivate
struct UMainCharacterVOComponent_C_ModFailedToActivate_Params
{
	class UKSModInst_Activated*                        AttemptedMod;                                              // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	Killstreak_EKSAbilityUsageFailureType              AbilityFailureType;                                        // 0x0008(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function MainCharacterVOComponent.MainCharacterVOComponent_C.BindToPlayerStateEvents
struct UMainCharacterVOComponent_C_BindToPlayerStateEvents_Params
{
	class AKSPlayerState*                              PlayerState;                                               // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function MainCharacterVOComponent.MainCharacterVOComponent_C.BindToActivatableModEvents
struct UMainCharacterVOComponent_C_BindToActivatableModEvents_Params
{
	class UKSModInst_Activated*                        ActivatableMod;                                            // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function MainCharacterVOComponent.MainCharacterVOComponent_C.BindToEvents
struct UMainCharacterVOComponent_C_BindToEvents_Params
{
};

// Function MainCharacterVOComponent.MainCharacterVOComponent_C.BindToTeamStateEvents
struct UMainCharacterVOComponent_C_BindToTeamStateEvents_Params
{
	class AKSTeamState*                                TeamState;                                                 // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function MainCharacterVOComponent.MainCharacterVOComponent_C.BindToPlayerControllerEvents
struct UMainCharacterVOComponent_C_BindToPlayerControllerEvents_Params
{
	class AKSPlayerController*                         PlayerController;                                          // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function MainCharacterVOComponent.MainCharacterVOComponent_C.OnJobChanged
struct UMainCharacterVOComponent_C_OnJobChanged_Params
{
};

// Function MainCharacterVOComponent.MainCharacterVOComponent_C.ShopItemChanged
struct UMainCharacterVOComponent_C_ShopItemChanged_Params
{
	struct FShopItem                                   ShopItem;                                                  // 0x0000(0x0070)  (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function MainCharacterVOComponent.MainCharacterVOComponent_C.OnPlayerDownedChanged
struct UMainCharacterVOComponent_C_OnPlayerDownedChanged_Params
{
	class AKSPlayerState*                              PlayerState;                                               // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function MainCharacterVOComponent.MainCharacterVOComponent_C.ModTriggered
struct UMainCharacterVOComponent_C_ModTriggered_Params
{
};

// Function MainCharacterVOComponent.MainCharacterVOComponent_C.ModSetup
struct UMainCharacterVOComponent_C_ModSetup_Params
{
};

// Function MainCharacterVOComponent.MainCharacterVOComponent_C.ModActivated
struct UMainCharacterVOComponent_C_ModActivated_Params
{
	bool                                               bActive;                                                   // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function MainCharacterVOComponent.MainCharacterVOComponent_C.ExecuteUbergraph_MainCharacterVOComponent
struct UMainCharacterVOComponent_C_ExecuteUbergraph_MainCharacterVOComponent_Params
{
	int                                                EntryPoint;                                                // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
