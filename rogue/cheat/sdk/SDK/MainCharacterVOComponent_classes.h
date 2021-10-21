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
// Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass MainCharacterVOComponent.MainCharacterVOComponent_C
// 0x09C0 (FullSize[0x0B40] - InheritedSize[0x0180])
class UMainCharacterVOComponent_C : public UKSVOComponent
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x0180(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	struct FKSVoicelineEvent                           UnderFire;                                                 // 0x0188(0x0038) (Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor)
	struct FKSVoicelineEvent                           TakingDamage;                                              // 0x01C0(0x0038) (Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor)
	float                                              AngleThresholdForShotFromBehind;                           // 0x01F8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_BRP9[0x4];                                     // 0x01FC(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FKSVoicelineEvent                           ShotFromBehind;                                            // 0x0200(0x0038) (Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor)
	struct FKSVoicelineEvent                           AbilityOnCooldown;                                         // 0x0238(0x0038) (Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor)
	struct FKSVoicelineEvent                           PrimaryPickedUp;                                           // 0x0270(0x0038) (Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor)
	struct FKSVoicelineEvent                           GadgetPickedUp;                                            // 0x02A8(0x0038) (Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor)
	struct FKSVoicelineEvent                           MeleePickedUp;                                             // 0x02E0(0x0038) (Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor)
	struct FKSVoicelineEvent                           MedPackPickedUp;                                           // 0x0318(0x0038) (Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor)
	struct FKSVoicelineEvent                           Revived;                                                   // 0x0350(0x0038) (Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor)
	struct FKSVoicelineEvent                           RevivedOther;                                              // 0x0388(0x0038) (Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor)
	struct FKSVoicelineEvent                           RevivedOtherRemote;                                        // 0x03C0(0x0038) (Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor)
	struct FKSVoicelineEvent                           LastManStanding;                                           // 0x03F8(0x0038) (Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor)
	struct FKSVoicelineEvent                           Zipline;                                                   // 0x0430(0x0038) (Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor)
	struct FKSVoicelineEvent                           Upline;                                                    // 0x0468(0x0038) (Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor)
	struct FKSVoicelineEvent                           Landed;                                                    // 0x04A0(0x0038) (Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor)
	struct FKSVoicelineEvent                           Mantle;                                                    // 0x04D8(0x0038) (Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor)
	struct FKSVoicelineEvent                           Jumped;                                                    // 0x0510(0x0038) (Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor)
	struct FKSVoicelineEvent                           DodgeRoll;                                                 // 0x0548(0x0038) (Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor)
	struct FKSVoicelineEvent                           GetObjective;                                              // 0x0580(0x0038) (Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor)
	struct FKSVoicelineEvent                           Victory;                                                   // 0x05B8(0x0038) (Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor)
	struct FKSVoicelineEvent                           Skydive;                                                   // 0x05F0(0x0038) (Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor)
	struct FKSVoicelineEvent                           LethalGadget;                                              // 0x0628(0x0038) (Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor)
	struct FKSVoicelineEvent                           UtilityGadget;                                             // 0x0660(0x0038) (Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor)
	struct FKSVoicelineEvent                           UtilityDeployable;                                         // 0x0698(0x0038) (Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor)
	struct FKSVoicelineEvent                           LethalDeployable;                                          // 0x06D0(0x0038) (Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor)
	struct FKSVoicelineEvent                           InteractObjective;                                         // 0x0708(0x0038) (Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor)
	struct FKSVoicelineEvent                           Select;                                                    // 0x0740(0x0038) (Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor)
	struct FKSVoicelineEvent                           ShopPurchase;                                              // 0x0778(0x0038) (Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor)
	class UKSShopRuleComponent*                        ShopRuleComponent;                                         // 0x07B0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FKSVoicelineEvent                           Intro;                                                     // 0x07B8(0x0038) (Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor)
	struct FKSVoicelineEvent                           ReviveMe;                                                  // 0x07F0(0x0038) (Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor)
	struct FKSVoicelineEvent                           Acknowledged;                                              // 0x0828(0x0038) (Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor)
	struct FKSVoicelineEvent                           CancelThat;                                                // 0x0860(0x0038) (Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor)
	struct FKSVoicelineEvent                           SuddenDeath;                                               // 0x0898(0x0038) (Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor)
	TMap<Killstreak_EPingMessage, struct FKSVoicelineEvent> PingVOMap;                                                 // 0x08D0(0x0050) (Edit, BlueprintVisible, DisableEditOnInstance)
	struct FKSVoicelineEvent                           BombPickedUp;                                              // 0x0920(0x0038) (Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor)
	struct FKSVoicelineEvent                           BombPlant;                                                 // 0x0958(0x0038) (Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor)
	struct FKSVoicelineEvent                           BombSpottedArmed;                                          // 0x0990(0x0038) (Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor)
	struct FKSVoicelineEvent                           BombSpottedUnarmed;                                        // 0x09C8(0x0038) (Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor)
	struct FKSVoicelineEvent                           BombDefusing;                                              // 0x0A00(0x0038) (Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor)
	class AKSPlayerState*                              PlayerState;                                               // 0x0A38(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FKSVoicelineEvent                           SprintStart;                                               // 0x0A40(0x0038) (Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor)
	struct FKSVoicelineEvent                           SprintEnd;                                                 // 0x0A78(0x0038) (Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor)
	bool                                               SprintStarted;                                             // 0x0AB0(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_45Q3[0x7];                                     // 0x0AB1(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FKSVoicelineEvent                           SprintEndStop;                                             // 0x0AB8(0x0038) (Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor)
	bool                                               SprintPlaying;                                             // 0x0AF0(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_Z28U[0x3];                                     // 0x0AF1(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	float                                              SprintingTimer;                                            // 0x0AF4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               SprintTimerExhale;                                         // 0x0AF8(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_UDKJ[0x7];                                     // 0x0AF9(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FTimerHandle                                SprintTimerHandle;                                         // 0x0B00(0x0008) (Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	struct FKSVoicelineEvent                           Ouch;                                                      // 0x0B08(0x0038) (Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::GetObjectCasted<UClass>(30642);
		return ptr;
	}



	void On_Take_Damage(class AActor* DamagedActor, float Damage, class UDamageType* DamageType, class AController* InstigatedBy, class AActor* DamageCauser);
	void EnemyBehind(class AActor* EnemyActor, bool* Behind);
	void BindToGameStateEvents(class AKSGameState* GameState);
	void OnLastManStanding(class AKSPlayerState* LastPlayer);
	void OnWinnerSet(int TeamNumber);
	void OnRoundSetup(const struct FRoundInitState& RoundInitState);
	void OnPhaseChange(const struct FMatchPhase& NewPhase, const struct FMatchPhase& PreviousPhase);
	void BindToPingManagerEvents(class UKSPingManager* PingManager);
	void PingAdded(const struct FPingInfo& PingInfo);
	void PingAcknowledged(int PingId, class AKSPlayerState* PingingPlayer, class AKSPlayerState* AcknowledgingPlayer);
	void SentVoiceLineOnly(Killstreak_EPingMessage PingMessage, class AKSPlayerState* SendingPlayer);
	void OnItemPickedUp(class AKSCharacter* Character, class AKSItemDrop* ItemDrop, class UKSItem* Item);
	void OnReviveCompleted(class AKSCharacter* Reviver, class AKSCharacter* Revivee);
	void BindToCharacterEvents(class AKSCharacter* Character);
	void OnInteractStart(class AActor* Target, float Duration);
	void OnLanded(const struct FVector& Velocity);
	void OnMantleChanged(bool IsMantling);
	void OnDOdgeRollChanged(bool IsDodgeRolling);
	void OnJumped();
	void OnCharacterFreeFallStarted();
	void OnWeaponInventoryChanged();
	void BuildWeaponStateChanged(class AKSWeapon* Weapon, Killstreak_EWeaponStateNew OldState, Killstreak_EWeaponStateNew NewState);
	void GadgetWeaponStateChanged(class AKSWeapon* Weapon, Killstreak_EWeaponStateNew OldState, Killstreak_EWeaponStateNew NewState);
	void ResetObjectiveVO();
	void OnStartReviveOther(class AKSCharacter* Reviver, class AKSCharacter* Revivee, float ReviveTime, bool bRemote);
	void AnnounceBombSpotted(bool Armed);
	void OnDeathStateChanged();
	void OnSprintChanged(bool IsSprinting);
	void FinalExhaleTimerSet();
	void DoOnceResetDefusing();
	void DoOnceResetInteractObj();
	void DoOnceResetPlanting();
	void ModFailedToActivate(class UKSModInst_Activated* AttemptedMod, Killstreak_EKSAbilityUsageFailureType AbilityFailureType);
	void BindToPlayerStateEvents(class AKSPlayerState* PlayerState);
	void BindToActivatableModEvents(class UKSModInst_Activated* ActivatableMod);
	void BindToEvents();
	void BindToTeamStateEvents(class AKSTeamState* TeamState);
	void BindToPlayerControllerEvents(class AKSPlayerController* PlayerController);
	void OnJobChanged();
	void ShopItemChanged(const struct FShopItem& ShopItem);
	void OnPlayerDownedChanged(class AKSPlayerState* PlayerState);
	void ModTriggered();
	void ModSetup();
	void ModActivated(bool bActive);
	void ExecuteUbergraph_MainCharacterVOComponent(int EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
