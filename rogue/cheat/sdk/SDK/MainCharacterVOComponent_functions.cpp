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
//		Offset -> 0x024D5B40
//		Name   -> Function MainCharacterVOComponent.MainCharacterVOComponent_C.On Take Damage
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
//		class AActor*                                      DamagedActor                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		float                                              Damage                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		class UDamageType*                                 DamageType                                                 (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		class AController*                                 InstigatedBy                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		class AActor*                                      DamageCauser                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UMainCharacterVOComponent_C::On_Take_Damage(class AActor* DamagedActor, float Damage, class UDamageType* DamageType, class AController* InstigatedBy, class AActor* DamageCauser)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(30687);

	UMainCharacterVOComponent_C_On_Take_Damage_Params params {};
	params.DamagedActor = DamagedActor;
	params.Damage = Damage;
	params.DamageType = DamageType;
	params.InstigatedBy = InstigatedBy;
	params.DamageCauser = DamageCauser;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function MainCharacterVOComponent.MainCharacterVOComponent_C.EnemyBehind
//		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
//		class AActor*                                      EnemyActor                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		bool                                               Behind                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UMainCharacterVOComponent_C::EnemyBehind(class AActor* EnemyActor, bool* Behind)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(30686);

	UMainCharacterVOComponent_C_EnemyBehind_Params params {};
	params.EnemyActor = EnemyActor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Behind != nullptr)
		*Behind = params.Behind;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function MainCharacterVOComponent.MainCharacterVOComponent_C.BindToGameStateEvents
//		Flags  -> (Event, Protected, BlueprintEvent)
// Parameters:
//		class AKSGameState*                                GameState                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UMainCharacterVOComponent_C::BindToGameStateEvents(class AKSGameState* GameState)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(30685);

	UMainCharacterVOComponent_C_BindToGameStateEvents_Params params {};
	params.GameState = GameState;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function MainCharacterVOComponent.MainCharacterVOComponent_C.OnLastManStanding
//		Flags  -> (BlueprintCallable, BlueprintEvent)
// Parameters:
//		class AKSPlayerState*                              LastPlayer                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UMainCharacterVOComponent_C::OnLastManStanding(class AKSPlayerState* LastPlayer)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(30684);

	UMainCharacterVOComponent_C_OnLastManStanding_Params params {};
	params.LastPlayer = LastPlayer;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function MainCharacterVOComponent.MainCharacterVOComponent_C.OnWinnerSet
//		Flags  -> (BlueprintCallable, BlueprintEvent)
// Parameters:
//		int                                                TeamNumber                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UMainCharacterVOComponent_C::OnWinnerSet(int TeamNumber)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(30683);

	UMainCharacterVOComponent_C_OnWinnerSet_Params params {};
	params.TeamNumber = TeamNumber;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function MainCharacterVOComponent.MainCharacterVOComponent_C.OnRoundSetup
//		Flags  -> (HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
//		struct FRoundInitState                             RoundInitState                                             (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor)
void UMainCharacterVOComponent_C::OnRoundSetup(const struct FRoundInitState& RoundInitState)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(30682);

	UMainCharacterVOComponent_C_OnRoundSetup_Params params {};
	params.RoundInitState = RoundInitState;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function MainCharacterVOComponent.MainCharacterVOComponent_C.OnPhaseChange
//		Flags  -> (BlueprintCallable, BlueprintEvent)
// Parameters:
//		struct FMatchPhase                                 NewPhase                                                   (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
//		struct FMatchPhase                                 PreviousPhase                                              (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
void UMainCharacterVOComponent_C::OnPhaseChange(const struct FMatchPhase& NewPhase, const struct FMatchPhase& PreviousPhase)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(30681);

	UMainCharacterVOComponent_C_OnPhaseChange_Params params {};
	params.NewPhase = NewPhase;
	params.PreviousPhase = PreviousPhase;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function MainCharacterVOComponent.MainCharacterVOComponent_C.BindToPingManagerEvents
//		Flags  -> (Event, Protected, BlueprintEvent)
// Parameters:
//		class UKSPingManager*                              PingManager                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UMainCharacterVOComponent_C::BindToPingManagerEvents(class UKSPingManager* PingManager)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(30680);

	UMainCharacterVOComponent_C_BindToPingManagerEvents_Params params {};
	params.PingManager = PingManager;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function MainCharacterVOComponent.MainCharacterVOComponent_C.PingAdded
