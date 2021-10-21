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

// Enum KillstreakUINew.EEOMProgressionType
enum class KillstreakUINew_EEOMProgressionType : uint8_t
{
	Unknown                        = 0,
	Account_XP                     = 1,
	Reputation                     = 2,
	Rogue_Mastery_XP               = 3,
	Mini_Battlepass_XP             = 4,
	Ranked_XP                      = 5,
	Placement_Matches              = 6,
	Battlepass_XP                  = 7,
	Event_Challenge                = 8,
	EEOMProgressionType_MAX        = 9,

};

// Enum KillstreakUINew.EKSPlayerQueryError
enum class KillstreakUINew_EKSPlayerQueryError : uint8_t
{
	EKSPlayerQueryError__None      = 0,
	EKSPlayerQueryError__NoResults = 1,
	EKSPlayerQueryError__TimedOut  = 2,
	EKSPlayerQueryError__QueryError = 3,
	EKSPlayerQueryError__EKSPlayerQueryError_MAX = 4,

};

// Enum KillstreakUINew.EPerkTreeNodeState
enum class KillstreakUINew_EPerkTreeNodeState : uint8_t
{
	EPerkTreeNodeState__NODE_OFF   = 0,
	EPerkTreeNodeState__NODE_ERROR = 1,
	EPerkTreeNodeState__NODE_UNREACHABLE = 2,
	EPerkTreeNodeState__NODE_UNAFFORDABLE = 3,
	EPerkTreeNodeState__NODE_UNLOCKABLE = 4,
	EPerkTreeNodeState__NODE_OWNED = 5,
	EPerkTreeNodeState__NODE_OWNED_EQUIPPED = 6,
	EPerkTreeNodeState__NODE_MAX   = 7,

};

// Enum KillstreakUINew.ESpecialtyItemType
enum class KillstreakUINew_ESpecialtyItemType : uint8_t
{
	ESpecialtyItemType__ESpecItemType_SpecialtyPerk = 0,
	ESpecialtyItemType__ESpecItemType_GlobalPerk = 1,
	ESpecialtyItemType__ESpecItemType_Killstreak = 2,
	ESpecialtyItemType__ESpecItemType_Gadget = 3,
	ESpecialtyItemType__ESpecItemType_PistolAttachment = 4,
	ESpecialtyItemType__ESpecItemType_Pistol = 5,
	ESpecialtyItemType__ESpecItemType_Specialty = 6,
	ESpecialtyItemType__ESpecItemType_AutoEquippedPerk = 7,
	ESpecialtyItemType__ESpecItemType_SecondaryAbility = 8,
	ESpecialtyItemType__ESpecItemType_LoadoutClass = 9,
	ESpecialtyItemType__ESpecItemType_LoadoutBundle = 10,
	ESpecialtyItemType__ESpecItemType_MAX = 11,

};

// Enum KillstreakUINew.EContextPromptHoldReleaseState
enum class KillstreakUINew_EContextPromptHoldReleaseState : uint8_t
{
	EContextPromptHoldReleaseState__HoldReleaseState_Started = 0,
	EContextPromptHoldReleaseState__HoldReleaseState_Canceled = 1,
	EContextPromptHoldReleaseState__HoldReleaseState_Completed = 2,
	EContextPromptHoldReleaseState__HoldReleaseState_MAX = 3,

};

// Enum KillstreakUINew.ERewardState
enum class KillstreakUINew_ERewardState : uint8_t
{
	ERewardState__locked           = 0,
	ERewardState__available        = 1,
	ERewardState__claimed          = 2,
	ERewardState__ERewardState_MAX = 3,

};

// Enum KillstreakUINew.EQueueType
enum class KillstreakUINew_EQueueType : uint8_t
{
	EQueueType__QT_Test            = 0,
	EQueueType__QT_Training        = 1,
	EQueueType__QT_PVP             = 2,
	EQueueType__QT_PVE             = 3,
	EQueueType__QT_Custom          = 4,
	EQueueType__QT_Ranked          = 5,
	EQueueType__QT_LimitedTime     = 6,
	EQueueType__QT_None            = 7,
	EQueueType__QT_MAX             = 8,

};

// Enum KillstreakUINew.EKSSocialOverlaySection
enum class KillstreakUINew_EKSSocialOverlaySection : uint8_t
{
	EKSSocialOverlaySection__Invalid = 0,
	EKSSocialOverlaySection__PartyMembers = 1,
	EKSSocialOverlaySection__MatchTeamMembers = 2,
	EKSSocialOverlaySection__PartyInvitations = 3,
	EKSSocialOverlaySection__FriendInvites = 4,
	EKSSocialOverlaySection__OnlineMctsFriends = 5,
	EKSSocialOverlaySection__OnlinePortalFriends = 6,
	EKSSocialOverlaySection__OfflineMctsFriends = 7,
	EKSSocialOverlaySection__Blocked = 8,
	EKSSocialOverlaySection__SearchResults = 9,
	EKSSocialOverlaySection__Pending = 10,
	EKSSocialOverlaySection__RecentlyPlayed = 11,
	EKSSocialOverlaySection__SuggestedFriends = 12,
	EKSSocialOverlaySection__MAX   = 13,

};

// Enum KillstreakUINew.EKSInviteSelectResult
enum class KillstreakUINew_EKSInviteSelectResult : uint8_t
{
	EKSInviteSelectResult__NoChange = 0,
	EKSInviteSelectResult__Selected = 1,
	EKSInviteSelectResult__Deselected = 2,
	EKSInviteSelectResult__EKSInviteSelectResult_MAX = 3,

};

// Enum KillstreakUINew.EKSInviteCloseAction
enum class KillstreakUINew_EKSInviteCloseAction : uint8_t
{
	EKSInviteCloseAction__None     = 0,
	EKSInviteCloseAction__Submit   = 1,
	EKSInviteCloseAction__EKSInviteCloseAction_MAX = 2,

};

// Enum KillstreakUINew.EKSVoiceActivityAudioState
enum class KillstreakUINew_EKSVoiceActivityAudioState : uint8_t
{
	EKSVoiceActivityAudioState__Disconnected = 0,
	EKSVoiceActivityAudioState__Connecting = 1,
	EKSVoiceActivityAudioState__Connected = 2,
	EKSVoiceActivityAudioState__Disconnecting = 3,
	EKSVoiceActivityAudioState__EKSVoiceActivityAudioState_MAX = 4,

};

// Enum KillstreakUINew.ECombatEventType
enum class KillstreakUINew_ECombatEventType : uint8_t
{
	ECombatEventType__CombatEvent_Down = 0,
	ECombatEventType__CombatEvent_Elim = 1,
	ECombatEventType__CombatEvent_MAX = 2,

};

// Enum KillstreakUINew.EConfigPropertyGuidedCalloutScenes
enum class KillstreakUINew_EConfigPropertyGuidedCalloutScenes : uint8_t
{
	EConfigPropertyGuidedCalloutScenes__NONE = 0,
	EConfigPropertyGuidedCalloutScenes__ROGUE_SCENE = 1,
	EConfigPropertyGuidedCalloutScenes__ROGUE_CUSTOMIZATION = 2,
	EConfigPropertyGuidedCalloutScenes__QUEUE_SELECT = 3,
	EConfigPropertyGuidedCalloutScenes__ARMORY = 4,
	EConfigPropertyGuidedCalloutScenes__WEAPON_DETAILS = 5,
	EConfigPropertyGuidedCalloutScenes__ROGUE_SCREEN_ARMORY = 6,
	EConfigPropertyGuidedCalloutScenes__MAX_DO_NOT_GO_OVER = 7,
	EConfigPropertyGuidedCalloutScenes__EConfigPropertyGuidedCalloutScenes_MAX = 8,

};

