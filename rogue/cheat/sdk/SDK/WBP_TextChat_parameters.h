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

// Function WBP_TextChat.WBP_TextChat_C.IsTextChatEnabled
struct UWBP_TextChat_C_IsTextChatEnabled_Params
{
	bool                                               IsEnabled;                                                 // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function WBP_TextChat.WBP_TextChat_C.HandleTextChatEnabledApplied
struct UWBP_TextChat_C_HandleTextChatEnabledApplied_Params
{
	bool                                               Value;                                                     // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function WBP_TextChat.WBP_TextChat_C.AddCancelKey
struct UWBP_TextChat_C_AddCancelKey_Params
{
	struct FKey                                        Key;                                                       // 0x0000(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
};

// Function WBP_TextChat.WBP_TextChat_C.ConsumeCancelInputReleased
struct UWBP_TextChat_C_ConsumeCancelInputReleased_Params
{
};

// Function WBP_TextChat.WBP_TextChat_C.IsAnyCancelKeyDown
struct UWBP_TextChat_C_IsAnyCancelKeyDown_Params
{
	bool                                               AnyKeyDown;                                                // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function WBP_TextChat.WBP_TextChat_C.AddAllCancelKeys
struct UWBP_TextChat_C_AddAllCancelKeys_Params
{
	TArray<struct FName>                               Actions;                                                   // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, HasGetValueTypeHash)
};

// Function WBP_TextChat.WBP_TextChat_C.ProcessDelayedFocusClear
struct UWBP_TextChat_C_ProcessDelayedFocusClear_Params
{
};

// Function WBP_TextChat.WBP_TextChat_C.OnFocusReceived
struct UWBP_TextChat_C_OnFocusReceived_Params
{
	struct FGeometry                                   MyGeometry;                                                // 0x0000(0x0058)  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	struct FFocusEvent                                 InFocusEvent;                                              // 0x0058(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
	struct FEventReply                                 ReturnValue;                                               // 0x0060(0x00C0)  (Parm, OutParm, ReturnParm)
};

// Function WBP_TextChat.WBP_TextChat_C.HandleSubmitTextInput
struct UWBP_TextChat_C_HandleSubmitTextInput_Params
{
	struct FText                                       Text;                                                      // 0x0000(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function WBP_TextChat.WBP_TextChat_C.CanChatInChannel
struct UWBP_TextChat_C_CanChatInChannel_Params
{
	PlatformUMG_EPUMG_ChatChannel                      Channel;                                                   // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               ReturnValue;                                               // 0x0001(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
};

// Function WBP_TextChat.WBP_TextChat_C.GetDefaultChannel
struct UWBP_TextChat_C_GetDefaultChannel_Params
{
	PlatformUMG_EPUMG_ChatChannel                      DefaultChannel;                                            // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function WBP_TextChat.WBP_TextChat_C.HandleChannelChanged
struct UWBP_TextChat_C_HandleChannelChanged_Params
{
	struct FPUMG_ActiveChatChannelData                 ChannelData;                                               // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor)
};

// Function WBP_TextChat.WBP_TextChat_C.HandleChatMessage
struct UWBP_TextChat_C_HandleChatMessage_Params
{
	struct FPUMG_ChatData                              Message;                                                   // 0x0000(0x0040)  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};

// Function WBP_TextChat.WBP_TextChat_C.DisableInputListeners
struct UWBP_TextChat_C_DisableInputListeners_Params
{
};

// Function WBP_TextChat.WBP_TextChat_C.EnableInputListeners
struct UWBP_TextChat_C_EnableInputListeners_Params
{
};

// Function WBP_TextChat.WBP_TextChat_C.ConsumeCancelInputPressed
struct UWBP_TextChat_C_ConsumeCancelInputPressed_Params
{
};

// Function WBP_TextChat.WBP_TextChat_C.SetUIFocus
struct UWBP_TextChat_C_SetUIFocus_Params
{
	bool                                               IsFocused;                                                 // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function WBP_TextChat.WBP_TextChat_C.DisplayTextChat
struct UWBP_TextChat_C_DisplayTextChat_Params
{
};

// Function WBP_TextChat.WBP_TextChat_C.FinishTextChat
struct UWBP_TextChat_C_FinishTextChat_Params
{
	struct FText                                       InputText;                                                 // 0x0000(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	bool                                               ShouldSubmitText;                                          // 0x0018(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                               WaitForCancelRelease;                                      // 0x0019(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function WBP_TextChat.WBP_TextChat_C.StartTextChat
struct UWBP_TextChat_C_StartTextChat_Params
{
	bool                                               BeginChatCommand;                                          // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function WBP_TextChat.WBP_TextChat_C.Construct
struct UWBP_TextChat_C_Construct_Params
{
};

// Function WBP_TextChat.WBP_TextChat_C.Tick
struct UWBP_TextChat_C_Tick_Params
{
	struct FGeometry                                   MyGeometry;                                                // 0x0000(0x0058)  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	float                                              InDeltaTime;                                               // 0x0058(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function WBP_TextChat.WBP_TextChat_C.OpenTextChat
struct UWBP_TextChat_C_OpenTextChat_Params
{
	bool                                               BeginChatCommand;                                          // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function WBP_TextChat.WBP_TextChat_C.OnTextCommitted
struct UWBP_TextChat_C_OnTextCommitted_Params
{
	struct FText                                       Text;                                                      // 0x0000(0x0018)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	TEnumAsByte<SlateCore_ETextCommit>                 CommitMethod;                                              // 0x0018(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function WBP_TextChat.WBP_TextChat_C.InitializeWidgetNavigation
struct UWBP_TextChat_C_InitializeWidgetNavigation_Params
{
};

// Function WBP_TextChat.WBP_TextChat_C.HandleChatMessageReceived
struct UWBP_TextChat_C_HandleChatMessageReceived_Params
{
	struct FPUMG_ChatData                              ReceivedMessage;                                           // 0x0000(0x0040)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};

// Function WBP_TextChat.WBP_TextChat_C.OnChannelChanged
struct UWBP_TextChat_C_OnChannelChanged_Params
{
	struct FPUMG_ActiveChatChannelData                 ChatChannelData;                                           // 0x0000(0x0010)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor)
};

// Function WBP_TextChat.WBP_TextChat_C.HandleChatChannelJoined
struct UWBP_TextChat_C_HandleChatChannelJoined_Params
{
	PlatformUMG_EPUMG_ChatChannel                      Channel;                                                   // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function WBP_TextChat.WBP_TextChat_C.HandleChatChannelLeft
struct UWBP_TextChat_C_HandleChatChannelLeft_Params
{
	PlatformUMG_EPUMG_ChatChannel                      Channel;                                                   // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function WBP_TextChat.WBP_TextChat_C.InitializeWidget
struct UWBP_TextChat_C_InitializeWidget_Params
{
	class APUMG_HUD*                                   HUD;                                                       // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function WBP_TextChat.WBP_TextChat_C.OnCancelButtonPressed
struct UWBP_TextChat_C_OnCancelButtonPressed_Params
{
	struct FKey                                        Key;                                                       // 0x0000(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
};

// Function WBP_TextChat.WBP_TextChat_C.OpenTextChatToPlayer
struct UWBP_TextChat_C_OpenTextChatToPlayer_Params
{
	class UPUMG_PlayerInfo*                            Player;                                                    // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function WBP_TextChat.WBP_TextChat_C.HandleCloseTextChat
struct UWBP_TextChat_C_HandleCloseTextChat_Params
{
};

// Function WBP_TextChat.WBP_TextChat_C.HandleTextChatEnabledChanged
struct UWBP_TextChat_C_HandleTextChatEnabledChanged_Params
{
};

// Function WBP_TextChat.WBP_TextChat_C.ShowTextChat
struct UWBP_TextChat_C_ShowTextChat_Params
{
};

// Function WBP_TextChat.WBP_TextChat_C.OnRadialMenuItemUse
struct UWBP_TextChat_C_OnRadialMenuItemUse_Params
{
	struct FRadialMenuItemEventInfo                    EventInfo;                                                 // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
};

// Function WBP_TextChat.WBP_TextChat_C.ExecuteUbergraph_WBP_TextChat
struct UWBP_TextChat_C_ExecuteUbergraph_WBP_TextChat_Params
{
	int                                                EntryPoint;                                                // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