//		Flags  -> (HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
//		struct FPingInfo                                   PingInfo                                                   (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
void UMainCharacterVOComponent_C::PingAdded(const struct FPingInfo& PingInfo)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(30679);

	UMainCharacterVOComponent_C_PingAdded_Params params {};
	params.PingInfo = PingInfo;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function MainCharacterVOComponent.MainCharacterVOComponent_C.PingAcknowledged
//		Flags  -> (BlueprintCallable, BlueprintEvent)
// Parameters:
//		int                                                PingId                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		class AKSPlayerState*                              PingingPlayer                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		class AKSPlayerState*                              AcknowledgingPlayer                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UMainCharacterVOComponent_C::PingAcknowledged(int PingId, class AKSPlayerState* PingingPlayer, class AKSPlayerState* AcknowledgingPlayer)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(30678);

	UMainCharacterVOComponent_C_PingAcknowledged_Params params {};
	params.PingId = PingId;
	params.PingingPlayer = PingingPlayer;
	params.AcknowledgingPlayer = AcknowledgingPlayer;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function MainCharacterVOComponent.MainCharacterVOComponent_C.SentVoiceLineOnly
//		Flags  -> (BlueprintCallable, BlueprintEvent)
// Parameters:
//		Killstreak_EPingMessage                            PingMessage                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		class AKSPlayerState*                              SendingPlayer                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UMainCharacterVOComponent_C::SentVoiceLineOnly(Killstreak_EPingMessage PingMessage, class AKSPlayerState* SendingPlayer)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(30677);

	UMainCharacterVOComponent_C_SentVoiceLineOnly_Params params {};
	params.PingMessage = PingMessage;
	params.SendingPlayer = SendingPlayer;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function MainCharacterVOComponent.MainCharacterVOComponent_C.OnItemPickedUp
//		Flags  -> (BlueprintCallable, BlueprintEvent)
// Parameters:
//		class AKSCharacter*                                Character                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		class AKSItemDrop*                                 ItemDrop                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		class UKSItem*                                     Item                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UMainCharacterVOComponent_C::OnItemPickedUp(class AKSCharacter* Character, class AKSItemDrop* ItemDrop, class UKSItem* Item)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(30676);

	UMainCharacterVOComponent_C_OnItemPickedUp_Params params {};
	params.Character = Character;
	params.ItemDrop = ItemDrop;
	params.Item = Item;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function MainCharacterVOComponent.MainCharacterVOComponent_C.OnReviveCompleted
//		Flags  -> (BlueprintCallable, BlueprintEvent)
// Parameters:
//		class AKSCharacter*                                Reviver                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		class AKSCharacter*                                Revivee                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UMainCharacterVOComponent_C::OnReviveCompleted(class AKSCharacter* Reviver, class AKSCharacter* Revivee)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(30675);

	UMainCharacterVOComponent_C_OnReviveCompleted_Params params {};
	params.Reviver = Reviver;
	params.Revivee = Revivee;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function MainCharacterVOComponent.MainCharacterVOComponent_C.BindToCharacterEvents
//		Flags  -> (Event, Protected, BlueprintEvent)
// Parameters:
//		class AKSCharacter*                                Character                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UMainCharacterVOComponent_C::BindToCharacterEvents(class AKSCharacter* Character)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(30674);

	UMainCharacterVOComponent_C_BindToCharacterEvents_Params params {};
	params.Character = Character;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function MainCharacterVOComponent.MainCharacterVOComponent_C.OnInteractStart
//		Flags  -> (BlueprintCallable, BlueprintEvent)
// Parameters:
//		class AActor*                                      Target                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		float                                              Duration                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UMainCharacterVOComponent_C::OnInteractStart(class AActor* Target, float Duration)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(30673);

	UMainCharacterVOComponent_C_OnInteractStart_Params params {};
	params.Target = Target;
	params.Duration = Duration;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function MainCharacterVOComponent.MainCharacterVOComponent_C.OnLanded
//		Flags  -> (BlueprintCallable, BlueprintEvent)
// Parameters:
//		struct FVector                                     Velocity                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UMainCharacterVOComponent_C::OnLanded(const struct FVector& Velocity)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(30672);

	UMainCharacterVOComponent_C_OnLanded_Params params {};
	params.Velocity = Velocity;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function MainCharacterVOComponent.MainCharacterVOComponent_C.OnMantleChanged