// Enum KillstreakUINew.EAllyMarkerState
enum class KillstreakUINew_EAllyMarkerState : uint8_t
{
	EAllyMarkerState__Normal       = 0,
	EAllyMarkerState__Downed       = 1,
	EAllyMarkerState__Reviving     = 2,
	EAllyMarkerState__Dead         = 3,
	EAllyMarkerState__Hidden       = 4,
	EAllyMarkerState__EAllyMarkerState_MAX = 5,

};

// Enum KillstreakUINew.EKSAutoTeamType
enum class KillstreakUINew_EKSAutoTeamType : uint8_t
{
	EKSAutoTeamType__LocalTeam     = 0,
	EKSAutoTeamType__ExactTeamNum  = 1,
	EKSAutoTeamType__RelativeEnemyTeam = 2,
	EKSAutoTeamType__EKSAutoTeamType_MAX = 3,

};

// Enum KillstreakUINew.EChallengeEntryCardState
enum class KillstreakUINew_EChallengeEntryCardState : uint8_t
{
	EChallengeEntryCardState__Empty = 0,
	EChallengeEntryCardState__Incomplete = 1,
	EChallengeEntryCardState__Complete = 2,
	EChallengeEntryCardState__Locked = 3,
	EChallengeEntryCardState__EChallengeEntryCardState_MAX = 4,

};

// Enum KillstreakUINew.EContextPromptAnchoring
enum class KillstreakUINew_EContextPromptAnchoring : uint8_t
{
	EContextPromptAnchoring__AnchorLeft = 0,
	EContextPromptAnchoring__AnchorRight = 1,
	EContextPromptAnchoring__AnchorCenter = 2,
	EContextPromptAnchoring__EContextPromptAnchoring_MAX = 3,

};

// Enum KillstreakUINew.EContextPromptType
enum class KillstreakUINew_EContextPromptType : uint8_t
{
	EContextPromptType__PromptTypeStandard = 0,
	EContextPromptType__PromptTypeCycle = 1,
	EContextPromptType__PromptTypeHoldRelease = 2,
	EContextPromptType__EContextPromptType_MAX = 3,

};

// Enum KillstreakUINew.EViewSide
enum class KillstreakUINew_EViewSide : uint8_t
{
	EViewSide__Left                = 0,
	EViewSide__Right               = 1,
	EViewSide__None                = 2,
	EViewSide__EViewSide_MAX       = 3,

};

// Enum KillstreakUINew.EQueueDataFactoryAction
enum class KillstreakUINew_EQueueDataFactoryAction : uint8_t
{
	EQueueDataFactoryAction__SwapPlayerCustomMatch = 0,
	EQueueDataFactoryAction__KickFromCustomMatch = 1,
	EQueueDataFactoryAction__EQueueDataFactoryAction_MAX = 2,

};

// Enum KillstreakUINew.EPartyDataFactoryAction
enum class KillstreakUINew_EPartyDataFactoryAction : uint8_t
{
	EPartyDataFactoryAction__KickMember = 0,
	EPartyDataFactoryAction__PromoteToLeader = 1,
	EPartyDataFactoryAction__AcceptInvite = 2,
	EPartyDataFactoryAction__DenyInvite = 3,
	EPartyDataFactoryAction__LeaveParty = 4,
	EPartyDataFactoryAction__EPartyDataFactoryAction_MAX = 5,

};

// Enum KillstreakUINew.EFriendDataFactoryAction
enum class KillstreakUINew_EFriendDataFactoryAction : uint8_t
{
	EFriendDataFactoryAction__AddFriend = 0,
	EFriendDataFactoryAction__RemoveFriend = 1,
	EFriendDataFactoryAction__CancelFriendRequest = 2,
	EFriendDataFactoryAction__AcceptFriendRequest = 3,
	EFriendDataFactoryAction__RejectFriendRequest = 4,
	EFriendDataFactoryAction__EFriendDataFactoryAction_MAX = 5,

};

// Enum KillstreakUINew.EPlayerContextOptions
enum class KillstreakUINew_EPlayerContextOptions : uint8_t
{
	EPlayerContextOptions__AddFriend = 0,
	EPlayerContextOptions__AddRoCoFriend = 1,
	EPlayerContextOptions__PartyInvite = 2,
	EPlayerContextOptions__LobbySwapTeam = 3,
	EPlayerContextOptions__LobbyKickPlayer = 4,
	EPlayerContextOptions__LobbyPromotePlayer = 5,
	EPlayerContextOptions__PartyKick = 6,
	EPlayerContextOptions__Whisper = 7,
	EPlayerContextOptions__ViewProfile = 8,
	EPlayerContextOptions__ViewPlatformProfile = 9,
	EPlayerContextOptions__RemoveFriend = 10,
	EPlayerContextOptions__CancelRequest = 11,
	EPlayerContextOptions__AcceptFriendRequest = 12,
	EPlayerContextOptions__RejectFriendRequest = 13,
	EPlayerContextOptions__PromotePartyLeader = 14,
	EPlayerContextOptions__AcceptPartyInvite = 15,
	EPlayerContextOptions__DeclinePartyInvite = 16,
	EPlayerContextOptions__LeaveParty = 17,
	EPlayerContextOptions__Mute    = 18,
	EPlayerContextOptions__Unmute  = 19,
	EPlayerContextOptions__ReportPlayer = 20,
	EPlayerContextOptions__None    = 21,
	EPlayerContextOptions__EPlayerContextOptions_MAX = 22,

};

// Enum KillstreakUINew.EPlayerContextMenuContext
enum class KillstreakUINew_EPlayerContextMenuContext : uint8_t
{
	EPlayerContextMenuContext__Friends = 0,
	EPlayerContextMenuContext__Party = 1,
	EPlayerContextMenuContext__CustomLobby = 2,
	EPlayerContextMenuContext__InGame = 3,
	EPlayerContextMenuContext__Default = 4,
	EPlayerContextMenuContext__EPlayerContextMenuContext_MAX = 5,

};

// Enum KillstreakUINew.EKSCategoryOpenMode
enum class KillstreakUINew_EKSCategoryOpenMode : uint8_t
{
	EKSCategoryOpenMode__ClosedByDefault = 0,
	EKSCategoryOpenMode__OpenByDefault = 1,
	EKSCategoryOpenMode__EKSCategoryOpenMode_MAX = 2,

};

// Enum KillstreakUINew.EConsoleCommandParamType
enum class KillstreakUINew_EConsoleCommandParamType : uint8_t
{
	EConsoleCommandParamType__None = 0,
	EConsoleCommandParamType__Bool = 1,
	EConsoleCommandParamType__String = 2,
	EConsoleCommandParamType__EConsoleCommandParamType_MAX = 3,

};

// Enum KillstreakUINew.EEquipAllType
enum class KillstreakUINew_EEquipAllType : uint8_t
{
	None                           = 0,
	EquipToJob                     = 1,
	EquipToWeapon                  = 2,
	EEquipAllType_MAX              = 3,

};

// Enum KillstreakUINew.ESocialMessageType
enum class KillstreakUINew_ESocialMessageType : uint8_t
{
	ESocialMessageType__EInvite    = 0,
	ESocialMessageType__EInviteResponse = 1,
	ESocialMessageType__EInviteExpired = 2,
	ESocialMessageType__EInviteError = 3,
	ESocialMessageType__EGenericMsg = 4,
	ESocialMessageType__ESocialMessageType_MAX = 5,

};

// Enum KillstreakUINew.ELowAmmoState
enum class KillstreakUINew_ELowAmmoState : uint8_t
{
	ELowAmmoState__Normal          = 0,
	ELowAmmoState__NeedsReload     = 1,
	ELowAmmoState__LowAmmo         = 2,
	ELowAmmoState__NoAmmo          = 3,
	ELowAmmoState__ELowAmmoState_MAX = 4,

};

// Enum KillstreakUINew.EIconMarkerScreenRegion
enum class KillstreakUINew_EIconMarkerScreenRegion : uint8_t
{
	EIconMarkerScreenRegion__Normal = 0,
	EIconMarkerScreenRegion__Center = 1,
	EIconMarkerScreenRegion__Edge  = 2,
	EIconMarkerScreenRegion__EIconMarkerScreenRegion_MAX = 3,

};

