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
//		Name   -> Function WBP_TextChat.WBP_TextChat_C.IsTextChatEnabled
//		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
//		bool                                               IsEnabled                                                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UWBP_TextChat_C::IsTextChatEnabled(bool* IsEnabled)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(55820);

	UWBP_TextChat_C_IsTextChatEnabled_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (IsEnabled != nullptr)
		*IsEnabled = params.IsEnabled;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_TextChat.WBP_TextChat_C.HandleTextChatEnabledApplied
//		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
//		bool                                               Value                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UWBP_TextChat_C::HandleTextChatEnabledApplied(bool Value)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(55819);

	UWBP_TextChat_C_HandleTextChatEnabledApplied_Params params {};
	params.Value = Value;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_TextChat.WBP_TextChat_C.AddCancelKey
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
//		struct FKey                                        Key                                                        (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
void UWBP_TextChat_C::AddCancelKey(const struct FKey& Key)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(55818);

	UWBP_TextChat_C_AddCancelKey_Params params {};
	params.Key = Key;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_TextChat.WBP_TextChat_C.ConsumeCancelInputReleased
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
void UWBP_TextChat_C::ConsumeCancelInputReleased()
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(55817);

	UWBP_TextChat_C_ConsumeCancelInputReleased_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_TextChat.WBP_TextChat_C.IsAnyCancelKeyDown
//		Flags  -> (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
//		bool                                               AnyKeyDown                                                 (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UWBP_TextChat_C::IsAnyCancelKeyDown(bool* AnyKeyDown)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(55816);

	UWBP_TextChat_C_IsAnyCancelKeyDown_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (AnyKeyDown != nullptr)
		*AnyKeyDown = params.AnyKeyDown;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_TextChat.WBP_TextChat_C.AddAllCancelKeys
//		Flags  -> (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
//		TArray<struct FName>                               Actions                                                    (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, HasGetValueTypeHash)
void UWBP_TextChat_C::AddAllCancelKeys(TArray<struct FName>* Actions)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(55815);

	UWBP_TextChat_C_AddAllCancelKeys_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Actions != nullptr)
		*Actions = params.Actions;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_TextChat.WBP_TextChat_C.ProcessDelayedFocusClear
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
void UWBP_TextChat_C::ProcessDelayedFocusClear()
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(55814);

	UWBP_TextChat_C_ProcessDelayedFocusClear_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_TextChat.WBP_TextChat_C.OnFocusReceived
//		Flags  -> (BlueprintCosmetic, Event, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
//		struct FGeometry                                   MyGeometry                                                 (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
//		struct FFocusEvent                                 InFocusEvent                                               (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
//		struct FEventReply                                 ReturnValue                                                (Parm, OutParm, ReturnParm)
struct FEventReply UWBP_TextChat_C::OnFocusReceived(const struct FGeometry& MyGeometry, const struct FFocusEvent& InFocusEvent)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(55813);

	UWBP_TextChat_C_OnFocusReceived_Params params {};
	params.MyGeometry = MyGeometry;
	params.InFocusEvent = InFocusEvent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_TextChat.WBP_TextChat_C.HandleSubmitTextInput
//		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
//		struct FText                                       Text                                                       (BlueprintVisible, BlueprintReadOnly, Parm)
void UWBP_TextChat_C::HandleSubmitTextInput(const struct FText& Text)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(55812);

	UWBP_TextChat_C_HandleSubmitTextInput_Params params {};
	params.Text = Text;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_TextChat.WBP_TextChat_C.CanChatInChannel
//		Flags  -> (Event, Protected, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
//		PlatformUMG_EPUMG_ChatChannel                      Channel                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
bool UWBP_TextChat_C::CanChatInChannel(PlatformUMG_EPUMG_ChatChannel Channel)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(55811);

	UWBP_TextChat_C_CanChatInChannel_Params params {};
	params.Channel = Channel;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_TextChat.WBP_TextChat_C.GetDefaultChannel
//		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
//		PlatformUMG_EPUMG_ChatChannel                      DefaultChannel                                             (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWBP_TextChat_C::GetDefaultChannel(PlatformUMG_EPUMG_ChatChannel* DefaultChannel)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(55810);

	UWBP_TextChat_C_GetDefaultChannel_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (DefaultChannel != nullptr)
		*DefaultChannel = params.DefaultChannel;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_TextChat.WBP_TextChat_C.HandleChannelChanged
//		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
//		struct FPUMG_ActiveChatChannelData                 ChannelData                                                (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor)
void UWBP_TextChat_C::HandleChannelChanged(struct FPUMG_ActiveChatChannelData* ChannelData)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(55809);

	UWBP_TextChat_C_HandleChannelChanged_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (ChannelData != nullptr)
		*ChannelData = params.ChannelData;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_TextChat.WBP_TextChat_C.HandleChatMessage