//		Flags  -> (BlueprintCallable, BlueprintEvent)
// Parameters:
//		bool                                               IsMantling                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UMainCharacterVOComponent_C::OnMantleChanged(bool IsMantling)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(30671);

	UMainCharacterVOComponent_C_OnMantleChanged_Params params {};
	params.IsMantling = IsMantling;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function MainCharacterVOComponent.MainCharacterVOComponent_C.OnDOdgeRollChanged
//		Flags  -> (BlueprintCallable, BlueprintEvent)
// Parameters:
//		bool                                               IsDodgeRolling                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UMainCharacterVOComponent_C::OnDOdgeRollChanged(bool IsDodgeRolling)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(30670);

	UMainCharacterVOComponent_C_OnDOdgeRollChanged_Params params {};
	params.IsDodgeRolling = IsDodgeRolling;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function MainCharacterVOComponent.MainCharacterVOComponent_C.OnJumped
//		Flags  -> (BlueprintCallable, BlueprintEvent)
void UMainCharacterVOComponent_C::OnJumped()
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(30669);

	UMainCharacterVOComponent_C_OnJumped_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function MainCharacterVOComponent.MainCharacterVOComponent_C.OnCharacterFreeFallStarted
//		Flags  -> (BlueprintCallable, BlueprintEvent)
void UMainCharacterVOComponent_C::OnCharacterFreeFallStarted()
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(30668);

	UMainCharacterVOComponent_C_OnCharacterFreeFallStarted_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function MainCharacterVOComponent.MainCharacterVOComponent_C.OnWeaponInventoryChanged
//		Flags  -> (BlueprintCallable, BlueprintEvent)
void UMainCharacterVOComponent_C::OnWeaponInventoryChanged()
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(30667);

	UMainCharacterVOComponent_C_OnWeaponInventoryChanged_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function MainCharacterVOComponent.MainCharacterVOComponent_C.BuildWeaponStateChanged
//		Flags  -> (BlueprintCallable, BlueprintEvent)
// Parameters:
//		class AKSWeapon*                                   Weapon                                                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		Killstreak_EWeaponStateNew                         OldState                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		Killstreak_EWeaponStateNew                         NewState                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UMainCharacterVOComponent_C::BuildWeaponStateChanged(class AKSWeapon* Weapon, Killstreak_EWeaponStateNew OldState, Killstreak_EWeaponStateNew NewState)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(30666);

	UMainCharacterVOComponent_C_BuildWeaponStateChanged_Params params {};
	params.Weapon = Weapon;
	params.OldState = OldState;
	params.NewState = NewState;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function MainCharacterVOComponent.MainCharacterVOComponent_C.GadgetWeaponStateChanged
//		Flags  -> (BlueprintCallable, BlueprintEvent)
// Parameters:
//		class AKSWeapon*                                   Weapon                                                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		Killstreak_EWeaponStateNew                         OldState                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		Killstreak_EWeaponStateNew                         NewState                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UMainCharacterVOComponent_C::GadgetWeaponStateChanged(class AKSWeapon* Weapon, Killstreak_EWeaponStateNew OldState, Killstreak_EWeaponStateNew NewState)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(30665);

	UMainCharacterVOComponent_C_GadgetWeaponStateChanged_Params params {};
	params.Weapon = Weapon;
	params.OldState = OldState;
	params.NewState = NewState;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function MainCharacterVOComponent.MainCharacterVOComponent_C.ResetObjectiveVO
//		Flags  -> (BlueprintCallable, BlueprintEvent)
void UMainCharacterVOComponent_C::ResetObjectiveVO()
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(30664);

	UMainCharacterVOComponent_C_ResetObjectiveVO_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function MainCharacterVOComponent.MainCharacterVOComponent_C.OnStartReviveOther
