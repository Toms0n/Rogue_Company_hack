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
// Enums
//---------------------------------------------------------------------------

// Enum Killstreak.EItemSourceType
enum class Killstreak_EItemSourceType : uint8_t
{
	EItemSourceType__Unknown       = 0,
	EItemSourceType__AbilityUse    = 1,
	EItemSourceType__Cheat         = 2,
	EItemSourceType__InitialInventory = 3,
	EItemSourceType__LobbyAnimation = 4,
	EItemSourceType__PickupInteraction = 5,
	EItemSourceType__Refund        = 6,
	EItemSourceType__RestoreInventory = 7,
	EItemSourceType__StorePurchase = 8,
	EItemSourceType__WeaponSwap    = 9,
	EItemSourceType__ServerTravel  = 10,
	EItemSourceType__EItemSourceType_MAX = 11,

};

// Enum Killstreak.EDropPickupConfig
enum class Killstreak_EDropPickupConfig : uint8_t
{
	EDropPickupConfig__AllPlayers  = 0,
	EDropPickupConfig__EnemiesOnly = 1,
	EDropPickupConfig__FriendliesOnly = 2,
	EDropPickupConfig__EDropPickupConfig_MAX = 3,

};

// Enum Killstreak.EKSCharacterAimMode
enum class Killstreak_EKSCharacterAimMode : uint8_t
{
	EKSCharacterAimMode__Default   = 0,
	EKSCharacterAimMode__TransitionToDefault = 1,
	EKSCharacterAimMode__Shoulder  = 2,
	EKSCharacterAimMode__TransitionToShoulder = 3,
	EKSCharacterAimMode__AimDownSights = 4,
	EKSCharacterAimMode__TransitionToAimDownSights = 5,
	EKSCharacterAimMode__Alternate = 6,
	EKSCharacterAimMode__TransitionToAlternate = 7,
	EKSCharacterAimMode__EKSCharacterAimMode_MAX = 8,

};

// Enum Killstreak.EKSEmotion
enum class Killstreak_EKSEmotion : uint8_t
{
	EKSEmotion__Neutral            = 0,
	EKSEmotion__Focused            = 1,
	EKSEmotion__Pain               = 2,
	EKSEmotion__Wounded            = 3,
	EKSEmotion__Dead               = 4,
	EKSEmotion__MAX                = 5,

};

// Enum Killstreak.EAmmoType
enum class Killstreak_EAmmoType : uint8_t
{
	EAmmoType__NINE_MM             = 0,
	EAmmoType__SEVEN               = 1,
	EAmmoType__FIVE                = 2,
	EAmmoType__TWELVE_G            = 3,
	EAmmoType__FORTY_FIVE          = 4,
	EAmmoType__THREE_HUND          = 5,
	EAmmoType__TWENTY_TWO          = 6,
	EAmmoType__FIFTY               = 7,
	EAmmoType__ABILITY             = 8,
	EAmmoType__NONE                = 9,
	EAmmoType__EAmmoType_MAX       = 10,

};

// Enum Killstreak.ECharacterBehaviorState
enum class Killstreak_ECharacterBehaviorState : uint8_t
{
	ECharacterBehaviorState__Combat = 0,
	ECharacterBehaviorState__Idle  = 1,
	ECharacterBehaviorState__Skydive = 2,
	ECharacterBehaviorState__ECharacterBehaviorState_MAX = 3,

};

// Enum Killstreak.EKSCamouflageLevel
enum class Killstreak_EKSCamouflageLevel : uint8_t
{
	EKSCamouflageLevel__Weak       = 0,
	EKSCamouflageLevel__Medium     = 1,
	EKSCamouflageLevel__Strong     = 2,
	EKSCamouflageLevel__Full       = 3,
	EKSCamouflageLevel__EKSCamouflageLevel_MAX = 4,

};

// Enum Killstreak.EKSAbilityUsageFailureType
enum class Killstreak_EKSAbilityUsageFailureType : uint8_t
{
	EKSAbilityUsageFailureType__Unknown = 0,
	EKSAbilityUsageFailureType__Dead = 1,
	EKSAbilityUsageFailureType__Downed = 2,
	EKSAbilityUsageFailureType__EMP = 3,
	EKSAbilityUsageFailureType__NoFireZone = 4,
	EKSAbilityUsageFailureType__AlreadyActivating = 5,
	EKSAbilityUsageFailureType__Driving = 6,
	EKSAbilityUsageFailureType__Stunned = 7,
	EKSAbilityUsageFailureType__BlockingMovement = 8,
	EKSAbilityUsageFailureType__HardLanding = 9,
	EKSAbilityUsageFailureType__OutOfBounds = 10,
	EKSAbilityUsageFailureType__Locked = 11,
	EKSAbilityUsageFailureType__AltLocked = 12,
	EKSAbilityUsageFailureType__NotEnoughCharge = 13,
	EKSAbilityUsageFailureType__NoBountyTarget = 14,
	EKSAbilityUsageFailureType__NoLinkTarget = 15,
	EKSAbilityUsageFailureType__AlreadyHasWeapon = 16,
	EKSAbilityUsageFailureType__WeaponBusy = 17,
	EKSAbilityUsageFailureType__RoundNotInProgress = 18,
	EKSAbilityUsageFailureType__EKSAbilityUsageFailureType_MAX = 19,

};

// Enum Killstreak.EKSItemUsageFailureType
enum class Killstreak_EKSItemUsageFailureType : uint8_t
{
	EKSItemUsageFailureType__Unknown = 0,
	EKSItemUsageFailureType__NotEnoughQuantity = 1,
	EKSItemUsageFailureType__BlockingAction = 2,
	EKSItemUsageFailureType__NoEffect = 3,
	EKSItemUsageFailureType__EMP   = 4,
	EKSItemUsageFailureType__EKSItemUsageFailureType_MAX = 5,

};

// Enum Killstreak.EShotgunHitResult
enum class Killstreak_EShotgunHitResult : uint8_t
{
	EShotgunHitResult__Miss        = 0,
	EShotgunHitResult__Hit         = 1,
	EShotgunHitResult__Headshot    = 2,
	EShotgunHitResult__EShotgunHitResult_MAX = 3,

};

// Enum Killstreak.EWeaponStateNew
enum class Killstreak_EWeaponStateNew : uint8_t
{
	EWeaponStateNew__Idle          = 0,
	EWeaponStateNew__Buildup       = 1,
	EWeaponStateNew__PreFire       = 2,
	EWeaponStateNew__PostFire      = 3,
	EWeaponStateNew__Cooldown      = 4,
	EWeaponStateNew__PreReload     = 5,
	EWeaponStateNew__PostReload    = 6,
	EWeaponStateNew__ReloadCooldown = 7,
	EWeaponStateNew__Retrieve      = 8,
	EWeaponStateNew__Holster       = 9,
	EWeaponStateNew__Inactive      = 10,
	EWeaponStateNew__NotValid      = 11,
	EWeaponStateNew__EWeaponStateNew_MAX = 12,

};

// Enum Killstreak.EShopItemType
enum class Killstreak_EShopItemType : uint8_t
{
	EShopItemType__None            = 0,
	EShopItemType__PrimaryOne      = 1,
	EShopItemType__PrimaryTwo      = 2,
	EShopItemType__SecondaryOne    = 3,
	EShopItemType__SecondaryTwo    = 4,
	EShopItemType__GadgetOne       = 5,
	EShopItemType__GadgetTwo       = 6,
	EShopItemType__Melee           = 7,
	EShopItemType__PerkOne         = 8,
	EShopItemType__PerkTwo         = 9,
	EShopItemType__PerkThree       = 10,
	EShopItemType__PerkFour        = 11,
	EShopItemType__PerkFive        = 12,
	EShopItemType__PerkSix         = 13,
	EShopItemType__GambitOne       = 14,
	EShopItemType__GambitTwo       = 15,
	EShopItemType__GambitThree     = 16,
	EShopItemType__GambitFour      = 17,
	EShopItemType__GambitFive      = 18,
	EShopItemType__GambitSix       = 19,
	EShopItemType__GlobalPerk1     = 20,
	EShopItemType__GlobalPerk2     = 21,
	EShopItemType__GlobalPerk3     = 22,
	EShopItemType__GlobalPerk4     = 23,
	EShopItemType__GlobalPerk5     = 24,
	EShopItemType__GlobalPerk6     = 25,
	EShopItemType__GlobalPerk7     = 26,
	EShopItemType__GlobalPerk8     = 27,
	EShopItemType__GlobalPerk9     = 28,
	EShopItemType__GlobalPerk10    = 29,
	EShopItemType__GlobalPerk11    = 30,
	EShopItemType__GlobalPerk12    = 31,
	EShopItemType__GlobalPerk13    = 32,
	EShopItemType__GlobalPerk14    = 33,
	EShopItemType__GlobalPerk15    = 34,
	EShopItemType__MAX             = 35,

};

// Enum Killstreak.EProjectileExplosionType
enum class Killstreak_EProjectileExplosionType : uint8_t
{
	EProjectileExplosionType__Impact = 0,
	EProjectileExplosionType__Fizzle = 1,
	EProjectileExplosionType__FuseExpired = 2,
	EProjectileExplosionType__EProjectileExplosionType_MAX = 3,

};

// Enum Killstreak.EModViewModeStateChangeReason
enum class Killstreak_EModViewModeStateChangeReason : uint8_t
{
	EModViewModeStateChangeReason__Activated = 0,
	EModViewModeStateChangeReason__SpectatorChange = 1,
	EModViewModeStateChangeReason__Timeout = 2,
	EModViewModeStateChangeReason__Death = 3,
	EModViewModeStateChangeReason__EModViewModeStateChangeReason_MAX = 4,

};

// Enum Killstreak.EModViewModeState
enum class Killstreak_EModViewModeState : uint8_t
{
	EModViewModeState__Off         = 0,
	EModViewModeState__OnButUnviewed = 1,
	EModViewModeState__OnAndViewed = 2,
	EModViewModeState__EModViewModeState_MAX = 3,

};

// Enum Killstreak.EHitLocationType
enum class Killstreak_EHitLocationType : uint8_t
{
	EHitLocationType__Body         = 0,
	EHitLocationType__Head         = 1,
	EHitLocationType__Limb         = 2,
	EHitLocationType__None         = 3,
	EHitLocationType__EHitLocationType_MAX = 4,

};

// Enum Killstreak.ETrackedActorType
enum class Killstreak_ETrackedActorType : uint8_t
{
	ETrackedActorType__Unknown     = 0,
	ETrackedActorType__ShieldWeapon = 1,
	ETrackedActorType__MagGloveTarget = 2,
	ETrackedActorType__CoopEscapePoint = 3,
	ETrackedActorType__BountyTarget = 4,
	ETrackedActorType__BombDrop    = 5,
	ETrackedActorType__CashDrop    = 6,
	ETrackedActorType__Projectile  = 7,
	ETrackedActorType__HackTablet  = 8,
	ETrackedActorType__ETrackedActorType_MAX = 9,

};

// Enum Killstreak.ELootSiteRarity
enum class Killstreak_ELootSiteRarity : uint8_t
{
	ELootSiteRarity__Personal      = 0,
	ELootSiteRarity__Normal        = 1,
	ELootSiteRarity__Uncommon      = 2,
	ELootSiteRarity__Epic          = 3,
	ELootSiteRarity__Rare          = 4,
	ELootSiteRarity__Legendary     = 5,
	ELootSiteRarity__NonWeapons    = 6,
	ELootSiteRarity__ChildSpawner  = 7,
	ELootSiteRarity__CarePackage   = 8,
	ELootSiteRarity__MedPack       = 9,
	ELootSiteRarity__StartingDrop  = 10,
	ELootSiteRarity__GameMode      = 11,
	ELootSiteRarity__PowerUp       = 12,
	ELootSiteRarity__ELootSiteRarity_MAX = 13,

};

// Enum Killstreak.EKSVoiceOverPriority
enum class Killstreak_EKSVoiceOverPriority : uint8_t
{
	EKSVoiceOverPriority__None     = 0,
	EKSVoiceOverPriority__Nonverbal = 1,
	EKSVoiceOverPriority__Flavor   = 2,
	EKSVoiceOverPriority__GameTeamState = 3,
	EKSVoiceOverPriority__CharacterInfo = 4,
	EKSVoiceOverPriority__Callout  = 5,
	EKSVoiceOverPriority__Objective = 6,
	EKSVoiceOverPriority__MatchStartEnd = 7,
	EKSVoiceOverPriority__EKSVoiceOverPriority_MAX = 8,

};

// Enum Killstreak.EKSVoicelineType
enum class Killstreak_EKSVoicelineType : uint8_t
{
	EKSVoicelineType__Standard     = 0,
	EKSVoicelineType__Quip         = 1,
	EKSVoicelineType__Communication = 2,
	EKSVoicelineType__EKSVoicelineType_MAX = 3,

};

// Enum Killstreak.EKSVoicelineAudience
enum class Killstreak_EKSVoicelineAudience : uint8_t
{
	EKSVoicelineAudience__Self     = 0,
	EKSVoicelineAudience__Nearby   = 1,
	EKSVoicelineAudience__NearbyFriendlies = 2,
	EKSVoicelineAudience__AllFriendlies = 3,
	EKSVoicelineAudience__Enemies  = 4,
	EKSVoicelineAudience__EKSVoicelineAudience_MAX = 5,

};

// Enum Killstreak.EAccoladeEventType
enum class Killstreak_EAccoladeEventType : uint8_t
{
	EAccoladeEventType__AccoladeEvent_Unknown = 0,
	EAccoladeEventType__AccoladeEvent_Elim = 1,
	EAccoladeEventType__AccoladeEvent_Downed = 2,
	EAccoladeEventType__AccoladeEvent_Revived = 3,
	EAccoladeEventType__AccoladeEvent_DownAssist = 4,
	EAccoladeEventType__AccoladeEvent_CombatEvent = 5,
	EAccoladeEventType__AccoladeEvent_MAX = 6,

};

// Enum Killstreak.EAccoladeCategory
enum class Killstreak_EAccoladeCategory : uint8_t
{
	EAccoladeCategory__AccoladeCategory_DownsElims = 0,
	EAccoladeCategory__AccoladeCategory_MultiKill = 1,
	EAccoladeCategory__AccoladeCategory_Support = 2,
	EAccoladeCategory__AccoladeCategory_MAX = 3,

};

// Enum Killstreak.EDisplayType
enum class Killstreak_EDisplayType : uint8_t
{
	EDisplayType__Mini             = 0,
	EDisplayType__Full             = 1,
	EDisplayType__Overlay          = 2,
	EDisplayType__EDisplayType_MAX = 3,

};

// Enum Killstreak.EJobUniquenessRule
enum class Killstreak_EJobUniquenessRule : uint8_t
{
	EJobUniquenessRule__DuplicatesAllowed = 0,
	EJobUniquenessRule__UniqueToTeam = 1,
	EJobUniquenessRule__UniversallyUnique = 2,
	EJobUniquenessRule__EJobUniquenessRule_MAX = 3,

};

// Enum Killstreak.EJobSelectionState
enum class Killstreak_EJobSelectionState : uint8_t
{
	EJobSelectionState__Available  = 0,
	EJobSelectionState__Unavailable = 1,
	EJobSelectionState__OtherSelected = 2,
	EJobSelectionState__Selected   = 3,
	EJobSelectionState__OtherLockedIn = 4,
	EJobSelectionState__LockedIn   = 5,
	EJobSelectionState__Banned     = 6,
	EJobSelectionState__EJobSelectionState_MAX = 7,

};

// Enum Killstreak.EKSJobSelectPreviewLoadState
enum class Killstreak_EKSJobSelectPreviewLoadState : uint8_t
{
	EKSJobSelectPreviewLoadState__NoPreview = 0,
	EKSJobSelectPreviewLoadState__PreviewActive = 1,
	EKSJobSelectPreviewLoadState__PreviewLoadingNoVisible = 2,
	EKSJobSelectPreviewLoadState__PreviewLoadingActiveVisible = 3,
	EKSJobSelectPreviewLoadState__EKSJobSelectPreviewLoadState_MAX = 4,

};

// Enum Killstreak.EVariableFireRateState
enum class Killstreak_EVariableFireRateState : uint8_t
{
	EVariableFireRateState__Static = 0,
	EVariableFireRateState__Charging = 1,
	EVariableFireRateState__Decaying = 2,
	EVariableFireRateState__EVariableFireRateState_MAX = 3,

};

// Enum Killstreak.ECombatState
enum class Killstreak_ECombatState : uint8_t
{
	ECombatState__Combat           = 0,
	ECombatState__Engaged          = 1,
	ECombatState__NonCombat        = 2,
	ECombatState__BuildUp          = 3,
	ECombatState__ECombatState_MAX = 4,

};

// Enum Killstreak.EKSRevealPriority
enum class Killstreak_EKSRevealPriority : uint8_t
{
	EKSRevealPriority__None        = 0,
	EKSRevealPriority__Lowest      = 1,
	EKSRevealPriority__VeryLow     = 2,
	EKSRevealPriority__Low         = 3,
	EKSRevealPriority__Medium      = 4,
	EKSRevealPriority__High        = 5,
	EKSRevealPriority__VeryHigh    = 6,
	EKSRevealPriority__Highest     = 7,
	EKSRevealPriority__EKSRevealPriority_MAX = 8,

};

// Enum Killstreak.EKSRevealSource
enum class Killstreak_EKSRevealSource : uint8_t
{
	EKSRevealSource__None          = 0,
	EKSRevealSource__AimedAt       = 1,
	EKSRevealSource__ModStandard   = 2,
	EKSRevealSource__ModPerk       = 3,
	EKSRevealSource__ModAbility    = 4,
	EKSRevealSource__Gadget        = 5,
	EKSRevealSource__KilledBy      = 6,
	EKSRevealSource__Objective     = 7,
	EKSRevealSource__FriendlyVisibility = 8,
	EKSRevealSource__EKSRevealSource_MAX = 9,

};

// Enum Killstreak.ETargetAudience
enum class Killstreak_ETargetAudience : uint8_t
{
	ETargetAudience__None          = 0,
	ETargetAudience__SelfOnly      = 1,
	ETargetAudience__Friendlies    = 2,
	ETargetAudience__FriendliesExcludingSelf = 3,
	ETargetAudience__Enemies       = 4,
	ETargetAudience__All           = 5,
	ETargetAudience__ETargetAudience_MAX = 6,

};

// Enum Killstreak.ECombatEventFriendlyFireType
enum class Killstreak_ECombatEventFriendlyFireType : uint8_t
{
	ECombatEventFriendlyFireType__Enemy = 0,
	ECombatEventFriendlyFireType__Friendly = 1,
	ECombatEventFriendlyFireType__ReverseFriendly = 2,
	ECombatEventFriendlyFireType__Self = 3,
	ECombatEventFriendlyFireType__ECombatEventFriendlyFireType_MAX = 4,

};

// Enum Killstreak.EFubarDisplayReason
enum class Killstreak_EFubarDisplayReason : uint8_t
{
	EFubarDisplayReason__NotFubar  = 0,
	EFubarDisplayReason__SystemFubar = 1,
	EFubarDisplayReason__AbsentPlayers = 2,
	EFubarDisplayReason__EFubarDisplayReason_MAX = 3,

};

// Enum Killstreak.EMercCosmeticSlot
enum class Killstreak_EMercCosmeticSlot : uint8_t
{
	EMercCosmeticSlot__EMOTE_SLOT  = 0,
	EMercCosmeticSlot__SKIN_BUNDLE_SLOT = 1,
	EMercCosmeticSlot__WINGSUIT_SLOT = 2,
	EMercCosmeticSlot__WEAPON_WRAP_SLOT = 3,
	EMercCosmeticSlot__QUIP_SLOT   = 4,
	EMercCosmeticSlot__COMMUNICATION_SLOT = 5,
	EMercCosmeticSlot__SPRAY_SLOT  = 6,
	EMercCosmeticSlot__WEAPON_CATEGORY_SLOT = 7,
	EMercCosmeticSlot__FAVORITE_WEAPON_SLOT = 8,
	EMercCosmeticSlot__EMercCosmeticSlot_MAX = 9,

};

// Enum Killstreak.EPingFailedType
enum class Killstreak_EPingFailedType : uint8_t
{
	EPingFailedType__None          = 0,
	EPingFailedType__Throttled     = 1,
	EPingFailedType__NoTarget      = 2,
	EPingFailedType__InvalidPingType = 3,
	EPingFailedType__EPingFailedType_MAX = 4,

};

// Enum Killstreak.EPingMessage
enum class Killstreak_EPingMessage : uint8_t
{
	EPingMessage__None             = 0,
	EPingMessage__GoHere           = 1,
	EPingMessage__EnemyHere        = 2,
	EPingMessage__DefendHere       = 3,
	EPingMessage__HoldPosition     = 4,
	EPingMessage__FallBack         = 5,
	EPingMessage__PushForward      = 6,
	EPingMessage__GroupUp          = 7,
	EPingMessage__HelpMe           = 8,
	EPingMessage__EnemiesMoving    = 9,
	EPingMessage__Understood       = 10,
	EPingMessage__AllClear         = 11,
	EPingMessage__CancelThat       = 12,
	EPingMessage__ReviveMe         = 13,
	EPingMessage__Task1            = 14,
	EPingMessage__Task2            = 15,
	EPingMessage__Task3            = 16,
	EPingMessage__Task4            = 17,
	EPingMessage__Task5            = 18,
	EPingMessage__WatchOut         = 19,
	EPingMessage__EPingMessage_MAX = 20,

};

// Enum Killstreak.EPingType
enum class Killstreak_EPingType : uint8_t
{
	EPingType__None                = 0,
	EPingType__PointAlly           = 1,
	EPingType__PointEnemy          = 2,
	EPingType__Self                = 3,
	EPingType__SelfEmergency       = 4,
	EPingType__Target              = 5,
	EPingType__Cancel              = 6,
	EPingType__Task                = 7,
	EPingType__NoPing              = 8,
	EPingType__EPingType_MAX       = 9,

};

// Enum Killstreak.ESplineBehaviourType
enum class Killstreak_ESplineBehaviourType : uint8_t
{
	ESplineBehaviourType__OneShot  = 0,
	ESplineBehaviourType__OneShot_Reverse = 1,
	ESplineBehaviourType__Loop_Reset = 2,
	ESplineBehaviourType__PingPong = 3,
	ESplineBehaviourType__ESplineBehaviourType_MAX = 4,

};

// Enum Killstreak.ETeamAlignment
enum class Killstreak_ETeamAlignment : uint8_t
{
	ETeamAlignment__TMAL_Neutral   = 0,
	ETeamAlignment__TMAL_Enemy     = 1,
	ETeamAlignment__TMAL_Friendly  = 2,
	ETeamAlignment__TMAL_MAX       = 3,

};

// Enum Killstreak.EAnnouncementType
enum class Killstreak_EAnnouncementType : uint8_t
{
	EAnnouncementType__ANMT_Uknown = 0,
	EAnnouncementType__ANMT_ObjectiveMilestone = 1,
	EAnnouncementType__ANMT_PlayersLeft = 2,
	EAnnouncementType__ANMT_LastPlayerStanding = 3,
	EAnnouncementType__ANMT_RoyalePhase = 4,
	EAnnouncementType__ANMT_MAX    = 5,

};

// Enum Killstreak.EGameResult
enum class Killstreak_EGameResult : uint8_t
{
	EGameResult__Victory           = 0,
	EGameResult__Defeat            = 1,
	EGameResult__Draw              = 2,
	EGameResult__EGameResult_MAX   = 3,

};

// Enum Killstreak.EJobSelectionTaskType
enum class Killstreak_EJobSelectionTaskType : uint8_t
{
	EJobSelectionTaskType__PickAndLock = 0,
	EJobSelectionTaskType__Pick    = 1,
	EJobSelectionTaskType__Lock    = 2,
	EJobSelectionTaskType__Ban     = 3,
	EJobSelectionTaskType__Block   = 4,
	EJobSelectionTaskType__EJobSelectionTaskType_MAX = 5,

};

// Enum Killstreak.EKSInteractionResult
enum class Killstreak_EKSInteractionResult : uint8_t
{
	EKSInteractionResult__None     = 0,
	EKSInteractionResult__Success  = 1,
	EKSInteractionResult__Interrupted = 2,
	EKSInteractionResult__Failed   = 3,
	EKSInteractionResult__EKSInteractionResult_MAX = 4,

};

// Enum Killstreak.EKSReviveDroneAbilityState
enum class Killstreak_EKSReviveDroneAbilityState : uint8_t
{
	EKSReviveDroneAbilityState__Unavailable = 0,
	EKSReviveDroneAbilityState__Available = 1,
	EKSReviveDroneAbilityState__Deployed = 2,
	EKSReviveDroneAbilityState__Reviving = 3,
	EKSReviveDroneAbilityState__Success = 4,
	EKSReviveDroneAbilityState__Refunded = 5,
	EKSReviveDroneAbilityState__Destroyed = 6,
	EKSReviveDroneAbilityState__EKSReviveDroneAbilityState_MAX = 7,

};

// Enum Killstreak.EKSPingType
enum class Killstreak_EKSPingType : uint8_t
{
	EKSPingType__PING_DEFAULT      = 0,
	EKSPingType__PING_RADAR        = 1,
	EKSPingType__PING_INTEL        = 2,
	EKSPingType__PING_TRACKER      = 3,
	EKSPingType__PING_BOMB_HOLDER  = 4,
	EKSPingType__PING_MAX          = 5,

};

// Enum Killstreak.ESurfaceTargetErrorReason
enum class Killstreak_ESurfaceTargetErrorReason : uint8_t
{
	ESurfaceTargetErrorReason__None = 0,
	ESurfaceTargetErrorReason__TooFar = 1,
	ESurfaceTargetErrorReason__TooHigh = 2,
	ESurfaceTargetErrorReason__NoRoomAtOrigin = 3,
	ESurfaceTargetErrorReason__InvalidSurface = 4,
	ESurfaceTargetErrorReason__TooClose = 5,
	ESurfaceTargetErrorReason__AimBlocked = 6,
	ESurfaceTargetErrorReason__ESurfaceTargetErrorReason_MAX = 7,

};

// Enum Killstreak.EAimDataMode
enum class Killstreak_EAimDataMode : uint8_t
{
	EAimDataMode__NoEndTrace       = 0,
	EAimDataMode__EndTraceFromStartTrace = 1,
	EAimDataMode__EndTraceFromViewPoint = 2,
	EAimDataMode__Shotgun          = 3,
	EAimDataMode__EAimDataMode_MAX = 4,

};

// Enum Killstreak.EKSAcquisitionType
enum class Killstreak_EKSAcquisitionType : uint8_t
{
	EKSAcquisitionType__None       = 0,
	EKSAcquisitionType__Voucher    = 1,
	EKSAcquisitionType__BattlePass = 2,
	EKSAcquisitionType__ActiveBoost = 3,
	EKSAcquisitionType__EventGrandPrize = 4,
	EKSAcquisitionType__MAX        = 5,

};

// Enum Killstreak.EKSBattlePassProgressionActivityType
enum class Killstreak_EKSBattlePassProgressionActivityType : uint8_t
{
	EKSBattlePassProgressionActivityType__None = 0,
	EKSBattlePassProgressionActivityType__MiniBattlePass1 = 1,
	EKSBattlePassProgressionActivityType__BattlePass1 = 2,
	EKSBattlePassProgressionActivityType__BattlePass2 = 3,
	EKSBattlePassProgressionActivityType__BattlePass3 = 4,
	EKSBattlePassProgressionActivityType__MAX = 5,

};

// Enum Killstreak.EKSActivityTimeQueryType
enum class Killstreak_EKSActivityTimeQueryType : uint8_t
{
	EKSActivityTimeQueryType__All  = 0,
	EKSActivityTimeQueryType__OnlyFinished = 1,
	EKSActivityTimeQueryType__OnlyUnfinished = 2,
	EKSActivityTimeQueryType__EKSActivityTimeQueryType_MAX = 3,

};

// Enum Killstreak.EKSActivityManagerSetupPhase
enum class Killstreak_EKSActivityManagerSetupPhase : uint8_t
{
	EKSActivityManagerSetupPhase__None = 0,
	EKSActivityManagerSetupPhase__InitialAssetScan = 1,
	EKSActivityManagerSetupPhase__RequestStoreVendors = 2,
	EKSActivityManagerSetupPhase__RequestXpTables = 3,
	EKSActivityManagerSetupPhase__LoadActivities = 4,
	EKSActivityManagerSetupPhase__WaitForSelectionPhaseFinished = 5,
	EKSActivityManagerSetupPhase__AttemptInitialActivityCreation = 6,
	EKSActivityManagerSetupPhase__Done = 7,
	EKSActivityManagerSetupPhase__EKSActivityManagerSetupPhase_MAX = 8,

};

// Enum Killstreak.EKSActivityInstanceQueryType
enum class Killstreak_EKSActivityInstanceQueryType : uint8_t
{
	EKSActivityInstanceQueryType__LowestProgress = 0,
	EKSActivityInstanceQueryType__HighestProgress = 1,
	EKSActivityInstanceQueryType__LowestTier = 2,
	EKSActivityInstanceQueryType__HighestTier = 3,
	EKSActivityInstanceQueryType__EKSActivityInstanceQueryType_MAX = 4,

};

// Enum Killstreak.EKSActivityClientNotifyFrequency
enum class Killstreak_EKSActivityClientNotifyFrequency : uint8_t
{
	EKSActivityClientNotifyFrequency__None = 0,
	EKSActivityClientNotifyFrequency__OnProgressCompleted = 1,
	EKSActivityClientNotifyFrequency__OnProgressTierReached = 2,
	EKSActivityClientNotifyFrequency__OnProgressIncremented = 3,
	EKSActivityClientNotifyFrequency__EKSActivityClientNotifyFrequency_MAX = 4,

};

// Enum Killstreak.EKSActivityProgressDisplayType
enum class Killstreak_EKSActivityProgressDisplayType : uint8_t
{
	EKSActivityProgressDisplayType__Default = 0,
	EKSActivityProgressDisplayType__RawProgress = 1,
	EKSActivityProgressDisplayType__PercentToNextTier = 2,
	EKSActivityProgressDisplayType__PercentToMaxTier = 3,
	EKSActivityProgressDisplayType__MinutesAsDuration = 4,
	EKSActivityProgressDisplayType__CurrentTier = 5,
	EKSActivityProgressDisplayType__None = 6,
	EKSActivityProgressDisplayType__EKSActivityProgressDisplayType_MAX = 7,

};

// Enum Killstreak.EReviveDroneFlightPath
enum class Killstreak_EReviveDroneFlightPath : uint8_t
{
	EReviveDroneFlightPath__Drop   = 0,
	EReviveDroneFlightPath__Left   = 1,
	EReviveDroneFlightPath__Right  = 2,
	EReviveDroneFlightPath__EReviveDroneFlightPath_MAX = 3,

};

// Enum Killstreak.EReviveDroneState
enum class Killstreak_EReviveDroneState : uint8_t
{
	EReviveDroneState__Release     = 0,
	EReviveDroneState__Transit     = 1,
	EReviveDroneState__Arrival     = 2,
	EReviveDroneState__Hover       = 3,
	EReviveDroneState__Leave       = 4,
	EReviveDroneState__EReviveDroneState_MAX = 5,

};

// Enum Killstreak.EAgentRefundMethod
enum class Killstreak_EAgentRefundMethod : uint8_t
{
	EAgentRefundMethod__GiveWeaponAsset = 0,
	EAgentRefundMethod__BroadcastDelegate = 1,
	EAgentRefundMethod__EAgentRefundMethod_MAX = 2,

};

// Enum Killstreak.EKSAimAssistInputFlag
enum class Killstreak_EKSAimAssistInputFlag : uint8_t
{
	EKSAimAssistInputFlag__GamepadOnly = 0,
	EKSAimAssistInputFlag__GamepadAndTouch = 1,
	EKSAimAssistInputFlag__AllInputModes = 2,
	EKSAimAssistInputFlag__EKSAimAssistInputFlag_MAX = 3,

};

// Enum Killstreak.EKSAimAssistActivationType
enum class Killstreak_EKSAimAssistActivationType : uint8_t
{
	EKSAimAssistActivationType__AIMASSIST_DEFAULT = 0,
	EKSAimAssistActivationType__AIMASSIST_ALWAYSON = 1,
	EKSAimAssistActivationType__AIMASSIST_ALWAYSOFF = 2,
	EKSAimAssistActivationType__AIMASSIST_MAX = 3,

};

// Enum Killstreak.EKSAnalogStickType
enum class Killstreak_EKSAnalogStickType : uint8_t
{
	EKSAnalogStickType__Unknown    = 0,
	EKSAnalogStickType__Left       = 1,
	EKSAnalogStickType__Right      = 2,
	EKSAnalogStickType__EKSAnalogStickType_MAX = 3,

};

// Enum Killstreak.EReactiveResetTrigger
enum class Killstreak_EReactiveResetTrigger : uint8_t
{
	EReactiveResetTrigger__IdleCooldown = 0,
	EReactiveResetTrigger__WeaponReload = 1,
	EReactiveResetTrigger__WeaponHolster = 2,
	EReactiveResetTrigger__WeaponInactive = 3,
	EReactiveResetTrigger__CharacterDamaged = 4,
	EReactiveResetTrigger__CharacterDowned = 5,
	EReactiveResetTrigger__CharacterKilled = 6,
	EReactiveResetTrigger__EReactiveResetTrigger_MAX = 7,

};

// Enum Killstreak.EReactiveTrigger
enum class Killstreak_EReactiveTrigger : uint8_t
{
	EReactiveTrigger__WeaponFire   = 0,
	EReactiveTrigger__TargetDamagedAnyWeapon = 1,
	EReactiveTrigger__TargetDownedAnyWeapon = 2,
	EReactiveTrigger__TargetKilledAnyWeapon = 3,
	EReactiveTrigger__TargetDamagedThisWeapon = 4,
	EReactiveTrigger__TargetDownedThisWeapon = 5,
	EReactiveTrigger__TargetKilledThisWeapon = 6,
	EReactiveTrigger__DamageWithinTimePeriodGoalMet = 7,
	EReactiveTrigger__MultiDownGoalMet = 8,
	EReactiveTrigger__DemoMode     = 9,
	EReactiveTrigger__EReactiveTrigger_MAX = 10,

};

// Enum Killstreak.ECosmeticPersistentDataCache
enum class Killstreak_ECosmeticPersistentDataCache : uint8_t
{
	ECosmeticPersistentDataCache__DataCacheA = 0,
	ECosmeticPersistentDataCache__DataCacheB = 1,
	ECosmeticPersistentDataCache__DataCacheC = 2,
	ECosmeticPersistentDataCache__ECosmeticPersistentDataCache_MAX = 3,

};

// Enum Killstreak.EGameplayAudioEvent
enum class Killstreak_EGameplayAudioEvent : uint8_t
{
	EGameplayAudioEvent__Unknown   = 0,
	EGameplayAudioEvent__GameStarted = 1,
	EGameplayAudioEvent__LoggedIn  = 2,
	EGameplayAudioEvent__QueueingStarted = 3,
	EGameplayAudioEvent__QueueingCanceled = 4,
	EGameplayAudioEvent__MatchFound = 5,
	EGameplayAudioEvent__LoadingScreenStarted = 6,
	EGameplayAudioEvent__EndOfMatchLobbyStarted = 7,
	EGameplayAudioEvent__EndOfMatchLobbyEnded = 8,
	EGameplayAudioEvent__EndOfMatchLobbySkipped = 9,
	EGameplayAudioEvent__EnteredMatch = 10,
	EGameplayAudioEvent__BanStarted = 11,
	EGameplayAudioEvent__BanEndedEarly = 12,
	EGameplayAudioEvent__RogueSelectionStarted = 13,
	EGameplayAudioEvent__RogueSelectionEnded = 14,
	EGameplayAudioEvent__RogueSelectionFadeOut = 15,
	EGameplayAudioEvent__TeamCinematicStarted = 16,
	EGameplayAudioEvent__EstablishingShotStarted = 17,
	EGameplayAudioEvent__HoldingPenStarted = 18,
	EGameplayAudioEvent__DropshipDoorOpened = 19,
	EGameplayAudioEvent__SkydiveStarted = 20,
	EGameplayAudioEvent__SkydiveEnded = 21,
	EGameplayAudioEvent__ObjectiveArmed = 22,
	EGameplayAudioEvent__ObjectiveTime_30SecondsLeft = 23,
	EGameplayAudioEvent__ObjectiveCaptured = 24,
	EGameplayAudioEvent__LastManStanding = 25,
	EGameplayAudioEvent__SuddenDeath = 26,
	EGameplayAudioEvent__KillcamStarted = 27,
	EGameplayAudioEvent__RoundReset = 28,
	EGameplayAudioEvent__RoundWon  = 29,
	EGameplayAudioEvent__RoundLost = 30,
	EGameplayAudioEvent__MatchWon  = 31,
	EGameplayAudioEvent__MatchLost = 32,
	EGameplayAudioEvent__ReturnToLobby = 33,
	EGameplayAudioEvent__Max       = 34,

};

// Enum Killstreak.EKSItemBattlePassSource
enum class Killstreak_EKSItemBattlePassSource : uint8_t
{
	EKSItemBattlePassSource__None  = 0,
	EKSItemBattlePassSource__InstantUnlock = 1,
	EKSItemBattlePassSource__FreeTrackUnlock = 2,
	EKSItemBattlePassSource__PremiumTrackUnlock = 3,
	EKSItemBattlePassSource__MAX   = 4,

};

// Enum Killstreak.EPlayerBehaviorChangeReact
enum class Killstreak_EPlayerBehaviorChangeReact : uint8_t
{
	EPlayerBehaviorChangeReact__SkipReact = 0,
	EPlayerBehaviorChangeReact__SendNewOnly = 1,
	EPlayerBehaviorChangeReact__SendFullSetIfChanged = 2,
	EPlayerBehaviorChangeReact__SendFullSetRegardless = 3,
	EPlayerBehaviorChangeReact__EPlayerBehaviorChangeReact_MAX = 4,

};

// Enum Killstreak.EBoostDurationCategory
enum class Killstreak_EBoostDurationCategory : uint8_t
{
	EBoostDurationCategory__Minutes15 = 0,
	EBoostDurationCategory__Minutes30 = 1,
	EBoostDurationCategory__Minutes45 = 2,
	EBoostDurationCategory__Hours1 = 3,
	EBoostDurationCategory__Hours2 = 4,
	EBoostDurationCategory__Hours4 = 5,
	EBoostDurationCategory__Hours8 = 6,
	EBoostDurationCategory__EBoostDurationCategory_MAX = 7,

};

// Enum Killstreak.EBoostCategory
enum class Killstreak_EBoostCategory : uint8_t
{
	EBoostCategory__GlobalAccount  = 0,
	EBoostCategory__EBoostCategory_MAX = 1,

};

// Enum Killstreak.EAbilityExecutionType
enum class Killstreak_EAbilityExecutionType : uint8_t
{
	EAbilityExecutionType__InstantActivate = 0,
	EAbilityExecutionType__RandomActivate = 1,
	EAbilityExecutionType__AimFireActivate = 2,
	EAbilityExecutionType__IngressPointActivate = 3,
	EAbilityExecutionType__ThrowLikeGrenade = 4,
	EAbilityExecutionType__UniqueActivation = 5,
	EAbilityExecutionType__EAbilityExecutionType_MAX = 6,

};

// Enum Killstreak.EActorFocalPoint
enum class Killstreak_EActorFocalPoint : uint8_t
{
	EActorFocalPoint__ActorFocalPoint_None = 0,
	EActorFocalPoint__ActorFocalPoint_Head = 1,
	EActorFocalPoint__ActorFocalPoint_Body = 2,
	EActorFocalPoint__ActorFocalPoint_LeftShoulder = 3,
	EActorFocalPoint__ActorFocalPoint_RightShoulder = 4,
	EActorFocalPoint__ActorFocalPoint_MAX = 5,

};

// Enum Killstreak.EKSBuildInteractionType
enum class Killstreak_EKSBuildInteractionType : uint8_t
{
	EKSBuildInteractionType__Reclaim = 0,
	EKSBuildInteractionType__Custom = 1,
	EKSBuildInteractionType__None  = 2,
	EKSBuildInteractionType__EKSBuildInteractionType_MAX = 3,

};

// Enum Killstreak.EKSArmVisibilityType
enum class Killstreak_EKSArmVisibilityType : uint8_t
{
	EKSArmVisibilityType__HideNothing = 0,
	EKSArmVisibilityType__ArmAndWeapon = 1,
	EKSArmVisibilityType__WeaponOnly = 2,
	EKSArmVisibilityType__EKSArmVisibilityType_MAX = 3,

};

// Enum Killstreak.EKSPlayerHand
enum class Killstreak_EKSPlayerHand : uint8_t
{
	EKSPlayerHand__LeftHand        = 0,
	EKSPlayerHand__RightHand       = 1,
	EKSPlayerHand__EKSPlayerHand_MAX = 2,

};

// Enum Killstreak.EKSMaterialHideType
enum class Killstreak_EKSMaterialHideType : uint8_t
{
	EKSMaterialHideType__CastsShadowWhenHidden = 0,
	EKSMaterialHideType__DoesNotCastShadowWhenHidden = 1,
	EKSMaterialHideType__EKSMaterialHideType_MAX = 2,

};

// Enum Killstreak.EKSVehicleState
enum class Killstreak_EKSVehicleState : uint8_t
{
	EKSVehicleState__Outside       = 0,
	EKSVehicleState__Entering      = 1,
	EKSVehicleState__Driver        = 2,
	EKSVehicleState__Passenger     = 3,
	EKSVehicleState__Exiting       = 4,
	EKSVehicleState__EKSVehicleState_MAX = 5,

};

// Enum Killstreak.EKSQualitySwitch
enum class Killstreak_EKSQualitySwitch : uint8_t
{
	EKSQualitySwitch__LocomotionCached = 0,
	EKSQualitySwitch__SecondLocomotionCached = 1,
	EKSQualitySwitch__PreAimArray  = 2,
	EKSQualitySwitch__PostWingSuit = 3,
	EKSQualitySwitch__Finalized3p  = 4,
	EKSQualitySwitch__PreFacialAnimation = 5,
	EKSQualitySwitch__PostFacialAnimation = 6,
	EKSQualitySwitch__PrePowSlide_SklController = 7,
	EKSQualitySwitch__PreHitReactions = 8,
	EKSQualitySwitch__PostFootIK   = 9,
	EKSQualitySwitch__PostZiplinePullyLocks = 10,
	EKSQualitySwitch__PostZiplineSkeletalControllers = 11,
	EKSQualitySwitch__PreRecoil    = 12,
	EKSQualitySwitch__PostRecoil   = 13,
	EKSQualitySwitch__PreCounterRotate = 14,
	EKSQualitySwitch__SkeletalControllersPostIK = 15,
	EKSQualitySwitch__PreVaulting_SKLController = 16,
	EKSQualitySwitch__PostVaulting_SKLController = 17,
	EKSQualitySwitch__EKSQualitySwitch_MAX = 18,

};

// Enum Killstreak.EKSTurnInPlaceAnimationVariant
enum class Killstreak_EKSTurnInPlaceAnimationVariant : uint8_t
{
	EKSTurnInPlaceAnimationVariant__Left90 = 0,
	EKSTurnInPlaceAnimationVariant__Left180 = 1,
	EKSTurnInPlaceAnimationVariant__Right90 = 2,
	EKSTurnInPlaceAnimationVariant__Right180 = 3,
	EKSTurnInPlaceAnimationVariant__EKSTurnInPlaceAnimationVariant_MAX = 4,

};

// Enum Killstreak.EKSLocomotionState
enum class Killstreak_EKSLocomotionState : uint8_t
{
	EKSLocomotionState__Idle       = 0,
	EKSLocomotionState__InMotion   = 1,
	EKSLocomotionState__Stopping   = 2,
	EKSLocomotionState__Pivoting   = 3,
	EKSLocomotionState__EKSLocomotionState_MAX = 4,

};

// Enum Killstreak.EKSQueuedMovement
enum class Killstreak_EKSQueuedMovement : uint8_t
{
	EKSQueuedMovement__Jump        = 0,
	EKSQueuedMovement__DodgeRoll   = 1,
	EKSQueuedMovement__None        = 2,
	EKSQueuedMovement__EKSQueuedMovement_MAX = 3,

};

// Enum Killstreak.EKSDeathState
enum class Killstreak_EKSDeathState : uint8_t
{
	EKSDeathState__NotDead         = 0,
	EKSDeathState__NormalDeath     = 1,
	EKSDeathState__EKSDeathState_MAX = 2,

};

// Enum Killstreak.EKSCinematicCharacterType
enum class Killstreak_EKSCinematicCharacterType : uint8_t
{
	EKSCinematicCharacterType__Cinematic = 0,
	EKSCinematicCharacterType__JobSelection = 1,
	EKSCinematicCharacterType__EKSCinematicCharacterType_MAX = 2,

};

// Enum Killstreak.EFlashBangIntensity
enum class Killstreak_EFlashBangIntensity : uint8_t
{
	EFlashBangIntensity__Min       = 0,
	EFlashBangIntensity__Half      = 1,
	EFlashBangIntensity__Max       = 2,

};

// Enum Killstreak.EKSEventChallengesDisplayState
enum class Killstreak_EKSEventChallengesDisplayState : uint8_t
{
	EKSEventChallengesDisplayState__None = 0,
	EKSEventChallengesDisplayState__HasSelectedChallenge = 1,
	EKSEventChallengesDisplayState__AdditionalChallengesLocked = 2,
	EKSEventChallengesDisplayState__AllChallengesFinished = 3,
	EKSEventChallengesDisplayState__MAX = 4,

};

// Enum Killstreak.EKSTeamAssignmentType
enum class Killstreak_EKSTeamAssignmentType : uint8_t
{
	EKSTeamAssignmentType__AllOnOne = 0,
	EKSTeamAssignmentType__EvenlyDistributed = 1,
	EKSTeamAssignmentType__EKSTeamAssignmentType_MAX = 2,

};

// Enum Killstreak.EKSBotNameGeneration
enum class Killstreak_EKSBotNameGeneration : uint8_t
{
	EKSBotNameGeneration__None     = 0,
	EKSBotNameGeneration__RandomNames = 1,
	EKSBotNameGeneration__DefaultClassNames = 2,
	EKSBotNameGeneration__EKSBotNameGeneration_MAX = 3,

};

// Enum Killstreak.EKSLootRespawnMode
enum class Killstreak_EKSLootRespawnMode : uint8_t
{
	EKSLootRespawnMode__RespawnActiveSites = 0,
	EKSLootRespawnMode__RespawnRandomSites = 1,
	EKSLootRespawnMode__EKSLootRespawnMode_MAX = 2,

};

// Enum Killstreak.EKSRewardType
enum class Killstreak_EKSRewardType : uint8_t
{
	EKSRewardType__MatchInProgress = 0,
	EKSRewardType__Winner          = 1,
	EKSRewardType__Loser           = 2,
	EKSRewardType__Draw            = 3,
	EKSRewardType__EKSRewardType_MAX = 4,

};

// Enum Killstreak.EChangeAdditionalActionCondition
enum class Killstreak_EChangeAdditionalActionCondition : uint8_t
{
	EChangeAdditionalActionCondition__NeverDo = 0,
	EChangeAdditionalActionCondition__DoIfChanged = 1,
	EChangeAdditionalActionCondition__AlwaysDo = 2,
	EChangeAdditionalActionCondition__EChangeAdditionalActionCondition_MAX = 3,

};

// Enum Killstreak.EPlayerInfoInventoryRestoreType
enum class Killstreak_EPlayerInfoInventoryRestoreType : uint8_t
{
	EPlayerInfoInventoryRestoreType__ResetToStartingInventory = 0,
	EPlayerInfoInventoryRestoreType__KeepInventory = 1,
	EPlayerInfoInventoryRestoreType__KeepInventoryIfNotDead = 2,
	EPlayerInfoInventoryRestoreType__KeepGunsOnly = 3,
	EPlayerInfoInventoryRestoreType__UseNewMethod = 4,
	EPlayerInfoInventoryRestoreType__EPlayerInfoInventoryRestoreType_MAX = 5,

};

// Enum Killstreak.EJobSelectionType
enum class Killstreak_EJobSelectionType : uint8_t
{
	EJobSelectionType__Unknown     = 0,
	EJobSelectionType__Legacy      = 1,
	EJobSelectionType__SelectionAuthority = 2,
	EJobSelectionType__EJobSelectionType_MAX = 3,

};

// Enum Killstreak.EKillCamStatus
enum class Killstreak_EKillCamStatus : uint8_t
{
	EKillCamStatus__KillCamUninitialized = 0,
	EKillCamStatus__KillCamEnabled = 1,
	EKillCamStatus__KillCamDisabled = 2,
	EKillCamStatus__EKillCamStatus_MAX = 3,

};

// Enum Killstreak.ECrosshairSize
enum class Killstreak_ECrosshairSize : uint8_t
{
	ECrosshairSize__Standard       = 0,
	ECrosshairSize__Medium         = 1,
	ECrosshairSize__Large          = 2,
	ECrosshairSize__ECrosshairSize_MAX = 3,

};

// Enum Killstreak.EKSGamepadIcons
enum class Killstreak_EKSGamepadIcons : uint8_t
{
	EKSGamepadIcons__XboxOne       = 0,
	EKSGamepadIcons__PlayStation4  = 1,
	EKSGamepadIcons__NintendoSwitch = 2,
	EKSGamepadIcons__EKSGamepadIcons_MAX = 3,

};

// Enum Killstreak.ERadialWheelMode
enum class Killstreak_ERadialWheelMode : uint8_t
{
	ERadialWheelMode__Hold         = 0,
	ERadialWheelMode__Toggle       = 1,
	ERadialWheelMode__ERadialWheelMode_MAX = 2,

};

// Enum Killstreak.EGyroMode
enum class Killstreak_EGyroMode : uint8_t
{
	EGyroMode__None                = 0,
	EGyroMode__AimOnly             = 1,
	EGyroMode__Always              = 2,
	EGyroMode__EGyroMode_MAX       = 3,

};

// Enum Killstreak.EADSMode
enum class Killstreak_EADSMode : uint8_t
{
	EADSMode__Hold                 = 0,
	EADSMode__Toggle               = 1,
	EADSMode__Both                 = 2,
	EADSMode__EADSMode_MAX         = 3,

};

// Enum Killstreak.EKSInteractableGroup
enum class Killstreak_EKSInteractableGroup : uint8_t
{
	EKSInteractableGroup__Generic  = 0,
	EKSInteractableGroup__Bomb     = 1,
	EKSInteractableGroup__Objective = 2,
	EKSInteractableGroup__DropOffZone = 3,
	EKSInteractableGroup__Vehicle  = 4,
	EKSInteractableGroup__Projectile = 5,
	EKSInteractableGroup__ZipLine  = 6,
	EKSInteractableGroup__Pawn     = 7,
	EKSInteractableGroup__EKSInteractableGroup_MAX = 8,

};

// Enum Killstreak.EKSLabelAndHighlightState
enum class Killstreak_EKSLabelAndHighlightState : uint8_t
{
	EKSLabelAndHighlightState__NotTargeted = 0,
	EKSLabelAndHighlightState__Targeted = 1,
	EKSLabelAndHighlightState__EKSLabelAndHighlightState_MAX = 2,

};

// Enum Killstreak.EJobLoadoutSlot
enum class Killstreak_EJobLoadoutSlot : uint8_t
{
	EJobLoadoutSlot__JobSlot_Unknown = 0,
	EJobLoadoutSlot__JobSlot_JobItem = 1,
	EJobLoadoutSlot__JobSlot_UniqueItem = 2,
	EJobLoadoutSlot__JobSlot_PrimaryWeapon = 3,
	EJobLoadoutSlot__JobSlot_PrimaryWeaponAttachment = 4,
	EJobLoadoutSlot__JobSlot_SecondaryWeapon = 5,
	EJobLoadoutSlot__JobSlot_SecondaryWeaponAttachment = 6,
	EJobLoadoutSlot__JobSlot_Gadget = 7,
	EJobLoadoutSlot__JobSlot_PerkOne = 8,
	EJobLoadoutSlot__JobSlot_PerkTwo = 9,
	EJobLoadoutSlot__JobSlot_PrimaryWeapon_Alt = 10,
	EJobLoadoutSlot__JobSlot_SecondaryWeapon_Alt = 11,
	EJobLoadoutSlot__JobSlot_Gadget_Alt = 12,
	EJobLoadoutSlot__JobSlot_Melee = 13,
	EJobLoadoutSlot__JobSlot_QuickMelee = 14,
	EJobLoadoutSlot__JobSlot_MAX   = 15,

};

// Enum Killstreak.EJobSelectProxyRules
enum class Killstreak_EJobSelectProxyRules : uint8_t
{
	EJobSelectProxyRules__DelayOrAbstain = 0,
	EJobSelectProxyRules__Random   = 1,
	EJobSelectProxyRules__Captain  = 2,
	EJobSelectProxyRules__EJobSelectProxyRules_MAX = 3,

};

// Enum Killstreak.EJobBanEffects
enum class Killstreak_EJobBanEffects : uint8_t
{
	EJobBanEffects__EffectsAll     = 0,
	EJobBanEffects__EffectsOpposingTeams = 1,
	EJobBanEffects__EJobBanEffects_MAX = 2,

};

// Enum Killstreak.EJobPickExclusivity
enum class Killstreak_EJobPickExclusivity : uint8_t
{
	EJobPickExclusivity__NotExclusive = 0,
	EJobPickExclusivity__ExclusiveToTeam = 1,
	EJobPickExclusivity__ExclusiveToAll = 2,
	EJobPickExclusivity__EJobPickExclusivity_MAX = 3,

};

// Enum Killstreak.EJobSelectDraftingTaskType
enum class Killstreak_EJobSelectDraftingTaskType : uint8_t
{
	EJobSelectDraftingTaskType__Ban = 0,
	EJobSelectDraftingTaskType__Pick = 1,
	EJobSelectDraftingTaskType__Wait = 2,
	EJobSelectDraftingTaskType__EJobSelectDraftingTaskType_MAX = 3,

};

// Enum Killstreak.EJobOwnershipState
enum class Killstreak_EJobOwnershipState : uint8_t
{
	EJobOwnershipState__Owned      = 0,
	EJobOwnershipState__NotOwned   = 1,
	EJobOwnershipState__WaitingToCheckInventory = 2,
	EJobOwnershipState__EJobOwnershipState_MAX = 3,

};

// Enum Killstreak.ECanCompleteTaskResult
enum class Killstreak_ECanCompleteTaskResult : uint8_t
{
	ECanCompleteTaskResult__Ok     = 0,
	ECanCompleteTaskResult__NotValidTask = 1,
	ECanCompleteTaskResult__Unavailable = 2,
	ECanCompleteTaskResult__UnavailableByOwnership = 3,
	ECanCompleteTaskResult__Banned = 4,
	ECanCompleteTaskResult__AlreadyPicked = 5,
	ECanCompleteTaskResult__AlreadyLocked = 6,
	ECanCompleteTaskResult__CannotAbstain = 7,
	ECanCompleteTaskResult__CannotLock = 8,
	ECanCompleteTaskResult__ECanCompleteTaskResult_MAX = 9,

};

// Enum Killstreak.ESelectionActivityState
enum class Killstreak_ESelectionActivityState : uint8_t
{
	ESelectionActivityState__Inactive = 0,
	ESelectionActivityState__Waiting = 1,
	ESelectionActivityState__Selecting = 2,
	ESelectionActivityState__Banning = 3,
	ESelectionActivityState__ESelectionActivityState_MAX = 4,

};

// Enum Killstreak.EAllowUnownedJobsState
enum class Killstreak_EAllowUnownedJobsState : uint8_t
{
	EAllowUnownedJobsState__Unknown = 0,
	EAllowUnownedJobsState__AllowUnowned = 1,
	EAllowUnownedJobsState__DoNotAllowUnowned = 2,
	EAllowUnownedJobsState__EAllowUnownedJobsState_MAX = 3,

};

// Enum Killstreak.EPlayerAccountSlot
enum class Killstreak_EPlayerAccountSlot : uint8_t
{
	EPlayerAccountSlot__AVATAR_SLOT = 0,
	EPlayerAccountSlot__BANNER_SLOT = 1,
	EPlayerAccountSlot__PREFERRED_MERC_SLOT = 2,
	EPlayerAccountSlot__BORDER_SLOT = 3,
	EPlayerAccountSlot__TITLE_SLOT = 4,
	EPlayerAccountSlot__EPlayerAccountSlot_MAX = 5,

};

// Enum Killstreak.EWeaponCosmeticSlot
enum class Killstreak_EWeaponCosmeticSlot : uint8_t
{
	EWeaponCosmeticSlot__WRAP_SLOT = 0,
	EWeaponCosmeticSlot__WRAP_MAX  = 1,

};

// Enum Killstreak.EKSLoadoutTypes
enum class Killstreak_EKSLoadoutTypes : uint8_t
{
	EKSLoadoutTypes__INVALID_LOADOUT = 0,
	EKSLoadoutTypes__JOB_COSMETICS = 1,
	EKSLoadoutTypes__PLAYER_ACCOUNT = 2,
	EKSLoadoutTypes__GLOBAL_COSMETIC_LOADOUT = 3,
	EKSLoadoutTypes__WEAPON_COSMETIC_LOADOUT = 4,
	EKSLoadoutTypes__EKSLoadoutTypes_MAX = 5,

};

// Enum Killstreak.EKSLobbyCharacterAnimationPose
enum class Killstreak_EKSLobbyCharacterAnimationPose : uint8_t
{
	EKSLobbyCharacterAnimationPose__Lobby_Idle = 0,
	EKSLobbyCharacterAnimationPose__Lobby_Fidget_01 = 1,
	EKSLobbyCharacterAnimationPose__Lobby_Fidget_02 = 2,
	EKSLobbyCharacterAnimationPose__Lobby_Fidget_03 = 3,
	EKSLobbyCharacterAnimationPose__Lobby_Fidget_04 = 4,
	EKSLobbyCharacterAnimationPose__Lobby_Fidget_05 = 5,
	EKSLobbyCharacterAnimationPose__Lobby_MAX = 6,

};

// Enum Killstreak.ELobbyCharacterIndex
enum class Killstreak_ELobbyCharacterIndex : uint8_t
{
	ELobbyCharacterIndex__LobbyCharacter_Unknown = 0,
	ELobbyCharacterIndex__LobbyCharacter_LocalPlayer = 1,
	ELobbyCharacterIndex__LobbyCharacter_PartyMemberOne = 2,
	ELobbyCharacterIndex__LobbyCharacter_PartyMemberTwo = 3,
	ELobbyCharacterIndex__LobbyCharacter_PartyMemberThree = 4,
	ELobbyCharacterIndex__LobbyCharacter_RogueScreen = 5,
	ELobbyCharacterIndex__LobbyCharacter_PurchaseConfirmation = 6,
	ELobbyCharacterIndex__LobbyCharacter_EventScreen = 7,
	ELobbyCharacterIndex__LobbyCharacter_BattlePassScreen = 8,
	ELobbyCharacterIndex__LobbyCharacter_RogueScreenPosed = 9,
	ELobbyCharacterIndex__LobbyCharacter_MAX = 10,

};

// Enum Killstreak.ELobbyCharacterAnimState
enum class Killstreak_ELobbyCharacterAnimState : uint8_t
{
	ELobbyCharacterAnimState__LobbyAnim_Unknown = 0,
	ELobbyCharacterAnimState__LobbyAnim_Login = 1,
	ELobbyCharacterAnimState__LobbyAnim_Default = 2,
	ELobbyCharacterAnimState__LobbyAnim_Hidden = 3,
	ELobbyCharacterAnimState__LobbyAnim_Idle = 4,
	ELobbyCharacterAnimState__LobbyAnim_IntroWalk = 5,
	ELobbyCharacterAnimState__LobbyAnim_EmoteOne = 6,
	ELobbyCharacterAnimState__LobbyAnim_EmoteTwo = 7,
	ELobbyCharacterAnimState__LobbyAnim_EmoteThree = 8,
	ELobbyCharacterAnimState__LobbyAnim_EmoteFour = 9,
	ELobbyCharacterAnimState__LobbyAnim_EmoteFive = 10,
	ELobbyCharacterAnimState__LobbyAnim_PreMatchWalk = 11,
	ELobbyCharacterAnimState__LobbyAnim_EOMBackground = 12,
	ELobbyCharacterAnimState__LobbyAnim_PostMatchWalk = 13,
	ELobbyCharacterAnimState__LobbyAnim_MidSequence = 14,
	ELobbyCharacterAnimState__LobbyAnim_MAX = 15,

};

// Enum Killstreak.ELobbyPresenceState
enum class Killstreak_ELobbyPresenceState : uint8_t
{
	ELobbyPresenceState__ELobbyPresence_Unknown = 0,
	ELobbyPresenceState__ELobbyPresence_NotPresent = 1,
	ELobbyPresenceState__ELobbyPresence_PendingInvite = 2,
	ELobbyPresenceState__ELobbyPresence_Idle = 3,
	ELobbyPresenceState__ELobbyPresence_MAX = 4,

};

// Enum Killstreak.ELobbyLevelSequenceTag
enum class Killstreak_ELobbyLevelSequenceTag : uint8_t
{
	ELobbyLevelSequenceTag__ELobbyLvlSeqTag_Login = 0,
	ELobbyLevelSequenceTag__ELobbyLvlSeqTag_MAX = 1,

};

// Enum Killstreak.ELobbyCameraActorTag
enum class Killstreak_ELobbyCameraActorTag : uint8_t
{
	ELobbyCameraActorTag__ELobbyCamTag_Home = 0,
	ELobbyCameraActorTag__ELobbyCamTag_CustomizeLoadout = 1,
	ELobbyCameraActorTag__ELobbyCamTag_LobbyMain = 2,
	ELobbyCameraActorTag__ELobbyCamTag_MAX = 3,

};

// Enum Killstreak.ELootSiteAlignment
enum class Killstreak_ELootSiteAlignment : uint8_t
{
	ELootSiteAlignment__Attack     = 0,
	ELootSiteAlignment__Defend     = 1,
	ELootSiteAlignment__Contested  = 2,
	ELootSiteAlignment__ELootSiteAlignment_MAX = 3,

};

// Enum Killstreak.EKSMantleScaleType
enum class Killstreak_EKSMantleScaleType : uint8_t
{
	EKSMantleScaleType__ScaleDistOnly = 0,
	EKSMantleScaleType__ScaleDistAndTime = 1,
	EKSMantleScaleType__ShaveIntro = 2,
	EKSMantleScaleType__EKSMantleScaleType_MAX = 3,

};

// Enum Killstreak.ETeamRole
enum class Killstreak_ETeamRole : uint8_t
{
	ETeamRole__Roleless            = 0,
	ETeamRole__Attacker            = 1,
	ETeamRole__Defender            = 2,
	ETeamRole__ETeamRole_MAX       = 3,

};

// Enum Killstreak.EKSRelativeMinimapHeight
enum class Killstreak_EKSRelativeMinimapHeight : uint8_t
{
	EKSRelativeMinimapHeight__Below = 0,
	EKSRelativeMinimapHeight__SameLevel = 1,
	EKSRelativeMinimapHeight__Above = 2,
	EKSRelativeMinimapHeight__EKSRelativeMinimapHeight_MAX = 3,

};

// Enum Killstreak.EThrowDirection
enum class Killstreak_EThrowDirection : uint8_t
{
	EThrowDirection__Back          = 0,
	EThrowDirection__Front         = 1,
	EThrowDirection__Left          = 2,
	EThrowDirection__Right         = 3,
	EThrowDirection__EThrowDirection_MAX = 4,

};

// Enum Killstreak.EWillToSurviveTimerType
enum class Killstreak_EWillToSurviveTimerType : uint8_t
{
	EWillToSurviveTimerType__ShotAtTimer = 0,
	EWillToSurviveTimerType__ModActivatedTimer = 1,
	EWillToSurviveTimerType__CooldownTimer = 2,
	EWillToSurviveTimerType__EWillToSurviveTimerType_MAX = 3,

};

// Enum Killstreak.EWillToSurviveModState
enum class Killstreak_EWillToSurviveModState : uint8_t
{
	EWillToSurviveModState__Inactive = 0,
	EWillToSurviveModState__WaitForShotAt = 1,
	EWillToSurviveModState__WaitForDodgeRollEnd = 2,
	EWillToSurviveModState__ModActivated = 3,
	EWillToSurviveModState__Cooldown = 4,
	EWillToSurviveModState__EWillToSurviveModState_MAX = 5,

};

// Enum Killstreak.EKSReviveDroneEvent
enum class Killstreak_EKSReviveDroneEvent : uint8_t
{
	EKSReviveDroneEvent__ReviveStarted = 0,
	EKSReviveDroneEvent__ReviveFinished = 1,
	EKSReviveDroneEvent__TargetRevived = 2,
	EKSReviveDroneEvent__TargetDied = 3,
	EKSReviveDroneEvent__DroneAborted = 4,
	EKSReviveDroneEvent__DroneDestroyed = 5,
	EKSReviveDroneEvent__EKSReviveDroneEvent_MAX = 6,

};

// Enum Killstreak.EKSNeutralBombState
enum class Killstreak_EKSNeutralBombState : uint8_t
{
	EKSNeutralBombState__Spawned   = 0,
	EKSNeutralBombState__Reset     = 1,
	EKSNeutralBombState__Held      = 2,
	EKSNeutralBombState__Dropped   = 3,
	EKSNeutralBombState__Arming    = 4,
	EKSNeutralBombState__Armed     = 5,
	EKSNeutralBombState__Disarming = 6,
	EKSNeutralBombState__Disarmed  = 7,
	EKSNeutralBombState__Deactivated = 8,
	EKSNeutralBombState__Exploded  = 9,
	EKSNeutralBombState__EKSNeutralBombState_MAX = 10,

};

// Enum Killstreak.EKSObjectiveState
enum class Killstreak_EKSObjectiveState : uint8_t
{
	EKSObjectiveState__None        = 0,
	EKSObjectiveState__Spawned     = 1,
	EKSObjectiveState__Reset       = 2,
	EKSObjectiveState__Held        = 3,
	EKSObjectiveState__Dropped     = 4,
	EKSObjectiveState__Contested   = 5,
	EKSObjectiveState__Arming      = 6,
	EKSObjectiveState__Armed       = 7,
	EKSObjectiveState__Disarming   = 8,
	EKSObjectiveState__Disarmed    = 9,
	EKSObjectiveState__Deactivated = 10,
	EKSObjectiveState__Exploded    = 11,
	EKSObjectiveState__EKSObjectiveState_MAX = 12,

};

// Enum Killstreak.EObjectiveIconType
enum class Killstreak_EObjectiveIconType : uint8_t
{
	EObjectiveIconType__Hack       = 0,
	EObjectiveIconType__Pickup     = 1,
	EObjectiveIconType__EObjectiveIconType_MAX = 2,

};

// Enum Killstreak.EObjectiveType
enum class Killstreak_EObjectiveType : uint8_t
{
	EObjectiveType__None           = 0,
	EObjectiveType__ExtractionPC   = 1,
	EObjectiveType__BombZone       = 2,
	EObjectiveType__ControlPoint   = 3,
	EObjectiveType__EObjectiveType_MAX = 4,

};

// Enum Killstreak.EKSNavAreaType
enum class Killstreak_EKSNavAreaType : uint8_t
{
	EKSNavAreaType__UnusedDefault  = 0,
	EKSNavAreaType__Jump           = 1,
	EKSNavAreaType__Hazard         = 2,
	EKSNavAreaType__StartZipline   = 3,
	EKSNavAreaType__TravelZipline  = 4,
	EKSNavAreaType__Swim           = 5,
	EKSNavAreaType__InteractiveObstacle = 6,
	EKSNavAreaType__EKSNavAreaType_MAX = 7,

};

// Enum Killstreak.EAccountJobStatType
enum class Killstreak_EAccountJobStatType : uint8_t
{
	EAccountJobStatType__MasteryXp = 0,
	EAccountJobStatType__EAccountJobStatType_MAX = 1,

};

// Enum Killstreak.EKSPlatformType
enum class Killstreak_EKSPlatformType : uint8_t
{
	EKSPlatformType__PC            = 0,
	EKSPlatformType__XboxOne       = 1,
	EKSPlatformType__Playstation4  = 2,
	EKSPlatformType__Switch        = 3,
	EKSPlatformType__ConsoleGeneric = 4,
	EKSPlatformType__Epic          = 5,
	EKSPlatformType__Steam         = 6,
	EKSPlatformType__IOS           = 7,
	EKSPlatformType__Android       = 8,
	EKSPlatformType__MobileGeneric = 9,
	EKSPlatformType__EKSPlatformType_MAX = 10,

};

// Enum Killstreak.EKSPlayerInputType
enum class Killstreak_EKSPlayerInputType : uint8_t
{
	EKSPlayerInputType__PIT_Unknown = 0,
	EKSPlayerInputType__PIT_KeyboardMouse = 1,
	EKSPlayerInputType__PIT_Gamepad = 2,
	EKSPlayerInputType__PIT_Touch  = 3,
	EKSPlayerInputType__PIT_MAX    = 4,

};

// Enum Killstreak.EKSPlayerOnlineStatus
enum class Killstreak_EKSPlayerOnlineStatus : uint8_t
{
	EKSPlayerOnlineStatus__FGS_InParty = 0,
	EKSPlayerOnlineStatus__FGS_PendingParty = 1,
	EKSPlayerOnlineStatus__FGS_InGame = 2,
	EKSPlayerOnlineStatus__FGS_InMatch = 3,
	EKSPlayerOnlineStatus__FGS_InQueue = 4,
	EKSPlayerOnlineStatus__FGS_Online = 5,
	EKSPlayerOnlineStatus__FGS_DND = 6,
	EKSPlayerOnlineStatus__FGS_Offline = 7,
	EKSPlayerOnlineStatus__FGS_FriendRequest = 8,
	EKSPlayerOnlineStatus__FGS_PendingInvite = 9,
	EKSPlayerOnlineStatus__FGS_MAX = 10,

};

// Enum Killstreak.EKSInputType
enum class Killstreak_EKSInputType : uint8_t
{
	EKSInputType__KBM              = 0,
	EKSInputType__GP               = 1,
	EKSInputType__Touch            = 2,
	EKSInputType__EKSInputType_MAX = 3,

};

// Enum Killstreak.EKSKeyBindType
enum class Killstreak_EKSKeyBindType : uint8_t
{
	EKSKeyBindType__ActionMapping  = 0,
	EKSKeyBindType__AxisMapping    = 1,
	EKSKeyBindType__EKSKeyBindType_MAX = 2,

};

// Enum Killstreak.EModPriorityResolution
enum class Killstreak_EModPriorityResolution : uint8_t
{
	EModPriorityResolution__TakeValue1 = 0,
	EModPriorityResolution__TakeValue2 = 1,
	EModPriorityResolution__Stack  = 2,
	EModPriorityResolution__EModPriorityResolution_MAX = 3,

};

// Enum Killstreak.EPlayerModType
enum class Killstreak_EPlayerModType : uint8_t
{
	EPlayerModType__Perk           = 0,
	EPlayerModType__GlobalPerk     = 1,
	EPlayerModType__Activated      = 2,
	EPlayerModType__Passive        = 3,
	EPlayerModType__TemporaryBuff  = 4,
	EPlayerModType__TemporaryDebuff = 5,
	EPlayerModType__Hidden         = 6,
	EPlayerModType__Unknown        = 7,
	EPlayerModType__EPlayerModType_MAX = 8,

};

// Enum Killstreak.EModInterferenceType
enum class Killstreak_EModInterferenceType : uint8_t
{
	EModInterferenceType__Defer    = 0,
	EModInterferenceType__Stack    = 1,
	EModInterferenceType__WeakestWins = 2,
	EModInterferenceType__StrongestWins = 3,
	EModInterferenceType__BonusWins = 4,
	EModInterferenceType__PenaltyWins = 5,
	EModInterferenceType__EModInterferenceType_MAX = 6,

};

// Enum Killstreak.EEliminationState
enum class Killstreak_EEliminationState : uint8_t
{
	EEliminationState__NotInPlay   = 0,
	EEliminationState__Playing     = 1,
	EEliminationState__Eliminated  = 2,
	EEliminationState__EEliminationState_MAX = 3,

};

// Enum Killstreak.EIsPlayer
enum class Killstreak_EIsPlayer : uint8_t
{
	EIsPlayer__Unknown             = 0,
	EIsPlayer__Player              = 1,
	EIsPlayer__NotPlayer           = 2,
	EIsPlayer__EIsPlayer_MAX       = 3,

};

// Enum Killstreak.EKSStimulateTarget
enum class Killstreak_EKSStimulateTarget : uint8_t
{
	EKSStimulateTarget__OnlyEnemies = 0,
	EKSStimulateTarget__OnlyAllies = 1,
	EKSStimulateTarget__AllPlayers = 2,
	EKSStimulateTarget__EKSStimulateTarget_MAX = 3,

};

// Enum Killstreak.EKSPOIState
enum class Killstreak_EKSPOIState : uint8_t
{
	EKSPOIState__Disabled          = 0,
	EKSPOIState__Staged            = 1,
	EKSPOIState__Enabled           = 2,
	EKSPOIState__EKSPOIState_MAX   = 3,

};

// Enum Killstreak.EPollAudience
enum class Killstreak_EPollAudience : uint8_t
{
	EPollAudience__AllPlayerPoll   = 0,
	EPollAudience__TeamPoll        = 1,
	EPollAudience__EPollAudience_MAX = 2,

};

// Enum Killstreak.EProjectileReclaimPermission
enum class Killstreak_EProjectileReclaimPermission : uint8_t
{
	EProjectileReclaimPermission__OwnerOnly = 0,
	EProjectileReclaimPermission__TeammatesOnly = 1,
	EProjectileReclaimPermission__Anyone = 2,
	EProjectileReclaimPermission__EProjectileReclaimPermission_MAX = 3,

};

// Enum Killstreak.EProjectilePredictionType
enum class Killstreak_EProjectilePredictionType : uint8_t
{
	EProjectilePredictionType__PassThrough = 0,
	EProjectilePredictionType__Bounce = 1,
	EProjectilePredictionType__Stop = 2,
	EProjectilePredictionType__EProjectilePredictionType_MAX = 3,

};

// Enum Killstreak.EProjectileVisibilityType
enum class Killstreak_EProjectileVisibilityType : uint8_t
{
	EProjectileVisibilityType__Owner = 0,
	EProjectileVisibilityType__Ally = 1,
	EProjectileVisibilityType__All = 2,
	EProjectileVisibilityType__EProjectileVisibilityType_MAX = 3,

};

// Enum Killstreak.EProjectileWeaponComponentType
enum class Killstreak_EProjectileWeaponComponentType : uint8_t
{
	EProjectileWeaponComponentType__None = 0,
	EProjectileWeaponComponentType__Self = 1,
	EProjectileWeaponComponentType__Parent = 2,
	EProjectileWeaponComponentType__EProjectileWeaponComponentType_MAX = 3,

};

// Enum Killstreak.EMarkerTeamVisibility
enum class Killstreak_EMarkerTeamVisibility : uint8_t
{
	EMarkerTeamVisibility__None    = 0,
	EMarkerTeamVisibility__Self    = 1,
	EMarkerTeamVisibility__AllyTeam = 2,
	EMarkerTeamVisibility__EnemyTeam = 3,
	EMarkerTeamVisibility__AllButSelf = 4,
	EMarkerTeamVisibility__Everyone = 5,
	EMarkerTeamVisibility__EMarkerTeamVisibility_MAX = 6,

};

// Enum Killstreak.EProjectileClusterSpreadType
enum class Killstreak_EProjectileClusterSpreadType : uint8_t
{
	EProjectileClusterSpreadType__AimRelative = 0,
	EProjectileClusterSpreadType__ImpactRelative = 1,
	EProjectileClusterSpreadType__EProjectileClusterSpreadType_MAX = 2,

};

// Enum Killstreak.EKSProjectileTargetingHitComponentType
enum class Killstreak_EKSProjectileTargetingHitComponentType : uint8_t
{
	EKSProjectileTargetingHitComponentType__Decal = 0,
	EKSProjectileTargetingHitComponentType__Mesh = 1,
	EKSProjectileTargetingHitComponentType__EKSProjectileTargetingHitComponentType_MAX = 2,

};

// Enum Killstreak.EBadBehaviorType
enum class Killstreak_EBadBehaviorType : uint8_t
{
	EBadBehaviorType__None         = 0,
	EBadBehaviorType__QuitEarly    = 1,
	EBadBehaviorType__Disconnected = 2,
	EBadBehaviorType__AFK          = 3,
	EBadBehaviorType__EBadBehaviorType_MAX = 4,

};

// Enum Killstreak.ERadialMenuItemInterruptNotifyBehaviorType
enum class Killstreak_ERadialMenuItemInterruptNotifyBehaviorType : uint8_t
{
	ERadialMenuItemInterruptNotifyBehaviorType__NoNotify = 0,
	ERadialMenuItemInterruptNotifyBehaviorType__OnlyIfMarkedPlaying = 1,
	ERadialMenuItemInterruptNotifyBehaviorType__ERadialMenuItemInterruptNotifyBehaviorType_MAX = 2,

};

// Enum Killstreak.EKSRadialMenuItemInterruptReason
enum class Killstreak_EKSRadialMenuItemInterruptReason : uint8_t
{
	EKSRadialMenuItemInterruptReason__Unknown = 0,
	EKSRadialMenuItemInterruptReason__NoCharacter = 1,
	EKSRadialMenuItemInterruptReason__Walking = 2,
	EKSRadialMenuItemInterruptReason__Sprinting = 3,
	EKSRadialMenuItemInterruptReason__Crouching = 4,
	EKSRadialMenuItemInterruptReason__Downed = 5,
	EKSRadialMenuItemInterruptReason__Dead = 6,
	EKSRadialMenuItemInterruptReason__Interacting = 7,
	EKSRadialMenuItemInterruptReason__Zipline = 8,
	EKSRadialMenuItemInterruptReason__SkyDiving = 9,
	EKSRadialMenuItemInterruptReason__DodgeRolling = 10,
	EKSRadialMenuItemInterruptReason__Falling = 11,
	EKSRadialMenuItemInterruptReason__NonRadialMenuItemEquipment = 12,
	EKSRadialMenuItemInterruptReason__RadialMenuItemActivated = 13,
	EKSRadialMenuItemInterruptReason__RadialMenuItemCooldown = 14,
	EKSRadialMenuItemInterruptReason__InvalidTargeting = 15,
	EKSRadialMenuItemInterruptReason__DistFromOrigin = 16,
	EKSRadialMenuItemInterruptReason__Throttled = 17,
	EKSRadialMenuItemInterruptReason__Truncated = 18,
	EKSRadialMenuItemInterruptReason__BlockedByMod = 19,
	EKSRadialMenuItemInterruptReason__EKSRadialMenuItemInterruptReason_MAX = 20,

};

// Enum Killstreak.ERecoilStart2
enum class Killstreak_ERecoilStart2 : uint8_t
{
	ERS_Zero2                      = 0,
	ERS_Random2                    = 1,
	ERS_MAX                        = 2,

};

// Enum Killstreak.ERewardSource
enum class Killstreak_ERewardSource : uint8_t
{
	ERewardSource__UNKNOWN         = 0,
	ERewardSource__Base            = 1,
	ERewardSource__MatchWin        = 2,
	ERewardSource__BoosterBonusProgression = 3,
	ERewardSource__QueueBonusProgression = 4,
	ERewardSource__EventBonusProgression = 5,
	ERewardSource__Backfill        = 6,
	ERewardSource__ERewardSource_MAX = 7,

};

// Enum Killstreak.EPlayerStatType
enum class Killstreak_EPlayerStatType : uint8_t
{
	EPlayerStatType__UNKNOWN       = 0,
	EPlayerStatType__Kills         = 1,
	EPlayerStatType__Deaths        = 2,
	EPlayerStatType__Assists       = 3,
	EPlayerStatType__Downs         = 4,
	EPlayerStatType__Revives       = 5,
	EPlayerStatType__Eliminations  = 6,
	EPlayerStatType__RoundsPlayed  = 7,
	EPlayerStatType__Hacks         = 8,
	EPlayerStatType__Dehacks       = 9,
	EPlayerStatType__RawDamageDealt = 10,
	EPlayerStatType__MitigatedDamageDealt = 11,
	EPlayerStatType__RawDamageReceived = 12,
	EPlayerStatType__MitigatedDamageReceived = 13,
	EPlayerStatType__TimeAlive     = 14,
	EPlayerStatType__Rank          = 15,
	EPlayerStatType__TimePlayed    = 16,
	EPlayerStatType__Score         = 17,
	EPlayerStatType__Cash          = 18,
	EPlayerStatType__Headshots     = 19,
	EPlayerStatType__EPlayerStatType_MAX = 20,

};

// Enum Killstreak.ELimitPerRound
enum class Killstreak_ELimitPerRound : uint8_t
{
	ELimitPerRound__None           = 0,
	ELimitPerRound__OneActive      = 1,
	ELimitPerRound__OnePerRound    = 2,
	ELimitPerRound__ELimitPerRound_MAX = 3,

};

// Enum Killstreak.ELocalRequirements
enum class Killstreak_ELocalRequirements : uint8_t
{
	ELocalRequirements__None       = 0,
	ELocalRequirements__Controlled = 1,
	ELocalRequirements__Viewed     = 2,
	ELocalRequirements__ControlledOrViewed = 3,
	ELocalRequirements__ELocalRequirements_MAX = 4,

};

// Enum Killstreak.EPlayerShopTransactionType
enum class Killstreak_EPlayerShopTransactionType : uint8_t
{
	EPlayerShopTransactionType__Purchase = 0,
	EPlayerShopTransactionType__SetActive = 1,
	EPlayerShopTransactionType__Refund = 2,
	EPlayerShopTransactionType__EPlayerShopTransactionType_MAX = 3,

};

// Enum Killstreak.EStartingCashRoundBonus
enum class Killstreak_EStartingCashRoundBonus : uint8_t
{
	EStartingCashRoundBonus__None  = 0,
	EStartingCashRoundBonus__Record = 1,
	EStartingCashRoundBonus__Win   = 2,
	EStartingCashRoundBonus__Loss  = 3,
	EStartingCashRoundBonus__EStartingCashRoundBonus_MAX = 4,

};

// Enum Killstreak.ESpecialtyRoleType
enum class Killstreak_ESpecialtyRoleType : uint8_t
{
	ESpecialtyRoleType__Unknown    = 0,
	ESpecialtyRoleType__Attack     = 1,
	ESpecialtyRoleType__Defense    = 2,
	ESpecialtyRoleType__Support    = 3,
	ESpecialtyRoleType__Movement   = 4,
	ESpecialtyRoleType__ESpecialtyRoleType_MAX = 5,

};

// Enum Killstreak.EStoreItemCollectionMode
enum class Killstreak_EStoreItemCollectionMode : uint8_t
{
	StoreItems                     = 0,
	BlockedItems                   = 1,
	RefundedItems                  = 2,
	EStoreItemCollectionMode_MAX   = 3,

};

// Enum Killstreak.EStoreSectionTypes
enum class Killstreak_EStoreSectionTypes : uint8_t
{
	NewSection                     = 0,
	DLCSection                     = 1,
	FeaturedSection                = 2,
	RogueBucksSection              = 3,
	DailySection                   = 4,
	BoostsSection                  = 5,
	LimitedTimeOfferSection        = 6,
	SpecialPromotionsSection       = 7,
	DLCSectionOnSale               = 8,
	CustomMessage                  = 9,
	DisplayOnCustomizationScreenOnly = 10,
	DynamicallyGeneratedOffers     = 11,
	EStoreSectionTypes_MAX         = 12,

};

// Enum Killstreak.EKSBlacklistOrWhitelist
enum class Killstreak_EKSBlacklistOrWhitelist : uint8_t
{
	EKSBlacklistOrWhitelist__Blacklist = 0,
	EKSBlacklistOrWhitelist__Whitelist = 1,
	EKSBlacklistOrWhitelist__EKSBlacklistOrWhitelist_MAX = 2,

};

// Enum Killstreak.EWeaponMasteryRewardPreviewType
enum class Killstreak_EWeaponMasteryRewardPreviewType : uint8_t
{
	EWeaponMasteryRewardPreviewType__Item = 0,
	EWeaponMasteryRewardPreviewType__Image = 1,
	EWeaponMasteryRewardPreviewType__WeaponRelatedRogues = 2,
	EWeaponMasteryRewardPreviewType__WeaponKillFeed = 3,
	EWeaponMasteryRewardPreviewType__None = 4,
	EWeaponMasteryRewardPreviewType__EWeaponMasteryRewardPreviewType_MAX = 5,

};

// Enum Killstreak.EKSWeaponMasteryType
enum class Killstreak_EKSWeaponMasteryType : uint8_t
{
	EKSWeaponMasteryType__Weapon   = 0,
	EKSWeaponMasteryType__WeaponCategory = 1,
	EKSWeaponMasteryType__WeaponsMaster = 2,
	EKSWeaponMasteryType__EKSWeaponMasteryType_MAX = 3,

};

// Enum Killstreak.EKSEquipmentType
enum class Killstreak_EKSEquipmentType : uint8_t
{
	EKSEquipmentType__Normal       = 0,
	EKSEquipmentType__Prop         = 1,
	EKSEquipmentType__EKSEquipmentType_MAX = 2,

};

// Enum Killstreak.ETopbarTicketDisplaySide
enum class Killstreak_ETopbarTicketDisplaySide : uint8_t
{
	ETopbarTicketDisplaySide__Both = 0,
	ETopbarTicketDisplaySide__ShowAttacker = 1,
	ETopbarTicketDisplaySide__ShowDefender = 2,
	ETopbarTicketDisplaySide__ETopbarTicketDisplaySide_MAX = 3,

};

// Enum Killstreak.ETopbarPointsBarType
enum class Killstreak_ETopbarPointsBarType : uint8_t
{
	ETopbarPointsBarType__Neither  = 0,
	ETopbarPointsBarType__Score    = 1,
	ETopbarPointsBarType__Ticket   = 2,
	ETopbarPointsBarType__ETopbarPointsBarType_MAX = 3,

};

// Enum Killstreak.EGameTimerType
enum class Killstreak_EGameTimerType : uint8_t
{
	EGameTimerType__None           = 0,
	EGameTimerType__RoundTimer     = 1,
	EGameTimerType__PhaseTimer     = 2,
	EGameTimerType__ObjectiveTimer = 3,
	EGameTimerType__EGameTimerType_MAX = 4,

};

// Enum Killstreak.EWeaponSlot
enum class Killstreak_EWeaponSlot : uint8_t
{
	EWeaponSlot__NONE              = 0,
	EWeaponSlot__PRIMARY_ONE_SLOT  = 1,
	EWeaponSlot__PRIMARY_TWO_SLOT  = 2,
	EWeaponSlot__SECONDARY_SLOT    = 3,
	EWeaponSlot__MELEE_SLOT        = 4,
	EWeaponSlot__EWeaponSlot_MAX   = 5,

};

// Enum Killstreak.ECharacterRole
enum class Killstreak_ECharacterRole : uint8_t
{
	ECharacterRole__None           = 0,
	ECharacterRole__Attacker       = 1,
	ECharacterRole__Defender       = 2,
	ECharacterRole__Max            = 3,

};

// Enum Killstreak.ERestoreInfoInitRestoreType
enum class Killstreak_ERestoreInfoInitRestoreType : uint8_t
{
	ERestoreInfoInitRestoreType__Normal = 0,
	ERestoreInfoInitRestoreType__RestoreSelfOnComplete = 1,
	ERestoreInfoInitRestoreType__RestoreSelfAndChildrenOnComplete = 2,
	ERestoreInfoInitRestoreType__ERestoreInfoInitRestoreType_MAX = 3,

};

// Enum Killstreak.ERestoreInfoInitBindType
enum class Killstreak_ERestoreInfoInitBindType : uint8_t
{
	ERestoreInfoInitBindType__Normal = 0,
	ERestoreInfoInitBindType__BindSelfOnComplete = 1,
	ERestoreInfoInitBindType__BindSelfAndChildrenOnComplete = 2,
	ERestoreInfoInitBindType__ERestoreInfoInitBindType_MAX = 3,

};

// Enum Killstreak.EKSSocketCrouchHandling
enum class Killstreak_EKSSocketCrouchHandling : uint8_t
{
	EKSSocketCrouchHandling__MaintainCapsuleBottomOffset = 0,
	EKSSocketCrouchHandling__MaintainCapsuleCenterOffset = 1,
	EKSSocketCrouchHandling__ApplyCustomOffset = 2,
	EKSSocketCrouchHandling__EKSSocketCrouchHandling_MAX = 3,

};

// Enum Killstreak.EKSSocketOffsetType
enum class Killstreak_EKSSocketOffsetType : uint8_t
{
	EKSSocketOffsetType__KeepRelativeToParent = 0,
	EKSSocketOffsetType__KeepRelativeToMesh = 1,
	EKSSocketOffsetType__KeepRelativeToCylinder = 2,
	EKSSocketOffsetType__EKSSocketOffsetType_MAX = 3,

};

// Enum Killstreak.ECameraShoulder
enum class Killstreak_ECameraShoulder : uint8_t
{
	ECameraShoulder__Right         = 0,
	ECameraShoulder__Left          = 1,
	ECameraShoulder__ECameraShoulder_MAX = 2,

};

// Enum Killstreak.EInputReleaseType
enum class Killstreak_EInputReleaseType : uint8_t
{
	EInputReleaseType__All         = 0,
	EInputReleaseType__RadialMenu  = 1,
	EInputReleaseType__EscapeMenu  = 2,
	EInputReleaseType__Scoreboard  = 3,
	EInputReleaseType__Map         = 4,
	EInputReleaseType__RadialMenuClose = 5,
	EInputReleaseType__EInputReleaseType_MAX = 6,

};

// Enum Killstreak.EKSContextualActionButtonMode
enum class Killstreak_EKSContextualActionButtonMode : uint8_t
{
	EKSContextualActionButtonMode__HoldUse = 0,
	EKSContextualActionButtonMode__HoldReload = 1,
	EKSContextualActionButtonMode__HoldNone = 2,
	EKSContextualActionButtonMode__EKSContextualActionButtonMode_MAX = 3,

};

// Enum Killstreak.EKSInputActionType
enum class Killstreak_EKSInputActionType : uint8_t
{
	EKSInputActionType__Press      = 0,
	EKSInputActionType__Hold       = 1,
	EKSInputActionType__Repeat     = 2,
	EKSInputActionType__EKSInputActionType_MAX = 3,

};

// Enum Killstreak.EControllerInputType
enum class Killstreak_EControllerInputType : uint8_t
{
	EControllerInputType__None     = 0,
	EControllerInputType__ADSBit   = 1,
	EControllerInputType__KeyboardMouse = 2,
	EControllerInputType__KeyboardMouseADS = 3,
	EControllerInputType__Gamepad  = 4,
	EControllerInputType__GamepadADS = 5,
	EControllerInputType__JoyCon   = 6,
	EControllerInputType__JoyConADS = 7,
	EControllerInputType__Touch    = 8,
	EControllerInputType__TouchADS = 9,
	EControllerInputType__PCGamepad = 10,
	EControllerInputType__PCGamepadADS = 11,
	EControllerInputType__EControllerInputType_MAX = 12,

};

// Enum Killstreak.EOcclusionType
enum class Killstreak_EOcclusionType : uint8_t
{
	EOcclusionType__None           = 0,
	EOcclusionType__Simple         = 1,
	EOcclusionType__Advanced       = 2,
	EOcclusionType__EOcclusionType_MAX = 3,

};

// Enum Killstreak.EKSVoiceOverState
enum class Killstreak_EKSVoiceOverState : uint8_t
{
	EKSVoiceOverState__Mute        = 0,
	EKSVoiceOverState__Duck        = 1,
	EKSVoiceOverState__Play        = 2,
	EKSVoiceOverState__EKSVoiceOverState_MAX = 3,

};

// Enum Killstreak.EKSResourceReplicationType
enum class Killstreak_EKSResourceReplicationType : uint8_t
{
	EKSResourceReplicationType__Standard = 0,
	EKSResourceReplicationType__Predictive = 1,
	EKSResourceReplicationType__EKSResourceReplicationType_MAX = 2,

};

// Enum Killstreak.EMuteMode
enum class Killstreak_EMuteMode : uint8_t
{
	EMuteMode__VoicechatOnly       = 0,
	EMuteMode__VoicechatAndQuips   = 1,
	EMuteMode__VoicechatAndCommunications = 2,
	EMuteMode__VoicechatQuipsCommunications = 3,
	EMuteMode__EMuteMode_MAX       = 4,

};

// Enum Killstreak.EKSPowerSlideEndReason
enum class Killstreak_EKSPowerSlideEndReason : uint8_t
{
	EKSPowerSlideEndReason__Expired = 0,
	EKSPowerSlideEndReason__Collide = 1,
	EKSPowerSlideEndReason__Fall   = 2,
	EKSPowerSlideEndReason__Action = 3,
	EKSPowerSlideEndReason__Interrupted = 4,
	EKSPowerSlideEndReason__FaceAway = 5,
	EKSPowerSlideEndReason__Unknown = 6,
	EKSPowerSlideEndReason__EKSPowerSlideEndReason_MAX = 7,

};

// Enum Killstreak.EKSGame_CustomMovement
enum class Killstreak_EKSGame_CustomMovement : uint8_t
{
	KSMOVE_Vaulting                = 0,
	KSMOVE_DiveFreeFall            = 1,
	KSMOVE_DiveParachute           = 2,
	KSMOVE_DodgeRoll               = 3,
	KSMOVE_ZipLine                 = 4,
	KSMOVE_FlightRecovery          = 5,
	KSMOVE_Ability                 = 6,
	KSMOVE_PowerSlide              = 7,
	KSMOVE_Kick                    = 8,
	KSMOVE_MAX                     = 9,

};

// Enum Killstreak.EScreenLogType
enum class Killstreak_EScreenLogType : uint8_t
{
	EScreenLogType__CombatLog      = 0,
	EScreenLogType__RadialMenuItemLog = 1,
	EScreenLogType__EScreenLogType_MAX = 2,

};

// Enum Killstreak.EEmoteCameraPositionType
enum class Killstreak_EEmoteCameraPositionType : uint8_t
{
	EEmoteCameraPositionType__None = 0,
	EEmoteCameraPositionType__Stand = 1,
	EEmoteCameraPositionType__Crouch = 2,
	EEmoteCameraPositionType__Prone = 3,
	EEmoteCameraPositionType__EEmoteCameraPositionType_MAX = 4,

};

// Enum Killstreak.ERadialWheelActivationMode
enum class Killstreak_ERadialWheelActivationMode : uint8_t
{
	ERadialWheelActivationMode__None = 0,
	ERadialWheelActivationMode__Gameplay = 1,
	ERadialWheelActivationMode__Cinematic = 2,
	ERadialWheelActivationMode__Lobby = 3,
	ERadialWheelActivationMode__ERadialWheelActivationMode_MAX = 4,

};

// Enum Killstreak.EKSLevelStreamingMethod
enum class Killstreak_EKSLevelStreamingMethod : uint8_t
{
	EKSLevelStreamingMethod__LevelStream = 0,
	EKSLevelStreamingMethod__PreLoaded = 1,
	EKSLevelStreamingMethod__EKSLevelStreamingMethod_MAX = 2,

};

// Enum Killstreak.EKSPriority
enum class Killstreak_EKSPriority : uint8_t
{
	EKSPriority__None              = 0,
	EKSPriority__Lowest            = 1,
	EKSPriority__VeryLow           = 2,
	EKSPriority__Low               = 3,
	EKSPriority__Medium            = 4,
	EKSPriority__High              = 5,
	EKSPriority__VeryHigh          = 6,
	EKSPriority__Highest           = 7,
	EKSPriority__EKSPriority_MAX   = 8,

};

// Enum Killstreak.EKSRevealType
enum class Killstreak_EKSRevealType : uint8_t
{
	EKSRevealType__NotRevealed     = 0,
	EKSRevealType__Normal          = 1,
	EKSRevealType__Permanent       = 2,
	EKSRevealType__EKSRevealType_MAX = 3,

};

// Enum Killstreak.EKSModSource
enum class Killstreak_EKSModSource : uint8_t
{
	EKSModSource__Standard         = 0,
	EKSModSource__Job              = 1,
	EKSModSource__GameMode         = 2,
	EKSModSource__EKSModSource_MAX = 3,

};

// Enum Killstreak.EExtractionTeamType
enum class Killstreak_EExtractionTeamType : uint8_t
{
	EExtractionTeamType__NotSet    = 0,
	EExtractionTeamType__Attacker  = 1,
	EExtractionTeamType__Defender  = 2,
	EExtractionTeamType__EExtractionTeamType_MAX = 3,

};

// Enum Killstreak.EKSRespawnMode
enum class Killstreak_EKSRespawnMode : uint8_t
{
	EKSRespawnMode__NoRespawn      = 0,
	EKSRespawnMode__QueueRespawn   = 1,
	EKSRespawnMode__TicketRespawn  = 2,
	EKSRespawnMode__AlwaysRespawn  = 3,
	EKSRespawnMode__EKSRespawnMode_MAX = 4,

};

// Enum Killstreak.EKSGameTicketDisplayType
enum class Killstreak_EKSGameTicketDisplayType : uint8_t
{
	EKSGameTicketDisplayType__Respawns = 0,
	EKSGameTicketDisplayType__BombPoints = 1,
	EKSGameTicketDisplayType__EKSGameTicketDisplayType_MAX = 2,

};

// Enum Killstreak.EKSPerSecondChargeMode
enum class Killstreak_EKSPerSecondChargeMode : uint8_t
{
	EKSPerSecondChargeMode__OverrideNone = 0,
	EKSPerSecondChargeMode__OverrideChargeable = 1,
	EKSPerSecondChargeMode__OverrideUnchargeable = 2,
	EKSPerSecondChargeMode__OverrideAll = 3,
	EKSPerSecondChargeMode__EKSPerSecondChargeMode_MAX = 4,

};

// Enum Killstreak.EKSMovementDirection
enum class Killstreak_EKSMovementDirection : uint8_t
{
	EKSMovementDirection__Forward  = 0,
	EKSMovementDirection__Right    = 1,
	EKSMovementDirection__Back     = 2,
	EKSMovementDirection__Left     = 3,
	EKSMovementDirection__EKSMovementDirection_MAX = 4,

};

// Enum Killstreak.EKSApparelGender
enum class Killstreak_EKSApparelGender : uint8_t
{
	EKSApparelGender__Unisex       = 0,
	EKSApparelGender__Male         = 1,
	EKSApparelGender__Female       = 2,
	EKSApparelGender__EKSApparelGender_MAX = 3,

};

// Enum Killstreak.EKSCharacterGender
enum class Killstreak_EKSCharacterGender : uint8_t
{
	EKSCharacterGender__Unknown    = 0,
	EKSCharacterGender__Male       = 1,
	EKSCharacterGender__Female     = 2,
	EKSCharacterGender__EKSCharacterGender_MAX = 3,

};

// Enum Killstreak.EPerceivedAlignmentType
enum class Killstreak_EPerceivedAlignmentType : uint8_t
{
	EPerceivedAlignmentType__Neutral = 0,
	EPerceivedAlignmentType__Friendly = 1,
	EPerceivedAlignmentType__Enemy = 2,
	EPerceivedAlignmentType__EPerceivedAlignmentType_MAX = 3,

};

// Enum Killstreak.EPlayerSilhouetteQualifier
enum class Killstreak_EPlayerSilhouetteQualifier : uint8_t
{
	EPlayerSilhouetteQualifier__NotSet = 0,
	EPlayerSilhouetteQualifier__Objective = 1,
	EPlayerSilhouetteQualifier__EPlayerSilhouetteQualifier_MAX = 2,

};

// Enum Killstreak.EPlayerSilhouetteType
enum class Killstreak_EPlayerSilhouetteType : uint8_t
{
	EPlayerSilhouetteType__None    = 0,
	EPlayerSilhouetteType__Neutral = 1,
	EPlayerSilhouetteType__Selected = 2,
	EPlayerSilhouetteType__Friendly = 3,
	EPlayerSilhouetteType__Enemy   = 4,
	EPlayerSilhouetteType__EPlayerSilhouetteType_MAX = 5,

};

// Enum Killstreak.EDamageCategory
enum class Killstreak_EDamageCategory : uint8_t
{
	EDamageCategory__Default       = 0,
	EDamageCategory__NonDamage     = 1,
	EDamageCategory__Firearm       = 2,
	EDamageCategory__Impact        = 3,
	EDamageCategory__Explosion     = 4,
	EDamageCategory__Melee         = 5,
	EDamageCategory__ThrownMelee   = 6,
	EDamageCategory__InstantDeath  = 7,
	EDamageCategory__Environmental = 8,
	EDamageCategory__Bleed         = 9,
	EDamageCategory__Fire          = 10,
	EDamageCategory__Poison        = 11,
	EDamageCategory__EDamageCategory_MAX = 12,

};

// Enum Killstreak.ELoadoutSlot
enum class Killstreak_ELoadoutSlot : uint8_t
{
	ELoadoutSlot__LoadoutSlot_None = 0,
	ELoadoutSlot__LoadoutSlot_SpecialtyOne = 1,
	ELoadoutSlot__LoadoutSlot_SpecialtyTwo = 2,
	ELoadoutSlot__LoadoutSlot_PerkOne = 3,
	ELoadoutSlot__LoadoutSlot_PerkTwo = 4,
	ELoadoutSlot__LoadoutSlot_PerkFour = 5,
	ELoadoutSlot__LoadoutSlot_KillstreakOne = 6,
	ELoadoutSlot__LoadoutSlot_KillstreakTwo = 7,
	ELoadoutSlot__LoadoutSlot_Pistol = 8,
	ELoadoutSlot__LoadoutSlot_PistolAttachOne = 9,
	ELoadoutSlot__LoadoutSlot_PistolAttachTwo = 10,
	ELoadoutSlot__LoadoutSlot_PistolAttachThree = 11,
	ELoadoutSlot__LoadoutSlot_PrimaryWeapon = 12,
	ELoadoutSlot__LoadoutSlot_PerkThree = 13,
	ELoadoutSlot__LoadoutSlot_GadgetOne = 14,
	ELoadoutSlot__LoadoutSlot_PassiveOne = 15,
	ELoadoutSlot__LoadoutSlot_PassiveTwo = 16,
	ELoadoutSlot__LoadoutSlot_SecondaryAbilityOne = 17,
	ELoadoutSlot__LoadoutSlot_SecondaryAbilityTwo = 18,
	ELoadoutSlot__LoadoutSlot_LoadoutBundleId = 19,
	ELoadoutSlot__LoadoutSlot_MAX  = 20,

};

// Enum Killstreak.TG_EQUIP_POINT
enum class Killstreak_ETG_EQUIP_POINT : uint8_t
{
	EQP_NONE                       = 0,
	EQP_AUTO                       = 1,
	EQP_OFFHAND                    = 2,
	EQP_OFFHAND01                  = 3,
	EQP_OFFHAND02                  = 4,
	EQP_OFFHAND03                  = 5,
	EQP_RECALL                     = 6,
	EQP_PASSIVE                    = 7,
	EQP_ACTIVE                     = 8,
	EQP_ACTIVE01                   = 9,
	EQP_ACTIVE02                   = 10,
	EQP_CONSUMABLE                 = 11,
	EQP_CONSUMABLE01               = 12,
	EQP_UNUSED                     = 13,
	EQP_UNUSED01                   = 14,
	EQP_UNUSED02                   = 15,
	EQP_UNUSED03                   = 16,
	EQP_UNUSED04                   = 17,
	EQP_UNUSED05                   = 18,
	EQP_ITEM_STORE                 = 19,
	EQP_ITEM_STORE01               = 20,
	EQP_ITEM_STORE02               = 21,
	EQP_ITEM_STORE03               = 22,
	EQP_ITEM_STORE04               = 23,
	EQP_OVER_DRAW                  = 24,
	EQP_MAX                        = 25,

};

// Enum Killstreak.EQueueDivertType
enum class Killstreak_EQueueDivertType : uint8_t
{
	EQueueDivertType__None         = 0,
	EQueueDivertType__ShelteredMM  = 1,
	EQueueDivertType__ForcedBotMatch = 2,
	EQueueDivertType__MercyMatch   = 3,
	EQueueDivertType__Other        = 4,
	EQueueDivertType__EQueueDivertType_MAX = 5,

};

// Enum Killstreak.EKSVehicleDeathState
enum class Killstreak_EKSVehicleDeathState : uint8_t
{
	EKSVehicleDeathState__Alive    = 0,
	EKSVehicleDeathState__DestroyedByDamage = 1,
	EKSVehicleDeathState__DestroyedBySuicide = 2,
	EKSVehicleDeathState__EKSVehicleDeathState_MAX = 3,

};

// Enum Killstreak.EKSWeaponDestroyReason
enum class Killstreak_EKSWeaponDestroyReason : uint8_t
{
	EKSWeaponDestroyReason__None   = 0,
	EKSWeaponDestroyReason__RemoveNoReplace = 1,
	EKSWeaponDestroyReason__RemoveWithReplace = 2,
	EKSWeaponDestroyReason__DropNoReplace = 3,
	EKSWeaponDestroyReason__DropWithReplace = 4,
	EKSWeaponDestroyReason__EKSWeaponDestroyReason_MAX = 5,

};

// Enum Killstreak.EReloadReplicationFlags
enum class Killstreak_EReloadReplicationFlags : uint8_t
{
	EReloadReplicationFlags__MinimumReplication = 0,
	EReloadReplicationFlags__ReplicateAmmo = 1,
	EReloadReplicationFlags__EReloadReplicationFlags_MAX = 2,

};

// Enum Killstreak.EFiredReplicationFlags
enum class Killstreak_EFiredReplicationFlags : uint8_t
{
	EFiredReplicationFlags__MinimumReplication = 0,
	EFiredReplicationFlags__ReplicateAmmo = 1,
	EFiredReplicationFlags__ReplicateAim = 2,
	EFiredReplicationFlags__ReplicateAimAndAmmo = 3,
	EFiredReplicationFlags__ReplicateAllFireParameters = 4,
	EFiredReplicationFlags__EFiredReplicationFlags_MAX = 5,

};

// Enum Killstreak.EKSBuildState
enum class Killstreak_EKSBuildState : uint8_t
{
	EKSBuildState__BUILD_PENDING_VALID = 0,
	EKSBuildState__BUILD_PENDING_INVALID = 1,
	EKSBuildState__BUILD_SUCCEEDED = 2,
	EKSBuildState__BUILD_FAILED    = 3,
	EKSBuildState__BUILD_MAX       = 4,

};

// Enum Killstreak.EKSWeaponCategoryType
enum class Killstreak_EKSWeaponCategoryType : uint8_t
{
	EKSWeaponCategoryType__Invalid = 0,
	EKSWeaponCategoryType__AssaultRifle = 1,
	EKSWeaponCategoryType__DMR     = 2,
	EKSWeaponCategoryType__LightMachineGun = 3,
	EKSWeaponCategoryType__Shotgun = 4,
	EKSWeaponCategoryType__SniperRifle = 5,
	EKSWeaponCategoryType__SubMachineGun = 6,
	EKSWeaponCategoryType__Pistol  = 7,
	EKSWeaponCategoryType__Melee   = 8,
	EKSWeaponCategoryType__Gadget  = 9,
	EKSWeaponCategoryType__EKSWeaponCategoryType_MAX = 10,

};

// Enum Killstreak.EThirdPersonAimOriginType
enum class Killstreak_EThirdPersonAimOriginType : uint8_t
{
	EThirdPersonAimOriginType__ActorEyes = 0,
	EThirdPersonAimOriginType__FixedRelativeLocation = 1,
	EThirdPersonAimOriginType__ComponentByTag = 2,
	EThirdPersonAimOriginType__SocketOnCharacterMesh = 3,
	EThirdPersonAimOriginType__EThirdPersonAimOriginType_MAX = 4,

};

// Enum Killstreak.EReticleType
enum class Killstreak_EReticleType : uint8_t
{
	EReticleType__Pistol           = 0,
	EReticleType__Rifle            = 1,
	EReticleType__Shotgun          = 2,
	EReticleType__DualAR           = 3,
	EReticleType__Gatling          = 4,
	EReticleType__ChaosLauncher    = 5,
	EReticleType__None             = 6,
	EReticleType__EReticleType_MAX = 7,

};

// Enum Killstreak.EReloadType
enum class Killstreak_EReloadType : uint8_t
{
	EReloadType__Clip              = 0,
	EReloadType__SingleShot        = 1,
	EReloadType__EReloadType_MAX   = 2,

};

// Enum Killstreak.EWeaponCastType
enum class Killstreak_EWeaponCastType : uint8_t
{
	EWeaponCastType__UseSettings   = 0,
	EWeaponCastType__AlwaysQuickCast = 1,
	EWeaponCastType__AlwaysNormalCast = 2,
	EWeaponCastType__EWeaponCastType_MAX = 3,

};

// Enum Killstreak.EFireModeType
enum class Killstreak_EFireModeType : uint8_t
{
	EFireModeType__Single          = 0,
	EFireModeType__Burst           = 1,
	EFireModeType__SemiAuto        = 2,
	EFireModeType__EFireModeType_MAX = 3,

};

// Enum Killstreak.EKSWeaponEquipType
enum class Killstreak_EKSWeaponEquipType : uint8_t
{
	EKSWeaponEquipType__Normal     = 0,
	EKSWeaponEquipType__Special    = 1,
	EKSWeaponEquipType__GameMode   = 2,
	EKSWeaponEquipType__Gambit     = 3,
	EKSWeaponEquipType__EKSWeaponEquipType_MAX = 4,

};

// Enum Killstreak.EExtendedMagazineRounding
enum class Killstreak_EExtendedMagazineRounding : uint8_t
{
	EExtendedMagazineRounding__NearestInteger = 0,
	EExtendedMagazineRounding__RoundUp = 1,
	EExtendedMagazineRounding__RoundDown = 2,
	EExtendedMagazineRounding__EExtendedMagazineRounding_MAX = 3,

};

// Enum Killstreak.EKSVariableScopeType
enum class Killstreak_EKSVariableScopeType : uint8_t
{
	EKSVariableScopeType__FixedFOV = 0,
	EKSVariableScopeType__ScopeMultiplier = 1,
	EKSVariableScopeType__EKSVariableScopeType_MAX = 2,

};

// Enum Killstreak.EBundledAmmoType
enum class Killstreak_EBundledAmmoType : uint8_t
{
	EBundledAmmoType__FullClip     = 0,
	EBundledAmmoType__DefaultAmmoFromAsset = 1,
	EBundledAmmoType__Override     = 2,
	EBundledAmmoType__EBundledAmmoType_MAX = 3,

};

// Enum Killstreak.EWeaponComponentAttachmentType
enum class Killstreak_EWeaponComponentAttachmentType : uint8_t
{
	EWeaponComponentAttachmentType__AttachToCharacter = 0,
	EWeaponComponentAttachmentType__AttachToMesh = 1,
	EWeaponComponentAttachmentType__EWeaponComponentAttachmentType_MAX = 2,

};

// Enum Killstreak.EGamepadTriggerType
enum class Killstreak_EGamepadTriggerType : uint8_t
{
	EGamepadTriggerType__RightTrigger = 0,
	EGamepadTriggerType__LeftTrigger = 1,
	EGamepadTriggerType__EGamepadTriggerType_MAX = 2,

};

// Enum Killstreak.ESkinObjectParentingType
enum class Killstreak_ESkinObjectParentingType : uint8_t
{
	ESkinObjectParentingType__Never = 0,
	ESkinObjectParentingType__ActiveAndMainHand = 1,
	ESkinObjectParentingType__Active = 2,
	ESkinObjectParentingType__InAction = 3,
	ESkinObjectParentingType__Always = 4,
	ESkinObjectParentingType__ESkinObjectParentingType_MAX = 5,

};

// Enum Killstreak.EWeaponComponentTickType
enum class Killstreak_EWeaponComponentTickType : uint8_t
{
	EWeaponComponentTickType__NeverTick = 0,
	EWeaponComponentTickType__TickWhenPrimary = 1,
	EWeaponComponentTickType__TickWhenActive = 2,
	EWeaponComponentTickType__AlwaysTick = 3,
	EWeaponComponentTickType__EWeaponComponentTickType_MAX = 4,

};

// Enum Killstreak.EWeaponMasteryRewardGroup
enum class Killstreak_EWeaponMasteryRewardGroup : uint8_t
{
	EWeaponMasteryRewardGroup__PriorityItems = 0,
	EWeaponMasteryRewardGroup__MiscRewards = 1,
	EWeaponMasteryRewardGroup__OtherItems = 2,
	EWeaponMasteryRewardGroup__Unknown = 3,
	EWeaponMasteryRewardGroup__EWeaponMasteryRewardGroup_MAX = 4,

};

//---------------------------------------------------------------------------
// Script Structs
//---------------------------------------------------------------------------

// ScriptStruct Killstreak.KSVoicelineEvent
// 0x0038
struct FKSVoicelineEvent
{
	struct FName                                       EventName;                                                 // 0x0000(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FName                                       SelfEventName;                                             // 0x0008(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	Killstreak_EKSVoicelineAudience                    Audience;                                                  // 0x0010(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	Killstreak_EKSVoicelineType                        VoicelineType;                                             // 0x0011(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_L1MH[0x2];                                     // 0x0012(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	float                                              ActivationChance;                                          // 0x0014(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bAffectedByGlobalCooldown;                                 // 0x0018(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_PFU5[0x3];                                     // 0x0019(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	int                                                CooldownGroup;                                             // 0x001C(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              CooldownDuration;                                          // 0x0020(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              VoicelineChangeValue;                                      // 0x0024(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	Killstreak_EKSVoiceOverPriority                    LinePriority;                                              // 0x0028(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bPlayedByOwnerAlready;                                     // 0x0029(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bPlaySpecificVoiceLine;                                    // 0x002A(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_8NT8[0x5];                                     // 0x002B(0x0005) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UAkAudioEvent*                               SpecificAkAudioEvent;                                      // 0x0030(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct Killstreak.AccoladeDisplayInfo
// 0x0068
struct FAccoladeDisplayInfo
{
	Killstreak_EAccoladeCategory                       Category;                                                  // 0x0000(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	Killstreak_EAccoladeEventType                      Type;                                                      // 0x0001(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_T55D[0x6];                                     // 0x0002(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UTexture2D*                                  DisplayIcon;                                               // 0x0008(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FText                                       DisplayTitle;                                              // 0x0010(0x0018) (Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, NativeAccessSpecifierPublic)
	float                                              DisplayDuration;                                           // 0x0028(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                Multiplier;                                                // 0x002C(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FKSVoicelineEvent                           AccoladeVoiceLine;                                         // 0x0030(0x0038) (Edit, DisableEditOnInstance, NoDestructor, NativeAccessSpecifierPublic)

};

// ScriptStruct Killstreak.ActivityAchievementInfo
// 0x0058
struct FActivityAchievementInfo
{
	bool                                               bIsAchievement;                                            // 0x0000(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_ZOZT[0x7];                                     // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	TMap<struct FName, struct FString>                 AchievementIdByOSSName;                                    // 0x0008(0x0050) (Edit, BlueprintVisible, BlueprintReadOnly, EditFixedSize, DisableEditOnInstance, NativeAccessSpecifierPublic)

};

// ScriptStruct Killstreak.ActivityTierStructure
// 0x00B8
struct FActivityTierStructure
{
	int                                                ProgressRequired;                                          // 0x0000(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_B3P7[0x4];                                     // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FText                                       Name;                                                      // 0x0008(0x0018) (Edit, BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic)
	struct FText                                       Description;                                               // 0x0020(0x0018) (Edit, BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic)
	unsigned char                                      Image[0x28];                                               // 0x0038(0x0028) UNKNOWN PROPERTY: SoftObjectProperty
	struct FActivityAchievementInfo                    PlatformAchievement;                                       // 0x0060(0x0058) (Edit, BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic)

};

// ScriptStruct Killstreak.TierRewardItemData
// 0x0010
struct FTierRewardItemData
{
	class UPUMG_StoreItem*                             RewardItem;                                                // 0x0000(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                QuantityInTier;                                            // 0x0008(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_MF72[0x4];                                     // 0x000C(0x0004) MISSED OFFSET (PADDING)

};

// ScriptStruct Killstreak.ActivityTier
// 0x0040
struct FActivityTier
{
	int                                                Tier;                                                      // 0x0000(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                StartingCount;                                             // 0x0004(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                Count;                                                     // 0x0008(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_TFWY[0x4];                                     // 0x000C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	TArray<struct FTierRewardItemData>                 RewardItems;                                               // 0x0010(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_R07V[0x20];                                    // 0x0020(0x0020) MISSED OFFSET (PADDING)

};

// ScriptStruct Killstreak.KSAffiliationFilter
// 0x0004
struct FKSAffiliationFilter
{
	bool                                               bCountEnemies;                                             // 0x0000(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bCountAllies;                                              // 0x0001(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bCountSelf;                                                // 0x0002(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bCountUnaffiliated;                                        // 0x0003(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct Killstreak.SizedArraySerializer
// 0x0000 (0x0070 - 0x0070)
struct FSizedArraySerializer : public FReplicatedLog
{

};

// ScriptStruct Killstreak.AgentStateChange
// 0x0002
struct FAgentStateChange : public FReplicatedLogItem
{
	Killstreak_EWeaponStateNew                         OldState;                                                  // 0x0000(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	Killstreak_EWeaponStateNew                         NewState;                                                  // 0x0001(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct Killstreak.AgentStateChangeList
// 0x0018 (0x0088 - 0x0070)
struct FAgentStateChangeList : public FSizedArraySerializer
{
	TWeakObjectPtr<class AKSAgent_Aimed>               Owner;                                                     // 0x0070(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	TArray<struct FAgentStateChange>                   StateChanges;                                              // 0x0078(0x0010) (ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)

};

// ScriptStruct Killstreak.AimData
// 0x0050
struct FAimData
{
	struct FVector_NetQuantize10                       StartTrace;                                                // 0x0000(0x000C) (BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector_NetQuantizeNormal                   Direction;                                                 // 0x000C(0x000C) (BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector_NetQuantize10                       ViewPoint;                                                 // 0x0018(0x000C) (BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	Killstreak_EAimDataMode                            AimDataMode;                                               // 0x0024(0x0001) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_HBMP[0x3];                                     // 0x0025(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FVector_NetQuantize10                       EndTrace;                                                  // 0x0028(0x000C) (BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector_NetQuantizeNormal                   ImpactNormal;                                              // 0x0034(0x000C) (BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<struct FVector_NetQuantizeNormal>           SpreadDirections;                                          // 0x0040(0x0010) (BlueprintVisible, ZeroConstructor, RepSkip, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct Killstreak.KSBTDifficultyConfig
// 0x0078
struct FKSBTDifficultyConfig
{
	float                                              AccuracyMultiplierStandard;                                // 0x0000(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              AccuracyMultiplierThrownMelee;                             // 0x0004(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              AccuracyMultiplierThrownGrenade;                           // 0x0008(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              AccuracyMultiplierWhenBlinded;                             // 0x000C(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              AccuracyMultiplierWhenCrosshairHidden;                     // 0x0010(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              NewTargetAccuracyMultiplier;                               // 0x0014(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              NewTargetTime;                                             // 0x0018(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              SpeedMultiplier;                                           // 0x001C(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              AttackDelayClipPercentMin;                                 // 0x0020(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              AttackDelayClipPercentMax;                                 // 0x0024(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              AttackDelay;                                               // 0x0028(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              DamageDealtMultiplier;                                     // 0x002C(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              HeadshotDamageDealtMultiplier;                             // 0x0030(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              DamageTakenMultiplier;                                     // 0x0034(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              HeadshotDamageTakenMultiplier;                             // 0x0038(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              AimForHeadshotProbability;                                 // 0x003C(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              DodgeRollProbability;                                      // 0x0040(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              StrafeProbability;                                         // 0x0044(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              ThrowGrenadeProbability;                                   // 0x0048(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              ThrowMeleeProbability;                                     // 0x004C(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              PerceptionStrengthMin;                                     // 0x0050(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              PerceptionStrengthMax;                                     // 0x0054(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<class UKSBTAction*>                         AllowedActions;                                            // 0x0058(0x0010) (Edit, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<class UKSBTAction*>                         DisallowedActions;                                         // 0x0068(0x0010) (Edit, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct Killstreak.KSInitialLoadout
// 0x0010
struct FKSInitialLoadout
{
	TArray<class UKSItem*>                             LoadoutItems;                                              // 0x0000(0x0010) (Edit, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct Killstreak.KSBTItemPriorityTableRow
// 0x0038 (0x0040 - 0x0008)
struct FKSBTItemPriorityTableRow : public FTableRowBase
{
	unsigned char                                      ItemAsset[0x28];                                           // 0x0008(0x0028) UNKNOWN PROPERTY: SoftObjectProperty
	float                                              Weight;                                                    // 0x0030(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              ShopPurchaseWeight;                                        // 0x0034(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              ShopPriorityGroup;                                         // 0x0038(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              Multiplier;                                                // 0x003C(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct Killstreak.AimAssistActorHealthInfo
// 0x0008
struct FAimAssistActorHealthInfo
{
	float                                              CurrentHealth;                                             // 0x0000(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bKilled;                                                   // 0x0004(0x0001) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_BGP1[0x3];                                     // 0x0005(0x0003) MISSED OFFSET (PADDING)

};

// ScriptStruct Killstreak.RankedAimAssistTarget
// 0x0048
struct FRankedAimAssistTarget
{
	class UKSAimAssistAnchorComponent*                 Anchor;                                                    // 0x0000(0x0008) (BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      Target[0x10];                                              // 0x0008(0x0010) UNKNOWN PROPERTY: InterfaceProperty
	float                                              HeadWeight;                                                // 0x0018(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector2D                                   BodyLocation;                                              // 0x001C(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector2D                                   HeadLocation;                                              // 0x0024(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FBox2D                                      ScaledProjectionBounds;                                    // 0x002C(0x0014) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NoDestructor, NativeAccessSpecifierPublic)
	float                                              DistanceFromCamera;                                        // 0x0040(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                UpdateCount;                                               // 0x0044(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct Killstreak.KSAimAssistPropertyBool
// 0x0002
struct FKSAimAssistPropertyBool
{
	Killstreak_EControllerInputType                    InputType;                                                 // 0x0000(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               Value;                                                     // 0x0001(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct Killstreak.KSAimAssistPropertyFloat
// 0x0008
struct FKSAimAssistPropertyFloat
{
	Killstreak_EControllerInputType                    InputType;                                                 // 0x0000(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_0M3B[0x3];                                     // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	float                                              Value;                                                     // 0x0004(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct Killstreak.KSAimAssistPropertyCurveVector
// 0x0010
struct FKSAimAssistPropertyCurveVector
{
	Killstreak_EControllerInputType                    InputType;                                                 // 0x0000(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_DMEM[0x7];                                     // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UCurveVector*                                Value;                                                     // 0x0008(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct Killstreak.KSAimAssistPropertyCurveFloat
// 0x0010
struct FKSAimAssistPropertyCurveFloat
{
	Killstreak_EControllerInputType                    InputType;                                                 // 0x0000(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_658D[0x7];                                     // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UCurveFloat*                                 Value;                                                     // 0x0008(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct Killstreak.KSBTObjectivePriorityTableRow
// 0x0058 (0x0060 - 0x0008)
struct FKSBTObjectivePriorityTableRow : public FTableRowBase
{
	class UKSBTObjective*                              Objective;                                                 // 0x0008(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              MinDistance;                                               // 0x0010(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              MaxDistance;                                               // 0x0014(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              MaxSecondsElapsed;                                         // 0x0018(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              MinSecondsElapsed;                                         // 0x001C(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              MaxSecondsRemaining;                                       // 0x0020(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              MinSecondsRemaining;                                       // 0x0024(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              Priority;                                                  // 0x0028(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_TZEW[0x4];                                     // 0x002C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	unsigned char                                      RequiredAbilities[0x10];                                   // 0x002C(0x0010) UNKNOWN PROPERTY: ArrayProperty
	TArray<class UKSBTTargetSelector*>                 ObjectiveValidationArray;                                  // 0x0040(0x0010) (Edit, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UDataTable*                                  TargetSelectionTable;                                      // 0x0050(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UDataTable*                                  OverrideDataTable;                                         // 0x0058(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct Killstreak.KSAIMapPointStimulusEvent
// 0x0010
struct FKSAIMapPointStimulusEvent
{
	class AActor*                                      Broadcaster;                                               // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_1UIU[0x8];                                     // 0x0008(0x0008) MISSED OFFSET (PADDING)

};

// ScriptStruct Killstreak.AIObjectiveEvent
// 0x0030
struct FAIObjectiveEvent
{
	unsigned char                                      UnknownData_LV8P[0x4];                                     // 0x0000(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FVector                                     ObjectiveLocation;                                         // 0x0004(0x000C) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              Loudness;                                                  // 0x0010(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              MaxRange;                                                  // 0x0014(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class AActor*                                      Instigator;                                                // 0x0018(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FName                                       Tag;                                                       // 0x0020(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_XB13[0x8];                                     // 0x0028(0x0008) MISSED OFFSET (PADDING)

};

// ScriptStruct Killstreak.KSAIPlayerStimulusEvent
// 0x0038
struct FKSAIPlayerStimulusEvent
{
	unsigned char                                      UnknownData_GI95[0x28];                                    // 0x0000(0x0028) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class AActor*                                      Broadcaster;                                               // 0x0028(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class AActor*                                      Enemy;                                                     // 0x0030(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct Killstreak.KSAITeamStimulusEvent
// 0x0038
struct FKSAITeamStimulusEvent
{
	unsigned char                                      UnknownData_YCG3[0x28];                                    // 0x0000(0x0028) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class AActor*                                      Broadcaster;                                               // 0x0028(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class AActor*                                      Enemy;                                                     // 0x0030(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct Killstreak.Announcement
// 0x0040
struct FAnnouncement
{
	class UAkAudioEvent*                               AkEvent;                                                   // 0x0000(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UAkAudioEvent*                               AltAkEvent;                                                // 0x0008(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	Killstreak_EKSVoiceOverPriority                    Priority;                                                  // 0x0010(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_98SM[0x3];                                     // 0x0011(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	float                                              Lifetime;                                                  // 0x0014(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              ValidUntil;                                                // 0x0018(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              Delay;                                                     // 0x001C(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              Lockout;                                                   // 0x0020(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              RTPC;                                                      // 0x0024(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                TeamNum;                                                   // 0x0028(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_49H6[0x4];                                     // 0x002C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FSerializedMctsNetId                        PlayerId;                                                  // 0x0030(0x0008) (Edit, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UAkAudioEvent*                               TargetPlayerAkEvent;                                       // 0x0038(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct Killstreak.TimeAnnouncement
// 0x0060
struct FTimeAnnouncement
{
	float                                              Time;                                                      // 0x0000(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_8KHA[0x4];                                     // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FAnnouncement                               Announcement;                                              // 0x0008(0x0040) (Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, NativeAccessSpecifierPublic)
	TArray<struct FName>                               AnnouncementGroups;                                        // 0x0048(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               Block;                                                     // 0x0058(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_PAH7[0x7];                                     // 0x0059(0x0007) MISSED OFFSET (PADDING)

};

// ScriptStruct Killstreak.TimeAnnouncementList
// 0x0010
struct FTimeAnnouncementList
{
	TArray<struct FTimeAnnouncement>                   TimeAnnouncements;                                         // 0x0000(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct Killstreak.SoftDataTableInfo
// 0x0078
struct FSoftDataTableInfo
{
	unsigned char                                      DataTable[0x28];                                           // 0x0000(0x0028) UNKNOWN PROPERTY: SoftObjectProperty
	int                                                TablePriority;                                             // 0x0028(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_2JRP[0x4];                                     // 0x002C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FGameplayTagQuery                           SkinTagQuery;                                              // 0x0030(0x0048) (Edit, BlueprintVisible, NativeAccessSpecifierPublic)

};

// ScriptStruct Killstreak.KSEquipmentId
// 0x0004
struct FKSEquipmentId
{
	Killstreak_EKSEquipmentType                        Type;                                                      // 0x0000(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_IF6D[0x1];                                     // 0x0001(0x0001) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	uint16_t                                           EquipmentIdNumber;                                         // 0x0002(0x0002) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct Killstreak.GiveItemParameters
// 0x001C
struct FGiveItemParameters
{
	Killstreak_EItemSourceType                         ItemSource;                                                // 0x0000(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_QGLB[0x3];                                     // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FGameplayTag                                PreferredEquipPoint;                                       // 0x0004(0x0008) (Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                OriginalOwnerId;                                           // 0x000C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                ObjectiveId;                                               // 0x0010(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                Price;                                                     // 0x0014(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bActivate;                                                 // 0x0018(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_LEAH[0x3];                                     // 0x0019(0x0003) MISSED OFFSET (PADDING)

};

// ScriptStruct Killstreak.KSEquipRepInfo
// 0x0014
struct FKSEquipRepInfo
{
	bool                                               NoEquipPoint;                                              // 0x0000(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_9OZ2[0x3];                                     // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FGameplayTag                                EquipPoint;                                                // 0x0004(0x0008) (NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint32_t                                           UpdateId;                                                  // 0x000C(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FKSEquipmentId                              ComponentId;                                               // 0x0010(0x0004) (HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct Killstreak.AuxiliaryWeaponInfo
// 0x0010
struct FAuxiliaryWeaponInfo
{
	struct FName                                       AuxiliarySlot;                                             // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class AKSWeapon*                                   ParentWeapon;                                              // 0x0008(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct Killstreak.KSActionRestrictor
// 0x0008
struct FKSActionRestrictor
{
	bool                                               bRestrictMove;                                             // 0x0000(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bRestrictFire;                                             // 0x0001(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bRestrictAltFire;                                          // 0x0002(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bRestrictAbility;                                          // 0x0003(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bRestrictAim;                                              // 0x0004(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bRestrictRoll;                                             // 0x0005(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bRestrictWeaponSwaps;                                      // 0x0006(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bRestrictReload;                                           // 0x0007(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct Killstreak.WeaponStateGraph
// 0x0140
struct FWeaponStateGraph
{
	unsigned char                                      UnknownData_Q08T[0x140];                                   // 0x0000(0x0140) MISSED OFFSET (PADDING)

};

// ScriptStruct Killstreak.PrefireSkipWindow
// 0x0028
struct FPrefireSkipWindow
{
	float                                              WindowDuration;                                            // 0x0000(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              WindowExpiration;                                          // 0x0004(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     LungeMontageSequence;                                      // 0x0008(0x0010) (Edit, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     TargetMontageSequence;                                     // 0x0018(0x0010) (Edit, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct Killstreak.ADSBlurValues
// 0x0030
struct FADSBlurValues
{
	bool                                               AdsBlurDisabled;                                           // 0x0000(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Config, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_WD01[0x3];                                     // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	float                                              BlurDistance;                                              // 0x0004(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Config, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              MaskExponential;                                           // 0x0008(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Config, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              HardnessOfMask;                                            // 0x000C(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Config, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              SphereMaskRadius;                                          // 0x0010(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Config, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              SphereMaskScaleX;                                          // 0x0014(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Config, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              SphereMaskScaleY;                                          // 0x0018(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Config, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               EnableCubeMask;                                            // 0x001C(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Config, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_O30E[0x3];                                     // 0x001D(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	float                                              CubeMaskPosX;                                              // 0x0020(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Config, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              CubeMaskPosY;                                              // 0x0024(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Config, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              CubeMaskScaleX;                                            // 0x0028(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Config, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              CubeMaskScaleY;                                            // 0x002C(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Config, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct Killstreak.BundledAmmoInfo
// 0x000C
struct FBundledAmmoInfo
{
	Killstreak_EBundledAmmoType                        BundleType;                                                // 0x0000(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_BFWW[0x3];                                     // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	int                                                ReserveAmmo;                                               // 0x0004(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                AmmoInClip;                                                // 0x0008(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct Killstreak.KSEquipmentContainerEntry
// 0x00AC (0x00B8 - 0x000C)
struct FKSEquipmentContainerEntry : public FFastArraySerializerItem
{
	uint16_t                                           EquipmentId;                                               // 0x000C(0x0002) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_G2SS[0x2];                                     // 0x000E(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	uint16_t                                           ParentEquipmentId;                                         // 0x0010(0x0002) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_LLVQ[0x2];                                     // 0x0012(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FGameplayTag                                EquipPoint;                                                // 0x0014(0x0008) (NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_Z1W6[0x8];                                     // 0x001C(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	bool                                               bAlwaysReplicateExtraInfo;                                 // 0x0024(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_E8RA[0x1];                                     // 0x0025(0x0001) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	uint16_t                                           ExtraInfo;                                                 // 0x0026(0x0002) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_MM2L[0x8];                                     // 0x0028(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UKSItem*                                     Item;                                                      // 0x0030(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UKSItem*                                     LocalItem;                                                 // 0x0038(0x0008) (ZeroConstructor, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bWeaponComponentIsReplicated;                              // 0x0040(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_L04B[0x3];                                     // 0x0041(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	TWeakObjectPtr<class UKSEquipmentCosmeticComponent> CosmeticComponent;                                         // 0x0044(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TWeakObjectPtr<class UKSWeaponAttachmentCosmeticInst> AttachmentCosmeticComponent;                               // 0x004C(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bMarkedStale;                                              // 0x0054(0x0001) (ZeroConstructor, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_WL8P[0x3B];                                    // 0x0055(0x003B) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	unsigned char                                      ParentAsset[0x28];                                         // 0x0055(0x0028) UNKNOWN PROPERTY: SoftObjectProperty

};

// ScriptStruct Killstreak.KSEquipmentContainer
// 0x0120 (0x0228 - 0x0108)
struct FKSEquipmentContainer : public FFastArraySerializer
{
	class AActor*                                      Owner;                                                     // 0x0108(0x0008) (ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	unsigned char                                      OwnerAsEquipmentContainerOwner[0x10];                      // 0x0110(0x0010) UNKNOWN PROPERTY: InterfaceProperty
	TMap<struct FKSEquipmentId, struct FKSEquipmentContainerEntry> PendingEquipment;                                          // 0x0120(0x0050) (Transient, ContainsInstancedReference, NativeAccessSpecifierPrivate)
	TArray<struct FKSEquipmentContainerEntry>          Equipment;                                                 // 0x0170(0x0010) (ZeroConstructor, ContainsInstancedReference, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	TArray<struct FKSEquipmentContainerEntry>          PropEquipment;                                             // 0x0180(0x0010) (ZeroConstructor, ContainsInstancedReference, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint16_t                                           NextEquipmentId;                                           // 0x0190(0x0002) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint16_t                                           NextPropId;                                                // 0x0192(0x0002) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData_7K2W[0x4];                                     // 0x0194(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	TArray<struct FKSEquipmentContainerEntry>          StaleEquipment;                                            // 0x0198(0x0010) (ZeroConstructor, Transient, ContainsInstancedReference, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData_MN67[0x80];                                    // 0x01A8(0x0080) MISSED OFFSET (PADDING)

};

// ScriptStruct Killstreak.KSObjectiveState
// 0x0028
struct FKSObjectiveState
{
	Killstreak_EKSObjectiveState                       State;                                                     // 0x0000(0x0001) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_6CIC[0x3];                                     // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	int                                                Team;                                                      // 0x0004(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class AKSPlayerState*                              Holder;                                                    // 0x0008(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      PointOfInterest[0x10];                                     // 0x0010(0x0010) UNKNOWN PROPERTY: InterfaceProperty
	class UObject*                                     POI;                                                       // 0x0020(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct Killstreak.KSObjectiveTimerInfo
// 0x0038
struct FKSObjectiveTimerInfo
{
	class UKSTimerComponent*                           ObjectiveTimer;                                            // 0x0000(0x0008) (BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<struct FScriptDelegate>                     ObjectiveTimerActiveCallbacks;                             // 0x0008(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, RepSkip, ContainsInstancedReference, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<struct FScriptDelegate>                     ObjectiveTimerCompleteCallbacks;                           // 0x0018(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, RepSkip, ContainsInstancedReference, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<struct FScriptDelegate>                     ObjectiveTimerTickCallbacks;                               // 0x0028(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, RepSkip, ContainsInstancedReference, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct Killstreak.KSObjectiveCaptureInfo
// 0x0014
struct FKSObjectiveCaptureInfo
{
	float                                              BaseCaptureTime;                                           // 0x0000(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              BaseRecaptureTime;                                         // 0x0004(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              CaptureRatePercentIncreasePerPlayer;                       // 0x0008(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              FullCaptureDecayTime;                                      // 0x000C(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bPlayerMustBePresentToKeep;                                // 0x0010(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bIsValid;                                                  // 0x0011(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_AVCA[0x2];                                     // 0x0012(0x0002) MISSED OFFSET (PADDING)

};

// ScriptStruct Killstreak.PlayerCombatInfo
// 0x0020
struct FPlayerCombatInfo
{
	int                                                PlayerId;                                                  // 0x0000(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                PlayerTeamNum;                                             // 0x0004(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class AKSPlayerState*                              PlayerState;                                               // 0x0008(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class AKSPlayerState*                              PlayerVictim;                                              // 0x0010(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              TimeLeft;                                                  // 0x0018(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_KAJ3[0x4];                                     // 0x001C(0x0004) MISSED OFFSET (PADDING)

};

// ScriptStruct Killstreak.BotSpawnTableRow
// 0x0190 (0x0198 - 0x0008)
struct FBotSpawnTableRow : public FTableRowBase
{
	unsigned char                                      Character[0x28];                                           // 0x0008(0x0028) UNKNOWN PROPERTY: SoftClassProperty
	unsigned char                                      Controller[0x28];                                          // 0x0030(0x0028) UNKNOWN PROPERTY: SoftClassProperty
	unsigned char                                      BehaviorTree1[0x28];                                       // 0x0058(0x0028) UNKNOWN PROPERTY: SoftObjectProperty
	class UKSBTDifficulty*                             InitialDifficulty;                                         // 0x0080(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UDataTable*                                  DifficultyTable;                                           // 0x0088(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               AllowDynamicDifficulty;                                    // 0x0090(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_LIRX[0x7];                                     // 0x0091(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FKSBTDifficultyConfig                       SpawnDifficultyConfig;                                     // 0x0098(0x0078) (Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	unsigned char                                      ItemLoadoutTables[0x10];                                   // 0x0110(0x0010) UNKNOWN PROPERTY: ArrayProperty
	class UDataTable*                                  ObjectivePriorityTable;                                    // 0x0120(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UDataTable*                                  ItemPriorityTable;                                         // 0x0128(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FGameplayTagQuery                           AllowedJobQuery;                                           // 0x0130(0x0048) (Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	class UDataTable*                                  AbilityTable;                                              // 0x0178(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UDataTable*                                  RandomCharacterSkinTable;                                  // 0x0180(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UDataTable*                                  RandomEquipmentSkinTable;                                  // 0x0188(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bIsPlayer;                                                 // 0x0190(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bUseGameModeInventory;                                     // 0x0191(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bDelayPawnUntilLoadoutComplete;                            // 0x0192(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_H2SU[0x5];                                     // 0x0193(0x0005) MISSED OFFSET (PADDING)

};

// ScriptStruct Killstreak.KSCharacterStateFilter
// 0x0098
struct FKSCharacterStateFilter
{
	bool                                               bCheckHealth;                                              // 0x0000(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TEnumAsByte<AIModule_EArithmeticKeyOperation>      HealthOperation;                                           // 0x0001(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_4V5M[0x2];                                     // 0x0002(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	float                                              HealthPercent;                                             // 0x0004(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bCheckDowned;                                              // 0x0008(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TEnumAsByte<AIModule_EBasicKeyOperation>           Downed;                                                    // 0x0009(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bCheckDead;                                                // 0x000A(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TEnumAsByte<AIModule_EBasicKeyOperation>           Dead;                                                      // 0x000B(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bCheckCrouched;                                            // 0x000C(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TEnumAsByte<AIModule_EBasicKeyOperation>           Crouched;                                                  // 0x000D(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bCheckFalling;                                             // 0x000E(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TEnumAsByte<AIModule_EBasicKeyOperation>           Falling;                                                   // 0x000F(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bCheckSprinting;                                           // 0x0010(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TEnumAsByte<AIModule_EBasicKeyOperation>           Sprinting;                                                 // 0x0011(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bCheckSwimming;                                            // 0x0012(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TEnumAsByte<AIModule_EBasicKeyOperation>           Swimming;                                                  // 0x0013(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bCheckRidingZipline;                                       // 0x0014(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TEnumAsByte<AIModule_EBasicKeyOperation>           RidingZipline;                                             // 0x0015(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bCheckIsBot;                                               // 0x0016(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TEnumAsByte<AIModule_EBasicKeyOperation>           IsBot;                                                     // 0x0017(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bCheckBehaviorState;                                       // 0x0018(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TEnumAsByte<AIModule_EBasicKeyOperation>           BehaviorOperation;                                         // 0x0019(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	Killstreak_ECharacterBehaviorState                 BehaviorState;                                             // 0x001A(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bCheckInteracting;                                         // 0x001B(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TEnumAsByte<AIModule_EBasicKeyOperation>           Interacting;                                               // 0x001C(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bCheckInteractableClass;                                   // 0x001D(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_1FYP[0x2];                                     // 0x001E(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UClass*                                      InteractableClass;                                         // 0x0020(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              MinInteractTimeRemaining;                                  // 0x0028(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              MaxInteractTimeRemaining;                                  // 0x002C(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bCheckADS;                                                 // 0x0030(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TEnumAsByte<AIModule_EBasicKeyOperation>           ADS;                                                       // 0x0031(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bCheckHasReviver;                                          // 0x0032(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TEnumAsByte<AIModule_EBasicKeyOperation>           HasReviver;                                                // 0x0033(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bCheckReviverAffiliation;                                  // 0x0034(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FKSAffiliationFilter                        ReviverAffiliation;                                        // 0x0035(0x0004) (Edit, NoDestructor, NativeAccessSpecifierPublic)
	bool                                               bCheckIsOnFire;                                            // 0x0039(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TEnumAsByte<AIModule_EBasicKeyOperation>           IsOnFire;                                                  // 0x003A(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bCheckIsWeaponEquipped;                                    // 0x003B(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TEnumAsByte<AIModule_EBasicKeyOperation>           IsWeaponEquipped;                                          // 0x003C(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_15EU[0x3];                                     // 0x003D(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UClass*                                      EquippedWeaponClass;                                       // 0x0040(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bCheckIsWeaponAssetEquipped;                               // 0x0048(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TEnumAsByte<AIModule_EBasicKeyOperation>           IsWeaponAssetEquipped;                                     // 0x0049(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_4K6Y[0x6];                                     // 0x004A(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	unsigned char                                      EquippedWeaponAsset[0x28];                                 // 0x004A(0x0028) UNKNOWN PROPERTY: SoftObjectProperty
	bool                                               bCheckRoles;                                               // 0x0078(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_P5IO[0x7];                                     // 0x0079(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	TArray<Killstreak_ECharacterRole>                  RolesToCheck;                                              // 0x0080(0x0010) (Edit, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bRequireAllRoles;                                          // 0x0090(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_IEVK[0x7];                                     // 0x0091(0x0007) MISSED OFFSET (PADDING)

};

// ScriptStruct Killstreak.KSInteractableStateFilter
// 0x0018
struct FKSInteractableStateFilter
{
	bool                                               bCheckIsInteracting;                                       // 0x0000(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TEnumAsByte<AIModule_EBasicKeyOperation>           IsInteracting;                                             // 0x0001(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bCheckInteractorAffiliation;                               // 0x0002(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FKSAffiliationFilter                        InteractorAffiliation;                                     // 0x0003(0x0004) (Edit, NoDestructor, NativeAccessSpecifierPublic)
	bool                                               bCheckCanInteract;                                         // 0x0007(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TEnumAsByte<AIModule_EBasicKeyOperation>           CanInteract;                                               // 0x0008(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bCheckInteractableClass;                                   // 0x0009(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_ZP0K[0x6];                                     // 0x000A(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UClass*                                      InteractableClass;                                         // 0x0010(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct Killstreak.KSDestructibleStateFilter
// 0x0002
struct FKSDestructibleStateFilter
{
	bool                                               bCheckIsDestroyed;                                         // 0x0000(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TEnumAsByte<AIModule_EBasicKeyOperation>           Destroyed;                                                 // 0x0001(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct Killstreak.KSItemDropStateFilter
// 0x0010
struct FKSItemDropStateFilter
{
	bool                                               bCheckEquipPoint;                                          // 0x0000(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_DAN8[0x3];                                     // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FGameplayTag                                EquipPoint;                                                // 0x0004(0x0008) (Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bCheckHasBeenSeen;                                         // 0x000C(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TEnumAsByte<AIModule_EBasicKeyOperation>           HasBeenSeen;                                               // 0x000D(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bCheckIsInActiveState;                                     // 0x000E(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TEnumAsByte<AIModule_EBasicKeyOperation>           IsInActiveState;                                           // 0x000F(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct Killstreak.KSLootSiteFilter
// 0x0002
struct FKSLootSiteFilter
{
	bool                                               bCheckHasBeenSeen;                                         // 0x0000(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TEnumAsByte<AIModule_EBasicKeyOperation>           HasBeenSeen;                                               // 0x0001(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct Killstreak.KSDestroyableHazardStateFilter
// 0x0007
struct FKSDestroyableHazardStateFilter
{
	bool                                               bReturnTrueIfNotDestroyableHazard;                         // 0x0000(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bCheckCanBotDetect;                                        // 0x0001(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TEnumAsByte<AIModule_EBasicKeyOperation>           CanBotDetect;                                              // 0x0002(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bCheckShouldDestroyWithGunfire;                            // 0x0003(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TEnumAsByte<AIModule_EBasicKeyOperation>           ShouldDestroyWithGunfire;                                  // 0x0004(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bCheckShouldDestroyWithEMP;                                // 0x0005(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TEnumAsByte<AIModule_EBasicKeyOperation>           ShouldDestroyWithEMP;                                      // 0x0006(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct Killstreak.KSMapPointStateFilter
// 0x0030
struct FKSMapPointStateFilter
{
	bool                                               bCheckMapPointType;                                        // 0x0000(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_NI78[0x7];                                     // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FGameplayTagContainer                       RequiredMapPointTypes;                                     // 0x0008(0x0020) (Edit, NativeAccessSpecifierPublic)
	bool                                               bCheckIsPointActive;                                       // 0x0028(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TEnumAsByte<AIModule_EBasicKeyOperation>           IsPointActive;                                             // 0x0029(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bCheckIsPointAvailable;                                    // 0x002A(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TEnumAsByte<AIModule_EBasicKeyOperation>           IsPointAvailable;                                          // 0x002B(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bCheckIsPointFriendly;                                     // 0x002C(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TEnumAsByte<AIModule_EBasicKeyOperation>           IsPointFriendly;                                           // 0x002D(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_UDBI[0x2];                                     // 0x002E(0x0002) MISSED OFFSET (PADDING)

};

// ScriptStruct Killstreak.KSObjectiveStateFilter
// 0x0018
struct FKSObjectiveStateFilter
{
	bool                                               bCheckObjectiveState;                                      // 0x0000(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TEnumAsByte<AIModule_EBasicKeyOperation>           MatchesObjectiveState;                                     // 0x0001(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_18JA[0x6];                                     // 0x0002(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	TArray<struct FName>                               StateNamesToCheck;                                         // 0x0008(0x0010) (Edit, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct Killstreak.KSPerceptionFilter
// 0x0170
struct FKSPerceptionFilter
{
	struct FName                                       PerceptionEvent;                                           // 0x0000(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FKSAffiliationFilter                        AffiliationFilter;                                         // 0x0008(0x0004) (Edit, NoDestructor, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_G4J0[0x4];                                     // 0x000C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FKSCharacterStateFilter                     CharacterStateFilter;                                      // 0x0010(0x0098) (Edit, NativeAccessSpecifierPublic)
	struct FKSInteractableStateFilter                  InteractableStateFilter;                                   // 0x00A8(0x0018) (Edit, NoDestructor, NativeAccessSpecifierPublic)
	struct FKSDestructibleStateFilter                  DestructibleStateFilter;                                   // 0x00C0(0x0002) (Edit, NoDestructor, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_JSM1[0x2];                                     // 0x00C2(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FKSItemDropStateFilter                      ItemDropStateFilter;                                       // 0x00C4(0x0010) (Edit, NoDestructor, NativeAccessSpecifierPublic)
	struct FKSLootSiteFilter                           LootSiteFilter;                                            // 0x00D4(0x0002) (Edit, NoDestructor, NativeAccessSpecifierPublic)
	struct FKSDestroyableHazardStateFilter             DestroyableHazardStateFilter;                              // 0x00D6(0x0007) (Edit, NoDestructor, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_6K32[0x3];                                     // 0x00DD(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FKSMapPointStateFilter                      MapPointStateFilter;                                       // 0x00E0(0x0030) (Edit, NativeAccessSpecifierPublic)
	struct FKSObjectiveStateFilter                     ObjectiveStateFilter;                                      // 0x0110(0x0018) (Edit, NativeAccessSpecifierPublic)
	bool                                               bCheckDistance;                                            // 0x0128(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TEnumAsByte<AIModule_EArithmeticKeyOperation>      DistanceOperation;                                         // 0x0129(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_4V5L[0x2];                                     // 0x012A(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	float                                              Distance;                                                  // 0x012C(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bCheckDistanceRange;                                       // 0x0130(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_HQ1O[0x3];                                     // 0x0131(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	float                                              MinDistance;                                               // 0x0134(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              MaxDistance;                                               // 0x0138(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bCheckActorClass;                                          // 0x013C(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_5OPR[0x3];                                     // 0x013D(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UClass*                                      ActorClass;                                                // 0x0140(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bCheckActorClassArray;                                     // 0x0148(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_YUP4[0x7];                                     // 0x0149(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	TArray<class UClass*>                              ActorClassArray;                                           // 0x0150(0x0010) (Edit, ZeroConstructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bCheckLOS;                                                 // 0x0160(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bCheckForward;                                             // 0x0161(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_IOZ7[0x2];                                     // 0x0162(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	float                                              MaxForwardAngle;                                           // 0x0164(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bCheckIntersectsNavMeshPath;                               // 0x0168(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_CZH6[0x7];                                     // 0x0169(0x0007) MISSED OFFSET (PADDING)

};

// ScriptStruct Killstreak.KSParticleSystemAttachment
// 0x0038
struct FKSParticleSystemAttachment
{
	class UParticleSystem*                             ParticleSystem;                                            // 0x0000(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FName                                       SocketName;                                                // 0x0008(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                                     Scale;                                                     // 0x0010(0x000C) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                                     AttachmentOffset;                                          // 0x001C(0x000C) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FRotator                                    AttachmentRotationOffset;                                  // 0x0028(0x000C) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_QBCA[0x4];                                     // 0x0034(0x0004) MISSED OFFSET (PADDING)

};

// ScriptStruct Killstreak.JobSelectionTaskId
// 0x0002
struct FJobSelectionTaskId
{
	uint16_t                                           ID;                                                        // 0x0000(0x0002) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)

};

// ScriptStruct Killstreak.KSPersistentPlayerId
// 0x0010
struct FKSPersistentPlayerId
{
	struct FSerializedMctsNetId                        NetId;                                                     // 0x0000(0x0008) (NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	int                                                EngineId;                                                  // 0x0008(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData_EXQ6[0x4];                                     // 0x000C(0x0004) MISSED OFFSET (PADDING)

};

// ScriptStruct Killstreak.JobSelectionTask
// 0x003C (0x0048 - 0x000C)
struct FJobSelectionTask : public FFastArraySerializerItem
{
	struct FJobSelectionTaskId                         TaskId;                                                    // 0x000C(0x0002) (BlueprintVisible, BlueprintReadOnly, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	Killstreak_EJobSelectionTaskType                   TaskType;                                                  // 0x000E(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_JQN4[0x1];                                     // 0x000F(0x0001) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UKSJobItem*                                  SelectedJob;                                               // 0x0010(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FKSPersistentPlayerId                       Player;                                                    // 0x0018(0x0010) (BlueprintVisible, BlueprintReadOnly, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FKSPersistentPlayerId                       SelectingProxy;                                            // 0x0028(0x0010) (BlueprintVisible, BlueprintReadOnly, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                TeamNum;                                                   // 0x0038(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bHaltingTask;                                              // 0x003C(0x0001) (ZeroConstructor, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_GG0L[0x3];                                     // 0x003D(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	float                                              TimeForTask;                                               // 0x0040(0x0004) (ZeroConstructor, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FPGame_ReplicatedTimerId                    TimerId;                                                   // 0x0044(0x0001) (BlueprintVisible, BlueprintReadOnly, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_VVI6[0x3];                                     // 0x0045(0x0003) MISSED OFFSET (PADDING)

};

// ScriptStruct Killstreak.JobSelectionTaskList
// 0x0028 (0x0130 - 0x0108)
struct FJobSelectionTaskList : public FFastArraySerializer
{
	TArray<struct FJobSelectionTask>                   Tasks;                                                     // 0x0108(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_SJXR[0x18];                                    // 0x0118(0x0018) MISSED OFFSET (PADDING)

};

// ScriptStruct Killstreak.KSSpreadTransform
// 0x0070
struct FKSSpreadTransform
{
	int                                                ID;                                                        // 0x0000(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_2AOL[0xC];                                     // 0x0004(0x000C) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FTransform                                  Transform;                                                 // 0x0010(0x0030) (IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	class UParticleSystemComponent*                    ParticleSystem;                                            // 0x0040(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UDecalComponent*                             Decal;                                                     // 0x0048(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class USphereComponent*                            Sphere;                                                    // 0x0050(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UMeshComponent*                              Mesh;                                                      // 0x0058(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              CurrentHealth;                                             // 0x0060(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_O6II[0xC];                                     // 0x0064(0x000C) MISSED OFFSET (PADDING)

};

// ScriptStruct Killstreak.KSSpreadEntry
// 0x0074 (0x0080 - 0x000C)
struct FKSSpreadEntry : public FFastArraySerializerItem
{
	unsigned char                                      UnknownData_BPZP[0x4];                                     // 0x000C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FKSSpreadTransform                          Entry;                                                     // 0x0010(0x0070) (NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPublic)

};

// ScriptStruct Killstreak.KSSpreadList
// 0x0018 (0x0120 - 0x0108)
struct FKSSpreadList : public FFastArraySerializer
{
	TArray<struct FKSSpreadEntry>                      List;                                                      // 0x0108(0x0010) (ZeroConstructor, ContainsInstancedReference, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class AKSProjectile_GrenadeSpread*                 Owner;                                                     // 0x0118(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)

};

// ScriptStruct Killstreak.WeaponStateChangeRequest
// 0x0010
struct FWeaponStateChangeRequest
{
	uint16_t                                           RequestID;                                                 // 0x0000(0x0002) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bChangeWeaponState;                                        // 0x0002(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	Killstreak_EWeaponStateNew                         PreviousState;                                             // 0x0003(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	Killstreak_EWeaponStateNew                         NextState;                                                 // 0x0004(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bChangeWeaponAimMode;                                      // 0x0005(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	Killstreak_EKSCharacterAimMode                     AimMode;                                                   // 0x0006(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_KIEK[0x1];                                     // 0x0007(0x0001) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FRandomStream                               RandomStream;                                              // 0x0008(0x0008) (ZeroConstructor, NoDestructor, NativeAccessSpecifierPublic)

};

// ScriptStruct Killstreak.KSMapRow
// 0x0048
struct FKSMapRow
{
	struct FString                                     MapKey;                                                    // 0x0000(0x0010) (ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                MapId;                                                     // 0x0010(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_EC4N[0x4];                                     // 0x0014(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FText                                       mapName;                                                   // 0x0018(0x0018) (NativeAccessSpecifierPublic)
	struct FSoftObjectPath                             MapThumbnailPath;                                          // 0x0030(0x0018) (ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct Killstreak.SeasonalItemSpawnInfo
// 0x0018
struct FSeasonalItemSpawnInfo
{
	class UClass*                                      LootSiteToSpawn;                                           // 0x0000(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                MinimumAmountToSpawn;                                      // 0x0008(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                MaximumAmountToSpawn;                                      // 0x000C(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_XFHG[0x8];                                     // 0x0010(0x0008) MISSED OFFSET (PADDING)

};

// ScriptStruct Killstreak.KSWeaponDropAttachmentContainerEntry
// 0x002C (0x0038 - 0x000C)
struct FKSWeaponDropAttachmentContainerEntry : public FFastArraySerializerItem
{
	unsigned char                                      UnknownData_0J7E[0x4];                                     // 0x000C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UKSWeaponAttachment*                         Attachment;                                                // 0x0010(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_VI95[0x8];                                     // 0x0018(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FGameplayTag                                ReplicatedAttachPoint;                                     // 0x0020(0x0008) (Transient, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_09R6[0xC];                                     // 0x0028(0x000C) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	uint16_t                                           ExtraInfo;                                                 // 0x0034(0x0002) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_UK8Q[0x2];                                     // 0x0036(0x0002) MISSED OFFSET (PADDING)

};

// ScriptStruct Killstreak.KSWeaponDropAttachmentContainer
// 0x0020 (0x0128 - 0x0108)
struct FKSWeaponDropAttachmentContainer : public FFastArraySerializer
{
	TArray<struct FKSWeaponDropAttachmentContainerEntry> Attachments;                                               // 0x0108(0x0010) (Edit, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_XBMM[0x8];                                     // 0x0118(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class AKSWeaponAssetDrop*                          Owner;                                                     // 0x0120(0x0008) (ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)

};

// ScriptStruct Killstreak.KSObjectiveInfo
// 0x0068
struct FKSObjectiveInfo
{
	int                                                ID;                                                        // 0x0000(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_I8X3[0x4];                                     // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FKSObjectiveState                           ObjectiveState;                                            // 0x0008(0x0028) (BlueprintVisible, BlueprintReadOnly, NoDestructor, NativeAccessSpecifierPublic)
	struct FKSObjectiveState                           PreviousObjectiveState;                                    // 0x0030(0x0028) (BlueprintVisible, BlueprintReadOnly, NoDestructor, NativeAccessSpecifierPublic)
	TArray<struct FScriptDelegate>                     ObjectiveStateChangedCallbacks;                            // 0x0058(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, RepSkip, ContainsInstancedReference, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct Killstreak.KSLootGroupGuarantee
// 0x0018
struct FKSLootGroupGuarantee
{
	int                                                Quantity;                                                  // 0x0000(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_0OXA[0x4];                                     // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	TArray<int>                                        ObjectiveLootGroups;                                       // 0x0008(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct Killstreak.KSLootGroupGuaranteeMap
// 0x0058
struct FKSLootGroupGuaranteeMap
{
	int                                                TotalLootSitesActive;                                      // 0x0000(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_LW4H[0x4];                                     // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	TMap<unsigned char, struct FKSLootGroupGuarantee>  GuaranteeMap;                                              // 0x0008(0x0050) (Edit, BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic)

};

// ScriptStruct Killstreak.AssistInfo
// 0x0028
struct FAssistInfo
{
	TWeakObjectPtr<class AKSPlayerState>               Assistant;                                                 // 0x0000(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              DamageContributed;                                         // 0x0008(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              ContributionPercent;                                       // 0x000C(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                PointsAwarded;                                             // 0x0010(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TWeakObjectPtr<class AKSPlayerState>               Victim;                                                    // 0x0014(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TWeakObjectPtr<class AKSPlayerState>               DownInstigator;                                            // 0x001C(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bLethal;                                                   // 0x0024(0x0001) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_OT05[0x3];                                     // 0x0025(0x0003) MISSED OFFSET (PADDING)

};

// ScriptStruct Killstreak.AssistEventItem
// 0x0028
struct FAssistEventItem : public FReplicatedLogItem
{
	struct FAssistInfo                                 AssistInfo;                                                // 0x0000(0x0028) (NoDestructor, Protected, NativeAccessSpecifierProtected)

};

// ScriptStruct Killstreak.AssistEventList
// 0x0018 (0x0088 - 0x0070)
struct FAssistEventList : public FSizedArraySerializer
{
	TArray<struct FAssistEventItem>                    Items;                                                     // 0x0070(0x0010) (ZeroConstructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_O2I5[0x8];                                     // 0x0080(0x0008) MISSED OFFSET (PADDING)

};

// ScriptStruct Killstreak.InitialGameObjectiveInfo
// 0x0060
struct FInitialGameObjectiveInfo
{
	int                                                ID;                                                        // 0x0000(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_N7YT[0x4];                                     // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class AActor*                                      ObjectiveAsActor;                                          // 0x0008(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FKSObjectiveState                           ObjectiveState;                                            // 0x0010(0x0028) (NoDestructor, NativeAccessSpecifierPublic)
	struct FKSObjectiveState                           PreviousObjectiveState;                                    // 0x0038(0x0028) (NoDestructor, NativeAccessSpecifierPublic)

};

// ScriptStruct Killstreak.TrackPlayerElim
// 0x0008
struct FTrackPlayerElim
{
	int                                                PlayerInstigatorId;                                        // 0x0000(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                PlayerVictimId;                                            // 0x0004(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct Killstreak.KSWeightedPerceptionEntry
// 0x0188
struct FKSWeightedPerceptionEntry
{
	TArray<class UClass*>                              SensesToUse;                                               // 0x0000(0x0010) (Edit, ZeroConstructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FKSPerceptionFilter                         PerceptionFilter;                                          // 0x0010(0x0170) (Edit, NativeAccessSpecifierPublic)
	int                                                WeightPerPerceivedStimuli;                                 // 0x0180(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bWeightTowards;                                            // 0x0184(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_F0TJ[0x3];                                     // 0x0185(0x0003) MISSED OFFSET (PADDING)

};

// ScriptStruct Killstreak.KSEmoteInterruptTickFunction
// 0x0008 (0x0030 - 0x0028)
struct FKSEmoteInterruptTickFunction : public FTickFunction
{
	unsigned char                                      UnknownData_3LGG[0x8];                                     // 0x0028(0x0008) MISSED OFFSET (PADDING)

};

// ScriptStruct Killstreak.KSEmoteConversionEntry
// 0x000C
struct FKSEmoteConversionEntry
{
	struct FName                                       EmotionName;                                               // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	Killstreak_EKSEmotion                              EmotionEnum;                                               // 0x0008(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_9D4H[0x3];                                     // 0x0009(0x0003) MISSED OFFSET (PADDING)

};

// ScriptStruct Killstreak.CombatEventInfo
// 0x0060
struct FCombatEventInfo
{
	TWeakObjectPtr<class APlayerState>                 EventVictim;                                               // 0x0000(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TWeakObjectPtr<class APlayerState>                 EventInstigator;                                           // 0x0008(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TWeakObjectPtr<class AController>                  InstigatorController;                                      // 0x0010(0x0008) (ZeroConstructor, IsPlainOldData, RepSkip, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<TWeakObjectPtr<class APlayerState>>         EventAssistants;                                           // 0x0018(0x0010) (ZeroConstructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TWeakObjectPtr<class AActor>                       DamagedActor;                                              // 0x0028(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TWeakObjectPtr<class AActor>                       DamageCauser;                                              // 0x0030(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UClass*                                      DamageType;                                                // 0x0038(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UKSWeaponAsset*                              WeaponAsset;                                               // 0x0040(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               DownEvent;                                                 // 0x0048(0x0001) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               KillEvent;                                                 // 0x0049(0x0001) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	Killstreak_EHitLocationType                        HitLocationType;                                           // 0x004A(0x0001) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_22KE[0x1];                                     // 0x004B(0x0001) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	float                                              DamageDealt;                                               // 0x004C(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              OverkillDamageDealt;                                       // 0x0050(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              OriginalDamageDealt;                                       // 0x0054(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               IsArmorHit;                                                // 0x0058(0x0001) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bDamageResisted;                                           // 0x0059(0x0001) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bDamageReduced;                                            // 0x005A(0x0001) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bDamageShielded;                                           // 0x005B(0x0001) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               IsRadialDamage;                                            // 0x005C(0x0001) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               WasCharacterAlreadyDown;                                   // 0x005D(0x0001) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               WasCharacterBeingRevived;                                  // 0x005E(0x0001) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bDamageMastered;                                           // 0x005F(0x0001) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct Killstreak.CombatEventItem
// 0x0060
struct FCombatEventItem : public FReplicatedLogItem
{
	struct FCombatEventInfo                            CombatEvent;                                               // 0x0000(0x0060) (Protected, NativeAccessSpecifierProtected)

};

// ScriptStruct Killstreak.CombatEventList
// 0x0018 (0x0088 - 0x0070)
struct FCombatEventList : public FSizedArraySerializer
{
	TArray<struct FCombatEventItem>                    Items;                                                     // 0x0070(0x0010) (ZeroConstructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_UPYW[0x8];                                     // 0x0080(0x0008) MISSED OFFSET (PADDING)

};

// ScriptStruct Killstreak.AccoladeMultiElimTracker
// 0x0070
struct FAccoladeMultiElimTracker
{
	int                                                ElimReqAmount;                                             // 0x0000(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_DE99[0x4];                                     // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FAccoladeDisplayInfo                        AccoladeReward;                                            // 0x0008(0x0068) (Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, NativeAccessSpecifierPublic)

};

// ScriptStruct Killstreak.PingInfo
// 0x0050
struct FPingInfo
{
	Killstreak_EPingType                               PingType;                                                  // 0x0000(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	Killstreak_EPingMessage                            PingMessage;                                               // 0x0001(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_ZDYS[0x2];                                     // 0x0002(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FVector_NetQuantize                         Location;                                                  // 0x0004(0x000C) (BlueprintVisible, BlueprintReadOnly, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector_NetQuantize                         PingIconOffset;                                            // 0x0010(0x000C) (BlueprintVisible, BlueprintReadOnly, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_GFRF[0x4];                                     // 0x001C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class AActor*                                      PingedActor;                                               // 0x0020(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class AKSPlayerState*                              PingingPlayer;                                             // 0x0028(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<class AKSPlayerState*>                      AcknowledgedPlayers;                                       // 0x0030(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FTimerHandle                                ExpirationHandle;                                          // 0x0040(0x0008) (RepSkip, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                PingId;                                                    // 0x0048(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_J7LF[0x4];                                     // 0x004C(0x0004) MISSED OFFSET (PADDING)

};

// ScriptStruct Killstreak.PingInfoChangeItem
// 0x0054 (0x0060 - 0x000C)
struct FPingInfoChangeItem : public FFastArraySerializerItem
{
	unsigned char                                      UnknownData_B63S[0x4];                                     // 0x000C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FPingInfo                                   PingInfo;                                                  // 0x0010(0x0050) (NativeAccessSpecifierPublic)

};

// ScriptStruct Killstreak.PingInfoChangeList
// 0x0018 (0x0120 - 0x0108)
struct FPingInfoChangeList : public FFastArraySerializer
{
	TArray<struct FPingInfoChangeItem>                 Items;                                                     // 0x0108(0x0010) (ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_EHK3[0x8];                                     // 0x0118(0x0008) MISSED OFFSET (PADDING)

};

// ScriptStruct Killstreak.KSInitialInventoryTableEntry
// 0x0040
struct FKSInitialInventoryTableEntry
{
	struct FGameplayTag                                EquipPoint;                                                // 0x0000(0x0008) (Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      ItemAsset[0x28];                                           // 0x0008(0x0028) UNKNOWN PROPERTY: SoftObjectProperty
	unsigned char                                      Attachments[0x10];                                         // 0x0030(0x0010) UNKNOWN PROPERTY: ArrayProperty

};

// ScriptStruct Killstreak.SkeletalMeshMaterialToReductionGroup
// 0x0018
struct FSkeletalMeshMaterialToReductionGroup
{
	struct FString                                     NameToMatch;                                               // 0x0000(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                ReductionGroup;                                            // 0x0010(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_VYKV[0x4];                                     // 0x0014(0x0004) MISSED OFFSET (PADDING)

};

// ScriptStruct Killstreak.WaveBotTableRow
// 0x0010 (0x01A8 - 0x0198)
struct FWaveBotTableRow : public FBotSpawnTableRow
{
	float                                              fSelectionWeight;                                          // 0x0198(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              fAutoSpawnCostMultiplier;                                  // 0x019C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                nMaxInstancesPerWave;                                      // 0x01A0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	Killstreak_ECharacterBehaviorState                 InitialBehaviorState;                                      // 0x01A4(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bPermanentlyRevealed;                                      // 0x01A5(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_MVYZ[0x2];                                     // 0x01A6(0x0002) MISSED OFFSET (PADDING)

};

// ScriptStruct Killstreak.LoadedWeaponAttachmentAnimationData
// 0x00B0
struct FLoadedWeaponAttachmentAnimationData
{
	class USkeletalMesh*                               WeaponAttachmentMesh;                                      // 0x0000(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UAnimSequence*                               WeaponAttachmentSequence;                                  // 0x0008(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UAnimMontage*                                Player3PHolsterMontage;                                    // 0x0010(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UAnimMontage*                                Player3PRetrieveMontage;                                   // 0x0018(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UAnimMontage*                                Player3PFireMontage;                                       // 0x0020(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UAnimMontage*                                Player3PReloadMontage;                                     // 0x0028(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UAimOffsetBlendSpace*                        Player3PStandingAimOffset;                                 // 0x0030(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UAimOffsetBlendSpace*                        Player3PCrouchedAimOffset;                                 // 0x0038(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UBlendSpace*                                 Player3PStandingBlendSpace;                                // 0x0040(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UBlendSpace*                                 Player3PCrouchedBlendSpace;                                // 0x0048(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UAnimSequence*                               Player3PStandingIdleSequence;                              // 0x0050(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UAnimSequence*                               Player3PCrouchedIdleSequence;                              // 0x0058(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UAnimMontage*                                Player1PFireMontage;                                       // 0x0060(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UBlendSpace*                                 Player1PStandingBlendSpace;                                // 0x0068(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UBlendSpace*                                 Player1PCrouchedBlendSpace;                                // 0x0070(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UAimOffsetBlendSpace*                        Player1PStandingAimOffset;                                 // 0x0078(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UAnimMontage*                                Player1PRetrieveMontage;                                   // 0x0080(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UAnimMontage*                                Player1PReloadMontage;                                     // 0x0088(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UClass*                                      Player1PCameraShake;                                       // 0x0090(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UClass*                                      Player1PADSCameraShake;                                    // 0x0098(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UAnimSequence*                               Player1PAdditiveStandGunPose;                              // 0x00A0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UAnimSequence*                               Player1PAdditiveCrouchGunPose;                             // 0x00A8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct Killstreak.WeaponAttachmentAnimationData
// 0x03A0 (0x03A8 - 0x0008)
struct FWeaponAttachmentAnimationData : public FTableRowBase
{
	bool                                               bUseDefaultIfNone;                                         // 0x0008(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_M1NP[0x7];                                     // 0x0009(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	unsigned char                                      WeaponAsset[0x28];                                         // 0x0009(0x0028) UNKNOWN PROPERTY: SoftObjectProperty
	unsigned char                                      WeaponAttachmentMesh[0x28];                                // 0x0038(0x0028) UNKNOWN PROPERTY: SoftObjectProperty
	unsigned char                                      WeaponAttachmentSequence[0x28];                            // 0x0060(0x0028) UNKNOWN PROPERTY: SoftObjectProperty
	unsigned char                                      Player3PHolsterMontage[0x28];                              // 0x0088(0x0028) UNKNOWN PROPERTY: SoftObjectProperty
	unsigned char                                      Player3PRetrieveMontage[0x28];                             // 0x00B0(0x0028) UNKNOWN PROPERTY: SoftObjectProperty
	unsigned char                                      Player3PFireMontage[0x28];                                 // 0x00D8(0x0028) UNKNOWN PROPERTY: SoftObjectProperty
	unsigned char                                      Player3PReloadMontage[0x28];                               // 0x0100(0x0028) UNKNOWN PROPERTY: SoftObjectProperty
	unsigned char                                      Player3PStandingAimOffset[0x28];                           // 0x0128(0x0028) UNKNOWN PROPERTY: SoftObjectProperty
	unsigned char                                      Player3PCrouchedAimOffset[0x28];                           // 0x0150(0x0028) UNKNOWN PROPERTY: SoftObjectProperty
	unsigned char                                      Player3PStandingBlendSpace[0x28];                          // 0x0178(0x0028) UNKNOWN PROPERTY: SoftObjectProperty
	unsigned char                                      Player3PCrouchedBlendSpace[0x28];                          // 0x01A0(0x0028) UNKNOWN PROPERTY: SoftObjectProperty
	unsigned char                                      Player3PStandingIdleSequence[0x28];                        // 0x01C8(0x0028) UNKNOWN PROPERTY: SoftObjectProperty
	unsigned char                                      Player3PCrouchedIdleSequence[0x28];                        // 0x01F0(0x0028) UNKNOWN PROPERTY: SoftObjectProperty
	unsigned char                                      Player1PFireMontage[0x28];                                 // 0x0218(0x0028) UNKNOWN PROPERTY: SoftObjectProperty
	unsigned char                                      Player1PStandingBlendSpace[0x28];                          // 0x0240(0x0028) UNKNOWN PROPERTY: SoftObjectProperty
	unsigned char                                      Player1PCrouchedBlendSpace[0x28];                          // 0x0268(0x0028) UNKNOWN PROPERTY: SoftObjectProperty
	unsigned char                                      Player1PStandingAimOffset[0x28];                           // 0x0290(0x0028) UNKNOWN PROPERTY: SoftObjectProperty
	unsigned char                                      Player1PRetrieveMontage[0x28];                             // 0x02B8(0x0028) UNKNOWN PROPERTY: SoftObjectProperty
	unsigned char                                      Player1PReloadMontage[0x28];                               // 0x02E0(0x0028) UNKNOWN PROPERTY: SoftObjectProperty
	unsigned char                                      Player1PCameraShake[0x28];                                 // 0x0308(0x0028) UNKNOWN PROPERTY: SoftClassProperty
	unsigned char                                      Player1PADSCameraShake[0x28];                              // 0x0330(0x0028) UNKNOWN PROPERTY: SoftClassProperty
	unsigned char                                      Player1PAdditiveStandGunPose[0x28];                        // 0x0358(0x0028) UNKNOWN PROPERTY: SoftObjectProperty
	unsigned char                                      Player1PAdditiveCrouchGunPose[0x28];                       // 0x0380(0x0028) UNKNOWN PROPERTY: SoftObjectProperty

};

// ScriptStruct Killstreak.KSPowerSlideInfo
// 0x0002
struct FKSPowerSlideInfo
{
	bool                                               bIsInPowerSlide;                                           // 0x0000(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	Killstreak_EKSPowerSlideEndReason                  EndReason;                                                 // 0x0001(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct Killstreak.KSPostProcessFloatCurve
// 0x0010
struct FKSPostProcessFloatCurve
{
	class UCurveFloat*                                 FloatCurve;                                                // 0x0000(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FName                                       FloatParameterName;                                        // 0x0008(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct Killstreak.KSPostProcessColorCurve
// 0x0010
struct FKSPostProcessColorCurve
{
	class UCurveLinearColor*                           ColorCurve;                                                // 0x0000(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FName                                       ColorParameterName;                                        // 0x0008(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct Killstreak.KSSpecialEffect
// 0x0050
struct FKSSpecialEffect
{
	struct FName                                       FXID;                                                      // 0x0000(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              EffectEndTime;                                             // 0x0008(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bLoop;                                                     // 0x000C(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_9DKS[0x3];                                     // 0x000D(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	float                                              LoopStartTime;                                             // 0x0010(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              LoopEndTime;                                               // 0x0014(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bRemoveOnForwardComplete;                                  // 0x0018(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bRemoveOnReverseComplete;                                  // 0x0019(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_OFFV[0x6];                                     // 0x001A(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	TArray<struct FKSPostProcessFloatCurve>            FloatCurves;                                               // 0x0020(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<struct FKSPostProcessColorCurve>            ColorCurves;                                               // 0x0030(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UClass*                                      FXCurveClass;                                              // 0x0040(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UObject*                                     EffectAsset;                                               // 0x0048(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct Killstreak.KSLungeInfo
// 0x0010
struct FKSLungeInfo
{
	class AActor*                                      LungeTarget;                                               // 0x0000(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              MaxLungeDistance;                                          // 0x0008(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              MaxLungeDuration;                                          // 0x000C(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct Killstreak.KSZipLineInfo
// 0x0010
struct FKSZipLineInfo
{
	class AKSZipLine*                                  Zipline;                                                   // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bZipLineReverse;                                           // 0x0008(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_CZSS[0x7];                                     // 0x0009(0x0007) MISSED OFFSET (PADDING)

};

// ScriptStruct Killstreak.ReplicatedViewInfo
// 0x0008
struct FReplicatedViewInfo
{
	float                                              Pitch;                                                     // 0x0000(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              Yaw;                                                       // 0x0004(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct Killstreak.KSDeathInfo
// 0x0028
struct FKSDeathInfo
{
	Killstreak_EKSDeathState                           DeathState;                                                // 0x0000(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_TNY8[0x7];                                     // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UClass*                                      DamageType;                                                // 0x0008(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                                     DamageDirection;                                           // 0x0010(0x000C) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              FinalBlowDamage;                                           // 0x001C(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bImmediateRagdoll;                                         // 0x0020(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_AUGG[0x7];                                     // 0x0021(0x0007) MISSED OFFSET (PADDING)

};

// ScriptStruct Killstreak.KSRevealInfo
// 0x0048
struct FKSRevealInfo
{
	int                                                RevealID;                                                  // 0x0000(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	TWeakObjectPtr<class AKSPlayerState>               Revealer;                                                  // 0x0004(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	TWeakObjectPtr<class AActor>                       RevealTarget;                                              // 0x000C(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	TWeakObjectPtr<class UObject>                      RevealInstigator;                                          // 0x0014(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_8WEV[0x4];                                     // 0x001C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UClass*                                      RevealClass;                                               // 0x0020(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	Killstreak_ETargetAudience                         TargetAudience;                                            // 0x0028(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	Killstreak_EKSRevealSource                         RevealSource;                                              // 0x0029(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	Killstreak_EKSRevealPriority                       RevealPriority;                                            // 0x002A(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                               bUseRevealOverrideColor;                                   // 0x002B(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	struct FLinearColor                                RevealOverrideColor;                                       // 0x002C(0x0010) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                               bFilled;                                                   // 0x003C(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                               bOutlineTargetOnClient;                                    // 0x003D(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                               bNotifyTargetRevealed;                                     // 0x003E(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                               bDisplayEnemyDetectedUI;                                   // 0x003F(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                               bForcedDisplay;                                            // 0x0040(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_UH2Q[0x7];                                     // 0x0041(0x0007) MISSED OFFSET (PADDING)

};

// ScriptStruct Killstreak.KSProximityFilter
// 0x0020
struct FKSProximityFilter
{
	TArray<class UClass*>                              ValidActorClasses;                                         // 0x0000(0x0010) (Edit, ZeroConstructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bCountAllies;                                              // 0x0010(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bCountEnemies;                                             // 0x0011(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bCountUnaffiliated;                                        // 0x0012(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bCheckLOS;                                                 // 0x0013(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                                     LOSTraceStartOffset;                                       // 0x0014(0x000C) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct Killstreak.AccoladePlayerTrackers
// 0x0030
struct FAccoladePlayerTrackers
{
	int                                                PlayerId;                                                  // 0x0000(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_T7WE[0x4];                                     // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class AKSPlayerState*                              PlayerState;                                               // 0x0008(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                DownCount;                                                 // 0x0010(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                elimCount;                                                 // 0x0014(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              TimeLeft;                                                  // 0x0018(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_IY0E[0x4];                                     // 0x001C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	TArray<struct FCombatEventInfo>                    ContributingCombatEvents;                                  // 0x0020(0x0010) (ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct Killstreak.KSTargetingStateValidator
// 0x0004
struct FKSTargetingStateValidator
{
	bool                                               bAnyWeaponState;                                           // 0x0000(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bAnyCharacterAimMode;                                      // 0x0001(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	Killstreak_EWeaponStateNew                         WeaponState;                                               // 0x0002(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	Killstreak_EKSCharacterAimMode                     CharacterAimMode;                                          // 0x0003(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct Killstreak.KSTargetingModuleInfo
// 0x0028
struct FKSTargetingModuleInfo
{
	struct FName                                       Key;                                                       // 0x0000(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UClass*                                      TargetingModuleClass;                                      // 0x0008(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	TArray<struct FKSTargetingStateValidator>          TargetingStateValidators;                                  // 0x0010(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UKSWeaponTargetingModule*                    TargetingModuleInstance;                                   // 0x0020(0x0008) (BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)

};

// ScriptStruct Killstreak.KSMantleInfo
// 0x0044
struct FKSMantleInfo
{
	bool                                               bIsMantling;                                               // 0x0000(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bVaultingOver;                                             // 0x0001(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_A74D[0x2];                                     // 0x0002(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	float                                              ApproachDist;                                              // 0x0004(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              MantleHeight;                                              // 0x0008(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              ForwardDist;                                               // 0x000C(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              VaultDrop;                                                 // 0x0010(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              MantleUpDuration;                                          // 0x0014(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              VaultAcrossDuration;                                       // 0x0018(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              VaultDownDuration;                                         // 0x001C(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FName                                       MantleName;                                                // 0x0020(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                                     WorldSpaceGrabLocation;                                    // 0x0028(0x000C) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                                     WorldTowardsWallDir;                                       // 0x0034(0x000C) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bFromStanding;                                             // 0x0040(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_0NCD[0x3];                                     // 0x0041(0x0003) MISSED OFFSET (PADDING)

};

// ScriptStruct Killstreak.KSPlayerIdentityData
// 0x00DC (0x00E8 - 0x000C)
struct FKSPlayerIdentityData : public FFastArraySerializerItem
{
	unsigned char                                      UnknownData_XRF6[0x4];                                     // 0x000C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FKSPersistentPlayerId                       ID;                                                        // 0x0010(0x0010) (NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      avatar[0x28];                                              // 0x0020(0x0028) UNKNOWN PROPERTY: SoftObjectProperty
	unsigned char                                      Banner[0x28];                                              // 0x0048(0x0028) UNKNOWN PROPERTY: SoftObjectProperty
	unsigned char                                      PreferredJob[0x28];                                        // 0x0070(0x0028) UNKNOWN PROPERTY: SoftObjectProperty
	unsigned char                                      Border[0x28];                                              // 0x0098(0x0028) UNKNOWN PROPERTY: SoftObjectProperty
	unsigned char                                      Title[0x28];                                               // 0x00C0(0x0028) UNKNOWN PROPERTY: SoftObjectProperty

};

// ScriptStruct Killstreak.KSPlayerIdentitiesContainer
// 0x0018 (0x0120 - 0x0108)
struct FKSPlayerIdentitiesContainer : public FFastArraySerializer
{
	TArray<struct FKSPlayerIdentityData>               ReplicatedData;                                            // 0x0108(0x0010) (ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData_NG91[0x8];                                     // 0x0118(0x0008) MISSED OFFSET (PADDING)

};

// ScriptStruct Killstreak.MatchPhase
// 0x000C
struct FMatchPhase
{
	struct FName                                       Name;                                                      // 0x0000(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                ID;                                                        // 0x0008(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct Killstreak.ReplicatedRoundInfo
// 0x0010
struct FReplicatedRoundInfo
{
	struct FMatchPhase                                 RoundState;                                                // 0x0000(0x000C) (Edit, DisableEditOnTemplate, EditConst, NoDestructor, NativeAccessSpecifierPublic)
	unsigned char                                      RoundNumber;                                               // 0x000C(0x0001) (Edit, ZeroConstructor, DisableEditOnTemplate, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_PD8G[0x3];                                     // 0x000D(0x0003) MISSED OFFSET (PADDING)

};

// ScriptStruct Killstreak.JobSelectionChoice
// 0x0010
struct FJobSelectionChoice
{
	class UKSJobItem*                                  Job;                                                       // 0x0000(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      bIsVisibleToUI : 1;                                        // 0x0008(0x0001) BIT_FIELD (BlueprintVisible, BlueprintReadOnly, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      bIsUnavailable : 1;                                        // 0x0008(0x0001) BIT_FIELD (BlueprintVisible, BlueprintReadOnly, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      bIsUnavailableByOwnership : 1;                             // 0x0008(0x0001) BIT_FIELD (BlueprintVisible, BlueprintReadOnly, RepSkip, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      bIsBanned : 1;                                             // 0x0008(0x0001) BIT_FIELD (BlueprintVisible, BlueprintReadOnly, RepSkip, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      bAlreadyPicked : 1;                                        // 0x0008(0x0001) BIT_FIELD (BlueprintVisible, BlueprintReadOnly, RepSkip, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      bAlreadyLocked : 1;                                        // 0x0008(0x0001) BIT_FIELD (BlueprintVisible, BlueprintReadOnly, RepSkip, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      bCannotLock : 1;                                           // 0x0008(0x0001) BIT_FIELD (BlueprintVisible, BlueprintReadOnly, RepSkip, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      bSelectedByTeammate : 1;                                   // 0x0008(0x0001) BIT_FIELD (BlueprintVisible, BlueprintReadOnly, RepSkip, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      bSelectedByOpponent : 1;                                   // 0x0009(0x0001) BIT_FIELD (BlueprintVisible, BlueprintReadOnly, RepSkip, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      bSelectedBySelf : 1;                                       // 0x0009(0x0001) BIT_FIELD (BlueprintVisible, BlueprintReadOnly, RepSkip, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      bPendingCompleteBySelf : 1;                                // 0x0009(0x0001) BIT_FIELD (BlueprintVisible, BlueprintReadOnly, RepSkip, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      bPickedByLocalTeam : 1;                                    // 0x0009(0x0001) BIT_FIELD (BlueprintVisible, BlueprintReadOnly, RepSkip, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      bPickedByOpponent : 1;                                     // 0x0009(0x0001) BIT_FIELD (BlueprintVisible, BlueprintReadOnly, RepSkip, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      bLockedByLocalPlayer : 1;                                  // 0x0009(0x0001) BIT_FIELD (BlueprintVisible, BlueprintReadOnly, RepSkip, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	Killstreak_EJobOwnershipState                      OwnershipState;                                            // 0x000A(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_CF2Z[0x5];                                     // 0x000B(0x0005) MISSED OFFSET (PADDING)

};

// ScriptStruct Killstreak.PlayerJobSelectInfo
// 0x0020
struct FPlayerJobSelectInfo
{
	TWeakObjectPtr<class AKSPlayerState>               PlayerState;                                               // 0x0000(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FSerializedMctsNetId                        NetId;                                                     // 0x0008(0x0008) (NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                SkinId;                                                    // 0x0010(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                JobMasteryXp;                                              // 0x0014(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	Killstreak_EJobSelectionState                      SelectionState;                                            // 0x0018(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_X3SK[0x7];                                     // 0x0019(0x0007) MISSED OFFSET (PADDING)

};

// ScriptStruct Killstreak.JobSelectionEntry
// 0x001C (0x0028 - 0x000C)
struct FJobSelectionEntry : public FFastArraySerializerItem
{
	int                                                JobId;                                                     // 0x000C(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<struct FPlayerJobSelectInfo>                CurrentPlayerInfos;                                        // 0x0010(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	Killstreak_EJobSelectionState                      LocalAvailability;                                         // 0x0020(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	Killstreak_EJobUniquenessRule                      CachedJobUniquenessRule;                                   // 0x0021(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_JVEC[0x6];                                     // 0x0022(0x0006) MISSED OFFSET (PADDING)

};

// ScriptStruct Killstreak.JobSelectionList
// 0x0018 (0x0120 - 0x0108)
struct FJobSelectionList : public FFastArraySerializer
{
	TArray<struct FJobSelectionEntry>                  EntryMap;                                                  // 0x0108(0x0010) (ZeroConstructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UKSJobSelectionComponent*                    Owner;                                                     // 0x0118(0x0008) (ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)

};

// ScriptStruct Killstreak.SelectionActivityStatus
// 0x0050
struct FSelectionActivityStatus
{
	unsigned char                                      UnknownData_SBPV[0x30];                                    // 0x0000(0x0030) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	Killstreak_ESelectionActivityState                 SelectionState;                                            // 0x0030(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_W49W[0x7];                                     // 0x0031(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	TArray<class AKSPlayerState*>                      CurrentlySelectingPlayers;                                 // 0x0038(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                NumBansOccurred;                                           // 0x0048(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_9T40[0x4];                                     // 0x004C(0x0004) MISSED OFFSET (PADDING)

};

// ScriptStruct Killstreak.KSJobSelectionAllowUnownedJobs
// 0x0020
struct FKSJobSelectionAllowUnownedJobs
{
	Killstreak_EAllowUnownedJobsState                  AllowUnownedJobsState;                                     // 0x0000(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_FISS[0x7];                                     // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	TArray<int>                                        AllowedUnownedJobIds;                                      // 0x0008(0x0010) (ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               IsInitializationFinished;                                  // 0x0018(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_8POH[0x7];                                     // 0x0019(0x0007) MISSED OFFSET (PADDING)

};

// ScriptStruct Killstreak.JobSelectDraftingTask
// 0x0010
struct FJobSelectDraftingTask
{
	Killstreak_EJobSelectDraftingTaskType              TaskyType;                                                 // 0x0000(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_N077[0x3];                                     // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	int                                                TeamNum;                                                   // 0x0004(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              TimeLimit;                                                 // 0x0008(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bHalting;                                                  // 0x000C(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_JXDZ[0x3];                                     // 0x000D(0x0003) MISSED OFFSET (PADDING)

};

// ScriptStruct Killstreak.DeferredViewTargetChangeInfo
// 0x0010
struct FDeferredViewTargetChangeInfo
{
	class AActor*                                      OldTarget;                                                 // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class AActor*                                      NewTarget;                                                 // 0x0008(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct Killstreak.ClientContext
// 0x00C8
struct FClientContext
{
	struct FString                                     ClientCurrentLanguage;                                     // 0x0000(0x0010) (ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                ClientSelectedSiteId;                                      // 0x0010(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                DivertFromQueueId;                                         // 0x0014(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                DivertToQueueId;                                           // 0x0018(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	Killstreak_EQueueDivertType                        QueueDivertType;                                           // 0x001C(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_J1KX[0x3];                                     // 0x001D(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	float                                              ShelteredMMAttemptTimeout;                                 // 0x0020(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              ShelteredMMLevelLimit;                                     // 0x0024(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                ForcedBotMatchLimit;                                       // 0x0028(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                MercyMatchLossesRequired;                                  // 0x002C(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     BuildVersion;                                              // 0x0030(0x0010) (ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                ViewportSizeX;                                             // 0x0040(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                ViewPortSizeY;                                             // 0x0044(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     DeviceMakeAndModel;                                        // 0x0048(0x0010) (ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     PrimaryGPUBrand;                                           // 0x0058(0x0010) (ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     BranchName;                                                // 0x0068(0x0010) (ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint64_t                                           AvailablePhysicalMemory;                                   // 0x0078(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint64_t                                           TotalPhysicalMemory;                                       // 0x0080(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint64_t                                           AvailableVirtualMemory;                                    // 0x0088(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint64_t                                           TotalVirtualMemory;                                        // 0x0090(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              CPUBenchmarkResults;                                       // 0x0098(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              GPUBenchmarkResults;                                       // 0x009C(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              ResolutionQuality;                                         // 0x00A0(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                GlobalQuality;                                             // 0x00A4(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                ViewDistanceQuality;                                       // 0x00A8(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                AntiAliasingQuality;                                       // 0x00AC(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                ShadowQuality;                                             // 0x00B0(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                PostProcessQuality;                                        // 0x00B4(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                TextureQuality;                                            // 0x00B8(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                EffectsQuality;                                            // 0x00BC(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                FoliageQuality;                                            // 0x00C0(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                ShadingQuality;                                            // 0x00C4(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct Killstreak.ClientInputTypeUse
// 0x0008
struct FClientInputTypeUse
{
	int16_t                                            InputTypeKbm;                                              // 0x0000(0x0002) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int16_t                                            InputTypeGpad;                                             // 0x0002(0x0002) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int16_t                                            InputTypeTouch;                                            // 0x0004(0x0002) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int16_t                                            InputTypeOther;                                            // 0x0006(0x0002) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct Killstreak.ClientStatistics
// 0x0018
struct FClientStatistics
{
	float                                              smoothed;                                                  // 0x0000(0x0004) (ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              Maximum;                                                   // 0x0004(0x0004) (ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              Minimum;                                                   // 0x0008(0x0004) (ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              average;                                                   // 0x000C(0x0004) (ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                SampleCount;                                               // 0x0010(0x0004) (ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_W66I[0x4];                                     // 0x0014(0x0004) MISSED OFFSET (PADDING)

};

// ScriptStruct Killstreak.TrackedPlayers
// 0x0018
struct FTrackedPlayers
{
	int                                                PlayerId;                                                  // 0x0000(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_HDQ6[0x4];                                     // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class AKSPlayerState*                              PlayerState;                                               // 0x0008(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                KillCount;                                                 // 0x0010(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_XSYY[0x4];                                     // 0x0014(0x0004) MISSED OFFSET (PADDING)

};

// ScriptStruct Killstreak.LocationRecord
// 0x000C
struct FLocationRecord
{
	float                                              X;                                                         // 0x0000(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              Y;                                                         // 0x0004(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              Z;                                                         // 0x0008(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct Killstreak.ObjectiveRecord
// 0x0010
struct FObjectiveRecord
{
	int                                                Type;                                                      // 0x0000(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FLocationRecord                             Location;                                                  // 0x0004(0x000C) (NoDestructor, NativeAccessSpecifierPublic)

};

// ScriptStruct Killstreak.MinimapData
// 0x0020
struct FMinimapData
{
	struct FLocationRecord                             northwest_corner;                                          // 0x0000(0x000C) (NoDestructor, NativeAccessSpecifierPublic)
	float                                              Width;                                                     // 0x000C(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<struct FObjectiveRecord>                    objectives;                                                // 0x0010(0x0010) (ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct Killstreak.KSCharacterSocketInfo
// 0x0070
struct FKSCharacterSocketInfo
{
	struct FName                                       SocketName;                                                // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_0G4D[0x8];                                     // 0x0008(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FTransform                                  RelativeTM;                                                // 0x0010(0x0030) (IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	class UKSCharacterSocketComponent*                 SocketComponent;                                           // 0x0040(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class USceneComponent*                             ParentComponent;                                           // 0x0048(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FName                                       ParentSocketName;                                          // 0x0050(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	Killstreak_EKSSocketCrouchHandling                 CrouchHandlingType;                                        // 0x0058(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_CVBS[0x3];                                     // 0x0059(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FVector                                     AdditiveCrouchOffset;                                      // 0x005C(0x000C) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_BUXD[0x8];                                     // 0x0068(0x0008) MISSED OFFSET (PADDING)

};

// ScriptStruct Killstreak.KSDamageRecord
// 0x0018
struct FKSDamageRecord
{
	TArray<class UKSWeaponAsset*>                      WeaponsUsed;                                               // 0x0000(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              TotalRecordedDamage;                                       // 0x0010(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_WPUH[0x4];                                     // 0x0014(0x0004) MISSED OFFSET (PADDING)

};

// ScriptStruct Killstreak.CompressedShotgunHitData
// 0x0010
struct FCompressedShotgunHitData
{
	class UKSWeaponAsset_Shotgun*                      ShotgunAsset;                                              // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint64_t                                           CompressedHitResults;                                      // 0x0008(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct Killstreak.KSOutOfBoundsInfo
// 0x0008
struct FKSOutOfBoundsInfo
{
	bool                                               bOutOfBounds;                                              // 0x0000(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_P4J1[0x3];                                     // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	float                                              WarningLength;                                             // 0x0004(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct Killstreak.KSInitialInventoryItem
// 0x0020
struct FKSInitialInventoryItem
{
	struct FGameplayTag                                EquipPoint;                                                // 0x0000(0x0008) (Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UKSItem*                                     ItemAsset;                                                 // 0x0008(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<class UKSWeaponAttachment*>                 Attachments;                                               // 0x0010(0x0010) (Edit, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct Killstreak.KSInitialAmmo
// 0x0008
struct FKSInitialAmmo
{
	Killstreak_EAmmoType                               AmmoType;                                                  // 0x0000(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_0YPX[0x3];                                     // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	int                                                AmmoCount;                                                 // 0x0004(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct Killstreak.KSLootLockerItem
// 0x0020
struct FKSLootLockerItem
{
	class UKSWeaponAsset*                              WeaponAsset;                                               // 0x0000(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UKSWeaponAttachment*                         Attachment1;                                               // 0x0008(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UKSWeaponAttachment*                         Attachment2;                                               // 0x0010(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UKSWeaponAttachment*                         Attachment3;                                               // 0x0018(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct Killstreak.KSWeaponDataUpdateContainer
// 0x0004
struct FKSWeaponDataUpdateContainer
{
	bool                                               bChangeWeaponState;                                        // 0x0000(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	Killstreak_EWeaponStateNew                         WeaponState;                                               // 0x0001(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bChangeAimMode;                                            // 0x0002(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	Killstreak_EKSCharacterAimMode                     AimMode;                                                   // 0x0003(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct Killstreak.KSAmmoManagerEntry
// 0x0010 (0x001C - 0x000C)
struct FKSAmmoManagerEntry : public FFastArraySerializerItem
{
	Killstreak_EAmmoType                               AmmoType;                                                  // 0x000C(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_Q60M[0x3];                                     // 0x000D(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	uint32_t                                           UpdateId;                                                  // 0x0010(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                AmmoCount;                                                 // 0x0014(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_AF3Z[0x4];                                     // 0x0018(0x0004) MISSED OFFSET (PADDING)

};

// ScriptStruct Killstreak.KSAmmoTransactions
// 0x0018
struct FKSAmmoTransactions
{
	uint64_t                                           TransactionId;                                             // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint32_t                                           UpdateIdAtTimeOfTransaction;                               // 0x0008(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	Killstreak_EAmmoType                               AmmoType;                                                  // 0x000C(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_UR0D[0x3];                                     // 0x000D(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	int                                                AmmoDelta;                                                 // 0x0010(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_TPKC[0x4];                                     // 0x0014(0x0004) MISSED OFFSET (PADDING)

};

// ScriptStruct Killstreak.AssistTag
// 0x0010
struct FAssistTag
{
	float                                              ExpirationTime;                                            // 0x0000(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_T0J1[0x4];                                     // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class AKSPlayerState*                              Assistant;                                                 // 0x0008(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct Killstreak.ReviveInfo
// 0x0030
struct FReviveInfo
{
	bool                                               bIsBeingRevived;                                           // 0x0000(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bRemoteRevive;                                             // 0x0001(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bSelectedToRevive;                                         // 0x0002(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bReviveGuaranteed;                                         // 0x0003(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_G41S[0x4];                                     // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class AKSPlayerState*                              Reviver;                                                   // 0x0008(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class AKSCharacter*                                ReviverCharacter;                                          // 0x0010(0x0008) (ZeroConstructor, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FName                                       ReviveeOverrideMontage;                                    // 0x0018(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              ReviveProgress;                                            // 0x0020(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              ReviveRate;                                                // 0x0024(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              LocalReviveProgress;                                       // 0x0028(0x0004) (ZeroConstructor, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      RequestID;                                                 // 0x002C(0x0001) (ZeroConstructor, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_SMZW[0x3];                                     // 0x002D(0x0003) MISSED OFFSET (PADDING)

};

// ScriptStruct Killstreak.KSInteractableCameraTransition
// 0x0030
struct FKSInteractableCameraTransition
{
	struct FName                                       CameraName;                                                // 0x0000(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              TransitionInTime;                                          // 0x0008(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TEnumAsByte<Engine_EViewTargetBlendFunction>       TransitionInFunction;                                      // 0x000C(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_OUVJ[0x3];                                     // 0x000D(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	float                                              TransitionInExp;                                           // 0x0010(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              TransitionOutTime;                                         // 0x0014(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bForceCameraShoulder;                                      // 0x0018(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	Killstreak_ECameraShoulder                         CameraShoulder;                                            // 0x0019(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_DCFY[0x2];                                     // 0x001A(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	float                                              RotationLockAngle;                                         // 0x001C(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               RotationLockout;                                           // 0x0020(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bLockPitch;                                                // 0x0021(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bLockYaw;                                                  // 0x0022(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bCameraShake;                                              // 0x0023(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_N9DI[0x4];                                     // 0x0024(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UClass*                                      CameraShake;                                               // 0x0028(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct Killstreak.KSFlashBangRecord
// 0x0018
struct FKSFlashBangRecord
{
	Killstreak_EFlashBangIntensity                     FlashBangIntensity;                                        // 0x0000(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_12Q7[0x7];                                     // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UCurveFloat*                                 IntensityCurve;                                            // 0x0008(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              TimeElapsed;                                               // 0x0010(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_3YK7[0x4];                                     // 0x0014(0x0004) MISSED OFFSET (PADDING)

};

// ScriptStruct Killstreak.AppliedApparelKey
// 0x0004
struct FAppliedApparelKey
{
	int                                                ID;                                                        // 0x0000(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)

};

// ScriptStruct Killstreak.KSCharacterGender
// 0x0002
struct FKSCharacterGender
{
	Killstreak_EKSCharacterGender                      Apparel;                                                   // 0x0000(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	Killstreak_EKSCharacterGender                      Vocal;                                                     // 0x0001(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct Killstreak.FloatHitSpringState
// 0x0008
struct FFloatHitSpringState
{
	unsigned char                                      UnknownData_TU16[0x8];                                     // 0x0000(0x0008) MISSED OFFSET (PADDING)

};

// ScriptStruct Killstreak.MantleConfig
// 0x00A8
struct FMantleConfig
{
	struct FName                                       MantleSequenceName;                                        // 0x0000(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UAnimSequence*                               DefaultMantleSequence;                                     // 0x0008(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	Killstreak_EKSMantleScaleType                      DistanceScaleMethod;                                       // 0x0010(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_QG02[0x3];                                     // 0x0011(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	float                                              IdealHeight;                                               // 0x0014(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              MaxHeight;                                                 // 0x0018(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              DefaultMinHeight;                                          // 0x001C(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              ShaveCutoffTime;                                           // 0x0020(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bHasDropSegment;                                           // 0x0024(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bUseOnJump;                                                // 0x0025(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bCanStartWhileFalling;                                     // 0x0026(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_IFVV[0x1];                                     // 0x0027(0x0001) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	float                                              EarlyOutTime;                                              // 0x0028(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bCanEndWithStand;                                          // 0x002C(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bCanEndWithSlide;                                          // 0x002D(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bCanEndWithFall;                                           // 0x002E(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_PYJ9[0x49];                                    // 0x002F(0x0049) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UAnimSequence*                               CachedSequence;                                            // 0x0078(0x0008) (ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData_GSM7[0x28];                                    // 0x0080(0x0028) MISSED OFFSET (PADDING)

};

// ScriptStruct Killstreak.KSChildPhysicsAssetKeywords
// 0x0018
struct FKSChildPhysicsAssetKeywords
{
	struct FName                                       AssetKeyword;                                              // 0x0000(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FName                                       CollisionProfileKeyword;                                   // 0x0008(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FName                                       SimulatePhysicsKeyword;                                    // 0x0010(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct Killstreak.ChildBodyCollisionProfileCache
// 0x000C
struct FChildBodyCollisionProfileCache
{
	int                                                BodyIndex;                                                 // 0x0000(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FName                                       CollisionProfileName;                                      // 0x0004(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct Killstreak.KSFreezeFrameVFXEntry
// 0x0030
struct FKSFreezeFrameVFXEntry
{
	class UParticleSystem*                             VFX;                                                       // 0x0000(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FName                                       AttachPoint;                                               // 0x0008(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                                     Offset;                                                    // 0x0010(0x000C) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              TimeDilation;                                              // 0x001C(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FGuid                                       VFXID;                                                     // 0x0020(0x0010) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct Killstreak.KSFreezeFramePropBase
// 0x0080
struct FKSFreezeFramePropBase
{
	struct FName                                       AttachPoint;                                               // 0x0000(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                                     LocationOffset;                                            // 0x0008(0x000C) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FRotator                                    Rotation;                                                  // 0x0014(0x000C) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	struct FVector                                     Scale;                                                     // 0x0020(0x000C) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_VDXQ[0x4];                                     // 0x002C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UAnimationAsset*                             PropAnimation;                                             // 0x0030(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bUseParentAnimationStartTime;                              // 0x0038(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_PH5V[0x3];                                     // 0x0039(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	float                                              PropAnimationStartTime;                                    // 0x003C(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FKSFreezeFrameVFXEntry                      VFXEntry;                                                  // 0x0040(0x0030) (Edit, NoDestructor, NativeAccessSpecifierPublic)
	struct FGuid                                       propId;                                                    // 0x0070(0x0010) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct Killstreak.KSFreezeFramePawnWeaponProp
// 0x0010 (0x0090 - 0x0080)
struct FKSFreezeFramePawnWeaponProp : public FKSFreezeFramePropBase
{
	class UDataTable*                                  MeshDataTable;                                             // 0x0080(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UDataTable*                                  WrapDataTable;                                             // 0x0088(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct Killstreak.KSRespawnConfig
// 0x0018
struct FKSRespawnConfig
{
	Killstreak_EKSRespawnMode                          RespawnMode;                                               // 0x0000(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_GAEX[0x3];                                     // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	int                                                TotalRespawns;                                             // 0x0004(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                PersonalRespawns;                                          // 0x0008(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              RespawnTime;                                               // 0x000C(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               WaveRespawn;                                               // 0x0010(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_3WM0[0x3];                                     // 0x0011(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	int                                                CostPerRespawn;                                            // 0x0014(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct Killstreak.KSLootRaritySwapInfo
// 0x000C
struct FKSLootRaritySwapInfo
{
	float                                              Chance;                                                    // 0x0000(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                Amount;                                                    // 0x0004(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	Killstreak_ELootSiteRarity                         OldRarity;                                                 // 0x0008(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	Killstreak_ELootSiteRarity                         NewRarity;                                                 // 0x0009(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_G7DM[0x2];                                     // 0x000A(0x0002) MISSED OFFSET (PADDING)

};

// ScriptStruct Killstreak.KSGameHUDSettings
// 0x0018
struct FKSGameHUDSettings
{
	bool                                               ShouldShowEnemyCaptureProgress;                            // 0x0000(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_O43M[0x7];                                     // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UClass*                                      GameModeWidget;                                            // 0x0008(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               ShowRoundEndResults;                                       // 0x0010(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_ZIKJ[0x7];                                     // 0x0011(0x0007) MISSED OFFSET (PADDING)

};

// ScriptStruct Killstreak.CharacterRestoreOptions
// 0x0008
struct FCharacterRestoreOptions
{
	bool                                               bReplaceAmmo;                                              // 0x0000(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bReplaceInventory;                                         // 0x0001(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bReplaceHealth;                                            // 0x0002(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_2X3F[0x1];                                     // 0x0003(0x0001) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	float                                              MinimumStartingHealthPercentage;                           // 0x0004(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct Killstreak.KSSeamlessTravelSettings
// 0x0010
struct FKSSeamlessTravelSettings
{
	bool                                               bRestoreLoadouts;                                          // 0x0000(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bSkipDestinationDefaultInventory;                          // 0x0001(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bRestoreCharacterState;                                    // 0x0002(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_STAJ[0x1];                                     // 0x0003(0x0001) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FCharacterRestoreOptions                    CharacterStateRestoreOptions;                              // 0x0004(0x0008) (Edit, NoDestructor, NativeAccessSpecifierPublic)
	bool                                               bCanReuseControllers;                                      // 0x000C(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bRestoreBotDataPlayerStates;                               // 0x000D(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_0NLA[0x2];                                     // 0x000E(0x0002) MISSED OFFSET (PADDING)

};

// ScriptStruct Killstreak.InventoryRestoreInfo
// 0x0010
struct FInventoryRestoreInfo
{
	struct FGameplayTag                                EquipPoint;                                                // 0x0000(0x0008) (Edit, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UKSItem*                                     Item;                                                      // 0x0008(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct Killstreak.RadialMenuItemEventInfo
// 0x0010
struct FRadialMenuItemEventInfo
{
	TWeakObjectPtr<class APlayerState>                 EventInstigator;                                           // 0x0000(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TWeakObjectPtr<class UKSRadialMenuItem>            RadialMenuItem;                                            // 0x0008(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct Killstreak.ReviveEvent
// 0x0014
struct FReviveEvent
{
	TWeakObjectPtr<class AKSPlayerState>               Reviver;                                                   // 0x0000(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TWeakObjectPtr<class AKSPlayerState>               Revivee;                                                   // 0x0008(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                ExpBonus;                                                  // 0x0010(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct Killstreak.KSTimerPriorityConfig
// 0x0003
struct FKSTimerPriorityConfig
{
	Killstreak_EKSPriority                             RoundTimerPriority;                                        // 0x0000(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	Killstreak_EKSPriority                             PhaseTimerPriority;                                        // 0x0001(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	Killstreak_EKSPriority                             ObjectiveTimerPriority;                                    // 0x0002(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct Killstreak.KSLootRarityTimerPair
// 0x0010
struct FKSLootRarityTimerPair
{
	Killstreak_ELootSiteRarity                         Rarity;                                                    // 0x0000(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_QOTW[0x7];                                     // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UKSTimerComponent*                           Timer;                                                     // 0x0008(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct Killstreak.AccoladeEventEntry
// 0x0078
struct FAccoladeEventEntry
{
	TWeakObjectPtr<class AKSPlayerState>               RelevantPlayer;                                            // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FAccoladeDisplayInfo                        AccoladeDisplayInfo;                                       // 0x0008(0x0068) (NativeAccessSpecifierPublic)
	bool                                               IgnoreRelevantPlayerId;                                    // 0x0070(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_CAD6[0x7];                                     // 0x0071(0x0007) MISSED OFFSET (PADDING)

};

// ScriptStruct Killstreak.KSPersistentMinPlayerData
// 0x002C (0x0038 - 0x000C)
struct FKSPersistentMinPlayerData : public FFastArraySerializerItem
{
	unsigned char                                      UnknownData_7IVI[0x4];                                     // 0x000C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FKSPersistentPlayerId                       ID;                                                        // 0x0010(0x0010) (NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                TeamNum;                                                   // 0x0020(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_4CUZ[0x4];                                     // 0x0024(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FString                                     PlayerName;                                                // 0x0028(0x0010) (ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct Killstreak.KSPersistentMinPlayerDataContainer
// 0x0108 (0x0210 - 0x0108)
struct FKSPersistentMinPlayerDataContainer : public FFastArraySerializer
{
	TArray<struct FKSPersistentMinPlayerData>          ReplicatedPlayerData;                                      // 0x0108(0x0010) (ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	TMap<struct FKSPersistentPlayerId, class UKSPersistentPlayerData*> LocalPlayerData;                                           // 0x0118(0x0050) (Transient, NativeAccessSpecifierPrivate)
	unsigned char                                      AllLocalPlayerData[0x50];                                  // 0x0168(0x0050) UNKNOWN PROPERTY: SetProperty
	unsigned char                                      KnownDeadEnginePlayerIds[0x50];                            // 0x01B8(0x0050) UNKNOWN PROPERTY: SetProperty
	unsigned char                                      UnknownData_KLW3[0x8];                                     // 0x0208(0x0008) MISSED OFFSET (PADDING)

};

// ScriptStruct Killstreak.RoundResult
// 0x0020
struct FRoundResult
{
	unsigned char                                      RoundNumber;                                               // 0x0000(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_MHG4[0x7];                                     // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class AKSTeamState*                                WinningTeam;                                               // 0x0008(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                WinnerScore;                                               // 0x0010(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               WinByElimination;                                          // 0x0014(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      LastTriggeredRound;                                        // 0x0015(0x0001) (ZeroConstructor, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_P600[0x2];                                     // 0x0016(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class AKSObjectiveBase*                            ObjectiveChosen;                                           // 0x0018(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct Killstreak.RoundInitState
// 0x0010
struct FRoundInitState
{
	unsigned char                                      RoundNumber;                                               // 0x0000(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_Q6QU[0x3];                                     // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	int                                                AttackingTeam;                                             // 0x0004(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                DefendingTeam;                                             // 0x0008(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      LastPrepareTriggered;                                      // 0x000C(0x0001) (ZeroConstructor, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      LastRoundStartTriggered;                                   // 0x000D(0x0001) (ZeroConstructor, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_1RD3[0x2];                                     // 0x000E(0x0002) MISSED OFFSET (PADDING)

};

// ScriptStruct Killstreak.SettingConfigPair
// 0x0018
struct FSettingConfigPair
{
	struct FName                                       Name;                                                      // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     Value;                                                     // 0x0008(0x0010) (ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct Killstreak.KSShotgunHitChangeItem
// 0x0010
struct FKSShotgunHitChangeItem : public FReplicatedLogItem
{
	struct FCompressedShotgunHitData                   ShotgunHitData;                                            // 0x0000(0x0010) (NoDestructor, NativeAccessSpecifierPublic)

};

// ScriptStruct Killstreak.KSShotgunHitChangeList
// 0x0018 (0x0088 - 0x0070)
struct FKSShotgunHitChangeList : public FReplicatedLog
{
	TArray<struct FKSShotgunHitChangeItem>             Items;                                                     // 0x0070(0x0010) (ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_9OV6[0x8];                                     // 0x0080(0x0008) MISSED OFFSET (PADDING)

};

// ScriptStruct Killstreak.KSActiveEmotePropInfo
// 0x0018
struct FKSActiveEmotePropInfo
{
	struct FGuid                                       EmotePropGuid;                                             // 0x0000(0x0010) (Edit, BlueprintVisible, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TWeakObjectPtr<class UMeshComponent>               SpawnedEmotePropMeshComponent;                             // 0x0010(0x0008) (Edit, BlueprintVisible, ExportObject, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct Killstreak.SmoothedComponentInfo
// 0x0030
struct FSmoothedComponentInfo
{
	class USceneComponent*                             Component;                                                 // 0x0000(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                                     InitialTranslationOffset;                                  // 0x0008(0x000C) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_RKA2[0xC];                                     // 0x0014(0x000C) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FQuat                                       InitialRotationOffset;                                     // 0x0020(0x0010) (IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)

};

// ScriptStruct Killstreak.TargetingModuleTickFunction
// 0x0008 (0x0030 - 0x0028)
struct FTargetingModuleTickFunction : public FTickFunction
{
	unsigned char                                      UnknownData_JRVX[0x8];                                     // 0x0028(0x0008) MISSED OFFSET (PADDING)

};

// ScriptStruct Killstreak.KSProjectileTargetingStateValidator
// 0x0004
struct FKSProjectileTargetingStateValidator
{
	bool                                               bAnyWeaponState;                                           // 0x0000(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bAnyCharacterAimMode;                                      // 0x0001(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	Killstreak_EWeaponStateNew                         WeaponState;                                               // 0x0002(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	Killstreak_EKSCharacterAimMode                     CharacterAimMode;                                          // 0x0003(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct Killstreak.CombatEvent
// 0x0014
struct FCombatEvent
{
	struct FVector                                     Location;                                                  // 0x0000(0x000C) (Edit, BlueprintVisible, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               Fatal;                                                     // 0x000C(0x0001) (Edit, BlueprintVisible, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_6SGQ[0x3];                                     // 0x000D(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	float                                              Damage;                                                    // 0x0010(0x0004) (Edit, BlueprintVisible, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct Killstreak.LobbyStaticPropInfo
// 0x0050
struct FLobbyStaticPropInfo
{
	bool                                               Enable;                                                    // 0x0000(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_XE1C[0x3];                                     // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FName                                       AttachPoint;                                               // 0x0004(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_QGHB[0x4];                                     // 0x000C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UStaticMesh*                                 StaticMesh;                                                // 0x0010(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_GH5S[0x8];                                     // 0x0018(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FTransform                                  TransformOffset;                                           // 0x0020(0x0030) (Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)

};

// ScriptStruct Killstreak.ItemDisplayStatParams
// 0x0010 (0x0018 - 0x0008)
struct FItemDisplayStatParams : public FTableRowBase
{
	float                                              RangeMin;                                                  // 0x0008(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              RangeMax;                                                  // 0x000C(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               ShowsBar;                                                  // 0x0010(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_66TD[0x7];                                     // 0x0011(0x0007) MISSED OFFSET (PADDING)

};

// ScriptStruct Killstreak.ItemDisplayStat
// 0x0038
struct FItemDisplayStat
{
	struct FText                                       DisplayText;                                               // 0x0000(0x0018) (BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic)
	float                                              Value;                                                     // 0x0018(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_574Q[0x4];                                     // 0x001C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FItemDisplayStatParams                      StatProperties;                                            // 0x0020(0x0018) (BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic)

};

// ScriptStruct Killstreak.KSItemMasterTableRow
// 0x0040 (0x0048 - 0x0008)
struct FKSItemMasterTableRow : public FTableRowBase
{
	struct FString                                     ItemDisplayName;                                           // 0x0008(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                ItemId;                                                    // 0x0018(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_FW4N[0x4];                                     // 0x001C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	unsigned char                                      KSItemSoftObject[0x28];                                    // 0x001C(0x0028) UNKNOWN PROPERTY: SoftObjectProperty

};

// ScriptStruct Killstreak.WeaponWrapTestPairs
// 0x0030
struct FWeaponWrapTestPairs
{
	struct FSoftObjectPath                             Weapon;                                                    // 0x0000(0x0018) (Edit, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FSoftObjectPath                             Attachment;                                                // 0x0018(0x0018) (Edit, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct Killstreak.LootSiteTableRow
// 0x00A8 (0x00B0 - 0x0008)
struct FLootSiteTableRow : public FTableRowBase
{
	unsigned char                                      Item[0x28];                                                // 0x0008(0x0028) UNKNOWN PROPERTY: SoftObjectProperty
	unsigned char                                      Attachment1[0x28];                                         // 0x0030(0x0028) UNKNOWN PROPERTY: SoftObjectProperty
	unsigned char                                      Attachment2[0x28];                                         // 0x0058(0x0028) UNKNOWN PROPERTY: SoftObjectProperty
	unsigned char                                      Attachment3[0x28];                                         // 0x0080(0x0028) UNKNOWN PROPERTY: SoftObjectProperty
	float                                              Weight;                                                    // 0x00A8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              ChanceToSkipAttachment;                                    // 0x00AC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct Killstreak.KSMVPOrderHelper
// 0x0010
struct FKSMVPOrderHelper
{
	class UKSPersistentPlayerData*                     OwningPersistentPlayerData;                                // 0x0000(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                OrderPoints;                                               // 0x0008(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_1FM8[0x4];                                     // 0x000C(0x0004) MISSED OFFSET (PADDING)

};

// ScriptStruct Killstreak.AirElimTracker
// 0x0008
struct FAirElimTracker
{
	int                                                InstigatorId;                                              // 0x0000(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                DownCount;                                                 // 0x0004(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct Killstreak.PingCacher
// 0x0010
struct FPingCacher
{
	class AKSPlayerState*                              PingingPlayer;                                             // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                PingId;                                                    // 0x0008(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_VE4J[0x4];                                     // 0x000C(0x0004) MISSED OFFSET (PADDING)

};

// ScriptStruct Killstreak.InternalPingInfo
// 0x0010
struct FInternalPingInfo
{
	int                                                PingId;                                                    // 0x0000(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                DisplayId;                                                 // 0x0004(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class AKSPlayerState*                              CreatingPlayer;                                            // 0x0008(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct Killstreak.PlayerAlias
// 0x0020
struct FPlayerAlias
{
	unsigned char                                      UnknownData_0ZC5[0x20];                                    // 0x0000(0x0020) MISSED OFFSET (PADDING)

};

// ScriptStruct Killstreak.KSInputActionKey
// 0x0020
struct FKSInputActionKey
{
	struct FKey                                        Key;                                                       // 0x0000(0x0018) (HasGetValueTypeHash, NativeAccessSpecifierPublic)
	Killstreak_EKSInputActionType                      Type;                                                      // 0x0018(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_1IR9[0x7];                                     // 0x0019(0x0007) MISSED OFFSET (PADDING)

};

// ScriptStruct Killstreak.LaggedProjectileHit
// 0x0094
struct FLaggedProjectileHit
{
	struct FHitResult                                  HitResult;                                                 // 0x0000(0x0088) (IsPlainOldData, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPublic)
	float                                              ClientHitTimeStamp;                                        // 0x0088(0x0004) (ZeroConstructor, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              AdditionalPredictionTime;                                  // 0x008C(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	Killstreak_EProjectilePredictionType               PredictionType;                                            // 0x0090(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_QUV5[0x3];                                     // 0x0091(0x0003) MISSED OFFSET (PADDING)

};

// ScriptStruct Killstreak.BadBehaviorTracker
// 0x000C
struct FBadBehaviorTracker
{
	unsigned char                                      UnknownData_0AFM[0xC];                                     // 0x0000(0x000C) MISSED OFFSET (PADDING)

};

// ScriptStruct Killstreak.KSLimitedTimeEventMetadataRow
// 0x0058 (0x0060 - 0x0008)
struct FKSLimitedTimeEventMetadataRow : public FTableRowBase
{
	struct FText                                       EventName;                                                 // 0x0008(0x0018) (Edit, BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic)
	struct FText                                       EventDescription;                                          // 0x0020(0x0018) (Edit, BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic)
	unsigned char                                      EventIcon[0x28];                                           // 0x0038(0x0028) UNKNOWN PROPERTY: SoftObjectProperty

};

// ScriptStruct Killstreak.RecoilParams2
// 0x0003
struct FRecoilParams2
{
	unsigned char                                      UnknownData_LLWZ[0x3];                                     // 0x0000(0x0003) MISSED OFFSET (PADDING)

};

// ScriptStruct Killstreak.RecoilInfo2
// 0x0070
struct FRecoilInfo2
{
	float                                              TimeToGo;                                                  // 0x0000(0x0004) (ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              TimeDuration;                                              // 0x0004(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                                     RotAmplitude;                                              // 0x0008(0x000C) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                                     RotFrequency;                                              // 0x0014(0x000C) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_1JXH[0xC];                                     // 0x0020(0x000C) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FRecoilParams2                              RotParams;                                                 // 0x002C(0x0003) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_ZROJ[0x1];                                     // 0x002F(0x0001) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FRotator                                    RotOffset;                                                 // 0x0030(0x000C) (ZeroConstructor, Transient, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	struct FVector                                     LocAmplitude;                                              // 0x003C(0x000C) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                                     LocFrequency;                                              // 0x0048(0x000C) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_KV7K[0xC];                                     // 0x0054(0x000C) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FRecoilParams2                              LocParams;                                                 // 0x0060(0x0003) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_CCAB[0x1];                                     // 0x0063(0x0001) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FVector                                     LocOffset;                                                 // 0x0064(0x000C) (ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct Killstreak.RecoilProfile2
// 0x01C0
struct FRecoilProfile2
{
	struct FRecoilInfo2                                PelvisRecoil;                                              // 0x0000(0x0070) (Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic)
	struct FRecoilInfo2                                SpineRecoil;                                               // 0x0070(0x0070) (Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic)
	struct FRecoilInfo2                                NeckRecoil;                                                // 0x00E0(0x0070) (Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic)
	struct FRecoilInfo2                                HandRecoil;                                                // 0x0150(0x0070) (Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic)

};

// ScriptStruct Killstreak.RewardProgress
// 0x0090
struct FRewardProgress
{
	int                                                InitialQuantity;                                           // 0x0000(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                Quantity;                                                  // 0x0004(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<Killstreak_ERewardSource>                   SourceKeys;                                                // 0x0008(0x0010) (BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<float>                                      SourceValues;                                              // 0x0018(0x0010) (BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<struct FString>                             EventKeys;                                                 // 0x0028(0x0010) (BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<float>                                      EventValues;                                               // 0x0038(0x0010) (BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<struct FString>                             BoosterKeys;                                               // 0x0048(0x0010) (BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<float>                                      BoosterValues;                                             // 0x0058(0x0010) (BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<struct FString>                             ExtraDataKeys;                                             // 0x0068(0x0010) (BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<float>                                      ExtraDataValues;                                           // 0x0078(0x0010) (BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               InitialUnlocked;                                           // 0x0088(0x0001) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_C8X4[0x7];                                     // 0x0089(0x0007) MISSED OFFSET (PADDING)

};

// ScriptStruct Killstreak.PlayerMatchStatInfo
// 0x0010
struct FPlayerMatchStatInfo
{
	Killstreak_EPlayerStatType                         StatType;                                                  // 0x0000(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_UWFS[0x3];                                     // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	float                                              StatValue;                                                 // 0x0004(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                StatPlaceTeam;                                             // 0x0008(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                StatPlaceAll;                                              // 0x000C(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct Killstreak.PlayerRewardsSummaryReplicated
// 0x0030
struct FPlayerRewardsSummaryReplicated
{
	TArray<int64_t>                                    ActivityKeys;                                              // 0x0000(0x0010) (ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<struct FRewardProgress>                     ActivityValues;                                            // 0x0010(0x0010) (ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<struct FPlayerMatchStatInfo>                BestStats;                                                 // 0x0020(0x0010) (ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct Killstreak.RoyaleZoneData
// 0x0014
struct FRoyaleZoneData
{
	float                                              ZoneRadius;                                                // 0x0000(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              TimeToShrink;                                              // 0x0004(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              TimeAfterShrink;                                           // 0x0008(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              DamagePerTick;                                             // 0x000C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              DamageTickPeriod;                                          // 0x0010(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct Killstreak.SettingDelegateStruct
// 0x0020
struct FSettingDelegateStruct
{
	struct FScriptDelegate                             SettingApplied;                                            // 0x0000(0x0010) (BlueprintVisible, ZeroConstructor, InstancedReference, NoDestructor, NativeAccessSpecifierPublic)
	struct FScriptDelegate                             SettingSaved;                                              // 0x0010(0x0010) (BlueprintVisible, ZeroConstructor, InstancedReference, NoDestructor, NativeAccessSpecifierPublic)

};

// ScriptStruct Killstreak.PlayerShopTransaction
// 0x0008
struct FPlayerShopTransaction
{
	Killstreak_EPlayerShopTransactionType              TransactionType;                                           // 0x0000(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	Killstreak_EShopItemType                           ItemType;                                                  // 0x0001(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_4BL6[0x2];                                     // 0x0002(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	uint32_t                                           TransactionRequestId;                                      // 0x0004(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct Killstreak.KSPlayerEventRecord
// 0x0018
struct FKSPlayerEventRecord
{
	int                                                PlayerId;                                                  // 0x0000(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                PlayerSide;                                                // 0x0004(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                                     EventLocation;                                             // 0x0008(0x000C) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              Timestamp;                                                 // 0x0014(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct Killstreak.AccountConsumableDetails
// 0x0010
struct FAccountConsumableDetails
{
	class UKSItem*                                     KSItem;                                                    // 0x0000(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                QuantityOwned;                                             // 0x0008(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_30KY[0x4];                                     // 0x000C(0x0004) MISSED OFFSET (PADDING)

};

// ScriptStruct Killstreak.StoreItemWithTrueSort
// 0x0018
struct FStoreItemWithTrueSort
{
	unsigned char                                      UnknownData_82IU[0x18];                                    // 0x0000(0x0018) MISSED OFFSET (PADDING)

};

// ScriptStruct Killstreak.QuantityRarity
// 0x0028 (0x0030 - 0x0008)
struct FQuantityRarity : public FTableRowBase
{
	int                                                MinQuantityRange;                                          // 0x0008(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                MaxQuantityRange;                                          // 0x000C(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FGameplayTagContainer                       RarityTag;                                                 // 0x0010(0x0020) (Edit, BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic)

};

// ScriptStruct Killstreak.RestoreInfoInitParams
// 0x0005
struct FRestoreInfoInitParams
{
	Killstreak_ERestoreInfoInitBindType                BindType;                                                  // 0x0000(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	Killstreak_ERestoreInfoInitRestoreType             RestoreType;                                               // 0x0001(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bRestoreOnce;                                              // 0x0002(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bRestoreExhausted;                                         // 0x0003(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bIncludeDefaultCosmetics;                                  // 0x0004(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct Killstreak.KSSettingsState
// 0x0005
struct FKSSettingsState
{
	bool                                               bIsGamepadAttached;                                        // 0x0000(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bIsMouseAttached;                                          // 0x0001(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bIsDockedMode;                                             // 0x0002(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bIsHandheldMode;                                           // 0x0003(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bIsTouchMode;                                              // 0x0004(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct Killstreak.KSCSVRow
// 0x0010
struct FKSCSVRow
{
	TArray<struct FString>                             CSVColumn;                                                 // 0x0000(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct Killstreak.ContextualPingMessagesRow
// 0x0030 (0x0038 - 0x0008)
struct FContextualPingMessagesRow : public FTableRowBase
{
	Killstreak_EPingMessage                            PingMessage;                                               // 0x0008(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_K97P[0x7];                                     // 0x0009(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	unsigned char                                      PingMessageIcon[0x28];                                     // 0x0009(0x0028) UNKNOWN PROPERTY: SoftObjectProperty

};

// ScriptStruct Killstreak.ContextualPingTypesRow
// 0x0040 (0x0048 - 0x0008)
struct FContextualPingTypesRow : public FTableRowBase
{
	Killstreak_EPingType                               PingType;                                                  // 0x0008(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_7CLK[0x3];                                     // 0x0009(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FLinearColor                                PingColor;                                                 // 0x000C(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_SD55[0x4];                                     // 0x001C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	unsigned char                                      PingIcon[0x28];                                            // 0x001C(0x0028) UNKNOWN PROPERTY: SoftObjectProperty

};

// ScriptStruct Killstreak.ScreenLogData
// 0x0030
struct FScreenLogData
{
	Killstreak_EScreenLogType                          ScreenLogData;                                             // 0x0000(0x0001) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_XFCS[0x7];                                     // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class APlayerState*                                Instigator;                                                // 0x0008(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class APlayerState*                                Victim;                                                    // 0x0010(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UKSItem*                                     Weapon;                                                    // 0x0018(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bDowned;                                                   // 0x0020(0x0001) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bMastered;                                                 // 0x0021(0x0001) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_TAQV[0x6];                                     // 0x0022(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UKSRadialMenuItem*                           RadialMenuItem;                                            // 0x0028(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct Killstreak.KSOutlineParameters
// 0x0038
struct FKSOutlineParameters
{
	Killstreak_EPlayerSilhouetteType                   ColorType;                                                 // 0x0000(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_QVDU[0x3];                                     // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FLinearColor                                OutlineColor;                                              // 0x0004(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FLinearColor                                FillColor;                                                 // 0x0014(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              OutlineThickness;                                          // 0x0024(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bShouldFill;                                               // 0x0028(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bHideWhenOccluded;                                         // 0x0029(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bShowOnlyWhileOccluded;                                    // 0x002A(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bIsHot;                                                    // 0x002B(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bIsFriendly;                                               // 0x002C(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bCutoutOtherOutlines;                                      // 0x002D(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_SHA8[0x2];                                     // 0x002E(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	float                                              OutlineZFadeMin;                                           // 0x0030(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              OutlineZFadeMax;                                           // 0x0034(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct Killstreak.KSPendingWeaponStateUpdates
// 0x000C
struct FKSPendingWeaponStateUpdates
{
	uint32_t                                           BroadcastId;                                               // 0x0000(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint16_t                                           nEquipmentId;                                              // 0x0004(0x0002) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FKSWeaponDataUpdateContainer                UpdateData;                                                // 0x0006(0x0004) (NoDestructor, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_5XWP[0x2];                                     // 0x000A(0x0002) MISSED OFFSET (PADDING)

};

// ScriptStruct Killstreak.KSScoreChangeEvent
// 0x0030
struct FKSScoreChangeEvent
{
	int                                                Delta;                                                     // 0x0000(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_L83K[0x4];                                     // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FText                                       Reason;                                                    // 0x0008(0x0018) (BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic)
	bool                                               bBonus;                                                    // 0x0020(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_HNQQ[0x3];                                     // 0x0021(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	TWeakObjectPtr<class AKSPlayerState>               Instigator;                                                // 0x0024(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_KQ3K[0x4];                                     // 0x002C(0x0004) MISSED OFFSET (PADDING)

};

// ScriptStruct Killstreak.KSScoreChangeItem
// 0x0030
struct FKSScoreChangeItem : public FReplicatedLogItem
{
	struct FKSScoreChangeEvent                         ScoreChange;                                               // 0x0000(0x0030) (NativeAccessSpecifierPublic)

};

// ScriptStruct Killstreak.KSScoreChangeList
// 0x0020 (0x0090 - 0x0070)
struct FKSScoreChangeList : public FSizedArraySerializer
{
	unsigned char                                      UnknownData_KWHP[0x8];                                     // 0x0070(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	TArray<struct FKSScoreChangeItem>                  Items;                                                     // 0x0078(0x0010) (ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_V5BA[0x8];                                     // 0x0088(0x0008) MISSED OFFSET (PADDING)

};

// ScriptStruct Killstreak.AncillaryWeaponMeshInfo
// 0x0018
struct FAncillaryWeaponMeshInfo
{
	class USkeletalMesh*                               Mesh;                                                      // 0x0000(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FName                                       DefaultAttachSocket;                                       // 0x0008(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FName                                       DefaultDetachSocket;                                       // 0x0010(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct Killstreak.ActiveWeaponProp
// 0x0090
struct FActiveWeaponProp
{
	unsigned char                                      UnknownData_NYOZ[0x88];                                    // 0x0000(0x0088) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class USkinnableSkeletalMeshComponent*             MeshComp;                                                  // 0x0088(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct Killstreak.LobbySkeletalPropInfo
// 0x0080
struct FLobbySkeletalPropInfo
{
	bool                                               Enable;                                                    // 0x0000(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_YF77[0x7];                                     // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FSoftObjectPath                             WeaponAsset;                                               // 0x0008(0x0018) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FName                                       AttachPoint;                                               // 0x0020(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UClass*                                      AnimInstance;                                              // 0x0028(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UAnimMontage*                                Montage;                                                   // 0x0030(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                TargetLOD;                                                 // 0x0038(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_R666[0x4];                                     // 0x003C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FTransform                                  TransformOffset;                                           // 0x0040(0x0030) (Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	int                                                WeaponAnimIndex;                                           // 0x0070(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_SM8K[0xC];                                     // 0x0074(0x000C) MISSED OFFSET (PADDING)

};

// ScriptStruct Killstreak.LegacyWeaponProp
// 0x00F0
struct FLegacyWeaponProp
{
	unsigned char                                      UnknownData_433N[0x10];                                    // 0x0000(0x0010) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FLobbySkeletalPropInfo                      LegacyInfo;                                                // 0x0010(0x0080) (NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_DAOS[0x8];                                     // 0x0090(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class USkinnableSkeletalMeshComponent*             MeshComp;                                                  // 0x0098(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_UEFG[0x50];                                    // 0x00A0(0x0050) MISSED OFFSET (PADDING)

};

// ScriptStruct Killstreak.LoadingScreenImageInfo
// 0x0070
struct FLoadingScreenImageInfo
{
	unsigned char                                      LoadingScreenImage[0x28];                                  // 0x0000(0x0028) UNKNOWN PROPERTY: SoftObjectProperty
	struct FText                                       MapDisplayName;                                            // 0x0028(0x0018) (Edit, NativeAccessSpecifierPublic)
	struct FText                                       MapRegion;                                                 // 0x0040(0x0018) (Edit, NativeAccessSpecifierPublic)
	struct FText                                       MapDescription;                                            // 0x0058(0x0018) (Edit, NativeAccessSpecifierPublic)

};

// ScriptStruct Killstreak.TimelineSimulationHandler
// 0x0014
struct FTimelineSimulationHandler
{
	float                                              ServerTimeStamp;                                           // 0x0000(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              ErrorTolerance;                                            // 0x0004(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      bLooping : 1;                                              // 0x0008(0x0001) BIT_FIELD (NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      bReversePlayback : 1;                                      // 0x0008(0x0001) BIT_FIELD (NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      bPlaying : 1;                                              // 0x0008(0x0001) BIT_FIELD (NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_NRF9[0x3];                                     // 0x0009(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	float                                              PlayRate;                                                  // 0x000C(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              Position;                                                  // 0x0010(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct Killstreak.ActiveThermalPPComponentInfo
// 0x0010
struct FActiveThermalPPComponentInfo
{
	class UThermalScopePPComponent*                    ThermalPPComponent;                                        // 0x0000(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class AKSPlayerCameraManager*                      PlayerCameraManager;                                       // 0x0008(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct Killstreak.DropItemParameters
// 0x0028
struct FDropItemParameters
{
	int                                                OriginalOwnerId;                                           // 0x0000(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                OriginalOwnerTeamNum;                                      // 0x0004(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bIsPlayerDrop;                                             // 0x0008(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_XW30[0x3];                                     // 0x0009(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	int                                                ObjectiveId;                                               // 0x000C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<class UKSWeaponAttachment*>                 Attachments;                                               // 0x0010(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                Price;                                                     // 0x0020(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	Killstreak_EDropPickupConfig                       DropPickupConfig;                                          // 0x0024(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_QNR4[0x3];                                     // 0x0025(0x0003) MISSED OFFSET (PADDING)

};

// ScriptStruct Killstreak.DamageEffect
// 0x0050
struct FDamageEffect
{
	float                                              Damage;                                                    // 0x0000(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              AttemptedDamage;                                           // 0x0004(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UClass*                                      DamageTypeClass;                                           // 0x0008(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class AActor*                                      DamageCauser;                                              // 0x0010(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                                     DamageOrigin;                                              // 0x0018(0x000C) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bArmorBroke;                                               // 0x0024(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bDamageResisted;                                           // 0x0025(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bDamageReduced;                                            // 0x0026(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bDamageShielded;                                           // 0x0027(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                                     RelativeImpactLocation;                                    // 0x0028(0x000C) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector_NetQuantizeNormal                   RelativeImpactNormal;                                      // 0x0034(0x000C) (Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FName                                       BoneName;                                                  // 0x0040(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               IsHeadshot;                                                // 0x0048(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_YMTS[0x7];                                     // 0x0049(0x0007) MISSED OFFSET (PADDING)

};

// ScriptStruct Killstreak.ShotgunHitData
// 0x0018
struct FShotgunHitData
{
	class UKSWeaponAsset_Shotgun*                      ShotgunAsset;                                              // 0x0000(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<Killstreak_EShotgunHitResult>               HitResults;                                                // 0x0008(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct Killstreak.ProjectileExplosionInfo
// 0x001C
struct FProjectileExplosionInfo
{
	Killstreak_EProjectileExplosionType                ExplosionType;                                             // 0x0000(0x0001) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TEnumAsByte<Engine_EPhysicalSurface>               SurfaceType;                                               // 0x0001(0x0001) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_T33P[0x2];                                     // 0x0002(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FVector_NetQuantize                         ImpactPoint;                                               // 0x0004(0x000C) (BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector_NetQuantizeNormal                   ImpactNormal;                                              // 0x0010(0x000C) (BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct Killstreak.KSPollData
// 0x0010
struct FKSPollData
{
	int                                                VoterCount;                                                // 0x0000(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                VotesInFavor;                                              // 0x0004(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                VotesAgainst;                                              // 0x0008(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              TimeElapsed;                                               // 0x000C(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct Killstreak.KSPollResults
// 0x0028
struct FKSPollResults
{
	struct FKSPollData                                 PollFinalData;                                             // 0x0000(0x0010) (BlueprintVisible, BlueprintReadOnly, NoDestructor, NativeAccessSpecifierPublic)
	struct FString                                     PollName;                                                  // 0x0010(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                TeamNum;                                                   // 0x0020(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bPollPassed;                                               // 0x0024(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_0FVT[0x3];                                     // 0x0025(0x0003) MISSED OFFSET (PADDING)

};

// ScriptStruct Killstreak.CombatEventInfoContainer
// 0x0010
struct FCombatEventInfoContainer
{
	TArray<struct FCombatEventInfo>                    CombatEventInfoArray;                                      // 0x0000(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct Killstreak.DisplayInfo
// 0x00A0
struct FDisplayInfo
{
	unsigned char                                      DisplayWidgetMap[0x50];                                    // 0x0000(0x0050) UNKNOWN PROPERTY: MapProperty
	bool                                               bUseWidgetPool;                                            // 0x0050(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_YMJI[0x7];                                     // 0x0051(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	TArray<struct FString>                             WidgetPoolName;                                            // 0x0058(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                UniqueId;                                                  // 0x0068(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_CDSY[0x4];                                     // 0x006C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class AKSPlayerState*                              CreatingPlayer;                                            // 0x0070(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class AActor*                                      AssociatedActor;                                           // 0x0078(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UObject*                                     AssociatedObject;                                          // 0x0080(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                                     DefaultLocation;                                           // 0x0088(0x000C) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              Lifespan;                                                  // 0x0094(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FTimerHandle                                TimerHandle;                                               // 0x0098(0x0008) (NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct Killstreak.AdvancedCombatEvent
// 0x00A8
struct FAdvancedCombatEvent
{
	TWeakObjectPtr<class APlayerState>                 DamageInstigator;                                          // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData, RepSkip, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TWeakObjectPtr<class APawn>                        DamageInstigatorPawn;                                      // 0x0008(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TWeakObjectPtr<class AActor>                       DamageCauser;                                              // 0x0010(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              Damage;                                                    // 0x0018(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_DZBQ[0x4];                                     // 0x001C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UClass*                                      DamageType;                                                // 0x0020(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UKSWeaponAsset*                              WeaponAsset;                                               // 0x0028(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                VictimId;                                                  // 0x0030(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_MREF[0x4];                                     // 0x0034(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FString                                     Victim;                                                    // 0x0038(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector_NetQuantize                         VictimLocation;                                            // 0x0048(0x000C) (BlueprintVisible, BlueprintReadOnly, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                VictimTeamNum;                                             // 0x0054(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                InstigatorId;                                              // 0x0058(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_VX4J[0x4];                                     // 0x005C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FString                                     Instigator;                                                // 0x0060(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	Killstreak_ECombatEventFriendlyFireType            FriendlyFireType;                                          // 0x0070(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_I5KF[0x3];                                     // 0x0071(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	float                                              GameTimeStamp;                                             // 0x0074(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector_NetQuantize                         HitLocation;                                               // 0x0078(0x000C) (BlueprintVisible, BlueprintReadOnly, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FName                                       HitBone;                                                   // 0x0084(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               Headshot;                                                  // 0x008C(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               DowningHit;                                                // 0x008D(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               FatalHit;                                                  // 0x008E(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bResisted;                                                 // 0x008F(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bReduced;                                                  // 0x0090(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bShielded;                                                 // 0x0091(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_GO19[0x16];                                    // 0x0092(0x0016) MISSED OFFSET (PADDING)

};

// ScriptStruct Killstreak.AdvancedCombatSummary
// 0x0020
struct FAdvancedCombatSummary
{
	class APawn*                                       DamageInstigatorPawn;                                      // 0x0000(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class AActor*                                      DamageCauser;                                              // 0x0008(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<struct FAdvancedCombatEvent>                CombatEvents;                                              // 0x0010(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct Killstreak.TelemetrySettings
// 0x0004
struct FTelemetrySettings
{
	bool                                               bPingEnabled;                                              // 0x0000(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bPacketLossEnabled;                                        // 0x0001(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bFPSEnabled;                                               // 0x0002(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bTelemetryFeatureActive;                                   // 0x0003(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct Killstreak.AnnouncementData
// 0x0038
struct FAnnouncementData
{
	Killstreak_EAnnouncementType                       Type;                                                      // 0x0000(0x0001) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_MIEM[0x7];                                     // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FText                                       MessageText;                                               // 0x0008(0x0018) (BlueprintVisible, NativeAccessSpecifierPublic)
	Killstreak_ETeamAlignment                          TeamAlignment;                                             // 0x0020(0x0001) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_7ZWO[0x3];                                     // 0x0021(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	int                                                TeamAlignmentNum;                                          // 0x0024(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                FriendlyTeamAlive;                                         // 0x0028(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                EnemyTeamAlive;                                            // 0x002C(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              Seconds;                                                   // 0x0030(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              DisplayDuration;                                           // 0x0034(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct Killstreak.KSGlobalShotInfo
// 0x0018
struct FKSGlobalShotInfo
{
	class APlayerState*                                FiringPlayer;                                              // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                                     FiringLocation;                                            // 0x0008(0x000C) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              AudibleRange;                                              // 0x0014(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct Killstreak.KSClientShotInfo
// 0x0018
struct FKSClientShotInfo
{
	struct FVector                                     FiringLocation;                                            // 0x0000(0x000C) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                UniqueId;                                                  // 0x000C(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              FadeTime;                                                  // 0x0010(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	Killstreak_EKSPingType                             PingType;                                                  // 0x0014(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_UZI2[0x3];                                     // 0x0015(0x0003) MISSED OFFSET (PADDING)

};

// ScriptStruct Killstreak.CongregatedShotgunHit
// 0x00B0
struct FCongregatedShotgunHit
{
	struct FHitResult                                  FirstHit;                                                  // 0x0000(0x0088) (BlueprintVisible, BlueprintReadOnly, IsPlainOldData, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPublic)
	class AActor*                                      HitActor;                                                  // 0x0088(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                TimesHit;                                                  // 0x0090(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              AccumulatedDamage;                                         // 0x0094(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                TimesHitHead;                                              // 0x0098(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               HeadshotRegistered;                                        // 0x009C(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_J13H[0x3];                                     // 0x009D(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FName                                       BackupBodyBone;                                            // 0x00A0(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FName                                       BackupHeadBone;                                            // 0x00A8(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct Killstreak.TeamStats
// 0x0020
struct FTeamStats
{
	int                                                TeamNum;                                                   // 0x0000(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_OCQB[0x4];                                     // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FString                                     teamName;                                                  // 0x0008(0x0010) (BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                teamScore;                                                 // 0x0018(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_6H11[0x4];                                     // 0x001C(0x0004) MISSED OFFSET (PADDING)

};

// ScriptStruct Killstreak.KSAmmoManager
// 0x0028 (0x0130 - 0x0108)
struct FKSAmmoManager : public FFastArraySerializer
{
	TWeakObjectPtr<class AActor>                       Owner;                                                     // 0x0108(0x0008) (ZeroConstructor, Transient, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	TArray<struct FKSAmmoManagerEntry>                 AmmoSupply;                                                // 0x0110(0x0010) (ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	TArray<struct FKSAmmoTransactions>                 UnverifiedAmmoTransactions;                                // 0x0120(0x0010) (ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)

};

// ScriptStruct Killstreak.KSFootprintInfo
// 0x0030
struct FKSFootprintInfo
{
	struct FTimerHandle                                FootprintTimerHandle;                                      // 0x0000(0x0008) (BlueprintVisible, BlueprintReadOnly, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TWeakObjectPtr<class UPoolableDecalComponent>      FootprintPoolableDecalComponent;                           // 0x0008(0x0008) (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                FootprintId;                                               // 0x0010(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	struct FVector                                     FootprintLocation;                                         // 0x0014(0x000C) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	struct FRotator                                    FootprintRotation;                                         // 0x0020(0x000C) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_R1PP[0x4];                                     // 0x002C(0x0004) MISSED OFFSET (PADDING)

};

// ScriptStruct Killstreak.PunishmentConfigEntry
// 0x0008
struct FPunishmentConfigEntry
{
	int                                                PunishmentLootTableId;                                     // 0x0000(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                PunishmentQuantity;                                        // 0x0004(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct Killstreak.EndMatchPunishConfigEntry
// 0x0018
struct FEndMatchPunishConfigEntry
{
	int                                                PointsRequired;                                            // 0x0000(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               PassThresholdOnDecrease;                                   // 0x0004(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_PN51[0x3];                                     // 0x0005(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	TArray<struct FPunishmentConfigEntry>              Punishments;                                               // 0x0008(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct Killstreak.PlayerPunishmentTracker
// 0x0028
struct FPlayerPunishmentTracker
{
	unsigned char                                      UnknownData_DURE[0x28];                                    // 0x0000(0x0028) MISSED OFFSET (PADDING)

};

// ScriptStruct Killstreak.KSQueueRow
// 0x00E0
struct FKSQueueRow
{
	struct FText                                       Name;                                                      // 0x0000(0x0018) (NativeAccessSpecifierPublic)
	struct FText                                       Description;                                               // 0x0018(0x0018) (NativeAccessSpecifierPublic)
	int                                                ID;                                                        // 0x0030(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                LevelLock;                                                 // 0x0034(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                MinPartySize;                                              // 0x0038(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                MaxPartySize;                                              // 0x003C(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                SortOrder;                                                 // 0x0040(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                MaxPlayerPerSide;                                          // 0x0044(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               IsCustom;                                                  // 0x0048(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_Q74Q[0x3];                                     // 0x0049(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FName                                       QueueType;                                                 // 0x004C(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_OY32[0x4];                                     // 0x0054(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FString                                     MapListKey;                                                // 0x0058(0x0010) (ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     SurrenderConfigKey;                                        // 0x0068(0x0010) (ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     RankedSeasonKey;                                           // 0x0078(0x0010) (ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     QueueThumbnail;                                            // 0x0088(0x0010) (ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<struct FString>                             QueueGroupKeys;                                            // 0x0098(0x0010) (ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               AllowAllUnownedJobs;                                       // 0x00A8(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_KEMG[0x7];                                     // 0x00A9(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	TArray<int>                                        AllowedUnownedJobIds;                                      // 0x00B0(0x0010) (ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<struct FString>                             AllowedPlatforms;                                          // 0x00C0(0x0010) (ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<struct FString>                             DisallowedPlatforms;                                       // 0x00D0(0x0010) (ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct Killstreak.KSMapListRow
// 0x0020
struct FKSMapListRow
{
	struct FString                                     MapListKey;                                                // 0x0000(0x0010) (ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<struct FString>                             MapKeys;                                                   // 0x0010(0x0010) (ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct Killstreak.KSBonusProgressionRow
// 0x0060
struct FKSBonusProgressionRow
{
	struct FString                                     BonusProgressionKey;                                       // 0x0000(0x0010) (ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TMap<struct FString, float>                        BonusProgressionList;                                      // 0x0010(0x0050) (NativeAccessSpecifierPublic)

};

// ScriptStruct Killstreak.KSSurrenderRow
// 0x0020
struct FKSSurrenderRow
{
	struct FString                                     SurrenderConfigKey;                                        // 0x0000(0x0010) (ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bDoesQueueAllowSurrender;                                  // 0x0010(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_KOZU[0x3];                                     // 0x0011(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	float                                              SecondsFromMatchStart;                                     // 0x0014(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              SecondsFromPlayerDisconnect;                               // 0x0018(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              SecondsFromSurrenderFailure;                               // 0x001C(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct Killstreak.KSQueueGroupRow
// 0x0020
struct FKSQueueGroupRow
{
	struct FString                                     GroupKey;                                                  // 0x0000(0x0010) (ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<struct FString>                             BonusProgressionKeys;                                      // 0x0010(0x0010) (ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct Killstreak.KSFavoredMatchBonusEntry
// 0x0008
struct FKSFavoredMatchBonusEntry
{
	float                                              MaxDifference;                                             // 0x0000(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                BonusValue;                                                // 0x0004(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct Killstreak.KSRankedProgressionRow
// 0x0058
struct FKSRankedProgressionRow
{
	struct FString                                     RankedProgressionKey;                                      // 0x0000(0x0010) (ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              WinBaseValue;                                              // 0x0010(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              LossBaseValue;                                             // 0x0014(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              MaxBonusClamp;                                             // 0x0018(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              MinBonusClamp;                                             // 0x001C(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              RankDifferenceMultiplier;                                  // 0x0020(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                RequiredPlacementMatches;                                  // 0x0024(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                PartyRankRange;                                            // 0x0028(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                InitialPlacementDifference;                                // 0x002C(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                MinPlacementPartyLevel;                                    // 0x0030(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                MaxPlacementPartyLevel;                                    // 0x0034(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<struct FKSFavoredMatchBonusEntry>           FavoredMatchBonusList;                                     // 0x0038(0x0010) (ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<float>                                      MMRZoneList;                                               // 0x0048(0x0010) (ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct Killstreak.KSLimitedTimeEventRow
// 0x0038
struct FKSLimitedTimeEventRow
{
	struct FString                                     LimitedTimeEventKey;                                       // 0x0000(0x0010) (ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<struct FString>                             BonusProgressionKeys;                                      // 0x0010(0x0010) (ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<struct FString>                             AllowedQueueGroups;                                        // 0x0020(0x0010) (ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                RequiredItemId;                                            // 0x0030(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_IYKO[0x4];                                     // 0x0034(0x0004) MISSED OFFSET (PADDING)

};

// ScriptStruct Killstreak.KSRankedSeasonRow
// 0x0038
struct FKSRankedSeasonRow
{
	struct FString                                     RankedSeasonKey;                                           // 0x0000(0x0010) (ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     RankedProgressionKey;                                      // 0x0010(0x0010) (ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               UsesPlacementMatches;                                      // 0x0020(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_E5E4[0x3];                                     // 0x0021(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	int                                                PlacementMatchItemId;                                      // 0x0024(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                PlacementMatchLootId;                                      // 0x0028(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                InitXpLootId;                                              // 0x002C(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                XpTableId;                                                 // 0x0030(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_VKY5[0x4];                                     // 0x0034(0x0004) MISSED OFFSET (PADDING)

};

// ScriptStruct Killstreak.KSQueueSectionSort
// 0x000C
struct FKSQueueSectionSort
{
	struct FName                                       QueueType;                                                 // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                SortOrder;                                                 // 0x0008(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct Killstreak.KSQueuePlatformFilter
// 0x0038
struct FKSQueuePlatformFilter
{
	struct FString                                     Platform;                                                  // 0x0000(0x0010) (ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                QueueMaxAllowedPartySize;                                  // 0x0010(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_0OM7[0x4];                                     // 0x0014(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	TArray<int>                                        QueueIdWhitelist;                                          // 0x0018(0x0010) (ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<int>                                        QueueIdBlacklist;                                          // 0x0028(0x0010) (ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct Killstreak.KSWayPointLink
// 0x0020
struct FKSWayPointLink
{
	TArray<class AKSWayPoint*>                         NextWayPoints;                                             // 0x0000(0x0010) (Edit, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<class AKSWayPoint*>                         PrevWayPoints;                                             // 0x0010(0x0010) (ZeroConstructor, Transient, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct Killstreak.KSCompressedHit
// 0x003C
struct FKSCompressedHit
{
	unsigned char                                      bBlockingHit : 1;                                          // 0x0000(0x0001) BIT_FIELD (NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_Y08K[0x3];                                     // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	float                                              Time;                                                      // 0x0004(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector_NetQuantizeNormal                   Normal;                                                    // 0x0008(0x000C) (NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector_NetQuantize                         TraceStart;                                                // 0x0014(0x000C) (NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector_NetQuantize                         TraceEnd;                                                  // 0x0020(0x000C) (NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TWeakObjectPtr<class UPrimitiveComponent>          Component;                                                 // 0x002C(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FName                                       BoneName;                                                  // 0x0034(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct Killstreak.HitValidationRecoveryInfo
// 0x0060
struct FHitValidationRecoveryInfo
{
	TArray<struct FKSCompressedHit>                    Hits;                                                      // 0x0000(0x0010) (ZeroConstructor, ContainsInstancedReference, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FAimData                                    AimData;                                                   // 0x0010(0x0050) (NativeAccessSpecifierPublic)

};

// ScriptStruct Killstreak.HitReaction
// 0x0014
struct FHitReaction
{
	struct FVector                                     WorldHitDirection;                                         // 0x0000(0x000C) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              Damage;                                                    // 0x000C(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              HitTime;                                                   // 0x0010(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct Killstreak.RadialMenuItemEventItem
// 0x0010
struct FRadialMenuItemEventItem : public FReplicatedLogItem
{
	struct FRadialMenuItemEventInfo                    RadialMenuItemEvent;                                       // 0x0000(0x0010) (NoDestructor, Protected, NativeAccessSpecifierProtected)

};

// ScriptStruct Killstreak.RadialMenuItemEventList
// 0x0018 (0x0088 - 0x0070)
struct FRadialMenuItemEventList : public FSizedArraySerializer
{
	TArray<struct FRadialMenuItemEventItem>            Items;                                                     // 0x0070(0x0010) (ZeroConstructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_U97D[0x8];                                     // 0x0080(0x0008) MISSED OFFSET (PADDING)

};

// ScriptStruct Killstreak.PreviewActorPropSkinInfo
// 0x0048
struct FPreviewActorPropSkinInfo
{
	class UKSItem*                                     Prop;                                                      // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bIsSet;                                                    // 0x0008(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_653D[0x7];                                     // 0x0009(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UKSItem*                                     LastSetSkin;                                               // 0x0010(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UKSItem*                                     ActiveSkin;                                                // 0x0018(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_12R1[0x10];                                    // 0x0020(0x0010) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UKSItem*                                     PendingSkin;                                               // 0x0030(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_PLAQ[0x10];                                    // 0x0038(0x0010) MISSED OFFSET (PADDING)

};

// ScriptStruct Killstreak.KSCinematicData
// 0x0038
struct FKSCinematicData
{
	struct FText                                       CinematicDisplayName;                                      // 0x0000(0x0018) (Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, Protected, NativeAccessSpecifierProtected)
	struct FString                                     CinematicSubLevelName;                                     // 0x0018(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	Killstreak_EKSLevelStreamingMethod                 CinematicLevelStreamingMethod;                             // 0x0028(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_BTDX[0x3];                                     // 0x0029(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FName                                       DefaultCameraTag;                                          // 0x002C(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_NIYO[0x4];                                     // 0x0034(0x0004) MISSED OFFSET (PADDING)

};

// ScriptStruct Killstreak.revive
// 0x000C
struct Frevive
{
	struct FVector                                     Location;                                                  // 0x0000(0x000C) (Edit, BlueprintVisible, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct Killstreak.TeamSideRecord
// 0x000C
struct FTeamSideRecord
{
	int                                                team_id;                                                   // 0x0000(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                side_id;                                                   // 0x0004(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                team_role;                                                 // 0x0008(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct Killstreak.MirrorMatchupRecord
// 0x0014
struct FMirrorMatchupRecord
{
	int                                                hz_player_id;                                              // 0x0000(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                ue_player_id;                                              // 0x0004(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                team_id;                                                   // 0x0008(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                class_id;                                                  // 0x000C(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                has_mirror_match;                                          // 0x0010(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct Killstreak.PlayerStartingCashRecord
// 0x0008
struct FPlayerStartingCashRecord
{
	int                                                ue_player_id;                                              // 0x0000(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                cash;                                                      // 0x0004(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct Killstreak.PurchasedItemEventRecord
// 0x000C
struct FPurchasedItemEventRecord
{
	int                                                ue_player_id;                                              // 0x0000(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                item_id;                                                   // 0x0004(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                cost;                                                      // 0x0008(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct Killstreak.CashCollectionEventRecord
// 0x0028
struct FCashCollectionEventRecord
{
	int                                                ue_player_id;                                              // 0x0000(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FLocationRecord                             Location;                                                  // 0x0004(0x000C) (NoDestructor, NativeAccessSpecifierPublic)
	struct FString                                     Timestamp;                                                 // 0x0010(0x0010) (ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                Amount;                                                    // 0x0020(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_ZSC1[0x4];                                     // 0x0024(0x0004) MISSED OFFSET (PADDING)

};

// ScriptStruct Killstreak.DownEventRecord
// 0x0038
struct FDownEventRecord
{
	int                                                instigator_ue_player_id;                                   // 0x0000(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FLocationRecord                             instigator_location;                                       // 0x0004(0x000C) (NoDestructor, NativeAccessSpecifierPublic)
	int                                                victim_ue_player_id;                                       // 0x0010(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FLocationRecord                             victim_location;                                           // 0x0014(0x000C) (NoDestructor, NativeAccessSpecifierPublic)
	int                                                weapon_id;                                                 // 0x0020(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_PXJH[0x4];                                     // 0x0024(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FString                                     Timestamp;                                                 // 0x0028(0x0010) (ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct Killstreak.ExecuteEventRecord
// 0x0038
struct FExecuteEventRecord
{
	int                                                instigator_ue_player_id;                                   // 0x0000(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FLocationRecord                             instigator_location;                                       // 0x0004(0x000C) (NoDestructor, NativeAccessSpecifierPublic)
	int                                                victim_ue_player_id;                                       // 0x0010(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FLocationRecord                             victim_location;                                           // 0x0014(0x000C) (NoDestructor, NativeAccessSpecifierPublic)
	int                                                weapon_id;                                                 // 0x0020(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_PMSM[0x4];                                     // 0x0024(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FString                                     Timestamp;                                                 // 0x0028(0x0010) (ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct Killstreak.AssistEventRecord
// 0x0028
struct FAssistEventRecord
{
	int                                                assistor_ue_player_id;                                     // 0x0000(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                victim_ue_player_id;                                       // 0x0004(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FLocationRecord                             victim_location;                                           // 0x0008(0x000C) (NoDestructor, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_F4CH[0x4];                                     // 0x0014(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FString                                     Timestamp;                                                 // 0x0018(0x0010) (ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct Killstreak.ReviveEventRecord
// 0x0030
struct FReviveEventRecord
{
	int                                                reviver_ue_player_id;                                      // 0x0000(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FLocationRecord                             reviver_location;                                          // 0x0004(0x000C) (NoDestructor, NativeAccessSpecifierPublic)
	int                                                revivee_ue_player_id;                                      // 0x0010(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FLocationRecord                             revivee_location;                                          // 0x0014(0x000C) (NoDestructor, NativeAccessSpecifierPublic)
	struct FString                                     Timestamp;                                                 // 0x0020(0x0010) (ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct Killstreak.WeaponUseSummaryRecord
// 0x0034
struct FWeaponUseSummaryRecord
{
	int                                                ue_player_id;                                              // 0x0000(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                weapon_id;                                                 // 0x0004(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                shots_fired;                                               // 0x0008(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                shots_hit;                                                 // 0x000C(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                head_shots;                                                // 0x0010(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                accumulated_damage;                                        // 0x0014(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                accumulated_self_damage;                                   // 0x0018(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                accumulated_friendly_damage;                               // 0x001C(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                accumulated_reverse_friendly_damage;                       // 0x0020(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              AccumulatingDamage;                                        // 0x0024(0x0004) (ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              AccumulatingSelfDamage;                                    // 0x0028(0x0004) (ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              AccumulatingFriendlyDamage;                                // 0x002C(0x0004) (ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              AccumulatingReverseFriendlyDamage;                         // 0x0030(0x0004) (ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct Killstreak.AbilityUseEventRecord
// 0x0050
struct FAbilityUseEventRecord
{
	int                                                ue_player_id;                                              // 0x0000(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FLocationRecord                             Location;                                                  // 0x0004(0x000C) (NoDestructor, NativeAccessSpecifierPublic)
	int                                                ability_id;                                                // 0x0010(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_0W9X[0x4];                                     // 0x0014(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FString                                     Timestamp;                                                 // 0x0018(0x0010) (ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                accumulated_damage;                                        // 0x0028(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                accumulated_self_damage;                                   // 0x002C(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                accumulated_friendly_damage;                               // 0x0030(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                accumulated_reverse_friendly_damage;                       // 0x0034(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              AccumulatingDamage;                                        // 0x0038(0x0004) (ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              AccumulatingSelfDamage;                                    // 0x003C(0x0004) (ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              AccumulatingFriendlyDamage;                                // 0x0040(0x0004) (ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              AccumulatingReverseFriendlyDamage;                         // 0x0044(0x0004) (ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              FireGameTime;                                              // 0x0048(0x0004) (ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_2XIW[0x4];                                     // 0x004C(0x0004) MISSED OFFSET (PADDING)

};

// ScriptStruct Killstreak.RotationRecord
// 0x0008
struct FRotationRecord
{
	float                                              Yaw;                                                       // 0x0000(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              Pitch;                                                     // 0x0004(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct Killstreak.RadialMenuItemUseEventRecord
// 0x0070
struct FRadialMenuItemUseEventRecord
{
	int                                                hz_player_id;                                              // 0x0000(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                ue_player_id;                                              // 0x0004(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                round_id;                                                  // 0x0008(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_0CYO[0x4];                                     // 0x000C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FString                                     cosmetic_type;                                             // 0x0010(0x0010) (ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                item_id;                                                   // 0x0020(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_9QV7[0x4];                                     // 0x0024(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FString                                     item_name;                                                 // 0x0028(0x0010) (ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FLocationRecord                             Location;                                                  // 0x0038(0x000C) (NoDestructor, NativeAccessSpecifierPublic)
	struct FRotationRecord                             Rotation;                                                  // 0x0044(0x0008) (NoDestructor, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_X5XE[0x4];                                     // 0x004C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FString                                     game_phase;                                                // 0x0050(0x0010) (ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     Timestamp;                                                 // 0x0060(0x0010) (ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct Killstreak.CommunicationUseEventRecord
// 0x0070
struct FCommunicationUseEventRecord
{
	int                                                hz_player_id;                                              // 0x0000(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                ue_player_id;                                              // 0x0004(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                round_id;                                                  // 0x0008(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_OC11[0x4];                                     // 0x000C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FString                                     cosmetic_type;                                             // 0x0010(0x0010) (ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                item_id;                                                   // 0x0020(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_LHV3[0x4];                                     // 0x0024(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FString                                     item_name;                                                 // 0x0028(0x0010) (ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FLocationRecord                             Location;                                                  // 0x0038(0x000C) (NoDestructor, NativeAccessSpecifierPublic)
	struct FRotationRecord                             Rotation;                                                  // 0x0044(0x0008) (NoDestructor, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_8D9X[0x4];                                     // 0x004C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FString                                     game_phase;                                                // 0x0050(0x0010) (ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     Timestamp;                                                 // 0x0060(0x0010) (ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct Killstreak.GadgetUseEventRecord
// 0x0050
struct FGadgetUseEventRecord
{
	int                                                ue_player_id;                                              // 0x0000(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FLocationRecord                             Location;                                                  // 0x0004(0x000C) (NoDestructor, NativeAccessSpecifierPublic)
	int                                                gadget_id;                                                 // 0x0010(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_XM3P[0x4];                                     // 0x0014(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FString                                     Timestamp;                                                 // 0x0018(0x0010) (ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                accumulated_damage;                                        // 0x0028(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                accumulated_self_damage;                                   // 0x002C(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                accumulated_friendly_damage;                               // 0x0030(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                accumulated_reverse_friendly_damage;                       // 0x0034(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              AccumulatingDamage;                                        // 0x0038(0x0004) (ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              AccumulatingSelfDamage;                                    // 0x003C(0x0004) (ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              AccumulatingFriendlyDamage;                                // 0x0040(0x0004) (ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              AccumulatingReverseFriendlyDamage;                         // 0x0044(0x0004) (ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              FireGameTime;                                              // 0x0048(0x0004) (ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_9S0T[0x4];                                     // 0x004C(0x0004) MISSED OFFSET (PADDING)

};

// ScriptStruct Killstreak.EliminationStreakEventRecord
// 0x0008
struct FEliminationStreakEventRecord
{
	int                                                ue_player_id;                                              // 0x0000(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                Count;                                                     // 0x0004(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct Killstreak.MultipleKillEventRecord
// 0x0008
struct FMultipleKillEventRecord
{
	int                                                ue_player_id;                                              // 0x0000(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                Count;                                                     // 0x0004(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct Killstreak.BotStartingDifficultyRecord
// 0x0008
struct FBotStartingDifficultyRecord
{
	int                                                ue_player_id;                                              // 0x0000(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                difficulty_index;                                          // 0x0004(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct Killstreak.BotDifficultyChangeEventRecord
// 0x0018
struct FBotDifficultyChangeEventRecord
{
	int                                                ue_player_id;                                              // 0x0000(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                difficulty_index;                                          // 0x0004(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     Timestamp;                                                 // 0x0008(0x0010) (ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct Killstreak.ClientStatisticsRecord
// 0x0014
struct FClientStatisticsRecord
{
	float                                              smoothed;                                                  // 0x0000(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              Maximum;                                                   // 0x0004(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              Minimum;                                                   // 0x0008(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              average;                                                   // 0x000C(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                sample_count;                                              // 0x0010(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct Killstreak.OrientationEventRecord
// 0x0088
struct FOrientationEventRecord
{
	int                                                ue_player_id;                                              // 0x0000(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FLocationRecord                             Location;                                                  // 0x0004(0x000C) (NoDestructor, NativeAccessSpecifierPublic)
	struct FRotationRecord                             Rotation;                                                  // 0x0010(0x0008) (NoDestructor, NativeAccessSpecifierPublic)
	int                                                movement_state;                                            // 0x0018(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_AULF[0x4];                                     // 0x001C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FString                                     Timestamp;                                                 // 0x0020(0x0010) (ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                ping_ms;                                                   // 0x0030(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_P4TM[0x4];                                     // 0x0034(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	TMap<struct FString, struct FClientStatisticsRecord> client_statistics;                                         // 0x0038(0x0050) (NativeAccessSpecifierPublic)

};

// ScriptStruct Killstreak.PollEndEventRecord
// 0x0060
struct FPollEndEventRecord
{
	int                                                round_id;                                                  // 0x0000(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               poll_passed;                                               // 0x0004(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_1K3S[0x3];                                     // 0x0005(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FString                                     poll_name;                                                 // 0x0008(0x0010) (ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                team_id;                                                   // 0x0018(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_5FKD[0x4];                                     // 0x001C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	TArray<int>                                        hz_player_ids_for;                                         // 0x0020(0x0010) (ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<int>                                        hz_player_ids_against;                                     // 0x0030(0x0010) (ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     game_phase;                                                // 0x0040(0x0010) (ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     Timestamp;                                                 // 0x0050(0x0010) (ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct Killstreak.RoundClientInputTypeUse
// 0x000C
struct FRoundClientInputTypeUse
{
	int                                                hz_player_id;                                              // 0x0000(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int16_t                                            input_type_kbm;                                            // 0x0004(0x0002) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int16_t                                            input_type_gpad;                                           // 0x0006(0x0002) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int16_t                                            input_type_touch;                                          // 0x0008(0x0002) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int16_t                                            input_type_other;                                          // 0x000A(0x0002) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct Killstreak.RoundEventRecord
// 0x0198
struct FRoundEventRecord
{
	int                                                round_id;                                                  // 0x0000(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_PTQF[0x4];                                     // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FString                                     round_start_time;                                          // 0x0008(0x0010) (ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                Duration;                                                  // 0x0018(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_DJ50[0x4];                                     // 0x001C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	TArray<struct FTeamSideRecord>                     team_sides;                                                // 0x0020(0x0010) (ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                winning_team;                                              // 0x0030(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_CNK4[0x4];                                     // 0x0034(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FString                                     win_condition;                                             // 0x0038(0x0010) (ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<struct FMirrorMatchupRecord>                mirror_matchup_records;                                    // 0x0048(0x0010) (ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<struct FPlayerStartingCashRecord>           round_starting_cash;                                       // 0x0058(0x0010) (ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<struct FPurchasedItemEventRecord>           purchased_item_events;                                     // 0x0068(0x0010) (ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<struct FPurchasedItemEventRecord>           refunded_item_events;                                      // 0x0078(0x0010) (ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<struct FCashCollectionEventRecord>          cash_collection_events;                                    // 0x0088(0x0010) (ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<struct FDownEventRecord>                    down_events;                                               // 0x0098(0x0010) (ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<struct FExecuteEventRecord>                 execute_events;                                            // 0x00A8(0x0010) (ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<struct FAssistEventRecord>                  assist_events;                                             // 0x00B8(0x0010) (ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<struct FReviveEventRecord>                  revive_events;                                             // 0x00C8(0x0010) (ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<struct FWeaponUseSummaryRecord>             weapon_use_summaries;                                      // 0x00D8(0x0010) (ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<struct FAbilityUseEventRecord>              ability_use_events;                                        // 0x00E8(0x0010) (ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<struct FRadialMenuItemUseEventRecord>       radial_menu_item_use_events;                               // 0x00F8(0x0010) (ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<struct FCommunicationUseEventRecord>        communication_use_events;                                  // 0x0108(0x0010) (ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<struct FGadgetUseEventRecord>               gadget_use_events;                                         // 0x0118(0x0010) (ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<struct FEliminationStreakEventRecord>       elimination_streak_events;                                 // 0x0128(0x0010) (ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<struct FMultipleKillEventRecord>            multiple_kill_events;                                      // 0x0138(0x0010) (ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<struct FBotStartingDifficultyRecord>        round_starting_bot_difficulties;                           // 0x0148(0x0010) (ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<struct FBotDifficultyChangeEventRecord>     bot_difficulty_change_events;                              // 0x0158(0x0010) (ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<struct FOrientationEventRecord>             orientation_events;                                        // 0x0168(0x0010) (ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<struct FPollEndEventRecord>                 poll_end_events;                                           // 0x0178(0x0010) (ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<struct FRoundClientInputTypeUse>            client_input_use;                                          // 0x0188(0x0010) (ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct Killstreak.AccoladeMultiDownTracker
// 0x0070
struct FAccoladeMultiDownTracker
{
	int                                                DownReqAmount;                                             // 0x0000(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_0VK8[0x4];                                     // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FAccoladeDisplayInfo                        AccoladeReward;                                            // 0x0008(0x0068) (Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, NativeAccessSpecifierPublic)

};

// ScriptStruct Killstreak.assist
// 0x000C
struct Fassist
{
	struct FVector                                     Location;                                                  // 0x0000(0x000C) (Edit, BlueprintVisible, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct Killstreak.KSWidgetInfoParams
// 0x0048
struct FKSWidgetInfoParams
{
	unsigned char                                      Widget[0x28];                                              // 0x0000(0x0028) UNKNOWN PROPERTY: SoftClassProperty
	bool                                               bPreloadWidget;                                            // 0x0028(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_8NH7[0x7];                                     // 0x0029(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FString                                     WidgetParentTarget;                                        // 0x0030(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class AKSWidgetInfoActor*                          InfoActor;                                                 // 0x0040(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct Killstreak.ShopSubItem
// 0x0010
struct FShopSubItem
{
	class UKSItem*                                     Item;                                                      // 0x0000(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                Price;                                                     // 0x0008(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bPurchased;                                                // 0x000C(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_8WX5[0x3];                                     // 0x000D(0x0003) MISSED OFFSET (PADDING)

};

// ScriptStruct Killstreak.ShopItem
// 0x0064 (0x0070 - 0x000C)
struct FShopItem : public FFastArraySerializerItem
{
	Killstreak_EShopItemType                           Type;                                                      // 0x000C(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_HBDU[0x3];                                     // 0x000D(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	TArray<struct FShopSubItem>                        CurrentSubItemList;                                        // 0x0010(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<struct FShopSubItem>                        AppliedSubItemList;                                        // 0x0020(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bResetable;                                                // 0x0030(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_QVLV[0x3];                                     // 0x0031(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	int                                                NextSubItemIndex;                                          // 0x0034(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                CurrentSubItemIndex;                                       // 0x0038(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                AppliedSubItemIndex;                                       // 0x003C(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bIsActive;                                                 // 0x0040(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bIsAppliedActive;                                          // 0x0041(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bStartInactive;                                            // 0x0042(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bOneTimePurchase;                                          // 0x0043(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bResetOnExhausted;                                         // 0x0044(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bAuthorityIsActive;                                        // 0x0045(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_4UTX[0x2];                                     // 0x0046(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	int                                                AuthorityPurchaseIndex;                                    // 0x0048(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                AuthorityLatestTransactionId;                              // 0x004C(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bSimulatedIsActive;                                        // 0x0050(0x0001) (ZeroConstructor, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_9DEG[0x3];                                     // 0x0051(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	int                                                SimulatedPurchaseIndex;                                    // 0x0054(0x0004) (ZeroConstructor, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                SimulatedLatestTransactionId;                              // 0x0058(0x0004) (ZeroConstructor, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_ES82[0x14];                                    // 0x005C(0x0014) MISSED OFFSET (PADDING)

};

// ScriptStruct Killstreak.ShopManifest
// 0x0018 (0x0120 - 0x0108)
struct FShopManifest : public FFastArraySerializer
{
	TArray<struct FShopItem>                           Manifest;                                                  // 0x0108(0x0010) (ZeroConstructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class AKSPlayerShop*                               Owner;                                                     // 0x0118(0x0008) (ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)

};

// ScriptStruct Killstreak.ShopOptions
// 0x0006
struct FShopOptions
{
	bool                                               bPrimary;                                                  // 0x0000(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bSecondary;                                                // 0x0001(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bMelee;                                                    // 0x0002(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bGadgets;                                                  // 0x0003(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bPerks;                                                    // 0x0004(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bGambits;                                                  // 0x0005(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct Killstreak.PrimaryOffering
// 0x0010
struct FPrimaryOffering
{
	class UKSItem*                                     Offering;                                                  // 0x0000(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               Mastered;                                                  // 0x0008(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               Favorited;                                                 // 0x0009(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               Default;                                                   // 0x000A(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_J63Q[0x5];                                     // 0x000B(0x0005) MISSED OFFSET (PADDING)

};

// ScriptStruct Killstreak.KSCashChangeList
// 0x0000 (0x0090 - 0x0090)
struct FKSCashChangeList : public FKSScoreChangeList
{

};

// ScriptStruct Killstreak.ProjectileWidgetInfo
// 0x0030
struct FProjectileWidgetInfo
{
	unsigned char                                      UnknownData_5VQD[0x30];                                    // 0x0000(0x0030) MISSED OFFSET (PADDING)

};

// ScriptStruct Killstreak.WeaponLeadingInfo
// 0x0010
struct FWeaponLeadingInfo
{
	float                                              fMaxWeaponLeading;                                         // 0x0000(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              fWeaponLeadingSmoothingFactor;                             // 0x0004(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              fWeaponLeadingInterpSpeed;                                 // 0x0008(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              fWeaponLeadingRecoverInterpSpeed;                          // 0x000C(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct Killstreak.KSProjectileWeaponInfo
// 0x0058
struct FKSProjectileWeaponInfo
{
	struct FName                                       Key;                                                       // 0x0000(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      SoftProjectileClass[0x28];                                 // 0x0008(0x0028) UNKNOWN PROPERTY: SoftClassProperty
	unsigned char                                      SoftWeaponAsset[0x28];                                     // 0x0030(0x0028) UNKNOWN PROPERTY: SoftObjectProperty

};

// ScriptStruct Killstreak.ReactiveWrapMilestoneDisplay
// 0x0030
struct FReactiveWrapMilestoneDisplay
{
	struct FText                                       PreviewMilestoneDescription;                               // 0x0000(0x0018) (Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, NativeAccessSpecifierPublic)
	float                                              TargetProgressionValueA;                                   // 0x0018(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              TransitionSpeedA;                                          // 0x001C(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              TargetProgressionValueB;                                   // 0x0020(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              TransitionSpeedB;                                          // 0x0024(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              TargetProgressionValueC;                                   // 0x0028(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              TransitionSpeedC;                                          // 0x002C(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct Killstreak.advcombat
// 0x000C
struct Fadvcombat
{
	struct FVector                                     Location;                                                  // 0x0000(0x000C) (Edit, BlueprintVisible, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct Killstreak.CharacterArray
// 0x0050
struct FCharacterArray
{
	TArray<struct FVector>                             Positions;                                                 // 0x0000(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<struct FCombatEvent>                        CombatEvents;                                              // 0x0010(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<struct Frevive>                             Revives;                                                   // 0x0020(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<struct Fassist>                             Assists;                                                   // 0x0030(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<struct Fadvcombat>                          AdvCombats;                                                // 0x0040(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct Killstreak.KSRadialMenuItemInterruptRules
// 0x0004
struct FKSRadialMenuItemInterruptRules
{
	unsigned char                                      UnknownData_CL0T : 2;                                      // 0x0000(0x0001) BIT_FIELD (PADDING)
	unsigned char                                      Walking : 1;                                               // 0x0000(0x0001) BIT_FIELD (Edit, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      Sprinting : 1;                                             // 0x0000(0x0001) BIT_FIELD (Edit, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      Crouching : 1;                                             // 0x0000(0x0001) BIT_FIELD (Edit, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      Downed : 1;                                                // 0x0000(0x0001) BIT_FIELD (Edit, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      Dead : 1;                                                  // 0x0000(0x0001) BIT_FIELD (Edit, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      Interacting : 1;                                           // 0x0000(0x0001) BIT_FIELD (Edit, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      Zipline : 1;                                               // 0x0001(0x0001) BIT_FIELD (Edit, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      SkyDiving : 1;                                             // 0x0001(0x0001) BIT_FIELD (Edit, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      DodgeRolling : 1;                                          // 0x0001(0x0001) BIT_FIELD (Edit, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      Falling : 1;                                               // 0x0001(0x0001) BIT_FIELD (Edit, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      NonRadialMenuItemEquipment : 1;                            // 0x0001(0x0001) BIT_FIELD (Edit, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      RadialMenuItemActivated : 1;                               // 0x0001(0x0001) BIT_FIELD (Edit, EditConst, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      Cooldown : 1;                                              // 0x0001(0x0001) BIT_FIELD (Edit, EditConst, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      DistFromOrigin : 1;                                        // 0x0001(0x0001) BIT_FIELD (Edit, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      Throttled : 1;                                             // 0x0002(0x0001) BIT_FIELD (Edit, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_ZI0C[0x1];                                     // 0x0003(0x0001) MISSED OFFSET (PADDING)

};

// ScriptStruct Killstreak.ObjectiveState
// 0x0014
struct FObjectiveState
{
	struct FName                                       CurrentState;                                              // 0x0000(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FName                                       PreviousState;                                             // 0x0008(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                Owner;                                                     // 0x0010(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct Killstreak.KSControlPointSettings
// 0x0030
struct FKSControlPointSettings
{
	float                                              BaseControlPointCaptureTime;                               // 0x0000(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              BaseControlPointRecaptureTime;                             // 0x0004(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              CaptureRatePercentIncreasePerPlayer;                       // 0x0008(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              FullCaptureDecayTime;                                      // 0x000C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              ScoreUpdatePeriod;                                         // 0x0010(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              SuddenDeathScoreUpdatePeriod;                              // 0x0014(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bPlayerMustBePresentToKeep;                                // 0x0018(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_CT62[0x7];                                     // 0x0019(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	TArray<int>                                        AcceptedTeamNums;                                          // 0x0020(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct Killstreak.KSRandomDropEntry
// 0x0018
struct FKSRandomDropEntry
{
	class UDataTable*                                  RandomDropTable;                                           // 0x0000(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<int>                                        SidesToDropItems;                                          // 0x0008(0x0010) (Edit, ZeroConstructor, DisableEditOnInstance, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct Killstreak.WeaponTypeToAntiCheatId
// 0x000C
struct FWeaponTypeToAntiCheatId
{
	struct FGameplayTag                                WeaponType;                                                // 0x0000(0x0008) (Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint16_t                                           AntiCheatId;                                               // 0x0008(0x0002) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_X2Z8[0x2];                                     // 0x000A(0x0002) MISSED OFFSET (PADDING)

};

// ScriptStruct Killstreak.KSExperimentConfig
// 0x0018
struct FKSExperimentConfig
{
	struct FString                                     Name;                                                      // 0x0000(0x0010) (ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               Value;                                                     // 0x0010(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_N0Z6[0x7];                                     // 0x0011(0x0007) MISSED OFFSET (PADDING)

};

// ScriptStruct Killstreak.KSSpawnSelectorTierRule
// 0x0010
struct FKSSpawnSelectorTierRule
{
	class UKSSpawnRule*                                SpawnRule;                                                 // 0x0000(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              Multiplier;                                                // 0x0008(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_RAJ0[0x4];                                     // 0x000C(0x0004) MISSED OFFSET (PADDING)

};

// ScriptStruct Killstreak.KSSpawnSelectorTier
// 0x0020
struct FKSSpawnSelectorTier
{
	struct FName                                       Name;                                                      // 0x0000(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              Tolerance;                                                 // 0x0008(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              MinScore;                                                  // 0x000C(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<struct FKSSpawnSelectorTierRule>            SpawnSelectorTierRules;                                    // 0x0010(0x0010) (BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct Killstreak.KSSpawnSelectorTreeNode
// 0x0028
struct FKSSpawnSelectorTreeNode
{
	struct FKSSpawnSelectorTier                        SelectorTier;                                              // 0x0000(0x0020) (BlueprintVisible, NativeAccessSpecifierPublic)
	class UKSSpawnSelectorTierBranch*                  SelectorTierBranch;                                        // 0x0020(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct Killstreak.KSRiderSeatPair
// 0x0010
struct FKSRiderSeatPair
{
	class AKSCharacter*                                Rider;                                                     // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UKSVehicleSeatComponent*                     Seat;                                                      // 0x0008(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct Killstreak.KSVehicleDestructionStage
// 0x0060
struct FKSVehicleDestructionStage
{
	class UParticleSystem*                             StageVFX;                                                  // 0x0000(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UAkAudioEvent*                               StageSFX;                                                  // 0x0008(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UAkAudioEvent*                               StageEcho;                                                 // 0x0010(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_F71D[0x8];                                     // 0x0018(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FTransform                                  StageEffectTransform;                                      // 0x0020(0x0030) (Edit, BlueprintVisible, BlueprintReadOnly, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	float                                              StageDeteriorationRate;                                    // 0x0050(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_DYAZ[0xC];                                     // 0x0054(0x000C) MISSED OFFSET (PADDING)

};

// ScriptStruct Killstreak.PendingCosmeticInfo
// 0x0020
struct FPendingCosmeticInfo
{
	unsigned char                                      Slot;                                                      // 0x0000(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_M695[0x7];                                     // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UKSWeaponAttachment*                         DesiredAttachment;                                         // 0x0008(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FKSEquipmentId                              AttachmentId;                                              // 0x0010(0x0004) (HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_IQS1[0x4];                                     // 0x0014(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UKSWeaponAttachmentCosmeticInst*             CosmeticInstance;                                          // 0x0018(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct Killstreak.PriorityVoiceLine
// 0x0018
struct FPriorityVoiceLine
{
	Killstreak_EKSVoiceOverState                       State;                                                     // 0x0000(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	Killstreak_EKSVoiceOverPriority                    Priority;                                                  // 0x0001(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_JTTD[0x6];                                     // 0x0002(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	unsigned char                                      Source[0x10];                                              // 0x0002(0x0010) UNKNOWN PROPERTY: InterfaceProperty

};

// ScriptStruct Killstreak.KSFreezeFramePawnProp
// 0x0008 (0x0088 - 0x0080)
struct FKSFreezeFramePawnProp : public FKSFreezeFramePropBase
{
	class UStreamableRenderAsset*                      Mesh;                                                      // 0x0080(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct Killstreak.PlayerRecord
// 0x0100
struct FPlayerRecord
{
	int                                                ue_player_id;                                              // 0x0000(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                hz_player_id;                                              // 0x0004(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     player_name;                                               // 0x0008(0x0010) (ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                team_id;                                                   // 0x0018(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                class_id;                                                  // 0x001C(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                player_type;                                               // 0x0020(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                portal_id;                                                 // 0x0024(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                input_type;                                                // 0x0028(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                platform_type;                                             // 0x002C(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                ranking_id;                                                // 0x0030(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              ranking;                                                   // 0x0034(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              ranking_variance;                                          // 0x0038(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                task_force_id;                                             // 0x003C(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FGuid                                       group_id;                                                  // 0x0040(0x0010) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                party_id;                                                  // 0x0050(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                party_size;                                                // 0x0054(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                skin_id;                                                   // 0x0058(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                account_level;                                             // 0x005C(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                ranked_level;                                              // 0x0060(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                class_level;                                               // 0x0064(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              time_played;                                               // 0x0068(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              time_alive;                                                // 0x006C(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                kills_single;                                              // 0x0070(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                kills_double;                                              // 0x0074(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                kills_triple;                                              // 0x0078(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                kills_quadra;                                              // 0x007C(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                kills_penta;                                               // 0x0080(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                deaths;                                                    // 0x0084(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                executes;                                                  // 0x0088(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                Assists;                                                   // 0x008C(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                downs;                                                     // 0x0090(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                eliminations;                                              // 0x0094(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                Revives;                                                   // 0x0098(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                shots_fired;                                               // 0x009C(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                shots_hit;                                                 // 0x00A0(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                head_shots;                                                // 0x00A4(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                accumulated_damage;                                        // 0x00A8(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                accumulated_self_damage;                                   // 0x00AC(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                accumulated_friendly_damage;                               // 0x00B0(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                accumulated_reverse_friendly_damage;                       // 0x00B4(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                gadget_uses;                                               // 0x00B8(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                ability_uses;                                              // 0x00BC(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                total_earned;                                              // 0x00C0(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                total_spent;                                               // 0x00C4(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                total_refunded;                                            // 0x00C8(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                on_time;                                                   // 0x00CC(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                connect_count;                                             // 0x00D0(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                disconnect_round;                                          // 0x00D4(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                deserter_rounds;                                           // 0x00D8(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                penalties;                                                 // 0x00DC(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                afk_kicked;                                                // 0x00E0(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                client_selected_site_id;                                   // 0x00E4(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                client_selected_queue_id;                                  // 0x00E8(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_3HET[0x4];                                     // 0x00EC(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FString                                     client_current_language;                                   // 0x00F0(0x0010) (ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct Killstreak.JobSelectionRecord
// 0x0068
struct FJobSelectionRecord
{
	int                                                ue_player_id;                                              // 0x0000(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                hz_player_id;                                              // 0x0004(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                round_id;                                                  // 0x0008(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                class_id;                                                  // 0x000C(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     Timestamp;                                                 // 0x0010(0x0010) (ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                skin_id;                                                   // 0x0020(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                wingsuit_id;                                               // 0x0024(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                primary_weapon_1_wrap_id;                                  // 0x0028(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                primary_weapon_2_wrap_id;                                  // 0x002C(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                secondary_weapon_wrap_id;                                  // 0x0030(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                melee_weapon_wrap_id;                                      // 0x0034(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<int>                                        emotes_and_sprays;                                         // 0x0038(0x0010) (ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<int>                                        quips;                                                     // 0x0048(0x0010) (ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<int>                                        communications;                                            // 0x0058(0x0010) (ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct Killstreak.JobBanRecord
// 0x0020
struct FJobBanRecord
{
	int                                                ue_player_id;                                              // 0x0000(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                hz_player_id;                                              // 0x0004(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                round_id;                                                  // 0x0008(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                class_id;                                                  // 0x000C(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     Timestamp;                                                 // 0x0010(0x0010) (ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct Killstreak.ClientContextRecord
// 0x0178
struct FClientContextRecord
{
	int                                                ue_player_id;                                              // 0x0000(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                hz_player_id;                                              // 0x0004(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     client_current_language;                                   // 0x0008(0x0010) (ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                client_selected_site_id;                                   // 0x0018(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                divert_from_queue_id;                                      // 0x001C(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                divert_to_queue_id;                                        // 0x0020(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	Killstreak_EQueueDivertType                        queue_divert_type;                                         // 0x0024(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_OIGK[0x3];                                     // 0x0025(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	float                                              sheltered_mm_attempt_timeout;                              // 0x0028(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              sheltered_mm_level_limit;                                  // 0x002C(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                forced_bot_match_limit;                                    // 0x0030(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                mercy_match_losses_required;                               // 0x0034(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TMap<struct FString, struct FString>               strings;                                                   // 0x0038(0x0050) (NativeAccessSpecifierPublic)
	TMap<struct FString, uint64_t>                     uint64_values;                                             // 0x0088(0x0050) (NativeAccessSpecifierPublic)
	TMap<struct FString, float>                        float_values;                                              // 0x00D8(0x0050) (NativeAccessSpecifierPublic)
	TMap<struct FString, int>                          int32_values;                                              // 0x0128(0x0050) (NativeAccessSpecifierPublic)

};

// ScriptStruct Killstreak.PlayerConnectionEventRecord
// 0x0020
struct FPlayerConnectionEventRecord
{
	int                                                hz_player_id;                                              // 0x0000(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                ue_player_id;                                              // 0x0004(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                round_id;                                                  // 0x0008(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int8_t                                             is_connected;                                              // 0x000C(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_XTV0[0x3];                                     // 0x000D(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FString                                     Timestamp;                                                 // 0x0010(0x0010) (ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct Killstreak.BotBackfillEventRecord
// 0x0020
struct FBotBackfillEventRecord
{
	int                                                hz_player_id;                                              // 0x0000(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                bot_ue_player_id;                                          // 0x0004(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                round_id;                                                  // 0x0008(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_B2CA[0x4];                                     // 0x000C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FString                                     Timestamp;                                                 // 0x0010(0x0010) (ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct Killstreak.ReviveEventItem
// 0x0014
struct FReviveEventItem : public FReplicatedLogItem
{
	struct FReviveEvent                                ReviveEvent;                                               // 0x0000(0x0014) (NoDestructor, Protected, NativeAccessSpecifierProtected)

};

// ScriptStruct Killstreak.ReviveEventList
// 0x0018 (0x0088 - 0x0070)
struct FReviveEventList : public FSizedArraySerializer
{
	TArray<struct FReviveEventItem>                    Items;                                                     // 0x0070(0x0010) (ZeroConstructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_MYTU[0x8];                                     // 0x0080(0x0008) MISSED OFFSET (PADDING)

};

// ScriptStruct Killstreak.LootSiteState
// 0x0002
struct FLootSiteState
{
	bool                                               bActive;                                                   // 0x0000(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bLooted;                                                   // 0x0001(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct Killstreak.LootSiteDropInfo
// 0x0030
struct FLootSiteDropInfo
{
	class UKSItem*                                     Item;                                                      // 0x0000(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UKSWeaponAttachment*                         Attachment1;                                               // 0x0008(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UKSWeaponAttachment*                         Attachment2;                                               // 0x0010(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UKSWeaponAttachment*                         Attachment3;                                               // 0x0018(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              Weight;                                                    // 0x0020(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                Price;                                                     // 0x0024(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              ChanceToSkipAttachment;                                    // 0x0028(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bRandomizeAttachments;                                     // 0x002C(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_2070[0x3];                                     // 0x002D(0x0003) MISSED OFFSET (PADDING)

};

// ScriptStruct Killstreak.AccoladeEventItem
// 0x0078
struct FAccoladeEventItem : public FReplicatedLogItem
{
	struct FAccoladeEventEntry                         AccoladeEventEntry;                                        // 0x0000(0x0078) (Protected, NativeAccessSpecifierProtected)

};

// ScriptStruct Killstreak.AccoladeEventList
// 0x0018 (0x0088 - 0x0070)
struct FAccoladeEventList : public FSizedArraySerializer
{
	TArray<struct FAccoladeEventItem>                  Items;                                                     // 0x0070(0x0010) (ZeroConstructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_OSE0[0x8];                                     // 0x0080(0x0008) MISSED OFFSET (PADDING)

};

// ScriptStruct Killstreak.SkinnableAudioEvent
// 0x0010
struct FSkinnableAudioEvent
{
	struct FName                                       SoundRowName;                                              // 0x0000(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UAkAudioEvent*                               DefaultSound;                                              // 0x0008(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct Killstreak.ObjectiveCaptureEventRecord
// 0x0060
struct FObjectiveCaptureEventRecord
{
	int                                                hz_player_id;                                              // 0x0000(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                ue_player_id;                                              // 0x0004(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                team_id;                                                   // 0x0008(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_C63A[0x4];                                     // 0x000C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FString                                     mode_name;                                                 // 0x0010(0x0010) (ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                round_id;                                                  // 0x0020(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                objective_type;                                            // 0x0024(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     capture_action;                                            // 0x0028(0x0010) (ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FLocationRecord                             Location;                                                  // 0x0038(0x000C) (NoDestructor, NativeAccessSpecifierPublic)
	struct FRotationRecord                             Rotation;                                                  // 0x0044(0x0008) (NoDestructor, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_URK1[0x4];                                     // 0x004C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FString                                     Timestamp;                                                 // 0x0050(0x0010) (ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct Killstreak.MatchRecord
// 0x0198
struct FMatchRecord
{
	int                                                version_major;                                             // 0x0000(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                version_minor;                                             // 0x0004(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FSerializedInstanceId                       instance_id;                                               // 0x0008(0x0010) (HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                instance_site_id;                                          // 0x0018(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_WV6L[0x4];                                     // 0x001C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FSerializedMatchId                          match_id;                                                  // 0x0020(0x0010) (HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     map_name;                                                  // 0x0030(0x0010) (ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     mode_name;                                                 // 0x0040(0x0010) (ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                map_game_id;                                               // 0x0050(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                queue_id;                                                  // 0x0054(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                team_size;                                                 // 0x0058(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                winning_team;                                              // 0x005C(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     match_start_time;                                          // 0x0060(0x0010) (ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     match_end_time;                                            // 0x0070(0x0010) (ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                match_fubar_state;                                         // 0x0080(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                Duration;                                                  // 0x0084(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                total_rounds;                                              // 0x0088(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                total_players;                                             // 0x008C(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                total_bots;                                                // 0x0090(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                total_earned;                                              // 0x0094(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                total_spent;                                               // 0x0098(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                total_refunded;                                            // 0x009C(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                total_on_time;                                             // 0x00A0(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                total_deserters;                                           // 0x00A4(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                total_deserter_rounds;                                     // 0x00A8(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                total_surrender_polls;                                     // 0x00AC(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               ended_in_surrender;                                        // 0x00B0(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_Y338[0x3];                                     // 0x00B1(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	int                                                total_penalized_players;                                   // 0x00B4(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FMinimapData                                Minimap;                                                   // 0x00B8(0x0020) (NativeAccessSpecifierPublic)
	TArray<struct FPlayerRecord>                       Players;                                                   // 0x00D8(0x0010) (ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<struct FJobSelectionRecord>                 job_selection_records;                                     // 0x00E8(0x0010) (ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<struct FJobBanRecord>                       job_ban_records;                                           // 0x00F8(0x0010) (ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TMap<int, struct FClientContextRecord>             client_context_records;                                    // 0x0108(0x0050) (NativeAccessSpecifierPublic)
	TArray<struct FRoundEventRecord>                   rounds;                                                    // 0x0158(0x0010) (ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<struct FPlayerConnectionEventRecord>        player_connections;                                        // 0x0168(0x0010) (ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<struct FBotBackfillEventRecord>             bot_backfill;                                              // 0x0178(0x0010) (ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<struct FObjectiveCaptureEventRecord>        objective_capture_events;                                  // 0x0188(0x0010) (ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct Killstreak.KSPlayerModInputBinding
// 0x000C
struct FKSPlayerModInputBinding
{
	struct FName                                       ActionName;                                                // 0x0000(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bListenForPress;                                           // 0x0008(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bListenForRelease;                                         // 0x0009(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_DS14[0x2];                                     // 0x000A(0x0002) MISSED OFFSET (PADDING)

};

// ScriptStruct Killstreak.KSJobEquipmentTypesToGive
// 0x000D
struct FKSJobEquipmentTypesToGive
{
	bool                                               bPrimaryWeaponOptionOne;                                   // 0x0000(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bPrimaryWeaponOptionTwo;                                   // 0x0001(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bSecondaryWeaponOptionOne;                                 // 0x0002(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bSecondaryWeaponOptionTwo;                                 // 0x0003(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bMeleeWeapon;                                              // 0x0004(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bGadgetOptionOne;                                          // 0x0005(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bGadgetOptionTwo;                                          // 0x0006(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bPerkOptionOne;                                            // 0x0007(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bPerkOptionTwo;                                            // 0x0008(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bPerkOptionThree;                                          // 0x0009(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bPerkOptionFour;                                           // 0x000A(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bPerkOptionFive;                                           // 0x000B(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bPerkOptionSix;                                            // 0x000C(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct Killstreak.StateMachineModEntry
// 0x0010
struct FStateMachineModEntry
{
	struct FName                                       Key;                                                       // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UKSModInst_Activated*                        ModInst;                                                   // 0x0008(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct Killstreak.StateMachineObjectEntry
// 0x0018
struct FStateMachineObjectEntry
{
	struct FName                                       Key;                                                       // 0x0000(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UObject*                                     Entry;                                                     // 0x0008(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int64_t                                            IntEntry;                                                  // 0x0010(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct Killstreak.KSTargeterConfig
// 0x000C
struct FKSTargeterConfig
{
	float                                              MaxTargetingRange;                                         // 0x0000(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              TargetingConeHalfAngle;                                    // 0x0004(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bUseNearestTarget;                                         // 0x0008(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bRequiresVisibility;                                       // 0x0009(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_N6FP[0x2];                                     // 0x000A(0x0002) MISSED OFFSET (PADDING)

};

// ScriptStruct Killstreak.DownedEnemyPingHandle
// 0x0018
struct FDownedEnemyPingHandle
{
	TWeakObjectPtr<class AKSPlayerState>               DownedEnemyPlayer;                                         // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FTimerHandle                                PingTimerHandle;                                           // 0x0008(0x0008) (NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                PingsSent;                                                 // 0x0010(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_2A2M[0x4];                                     // 0x0014(0x0004) MISSED OFFSET (PADDING)

};

// ScriptStruct Killstreak.SafeZoneParams
// 0x0010
struct FSafeZoneParams
{
	struct FVector                                     CenterPosition;                                            // 0x0000(0x000C) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              Radius;                                                    // 0x000C(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct Killstreak.SeasonalSublevels
// 0x0010
struct FSeasonalSublevels
{
	TArray<struct FString>                             SublevelSuffixes;                                          // 0x0000(0x0010) (Edit, ZeroConstructor, DisableEditOnInstance, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct Killstreak.KickbackPlayback
// 0x0020
struct FKickbackPlayback
{
	float                                              AccumulatedTime;                                           // 0x0000(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_F0IV[0x4];                                     // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FInterpCurveVector2D                        KickbackCurve;                                             // 0x0008(0x0018) (ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct Killstreak.KSInputAxisKeyMappings
// 0x0010
struct FKSInputAxisKeyMappings
{
	TArray<struct FInputAxisKeyMapping>                InputAxisKeyMappings;                                      // 0x0000(0x0010) (ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct Killstreak.KSModZoneModInfo
// 0x0010
struct FKSModZoneModInfo
{
	class UKSPlayerMod*                                PlayerMod;                                                 // 0x0000(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bUnique;                                                   // 0x0008(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bRemove;                                                   // 0x0009(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bRemoveAll;                                                // 0x000A(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_7MZF[0x5];                                     // 0x000B(0x0005) MISSED OFFSET (PADDING)

};

// ScriptStruct Killstreak.AccountJobStatKey
// 0x0040
struct FAccountJobStatKey
{
	struct FKSPersistentPlayerId                       PlayerId;                                                  // 0x0000(0x0010) (NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      Job[0x28];                                                 // 0x0010(0x0028) UNKNOWN PROPERTY: SoftObjectProperty
	Killstreak_EAccountJobStatType                     AccountJobStatType;                                        // 0x0038(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_Q0YV[0x7];                                     // 0x0039(0x0007) MISSED OFFSET (PADDING)

};

// ScriptStruct Killstreak.AccountJobStatReplicatorEntry
// 0x004C (0x0058 - 0x000C)
struct FAccountJobStatReplicatorEntry : public FFastArraySerializerItem
{
	unsigned char                                      UnknownData_40BU[0x4];                                     // 0x000C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FAccountJobStatKey                          Key;                                                       // 0x0010(0x0040) (HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                Value;                                                     // 0x0050(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_3H4S[0x4];                                     // 0x0054(0x0004) MISSED OFFSET (PADDING)

};

// ScriptStruct Killstreak.AccountJobStatReplicator
// 0x0128 (0x0230 - 0x0108)
struct FAccountJobStatReplicator : public FFastArraySerializer
{
	unsigned char                                      UnknownData_FI69[0x10];                                    // 0x0108(0x0010) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	TArray<struct FAccountJobStatReplicatorEntry>      RepItems;                                                  // 0x0118(0x0010) (ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	TMap<struct FAccountJobStatKey, int>               AccountJobStatsMap;                                        // 0x0128(0x0050) (RepSkip, NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData_XMEW[0x50];                                    // 0x0178(0x0050) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	TMap<struct FInventoryId, struct FAccountJobStatKey> InventoryIdToStatKeyMap;                                   // 0x01C8(0x0050) (RepSkip, NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData_CVSY[0x18];                                    // 0x0218(0x0018) MISSED OFFSET (PADDING)

};

// ScriptStruct Killstreak.KSInputActionNameTypePair
// 0x000C
struct FKSInputActionNameTypePair
{
	struct FName                                       Name;                                                      // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	Killstreak_EKSInputActionType                      Type;                                                      // 0x0008(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_01DP[0x3];                                     // 0x0009(0x0003) MISSED OFFSET (PADDING)

};

// ScriptStruct Killstreak.KSInputActionTiedNames
// 0x0018
struct FKSInputActionTiedNames
{
	struct FName                                       Press;                                                     // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FName                                       Hold;                                                      // 0x0008(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FName                                       Repeat;                                                    // 0x0010(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct Killstreak.KSCustomInputActionKey
// 0x0014
struct FKSCustomInputActionKey
{
	int                                                propId;                                                    // 0x0000(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FName                                       KeyboardName;                                              // 0x0004(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FName                                       GamepadName;                                               // 0x000C(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct Killstreak.KSCustomInputAxisKey
// 0x001C
struct FKSCustomInputAxisKey
{
	int                                                propId;                                                    // 0x0000(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FName                                       KeyboardName;                                              // 0x0004(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              KeyboardScale;                                             // 0x000C(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FName                                       GamepadName;                                               // 0x0010(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              GamepadScale;                                              // 0x0018(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct Killstreak.KSInputActionKeyMapping
// 0x0030
struct FKSInputActionKeyMapping
{
	struct FInputActionKeyMapping                      Mapping;                                                   // 0x0000(0x0028) (NativeAccessSpecifierPublic)
	Killstreak_EKSInputActionType                      Type;                                                      // 0x0028(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_IRJT[0x7];                                     // 0x0029(0x0007) MISSED OFFSET (PADDING)

};

// ScriptStruct Killstreak.KSCustomInputActionKeyMappings
// 0x0030
struct FKSCustomInputActionKeyMappings
{
	TArray<struct FKSInputActionKeyMapping>            KBM_Mappings;                                              // 0x0000(0x0010) (ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<struct FKSInputActionKeyMapping>            GP_Mappings;                                               // 0x0010(0x0010) (ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<struct FKSInputActionKeyMapping>            Touch_Mappings;                                            // 0x0020(0x0010) (ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct Killstreak.KSStimulusEvent
// 0x0048
struct FKSStimulusEvent
{
	class AActor*                                      Actor;                                                     // 0x0000(0x0008) (Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FAIStimulus                                 Stimulus;                                                  // 0x0008(0x003C) (Edit, EditConst, NoDestructor, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_PBH9[0x4];                                     // 0x0044(0x0004) MISSED OFFSET (PADDING)

};

// ScriptStruct Killstreak.KSAnimInstanceProxy
// 0x0060 (0x0790 - 0x0730)
struct FKSAnimInstanceProxy : public FSkinnedAnimInstanceProxy
{
	unsigned char                                      UnknownData_D3AQ[0x60];                                    // 0x0730(0x0060) MISSED OFFSET (PADDING)

};

// ScriptStruct Killstreak.KSAnimStats
// 0x0008
struct FKSAnimStats
{
	float                                              PlayTime;                                                  // 0x0000(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              PlayTimeWeighted;                                          // 0x0004(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct Killstreak.ReactiveWrapSFXParam
// 0x0030
struct FReactiveWrapSFXParam
{
	class UAkAudioEvent*                               AKAudioEventToPlay;                                        // 0x0000(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UAkAudioEvent*                               AKAudioStopEvent;                                          // 0x0008(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FName                                       RTPCNameToModify;                                          // 0x0010(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               UpdateValuesOnTrigger;                                     // 0x0018(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               UpdateValuesOnInterpolate;                                 // 0x0019(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               UpdateValuesOnMaximumReached;                              // 0x001A(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               UpdateValuesOnResetStarted;                                // 0x001B(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              InitilizedRTPCFloatValue;                                  // 0x001C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              InterpolateSpeedBuildUp;                                   // 0x0020(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              InterpolateSpeedCoolDown;                                  // 0x0024(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               SFXLocalOnly;                                              // 0x0028(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_8AYP[0x7];                                     // 0x0029(0x0007) MISSED OFFSET (PADDING)

};

// ScriptStruct Killstreak.ReactiveWrapVFXFloatParam
// 0x0030
struct FReactiveWrapVFXFloatParam
{
	class UParticleSystem*                             VFXParticleSystemToSpawn;                                  // 0x0000(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FName                                       VFXAttachTargetName;                                       // 0x0008(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FName                                       VFXFloatParameterToModify;                                 // 0x0010(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               ActivateEmitterOnlyOnTrigger;                              // 0x0018(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               UpdateValuesOnTrigger;                                     // 0x0019(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               UpdateValuesOnInterpolate;                                 // 0x001A(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               UpdateValuesOnMaximumReached;                              // 0x001B(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               UpdateValuesOnResetStarted;                                // 0x001C(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_JY76[0x3];                                     // 0x001D(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	float                                              InitilizedFloatValue;                                      // 0x0020(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              InterpolateSpeedBuildUp;                                   // 0x0024(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              InterpolateSpeedCoolDown;                                  // 0x0028(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_P4JV[0x4];                                     // 0x002C(0x0004) MISSED OFFSET (PADDING)

};

// ScriptStruct Killstreak.ReactiveWrapMaterialVectorParam
// 0x0020
struct FReactiveWrapMaterialVectorParam
{
	struct FName                                       MaterialVectorParametersToModify;                          // 0x0000(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               UpdateValuesOnTrigger;                                     // 0x0008(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               UpdateValuesOnInterpolate;                                 // 0x0009(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               UpdateValuesOnMaximumReached;                              // 0x000A(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               UpdateValuesOnResetStarted;                                // 0x000B(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                                     InitilizedVectorValue;                                     // 0x000C(0x000C) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              InterpolateSpeedBuildUp;                                   // 0x0018(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              InterpolateSpeedCoolDown;                                  // 0x001C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct Killstreak.ReactiveWrapMaterialScalarParam
// 0x0018
struct FReactiveWrapMaterialScalarParam
{
	struct FName                                       MaterialScalarParametersToModify;                          // 0x0000(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               UpdateValuesOnTrigger;                                     // 0x0008(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               UpdateValuesOnInterpolate;                                 // 0x0009(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               UpdateValuesOnMaximumReached;                              // 0x000A(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               UpdateValuesOnResetStarted;                                // 0x000B(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              InitilizedScalarValue;                                     // 0x000C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              InterpolateSpeedBuildUp;                                   // 0x0010(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              InterpolateSpeedCoolDown;                                  // 0x0014(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct Killstreak.KSAudioEventTableRow
// 0x0008 (0x0010 - 0x0008)
struct FKSAudioEventTableRow : public FTableRowBase
{
	class UAkAudioEvent*                               AkEvent;                                                   // 0x0008(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct Killstreak.ArrayAsMapValue
// 0x0010
struct FArrayAsMapValue
{
	TArray<struct FString>                             StringArray;                                               // 0x0000(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct Killstreak.KSBotAbilityTableRow
// 0x0038 (0x0040 - 0x0008)
struct FKSBotAbilityTableRow : public FTableRowBase
{
	unsigned char                                      Ability[0x28];                                             // 0x0008(0x0028) UNKNOWN PROPERTY: SoftObjectProperty
	TArray<class UKSBTAction*>                         RequiredActions;                                           // 0x0030(0x0010) (Edit, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct Killstreak.KSBotJobConfig
// 0x0058
struct FKSBotJobConfig
{
	bool                                               bAllowJob;                                                 // 0x0000(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_78BW[0x7];                                     // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	unsigned char                                      AllowedAlternateSkins[0x50];                               // 0x0001(0x0050) UNKNOWN PROPERTY: MapProperty

};

// ScriptStruct Killstreak.KSBotEquipmentSkinTableRow
// 0x0010 (0x0018 - 0x0008)
struct FKSBotEquipmentSkinTableRow : public FTableRowBase
{
	struct FGameplayTag                                EquipPointTag;                                             // 0x0008(0x0008) (Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UDataTable*                                  SkinTable;                                                 // 0x0010(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct Killstreak.KSBotCharacterSkinTableRow
// 0x0030 (0x0038 - 0x0008)
struct FKSBotCharacterSkinTableRow : public FTableRowBase
{
	unsigned char                                      JobItem[0x28];                                             // 0x0008(0x0028) UNKNOWN PROPERTY: SoftObjectProperty
	class UDataTable*                                  SkinTable;                                                 // 0x0030(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct Killstreak.KSBotSkinTableRow
// 0x0030 (0x0038 - 0x0008)
struct FKSBotSkinTableRow : public FTableRowBase
{
	unsigned char                                      Skin[0x28];                                                // 0x0008(0x0028) UNKNOWN PROPERTY: SoftObjectProperty
	int                                                Weight;                                                    // 0x0030(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_0R7G[0x4];                                     // 0x0034(0x0004) MISSED OFFSET (PADDING)

};

// ScriptStruct Killstreak.KSBTAbilityConditionTableRow
// 0x0038 (0x0040 - 0x0008)
struct FKSBTAbilityConditionTableRow : public FTableRowBase
{
	unsigned char                                      AbilityItem[0x28];                                         // 0x0008(0x0028) UNKNOWN PROPERTY: SoftObjectProperty
	class UKSBTAbilityConditionValidator*              AbilityConditionValidator;                                 // 0x0030(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	Killstreak_EAbilityExecutionType                   AbilityExecutionType;                                      // 0x0038(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_NFG8[0x7];                                     // 0x0039(0x0007) MISSED OFFSET (PADDING)

};

// ScriptStruct Killstreak.KSBTDifficultyTableRow
// 0x0090 (0x0098 - 0x0008)
struct FKSBTDifficultyTableRow : public FTableRowBase
{
	class UKSBTDifficulty*                             Difficulty;                                                // 0x0008(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FKSBTDifficultyConfig                       DifficultyModifierConfig;                                  // 0x0010(0x0078) (Edit, NativeAccessSpecifierPublic)
	class UDataTable*                                  ObjectivePriorityTable;                                    // 0x0088(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              BackfillMMRMin;                                            // 0x0090(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              BackfillMMRMax;                                            // 0x0094(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct Killstreak.KSBTTargetSelectionTableRow
// 0x0008 (0x0010 - 0x0008)
struct FKSBTTargetSelectionTableRow : public FTableRowBase
{
	class UKSBTTargetSelector*                         TargetSelector;                                            // 0x0008(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct Killstreak.KSBTWeaponRangeTableRow
// 0x0050 (0x0058 - 0x0008)
struct FKSBTWeaponRangeTableRow : public FTableRowBase
{
	struct FGameplayTagContainer                       WeaponTypes;                                               // 0x0008(0x0020) (Edit, NativeAccessSpecifierPublic)
	unsigned char                                      WeaponClassOverride[0x28];                                 // 0x0028(0x0028) UNKNOWN PROPERTY: SoftClassProperty
	float                                              IdealAttackRange;                                          // 0x0050(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              StartAttackRange;                                          // 0x0054(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct Killstreak.KSDamageHistory
// 0x0010
struct FKSDamageHistory
{
	class AController*                                 DamageInstigator;                                          // 0x0000(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UClass*                                      DamageType;                                                // 0x0008(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct Killstreak.KSInputAction
// 0x00C0
struct FKSInputAction
{
	unsigned char                                      UnknownData_83NF[0xC0];                                    // 0x0000(0x00C0) MISSED OFFSET (PADDING)

};

// ScriptStruct Killstreak.KSInputActionMapping
// 0x0030
struct FKSInputActionMapping
{
	unsigned char                                      UnknownData_6SAP[0x30];                                    // 0x0000(0x0030) MISSED OFFSET (PADDING)

};

// ScriptStruct Killstreak.VOTableRow
// 0x0030 (0x0038 - 0x0008)
struct FVOTableRow : public FTableRowBase
{
	struct FGameplayTag                                VOEvent;                                                   // 0x0008(0x0008) (Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      AudioEvent[0x28];                                          // 0x0010(0x0028) UNKNOWN PROPERTY: SoftObjectProperty

};

// ScriptStruct Killstreak.ItemTableElement
// 0x0028 (0x0030 - 0x0008)
struct FItemTableElement : public FTableRowBase
{
	unsigned char                                      Item[0x28];                                                // 0x0008(0x0028) UNKNOWN PROPERTY: SoftObjectProperty

};

// ScriptStruct Killstreak.CurrencyImageRow
// 0x00A8 (0x00B0 - 0x0008)
struct FCurrencyImageRow : public FTableRowBase
{
	int                                                Quantity;                                                  // 0x0008(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                BonusQuantity;                                             // 0x000C(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      Image[0x28];                                               // 0x0010(0x0028) UNKNOWN PROPERTY: SoftObjectProperty
	unsigned char                                      FullSplashImage[0x28];                                     // 0x0038(0x0028) UNKNOWN PROPERTY: SoftObjectProperty
	TMap<PlatformInventoryItem_EExternalSkuSource, struct FString> ExternalProductSkus;                                       // 0x0060(0x0050) (Edit, DisableEditOnInstance, NativeAccessSpecifierPublic)

};

// ScriptStruct Killstreak.KSDamageEventInfo
// 0x0020
struct FKSDamageEventInfo
{
	class UClass*                                      DamageTypeClass;                                           // 0x0000(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                DamageClassId;                                             // 0x0008(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_54LX[0x4];                                     // 0x000C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	TArray<struct FHitResult>                          HitResults;                                                // 0x0010(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, ContainsInstancedReference, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct Killstreak.KSRandomDropRow
// 0x0010 (0x0018 - 0x0008)
struct FKSRandomDropRow : public FTableRowBase
{
	class UKSItem*                                     DropAsset;                                                 // 0x0008(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              DropChance;                                                // 0x0010(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	Killstreak_EDropPickupConfig                       DropPickupConfig;                                          // 0x0014(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_6CPN[0x3];                                     // 0x0015(0x0003) MISSED OFFSET (PADDING)

};

// ScriptStruct Killstreak.EncounterManagedBotInstance
// 0x0048
struct FEncounterManagedBotInstance
{
	unsigned char                                      UnknownData_RCMM[0x48];                                    // 0x0000(0x0048) MISSED OFFSET (PADDING)

};

// ScriptStruct Killstreak.KSEquipmentCommonDummyStruct
// 0x0001
struct FKSEquipmentCommonDummyStruct
{
	unsigned char                                      UnknownData_ZBJT[0x1];                                     // 0x0000(0x0001) MISSED OFFSET (PADDING)

};

// ScriptStruct Killstreak.GrandPrizeProgression
// 0x000C
struct FGrandPrizeProgression
{
	int                                                CurrentProgression;                                        // 0x0000(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                EndingProgression;                                         // 0x0004(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               IsUnlocked;                                                // 0x0008(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_FJ1N[0x3];                                     // 0x0009(0x0003) MISSED OFFSET (PADDING)

};

// ScriptStruct Killstreak.LoadingScreenImageRow
// 0x0088 (0x0090 - 0x0008)
struct FLoadingScreenImageRow : public FTableRowBase
{
	struct FSoftObjectPath                             Map;                                                       // 0x0008(0x0018) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      LoadingScreenImage[0x28];                                  // 0x0020(0x0028) UNKNOWN PROPERTY: SoftObjectProperty
	struct FText                                       MapDisplayName;                                            // 0x0048(0x0018) (Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	struct FText                                       MapRegion;                                                 // 0x0060(0x0018) (Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	struct FText                                       MapDescription;                                            // 0x0078(0x0018) (Edit, BlueprintVisible, NativeAccessSpecifierPublic)

};

// ScriptStruct Killstreak.LoadingScreenTipTextRow
// 0x0020 (0x0028 - 0x0008)
struct FLoadingScreenTipTextRow : public FTableRowBase
{
	struct FText                                       TipText;                                                   // 0x0008(0x0018) (Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	bool                                               IsStaticTip;                                               // 0x0020(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_RMAV[0x7];                                     // 0x0021(0x0007) MISSED OFFSET (PADDING)

};

// ScriptStruct Killstreak.KSEventAssistants
// 0x0010
struct FKSEventAssistants
{
	TArray<class APlayerState*>                        Assistants;                                                // 0x0000(0x0010) (ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct Killstreak.KSPlayerProfile
// 0x0008 (0x0028 - 0x0020)
struct FKSPlayerProfile : public FPGame_PlayerProfile
{
	int                                                TeamNumber;                                                // 0x0020(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_OS3R[0x4];                                     // 0x0024(0x0004) MISSED OFFSET (PADDING)

};

// ScriptStruct Killstreak.QueuedCinematicInfo
// 0x0028
struct FQueuedCinematicInfo
{
	unsigned char                                      UnknownData_RD05[0x28];                                    // 0x0000(0x0028) MISSED OFFSET (PADDING)

};

// ScriptStruct Killstreak.PlayerHealthMeterState
// 0x0018
struct FPlayerHealthMeterState
{
	int                                                HealthValue;                                               // 0x0000(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                MaxHealth;                                                 // 0x0004(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                MaxHealthBonus;                                            // 0x0008(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                ArmorValue;                                                // 0x000C(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                OverhealValue;                                             // 0x0010(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               IsDowned;                                                  // 0x0014(0x0001) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_WHHY[0x3];                                     // 0x0015(0x0003) MISSED OFFSET (PADDING)

};

// ScriptStruct Killstreak.KSInteractionBlocker
// 0x0008
struct FKSInteractionBlocker
{
	struct FName                                       BlockReason;                                               // 0x0000(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct Killstreak.KSCustomInputAxisKeyMappings
// 0x00F0
struct FKSCustomInputAxisKeyMappings
{
	TMap<float, struct FKSInputAxisKeyMappings>        KBM_Mappings;                                              // 0x0000(0x0050) (NativeAccessSpecifierPublic)
	TMap<float, struct FKSInputAxisKeyMappings>        GP_Mappings;                                               // 0x0050(0x0050) (NativeAccessSpecifierPublic)
	TMap<float, struct FKSInputAxisKeyMappings>        Touch_Mappings;                                            // 0x00A0(0x0050) (NativeAccessSpecifierPublic)

};

// ScriptStruct Killstreak.KSProjectileClusterSegment
// 0x0038
struct FKSProjectileClusterSegment
{
	class UClass*                                      ProjectileClass;                                           // 0x0000(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UKSWeaponAsset*                              WeaponAsset;                                               // 0x0008(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                                     SpawnOffset;                                               // 0x0010(0x000C) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FRotator                                    InitialRotation;                                           // 0x001C(0x000C) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	struct FVector                                     Direction;                                                 // 0x0028(0x000C) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_FN16[0x4];                                     // 0x0034(0x0004) MISSED OFFSET (PADDING)

};

// ScriptStruct Killstreak.KSActorProximityInfo
// 0x0018
struct FKSActorProximityInfo
{
	bool                                               bInLOS;                                                    // 0x0000(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_MTI4[0x3];                                     // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	float                                              LastTimeUpdated;                                           // 0x0004(0x0004) (ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<class UPrimitiveComponent*>                 OverlappedComponents;                                      // 0x0008(0x0010) (BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, ContainsInstancedReference, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct Killstreak.KSVehicleOutOfBoundsInfo
// 0x0008
struct FKSVehicleOutOfBoundsInfo
{
	bool                                               bOutOfBounds;                                              // 0x0000(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_GVI2[0x3];                                     // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	float                                              WarningLength;                                             // 0x0004(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct Killstreak.KSVehicleDeathInfo
// 0x0020
struct FKSVehicleDeathInfo
{
	Killstreak_EKSVehicleDeathState                    DeathState;                                                // 0x0000(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_QL3V[0x7];                                     // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UClass*                                      DamageType;                                                // 0x0008(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                                     DamageDirection;                                           // 0x0010(0x000C) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              FinalBlowDamage;                                           // 0x001C(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct Killstreak.KSResourceInfo
// 0x001C
struct FKSResourceInfo
{
	struct FName                                       ResourceKeyName;                                           // 0x0000(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	Killstreak_EKSResourceReplicationType              ResourceReplicationType;                                   // 0x0008(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_GUIT[0x3];                                     // 0x0009(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	float                                              CurrentResourceValue;                                      // 0x000C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                              LastLocalCurrentResourceValue;                             // 0x0010(0x0004) (ZeroConstructor, IsPlainOldData, RepSkip, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                              MinResourceValue;                                          // 0x0014(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                              MaxResourceValue;                                          // 0x0018(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)

};

// ScriptStruct Killstreak.KSResourceInfoSerializerItem
// 0x001C (0x0028 - 0x000C)
struct FKSResourceInfoSerializerItem : public FFastArraySerializerItem
{
	struct FKSResourceInfo                             ResourceInfo;                                              // 0x000C(0x001C) (NoDestructor, NativeAccessSpecifierPublic)

};

// ScriptStruct Killstreak.KSResourceInfoSerializerContainer
// 0x0018 (0x0120 - 0x0108)
struct FKSResourceInfoSerializerContainer : public FFastArraySerializer
{
	TArray<struct FKSResourceInfoSerializerItem>       ResourceInfoSerializerItems;                               // 0x0108(0x0010) (ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_IXMK[0x8];                                     // 0x0118(0x0008) MISSED OFFSET (PADDING)

};

// ScriptStruct Killstreak.KSRevealInfoSerializerItem
// 0x004C (0x0058 - 0x000C)
struct FKSRevealInfoSerializerItem : public FFastArraySerializerItem
{
	unsigned char                                      UnknownData_F7XS[0x4];                                     // 0x000C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FKSRevealInfo                               RevealInfo;                                                // 0x0010(0x0048) (NoDestructor, NativeAccessSpecifierPublic)

};

// ScriptStruct Killstreak.KSRevealInfoSerializerContainer
// 0x0018 (0x0120 - 0x0108)
struct FKSRevealInfoSerializerContainer : public FFastArraySerializer
{
	TArray<struct FKSRevealInfoSerializerItem>         RevealInfoSerializerItems;                                 // 0x0108(0x0010) (ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_KNCA[0x8];                                     // 0x0118(0x0008) MISSED OFFSET (PADDING)

};

// ScriptStruct Killstreak.PlayerDamageInfo
// 0x0030
struct FPlayerDamageInfo
{
	int                                                InstigatorPlayerId;                                        // 0x0000(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_UQ8J[0x4];                                     // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FString                                     InstigatorPlayerName;                                      // 0x0008(0x0010) (ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                VictimPlayerId;                                            // 0x0018(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_NUMT[0x4];                                     // 0x001C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FString                                     VictimPlayerName;                                          // 0x0020(0x0010) (ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct Killstreak.PlayerRewardsSummary
// 0x0060
struct FPlayerRewardsSummary
{
	TMap<int64_t, struct FRewardProgress>              ActivityRewards;                                           // 0x0000(0x0050) (BlueprintVisible, NativeAccessSpecifierPublic)
	TArray<struct FPlayerMatchStatInfo>                BestStats;                                                 // 0x0050(0x0010) (BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct Killstreak.BadBehaviorConfigEntry
// 0x0020
struct FBadBehaviorConfigEntry
{
	Killstreak_EBadBehaviorType                        BehaviorType;                                              // 0x0000(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_DUFN[0x3];                                     // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	int                                                TimeRequired;                                              // 0x0004(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               IsRepeatable;                                              // 0x0008(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               IsImmediate;                                               // 0x0009(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               AppliesDeserterPenalty;                                    // 0x000A(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_M7UT[0x5];                                     // 0x000B(0x0005) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	TArray<struct FPunishmentConfigEntry>              Punishments;                                               // 0x0010(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct Killstreak.KSShopPricing
// 0x0108
struct FKSShopPricing
{
	bool                                               bOverridePistolPrice;                                      // 0x0000(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_PS9C[0x3];                                     // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	int                                                PistolPrice;                                               // 0x0004(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bOverridePistolUpgradePrice;                               // 0x0008(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_5V0G[0x3];                                     // 0x0009(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	int                                                PistolUpgradePrice;                                        // 0x000C(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bOverrideAssaultRiflePrice;                                // 0x0010(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_S1Y1[0x3];                                     // 0x0011(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	int                                                AssaultRiflePrice;                                         // 0x0014(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bOverrideAssaultRifleUpgradePrice;                         // 0x0018(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_NBV4[0x3];                                     // 0x0019(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	int                                                AssaultRifleUpgradePrice;                                  // 0x001C(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bOverrideDMRPrice;                                         // 0x0020(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_3CWJ[0x3];                                     // 0x0021(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	int                                                DMRPrice;                                                  // 0x0024(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bOverrideDMRUpgradePrice;                                  // 0x0028(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_GWKD[0x3];                                     // 0x0029(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	int                                                DMRUpgradePrice;                                           // 0x002C(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bOverrideSMGPrice;                                         // 0x0030(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_ZS4J[0x3];                                     // 0x0031(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	int                                                SMGPrice;                                                  // 0x0034(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bOverrideSMGUpgradePrice;                                  // 0x0038(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_PKEN[0x3];                                     // 0x0039(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	int                                                SMGUpgradePrice;                                           // 0x003C(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bOverrideLMGPrice;                                         // 0x0040(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_2T36[0x3];                                     // 0x0041(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	int                                                LMGPrice;                                                  // 0x0044(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bOverrideLMGUpgradePrice;                                  // 0x0048(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_80E7[0x3];                                     // 0x0049(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	int                                                LMGUpgradePrice;                                           // 0x004C(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bOverrideShotgunPrice;                                     // 0x0050(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_4VW2[0x3];                                     // 0x0051(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	int                                                ShotgunPrice;                                              // 0x0054(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bOverrideShotgunUpgradePrice;                              // 0x0058(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_K08B[0x3];                                     // 0x0059(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	int                                                ShotgunUpgradePrice;                                       // 0x005C(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bOverrideSniperPrice;                                      // 0x0060(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_BDN6[0x3];                                     // 0x0061(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	int                                                SniperPrice;                                               // 0x0064(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bOverrideSniperUpgradePrice;                               // 0x0068(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_LSDM[0x3];                                     // 0x0069(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	int                                                SniperUpgradePrice;                                        // 0x006C(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bOverrideMeleePrice;                                       // 0x0070(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_3RHW[0x3];                                     // 0x0071(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	int                                                MeleePrice;                                                // 0x0074(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bOverrideMeleeUpgradePrice;                                // 0x0078(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_FPBF[0x3];                                     // 0x0079(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	int                                                MeleeUpgradePrice;                                         // 0x007C(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bOverrideLethalPrice;                                      // 0x0080(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_8F8R[0x3];                                     // 0x0081(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	int                                                LethalPrice;                                               // 0x0084(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bOverrideLethalUpgradePrice;                               // 0x0088(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_C506[0x3];                                     // 0x0089(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	int                                                LethalUpgradePrice;                                        // 0x008C(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bOverrideUtilityPrice;                                     // 0x0090(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_IAWO[0x3];                                     // 0x0091(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	int                                                UtilityPrice;                                              // 0x0094(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bOverrideUtilityUpgradePrice;                              // 0x0098(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_LUEY[0x3];                                     // 0x0099(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	int                                                UtilityUpgradePrice;                                       // 0x009C(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bOverrideTier1PerkPrice;                                   // 0x00A0(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_Q15T[0x3];                                     // 0x00A1(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	int                                                Tier1PerkPrice;                                            // 0x00A4(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bOverrideTier2PerkPrice;                                   // 0x00A8(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_9WKQ[0x3];                                     // 0x00A9(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	int                                                Tier2PerkPrice;                                            // 0x00AC(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bOverrideTier3PerkPrice;                                   // 0x00B0(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_0MYL[0x3];                                     // 0x00B1(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	int                                                Tier3PerkPrice;                                            // 0x00B4(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TMap<class UKSItem*, int>                          OverridePricingMap;                                        // 0x00B8(0x0050) (Edit, DisableEditOnInstance, NativeAccessSpecifierPublic)

};

// ScriptStruct Killstreak.ShopItemList
// 0x0010
struct FShopItemList
{
	TArray<Killstreak_EShopItemType>                   ShopItems;                                                 // 0x0000(0x0010) (Edit, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct Killstreak.EquipPointDefinition
// 0x0060
struct FEquipPointDefinition
{
	struct FGameplayTag                                EquipPoint;                                                // 0x0000(0x0008) (Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FGameplayTagQuery                           WeaponTypeQuery;                                           // 0x0008(0x0048) (Edit, NativeAccessSpecifierPublic)
	bool                                               bCanSwapToManually;                                        // 0x0050(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_8NYT[0x3];                                     // 0x0051(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FName                                       HandlerSubType;                                            // 0x0054(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_1BX8[0x4];                                     // 0x005C(0x0004) MISSED OFFSET (PADDING)

};

// ScriptStruct Killstreak.PlayerTeamTracker
// 0x0018
struct FPlayerTeamTracker
{
	int                                                PlayerId;                                                  // 0x0000(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                PlayerTeamNum;                                             // 0x0004(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<int>                                        PlayerElimIds;                                             // 0x0008(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct Killstreak.MultiSkinMapReplicatorEntry
// 0x0024 (0x0030 - 0x000C)
struct FMultiSkinMapReplicatorEntry : public FFastArraySerializerItem
{
	unsigned char                                      UnknownData_XZVJ[0x4];                                     // 0x000C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FKSPersistentPlayerId                       PlayerId;                                                  // 0x0010(0x0010) (NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UKSItem*                                     Item;                                                      // 0x0020(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UKSItem*                                     Skin;                                                      // 0x0028(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct Killstreak.PlayerSkinMap
// 0x0078
struct FPlayerSkinMap
{
	struct FKSPersistentPlayerId                       PlayerId;                                                  // 0x0000(0x0010) (NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TMap<class UKSItem*, class UKSItem*>               SkinMap;                                                   // 0x0010(0x0050) (NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_S3WH[0x18];                                    // 0x0060(0x0018) MISSED OFFSET (PADDING)

};

// ScriptStruct Killstreak.MultiPlayerSkinMapReplicator
// 0x00D0 (0x01D8 - 0x0108)
struct FMultiPlayerSkinMapReplicator : public FFastArraySerializer
{
	TArray<struct FMultiSkinMapReplicatorEntry>        RepItems;                                                  // 0x0108(0x0010) (ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TMap<struct FKSPersistentPlayerId, struct FPlayerSkinMap> PlayerSkinMaps;                                            // 0x0118(0x0050) (RepSkip, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_B5OP[0x70];                                    // 0x0168(0x0070) MISSED OFFSET (PADDING)

};

// ScriptStruct Killstreak.KSTimerState
// 0x0008
struct FKSTimerState
{
	bool                                               bIsTimerActive;                                            // 0x0000(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bIsTimerComplete;                                          // 0x0001(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_1ZK3[0x2];                                     // 0x0002(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	int                                                Counter;                                                   // 0x0004(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct Killstreak.KSAssetOverrideTable_TableRow
// 0x00A0 (0x00A8 - 0x0008)
struct FKSAssetOverrideTable_TableRow : public FTableRowBase
{
	unsigned char                                      WeaponAsset[0x28];                                         // 0x0008(0x0028) UNKNOWN PROPERTY: SoftObjectProperty
	unsigned char                                      WeaponSpecificOverrideTable[0x28];                         // 0x0030(0x0028) UNKNOWN PROPERTY: SoftObjectProperty
	int                                                TablePriority;                                             // 0x0058(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_F2J5[0x4];                                     // 0x005C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FGameplayTagQuery                           SkinTagQuery;                                              // 0x0060(0x0048) (Edit, BlueprintVisible, NativeAccessSpecifierPublic)

};

// ScriptStruct Killstreak.WeaponGraphEdge
// 0x0002
struct FWeaponGraphEdge
{
	Killstreak_EWeaponStateNew                         OldState;                                                  // 0x0000(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	Killstreak_EWeaponStateNew                         NewState;                                                  // 0x0001(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct Killstreak.FullFireRepData
// 0x0068
struct FFullFireRepData
{
	struct FAimData                                    Aim;                                                       // 0x0000(0x0050) (BlueprintVisible, NativeAccessSpecifierPublic)
	bool                                               bIgnoreExtraData;                                          // 0x0050(0x0001) (ZeroConstructor, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_BKLB[0x3];                                     // 0x0051(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FRandomStream                               RandomStream;                                              // 0x0054(0x0008) (BlueprintVisible, ZeroConstructor, NoDestructor, NativeAccessSpecifierPublic)
	float                                              Accuracy;                                                  // 0x005C(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      AmmoAfterThisShot;                                         // 0x0060(0x0001) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bIgnoreAmmo;                                               // 0x0061(0x0001) (ZeroConstructor, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_2R34[0x6];                                     // 0x0062(0x0006) MISSED OFFSET (PADDING)

};

// ScriptStruct Killstreak.HitDecalInfo
// 0x0028
struct FHitDecalInfo
{
	class UMaterialInterface*                          DecalMaterial;                                             // 0x0000(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                                     Size;                                                      // 0x0008(0x000C) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              MinimumScaling;                                            // 0x0014(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              MaximumScaling;                                            // 0x0018(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              MinimumAngle;                                              // 0x001C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              MaximumAngle;                                              // 0x0020(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_XTNT[0x4];                                     // 0x0024(0x0004) MISSED OFFSET (PADDING)

};

// ScriptStruct Killstreak.WeaponMasteryRewardDisplayData
// 0x0098
struct FWeaponMasteryRewardDisplayData
{
	struct FText                                       Name;                                                      // 0x0000(0x0018) (BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic)
	struct FText                                       Description;                                               // 0x0018(0x0018) (BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic)
	unsigned char                                      SoftIcon[0x28];                                            // 0x0030(0x0028) UNKNOWN PROPERTY: SoftObjectProperty
	struct FGameplayTag                                RarityTag;                                                 // 0x0058(0x0008) (BlueprintVisible, BlueprintReadOnly, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FText                                       ItemTypeText;                                              // 0x0060(0x0018) (BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic)
	Killstreak_EWeaponMasteryRewardGroup               RewardGroup;                                               // 0x0078(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_TSMR[0x3];                                     // 0x0079(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	int                                                DisplayQuantity;                                           // 0x007C(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               AlreadyOwned;                                              // 0x0080(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_RA6W[0x7];                                     // 0x0081(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UPUMG_StoreItem*                             PreviewStoreItem;                                          // 0x0088(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	Killstreak_EWeaponMasteryRewardPreviewType         RewardPreviewType;                                         // 0x0090(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_57NK[0x7];                                     // 0x0091(0x0007) MISSED OFFSET (PADDING)

};

// ScriptStruct Killstreak.MasteryMiscRewardContainer
// 0x0010
struct FMasteryMiscRewardContainer
{
	TArray<class UKSMasteryMiscReward*>                MiscRewards;                                               // 0x0000(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct Killstreak.MiscRewardsTableRow
// 0x0050 (0x0058 - 0x0008)
struct FMiscRewardsTableRow : public FTableRowBase
{
	TMap<int, struct FMasteryMiscRewardContainer>      MiscRewardsByLevel;                                        // 0x0008(0x0050) (Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, NativeAccessSpecifierPublic)

};

// ScriptStruct Killstreak.SingleSkinMapReplicatorEntry
// 0x0014 (0x0020 - 0x000C)
struct FSingleSkinMapReplicatorEntry : public FFastArraySerializerItem
{
	unsigned char                                      UnknownData_938B[0x4];                                     // 0x000C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UKSItem*                                     Item;                                                      // 0x0010(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UKSItem*                                     Skin;                                                      // 0x0018(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct Killstreak.SkinMapReplicator
// 0x0080 (0x0188 - 0x0108)
struct FSkinMapReplicator : public FFastArraySerializer
{
	TArray<struct FSingleSkinMapReplicatorEntry>       RepItems;                                                  // 0x0108(0x0010) (ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TMap<class UKSItem*, class UKSItem*>               SkinMap;                                                   // 0x0118(0x0050) (RepSkip, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_EPB9[0x20];                                    // 0x0168(0x0020) MISSED OFFSET (PADDING)

};

// ScriptStruct Killstreak.TraceCommonEmpty
// 0x0001
struct FTraceCommonEmpty
{
	unsigned char                                      UnknownData_Q9XO[0x1];                                     // 0x0000(0x0001) MISSED OFFSET (PADDING)

};

// ScriptStruct Killstreak.PlayerEntryStats
// 0x00C8
struct FPlayerEntryStats
{
	int                                                PlayerId;                                                  // 0x0000(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_79JS[0x4];                                     // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	int64_t                                            netPlayerID;                                               // 0x0008(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     PlayerName;                                                // 0x0010(0x0010) (BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                TeamNum;                                                   // 0x0020(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_ASNB[0x4];                                     // 0x0024(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UKSJobItem*                                  PlayerJob;                                                 // 0x0028(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               IsBot;                                                     // 0x0030(0x0001) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_F9SO[0x3];                                     // 0x0031(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FPlayerMatchStatInfo                        elimCount;                                                 // 0x0034(0x0010) (BlueprintVisible, NativeAccessSpecifierPublic)
	struct FPlayerMatchStatInfo                        DownCount;                                                 // 0x0044(0x0010) (BlueprintVisible, NativeAccessSpecifierPublic)
	struct FPlayerMatchStatInfo                        deathCount;                                                // 0x0054(0x0010) (BlueprintVisible, NativeAccessSpecifierPublic)
	struct FPlayerMatchStatInfo                        reviveCount;                                               // 0x0064(0x0010) (BlueprintVisible, NativeAccessSpecifierPublic)
	struct FPlayerMatchStatInfo                        DamageDealt;                                               // 0x0074(0x0010) (BlueprintVisible, NativeAccessSpecifierPublic)
	struct FPlayerMatchStatInfo                        hackCount;                                                 // 0x0084(0x0010) (BlueprintVisible, NativeAccessSpecifierPublic)
	struct FPlayerMatchStatInfo                        dehackCount;                                               // 0x0094(0x0010) (BlueprintVisible, NativeAccessSpecifierPublic)
	struct FPlayerMatchStatInfo                        pointCount;                                                // 0x00A4(0x0010) (BlueprintVisible, NativeAccessSpecifierPublic)
	struct FPlayerMatchStatInfo                        timePlayed;                                                // 0x00B4(0x0010) (BlueprintVisible, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_2S95[0x4];                                     // 0x00C4(0x0004) MISSED OFFSET (PADDING)

};

// ScriptStruct Killstreak.ScoreboardStats
// 0x0050
struct FScoreboardStats
{
	int                                                userPlayerID;                                              // 0x0000(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                winTeamNum;                                                // 0x0004(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     mapName;                                                   // 0x0008(0x0010) (BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FSerializedMatchId                          MatchID;                                                   // 0x0018(0x0010) (HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                GameMode;                                                  // 0x0028(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_4A1P[0x4];                                     // 0x002C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	TArray<struct FTeamStats>                          teams;                                                     // 0x0030(0x0010) (BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<struct FPlayerEntryStats>                   playerStats;                                               // 0x0040(0x0010) (BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct Killstreak.AttachmentData
// 0x0048
struct FAttachmentData
{
	unsigned char                                      SoftObjectPtr[0x28];                                       // 0x0000(0x0028) UNKNOWN PROPERTY: SoftObjectProperty
	struct FGameplayTagContainer                       CachedCompatibleWeaponTypes;                               // 0x0028(0x0020) (BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic)

};

// ScriptStruct Killstreak.AccoladeTrackerTableRow
// 0x0028 (0x0030 - 0x0008)
struct FAccoladeTrackerTableRow : public FTableRowBase
{
	unsigned char                                      AccoladeTrackerObject[0x28];                               // 0x0008(0x0028) UNKNOWN PROPERTY: SoftClassProperty

};

// ScriptStruct Killstreak.KSActivityDescriptor
// 0x0020
struct FKSActivityDescriptor
{
	struct FGameplayTag                                ActivityTag;                                               // 0x0000(0x0008) (BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int64_t                                            DescriptorId;                                              // 0x0008(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     DescriptorString;                                          // 0x0010(0x0010) (BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct Killstreak.ActivitySequenceRow
// 0x0028 (0x0030 - 0x0008)
struct FActivitySequenceRow : public FTableRowBase
{
	struct FText                                       DisplayName;                                               // 0x0008(0x0018) (Edit, BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic)
	unsigned char                                      ActivitySequence[0x10];                                    // 0x0020(0x0010) UNKNOWN PROPERTY: ArrayProperty

};

// ScriptStruct Killstreak.BotNameTableRow
// 0x0000 (0x0008 - 0x0008)
struct FBotNameTableRow : public FTableRowBase
{

};

// ScriptStruct Killstreak.KSInitialLoadoutRow
// 0x0010 (0x0018 - 0x0008)
struct FKSInitialLoadoutRow : public FTableRowBase
{
	unsigned char                                      LoadoutItems[0x10];                                        // 0x0008(0x0010) UNKNOWN PROPERTY: ArrayProperty

};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