//		Flags  -> (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
//		struct FPUMG_ChatData                              Message                                                    (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
void UWBP_TextChat_C::HandleChatMessage(struct FPUMG_ChatData* Message)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(55808);

	UWBP_TextChat_C_HandleChatMessage_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Message != nullptr)
		*Message = params.Message;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_TextChat.WBP_TextChat_C.DisableInputListeners
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
void UWBP_TextChat_C::DisableInputListeners()
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(55807);

	UWBP_TextChat_C_DisableInputListeners_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_TextChat.WBP_TextChat_C.EnableInputListeners
//		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
void UWBP_TextChat_C::EnableInputListeners()
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(55806);

	UWBP_TextChat_C_EnableInputListeners_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_TextChat.WBP_TextChat_C.ConsumeCancelInputPressed
//		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
void UWBP_TextChat_C::ConsumeCancelInputPressed()
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(55805);

	UWBP_TextChat_C_ConsumeCancelInputPressed_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_TextChat.WBP_TextChat_C.SetUIFocus
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
//		bool                                               IsFocused                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UWBP_TextChat_C::SetUIFocus(bool IsFocused)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(55804);

	UWBP_TextChat_C_SetUIFocus_Params params {};
	params.IsFocused = IsFocused;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_TextChat.WBP_TextChat_C.DisplayTextChat
//		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
void UWBP_TextChat_C::DisplayTextChat()
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(55803);

	UWBP_TextChat_C_DisplayTextChat_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_TextChat.WBP_TextChat_C.FinishTextChat
//		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
//		struct FText                                       InputText                                                  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
//		bool                                               ShouldSubmitText                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
//		bool                                               WaitForCancelRelease                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UWBP_TextChat_C::FinishTextChat(struct FText* InputText, bool ShouldSubmitText, bool WaitForCancelRelease)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(55802);

	UWBP_TextChat_C_FinishTextChat_Params params {};
	params.ShouldSubmitText = ShouldSubmitText;
	params.WaitForCancelRelease = WaitForCancelRelease;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (InputText != nullptr)
		*InputText = params.InputText;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_TextChat.WBP_TextChat_C.StartTextChat
//		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
//		bool                                               BeginChatCommand                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UWBP_TextChat_C::StartTextChat(bool BeginChatCommand)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(55801);

	UWBP_TextChat_C_StartTextChat_Params params {};
	params.BeginChatCommand = BeginChatCommand;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_TextChat.WBP_TextChat_C.Construct
//		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
void UWBP_TextChat_C::Construct()
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(55800);

	UWBP_TextChat_C_Construct_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_TextChat.WBP_TextChat_C.Tick
//		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
//		struct FGeometry                                   MyGeometry                                                 (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
//		float                                              InDeltaTime                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWBP_TextChat_C::Tick(const struct FGeometry& MyGeometry, float InDeltaTime)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(55799);

	UWBP_TextChat_C_Tick_Params params {};
	params.MyGeometry = MyGeometry;
	params.InDeltaTime = InDeltaTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_TextChat.WBP_TextChat_C.OpenTextChat
//		Flags  -> (Event, Protected, BlueprintCallable, BlueprintEvent)
// Parameters:
//		bool                                               BeginChatCommand                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UWBP_TextChat_C::OpenTextChat(bool BeginChatCommand)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(55798);

	UWBP_TextChat_C_OpenTextChat_Params params {};
	params.BeginChatCommand = BeginChatCommand;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_TextChat.WBP_TextChat_C.OnTextCommitted
//		Flags  -> (HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
//		struct FText                                       Text                                                       (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
//		TEnumAsByte<SlateCore_ETextCommit>                 CommitMethod                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWBP_TextChat_C::OnTextCommitted(const struct FText& Text, TEnumAsByte<SlateCore_ETextCommit> CommitMethod)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(55797);

	UWBP_TextChat_C_OnTextCommitted_Params params {};
	params.Text = Text;
	params.CommitMethod = CommitMethod;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_TextChat.WBP_TextChat_C.InitializeWidgetNavigation
//		Flags  -> (Event, Public, BlueprintEvent)
void UWBP_TextChat_C::InitializeWidgetNavigation()
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(55796);

	UWBP_TextChat_C_InitializeWidgetNavigation_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_TextChat.WBP_TextChat_C.HandleChatMessageReceived