//		Flags  -> (BlueprintCallable, BlueprintEvent)
// Parameters:
//		class AKSCharacter*                                Reviver                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		class AKSCharacter*                                Revivee                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		float                                              ReviveTime                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		bool                                               bRemote                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UMainCharacterVOComponent_C::OnStartReviveOther(class AKSCharacter* Reviver, class AKSCharacter* Revivee, float ReviveTime, bool bRemote)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(30663);

	UMainCharacterVOComponent_C_OnStartReviveOther_Params params {};
	params.Reviver = Reviver;
	params.Revivee = Revivee;
	params.ReviveTime = ReviveTime;
	params.bRemote = bRemote;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function MainCharacterVOComponent.MainCharacterVOComponent_C.AnnounceBombSpotted
//		Flags  -> (Event, Public, BlueprintEvent)
// Parameters:
//		bool                                               Armed                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UMainCharacterVOComponent_C::AnnounceBombSpotted(bool Armed)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(30662);

	UMainCharacterVOComponent_C_AnnounceBombSpotted_Params params {};
	params.Armed = Armed;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function MainCharacterVOComponent.MainCharacterVOComponent_C.OnDeathStateChanged
//		Flags  -> (BlueprintCallable, BlueprintEvent)
void UMainCharacterVOComponent_C::OnDeathStateChanged()
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(30661);

	UMainCharacterVOComponent_C_OnDeathStateChanged_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function MainCharacterVOComponent.MainCharacterVOComponent_C.OnSprintChanged
//		Flags  -> (BlueprintCallable, BlueprintEvent)
// Parameters:
//		bool                                               IsSprinting                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UMainCharacterVOComponent_C::OnSprintChanged(bool IsSprinting)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(30660);

	UMainCharacterVOComponent_C_OnSprintChanged_Params params {};
	params.IsSprinting = IsSprinting;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function MainCharacterVOComponent.MainCharacterVOComponent_C.FinalExhaleTimerSet
//		Flags  -> (BlueprintCallable, BlueprintEvent)
void UMainCharacterVOComponent_C::FinalExhaleTimerSet()
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(30659);

	UMainCharacterVOComponent_C_FinalExhaleTimerSet_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function MainCharacterVOComponent.MainCharacterVOComponent_C.DoOnceResetDefusing
//		Flags  -> (BlueprintCallable, BlueprintEvent)
void UMainCharacterVOComponent_C::DoOnceResetDefusing()
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(30658);

	UMainCharacterVOComponent_C_DoOnceResetDefusing_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function MainCharacterVOComponent.MainCharacterVOComponent_C.DoOnceResetInteractObj
//		Flags  -> (BlueprintCallable, BlueprintEvent)
void UMainCharacterVOComponent_C::DoOnceResetInteractObj()
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(30657);

	UMainCharacterVOComponent_C_DoOnceResetInteractObj_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function MainCharacterVOComponent.MainCharacterVOComponent_C.DoOnceResetPlanting
//		Flags  -> (BlueprintCallable, BlueprintEvent)
void UMainCharacterVOComponent_C::DoOnceResetPlanting()
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(30656);

	UMainCharacterVOComponent_C_DoOnceResetPlanting_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function MainCharacterVOComponent.MainCharacterVOComponent_C.ModFailedToActivate
//		Flags  -> (BlueprintCallable, BlueprintEvent)
// Parameters:
//		class UKSModInst_Activated*                        AttemptedMod                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		Killstreak_EKSAbilityUsageFailureType              AbilityFailureType                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UMainCharacterVOComponent_C::ModFailedToActivate(class UKSModInst_Activated* AttemptedMod, Killstreak_EKSAbilityUsageFailureType AbilityFailureType)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(30655);

	UMainCharacterVOComponent_C_ModFailedToActivate_Params params {};
	params.AttemptedMod = AttemptedMod;
	params.AbilityFailureType = AbilityFailureType;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function MainCharacterVOComponent.MainCharacterVOComponent_C.BindToPlayerStateEvents
//		Flags  -> (Event, Protected, BlueprintEvent)
// Parameters:
//		class AKSPlayerState*                              PlayerState                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UMainCharacterVOComponent_C::BindToPlayerStateEvents(class AKSPlayerState* PlayerState)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(30654);

	UMainCharacterVOComponent_C_BindToPlayerStateEvents_Params params {};
	params.PlayerState = PlayerState;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function MainCharacterVOComponent.MainCharacterVOComponent_C.BindToActivatableModEvents