// Enum KillstreakUINew.EIconHoverState
enum class KillstreakUINew_EIconHoverState : uint8_t
{
	EIconHoverState__Unhovered     = 0,
	EIconHoverState__Hovering      = 1,
	EIconHoverState__Hovered       = 2,
	EIconHoverState__Unhovering    = 3,
	EIconHoverState__EIconHoverState_MAX = 4,

};

// Enum KillstreakUINew.EMinimapWidgetClampStyle
enum class KillstreakUINew_EMinimapWidgetClampStyle : uint8_t
{
	EMinimapWidgetClampStyle__Circular = 0,
	EMinimapWidgetClampStyle__Square = 1,
	EMinimapWidgetClampStyle__SquareByAngle = 2,
	EMinimapWidgetClampStyle__SquareByProjection = 3,
	EMinimapWidgetClampStyle__EMinimapWidgetClampStyle_MAX = 4,

};

// Enum KillstreakUINew.ENewsActions
enum class KillstreakUINew_ENewsActions : uint8_t
{
	ENewsActions__ENewsActions_Unknown = 0,
	ENewsActions__ENewsActions_ExternalURL = 1,
	ENewsActions__ENewsActions_NavToRoute = 2,
	ENewsActions__ENewsActions_NavToStoreItem = 3,
	ENewsActions__ENewsActions_NavToRogueDetails = 4,
	ENewsActions__ENewsActions_NavToCustomization = 5,
	ENewsActions__ENewsActions_MAX = 6,

};

// Enum KillstreakUINew.EPerkTreeEdgeState
enum class KillstreakUINew_EPerkTreeEdgeState : uint8_t
{
	EPerkTreeEdgeState__EDGE_OFF   = 0,
	EPerkTreeEdgeState__EDGE_ERROR = 1,
	EPerkTreeEdgeState__EDGE_UNREACHABLE = 2,
	EPerkTreeEdgeState__EDGE_TO_UNLOCKABLE = 3,
	EPerkTreeEdgeState__EDGE_OWNED = 4,
	EPerkTreeEdgeState__EDGE_MAX   = 5,

};

// Enum KillstreakUINew.EPerkTreeEdgeType
enum class KillstreakUINew_EPerkTreeEdgeType : uint8_t
{
	EPerkTreeEdgeType__EDGE_TOP    = 0,
	EPerkTreeEdgeType__EDGE_LEFT   = 1,
	EPerkTreeEdgeType__EDGE_DIAGONAL = 2,
	EPerkTreeEdgeType__EDGE_BACK_DIAGONAL = 3,
	EPerkTreeEdgeType__EDGE_MAX    = 4,

};

// Enum KillstreakUINew.EPlayerSelectionState
enum class KillstreakUINew_EPlayerSelectionState : uint8_t
{
	EPlayerSelectionState__EPlayerState_Selecting = 0,
	EPlayerSelectionState__EPlayerState_Selected = 1,
	EPlayerSelectionState__EPlayerState_LockedIn = 2,
	EPlayerSelectionState__EPlayerState_MAX = 3,

};

// Enum KillstreakUINew.EPointObjectiveMarkerTeamState
enum class KillstreakUINew_EPointObjectiveMarkerTeamState : uint8_t
{
	EPointObjectiveMarkerTeamState__Neutral = 0,
	EPointObjectiveMarkerTeamState__AllyOwned = 1,
	EPointObjectiveMarkerTeamState__EnemyOwned = 2,
	EPointObjectiveMarkerTeamState__Contested = 3,
	EPointObjectiveMarkerTeamState__EPointObjectiveMarkerTeamState_MAX = 4,

};

// Enum KillstreakUINew.EKSQueueJoinError
enum class KillstreakUINew_EKSQueueJoinError : uint8_t
{
	EKSQueueJoinError__None        = 0,
	EKSQueueJoinError__SystemError = 1,
	EKSQueueJoinError__QueueUnavailable = 2,
	EKSQueueJoinError__DeserterPenaltyActive = 3,
	EKSQueueJoinError__PlayerLevelRequirement = 4,
	EKSQueueJoinError__PartyMemberLevelRequirement = 5,
	EKSQueueJoinError__PartyMinMemberRequirement = 6,
	EKSQueueJoinError__PartyMaxMemberRequirement = 7,
	EKSQueueJoinError__InQueue     = 8,
	EKSQueueJoinError__PartyMemberRankRequirement = 9,
	EKSQueueJoinError__PartyMemberPlatformRequirement = 10,
	EKSQueueJoinError__EKSQueueJoinError_MAX = 11,

};

// Enum KillstreakUINew.EQueueTimerState
enum class KillstreakUINew_EQueueTimerState : uint8_t
{
	EQueueTimerState__Unknown      = 0,
	EQueueTimerState__DeserterPenaltyActive = 1,
	EQueueTimerState__WaitingForLeader = 2,
	EQueueTimerState__Queued       = 3,
	EQueueTimerState__EnteringMatch = 4,
	EQueueTimerState__EQueueTimerState_MAX = 5,

};

// Enum KillstreakUINew.EQuickPlayQueueState
enum class KillstreakUINew_EQuickPlayQueueState : uint8_t
{
	EQuickPlayQueueState__Unknown  = 0,
	EQuickPlayQueueState__NoQueuesAvailable = 1,
	EQuickPlayQueueState__NoSelectedQueue = 2,
	EQuickPlayQueueState__SelectedQueueUnavailable = 3,
	EQuickPlayQueueState__DeserterPenaltyActive = 4,
	EQuickPlayQueueState__SelectedQueuePartyMinLimit = 5,
	EQuickPlayQueueState__SelectedQueuePartyMaxLimit = 6,
	EQuickPlayQueueState__ReadyToJoin = 7,
	EQuickPlayQueueState__WaitingForLeader = 8,
	EQuickPlayQueueState__Queued   = 9,
	EQuickPlayQueueState__EnteringMatch = 10,
	EQuickPlayQueueState__ReadyToRejoin = 11,
	EQuickPlayQueueState__PlayerLevelRequirement = 12,
	EQuickPlayQueueState__PartyLevelRequirement = 13,
	EQuickPlayQueueState__PartyRankRequirement = 14,
	EQuickPlayQueueState__PartyPlatformRequirement = 15,
	EQuickPlayQueueState__EQuickPlayQueueState_MAX = 16,

};

// Enum KillstreakUINew.EAmmoState
enum class KillstreakUINew_EAmmoState : uint8_t
{
	EAmmoState__EAmmoState_Full    = 0,
	EAmmoState__EAmmoState_NeedsReload = 1,
	EAmmoState__EAmmoState_LowAmmo = 2,
	EAmmoState__EAmmoState_CriticallyLowAmmo = 3,
	EAmmoState__EAmmoState_NoAmmo  = 4,
	EAmmoState__EAmmoState_MAX     = 5,

};

// Enum KillstreakUINew.ERogueDetailsWidgetFocusGroups
enum class KillstreakUINew_ERogueDetailsWidgetFocusGroups : uint8_t
{
	ERogueDetailsWidgetFocusGroups__MAIN_TABS = 0,
	ERogueDetailsWidgetFocusGroups__CUSTOMIZE_PANEL = 1,
	ERogueDetailsWidgetFocusGroups__MASTERY_PANEL = 2,
	ERogueDetailsWidgetFocusGroups__ARMORY_PANEL = 3,
	ERogueDetailsWidgetFocusGroups__PRIMARY_SELECT_PANEL = 4,
	ERogueDetailsWidgetFocusGroups__ERogueDetailsWidgetFocusGroups_MAX = 5,

};