//		Flags  -> (Event, Protected, HasOutParms, BlueprintEvent)
// Parameters:
//		struct FPUMG_ChatData                              ReceivedMessage                                            (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
void UWBP_TextChat_C::HandleChatMessageReceived(const struct FPUMG_ChatData& ReceivedMessage)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(55795);

	UWBP_TextChat_C_HandleChatMessageReceived_Params params {};
	params.ReceivedMessage = ReceivedMessage;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_TextChat.WBP_TextChat_C.OnChannelChanged
//		Flags  -> (HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
//		struct FPUMG_ActiveChatChannelData                 ChatChannelData                                            (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor)
void UWBP_TextChat_C::OnChannelChanged(const struct FPUMG_ActiveChatChannelData& ChatChannelData)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(55794);

	UWBP_TextChat_C_OnChannelChanged_Params params {};
	params.ChatChannelData = ChatChannelData;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_TextChat.WBP_TextChat_C.HandleChatChannelJoined
//		Flags  -> (Event, Protected, BlueprintEvent)
// Parameters:
//		PlatformUMG_EPUMG_ChatChannel                      Channel                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWBP_TextChat_C::HandleChatChannelJoined(PlatformUMG_EPUMG_ChatChannel Channel)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(55793);

	UWBP_TextChat_C_HandleChatChannelJoined_Params params {};
	params.Channel = Channel;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_TextChat.WBP_TextChat_C.HandleChatChannelLeft
//		Flags  -> (Event, Protected, BlueprintEvent)
// Parameters:
//		PlatformUMG_EPUMG_ChatChannel                      Channel                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWBP_TextChat_C::HandleChatChannelLeft(PlatformUMG_EPUMG_ChatChannel Channel)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(55792);

	UWBP_TextChat_C_HandleChatChannelLeft_Params params {};
	params.Channel = Channel;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_TextChat.WBP_TextChat_C.InitializeWidget
//		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
//		class APUMG_HUD*                                   HUD                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWBP_TextChat_C::InitializeWidget(class APUMG_HUD* HUD)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(55791);

	UWBP_TextChat_C_InitializeWidget_Params params {};
	params.HUD = HUD;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_TextChat.WBP_TextChat_C.OnCancelButtonPressed
//		Flags  -> (BlueprintCallable, BlueprintEvent)
// Parameters:
//		struct FKey                                        Key                                                        (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
void UWBP_TextChat_C::OnCancelButtonPressed(const struct FKey& Key)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(55790);

	UWBP_TextChat_C_OnCancelButtonPressed_Params params {};
	params.Key = Key;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_TextChat.WBP_TextChat_C.OpenTextChatToPlayer
//		Flags  -> (Event, Protected, BlueprintCallable, BlueprintEvent)
// Parameters:
//		class UPUMG_PlayerInfo*                            Player                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWBP_TextChat_C::OpenTextChatToPlayer(class UPUMG_PlayerInfo* Player)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(55789);

	UWBP_TextChat_C_OpenTextChatToPlayer_Params params {};
	params.Player = Player;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_TextChat.WBP_TextChat_C.HandleCloseTextChat
//		Flags  -> (BlueprintCallable, BlueprintEvent)
void UWBP_TextChat_C::HandleCloseTextChat()
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(55788);

	UWBP_TextChat_C_HandleCloseTextChat_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_TextChat.WBP_TextChat_C.HandleTextChatEnabledChanged
//		Flags  -> (BlueprintCallable, BlueprintEvent)
void UWBP_TextChat_C::HandleTextChatEnabledChanged()
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(55787);

	UWBP_TextChat_C_HandleTextChatEnabledChanged_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_TextChat.WBP_TextChat_C.ShowTextChat
//		Flags  -> (Event, Protected, BlueprintCallable, BlueprintEvent)
void UWBP_TextChat_C::ShowTextChat()
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(55786);

	UWBP_TextChat_C_ShowTextChat_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_TextChat.WBP_TextChat_C.OnRadialMenuItemUse
//		Flags  -> (BlueprintCallable, BlueprintEvent)
// Parameters:
//		struct FRadialMenuItemEventInfo                    EventInfo                                                  (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
void UWBP_TextChat_C::OnRadialMenuItemUse(const struct FRadialMenuItemEventInfo& EventInfo)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(55785);

	UWBP_TextChat_C_OnRadialMenuItemUse_Params params {};
	params.EventInfo = EventInfo;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_TextChat.WBP_TextChat_C.ExecuteUbergraph_WBP_TextChat
//		Flags  -> (Final, HasDefaults)
// Parameters:
//		int                                                EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWBP_TextChat_C::ExecuteUbergraph_WBP_TextChat(int EntryPoint)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(55784);

	UWBP_TextChat_C_ExecuteUbergraph_WBP_TextChat_Params params {};
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