//		Flags  -> (Event, Protected, BlueprintEvent)
// Parameters:
//		class UKSModInst_Activated*                        ActivatableMod                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UMainCharacterVOComponent_C::BindToActivatableModEvents(class UKSModInst_Activated* ActivatableMod)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(30653);

	UMainCharacterVOComponent_C_BindToActivatableModEvents_Params params {};
	params.ActivatableMod = ActivatableMod;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function MainCharacterVOComponent.MainCharacterVOComponent_C.BindToEvents
//		Flags  -> (Event, Protected, BlueprintEvent)
void UMainCharacterVOComponent_C::BindToEvents()
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(30652);

	UMainCharacterVOComponent_C_BindToEvents_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function MainCharacterVOComponent.MainCharacterVOComponent_C.BindToTeamStateEvents
//		Flags  -> (Event, Protected, BlueprintEvent)
// Parameters:
//		class AKSTeamState*                                TeamState                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UMainCharacterVOComponent_C::BindToTeamStateEvents(class AKSTeamState* TeamState)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(30651);

	UMainCharacterVOComponent_C_BindToTeamStateEvents_Params params {};
	params.TeamState = TeamState;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function MainCharacterVOComponent.MainCharacterVOComponent_C.BindToPlayerControllerEvents
//		Flags  -> (Event, Protected, BlueprintEvent)
// Parameters:
//		class AKSPlayerController*                         PlayerController                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UMainCharacterVOComponent_C::BindToPlayerControllerEvents(class AKSPlayerController* PlayerController)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(30650);

	UMainCharacterVOComponent_C_BindToPlayerControllerEvents_Params params {};
	params.PlayerController = PlayerController;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function MainCharacterVOComponent.MainCharacterVOComponent_C.OnJobChanged
//		Flags  -> (BlueprintCallable, BlueprintEvent)
void UMainCharacterVOComponent_C::OnJobChanged()
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(30649);

	UMainCharacterVOComponent_C_OnJobChanged_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function MainCharacterVOComponent.MainCharacterVOComponent_C.ShopItemChanged
//		Flags  -> (BlueprintCallable, BlueprintEvent)
// Parameters:
//		struct FShopItem                                   ShopItem                                                   (BlueprintVisible, BlueprintReadOnly, Parm)
void UMainCharacterVOComponent_C::ShopItemChanged(const struct FShopItem& ShopItem)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(30648);

	UMainCharacterVOComponent_C_ShopItemChanged_Params params {};
	params.ShopItem = ShopItem;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function MainCharacterVOComponent.MainCharacterVOComponent_C.OnPlayerDownedChanged
//		Flags  -> (BlueprintCallable, BlueprintEvent)
// Parameters:
//		class AKSPlayerState*                              PlayerState                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UMainCharacterVOComponent_C::OnPlayerDownedChanged(class AKSPlayerState* PlayerState)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(30647);

	UMainCharacterVOComponent_C_OnPlayerDownedChanged_Params params {};
	params.PlayerState = PlayerState;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function MainCharacterVOComponent.MainCharacterVOComponent_C.ModTriggered
//		Flags  -> (BlueprintCallable, BlueprintEvent)
void UMainCharacterVOComponent_C::ModTriggered()
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(30646);

	UMainCharacterVOComponent_C_ModTriggered_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function MainCharacterVOComponent.MainCharacterVOComponent_C.ModSetup
//		Flags  -> (BlueprintCallable, BlueprintEvent)
void UMainCharacterVOComponent_C::ModSetup()
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(30645);

	UMainCharacterVOComponent_C_ModSetup_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function MainCharacterVOComponent.MainCharacterVOComponent_C.ModActivated
//		Flags  -> (BlueprintCallable, BlueprintEvent)
// Parameters:
//		bool                                               bActive                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UMainCharacterVOComponent_C::ModActivated(bool bActive)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(30644);

	UMainCharacterVOComponent_C_ModActivated_Params params {};
	params.bActive = bActive;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function MainCharacterVOComponent.MainCharacterVOComponent_C.ExecuteUbergraph_MainCharacterVOComponent
//		Flags  -> (Final, HasDefaults)
// Parameters:
//		int                                                EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UMainCharacterVOComponent_C::ExecuteUbergraph_MainCharacterVOComponent(int EntryPoint)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(30643);

	UMainCharacterVOComponent_C_ExecuteUbergraph_MainCharacterVOComponent_Params params {};
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