// Enum KillstreakUINew.EKSSettingType
enum class KillstreakUINew_EKSSettingType : uint8_t
{
	EKSSettingType__Bool           = 0,
	EKSSettingType__Int            = 1,
	EKSSettingType__Float          = 2,
	EKSSettingType__Key            = 3,
	EKSSettingType__Invalid        = 4,
	EKSSettingType__EKSSettingType_MAX = 5,

};

// Enum KillstreakUINew.EPUMG_ShopItemUpgradeSegmentType
enum class KillstreakUINew_EPUMG_ShopItemUpgradeSegmentType : uint8_t
{
	EPUMG_ShopItemUpgradeSegmentType__Single = 0,
	EPUMG_ShopItemUpgradeSegmentType__First = 1,
	EPUMG_ShopItemUpgradeSegmentType__Middle = 2,
	EPUMG_ShopItemUpgradeSegmentType__Last = 3,
	EPUMG_ShopItemUpgradeSegmentType__EPUMG_MAX = 4,

};

// Enum KillstreakUINew.EKSSocialFriendSection
enum class KillstreakUINew_EKSSocialFriendSection : uint8_t
{
	EKSSocialFriendSection__Invalid = 0,
	EKSSocialFriendSection__PartyMembers = 1,
	EKSSocialFriendSection__MatchTeamMembers = 2,
	EKSSocialFriendSection__PartyInvitations = 3,
	EKSSocialFriendSection__OnlineMctsFriends = 4,
	EKSSocialFriendSection__OnlinePortalFriends = 5,
	EKSSocialFriendSection__OfflineMctsFriends = 6,
	EKSSocialFriendSection__Blocked = 7,
	EKSSocialFriendSection__Pending = 8,
	EKSSocialFriendSection__MAX    = 9,

};

// Enum KillstreakUINew.EKSSocialPanelDisplayOption
enum class KillstreakUINew_EKSSocialPanelDisplayOption : uint8_t
{
	EKSSocialPanelDisplayOption__HideIfEmpty = 0,
	EKSSocialPanelDisplayOption__ShowIfEmpty = 1,
	EKSSocialPanelDisplayOption__EKSSocialPanelDisplayOption_MAX = 2,

};

// Enum KillstreakUINew.EStoreItemWidgetType
enum class KillstreakUINew_EStoreItemWidgetType : uint8_t
{
	ELargePanel                    = 0,
	ETallPanel                     = 1,
	ESmallPanel                    = 2,
	STORE_WIDGET_TYPE_MAX          = 3,
	EStoreItemWidgetType_MAX       = 4,

};

// Enum KillstreakUINew.ETargetMarkerViewState
enum class KillstreakUINew_ETargetMarkerViewState : uint8_t
{
	ETargetMarkerViewState__Hidden = 0,
	ETargetMarkerViewState__Showing = 1,
	ETargetMarkerViewState__Shown  = 2,
	ETargetMarkerViewState__HidingNeutral = 3,
	ETargetMarkerViewState__HidingActivated = 4,
	ETargetMarkerViewState__HidingFailed = 5,
	ETargetMarkerViewState__ETargetMarkerViewState_MAX = 6,

};

// Enum KillstreakUINew.EToastCategory
enum class KillstreakUINew_EToastCategory : uint8_t
{
	EToastCategory__ETOAST_INFO    = 0,
	EToastCategory__ETOAST_ERROR   = 1,
	EToastCategory__ETOAST_FRIEND  = 2,
	EToastCategory__ETOAST_PARTY   = 3,
	EToastCategory__ETOAST_CHALLENGE = 4,
	EToastCategory__ETOAST_MERC_MASTERY = 5,
	EToastCategory__ETOAST_ITEM_UNLOCK = 6,
	EToastCategory__ETOAST_AWARD   = 7,
	EToastCategory__ETOAST_BATTLEPASS_TIER = 8,
	EToastCategory__ETOAST_BOOST_ACTIVATION = 9,
	EToastCategory__ETOAST_PLAYER_LEVEL = 10,
	EToastCategory__ETOAST_EVENT_CHALLENGE = 11,
	EToastCategory__ETOAST_WEAPON_MASTERY = 12,
	EToastCategory__ETOAST_MAX     = 13,

};

// Enum KillstreakUINew.EReportPlayerReason
enum class KillstreakUINew_EReportPlayerReason : uint8_t
{
	EReportPlayerReason__Unknown_None = 0,
	EReportPlayerReason__Harassment = 1,
	EReportPlayerReason__Cheating  = 2,
	EReportPlayerReason__Teaming   = 3,
	EReportPlayerReason__IntentionalFeeding = 4,
	EReportPlayerReason__StreamSniping = 5,
	EReportPlayerReason__LeavingTheGame_AFK = 6,
	EReportPlayerReason__OtherReason = 7,
	EReportPlayerReason__AFK       = 8,
	EReportPlayerReason__EReportPlayerReason_MAX = 9,

};

// Enum KillstreakUINew.EExperimentalFeatureName
enum class KillstreakUINew_EExperimentalFeatureName : uint8_t
{
	EExperimentalFeatureName__Unknown_None = 0,
	EExperimentalFeatureName__HUD_Announcement_V2 = 1,
	EExperimentalFeatureName__WeaponShopRarity = 2,
	EExperimentalFeatureName__EOMMilestonesAnyProgress = 3,
	EExperimentalFeatureName__EExperimentalFeatureName_MAX = 4,

};

// Enum KillstreakUINew.EKSVendorTypes
enum class KillstreakUINew_EKSVendorTypes : uint8_t
{
	EKSVendorTypes__Unknown        = 0,
	EKSVendorTypes__Equipment      = 1,
	EKSVendorTypes__Specialty      = 2,
	EKSVendorTypes__SpecialtyItem  = 3,
	EKSVendorTypes__StarterSpecLoadout = 4,
	EKSVendorTypes__Apparel        = 5,
	EKSVendorTypes__StarterApparelLoadout = 6,
	EKSVendorTypes__MalwearApparelLoadout = 7,
	EKSVendorTypes__MercTwoApparelLoadout = 8,
	EKSVendorTypes__HitmanApparelLoadout = 9,
	EKSVendorTypes__EKSVendorTypes_MAX = 10,

};

// Enum KillstreakUINew.EDamageTargetType
enum class KillstreakUINew_EDamageTargetType : uint8_t
{
	EDamageTargetType__None        = 0,
	EDamageTargetType__Character   = 1,
	EDamageTargetType__Gadget      = 2,
	EDamageTargetType__EDamageTargetType_MAX = 3,

};

// Enum KillstreakUINew.EDamageModifier
enum class KillstreakUINew_EDamageModifier : uint8_t
{
	EDamageModifier__None          = 0,
	EDamageModifier__Reduced       = 1,
	EDamageModifier__Resisted      = 2,
	EDamageModifier__Shielded      = 3,
	EDamageModifier__EDamageModifier_MAX = 4,

};

// Enum KillstreakUINew.EDamageFlourishType
enum class KillstreakUINew_EDamageFlourishType : uint8_t
{
	EDamageFlourishType__None      = 0,
	EDamageFlourishType__Headshot  = 1,
	EDamageFlourishType__Lethal    = 2,
	EDamageFlourishType__EDamageFlourishType_MAX = 3,

};

// Enum KillstreakUINew.EDamageBaseType
enum class KillstreakUINew_EDamageBaseType : uint8_t
{
	EDamageBaseType__Normal        = 0,
	EDamageBaseType__Armored       = 1,
	EDamageBaseType__Lethal        = 2,
	EDamageBaseType__Special       = 3,
	EDamageBaseType__EDamageBaseType_MAX = 4,

};

// Enum KillstreakUINew.ERelatedRogueType
enum class KillstreakUINew_ERelatedRogueType : uint8_t
{
	ERelatedRogueType__UsesUnlocked = 0,
	ERelatedRogueType__UsesLocked  = 1,
	ERelatedRogueType__ERelatedRogueType_MAX = 2,

};

