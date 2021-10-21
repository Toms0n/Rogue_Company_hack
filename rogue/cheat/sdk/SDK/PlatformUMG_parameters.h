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

// Function PlatformUMG.PUMG_AsyncImage.ShowWaitingWidget
struct UPUMG_AsyncImage_ShowWaitingWidget_Params
{
};

// Function PlatformUMG.PUMG_AsyncImage.HideWaitingWidget
struct UPUMG_AsyncImage_HideWaitingWidget_Params
{
};

// Function PlatformUMG.PUMG_BlueprintFunctionLibrary.IsWithEditor
struct UPUMG_BlueprintFunctionLibrary_IsWithEditor_Params
{
	bool                                               ReturnValue;                                               // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function PlatformUMG.PUMG_BlueprintFunctionLibrary.GetUMG_DPI_Scaling
struct UPUMG_BlueprintFunctionLibrary_GetUMG_DPI_Scaling_Params
{
	float                                              ReturnValue;                                               // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function PlatformUMG.PUMG_BlueprintFunctionLibrary.GetKeyName
struct UPUMG_BlueprintFunctionLibrary_GetKeyName_Params
{
	struct FKey                                        Key;                                                       // 0x0000(0x0018)  (Parm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FName                                       ReturnValue;                                               // 0x0018(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function PlatformUMG.PUMG_BlueprintFunctionLibrary.GetGamepadConfirmButton
struct UPUMG_BlueprintFunctionLibrary_GetGamepadConfirmButton_Params
{
	struct FKey                                        ReturnValue;                                               // 0x0000(0x0018)  (Parm, OutParm, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function PlatformUMG.PUMG_BlueprintFunctionLibrary.GetGamepadCancelButton
struct UPUMG_BlueprintFunctionLibrary_GetGamepadCancelButton_Params
{
	struct FKey                                        ReturnValue;                                               // 0x0000(0x0018)  (Parm, OutParm, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function PlatformUMG.PUMG_BlueprintFunctionLibrary.GetGamepadButtonForAction
struct UPUMG_BlueprintFunctionLibrary_GetGamepadButtonForAction_Params
{
	struct FName                                       Action;                                                    // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FKey                                        Button;                                                    // 0x0008(0x0018)  (Parm, OutParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               ReturnValue;                                               // 0x0020(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function PlatformUMG.PUMG_BlueprintFunctionLibrary.GetButtonForActionMappingUsingWidget
struct UPUMG_BlueprintFunctionLibrary_GetButtonForActionMappingUsingWidget_Params
{
	class UWidget*                                     InWidget;                                                  // 0x0000(0x0008)  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FName                                       Action;                                                    // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FKey                                        Button;                                                    // 0x0010(0x0018)  (Parm, OutParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               ReturnValue;                                               // 0x0028(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function PlatformUMG.PUMG_BlueprintFunctionLibrary.GetButtonForActionMapping
struct UPUMG_BlueprintFunctionLibrary_GetButtonForActionMapping_Params
{
	struct FName                                       Action;                                                    // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FKey                                        Button;                                                    // 0x0008(0x0018)  (Parm, OutParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               IsGamepadKey;                                              // 0x0020(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               ReturnValue;                                               // 0x0021(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function PlatformUMG.PUMG_BlueprintFunctionLibrary.GetAllButtonsForActionMappingUsingWidget
struct UPUMG_BlueprintFunctionLibrary_GetAllButtonsForActionMappingUsingWidget_Params
{
	class UWidget*                                     InWidget;                                                  // 0x0000(0x0008)  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FName                                       Action;                                                    // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<struct FKey>                                Buttons;                                                   // 0x0010(0x0010)  (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               ReturnValue;                                               // 0x0020(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function PlatformUMG.PUMG_BlueprintFunctionLibrary.GetAllButtonsForActionMapping
struct UPUMG_BlueprintFunctionLibrary_GetAllButtonsForActionMapping_Params
{
	struct FName                                       Action;                                                    // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<struct FKey>                                Buttons;                                                   // 0x0008(0x0010)  (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               IsGamepadKey;                                              // 0x0018(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               ReturnValue;                                               // 0x0019(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function PlatformUMG.PUMG_CanvasPanel.PlaceWidgetUnder
struct UPUMG_CanvasPanel_PlaceWidgetUnder_Params
{
	class UUserWidget*                                 BottomWidget;                                              // 0x0000(0x0008)  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UUserWidget*                                 TopWidget;                                                 // 0x0008(0x0008)  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function PlatformUMG.PUMG_DataFactory.IsLoggedIn
struct UPUMG_DataFactory_IsLoggedIn_Params
{
	bool                                               ReturnValue;                                               // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function PlatformUMG.PUMG_ChatDataFactory.SetMaxMessageCount
struct UPUMG_ChatDataFactory_SetMaxMessageCount_Params
{
	int                                                MaxMessageCount;                                           // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function PlatformUMG.PUMG_ChatDataFactory.SendChatToPlayer
struct UPUMG_ChatDataFactory_SendChatToPlayer_Params
{
	struct FString                                     Message;                                                   // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int64_t                                            TargetPlayerId;                                            // 0x0010(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function PlatformUMG.PUMG_ChatDataFactory.SendChatToChannel
struct UPUMG_ChatDataFactory_SendChatToChannel_Params
{
	struct FString                                     Message;                                                   // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	PlatformUMG_EPUMG_ChatChannel                      Channel;                                                   // 0x0010(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function PlatformUMG.PUMG_ChatDataFactory.RemovePlayerFilter
struct UPUMG_ChatDataFactory_RemovePlayerFilter_Params
{
	int64_t                                            PlayerId;                                                  // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               ReturnValue;                                               // 0x0008(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function PlatformUMG.PUMG_ChatDataFactory.RemoveChatCommand
struct UPUMG_ChatDataFactory_RemoveChatCommand_Params
{
	struct FString                                     Command;                                                   // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               ReturnValue;                                               // 0x0010(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function PlatformUMG.PUMG_ChatDataFactory.RemoveAllChatCommands
struct UPUMG_ChatDataFactory_RemoveAllChatCommands_Params
{
	class UObject*                                     Target;                                                    // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               ReturnValue;                                               // 0x0008(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function PlatformUMG.PUMG_ChatDataFactory.QueueCheckPendingMessages
struct UPUMG_ChatDataFactory_QueueCheckPendingMessages_Params
{
};

// Function PlatformUMG.PUMG_ChatDataFactory.MarkMessageAsRead
struct UPUMG_ChatDataFactory_MarkMessageAsRead_Params
{
	int                                                MessageId;                                                 // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function PlatformUMG.PUMG_ChatDataFactory.ListChatCommands
struct UPUMG_ChatDataFactory_ListChatCommands_Params
{
};

// Function PlatformUMG.PUMG_ChatDataFactory.IsValidMessage
struct UPUMG_ChatDataFactory_IsValidMessage_Params
{
	struct FPUMG_ChatData                              Message;                                                   // 0x0000(0x0040)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	bool                                               ReturnValue;                                               // 0x0040(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function PlatformUMG.PUMG_ChatDataFactory.IsPlayerFilteredFromChat
struct UPUMG_ChatDataFactory_IsPlayerFilteredFromChat_Params
{
	int64_t                                            PlayerId;                                                  // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               ReturnValue;                                               // 0x0008(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function PlatformUMG.PUMG_ChatDataFactory.HandleCommunicationSettingChanged
struct UPUMG_ChatDataFactory_HandleCommunicationSettingChanged_Params
{
};

// Function PlatformUMG.PUMG_ChatDataFactory.GetMessage
struct UPUMG_ChatDataFactory_GetMessage_Params
{
	int                                                MessageId;                                                 // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FPUMG_ChatData                              ReturnValue;                                               // 0x0008(0x0040)  (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
};

// Function PlatformUMG.PUMG_ChatDataFactory.GetMaxMessageCount
struct UPUMG_ChatDataFactory_GetMaxMessageCount_Params
{
	int                                                ReturnValue;                                               // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function PlatformUMG.PUMG_ChatDataFactory.GetChatPrivilegeStatus
struct UPUMG_ChatDataFactory_GetChatPrivilegeStatus_Params
{
	PlatformCommon_EPCOM_PrivilegeStatus               ReturnValue;                                               // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function PlatformUMG.PUMG_ChatDataFactory.GetActiveChatChannels
struct UPUMG_ChatDataFactory_GetActiveChatChannels_Params
{
	bool                                               IncludePersonalChannel;                                    // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<struct FPUMG_ActiveChatChannelData>         ActiveChatChatChannels;                                    // 0x0008(0x0010)  (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function PlatformUMG.PUMG_ChatDataFactory.FindChatCommandIndex
struct UPUMG_ChatDataFactory_FindChatCommandIndex_Params
{
	struct FString                                     Command;                                                   // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                ReturnValue;                                               // 0x0010(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function PlatformUMG.PUMG_ChatDataFactory.ExecuteChatCommandLine
struct UPUMG_ChatDataFactory_ExecuteChatCommandLine_Params
{
	struct FString                                     CommandLine;                                               // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               ReturnValue;                                               // 0x0010(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function PlatformUMG.PUMG_ChatDataFactory.CheckPendingMessages
struct UPUMG_ChatDataFactory_CheckPendingMessages_Params
{
};

// Function PlatformUMG.PUMG_ChatDataFactory.BeginProcessingChatMessage
struct UPUMG_ChatDataFactory_BeginProcessingChatMessage_Params
{
	struct FPUMG_ChatData                              Message;                                                   // 0x0000(0x0040)  (Parm, OutParm, NativeAccessSpecifierPublic)
};

// Function PlatformUMG.PUMG_ChatDataFactory.AddSystemMessage
struct UPUMG_ChatDataFactory_AddSystemMessage_Params
{
	struct FText                                       Message;                                                   // 0x0000(0x0018)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
};

// Function PlatformUMG.PUMG_ChatDataFactory.AddPlayerFilter
struct UPUMG_ChatDataFactory_AddPlayerFilter_Params
{
	int64_t                                            PlayerId;                                                  // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               ReturnValue;                                               // 0x0008(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function PlatformUMG.PUMG_ChatDataFactory.AddGameMessage
struct UPUMG_ChatDataFactory_AddGameMessage_Params
{
	struct FText                                       Message;                                                   // 0x0000(0x0018)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	PlatformUMG_EPUMG_ChatChannel                      Channel;                                                   // 0x0018(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function PlatformUMG.PUMG_ChatDataFactory.AddChatCommand
struct UPUMG_ChatDataFactory_AddChatCommand_Params
{
	struct FString                                     Command;                                                   // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FText                                       Desc;                                                      // 0x0010(0x0018)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	class UObject*                                     Target;                                                    // 0x0028(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     Function;                                                  // 0x0030(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     Alias1;                                                    // 0x0040(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     Alias2;                                                    // 0x0050(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     Alias3;                                                    // 0x0060(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     Alias4;                                                    // 0x0070(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               ReturnValue;                                               // 0x0080(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function PlatformUMG.PUMG_FriendDataFactory.UIX_OnRemoveFriend
struct UPUMG_FriendDataFactory_UIX_OnRemoveFriend_Params
{
	int64_t                                            PlayerId;                                                  // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function PlatformUMG.PUMG_FriendDataFactory.UIX_OnRejectFriendRequest
struct UPUMG_FriendDataFactory_UIX_OnRejectFriendRequest_Params
{
	int64_t                                            PlayerId;                                                  // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function PlatformUMG.PUMG_FriendDataFactory.UIX_OnCancelFriendRequest
struct UPUMG_FriendDataFactory_UIX_OnCancelFriendRequest_Params
{
	int64_t                                            PlayerId;                                                  // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function PlatformUMG.PUMG_FriendDataFactory.UIX_OnAddFriend
struct UPUMG_FriendDataFactory_UIX_OnAddFriend_Params
{
	class UPUMG_PlayerInfo*                            playerinfo;                                                // 0x0000(0x0008)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function PlatformUMG.PUMG_FriendDataFactory.UIX_OnAcceptFriendRequest
struct UPUMG_FriendDataFactory_UIX_OnAcceptFriendRequest_Params
{
	int64_t                                            PlayerId;                                                  // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function PlatformUMG.PUMG_FriendDataFactory.SetEnableFriendsListUpdatePolling
struct UPUMG_FriendDataFactory_SetEnableFriendsListUpdatePolling_Params
{
	bool                                               InBool;                                                    // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function PlatformUMG.PUMG_FriendDataFactory.RequestUpdateFriendsList
struct UPUMG_FriendDataFactory_RequestUpdateFriendsList_Params
{
};

// Function PlatformUMG.PUMG_FriendDataFactory.IsCrossplaySocialEnabled
struct UPUMG_FriendDataFactory_IsCrossplaySocialEnabled_Params
{
	bool                                               ReturnValue;                                               // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function PlatformUMG.PUMG_FriendDataFactory.HandleFriendsListUpdatePolling
struct UPUMG_FriendDataFactory_HandleFriendsListUpdatePolling_Params
{
};

// Function PlatformUMG.PUMG_FriendDataFactory.HandleCrossplaySettingChanged
struct UPUMG_FriendDataFactory_HandleCrossplaySettingChanged_Params
{
};

// Function PlatformUMG.PUMG_FriendDataFactory.GetPendingFriends
struct UPUMG_FriendDataFactory_GetPendingFriends_Params
{
	TArray<struct FPUMG_FriendData>                    ReturnValue;                                               // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function PlatformUMG.PUMG_FriendDataFactory.GetFriends
struct UPUMG_FriendDataFactory_GetFriends_Params
{
	TArray<struct FPUMG_FriendData>                    ReturnValue;                                               // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function PlatformUMG.PUMG_FriendDataFactory.GetFriendRequests
struct UPUMG_FriendDataFactory_GetFriendRequests_Params
{
	TArray<struct FPUMG_FriendData>                    ReturnValue;                                               // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function PlatformUMG.PUMG_FriendDataFactory.GetFriendName
struct UPUMG_FriendDataFactory_GetFriendName_Params
{
	int64_t                                            PlayerId;                                                  // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FText                                       ReturnValue;                                               // 0x0008(0x0018)  (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
};

// Function PlatformUMG.PUMG_FriendDataFactory.GetFriendAvatarTexture
struct UPUMG_FriendDataFactory_GetFriendAvatarTexture_Params
{
	struct FPUMG_FriendData                            Friend;                                                    // 0x0000(0x0028)  (Parm, NativeAccessSpecifierPublic)
};

// Function PlatformUMG.PUMG_FriendDataFactory.GetEnableFriendsListUpdatePolling
struct UPUMG_FriendDataFactory_GetEnableFriendsListUpdatePolling_Params
{
	bool                                               ReturnValue;                                               // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function PlatformUMG.PUMG_FriendDataFactory.FriendRemoveResponse
struct UPUMG_FriendDataFactory_FriendRemoveResponse_Params
{
};

// Function PlatformUMG.PUMG_FriendDataFactory.CheckAlreadyFriends
struct UPUMG_FriendDataFactory_CheckAlreadyFriends_Params
{
	struct FString                                     FriendName;                                                // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               ReturnValue;                                               // 0x0010(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function PlatformUMG.GamepadPromptInterface.UnregisterOnClear
struct UGamepadPromptInterface_UnregisterOnClear_Params
{
	bool                                               ReturnValue;                                               // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function PlatformUMG.GamepadPromptInterface.SetPrompt
struct UGamepadPromptInterface_SetPrompt_Params
{
	struct FText                                       PromptText;                                                // 0x0000(0x0018)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
};

// Function PlatformUMG.GamepadPromptInterface.ClearPrompt
struct UGamepadPromptInterface_ClearPrompt_Params
{
};

// Function PlatformUMG.PUMG_GamepadDataFactory.UnregisterPromptForButton
struct UPUMG_GamepadDataFactory_UnregisterPromptForButton_Params
{
	struct FKey                                        Button;                                                    // 0x0000(0x0018)  (Parm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               ReturnValue;                                               // 0x0018(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function PlatformUMG.PUMG_GamepadDataFactory.SetPromptForGamepadButton
struct UPUMG_GamepadDataFactory_SetPromptForGamepadButton_Params
{
	struct FKey                                        Button;                                                    // 0x0000(0x0018)  (Parm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FText                                       PromptText;                                                // 0x0018(0x0018)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
};

// Function PlatformUMG.PUMG_GamepadDataFactory.RemovePromptForGamepadButton
struct UPUMG_GamepadDataFactory_RemovePromptForGamepadButton_Params
{
	struct FKey                                        Button;                                                    // 0x0000(0x0018)  (Parm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function PlatformUMG.PUMG_GamepadDataFactory.RegisterPromptWidgetForButton
struct UPUMG_GamepadDataFactory_RegisterPromptWidgetForButton_Params
{
	class UWidget*                                     Widget;                                                    // 0x0000(0x0008)  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FKey                                        Button;                                                    // 0x0008(0x0018)  (Parm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               ReturnValue;                                               // 0x0020(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function PlatformUMG.PUMG_GamepadDataFactory.ClearAllGamepadPrompts
struct UPUMG_GamepadDataFactory_ClearAllGamepadPrompts_Params
{
};

// Function PlatformUMG.PUMG_HUD.TestHirezLogin
struct APUMG_HUD_TestHirezLogin_Params
{
	struct FString                                     User;                                                      // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     password;                                                  // 0x0010(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function PlatformUMG.PUMG_HUD.TestAutoLogin
struct APUMG_HUD_TestAutoLogin_Params
{
	int                                                ControllerId;                                              // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function PlatformUMG.PUMG_HUD.ShowSystemTrayNotification
struct APUMG_HUD_ShowSystemTrayNotification_Params
{
	struct FString                                     popupType;                                                 // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function PlatformUMG.PUMG_HUD.SetUseNewUIFeatures
struct APUMG_HUD_SetUseNewUIFeatures_Params
{
	bool                                               UseNewFeatures;                                            // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function PlatformUMG.PUMG_HUD.SetUIFocus
struct APUMG_HUD_SetUIFocus_Params
{
};

// Function PlatformUMG.PUMG_HUD.SetNavigationEnabled
struct APUMG_HUD_SetNavigationEnabled_Params
{
	bool                                               Enabled;                                                   // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function PlatformUMG.PUMG_HUD.OnQuit
struct APUMG_HUD_OnQuit_Params
{
};

// Function PlatformUMG.PUMG_HUD.OnNavigateBack
struct APUMG_HUD_OnNavigateBack_Params
{
	bool                                               ReturnValue;                                               // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function PlatformUMG.PUMG_HUD.OnConfirmQuit
struct APUMG_HUD_OnConfirmQuit_Params
{
};

// Function PlatformUMG.PUMG_HUD.NewPlayerInfo
struct APUMG_HUD_NewPlayerInfo_Params
{
	class UPUMG_PlayerInfo*                            ReturnValue;                                               // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function PlatformUMG.PUMG_HUD.IsLobbyHUD
struct APUMG_HUD_IsLobbyHUD_Params
{
	bool                                               ReturnValue;                                               // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function PlatformUMG.PUMG_HUD.IsCrossplayEnabled
struct APUMG_HUD_IsCrossplayEnabled_Params
{
	bool                                               ReturnValue;                                               // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function PlatformUMG.PUMG_HUD.InputStateChangePassthrough
struct APUMG_HUD_InputStateChangePassthrough_Params
{
	TEnumAsByte<PlatformGameFramework_EPGAME_INPUT_STATE> InputState;                                                // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function PlatformUMG.PUMG_HUD.gmmf
struct APUMG_HUD_gmmf_Params
{
	bool                                               bAutolaunch;                                               // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function PlatformUMG.PUMG_HUD.GetViewManager
struct APUMG_HUD_GetViewManager_Params
{
	class UPUMG_ViewManager*                           ReturnValue;                                               // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function PlatformUMG.PUMG_HUD.GetPortalTokenDetails
struct APUMG_HUD_GetPortalTokenDetails_Params
{
};

// Function PlatformUMG.PUMG_HUD.GetPopupManager
struct APUMG_HUD_GetPopupManager_Params
{
	class UPUMG_PopupManager*                          ReturnValue;                                               // 0x0000(0x0008)  (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function PlatformUMG.PUMG_HUD.GetPlayerControllerOwner
struct APUMG_HUD_GetPlayerControllerOwner_Params
{
	class APlayerController*                           ReturnValue;                                               // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function PlatformUMG.PUMG_HUD.GetOrCreatePlayerInfo
struct APUMG_HUD_GetOrCreatePlayerInfo_Params
{
	int64_t                                            PlayerId;                                                  // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UPUMG_PlayerInfo*                            ReturnValue;                                               // 0x0008(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function PlatformUMG.PUMG_HUD.GetInputManager
struct APUMG_HUD_GetInputManager_Params
{
	class UPUMG_InputManager*                          ReturnValue;                                               // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function PlatformUMG.PUMG_HUD.GetCurrentInputState
struct APUMG_HUD_GetCurrentInputState_Params
{
	TEnumAsByte<PlatformGameFramework_EPGAME_INPUT_STATE> ReturnValue;                                               // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function PlatformUMG.PUMG_HUD.DisplayGenericPopup
struct APUMG_HUD_DisplayGenericPopup_Params
{
	struct FString                                     sTitle;                                                    // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     sDesc;                                                     // 0x0010(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function PlatformUMG.PUMG_HUD.DisplayGenericError
struct APUMG_HUD_DisplayGenericError_Params
{
	struct FString                                     sDesc;                                                     // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function PlatformUMG.PUMG_InputManager.HandleModeChange
struct UPUMG_InputManager_HandleModeChange_Params
{
	TEnumAsByte<PlatformGameFramework_EPGAME_INPUT_STATE> Mode;                                                      // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function PlatformUMG.PUMG_InputManager.GetFocusedWidget
struct UPUMG_InputManager_GetFocusedWidget_Params
{
	class UPUMG_Widget*                                ParentWidget;                                              // 0x0000(0x0008)  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UWidget*                                     FocusWidget;                                               // 0x0008(0x0008)  (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               ReturnValue;                                               // 0x0010(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function PlatformUMG.PUMG_InputManager.ClearNavInputThrottled
struct UPUMG_InputManager_ClearNavInputThrottled_Params
{
};

// Function PlatformUMG.PUMG_InputManager.ClearNavInputDebouncedThrottled
struct UPUMG_InputManager_ClearNavInputDebouncedThrottled_Params
{
};

// Function PlatformUMG.PUMG_JsonDataFactory.HandleJsonReady
struct UPUMG_JsonDataFactory_HandleJsonReady_Params
{
	class UPGame_LandingPanelJSONHandler*              pHandler;                                                  // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function PlatformUMG.PUMG_JsonDataFactory.HandleImagesReady
struct UPUMG_JsonDataFactory_HandleImagesReady_Params
{
	class UPGame_LandingPanelJSONHandler*              pHandler;                                                  // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function PlatformUMG.PUMG_LoginDataFactory.UpdateControllers
struct UPUMG_LoginDataFactory_UpdateControllers_Params
{
	bool                                               ReturnValue;                                               // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function PlatformUMG.PUMG_LoginDataFactory.UIX_TriggerAutoLogin
struct UPUMG_LoginDataFactory_UIX_TriggerAutoLogin_Params
{
};

// Function PlatformUMG.PUMG_LoginDataFactory.UIX_OnTwoFactorSubmit
struct UPUMG_LoginDataFactory_UIX_OnTwoFactorSubmit_Params
{
	struct FString                                     AuthCode;                                                  // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function PlatformUMG.PUMG_LoginDataFactory.UIX_OnTwoFactorDecline
struct UPUMG_LoginDataFactory_UIX_OnTwoFactorDecline_Params
{
};

// Function PlatformUMG.PUMG_LoginDataFactory.UIX_OnSubmitLogin
struct UPUMG_LoginDataFactory_UIX_OnSubmitLogin_Params
{
	struct FString                                     UserName;                                                  // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     password;                                                  // 0x0010(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function PlatformUMG.PUMG_LoginDataFactory.UIX_OnSubmitConsoleLogin
struct UPUMG_LoginDataFactory_UIX_OnSubmitConsoleLogin_Params
{
	int                                                ControllerId;                                              // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function PlatformUMG.PUMG_LoginDataFactory.UIX_OnSubmitAutoLogin
struct UPUMG_LoginDataFactory_UIX_OnSubmitAutoLogin_Params
{
	int                                                ControllerId;                                              // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function PlatformUMG.PUMG_LoginDataFactory.UIX_OnPlayerCreate
struct UPUMG_LoginDataFactory_UIX_OnPlayerCreate_Params
{
	struct FString                                     PlayerName;                                                // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function PlatformUMG.PUMG_LoginDataFactory.UIX_OnLinkExistingAccount
struct UPUMG_LoginDataFactory_UIX_OnLinkExistingAccount_Params
{
	struct FString                                     UserName;                                                  // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     password;                                                  // 0x0010(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function PlatformUMG.PUMG_LoginDataFactory.UIX_OnLinkDecline
struct UPUMG_LoginDataFactory_UIX_OnLinkDecline_Params
{
};

// Function PlatformUMG.PUMG_LoginDataFactory.UIX_OnLinkCreateAccount
struct UPUMG_LoginDataFactory_UIX_OnLinkCreateAccount_Params
{
	struct FString                                     UserName;                                                  // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     password;                                                  // 0x0010(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     Email;                                                     // 0x0020(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bAcceptAgeReqs;                                            // 0x0030(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function PlatformUMG.PUMG_LoginDataFactory.UIX_OnEulaDecline
struct UPUMG_LoginDataFactory_UIX_OnEulaDecline_Params
{
};

// Function PlatformUMG.PUMG_LoginDataFactory.UIX_OnEulaAccept
struct UPUMG_LoginDataFactory_UIX_OnEulaAccept_Params
{
};

// Function PlatformUMG.PUMG_LoginDataFactory.UIX_OnChangeUserAccount
struct UPUMG_LoginDataFactory_UIX_OnChangeUserAccount_Params
{
};

// Function PlatformUMG.PUMG_LoginDataFactory.UIX_OnCancelLogin
struct UPUMG_LoginDataFactory_UIX_OnCancelLogin_Params
{
};

// Function PlatformUMG.PUMG_LoginDataFactory.UIX_OnAccountCreate
struct UPUMG_LoginDataFactory_UIX_OnAccountCreate_Params
{
	struct FString                                     UserName;                                                  // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     password;                                                  // 0x0010(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     Email;                                                     // 0x0020(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bAcceptAgeReqs;                                            // 0x0030(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function PlatformUMG.PUMG_LoginDataFactory.TriggerAutoLogin
struct UPUMG_LoginDataFactory_TriggerAutoLogin_Params
{
};

// Function PlatformUMG.PUMG_LoginDataFactory.ShouldDisplayUsername
struct UPUMG_LoginDataFactory_ShouldDisplayUsername_Params
{
	bool                                               ReturnValue;                                               // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function PlatformUMG.PUMG_LoginDataFactory.ShouldDisplayDisconnectError
struct UPUMG_LoginDataFactory_ShouldDisplayDisconnectError_Params
{
	bool                                               ReturnValue;                                               // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function PlatformUMG.PUMG_LoginDataFactory.SetUserErrorDataTable
struct UPUMG_LoginDataFactory_SetUserErrorDataTable_Params
{
	class UDataTable*                                  ErrorMsgTable;                                             // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function PlatformUMG.PUMG_LoginDataFactory.RecordLoginState
struct UPUMG_LoginDataFactory_RecordLoginState_Params
{
	PlatformUMG_EPUMG_LoginState                       NewState;                                                  // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function PlatformUMG.PUMG_LoginDataFactory.LoginEvent_ShowAgreements
struct UPUMG_LoginDataFactory_LoginEvent_ShowAgreements_Params
{
	bool                                               bNeedsEULA;                                                // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bNeedsTOS;                                                 // 0x0001(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bNeedsPP;                                                  // 0x0002(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function PlatformUMG.PUMG_LoginDataFactory.LoginEvent_Queued
struct UPUMG_LoginDataFactory_LoginEvent_Queued_Params
{
	uint32_t                                           QueuePosition;                                             // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint32_t                                           QueueSize;                                                 // 0x0004(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint32_t                                           queueEstimatedWait;                                        // 0x0008(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function PlatformUMG.PUMG_LoginDataFactory.LoginEvent_LoginRequested
struct UPUMG_LoginDataFactory_LoginEvent_LoginRequested_Params
{
};

// Function PlatformUMG.PUMG_LoginDataFactory.LoginEvent_LoggedIn
struct UPUMG_LoginDataFactory_LoginEvent_LoggedIn_Params
{
};

// Function PlatformUMG.PUMG_LoginDataFactory.LoginEvent_FailedClient
struct UPUMG_LoginDataFactory_LoginEvent_FailedClient_Params
{
	struct FText                                       ErrorMsg;                                                  // 0x0000(0x0018)  (Parm, NativeAccessSpecifierPublic)
};

// Function PlatformUMG.PUMG_LoginDataFactory.LoginEvent_Failed
struct UPUMG_LoginDataFactory_LoginEvent_Failed_Params
{
	uint32_t                                           ErrorMsgId;                                                // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function PlatformUMG.PUMG_LoginDataFactory.LoadEULAFile
struct UPUMG_LoginDataFactory_LoadEULAFile_Params
{
	struct FString                                     SaveText;                                                  // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               ReturnValue;                                               // 0x0010(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function PlatformUMG.PUMG_LoginDataFactory.HandleControllerPairingChange
struct UPUMG_LoginDataFactory_HandleControllerPairingChange_Params
{
	int                                                ControllerIndex;                                           // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                NewUserId;                                                 // 0x0004(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                OldUserId;                                                 // 0x0008(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function PlatformUMG.PUMG_LoginDataFactory.HandleControllerConnectionChange
struct UPUMG_LoginDataFactory_HandleControllerConnectionChange_Params
{
	bool                                               IsConnection;                                              // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                UserId;                                                    // 0x0004(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                ControllerIndex;                                           // 0x0008(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function PlatformUMG.PUMG_LoginDataFactory.GetVersion
struct UPUMG_LoginDataFactory_GetVersion_Params
{
	struct FString                                     ReturnValue;                                               // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function PlatformUMG.PUMG_LoginDataFactory.GetLastDisconnectReason
struct UPUMG_LoginDataFactory_GetLastDisconnectReason_Params
{
	struct FText                                       ErrorMsg;                                                  // 0x0000(0x0018)  (Parm, OutParm, NativeAccessSpecifierPublic)
	bool                                               ReturnValue;                                               // 0x0018(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function PlatformUMG.PUMG_LoginDataFactory.GetCurrentPlayerName
struct UPUMG_LoginDataFactory_GetCurrentPlayerName_Params
{
	struct FText                                       NameText;                                                  // 0x0000(0x0018)  (Parm, OutParm, NativeAccessSpecifierPublic)
	bool                                               ReturnValue;                                               // 0x0018(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function PlatformUMG.PUMG_LoginDataFactory.GetCurrentLoginState
struct UPUMG_LoginDataFactory_GetCurrentLoginState_Params
{
	PlatformUMG_EPUMG_LoginState                       ReturnValue;                                               // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function PlatformUMG.PUMG_PartyDataFactory.UIX_PromoteMemberToLeader
struct UPUMG_PartyDataFactory_UIX_PromoteMemberToLeader_Params
{
	int64_t                                            PlayerId;                                                  // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function PlatformUMG.PUMG_PartyDataFactory.UIX_LeaveParty
struct UPUMG_PartyDataFactory_UIX_LeaveParty_Params
{
};

// Function PlatformUMG.PUMG_PartyDataFactory.UIX_KickMemberFromParty
struct UPUMG_PartyDataFactory_UIX_KickMemberFromParty_Params
{
	int64_t                                            PlayerId;                                                  // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function PlatformUMG.PUMG_PartyDataFactory.UIX_InviteMemberToParty
struct UPUMG_PartyDataFactory_UIX_InviteMemberToParty_Params
{
	int64_t                                            PlayerId;                                                  // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               ReturnValue;                                               // 0x0008(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function PlatformUMG.PUMG_PartyDataFactory.UIX_GiveInvitePermission
struct UPUMG_PartyDataFactory_UIX_GiveInvitePermission_Params
{
	int64_t                                            PlayerId;                                                  // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function PlatformUMG.PUMG_PartyDataFactory.UIX_DisbandParty
struct UPUMG_PartyDataFactory_UIX_DisbandParty_Params
{
};

// Function PlatformUMG.PUMG_PartyDataFactory.UIX_DenyPartyInvitation
struct UPUMG_PartyDataFactory_UIX_DenyPartyInvitation_Params
{
};

// Function PlatformUMG.PUMG_PartyDataFactory.UIX_AcceptPartyInvitation
struct UPUMG_PartyDataFactory_UIX_AcceptPartyInvitation_Params
{
};

// Function PlatformUMG.PUMG_PartyDataFactory.SetPartyInfo
struct UPUMG_PartyDataFactory_SetPartyInfo_Params
{
	struct FString                                     Key;                                                       // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     Value;                                                     // 0x0010(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function PlatformUMG.PUMG_PartyDataFactory.SendPartyMessage
struct UPUMG_PartyDataFactory_SendPartyMessage_Params
{
	struct FString                                     Data;                                                      // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function PlatformUMG.PUMG_PartyDataFactory.PartyPromoteResponse
struct UPUMG_PartyDataFactory_PartyPromoteResponse_Params
{
};

// Function PlatformUMG.PUMG_PartyDataFactory.PartyLeaveResponse
struct UPUMG_PartyDataFactory_PartyLeaveResponse_Params
{
};

// Function PlatformUMG.PUMG_PartyDataFactory.PartyKickResponse
struct UPUMG_PartyDataFactory_PartyKickResponse_Params
{
};

// Function PlatformUMG.PUMG_PartyDataFactory.IsPlayerInParty
struct UPUMG_PartyDataFactory_IsPlayerInParty_Params
{
	int64_t                                            PlayerId;                                                  // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               ReturnValue;                                               // 0x0008(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function PlatformUMG.PUMG_PartyDataFactory.IsPartyMaxed
struct UPUMG_PartyDataFactory_IsPartyMaxed_Params
{
	bool                                               ReturnValue;                                               // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function PlatformUMG.PUMG_PartyDataFactory.IsLeader
struct UPUMG_PartyDataFactory_IsLeader_Params
{
	bool                                               ReturnValue;                                               // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function PlatformUMG.PUMG_PartyDataFactory.IsInParty
struct UPUMG_PartyDataFactory_IsInParty_Params
{
	bool                                               ReturnValue;                                               // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function PlatformUMG.PUMG_PartyDataFactory.HasInvitePrivileges
struct UPUMG_PartyDataFactory_HasInvitePrivileges_Params
{
	int64_t                                            PlayerId;                                                  // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               ReturnValue;                                               // 0x0008(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function PlatformUMG.PUMG_PartyDataFactory.GetQueueId
struct UPUMG_PartyDataFactory_GetQueueId_Params
{
	int                                                ReturnValue;                                               // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function PlatformUMG.PUMG_PartyDataFactory.GetPartyMemeberName
struct UPUMG_PartyDataFactory_GetPartyMemeberName_Params
{
	int64_t                                            PlayerId;                                                  // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FText                                       ReturnValue;                                               // 0x0008(0x0018)  (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
};

// Function PlatformUMG.PUMG_PartyDataFactory.GetPartyMembers
struct UPUMG_PartyDataFactory_GetPartyMembers_Params
{
	TArray<struct FPUMG_PartyMemberData>               ReturnValue;                                               // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function PlatformUMG.PUMG_PartyDataFactory.GetPartyMemberCount
struct UPUMG_PartyDataFactory_GetPartyMemberCount_Params
{
	int                                                ReturnValue;                                               // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function PlatformUMG.PUMG_PartyDataFactory.GetPartyMemberByID
struct UPUMG_PartyDataFactory_GetPartyMemberByID_Params
{
	int64_t                                            PlayerId;                                                  // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FPUMG_PartyMemberData                       ReturnValue;                                               // 0x0008(0x0030)  (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
};

// Function PlatformUMG.PUMG_PartyDataFactory.GetPartyInviter
struct UPUMG_PartyDataFactory_GetPartyInviter_Params
{
	class UPUMG_PlayerInfo*                            ReturnValue;                                               // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function PlatformUMG.PUMG_PartyDataFactory.GetPartyInviteMode
struct UPUMG_PartyDataFactory_GetPartyInviteMode_Params
{
	PlatformUMG_EPUMG_PartyInviteRightsMode            ReturnValue;                                               // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function PlatformUMG.PUMG_PartyDataFactory.GetPartyInfo
struct UPUMG_PartyDataFactory_GetPartyInfo_Params
{
	struct FString                                     Key;                                                       // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     ReturnValue;                                               // 0x0010(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function PlatformUMG.PUMG_PartyDataFactory.GetMaxPartyMembers
struct UPUMG_PartyDataFactory_GetMaxPartyMembers_Params
{
	int                                                ReturnValue;                                               // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function PlatformUMG.PUMG_PartyDataFactory.CheckPartyMemberIsLeader
struct UPUMG_PartyDataFactory_CheckPartyMemberIsLeader_Params
{
	int64_t                                            PlayerId;                                                  // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               ReturnValue;                                               // 0x0008(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function PlatformUMG.PUMG_PlayerDataFactory.OnSelectAvatar
struct UPUMG_PlayerDataFactory_OnSelectAvatar_Params
{
	int                                                ItemId;                                                    // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function PlatformUMG.PUMG_PlayerDataFactory.GetAvatarIcon
struct UPUMG_PlayerDataFactory_GetAvatarIcon_Params
{
};

// Function PlatformUMG.PUMG_PlayerInfo.SetIgnored
struct UPUMG_PlayerInfo_SetIgnored_Params
{
	bool                                               Ignored;                                                   // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function PlatformUMG.PUMG_PlayerInfo.IsIgnored
struct UPUMG_PlayerInfo_IsIgnored_Params
{
	bool                                               ReturnValue;                                               // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function PlatformUMG.PUMG_PlayerInfo.GetPlayerId
struct UPUMG_PlayerInfo_GetPlayerId_Params
{
	int64_t                                            ReturnValue;                                               // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function PlatformUMG.PUMG_PlayerInfo.GetName
struct UPUMG_PlayerInfo_GetName_Params
{
	struct FText                                       ReturnValue;                                               // 0x0000(0x0018)  (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
};

// Function PlatformUMG.PUMG_PlayerInfo.GetMctsName
struct UPUMG_PlayerInfo_GetMctsName_Params
{
	struct FString                                     ReturnValue;                                               // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function PlatformUMG.PUMG_PlayerInfo.GetAvatarItemId
struct UPUMG_PlayerInfo_GetAvatarItemId_Params
{
	int                                                ReturnValue;                                               // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function PlatformUMG.PUMG_PlayerWhoDataFactory.UIX_SearchByNameForPlayer
struct UPUMG_PlayerWhoDataFactory_UIX_SearchByNameForPlayer_Params
{
	struct FString                                     PlayerName;                                                // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bIncludeOfflinePlayers;                                    // 0x0010(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function PlatformUMG.PUMG_PlayerWhoDataFactory.GetSearchByNameResults
struct UPUMG_PlayerWhoDataFactory_GetSearchByNameResults_Params
{
	TArray<class UPUMG_PlayerInfo*>                    ReturnValue;                                               // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function PlatformUMG.PUMG_Widget.UpdateRegistrationToInputManager
struct UPUMG_Widget_UpdateRegistrationToInputManager_Params
{
	class UWidget*                                     Widget;                                                    // 0x0000(0x0008)  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                FocusGroup;                                                // 0x0008(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UWidget*                                     Up;                                                        // 0x0010(0x0008)  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UWidget*                                     Down;                                                      // 0x0018(0x0008)  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UWidget*                                     Left;                                                      // 0x0020(0x0008)  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UWidget*                                     Right;                                                     // 0x0028(0x0008)  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function PlatformUMG.PUMG_Widget.UnregisterWidgetFromInputManager
struct UPUMG_Widget_UnregisterWidgetFromInputManager_Params
{
	class UWidget*                                     Widget;                                                    // 0x0000(0x0008)  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function PlatformUMG.PUMG_Widget.UnregisterFocusGroup
struct UPUMG_Widget_UnregisterFocusGroup_Params
{
	int                                                FocusGroup;                                                // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function PlatformUMG.PUMG_Widget.UninitializeWidget
struct UPUMG_Widget_UninitializeWidget_Params
{
};

// Function PlatformUMG.PUMG_Widget.ToggleMobileLayout
struct UPUMG_Widget_ToggleMobileLayout_Params
{
	TEnumAsByte<PlatformGameFramework_EPGAME_INPUT_STATE> InputState;                                                // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function PlatformUMG.PUMG_Widget.SwapViewRoute
struct UPUMG_Widget_SwapViewRoute_Params
{
	struct FName                                       RouteName;                                                 // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FName                                       SwapTargetRoute;                                           // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               ForceTransition;                                           // 0x0010(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               ReturnValue;                                               // 0x0011(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function PlatformUMG.PUMG_Widget.StartShowSequence
struct UPUMG_Widget_StartShowSequence_Params
{
	struct FName                                       FromRoute;                                                 // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FName                                       ToRoute;                                                   // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function PlatformUMG.PUMG_Widget.StartHideSequence
struct UPUMG_Widget_StartHideSequence_Params
{
	struct FName                                       FromRoute;                                                 // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FName                                       ToRoute;                                                   // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function PlatformUMG.PUMG_Widget.ShowWidget
struct UPUMG_Widget_ShowWidget_Params
{
};

// Function PlatformUMG.PUMG_Widget.SetPendingRouteData
struct UPUMG_Widget_SetPendingRouteData_Params
{
	struct FName                                       RouteName;                                                 // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UObject*                                     Data;                                                      // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function PlatformUMG.PUMG_Widget.SetFocusToWidgetOfGroup
struct UPUMG_Widget_SetFocusToWidgetOfGroup_Params
{
	int                                                FocusGroup;                                                // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UPUMG_Widget*                                Widget;                                                    // 0x0008(0x0008)  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function PlatformUMG.PUMG_Widget.SetFocusToThis
struct UPUMG_Widget_SetFocusToThis_Params
{
	class UWidget*                                     ReturnValue;                                               // 0x0000(0x0008)  (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function PlatformUMG.PUMG_Widget.SetFocusToGroup
struct UPUMG_Widget_SetFocusToGroup_Params
{
	int                                                FocusGroup;                                                // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               KeepLastFocus;                                             // 0x0004(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function PlatformUMG.PUMG_Widget.SetDefaultFocusForGroup
struct UPUMG_Widget_SetDefaultFocusForGroup_Params
{
	class UWidget*                                     Widget;                                                    // 0x0000(0x0008)  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                FocusGroup;                                                // 0x0008(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function PlatformUMG.PUMG_Widget.RemoveViewRoute
struct UPUMG_Widget_RemoveViewRoute_Params
{
	struct FName                                       RouteName;                                                 // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               ForceTransition;                                           // 0x0008(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               ReturnValue;                                               // 0x0009(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function PlatformUMG.PUMG_Widget.RemoveTopViewRoute
struct UPUMG_Widget_RemoveTopViewRoute_Params
{
	bool                                               ForceTransition;                                           // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               ReturnValue;                                               // 0x0001(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function PlatformUMG.PUMG_Widget.RegisterWidgetToInputManager
struct UPUMG_Widget_RegisterWidgetToInputManager_Params
{
	class UWidget*                                     Widget;                                                    // 0x0000(0x0008)  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                FocusGroup;                                                // 0x0008(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UWidget*                                     Up;                                                        // 0x0010(0x0008)  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UWidget*                                     Down;                                                      // 0x0018(0x0008)  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UWidget*                                     Left;                                                      // 0x0020(0x0008)  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UWidget*                                     Right;                                                     // 0x0028(0x0008)  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function PlatformUMG.PUMG_Widget.OnShown
struct UPUMG_Widget_OnShown_Params
{
};

// Function PlatformUMG.PUMG_Widget.OnHide
struct UPUMG_Widget_OnHide_Params
{
};

// Function PlatformUMG.PUMG_Widget.OnGamepadUnhover
struct UPUMG_Widget_OnGamepadUnhover_Params
{
};

// Function PlatformUMG.PUMG_Widget.OnGamepadHover
struct UPUMG_Widget_OnGamepadHover_Params
{
};

// Function PlatformUMG.PUMG_Widget.OnExitMobileLayout
struct UPUMG_Widget_OnExitMobileLayout_Params
{
};

// Function PlatformUMG.PUMG_Widget.OnEnterMobileLayout
struct UPUMG_Widget_OnEnterMobileLayout_Params
{
};

// Function PlatformUMG.PUMG_Widget.NavigateUpFailure
struct UPUMG_Widget_NavigateUpFailure_Params
{
};

// Function PlatformUMG.PUMG_Widget.NavigateRightFailure
struct UPUMG_Widget_NavigateRightFailure_Params
{
};

// Function PlatformUMG.PUMG_Widget.NavigateLeftFailure
struct UPUMG_Widget_NavigateLeftFailure_Params
{
};

// Function PlatformUMG.PUMG_Widget.NavigateDownFailure
struct UPUMG_Widget_NavigateDownFailure_Params
{
};

// Function PlatformUMG.PUMG_Widget.NavigateConfirmPressed
struct UPUMG_Widget_NavigateConfirmPressed_Params
{
	bool                                               ReturnValue;                                               // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function PlatformUMG.PUMG_Widget.NavigateConfirmCancelled
struct UPUMG_Widget_NavigateConfirmCancelled_Params
{
};

// Function PlatformUMG.PUMG_Widget.NavigateConfirm
struct UPUMG_Widget_NavigateConfirm_Params
{
	bool                                               ReturnValue;                                               // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function PlatformUMG.PUMG_Widget.NavigateBackPressed
struct UPUMG_Widget_NavigateBackPressed_Params
{
	bool                                               ReturnValue;                                               // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function PlatformUMG.PUMG_Widget.NavigateBackCancelled
struct UPUMG_Widget_NavigateBackCancelled_Params
{
};

// Function PlatformUMG.PUMG_Widget.NavigateBack
struct UPUMG_Widget_NavigateBack_Params
{
	bool                                               ReturnValue;                                               // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function PlatformUMG.PUMG_Widget.IsTopViewRoute
struct UPUMG_Widget_IsTopViewRoute_Params
{
	bool                                               ReturnValue;                                               // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function PlatformUMG.PUMG_Widget.IsFocusEnabled
struct UPUMG_Widget_IsFocusEnabled_Params
{
	bool                                               ReturnValue;                                               // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function PlatformUMG.PUMG_Widget.InitializeWidgetNavigation
struct UPUMG_Widget_InitializeWidgetNavigation_Params
{
};

// Function PlatformUMG.PUMG_Widget.InitializeWidgetButtonListeners
struct UPUMG_Widget_InitializeWidgetButtonListeners_Params
{
};

// Function PlatformUMG.PUMG_Widget.InitializeWidget
struct UPUMG_Widget_InitializeWidget_Params
{
	class APUMG_HUD*                                   HUD;                                                       // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function PlatformUMG.PUMG_Widget.InheritFocusGroupFromWidget
struct UPUMG_Widget_InheritFocusGroupFromWidget_Params
{
	int                                                TargetFocusGroupNum;                                       // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UPUMG_Widget*                                SourceWidget;                                              // 0x0008(0x0008)  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                SourceFocusGroupNum;                                       // 0x0010(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function PlatformUMG.PUMG_Widget.HideWidget
struct UPUMG_Widget_HideWidget_Params
{
};

// Function PlatformUMG.PUMG_Widget.GetViewManager
struct UPUMG_Widget_GetViewManager_Params
{
	class UPUMG_ViewManager*                           ReturnValue;                                               // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function PlatformUMG.PUMG_Widget.GetUsesBlocker
struct UPUMG_Widget_GetUsesBlocker_Params
{
	bool                                               ReturnValue;                                               // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function PlatformUMG.PUMG_Widget.GetPendingRouteData
struct UPUMG_Widget_GetPendingRouteData_Params
{
	struct FName                                       RouteName;                                                 // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UObject*                                     Data;                                                      // 0x0008(0x0008)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               ReturnValue;                                               // 0x0010(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function PlatformUMG.PUMG_Widget.GetGeometryFromLastTick
struct UPUMG_Widget_GetGeometryFromLastTick_Params
{
	struct FGeometry                                   ReturnValue;                                               // 0x0000(0x0058)  (Parm, OutParm, ReturnParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
};

// Function PlatformUMG.PUMG_Widget.GetCurrentFocusGroup
struct UPUMG_Widget_GetCurrentFocusGroup_Params
{
	int                                                OutFocusGroup;                                             // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               ReturnValue;                                               // 0x0004(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function PlatformUMG.PUMG_Widget.GetCurrentFocusForGroup
struct UPUMG_Widget_GetCurrentFocusForGroup_Params
{
	int                                                FocusGroup;                                                // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UWidget*                                     ReturnValue;                                               // 0x0008(0x0008)  (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function PlatformUMG.PUMG_Widget.GameStateSet
struct UPUMG_Widget_GameStateSet_Params
{
	class AGameStateBase*                              GameState;                                                 // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function PlatformUMG.PUMG_Widget.GamepadUnhover
struct UPUMG_Widget_GamepadUnhover_Params
{
};

// Function PlatformUMG.PUMG_Widget.GamepadHover
struct UPUMG_Widget_GamepadHover_Params
{
};

// Function PlatformUMG.PUMG_Widget.GamepadButtonUp
struct UPUMG_Widget_GamepadButtonUp_Params
{
	struct FKey                                        Button;                                                    // 0x0000(0x0018)  (Parm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FEventReply                                 ReturnValue;                                               // 0x0018(0x00C0)  (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
};

// Function PlatformUMG.PUMG_Widget.GamepadButtonDown
struct UPUMG_Widget_GamepadButtonDown_Params
{
	struct FKey                                        Button;                                                    // 0x0000(0x0018)  (Parm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FEventReply                                 ReturnValue;                                               // 0x0018(0x00C0)  (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
};

// Function PlatformUMG.PUMG_Widget.FocusGroupNavigateUpFailure
struct UPUMG_Widget_FocusGroupNavigateUpFailure_Params
{
	int                                                FocusGroup;                                                // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function PlatformUMG.PUMG_Widget.FocusGroupNavigateRightFailure
struct UPUMG_Widget_FocusGroupNavigateRightFailure_Params
{
	int                                                FocusGroup;                                                // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function PlatformUMG.PUMG_Widget.FocusGroupNavigateLeftFailure
struct UPUMG_Widget_FocusGroupNavigateLeftFailure_Params
{
	int                                                FocusGroup;                                                // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function PlatformUMG.PUMG_Widget.FocusGroupNavigateDownFailure
struct UPUMG_Widget_FocusGroupNavigateDownFailure_Params
{
	int                                                FocusGroup;                                                // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function PlatformUMG.PUMG_Widget.ExplicitNavigateUp
struct UPUMG_Widget_ExplicitNavigateUp_Params
{
	bool                                               ReturnValue;                                               // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function PlatformUMG.PUMG_Widget.ExplicitNavigateRight
struct UPUMG_Widget_ExplicitNavigateRight_Params
{
	bool                                               ReturnValue;                                               // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function PlatformUMG.PUMG_Widget.ExplicitNavigateLeft
struct UPUMG_Widget_ExplicitNavigateLeft_Params
{
	bool                                               ReturnValue;                                               // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function PlatformUMG.PUMG_Widget.ExplicitNavigateDown
struct UPUMG_Widget_ExplicitNavigateDown_Params
{
	bool                                               ReturnValue;                                               // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function PlatformUMG.PUMG_Widget.DisplayGenericPopup
struct UPUMG_Widget_DisplayGenericPopup_Params
{
	struct FString                                     sTitle;                                                    // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     sDesc;                                                     // 0x0010(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function PlatformUMG.PUMG_Widget.DisplayGenericError
struct UPUMG_Widget_DisplayGenericError_Params
{
	struct FString                                     sDesc;                                                     // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function PlatformUMG.PUMG_Widget.ClearNavigationInputThrottle
struct UPUMG_Widget_ClearNavigationInputThrottle_Params
{
};

// Function PlatformUMG.PUMG_Widget.CanCloseOnLogout
struct UPUMG_Widget_CanCloseOnLogout_Params
{
	bool                                               ReturnValue;                                               // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function PlatformUMG.PUMG_Widget.CallOnShowSequenceFinished
struct UPUMG_Widget_CallOnShowSequenceFinished_Params
{
};

// Function PlatformUMG.PUMG_Widget.CallOnHideSequenceFinished
struct UPUMG_Widget_CallOnHideSequenceFinished_Params
{
};

// Function PlatformUMG.PUMG_Widget.BindToInputManager
struct UPUMG_Widget_BindToInputManager_Params
{
	int                                                DefaultFocusGroup;                                         // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function PlatformUMG.PUMG_Widget.AsyncLoadTexture2D
struct UPUMG_Widget_AsyncLoadTexture2D_Params
{
};

// Function PlatformUMG.PUMG_Widget.AddViewRoute
struct UPUMG_Widget_AddViewRoute_Params
{
	struct FName                                       RouteName;                                                 // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               ClearRouteStack;                                           // 0x0008(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               ForceTransition;                                           // 0x0009(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UObject*                                     Data;                                                      // 0x0010(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               ReturnValue;                                               // 0x0018(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function PlatformUMG.PUMG_PopupManager.ShowPopup
struct UPUMG_PopupManager_ShowPopup_Params
{
	struct FPUMG_PopupConfig                           popupData;                                                 // 0x0000(0x00E0)  (Parm, ContainsInstancedReference, NativeAccessSpecifierPublic)
};

// Function PlatformUMG.PUMG_PopupManager.RemovePopup
struct UPUMG_PopupManager_RemovePopup_Params
{
	int                                                PopupId;                                                   // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function PlatformUMG.PUMG_PopupManager.OnPopupResponse
struct UPUMG_PopupManager_OnPopupResponse_Params
{
	int                                                nPopupId;                                                  // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                nResponseIndex;                                            // 0x0004(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function PlatformUMG.PUMG_PopupManager.OnPopupCanceled
struct UPUMG_PopupManager_OnPopupCanceled_Params
{
};

// Function PlatformUMG.PUMG_PopupManager.NextPopup
struct UPUMG_PopupManager_NextPopup_Params
{
};

// Function PlatformUMG.PUMG_PopupManager.HidePopup
struct UPUMG_PopupManager_HidePopup_Params
{
};

// Function PlatformUMG.PUMG_PopupManager.CloseUnimportantPopups
struct UPUMG_PopupManager_CloseUnimportantPopups_Params
{
};

// Function PlatformUMG.PUMG_PopupManager.CloseAllPopups
struct UPUMG_PopupManager_CloseAllPopups_Params
{
};

// Function PlatformUMG.PUMG_PopupManager.AddPopup
struct UPUMG_PopupManager_AddPopup_Params
{
	struct FPUMG_PopupConfig                           popupData;                                                 // 0x0000(0x00E0)  (ConstParm, Parm, OutParm, ReferenceParm, ContainsInstancedReference, NativeAccessSpecifierPublic)
	int                                                ReturnValue;                                               // 0x00E0(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function PlatformUMG.PUMG_QueueDataFactory.StartCustomMatch
struct UPUMG_QueueDataFactory_StartCustomMatch_Params
{
	bool                                               bDoChecks;                                                 // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function PlatformUMG.PUMG_QueueDataFactory.SetPlayerTeamCustomMatch
struct UPUMG_QueueDataFactory_SetPlayerTeamCustomMatch_Params
{
	int64_t                                            PlayerId;                                                  // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                TeamId;                                                    // 0x0008(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function PlatformUMG.PUMG_QueueDataFactory.SetPendingMapForCustomQueue
struct UPUMG_QueueDataFactory_SetPendingMapForCustomQueue_Params
{
	int                                                MapId;                                                     // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function PlatformUMG.PUMG_QueueDataFactory.SetMapForCustomMatch
struct UPUMG_QueueDataFactory_SetMapForCustomMatch_Params
{
	int                                                MapId;                                                     // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function PlatformUMG.PUMG_QueueDataFactory.LeaveQueue
struct UPUMG_QueueDataFactory_LeaveQueue_Params
{
	bool                                               bLeaveMatch;                                               // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               ReturnValue;                                               // 0x0001(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function PlatformUMG.PUMG_QueueDataFactory.KickFromCustomMatch
struct UPUMG_QueueDataFactory_KickFromCustomMatch_Params
{
	int64_t                                            PlayerId;                                                  // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function PlatformUMG.PUMG_QueueDataFactory.JoinQueue
struct UPUMG_QueueDataFactory_JoinQueue_Params
{
	int                                                QueueId;                                                   // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               ReturnValue;                                               // 0x0004(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function PlatformUMG.PUMG_QueueDataFactory.IsQueueActive
struct UPUMG_QueueDataFactory_IsQueueActive_Params
{
	int                                                QueueId;                                                   // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               ReturnValue;                                               // 0x0004(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function PlatformUMG.PUMG_QueueDataFactory.IsInQueue
struct UPUMG_QueueDataFactory_IsInQueue_Params
{
	bool                                               ReturnValue;                                               // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function PlatformUMG.PUMG_QueueDataFactory.IsInGame
struct UPUMG_QueueDataFactory_IsInGame_Params
{
	bool                                               ReturnValue;                                               // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function PlatformUMG.PUMG_QueueDataFactory.IsInCustomMatch
struct UPUMG_QueueDataFactory_IsInCustomMatch_Params
{
	bool                                               ReturnValue;                                               // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function PlatformUMG.PUMG_QueueDataFactory.IsCustomInvitePending
struct UPUMG_QueueDataFactory_IsCustomInvitePending_Params
{
	int64_t                                            PlayerId;                                                  // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               ReturnValue;                                               // 0x0008(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function PlatformUMG.PUMG_QueueDataFactory.InviteToCustomMatch
struct UPUMG_QueueDataFactory_InviteToCustomMatch_Params
{
	int64_t                                            PlayerId;                                                  // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function PlatformUMG.PUMG_QueueDataFactory.IncrementPlayerTeamCustomMatch
struct UPUMG_QueueDataFactory_IncrementPlayerTeamCustomMatch_Params
{
	int64_t                                            PlayerId;                                                  // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function PlatformUMG.PUMG_QueueDataFactory.HasCurrentMatchId
struct UPUMG_QueueDataFactory_HasCurrentMatchId_Params
{
	bool                                               ReturnValue;                                               // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function PlatformUMG.PUMG_QueueDataFactory.HandleInviteCooldowns
struct UPUMG_QueueDataFactory_HandleInviteCooldowns_Params
{
};

// Function PlatformUMG.PUMG_QueueDataFactory.HandleConfirmKickCustomPlayer
struct UPUMG_QueueDataFactory_HandleConfirmKickCustomPlayer_Params
{
};

// Function PlatformUMG.PUMG_QueueDataFactory.GetTimeInQueueSeconds
struct UPUMG_QueueDataFactory_GetTimeInQueueSeconds_Params
{
	float                                              ReturnValue;                                               // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function PlatformUMG.PUMG_QueueDataFactory.GetTeamMemberCount
struct UPUMG_QueueDataFactory_GetTeamMemberCount_Params
{
	int                                                TeamId;                                                    // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                ReturnValue;                                               // 0x0004(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function PlatformUMG.PUMG_QueueDataFactory.GetQueueIds
struct UPUMG_QueueDataFactory_GetQueueIds_Params
{
	TArray<int>                                        ReturnValue;                                               // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function PlatformUMG.PUMG_QueueDataFactory.GetPlayerTeamId
struct UPUMG_QueueDataFactory_GetPlayerTeamId_Params
{
	int64_t                                            PlayerId;                                                  // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                ReturnValue;                                               // 0x0008(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function PlatformUMG.PUMG_QueueDataFactory.GetPendingCustomMatchMapId
struct UPUMG_QueueDataFactory_GetPendingCustomMatchMapId_Params
{
	int                                                ReturnValue;                                               // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function PlatformUMG.PUMG_QueueDataFactory.GetNextTeamId
struct UPUMG_QueueDataFactory_GetNextTeamId_Params
{
	int                                                RelativeToTeamId;                                          // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                ReturnValue;                                               // 0x0004(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function PlatformUMG.PUMG_QueueDataFactory.GetIsJoiningBackfillGame
struct UPUMG_QueueDataFactory_GetIsJoiningBackfillGame_Params
{
	bool                                               ReturnValue;                                               // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function PlatformUMG.PUMG_QueueDataFactory.GetCustomMatchPermissions
struct UPUMG_QueueDataFactory_GetCustomMatchPermissions_Params
{
	int64_t                                            PlayerId;                                                  // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	PlatformUMG_EPUMG_CustomMatchPermission            ReturnValue;                                               // 0x0008(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function PlatformUMG.PUMG_QueueDataFactory.GetCustomMatchMembers
struct UPUMG_QueueDataFactory_GetCustomMatchMembers_Params
{
	TArray<struct FPUMG_CustomMatchMember>             ReturnValue;                                               // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function PlatformUMG.PUMG_QueueDataFactory.GetCustomMatchMapId
struct UPUMG_QueueDataFactory_GetCustomMatchMapId_Params
{
	int                                                ReturnValue;                                               // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function PlatformUMG.PUMG_QueueDataFactory.GetCustomMatchInviterPlayerInfo
struct UPUMG_QueueDataFactory_GetCustomMatchInviterPlayerInfo_Params
{
	class UPUMG_PlayerInfo*                            ReturnValue;                                               // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function PlatformUMG.PUMG_QueueDataFactory.GetCurrentQueueMatchState
struct UPUMG_QueueDataFactory_GetCurrentQueueMatchState_Params
{
	PlatformUMG_EPUMG_MatchStatus                      ReturnValue;                                               // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function PlatformUMG.PUMG_QueueDataFactory.GetCurrentQueueId
struct UPUMG_QueueDataFactory_GetCurrentQueueId_Params
{
	int                                                QueueId;                                                   // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               ReturnValue;                                               // 0x0004(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function PlatformUMG.PUMG_QueueDataFactory.GetBaseQueueInfoById
struct UPUMG_QueueDataFactory_GetBaseQueueInfoById_Params
{
	int                                                QueueId;                                                   // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FPUMG_ClientQueueInfo                       InClientQueueInfo;                                         // 0x0008(0x0050)  (Parm, OutParm, NativeAccessSpecifierPublic)
	bool                                               ReturnValue;                                               // 0x0058(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function PlatformUMG.PUMG_QueueDataFactory.DeclineMatchInvite
struct UPUMG_QueueDataFactory_DeclineMatchInvite_Params
{
};

// Function PlatformUMG.PUMG_QueueDataFactory.CreateCustomMatch
struct UPUMG_QueueDataFactory_CreateCustomMatch_Params
{
	int                                                QueueId;                                                   // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                TeamSize;                                                  // 0x0004(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                TaskForceCount;                                            // 0x0008(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function PlatformUMG.PUMG_QueueDataFactory.CheckCustomMatch
struct UPUMG_QueueDataFactory_CheckCustomMatch_Params
{
	bool                                               bAllowGMOverride;                                          // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	PlatformUMG_EPUMG_CustomMatchError                 ReturnValue;                                               // 0x0001(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function PlatformUMG.PUMG_QueueDataFactory.CanQueue
struct UPUMG_QueueDataFactory_CanQueue_Params
{
	bool                                               ReturnValue;                                               // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function PlatformUMG.PUMG_QueueDataFactory.CanLocalPlayerPromoteCustomLobbyPlayer
struct UPUMG_QueueDataFactory_CanLocalPlayerPromoteCustomLobbyPlayer_Params
{
	int64_t                                            PlayerId;                                                  // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               ReturnValue;                                               // 0x0008(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function PlatformUMG.PUMG_QueueDataFactory.CanLocalPlayerKickCustomLobbyPlayer
struct UPUMG_QueueDataFactory_CanLocalPlayerKickCustomLobbyPlayer_Params
{
	int64_t                                            PlayerId;                                                  // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               ReturnValue;                                               // 0x0008(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function PlatformUMG.PUMG_QueueDataFactory.CanLocalPlayerControlCustomLobbyPlayer
struct UPUMG_QueueDataFactory_CanLocalPlayerControlCustomLobbyPlayer_Params
{
	int64_t                                            PlayerId;                                                  // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               ReturnValue;                                               // 0x0008(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function PlatformUMG.PUMG_QueueDataFactory.AttemptRejoinMatch
struct UPUMG_QueueDataFactory_AttemptRejoinMatch_Params
{
	bool                                               Forced;                                                    // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               ReturnValue;                                               // 0x0001(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function PlatformUMG.PUMG_QueueDataFactory.AcceptMatchInvite
struct UPUMG_QueueDataFactory_AcceptMatchInvite_Params
{
};

// Function PlatformUMG.PUMG_SettingsDataFactory.OnSettingChanged
struct UPUMG_SettingsDataFactory_OnSettingChanged_Params
{
	struct FName                                       SettingId;                                                 // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                SettingValue;                                              // 0x0008(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               ReturnValue;                                               // 0x000C(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function PlatformUMG.PUMG_SettingsDataFactory.InitSettingsForPlayer
struct UPUMG_SettingsDataFactory_InitSettingsForPlayer_Params
{
};

// Function PlatformUMG.PUMG_StorePurchaseRequest.SubmitPurchaseRequest
struct UPUMG_StorePurchaseRequest_SubmitPurchaseRequest_Params
{
	bool                                               ReturnValue;                                               // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function PlatformUMG.PUMG_PortalOffer.GetDiscountPercentage
struct UPUMG_PortalOffer_GetDiscountPercentage_Params
{
	int                                                ReturnValue;                                               // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function PlatformUMG.PUMG_StoreItemPrice.GetPriceWithCoupon
struct UPUMG_StoreItemPrice_GetPriceWithCoupon_Params
{
	class UPUMG_StoreItem*                             Coupon;                                                    // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                ReturnValue;                                               // 0x0008(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function PlatformUMG.PUMG_StoreItemPrice.GetDiscountPercentage
struct UPUMG_StoreItemPrice_GetDiscountPercentage_Params
{
	int                                                ReturnValue;                                               // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function PlatformUMG.PUMG_StoreItemPrice.CanAfford
struct UPUMG_StoreItemPrice_CanAfford_Params
{
	int                                                Quantity;                                                  // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UPUMG_StoreItem*                             Coupon;                                                    // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               ReturnValue;                                               // 0x0010(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function PlatformUMG.PUMG_StoreItem.UIX_ShowPurchaseConfirmation
struct UPUMG_StoreItem_UIX_ShowPurchaseConfirmation_Params
{
	class UPUMG_StoreItemPrice*                        pPrice;                                                    // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function PlatformUMG.PUMG_StoreItem.ShouldDisplayToUser
struct UPUMG_StoreItem_ShouldDisplayToUser_Params
{
	bool                                               ReturnValue;                                               // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function PlatformUMG.PUMG_StoreItem.PurchaseFromPortal
struct UPUMG_StoreItem_PurchaseFromPortal_Params
{
};

// Function PlatformUMG.PUMG_StoreItem.IsRented
struct UPUMG_StoreItem_IsRented_Params
{
	int64_t                                            PlayerId;                                                  // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               ReturnValue;                                               // 0x0008(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function PlatformUMG.PUMG_StoreItem.IsRecipeFulfilled
struct UPUMG_StoreItem_IsRecipeFulfilled_Params
{
	int64_t                                            PlayerId;                                                  // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               ReturnValue;                                               // 0x0008(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function PlatformUMG.PUMG_StoreItem.IsOwned
struct UPUMG_StoreItem_IsOwned_Params
{
	int64_t                                            PlayerId;                                                  // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               ReturnValue;                                               // 0x0008(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function PlatformUMG.PUMG_StoreItem.IsOnSale
struct UPUMG_StoreItem_IsOnSale_Params
{
	bool                                               ReturnValue;                                               // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function PlatformUMG.PUMG_StoreItem.IsActive
struct UPUMG_StoreItem_IsActive_Params
{
	bool                                               ReturnValue;                                               // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function PlatformUMG.PUMG_StoreItem.HasPortalOffer
struct UPUMG_StoreItem_HasPortalOffer_Params
{
	bool                                               ReturnValue;                                               // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function PlatformUMG.PUMG_StoreItem.GetVendorId
struct UPUMG_StoreItem_GetVendorId_Params
{
	int                                                ReturnValue;                                               // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function PlatformUMG.PUMG_StoreItem.GetUIHint
struct UPUMG_StoreItem_GetUIHint_Params
{
	int                                                ReturnValue;                                               // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function PlatformUMG.PUMG_StoreItem.GetType
struct UPUMG_StoreItem_GetType_Params
{
	int                                                ReturnValue;                                               // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function PlatformUMG.PUMG_StoreItem.GetSubType
struct UPUMG_StoreItem_GetSubType_Params
{
	int                                                ReturnValue;                                               // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function PlatformUMG.PUMG_StoreItem.GetSortOrder
struct UPUMG_StoreItem_GetSortOrder_Params
{
	int                                                ReturnValue;                                               // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function PlatformUMG.PUMG_StoreItem.GetSoftItemIconAsPath
struct UPUMG_StoreItem_GetSoftItemIconAsPath_Params
{
	struct FSoftObjectPath                             ReturnValue;                                               // 0x0000(0x0018)  (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function PlatformUMG.PUMG_StoreItem.GetSoftItemIcon
struct UPUMG_StoreItem_GetSoftItemIcon_Params
{
};

// Function PlatformUMG.PUMG_StoreItem.GetRecipeEntryType
struct UPUMG_StoreItem_GetRecipeEntryType_Params
{
	int                                                ReturnValue;                                               // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function PlatformUMG.PUMG_StoreItem.GetQuantityOwned
struct UPUMG_StoreItem_GetQuantityOwned_Params
{
	int64_t                                            PlayerId;                                                  // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                ReturnValue;                                               // 0x0008(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function PlatformUMG.PUMG_StoreItem.GetPurchaseRequest
struct UPUMG_StoreItem_GetPurchaseRequest_Params
{
	class UPUMG_StorePurchaseRequest*                  ReturnValue;                                               // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function PlatformUMG.PUMG_StoreItem.GetPrices
struct UPUMG_StoreItem_GetPrices_Params
{
	TArray<class UPUMG_StoreItemPrice*>                ReturnValue;                                               // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function PlatformUMG.PUMG_StoreItem.GetPrice
struct UPUMG_StoreItem_GetPrice_Params
{
	class UPUMG_StoreItemPrice*                        ReturnValue;                                               // 0x0028(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function PlatformUMG.PUMG_StoreItem.GetPortalOffer
struct UPUMG_StoreItem_GetPortalOffer_Params
{
	class UPUMG_PortalOffer*                           ReturnValue;                                               // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function PlatformUMG.PUMG_StoreItem.GetName
struct UPUMG_StoreItem_GetName_Params
{
	struct FText                                       ReturnValue;                                               // 0x0000(0x0018)  (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
};

// Function PlatformUMG.PUMG_StoreItem.GetLootQuantity
struct UPUMG_StoreItem_GetLootQuantity_Params
{
	int                                                ReturnValue;                                               // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function PlatformUMG.PUMG_StoreItem.GetLootId
struct UPUMG_StoreItem_GetLootId_Params
{
	int                                                ReturnValue;                                               // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function PlatformUMG.PUMG_StoreItem.GetItemId
struct UPUMG_StoreItem_GetItemId_Params
{
	int                                                ReturnValue;                                               // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function PlatformUMG.PUMG_StoreItem.GetInventoryItem
struct UPUMG_StoreItem_GetInventoryItem_Params
{
};

// Function PlatformUMG.PUMG_StoreItem.GetFormattedNameDisplay
struct UPUMG_StoreItem_GetFormattedNameDisplay_Params
{
	int                                                ExternalQuantity;                                          // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FText                                       ReturnValue;                                               // 0x0008(0x0018)  (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
};

// Function PlatformUMG.PUMG_StoreItem.GetFormattedDescDisplay
struct UPUMG_StoreItem_GetFormattedDescDisplay_Params
{
	struct FText                                       ReturnValue;                                               // 0x0000(0x0018)  (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
};

// Function PlatformUMG.PUMG_StoreItem.GetDescription
struct UPUMG_StoreItem_GetDescription_Params
{
	struct FText                                       ReturnValue;                                               // 0x0000(0x0018)  (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
};

// Function PlatformUMG.PUMG_StoreItem.GetCouponsForPrice
struct UPUMG_StoreItem_GetCouponsForPrice_Params
{
	class UPUMG_StoreItemPrice*                        Price;                                                     // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<class UPUMG_StoreItem*>                     ReturnValue;                                               // 0x0008(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function PlatformUMG.PUMG_StoreItem.GetBundleId
struct UPUMG_StoreItem_GetBundleId_Params
{
	int                                                ReturnValue;                                               // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function PlatformUMG.PUMG_StoreItem.GetBestDiscount
struct UPUMG_StoreItem_GetBestDiscount_Params
{
	int                                                ReturnValue;                                               // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function PlatformUMG.PUMG_StoreItem.GetBestCouponForPrice
struct UPUMG_StoreItem_GetBestCouponForPrice_Params
{
	class UPUMG_StoreItemPrice*                        Price;                                                     // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UPUMG_StoreItem*                             ReturnValue;                                               // 0x0008(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function PlatformUMG.PUMG_StoreItem.ConfirmGotoPortalOffer
struct UPUMG_StoreItem_ConfirmGotoPortalOffer_Params
{
};

// Function PlatformUMG.PUMG_StoreItem.CanAfford
struct UPUMG_StoreItem_CanAfford_Params
{
	class UPUMG_StoreItemPrice*                        Price;                                                     // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                Quantity;                                                  // 0x0008(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               ReturnValue;                                               // 0x000C(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function PlatformUMG.PUMG_XpTable.GetXpAtLevel
struct UPUMG_XpTable_GetXpAtLevel_Params
{
	int                                                XpLevel;                                                   // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int64_t                                            ReturnValue;                                               // 0x0008(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function PlatformUMG.PUMG_XpTable.GetXpAtIndex
struct UPUMG_XpTable_GetXpAtIndex_Params
{
	int                                                Index;                                                     // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int64_t                                            ReturnValue;                                               // 0x0008(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function PlatformUMG.PUMG_XpTable.GetMinXpLevel
struct UPUMG_XpTable_GetMinXpLevel_Params
{
	int                                                ReturnValue;                                               // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function PlatformUMG.PUMG_XpTable.GetLevelCount
struct UPUMG_XpTable_GetLevelCount_Params
{
	int                                                ReturnValue;                                               // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function PlatformUMG.PUMG_XpTable.GetLevelAtXp
struct UPUMG_XpTable_GetLevelAtXp_Params
{
	int64_t                                            XpPoints;                                                  // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                ReturnValue;                                               // 0x0008(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function PlatformUMG.PUMG_XpTable.GetId
struct UPUMG_XpTable_GetId_Params
{
	int64_t                                            ReturnValue;                                               // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function PlatformUMG.PUMG_StoreItemHelper.UIX_RedeemCode
struct UPUMG_StoreItemHelper_UIX_RedeemCode_Params
{
	struct FString                                     Code;                                                      // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function PlatformUMG.PUMG_StoreItemHelper.UIX_CompletePurchaseItem
struct UPUMG_StoreItemHelper_UIX_CompletePurchaseItem_Params
{
	class UPUMG_StorePurchaseRequest*                  PurchaseRequest;                                           // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               ReturnValue;                                               // 0x0008(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function PlatformUMG.PUMG_StoreItemHelper.RequestVendorData
struct UPUMG_StoreItemHelper_RequestVendorData_Params
{
	TArray<int>                                        VendorIds;                                                 // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                ReturnValue;                                               // 0x0010(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function PlatformUMG.PUMG_StoreItemHelper.HasPendingPurchase
struct UPUMG_StoreItemHelper_HasPendingPurchase_Params
{
	bool                                               ReturnValue;                                               // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function PlatformUMG.PUMG_StoreItemHelper.GetXpTable
struct UPUMG_StoreItemHelper_GetXpTable_Params
{
	int64_t                                            XpTableId;                                                 // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UPUMG_XpTable*                               ReturnValue;                                               // 0x0008(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function PlatformUMG.PUMG_StoreItemHelper.GetStoreItemsForVendor
struct UPUMG_StoreItemHelper_GetStoreItemsForVendor_Params
{
	int                                                nVendorId;                                                 // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bIncludeInactiveItems;                                     // 0x0004(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bSearchSubContainers;                                      // 0x0005(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<class UPUMG_StoreItem*>                     ReturnValue;                                               // 0x0008(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function PlatformUMG.PUMG_StoreItemHelper.GetStoreItemsAndQuantitiesForVendor
struct UPUMG_StoreItemHelper_GetStoreItemsAndQuantitiesForVendor_Params
{
	int                                                nVendorId;                                                 // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bIncludeInactiveItems;                                     // 0x0004(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bSearchSubContainers;                                      // 0x0005(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TMap<int, int>                                     QuantityMap;                                               // 0x0008(0x0050)  (Parm, OutParm, NativeAccessSpecifierPublic)
	int                                                ExternalQuantity;                                          // 0x0058(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<class UPUMG_StoreItem*>                     ReturnValue;                                               // 0x0060(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function PlatformUMG.PUMG_StoreItemHelper.GetStoreItemForVendorByItemId
struct UPUMG_StoreItemHelper_GetStoreItemForVendorByItemId_Params
{
	int                                                nVendorId;                                                 // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                nItemId;                                                   // 0x0004(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bSearchSubVendors;                                         // 0x0008(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UPUMG_StoreItem*                             ReturnValue;                                               // 0x0010(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function PlatformUMG.PUMG_StoreItemHelper.GetStoreItemForVendor
struct UPUMG_StoreItemHelper_GetStoreItemForVendor_Params
{
	int                                                nVendorId;                                                 // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                nLootItemId;                                               // 0x0004(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UPUMG_StoreItem*                             ReturnValue;                                               // 0x0008(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function PlatformUMG.PUMG_StoreItemHelper.GetStoreItem
struct UPUMG_StoreItemHelper_GetStoreItem_Params
{
	int                                                LootId;                                                    // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UPUMG_StoreItem*                             ReturnValue;                                               // 0x0008(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function PlatformUMG.PUMG_StoreItemHelper.GetPendingPurchaseData
struct UPUMG_StoreItemHelper_GetPendingPurchaseData_Params
{
	TArray<class UPUMG_StorePurchaseRequest*>          ReturnValue;                                               // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function PlatformUMG.PUMG_StoreItemHelper.ExitInGameStoreUI
struct UPUMG_StoreItemHelper_ExitInGameStoreUI_Params
{
};

// Function PlatformUMG.PUMG_StoreItemHelper.EnterInGameStoreUI
struct UPUMG_StoreItemHelper_EnterInGameStoreUI_Params
{
};

// Function PlatformUMG.PUMG_StoreItemHelper.DoesPortalHaveOffers
struct UPUMG_StoreItemHelper_DoesPortalHaveOffers_Params
{
	bool                                               ReturnValue;                                               // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function PlatformUMG.PUMG_StoreItemHelper.AreXpTablesLoaded
struct UPUMG_StoreItemHelper_AreXpTablesLoaded_Params
{
	bool                                               ReturnValue;                                               // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function PlatformUMG.PUMG_StoreItemHelper.ArePricePointsLoaded
struct UPUMG_StoreItemHelper_ArePricePointsLoaded_Params
{
	bool                                               ReturnValue;                                               // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function PlatformUMG.PUMG_StoreItemHelper.ArePortalOffersLoaded
struct UPUMG_StoreItemHelper_ArePortalOffersLoaded_Params
{
	bool                                               ReturnValue;                                               // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function PlatformUMG.PUMG_ViewRedirecter.ShouldRedirect
struct UPUMG_ViewRedirecter_ShouldRedirect_Params
{
	class APUMG_HUD*                                   HUD;                                                       // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FName                                       Route;                                                     // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UObject*                                     SceneData;                                                 // 0x0010(0x0008)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               ReturnValue;                                               // 0x0018(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function PlatformUMG.PUMG_ViewLayer.IsRouteValid
struct UPUMG_ViewLayer_IsRouteValid_Params
{
	struct FName                                       RouteName;                                                 // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               ReturnValue;                                               // 0x0008(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function PlatformUMG.PUMG_ViewLayer.GoToRoute_InternalShowStep
struct UPUMG_ViewLayer_GoToRoute_InternalShowStep_Params
{
};

// Function PlatformUMG.PUMG_ViewLayer.GoToRoute_HandleShowFinished
struct UPUMG_ViewLayer_GoToRoute_HandleShowFinished_Params
{
	class UPUMG_Widget*                                Widget;                                                    // 0x0000(0x0008)  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function PlatformUMG.PUMG_ViewLayer.GoToRoute_HandleHideFinished
struct UPUMG_ViewLayer_GoToRoute_HandleHideFinished_Params
{
	class UPUMG_Widget*                                Widget;                                                    // 0x0000(0x0008)  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function PlatformUMG.PUMG_ViewManager.SwapRoute
struct UPUMG_ViewManager_SwapRoute_Params
{
	struct FName                                       RouteName;                                                 // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FName                                       SwapTargetRoute;                                           // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               ForceTransition;                                           // 0x0010(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               ReturnValue;                                               // 0x0011(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function PlatformUMG.PUMG_ViewManager.SetPendingRouteData
struct UPUMG_ViewManager_SetPendingRouteData_Params
{
	struct FName                                       RouteName;                                                 // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UObject*                                     Data;                                                      // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function PlatformUMG.PUMG_ViewManager.ReplaceRoute
struct UPUMG_ViewManager_ReplaceRoute_Params
{
	struct FName                                       RouteName;                                                 // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               ForceTransition;                                           // 0x0008(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UObject*                                     Data;                                                      // 0x0010(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               ReturnValue;                                               // 0x0018(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function PlatformUMG.PUMG_ViewManager.RemoveRoute
struct UPUMG_ViewManager_RemoveRoute_Params
{
	struct FName                                       RouteName;                                                 // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               ForceTransition;                                           // 0x0008(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               ReturnValue;                                               // 0x0009(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function PlatformUMG.PUMG_ViewManager.PushRoute
struct UPUMG_ViewManager_PushRoute_Params
{
	struct FName                                       RouteName;                                                 // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               ForceTransition;                                           // 0x0008(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UObject*                                     Data;                                                      // 0x0010(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               ReturnValue;                                               // 0x0018(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function PlatformUMG.PUMG_ViewManager.PopRoute
struct UPUMG_ViewManager_PopRoute_Params
{
	bool                                               ForceTransition;                                           // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               ReturnValue;                                               // 0x0001(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function PlatformUMG.PUMG_ViewManager.IsLayerIdle
struct UPUMG_ViewManager_IsLayerIdle_Params
{
	PlatformUMG_EViewManagerLayer                      LayerType;                                                 // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               ReturnValue;                                               // 0x0001(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function PlatformUMG.PUMG_ViewManager.IsEveryLayerIdle
struct UPUMG_ViewManager_IsEveryLayerIdle_Params
{
	bool                                               ReturnValue;                                               // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function PlatformUMG.PUMG_ViewManager.IsBlockingAcquisitions
struct UPUMG_ViewManager_IsBlockingAcquisitions_Params
{
	bool                                               ReturnValue;                                               // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function PlatformUMG.PUMG_ViewManager.InitializeRoutes
struct UPUMG_ViewManager_InitializeRoutes_Params
{
	class UDataTable*                                  RouteTable;                                                // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function PlatformUMG.PUMG_ViewManager.Initialize
struct UPUMG_ViewManager_Initialize_Params
{
};

// Function PlatformUMG.PUMG_ViewManager.HasCompletedRedirectFlow
struct UPUMG_ViewManager_HasCompletedRedirectFlow_Params
{
	PlatformUMG_EViewRouteRedirectionPhase             RedirectPhase;                                             // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               ReturnValue;                                               // 0x0001(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function PlatformUMG.PUMG_ViewManager.GetViewRouteCount
struct UPUMG_ViewManager_GetViewRouteCount_Params
{
	int                                                ReturnValue;                                               // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function PlatformUMG.PUMG_ViewManager.GetTopViewRouteWidget
struct UPUMG_ViewManager_GetTopViewRouteWidget_Params
{
	class UPUMG_Widget*                                ReturnValue;                                               // 0x0000(0x0008)  (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function PlatformUMG.PUMG_ViewManager.GetTopViewRoute
struct UPUMG_ViewManager_GetTopViewRoute_Params
{
	struct FName                                       ReturnValue;                                               // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function PlatformUMG.PUMG_ViewManager.GetTopLayer
struct UPUMG_ViewManager_GetTopLayer_Params
{
	PlatformUMG_EViewManagerLayer                      ReturnValue;                                               // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function PlatformUMG.PUMG_ViewManager.GetPendingRouteData
struct UPUMG_ViewManager_GetPendingRouteData_Params
{
	struct FName                                       RouteName;                                                 // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UObject*                                     Data;                                                      // 0x0008(0x0008)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               ReturnValue;                                               // 0x0010(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function PlatformUMG.PUMG_ViewManager.GetDefaultRouteForLayer
struct UPUMG_ViewManager_GetDefaultRouteForLayer_Params
{
	PlatformUMG_EViewManagerLayer                      LayerType;                                                 // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FName                                       ReturnValue;                                               // 0x0004(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function PlatformUMG.PUMG_ViewManager.GetCurrentTransitionRoute
struct UPUMG_ViewManager_GetCurrentTransitionRoute_Params
{
	PlatformUMG_EViewManagerLayer                      Layer;                                                     // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FName                                       ReturnValue;                                               // 0x0004(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function PlatformUMG.PUMG_ViewManager.GetCurrentRoute
struct UPUMG_ViewManager_GetCurrentRoute_Params
{
	PlatformUMG_EViewManagerLayer                      Layer;                                                     // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FName                                       ReturnValue;                                               // 0x0004(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function PlatformUMG.PUMG_ViewManager.ContainsRoute
struct UPUMG_ViewManager_ContainsRoute_Params
{
	struct FName                                       RouteName;                                                 // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               ReturnValue;                                               // 0x0008(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function PlatformUMG.PUMG_VoiceChatManager.OnPartyDataUpdated
struct UPUMG_VoiceChatManager_OnPartyDataUpdated_Params
{
};

// Function PlatformUMG.PUMG_VoiceChatManager.OnMatchStatusUpdated
struct UPUMG_VoiceChatManager_OnMatchStatusUpdated_Params
{
	PlatformUMG_EPUMG_MatchStatus                      MatchStatus;                                               // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