// Enum KillstreakUINew.ESubPanelAlignment
enum class KillstreakUINew_ESubPanelAlignment : uint8_t
{
	ESubPanelAlignment__ESubPanelAlignment_Horizontal = 0,
	ESubPanelAlignment__ESubPanelAlignment_VerticalLeft = 1,
	ESubPanelAlignment__ESubPanelAlignment_VerticalRight = 2,
	ESubPanelAlignment__ESubPanelAlignment_MAX = 3,

};

//---------------------------------------------------------------------------
// Script Structs
//---------------------------------------------------------------------------

// ScriptStruct KillstreakUINew.GuidedCalloutCardData
// 0x0058
struct FGuidedCalloutCardData
{
	struct FText                                       Header;                                                    // 0x0000(0x0018) (Edit, BlueprintVisible, DisableEditOnInstance, NativeAccessSpecifierPublic)
	struct FText                                       Description;                                               // 0x0018(0x0018) (Edit, BlueprintVisible, DisableEditOnInstance, NativeAccessSpecifierPublic)
	unsigned char                                      Image[0x28];                                               // 0x0030(0x0028) UNKNOWN PROPERTY: SoftObjectProperty

};

// ScriptStruct KillstreakUINew.ContextAction
// 0x0050 (0x0058 - 0x0008)
struct FContextAction : public FTableRowBase
{
	struct FText                                       Text;                                                      // 0x0008(0x0018) (Edit, BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic)
	struct FName                                       ActionName;                                                // 0x0020(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<TEnumAsByte<PlatformGameFramework_EPGAME_INPUT_STATE>> ValidInputTypes;                                           // 0x0028(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                SortOrder;                                                 // 0x0038(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	KillstreakUINew_EContextPromptAnchoring            Anchor;                                                    // 0x003C(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	KillstreakUINew_EContextPromptType                 PromptType;                                                // 0x003D(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_ZC7Z[0x2];                                     // 0x003E(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UClass*                                      PromptWidget;                                              // 0x0040(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              HoldDuration;                                              // 0x0048(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               IsHidden;                                                  // 0x004C(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_QMRM[0x3];                                     // 0x004D(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UAkAudioEvent*                               OverrideSFX;                                               // 0x0050(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct KillstreakUINew.RouteContextInfo
// 0x0010
struct FRouteContextInfo
{
	TArray<class UContextActionData*>                  ActionData;                                                // 0x0000(0x0010) (ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct KillstreakUINew.RogueCustomizationRelatedInfo
// 0x0030
struct FRogueCustomizationRelatedInfo
{
	int                                                SwitcherIndex;                                             // 0x0000(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	Killstreak_EMercCosmeticSlot                       CosmeticSlot;                                              // 0x0004(0x0001) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_JNGV[0x3];                                     // 0x0005(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UKSNavTabWidget*                             NavTab;                                                    // 0x0008(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UKSScrollBox*                                ScrollBox;                                                 // 0x0010(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UKSSortableGridPanel*                        SortableGridPanel;                                         // 0x0018(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<class UKSCosmeticItemSelectorWidget*>       CosmeticItemSelectors;                                     // 0x0020(0x0010) (BlueprintVisible, ExportObject, ZeroConstructor, ContainsInstancedReference, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct KillstreakUINew.DebugMenuCommandInfo
// 0x0018
struct FDebugMenuCommandInfo
{
	struct FString                                     CommandName;                                               // 0x0000(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	KillstreakUINew_EConsoleCommandParamType           ParamType;                                                 // 0x0010(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_LOJL[0x7];                                     // 0x0011(0x0007) MISSED OFFSET (PADDING)

};

// ScriptStruct KillstreakUINew.MapIconWidgetConfig
// 0x0048
struct FMapIconWidgetConfig
{
	Killstreak_EDisplayType                            MapDisplayType;                                            // 0x0000(0x0001) (ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_CQGA[0x7];                                     // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FString                                     WidgetPoolType;                                            // 0x0008(0x0010) (ZeroConstructor, Config, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                Count;                                                     // 0x0018(0x0004) (ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_9S5D[0x4];                                     // 0x001C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	unsigned char                                      MapIconWidget[0x28];                                       // 0x001C(0x0028) UNKNOWN PROPERTY: SoftClassProperty

};

// ScriptStruct KillstreakUINew.HudEditableData
// 0x0020
struct FHudEditableData
{
	struct FName                                       WidgetName;                                                // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector2D                                   AbsolutePosition;                                          // 0x0008(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bHasSetAbsolutePosition;                                   // 0x0010(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_PYSP[0x3];                                     // 0x0011(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	float                                              Scale;                                                     // 0x0014(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              Opacity;                                                   // 0x0018(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                bIsVisible;                                                // 0x001C(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct KillstreakUINew.LoginRewardItem
// 0x0010
struct FLoginRewardItem
{
	int                                                RewardDay;                                                 // 0x0000(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	KillstreakUINew_ERewardState                       RewardState;                                               // 0x0004(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_788Y[0x3];                                     // 0x0005(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UPUMG_StoreItem*                             RewardStoreItem;                                           // 0x0008(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct KillstreakUINew.RoundResultAnnoucement
// 0x0020
struct FRoundResultAnnoucement
{
	int                                                WinningTeamID;                                             // 0x0000(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_GUWQ[0x4];                                     // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FText                                       ResultText;                                                // 0x0008(0x0018) (BlueprintVisible, NativeAccessSpecifierPublic)

};

// ScriptStruct KillstreakUINew.KSMilestoneCompletedSummaryEntry
// 0x00A0
struct FKSMilestoneCompletedSummaryEntry
{
	class UKSWeaponAsset*                              WeaponAsset;                                               // 0x0000(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UKSActivityInstance*                         MilestoneInstance;                                         // 0x0008(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FRewardProgress                             MilestoneProgress;                                         // 0x0010(0x0090) (BlueprintVisible, NativeAccessSpecifierPublic)

};

// ScriptStruct KillstreakUINew.PlayerProgression
// 0x0170
struct FPlayerProgression
{
	TArray<struct FActivityTier>                       ProgressionTiers;                                          // 0x0000(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                StartingXPValue;                                           // 0x0010(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                EndingXPValue;                                             // 0x0014(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UKSActivity*                                 ActivityReference;                                         // 0x0018(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UKSActivityInstance*                         ActivityInstanceReference;                                 // 0x0020(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TMap<Killstreak_ERewardSource, float>              ProgressionBySource;                                       // 0x0028(0x0050) (BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic)
	TMap<struct FString, float>                        ProgressionByEvent;                                        // 0x0078(0x0050) (BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic)
	TMap<struct FString, float>                        ProgressionByBooster;                                      // 0x00C8(0x0050) (BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic)
	TMap<struct FString, float>                        ExtraData;                                                 // 0x0118(0x0050) (BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic)
	TEnumAsByte<KillstreakUINew_EEOMProgressionType>   ProgressionType;                                           // 0x0168(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_3AO5[0x7];                                     // 0x0169(0x0007) MISSED OFFSET (PADDING)

};

// ScriptStruct KillstreakUINew.MapDetail
// 0x0048
struct FMapDetail
{
	int                                                MapId;                                                     // 0x0000(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_YGLE[0x4];                                     // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FText                                       mapName;                                                   // 0x0008(0x0018) (BlueprintVisible, NativeAccessSpecifierPublic)
	unsigned char                                      MapThumbnail[0x28];                                        // 0x0020(0x0028) UNKNOWN PROPERTY: SoftObjectProperty

};

// ScriptStruct KillstreakUINew.UIMapInfo
// 0x0050 (0x0058 - 0x0008)
struct FUIMapInfo : public FTableRowBase
{
	TArray<int>                                        MapIds;                                                    // 0x0008(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FText                                       DisplayName;                                               // 0x0018(0x0018) (Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	unsigned char                                      MapThumbnail[0x28];                                        // 0x0030(0x0028) UNKNOWN PROPERTY: SoftObjectProperty

};

// ScriptStruct KillstreakUINew.ClientQueueInfo
// 0x0078 (0x00C8 - 0x0050)
struct FClientQueueInfo : public FPUMG_ClientQueueInfo
{
	unsigned char                                      ItemIcon[0x28];                                            // 0x0050(0x0028) UNKNOWN PROPERTY: SoftObjectProperty
	KillstreakUINew_EQueueType                         QueueType;                                                 // 0x0078(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_YGUC[0x7];                                     // 0x0079(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	TArray<struct FUIMapInfo>                          MapRotationInfos;                                          // 0x0080(0x0010) (BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<struct FMapDetail>                          MapList;                                                   // 0x0090(0x0010) (BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                MaxPlayerPerSide;                                          // 0x00A0(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                SortOrder;                                                 // 0x00A4(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                ShelteredMMQueueId;                                        // 0x00A8(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              ShelteredMMLevelLimit;                                     // 0x00AC(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              ShelteredMMAttemptTimeout;                                 // 0x00B0(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                ForcedBotMatchQueueId;                                     // 0x00B4(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_Y64Q[0x4];                                     // 0x00B8(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	int                                                MercyMatchQueueId;                                         // 0x00BC(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_HT1B[0x4];                                     // 0x00C0(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	bool                                               UsesDeserterPenalty;                                       // 0x00C4(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_Q9GC[0x3];                                     // 0x00C5(0x0003) MISSED OFFSET (PADDING)

};

// ScriptStruct KillstreakUINew.ColorOptions
// 0x0028
struct FColorOptions
{
	struct FText                                       OptionName;                                                // 0x0000(0x0018) (Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, NativeAccessSpecifierPublic)
	struct FLinearColor                                OptionColor;                                               // 0x0018(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct KillstreakUINew.KSAllowedPlatformTypes
// 0x000A
struct FKSAllowedPlatformTypes
{
	bool                                               XboxOne;                                                   // 0x0000(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               PS4;                                                       // 0x0001(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               Switch;                                                    // 0x0002(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               Windows;                                                   // 0x0003(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               Mac;                                                       // 0x0004(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               Linux;                                                     // 0x0005(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               IOS;                                                       // 0x0006(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               Android;                                                   // 0x0007(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               XSX;                                                       // 0x0008(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               PS5;                                                       // 0x0009(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct KillstreakUINew.KSRequiredInputTypes
// 0x0003
struct FKSRequiredInputTypes
{
	bool                                               Gamepad;                                                   // 0x0000(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               Mouse;                                                     // 0x0001(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               Touch;                                                     // 0x0002(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct KillstreakUINew.KSSwitchDockedModeSetting
// 0x0002
struct FKSSwitchDockedModeSetting
{
	bool                                               ShowDocked;                                                // 0x0000(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               ShowHandheld;                                              // 0x0001(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct KillstreakUINew.KSSettingsWidgetConfig
// 0x0010
struct FKSSettingsWidgetConfig
{
	class UClass*                                      WidgetClass;                                               // 0x0000(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UClass*                                      SettingInfo;                                               // 0x0008(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct KillstreakUINew.KSSettingsGroupConfig
// 0x0018
struct FKSSettingsGroupConfig
{
	class UKSSettingsContainerConfigAsset*             MainSettingContainerAsset;                                 // 0x0000(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<class UKSSettingsContainerConfigAsset*>     SubSettingContainerAssets;                                 // 0x0008(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct KillstreakUINew.KSSettingPropertyId
// 0x000C
struct FKSSettingPropertyId
{
	struct FName                                       Name;                                                      // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                ID;                                                        // 0x0008(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct KillstreakUINew.KSKeyBindInfo
// 0x0010
struct FKSKeyBindInfo
{
	struct FName                                       Name;                                                      // 0x0000(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              Scale;                                                     // 0x0008(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	Killstreak_EKSInputType                            InputType;                                                 // 0x000C(0x0001) (Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	Killstreak_EKSKeyBindType                          KeyBindType;                                               // 0x000D(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               IsPermanentBinding;                                        // 0x000E(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_1JKB[0x1];                                     // 0x000F(0x0001) MISSED OFFSET (PADDING)

};

// ScriptStruct KillstreakUINew.ToastData
// 0x0058
struct FToastData
{
	KillstreakUINew_EToastCategory                     ToastCategory;                                             // 0x0000(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_QYVX[0x7];                                     // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FText                                       Title;                                                     // 0x0008(0x0018) (BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic)
	struct FText                                       Message;                                                   // 0x0020(0x0018) (BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic)
	class UPUMG_StoreItem*                             Reward;                                                    // 0x0038(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UPlatformInventoryItem*                      OptionalItemValue;                                         // 0x0040(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                OptionalIntValue;                                          // 0x0048(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_SSO7[0x4];                                     // 0x004C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UKSActivity*                                 OptionalActivityValue;                                     // 0x0050(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct KillstreakUINew.SpecialDamageColors
// 0x0030
struct FSpecialDamageColors
{
	struct FLinearColor                                FontColor;                                                 // 0x0000(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FLinearColor                                StrokeColor;                                               // 0x0010(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FLinearColor                                GlowColor;                                                 // 0x0020(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct KillstreakUINew.PlayerInventorySlot
// 0x0018
struct FPlayerInventorySlot
{
	int                                                SlotIndex;                                                 // 0x0000(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_3TVO[0x4];                                     // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UKSWeaponAsset*                              WeaponAsset;                                               // 0x0008(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FGameplayTag                                SlotEquipPoint;                                            // 0x0010(0x0008) (BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct KillstreakUINew.KSWeaponMasteryLevelUpSummaryEntry
// 0x0048
struct FKSWeaponMasteryLevelUpSummaryEntry
{
	class UPrimaryDataAsset*                           MasteryAsset;                                              // 0x0000(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FActivityTier                               MasteryTier;                                               // 0x0008(0x0040) (BlueprintVisible, NativeAccessSpecifierPublic)

};

// ScriptStruct KillstreakUINew.SubPanel
// 0x0030
struct FSubPanel
{
	struct FText                                       Header;                                                    // 0x0000(0x0018) (BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic)
	struct FText                                       Desc;                                                      // 0x0018(0x0018) (BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic)

};

// ScriptStruct KillstreakUINew.TickAnimationParams
// 0x002C
struct FTickAnimationParams
{
	float                                              Duration;                                                  // 0x0000(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FScriptDelegate                             UpdateEvent;                                               // 0x0004(0x0010) (ZeroConstructor, InstancedReference, NoDestructor, NativeAccessSpecifierPublic)
	struct FScriptDelegate                             FinishedEvent;                                             // 0x0014(0x0010) (ZeroConstructor, InstancedReference, NoDestructor, NativeAccessSpecifierPublic)
	bool                                               IsPlaying;                                                 // 0x0024(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_ZBKW[0x3];                                     // 0x0025(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	float                                              ElapsedTime;                                               // 0x0028(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct KillstreakUINew.CustomLoadoutItem
// 0x0010
struct FCustomLoadoutItem
{
	class UKSItem*                                     Item;                                                      // 0x0000(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	KillstreakUINew_ESpecialtyItemType                 SpecialtyItemType;                                         // 0x0008(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_KOLB[0x3];                                     // 0x0009(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	int                                                LoadoutClassItemId;                                        // 0x000C(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct KillstreakUINew.EliminationMessage
// 0x0030
struct FEliminationMessage
{
	class AKSPlayerState*                              Victim;                                                    // 0x0000(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class AKSPlayerState*                              Instigator;                                                // 0x0008(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FText                                       Message;                                                   // 0x0010(0x0018) (BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic)
	int                                                DamageDealt;                                               // 0x0028(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	KillstreakUINew_ECombatEventType                   EventType;                                                 // 0x002C(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               ViewedPlayerAssisted;                                      // 0x002D(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_2SOI[0x2];                                     // 0x002E(0x0002) MISSED OFFSET (PADDING)

};

// ScriptStruct KillstreakUINew.GuidedCalloutSceneData
// 0x0038 (0x0040 - 0x0008)
struct FGuidedCalloutSceneData : public FTableRowBase
{
	KillstreakUINew_EConfigPropertyGuidedCalloutScenes SceneIndex;                                                // 0x0008(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_AIMU[0x3];                                     // 0x0009(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FName                                       AssociatedViewRoute;                                       // 0x000C(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_QFTY[0x4];                                     // 0x0014(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FText                                       HeaderText;                                                // 0x0018(0x0018) (Edit, BlueprintVisible, DisableEditOnInstance, NativeAccessSpecifierPublic)
	TArray<struct FGuidedCalloutCardData>              CalloutCards;                                              // 0x0030(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct KillstreakUINew.AcquisitionHeaderOverrides
// 0x0028 (0x0030 - 0x0008)
struct FAcquisitionHeaderOverrides : public FTableRowBase
{
	struct FText                                       Header;                                                    // 0x0008(0x0018) (Edit, BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic)
	TArray<int>                                        LootTableItemIds;                                          // 0x0020(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct KillstreakUINew.MatchDetail
// 0x0038
struct FMatchDetail
{
	unsigned char                                      UnknownData_578U[0x38];                                    // 0x0000(0x0038) MISSED OFFSET (PADDING)

};

// ScriptStruct KillstreakUINew.ExpDisplayInfo
// 0x0028
struct FExpDisplayInfo
{
	int                                                EventDelta;                                                // 0x0000(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_ZSP0[0x4];                                     // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FText                                       EventReason;                                               // 0x0008(0x0018) (BlueprintVisible, NativeAccessSpecifierPublic)
	bool                                               bIsBonus;                                                  // 0x0020(0x0001) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_WCWM[0x7];                                     // 0x0021(0x0007) MISSED OFFSET (PADDING)

};

// ScriptStruct KillstreakUINew.ButtonPromptData
// 0x0030
struct FButtonPromptData
{
	struct FKey                                        Key;                                                       // 0x0000(0x0018) (BlueprintVisible, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FText                                       Text;                                                      // 0x0018(0x0018) (BlueprintVisible, NativeAccessSpecifierPublic)

};

// ScriptStruct KillstreakUINew.ButtonPromptContext
// 0x0010
struct FButtonPromptContext
{
	TArray<struct FButtonPromptData>                   PromptInfo;                                                // 0x0000(0x0010) (BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct KillstreakUINew.FontPaletteInfo
// 0x0050 (0x0058 - 0x0008)
struct FFontPaletteInfo : public FTableRowBase
{
	struct FSlateFontInfo                              FontInfo;                                                  // 0x0008(0x0050) (Edit, BlueprintVisible, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct KillstreakUINew.ColorPaletteInfo
// 0x0010 (0x0018 - 0x0008)
struct FColorPaletteInfo : public FTableRowBase
{
	struct FLinearColor                                LinearColor;                                               // 0x0008(0x0010) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct KillstreakUINew.MapIconOptions
// 0x0018
struct FMapIconOptions
{
	struct FVector                                     MarkerWorldPosition;                                       // 0x0000(0x000C) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              AnchorHeight;                                              // 0x000C(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector2D                                   ScreenMargin;                                              // 0x0010(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct KillstreakUINew.KSMediaPlayerWidgetPlaylistEntry
// 0x0090 (0x0098 - 0x0008)
struct FKSMediaPlayerWidgetPlaylistEntry : public FTableRowBase
{
	bool                                               bIsSkippable;                                              // 0x0008(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_U85S[0x3];                                     // 0x0009(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	float                                              SkippableAfter;                                            // 0x000C(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bForceFirstWatch;                                          // 0x0010(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bOnlyWatchOnce;                                            // 0x0011(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint16_t                                           MajorVersion;                                              // 0x0012(0x0002) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_XP37[0x4];                                     // 0x0014(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	unsigned char                                      PlatformMediaSource[0x28];                                 // 0x0014(0x0028) UNKNOWN PROPERTY: SoftObjectProperty
	unsigned char                                      PlayEvent[0x28];                                           // 0x0040(0x0028) UNKNOWN PROPERTY: SoftObjectProperty
	unsigned char                                      StopEvent[0x28];                                           // 0x0068(0x0028) UNKNOWN PROPERTY: SoftObjectProperty
	struct FName                                       LocalActionName;                                           // 0x0090(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct KillstreakUINew.OverlayTabViewRow
// 0x0028 (0x0030 - 0x0008)
struct FOverlayTabViewRow : public FTableRowBase
{
	struct FText                                       TabName;                                                   // 0x0008(0x0018) (Edit, BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic)
	class UClass*                                      ViewWidget;                                                // 0x0020(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UClass*                                      TabValidator;                                              // 0x0028(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct KillstreakUINew.KSPerkTreeEdgeInfo
// 0x0002
struct FKSPerkTreeEdgeInfo
{
	KillstreakUINew_EPerkTreeEdgeType                  EdgeType;                                                  // 0x0000(0x0001) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	KillstreakUINew_EPerkTreeEdgeState                 EdgeState;                                                 // 0x0001(0x0001) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct KillstreakUINew.PlayerAwardsPanelData
// 0x0010
struct FPlayerAwardsPanelData
{
	class UKSActivityInstance*                         ActivityInstance;                                          // 0x0000(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                ProgressTierOverride;                                      // 0x0008(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               RecentlyUpdated;                                           // 0x000C(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_6AF9[0x3];                                     // 0x000D(0x0003) MISSED OFFSET (PADDING)

};

// ScriptStruct KillstreakUINew.KSPendingProfiles
// 0x0028
struct FKSPendingProfiles
{
	TArray<class UKSPlayerInfo*>                       PendingPlayers;                                            // 0x0000(0x0010) (ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_ED69[0x18];                                    // 0x0010(0x0018) MISSED OFFSET (PADDING)

};

// ScriptStruct KillstreakUINew.KSPlayerQueryHandle
// 0x0010
struct FKSPlayerQueryHandle
{
	class UKSPlayerQueryDataFactory*                   Owner;                                                     // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_QKIH[0x8];                                     // 0x0008(0x0008) MISSED OFFSET (PADDING)

};

// ScriptStruct KillstreakUINew.KSPointObjectiveMarkerViewState
// 0x0004
struct FKSPointObjectiveMarkerViewState
{
	Killstreak_EKSObjectiveState                       ObjectiveState;                                            // 0x0000(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	Killstreak_EKSPOIState                             POIState;                                                  // 0x0001(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	KillstreakUINew_EPointObjectiveMarkerTeamState     TeamState;                                                 // 0x0002(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               IsBombDeployed;                                            // 0x0003(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct KillstreakUINew.ProgressionTallyMiscXPInfo
// 0x0020
struct FProgressionTallyMiscXPInfo
{
	struct FText                                       TallyDisplayFormat;                                        // 0x0000(0x0018) (BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic)
	bool                                               ShouldDisplay;                                             // 0x0018(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_UI0K[0x7];                                     // 0x0019(0x0007) MISSED OFFSET (PADDING)

};

// ScriptStruct KillstreakUINew.QueueSection
// 0x0018
struct FQueueSection
{
	KillstreakUINew_EQueueType                         QueueSectionType;                                          // 0x0000(0x0001) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_RUQV[0x7];                                     // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	TArray<struct FClientQueueInfo>                    AssociatedQueues;                                          // 0x0008(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct KillstreakUINew.QueueDetail
// 0x0040 (0x0048 - 0x0008)
struct FQueueDetail : public FTableRowBase
{
	int                                                QueueId;                                                   // 0x0008(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_W1S4[0x4];                                     // 0x000C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FText                                       QueueName;                                                 // 0x0010(0x0018) (Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	struct FText                                       QueueDescription;                                          // 0x0028(0x0018) (Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	int                                                SortOrder;                                                 // 0x0040(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_F8WU[0x4];                                     // 0x0044(0x0004) MISSED OFFSET (PADDING)

};

// ScriptStruct KillstreakUINew.MasterySectionData
// 0x0018
struct FMasterySectionData
{
	TArray<struct FActivityTier>                       ActivityTiers;                                             // 0x0000(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              ProgressPercentage;                                        // 0x0010(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_5XCP[0x4];                                     // 0x0014(0x0004) MISSED OFFSET (PADDING)

};

// ScriptStruct KillstreakUINew.MasteryRewardData
// 0x0010
struct FMasteryRewardData
{
	class UPUMG_StoreItem*                             StoreItem;                                                 // 0x0000(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                BadgeTier;                                                 // 0x0008(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_SQMN[0x4];                                     // 0x000C(0x0004) MISSED OFFSET (PADDING)

};

// ScriptStruct KillstreakUINew.KSKeyGroup
// 0x001C
struct FKSKeyGroup
{
	unsigned char                                      UnknownData_4K8N[0x1C];                                    // 0x0000(0x001C) MISSED OFFSET (PADDING)

};

// ScriptStruct KillstreakUINew.KSKeyBind
// 0x0078
struct FKSKeyBind
{
	struct FKey                                        Primary;                                                   // 0x0000(0x0018) (Edit, BlueprintVisible, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	Killstreak_EKSInputActionType                      PrimaryInputActionType;                                    // 0x0018(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_QATH[0x7];                                     // 0x0019(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FKey                                        Secondary;                                                 // 0x0020(0x0018) (Edit, BlueprintVisible, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	Killstreak_EKSInputActionType                      SecondaryInputActionType;                                  // 0x0038(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_HCOJ[0x7];                                     // 0x0039(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FKey                                        Gamepad;                                                   // 0x0040(0x0018) (Edit, BlueprintVisible, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FKey                                        Combo;                                                     // 0x0058(0x0018) (Edit, BlueprintVisible, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	Killstreak_EKSInputActionType                      GamepadInputActionType;                                    // 0x0070(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_V0LW[0x7];                                     // 0x0071(0x0007) MISSED OFFSET (PADDING)

};

// ScriptStruct KillstreakUINew.KSSocialPanelSectionDef
// 0x0003
struct FKSSocialPanelSectionDef
{
	unsigned char                                      UnknownData_B057[0x3];                                     // 0x0000(0x0003) MISSED OFFSET (PADDING)

};

// ScriptStruct KillstreakUINew.SpecialtyData
// 0x0048
struct FSpecialtyData
{
	class UKSSpecialty*                                Specialty;                                                 // 0x0000(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FCustomLoadoutItem                          Killstreak;                                                // 0x0008(0x0010) (BlueprintVisible, BlueprintReadOnly, NoDestructor, NativeAccessSpecifierPublic)
	struct FCustomLoadoutItem                          SecondaryAbility;                                          // 0x0018(0x0010) (BlueprintVisible, BlueprintReadOnly, NoDestructor, NativeAccessSpecifierPublic)
	struct FCustomLoadoutItem                          PassiveAbility;                                            // 0x0028(0x0010) (BlueprintVisible, BlueprintReadOnly, NoDestructor, NativeAccessSpecifierPublic)
	TArray<int>                                        AssociatedLoadoutItemIds;                                  // 0x0038(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct KillstreakUINew.SpecialtyCustomLoadout
// 0x01A0
struct FSpecialtyCustomLoadout
{
	unsigned char                                      UnknownData_ER5Q[0x8];                                     // 0x0000(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	int                                                LoadoutClassItemId;                                        // 0x0008(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                LoadoutBundleItemId;                                       // 0x000C(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FSpecialtyData                              SpecialtyOne;                                              // 0x0010(0x0048) (BlueprintVisible, NativeAccessSpecifierPublic)
	struct FSpecialtyData                              SpecialtyTwo;                                              // 0x0058(0x0048) (BlueprintVisible, NativeAccessSpecifierPublic)
	struct FCustomLoadoutItem                          PerkOne;                                                   // 0x00A0(0x0010) (BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic)
	struct FCustomLoadoutItem                          PerkTwo;                                                   // 0x00B0(0x0010) (BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic)
	struct FCustomLoadoutItem                          PerkThree;                                                 // 0x00C0(0x0010) (BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic)
	struct FCustomLoadoutItem                          PerkFour;                                                  // 0x00D0(0x0010) (BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic)
	struct FCustomLoadoutItem                          PassiveOne;                                                // 0x00E0(0x0010) (BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic)
	struct FCustomLoadoutItem                          PassiveTwo;                                                // 0x00F0(0x0010) (BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic)
	struct FCustomLoadoutItem                          KillstreakOne;                                             // 0x0100(0x0010) (BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic)
	struct FCustomLoadoutItem                          KillstreakTwo;                                             // 0x0110(0x0010) (BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic)
	struct FCustomLoadoutItem                          SecondaryAbilityOne;                                       // 0x0120(0x0010) (BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic)
	struct FCustomLoadoutItem                          SecondaryAbilityTwo;                                       // 0x0130(0x0010) (BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic)
	struct FCustomLoadoutItem                          GadgetOne;                                                 // 0x0140(0x0010) (BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic)
	struct FCustomLoadoutItem                          Pistol;                                                    // 0x0150(0x0010) (BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic)
	struct FCustomLoadoutItem                          PistolAttachmentOne;                                       // 0x0160(0x0010) (BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic)
	struct FCustomLoadoutItem                          PistolAttachmentTwo;                                       // 0x0170(0x0010) (BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic)
	struct FCustomLoadoutItem                          PistolAttachmentThree;                                     // 0x0180(0x0010) (BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic)
	struct FCustomLoadoutItem                          PrimaryWeapon;                                             // 0x0190(0x0010) (BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic)

};

// ScriptStruct KillstreakUINew.ReportPlayerParams
// 0x0050
struct FReportPlayerParams
{
	int64_t                                            PlayerId;                                                  // 0x0000(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FSerializedMatchId                          MatchID;                                                   // 0x0008(0x0010) (HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                LocalPlayerTeamId;                                         // 0x0018(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                ReportedPlayerTeamId;                                      // 0x001C(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                TotalPlayerCount;                                          // 0x0020(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               FromBackfillEnabledGame;                                   // 0x0024(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_JHYQ[0x3];                                     // 0x0025(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FString                                     PlayerName;                                                // 0x0028(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	KillstreakUINew_EReportPlayerReason                Reason;                                                    // 0x0038(0x0001) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_C23G[0x7];                                     // 0x0039(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FString                                     ReportComment;                                             // 0x0040(0x0010) (BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct KillstreakUINew.WeaponCategoryDetails
// 0x00F0 (0x00F8 - 0x0008)
struct FWeaponCategoryDetails : public FTableRowBase
{
	struct FGameplayTag                                CategoryTag;                                               // 0x0008(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FText                                       DisplayName;                                               // 0x0010(0x0018) (Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, NativeAccessSpecifierPublic)
	struct FText                                       DisplayNameSingular;                                       // 0x0028(0x0018) (Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, NativeAccessSpecifierPublic)
	struct FText                                       DisplayNameCategory;                                       // 0x0040(0x0018) (Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, NativeAccessSpecifierPublic)
	unsigned char                                      SoftSymbolIcon[0x28];                                      // 0x0058(0x0028) UNKNOWN PROPERTY: SoftObjectProperty
	unsigned char                                      SoftMasteryIcon[0x28];                                     // 0x0080(0x0028) UNKNOWN PROPERTY: SoftObjectProperty
	unsigned char                                      SoftVerticalSplash[0x28];                                  // 0x00A8(0x0028) UNKNOWN PROPERTY: SoftObjectProperty
	unsigned char                                      SoftHorizontalSplash[0x28];                                // 0x00D0(0x0028) UNKNOWN PROPERTY: SoftObjectProperty

};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
