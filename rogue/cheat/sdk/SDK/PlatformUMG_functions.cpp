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
//		Offset -> 0x00B44290
//		Name   -> Function PlatformUMG.PUMG_AsyncImage.ShowWaitingWidget
//		Flags  -> (Native, Event, Public, BlueprintEvent)
void UPUMG_AsyncImage::ShowWaitingWidget()
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(10118);

	UPUMG_AsyncImage_ShowWaitingWidget_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00B43A20
//		Name   -> Function PlatformUMG.PUMG_AsyncImage.HideWaitingWidget
//		Flags  -> (Native, Event, Public, BlueprintEvent)
void UPUMG_AsyncImage::HideWaitingWidget()
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(10117);

	UPUMG_AsyncImage_HideWaitingWidget_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00B43C30
//		Name   -> Function PlatformUMG.PUMG_BlueprintFunctionLibrary.IsWithEditor
//		Flags  -> (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
//		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UPUMG_BlueprintFunctionLibrary::STATIC_IsWithEditor()
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(10128);

	UPUMG_BlueprintFunctionLibrary_IsWithEditor_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00B43990
//		Name   -> Function PlatformUMG.PUMG_BlueprintFunctionLibrary.GetUMG_DPI_Scaling
//		Flags  -> (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
//		float                                              ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
float UPUMG_BlueprintFunctionLibrary::STATIC_GetUMG_DPI_Scaling()
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(10127);

	UPUMG_BlueprintFunctionLibrary_GetUMG_DPI_Scaling_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00B436E0
//		Name   -> Function PlatformUMG.PUMG_BlueprintFunctionLibrary.GetKeyName
//		Flags  -> (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
//		struct FKey                                        Key                                                        (Parm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		struct FName                                       ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
struct FName UPUMG_BlueprintFunctionLibrary::STATIC_GetKeyName(const struct FKey& Key)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(10126);

	UPUMG_BlueprintFunctionLibrary_GetKeyName_Params params {};
	params.Key = Key;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00B43670
//		Name   -> Function PlatformUMG.PUMG_BlueprintFunctionLibrary.GetGamepadConfirmButton
//		Flags  -> (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
//		struct FKey                                        ReturnValue                                                (Parm, OutParm, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
struct FKey UPUMG_BlueprintFunctionLibrary::STATIC_GetGamepadConfirmButton()
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(10125);

	UPUMG_BlueprintFunctionLibrary_GetGamepadConfirmButton_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00B43600
//		Name   -> Function PlatformUMG.PUMG_BlueprintFunctionLibrary.GetGamepadCancelButton
//		Flags  -> (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
//		struct FKey                                        ReturnValue                                                (Parm, OutParm, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
struct FKey UPUMG_BlueprintFunctionLibrary::STATIC_GetGamepadCancelButton()
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(10124);

	UPUMG_BlueprintFunctionLibrary_GetGamepadCancelButton_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00B434F0
//		Name   -> Function PlatformUMG.PUMG_BlueprintFunctionLibrary.GetGamepadButtonForAction
//		Flags  -> (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
// Parameters:
//		struct FName                                       Action                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		struct FKey                                        Button                                                     (Parm, OutParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UPUMG_BlueprintFunctionLibrary::STATIC_GetGamepadButtonForAction(const struct FName& Action, struct FKey* Button)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(10123);

	UPUMG_BlueprintFunctionLibrary_GetGamepadButtonForAction_Params params {};
	params.Action = Action;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Button != nullptr)
		*Button = params.Button;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00B42F10
//		Name   -> Function PlatformUMG.PUMG_BlueprintFunctionLibrary.GetButtonForActionMappingUsingWidget
//		Flags  -> (Final, Native, Static, Public, HasOutParms, BlueprintCallable, BlueprintPure)
// Parameters:
//		class UWidget*                                     InWidget                                                   (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		struct FName                                       Action                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		struct FKey                                        Button                                                     (Parm, OutParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UPUMG_BlueprintFunctionLibrary::STATIC_GetButtonForActionMappingUsingWidget(class UWidget* InWidget, const struct FName& Action, struct FKey* Button)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(10122);

	UPUMG_BlueprintFunctionLibrary_GetButtonForActionMappingUsingWidget_Params params {};
	params.InWidget = InWidget;
	params.Action = Action;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Button != nullptr)
		*Button = params.Button;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00B42DC0
//		Name   -> Function PlatformUMG.PUMG_BlueprintFunctionLibrary.GetButtonForActionMapping
//		Flags  -> (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
// Parameters:
//		struct FName                                       Action                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		struct FKey                                        Button                                                     (Parm, OutParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		bool                                               IsGamepadKey                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UPUMG_BlueprintFunctionLibrary::STATIC_GetButtonForActionMapping(const struct FName& Action, struct FKey* Button, bool IsGamepadKey)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(10121);

	UPUMG_BlueprintFunctionLibrary_GetButtonForActionMapping_Params params {};
	params.Action = Action;
	params.IsGamepadKey = IsGamepadKey;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Button != nullptr)
		*Button = params.Button;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00B42C50
//		Name   -> Function PlatformUMG.PUMG_BlueprintFunctionLibrary.GetAllButtonsForActionMappingUsingWidget
//		Flags  -> (Final, Native, Static, Public, HasOutParms, BlueprintCallable, BlueprintPure)
// Parameters:
//		class UWidget*                                     InWidget                                                   (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		struct FName                                       Action                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		TArray<struct FKey>                                Buttons                                                    (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UPUMG_BlueprintFunctionLibrary::STATIC_GetAllButtonsForActionMappingUsingWidget(class UWidget* InWidget, const struct FName& Action, TArray<struct FKey>* Buttons)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(10120);

	UPUMG_BlueprintFunctionLibrary_GetAllButtonsForActionMappingUsingWidget_Params params {};
	params.InWidget = InWidget;
	params.Action = Action;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Buttons != nullptr)
		*Buttons = params.Buttons;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00B42AE0
//		Name   -> Function PlatformUMG.PUMG_BlueprintFunctionLibrary.GetAllButtonsForActionMapping
//		Flags  -> (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
// Parameters:
//		struct FName                                       Action                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		TArray<struct FKey>                                Buttons                                                    (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		bool                                               IsGamepadKey                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UPUMG_BlueprintFunctionLibrary::STATIC_GetAllButtonsForActionMapping(const struct FName& Action, TArray<struct FKey>* Buttons, bool IsGamepadKey)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(10119);

	UPUMG_BlueprintFunctionLibrary_GetAllButtonsForActionMapping_Params params {};
	params.Action = Action;
	params.IsGamepadKey = IsGamepadKey;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Buttons != nullptr)
		*Buttons = params.Buttons;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00B43D00
//		Name   -> Function PlatformUMG.PUMG_CanvasPanel.PlaceWidgetUnder
//		Flags  -> (Final, Native, Public, BlueprintCallable)
// Parameters:
//		class UUserWidget*                                 BottomWidget                                               (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		class UUserWidget*                                 TopWidget                                                  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UPUMG_CanvasPanel::PlaceWidgetUnder(class UUserWidget* BottomWidget, class UUserWidget* TopWidget)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(10130);

	UPUMG_CanvasPanel_PlaceWidgetUnder_Params params {};
	params.BottomWidget = BottomWidget;
	params.TopWidget = TopWidget;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00B43A70
//		Name   -> Function PlatformUMG.PUMG_DataFactory.IsLoggedIn
//		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure)
// Parameters:
//		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UPUMG_DataFactory::IsLoggedIn()
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(6016);

	UPUMG_DataFactory_IsLoggedIn_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00B44210
//		Name   -> Function PlatformUMG.PUMG_ChatDataFactory.SetMaxMessageCount
//		Flags  -> (Final, Native, Public, BlueprintCallable)
// Parameters:
//		int                                                MaxMessageCount                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UPUMG_ChatDataFactory::SetMaxMessageCount(int MaxMessageCount)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(10154);

	UPUMG_ChatDataFactory_SetMaxMessageCount_Params params {};
	params.MaxMessageCount = MaxMessageCount;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00B440B0
//		Name   -> Function PlatformUMG.PUMG_ChatDataFactory.SendChatToPlayer
//		Flags  -> (Final, Native, Public, BlueprintCallable)
// Parameters:
//		struct FString                                     Message                                                    (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		int64_t                                            TargetPlayerId                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UPUMG_ChatDataFactory::SendChatToPlayer(const struct FString& Message, int64_t TargetPlayerId)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(10153);

	UPUMG_ChatDataFactory_SendChatToPlayer_Params params {};
	params.Message = Message;
	params.TargetPlayerId = TargetPlayerId;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00B43FD0
//		Name   -> Function PlatformUMG.PUMG_ChatDataFactory.SendChatToChannel
//		Flags  -> (Final, Native, Public, BlueprintCallable)
// Parameters:
//		struct FString                                     Message                                                    (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		PlatformUMG_EPUMG_ChatChannel                      Channel                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UPUMG_ChatDataFactory::SendChatToChannel(const struct FString& Message, PlatformUMG_EPUMG_ChatChannel Channel)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(10152);

	UPUMG_ChatDataFactory_SendChatToChannel_Params params {};
	params.Message = Message;
	params.Channel = Channel;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00B43F20
//		Name   -> Function PlatformUMG.PUMG_ChatDataFactory.RemovePlayerFilter
//		Flags  -> (Final, Native, Public, BlueprintCallable)
// Parameters:
//		int64_t                                            PlayerId                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UPUMG_ChatDataFactory::RemovePlayerFilter(int64_t PlayerId)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(10151);

	UPUMG_ChatDataFactory_RemovePlayerFilter_Params params {};
	params.PlayerId = PlayerId;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00B43E70
//		Name   -> Function PlatformUMG.PUMG_ChatDataFactory.RemoveChatCommand
//		Flags  -> (Final, Native, Public, BlueprintCallable)
// Parameters:
//		struct FString                                     Command                                                    (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UPUMG_ChatDataFactory::RemoveChatCommand(const struct FString& Command)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(10150);

	UPUMG_ChatDataFactory_RemoveChatCommand_Params params {};
	params.Command = Command;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00B43DE0
//		Name   -> Function PlatformUMG.PUMG_ChatDataFactory.RemoveAllChatCommands
//		Flags  -> (Final, Native, Public, BlueprintCallable)
// Parameters:
//		class UObject*                                     Target                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UPUMG_ChatDataFactory::RemoveAllChatCommands(class UObject* Target)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(10149);

	UPUMG_ChatDataFactory_RemoveAllChatCommands_Params params {};
	params.Target = Target;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00B43DC0
//		Name   -> Function PlatformUMG.PUMG_ChatDataFactory.QueueCheckPendingMessages
//		Flags  -> (Final, Native, Protected)
void UPUMG_ChatDataFactory::QueueCheckPendingMessages()
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(10148);

	UPUMG_ChatDataFactory_QueueCheckPendingMessages_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00B43C80
//		Name   -> Function PlatformUMG.PUMG_ChatDataFactory.MarkMessageAsRead
//		Flags  -> (Final, Native, Public, BlueprintCallable)
// Parameters:
//		int                                                MessageId                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UPUMG_ChatDataFactory::MarkMessageAsRead(int MessageId)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(10147);

	UPUMG_ChatDataFactory_MarkMessageAsRead_Params params {};
	params.MessageId = MessageId;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00B43C60
//		Name   -> Function PlatformUMG.PUMG_ChatDataFactory.ListChatCommands
//		Flags  -> (Final, Native, Public, BlueprintCallable)
void UPUMG_ChatDataFactory::ListChatCommands()
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(10146);

	UPUMG_ChatDataFactory_ListChatCommands_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00B43B30
//		Name   -> Function PlatformUMG.PUMG_ChatDataFactory.IsValidMessage
//		Flags  -> (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
//		struct FPUMG_ChatData                              Message                                                    (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
//		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UPUMG_ChatDataFactory::IsValidMessage(const struct FPUMG_ChatData& Message)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(10145);

	UPUMG_ChatDataFactory_IsValidMessage_Params params {};
	params.Message = Message;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00B43AA0
//		Name   -> Function PlatformUMG.PUMG_ChatDataFactory.IsPlayerFilteredFromChat
//		Flags  -> (Final, Native, Public, BlueprintCallable)
// Parameters:
//		int64_t                                            PlayerId                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UPUMG_ChatDataFactory::IsPlayerFilteredFromChat(int64_t PlayerId)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(10144);

	UPUMG_ChatDataFactory_IsPlayerFilteredFromChat_Params params {};
	params.PlayerId = PlayerId;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00B439C0
//		Name   -> Function PlatformUMG.PUMG_ChatDataFactory.HandleCommunicationSettingChanged
//		Flags  -> (Final, Native, Protected)
void UPUMG_ChatDataFactory::HandleCommunicationSettingChanged()
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(10143);

	UPUMG_ChatDataFactory_HandleCommunicationSettingChanged_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00B43800
//		Name   -> Function PlatformUMG.PUMG_ChatDataFactory.GetMessage
//		Flags  -> (Final, Native, Public, BlueprintCallable)
// Parameters:
//		int                                                MessageId                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		struct FPUMG_ChatData                              ReturnValue                                                (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
struct FPUMG_ChatData UPUMG_ChatDataFactory::GetMessage(int MessageId)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(10142);

	UPUMG_ChatDataFactory_GetMessage_Params params {};
	params.MessageId = MessageId;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00B437D0
//		Name   -> Function PlatformUMG.PUMG_ChatDataFactory.GetMaxMessageCount
//		Flags  -> (Final, Native, Public, BlueprintCallable)
// Parameters:
//		int                                                ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
int UPUMG_ChatDataFactory::GetMaxMessageCount()
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(10141);

	UPUMG_ChatDataFactory_GetMaxMessageCount_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00B43060
//		Name   -> Function PlatformUMG.PUMG_ChatDataFactory.GetChatPrivilegeStatus
//		Flags  -> (Final, Native, Public, BlueprintCallable)
// Parameters:
//		PlatformCommon_EPCOM_PrivilegeStatus               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
PlatformCommon_EPCOM_PrivilegeStatus UPUMG_ChatDataFactory::GetChatPrivilegeStatus()
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(10140);

	UPUMG_ChatDataFactory_GetChatPrivilegeStatus_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00B429E0
//		Name   -> Function PlatformUMG.PUMG_ChatDataFactory.GetActiveChatChannels
//		Flags  -> (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
//		bool                                               IncludePersonalChannel                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		TArray<struct FPUMG_ActiveChatChannelData>         ActiveChatChatChannels                                     (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UPUMG_ChatDataFactory::GetActiveChatChannels(bool IncludePersonalChannel, TArray<struct FPUMG_ActiveChatChannelData>* ActiveChatChatChannels)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(10139);

	UPUMG_ChatDataFactory_GetActiveChatChannels_Params params {};
	params.IncludePersonalChannel = IncludePersonalChannel;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (ActiveChatChatChannels != nullptr)
		*ActiveChatChatChannels = params.ActiveChatChatChannels;

}


// Function:
//		Offset -> 0x00B42910
//		Name   -> Function PlatformUMG.PUMG_ChatDataFactory.FindChatCommandIndex
//		Flags  -> (Final, Native, Protected)
// Parameters:
//		struct FString                                     Command                                                    (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		int                                                ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
int UPUMG_ChatDataFactory::FindChatCommandIndex(const struct FString& Command)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(10138);

	UPUMG_ChatDataFactory_FindChatCommandIndex_Params params {};
	params.Command = Command;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00B42860
//		Name   -> Function PlatformUMG.PUMG_ChatDataFactory.ExecuteChatCommandLine
//		Flags  -> (Final, Native, Public, BlueprintCallable)
// Parameters:
//		struct FString                                     CommandLine                                                (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UPUMG_ChatDataFactory::ExecuteChatCommandLine(const struct FString& CommandLine)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(10137);

	UPUMG_ChatDataFactory_ExecuteChatCommandLine_Params params {};
	params.CommandLine = CommandLine;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00B42840
//		Name   -> Function PlatformUMG.PUMG_ChatDataFactory.CheckPendingMessages
//		Flags  -> (Final, Native, Protected)
void UPUMG_ChatDataFactory::CheckPendingMessages()
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(10136);

	UPUMG_ChatDataFactory_CheckPendingMessages_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00B42660
//		Name   -> Function PlatformUMG.PUMG_ChatDataFactory.BeginProcessingChatMessage
//		Flags  -> (Final, Native, Public, HasOutParms)
// Parameters:
//		struct FPUMG_ChatData                              Message                                                    (Parm, OutParm, NativeAccessSpecifierPublic)
void UPUMG_ChatDataFactory::BeginProcessingChatMessage(struct FPUMG_ChatData* Message)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(10135);

	UPUMG_ChatDataFactory_BeginProcessingChatMessage_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Message != nullptr)
		*Message = params.Message;

}


// Function:
//		Offset -> 0x00B42590
//		Name   -> Function PlatformUMG.PUMG_ChatDataFactory.AddSystemMessage
//		Flags  -> (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
//		struct FText                                       Message                                                    (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
void UPUMG_ChatDataFactory::AddSystemMessage(const struct FText& Message)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(10134);

	UPUMG_ChatDataFactory_AddSystemMessage_Params params {};
	params.Message = Message;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00B42500
//		Name   -> Function PlatformUMG.PUMG_ChatDataFactory.AddPlayerFilter
//		Flags  -> (Final, Native, Public, BlueprintCallable)
// Parameters:
//		int64_t                                            PlayerId                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UPUMG_ChatDataFactory::AddPlayerFilter(int64_t PlayerId)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(10133);

	UPUMG_ChatDataFactory_AddPlayerFilter_Params params {};
	params.PlayerId = PlayerId;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00B423E0
//		Name   -> Function PlatformUMG.PUMG_ChatDataFactory.AddGameMessage
//		Flags  -> (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
//		struct FText                                       Message                                                    (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
//		PlatformUMG_EPUMG_ChatChannel                      Channel                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UPUMG_ChatDataFactory::AddGameMessage(const struct FText& Message, PlatformUMG_EPUMG_ChatChannel Channel)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(10132);

	UPUMG_ChatDataFactory_AddGameMessage_Params params {};
	params.Message = Message;
	params.Channel = Channel;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00B420D0
//		Name   -> Function PlatformUMG.PUMG_ChatDataFactory.AddChatCommand
//		Flags  -> (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
//		struct FString                                     Command                                                    (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		struct FText                                       Desc                                                       (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
//		class UObject*                                     Target                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		struct FString                                     Function                                                   (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		struct FString                                     Alias1                                                     (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		struct FString                                     Alias2                                                     (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		struct FString                                     Alias3                                                     (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		struct FString                                     Alias4                                                     (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UPUMG_ChatDataFactory::AddChatCommand(const struct FString& Command, const struct FText& Desc, class UObject* Target, const struct FString& Function, const struct FString& Alias1, const struct FString& Alias2, const struct FString& Alias3, const struct FString& Alias4)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(10131);

	UPUMG_ChatDataFactory_AddChatCommand_Params params {};
	params.Command = Command;
	params.Desc = Desc;
	params.Target = Target;
	params.Function = Function;
	params.Alias1 = Alias1;
	params.Alias2 = Alias2;
	params.Alias3 = Alias3;
	params.Alias4 = Alias4;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00B444B0
//		Name   -> Function PlatformUMG.PUMG_FriendDataFactory.UIX_OnRemoveFriend
//		Flags  -> (Final, Native, Public, BlueprintCallable)
// Parameters:
//		int64_t                                            PlayerId                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UPUMG_FriendDataFactory::UIX_OnRemoveFriend(int64_t PlayerId)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(6034);

	UPUMG_FriendDataFactory_UIX_OnRemoveFriend_Params params {};
	params.PlayerId = PlayerId;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00B44430
//		Name   -> Function PlatformUMG.PUMG_FriendDataFactory.UIX_OnRejectFriendRequest
//		Flags  -> (Final, Native, Public, BlueprintCallable)
// Parameters:
//		int64_t                                            PlayerId                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UPUMG_FriendDataFactory::UIX_OnRejectFriendRequest(int64_t PlayerId)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(6033);

	UPUMG_FriendDataFactory_UIX_OnRejectFriendRequest_Params params {};
	params.PlayerId = PlayerId;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00B443B0
//		Name   -> Function PlatformUMG.PUMG_FriendDataFactory.UIX_OnCancelFriendRequest
//		Flags  -> (Final, Native, Public, BlueprintCallable)
// Parameters:
//		int64_t                                            PlayerId                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UPUMG_FriendDataFactory::UIX_OnCancelFriendRequest(int64_t PlayerId)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(6032);

	UPUMG_FriendDataFactory_UIX_OnCancelFriendRequest_Params params {};
	params.PlayerId = PlayerId;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00B44330
//		Name   -> Function PlatformUMG.PUMG_FriendDataFactory.UIX_OnAddFriend
//		Flags  -> (Final, Native, Public, BlueprintCallable)
// Parameters:
//		class UPUMG_PlayerInfo*                            playerinfo                                                 (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UPUMG_FriendDataFactory::UIX_OnAddFriend(class UPUMG_PlayerInfo* playerinfo)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(6031);

	UPUMG_FriendDataFactory_UIX_OnAddFriend_Params params {};
	params.playerinfo = playerinfo;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00B442B0
//		Name   -> Function PlatformUMG.PUMG_FriendDataFactory.UIX_OnAcceptFriendRequest
//		Flags  -> (Final, Native, Public, BlueprintCallable)
// Parameters:
//		int64_t                                            PlayerId                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UPUMG_FriendDataFactory::UIX_OnAcceptFriendRequest(int64_t PlayerId)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(6030);

	UPUMG_FriendDataFactory_UIX_OnAcceptFriendRequest_Params params {};
	params.PlayerId = PlayerId;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00B44190
//		Name   -> Function PlatformUMG.PUMG_FriendDataFactory.SetEnableFriendsListUpdatePolling
//		Flags  -> (Final, Native, Public, BlueprintCallable)
// Parameters:
//		bool                                               InBool                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UPUMG_FriendDataFactory::SetEnableFriendsListUpdatePolling(bool InBool)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(6029);

	UPUMG_FriendDataFactory_SetEnableFriendsListUpdatePolling_Params params {};
	params.InBool = InBool;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00B43FB0
//		Name   -> Function PlatformUMG.PUMG_FriendDataFactory.RequestUpdateFriendsList
//		Flags  -> (Final, Native, Public, BlueprintCallable)
void UPUMG_FriendDataFactory::RequestUpdateFriendsList()
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(6028);

	UPUMG_FriendDataFactory_RequestUpdateFriendsList_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00B43A40
//		Name   -> Function PlatformUMG.PUMG_FriendDataFactory.IsCrossplaySocialEnabled
//		Flags  -> (Final, Native, Protected, BlueprintCallable, BlueprintPure)
// Parameters:
//		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UPUMG_FriendDataFactory::IsCrossplaySocialEnabled()
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(6027);

	UPUMG_FriendDataFactory_IsCrossplaySocialEnabled_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00B43A00
//		Name   -> Function PlatformUMG.PUMG_FriendDataFactory.HandleFriendsListUpdatePolling
//		Flags  -> (Final, Native, Public)
void UPUMG_FriendDataFactory::HandleFriendsListUpdatePolling()
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(6026);

	UPUMG_FriendDataFactory_HandleFriendsListUpdatePolling_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00B439E0
//		Name   -> Function PlatformUMG.PUMG_FriendDataFactory.HandleCrossplaySettingChanged
//		Flags  -> (Final, Native, Protected)
void UPUMG_FriendDataFactory::HandleCrossplaySettingChanged()
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(6025);

	UPUMG_FriendDataFactory_HandleCrossplaySettingChanged_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00B438A0
//		Name   -> Function PlatformUMG.PUMG_FriendDataFactory.GetPendingFriends
//		Flags  -> (Final, Native, Public, BlueprintCallable)
// Parameters:
//		TArray<struct FPUMG_FriendData>                    ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
TArray<struct FPUMG_FriendData> UPUMG_FriendDataFactory::GetPendingFriends()
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(6024);

	UPUMG_FriendDataFactory_GetPendingFriends_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00B43400
//		Name   -> Function PlatformUMG.PUMG_FriendDataFactory.GetFriends
//		Flags  -> (Final, Native, Public, BlueprintCallable)
// Parameters:
//		TArray<struct FPUMG_FriendData>                    ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
TArray<struct FPUMG_FriendData> UPUMG_FriendDataFactory::GetFriends()
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(6023);

	UPUMG_FriendDataFactory_GetFriends_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00B43310
//		Name   -> Function PlatformUMG.PUMG_FriendDataFactory.GetFriendRequests
//		Flags  -> (Final, Native, Public, BlueprintCallable)
// Parameters:
//		TArray<struct FPUMG_FriendData>                    ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
TArray<struct FPUMG_FriendData> UPUMG_FriendDataFactory::GetFriendRequests()
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(6022);

	UPUMG_FriendDataFactory_GetFriendRequests_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00B43220
//		Name   -> Function PlatformUMG.PUMG_FriendDataFactory.GetFriendName
//		Flags  -> (Final, Native, Protected, BlueprintCallable, BlueprintPure)
// Parameters:
//		int64_t                                            PlayerId                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		struct FText                                       ReturnValue                                                (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
struct FText UPUMG_FriendDataFactory::GetFriendName(int64_t PlayerId)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(6021);

	UPUMG_FriendDataFactory_GetFriendName_Params params {};
	params.PlayerId = PlayerId;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00B430B0
//		Name   -> Function PlatformUMG.PUMG_FriendDataFactory.GetFriendAvatarTexture
//		Flags  -> (Native, Public, BlueprintCallable)
// Parameters:
//		struct FPUMG_FriendData                            Friend                                                     (Parm, NativeAccessSpecifierPublic)
void UPUMG_FriendDataFactory::GetFriendAvatarTexture(const struct FPUMG_FriendData& Friend)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(6020);

	UPUMG_FriendDataFactory_GetFriendAvatarTexture_Params params {};
	params.Friend = Friend;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00B43090
//		Name   -> Function PlatformUMG.PUMG_FriendDataFactory.GetEnableFriendsListUpdatePolling
//		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure)
// Parameters:
//		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UPUMG_FriendDataFactory::GetEnableFriendsListUpdatePolling()
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(6019);

	UPUMG_FriendDataFactory_GetEnableFriendsListUpdatePolling_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00B429C0
//		Name   -> Function PlatformUMG.PUMG_FriendDataFactory.FriendRemoveResponse
//		Flags  -> (Final, Native, Public)
void UPUMG_FriendDataFactory::FriendRemoveResponse()
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(6018);

	UPUMG_FriendDataFactory_FriendRemoveResponse_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00B42750
//		Name   -> Function PlatformUMG.PUMG_FriendDataFactory.CheckAlreadyFriends
//		Flags  -> (Final, Native, Public, BlueprintCallable)
// Parameters:
//		struct FString                                     FriendName                                                 (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UPUMG_FriendDataFactory::CheckAlreadyFriends(const struct FString& FriendName)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(6017);

	UPUMG_FriendDataFactory_CheckAlreadyFriends_Params params {};
	params.FriendName = FriendName;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function PlatformUMG.GamepadPromptInterface.UnregisterOnClear
//		Flags  -> (Event, Public, BlueprintEvent)
// Parameters:
//		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UGamepadPromptInterface::UnregisterOnClear()
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(10157);

	UGamepadPromptInterface_UnregisterOnClear_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function PlatformUMG.GamepadPromptInterface.SetPrompt
//		Flags  -> (Event, Public, HasOutParms, BlueprintEvent)
// Parameters:
//		struct FText                                       PromptText                                                 (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
void UGamepadPromptInterface::SetPrompt(const struct FText& PromptText)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(10156);

	UGamepadPromptInterface_SetPrompt_Params params {};
	params.PromptText = PromptText;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function PlatformUMG.GamepadPromptInterface.ClearPrompt
//		Flags  -> (Event, Public, BlueprintEvent)
void UGamepadPromptInterface::ClearPrompt()
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(10155);

	UGamepadPromptInterface_ClearPrompt_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00B494F0
//		Name   -> Function PlatformUMG.PUMG_GamepadDataFactory.UnregisterPromptForButton
//		Flags  -> (Final, Native, Public, BlueprintCallable)
// Parameters:
//		struct FKey                                        Button                                                     (Parm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UPUMG_GamepadDataFactory::UnregisterPromptForButton(const struct FKey& Button)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(10162);

	UPUMG_GamepadDataFactory_UnregisterPromptForButton_Params params {};
	params.Button = Button;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00B48610
//		Name   -> Function PlatformUMG.PUMG_GamepadDataFactory.SetPromptForGamepadButton
//		Flags  -> (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
//		struct FKey                                        Button                                                     (Parm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		struct FText                                       PromptText                                                 (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
void UPUMG_GamepadDataFactory::SetPromptForGamepadButton(const struct FKey& Button, const struct FText& PromptText)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(10161);

	UPUMG_GamepadDataFactory_SetPromptForGamepadButton_Params params {};
	params.Button = Button;
	params.PromptText = PromptText;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00B484A0
//		Name   -> Function PlatformUMG.PUMG_GamepadDataFactory.RemovePromptForGamepadButton
//		Flags  -> (Final, Native, Public, BlueprintCallable)
// Parameters:
//		struct FKey                                        Button                                                     (Parm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UPUMG_GamepadDataFactory::RemovePromptForGamepadButton(const struct FKey& Button)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(10160);

	UPUMG_GamepadDataFactory_RemovePromptForGamepadButton_Params params {};
	params.Button = Button;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00B48370
//		Name   -> Function PlatformUMG.PUMG_GamepadDataFactory.RegisterPromptWidgetForButton
//		Flags  -> (Final, Native, Public, BlueprintCallable)
// Parameters:
//		class UWidget*                                     Widget                                                     (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		struct FKey                                        Button                                                     (Parm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UPUMG_GamepadDataFactory::RegisterPromptWidgetForButton(class UWidget* Widget, const struct FKey& Button)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(10159);

	UPUMG_GamepadDataFactory_RegisterPromptWidgetForButton_Params params {};
	params.Widget = Widget;
	params.Button = Button;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00B47350
//		Name   -> Function PlatformUMG.PUMG_GamepadDataFactory.ClearAllGamepadPrompts
//		Flags  -> (Final, Native, Public, BlueprintCallable)
void UPUMG_GamepadDataFactory::ClearAllGamepadPrompts()
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(10158);

	UPUMG_GamepadDataFactory_ClearAllGamepadPrompts_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00B489A0
//		Name   -> Function PlatformUMG.PUMG_HUD.TestHirezLogin
//		Flags  -> (Final, Exec, Native, Protected)
// Parameters:
//		struct FString                                     User                                                       (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		struct FString                                     password                                                   (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void APUMG_HUD::TestHirezLogin(const struct FString& User, const struct FString& password)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(10217);

	APUMG_HUD_TestHirezLogin_Params params {};
	params.User = User;
	params.password = password;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00B48920
//		Name   -> Function PlatformUMG.PUMG_HUD.TestAutoLogin
//		Flags  -> (Final, Exec, Native, Protected)
// Parameters:
//		int                                                ControllerId                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void APUMG_HUD::TestAutoLogin(int ControllerId)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(10216);

	APUMG_HUD_TestAutoLogin_Params params {};
	params.ControllerId = ControllerId;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00B48880
//		Name   -> Function PlatformUMG.PUMG_HUD.ShowSystemTrayNotification
//		Flags  -> (Final, Exec, Native, Public, BlueprintCallable)
// Parameters:
//		struct FString                                     popupType                                                  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void APUMG_HUD::ShowSystemTrayNotification(const struct FString& popupType)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(10215);

	APUMG_HUD_ShowSystemTrayNotification_Params params {};
	params.popupType = popupType;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function PlatformUMG.PUMG_HUD.SetUseNewUIFeatures
//		Flags  -> (Event, Public, BlueprintEvent)
// Parameters:
//		bool                                               UseNewFeatures                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void APUMG_HUD::SetUseNewUIFeatures(bool UseNewFeatures)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(10214);

	APUMG_HUD_SetUseNewUIFeatures_Params params {};
	params.UseNewFeatures = UseNewFeatures;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00B48780
//		Name   -> Function PlatformUMG.PUMG_HUD.SetUIFocus
//		Flags  -> (Native, Event, Public, BlueprintCallable, BlueprintEvent)
void APUMG_HUD::SetUIFocus()
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(10213);

	APUMG_HUD_SetUIFocus_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00B48580
//		Name   -> Function PlatformUMG.PUMG_HUD.SetNavigationEnabled
//		Flags  -> (Final, Native, Public, BlueprintCallable)
// Parameters:
//		bool                                               Enabled                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void APUMG_HUD::SetNavigationEnabled(bool Enabled)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(10212);

	APUMG_HUD_SetNavigationEnabled_Params params {};
	params.Enabled = Enabled;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00B482D0
//		Name   -> Function PlatformUMG.PUMG_HUD.OnQuit
//		Flags  -> (Native, Public, BlueprintCallable)
void APUMG_HUD::OnQuit()
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(10211);

	APUMG_HUD_OnQuit_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function PlatformUMG.PUMG_HUD.OnNavigateBack
//		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
//		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool APUMG_HUD::OnNavigateBack()
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(10210);

	APUMG_HUD_OnNavigateBack_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00B482B0
//		Name   -> Function PlatformUMG.PUMG_HUD.OnConfirmQuit
//		Flags  -> (Native, Protected)
void APUMG_HUD::OnConfirmQuit()
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(10209);

	APUMG_HUD_OnConfirmQuit_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00B48280
//		Name   -> Function PlatformUMG.PUMG_HUD.NewPlayerInfo
//		Flags  -> (Final, Native, Protected)
// Parameters:
//		class UPUMG_PlayerInfo*                            ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class UPUMG_PlayerInfo* APUMG_HUD::NewPlayerInfo()
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(10208);

	APUMG_HUD_NewPlayerInfo_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00B47DE0
//		Name   -> Function PlatformUMG.PUMG_HUD.IsLobbyHUD
//		Flags  -> (Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
//		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool APUMG_HUD::IsLobbyHUD()
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(10207);

	APUMG_HUD_IsLobbyHUD_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00B43A40
//		Name   -> Function PlatformUMG.PUMG_HUD.IsCrossplayEnabled
//		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
//		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool APUMG_HUD::IsCrossplayEnabled()
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(10206);

	APUMG_HUD_IsCrossplayEnabled_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00B47D60
//		Name   -> Function PlatformUMG.PUMG_HUD.InputStateChangePassthrough
//		Flags  -> (Final, Native, Public)
// Parameters:
//		TEnumAsByte<PlatformGameFramework_EPGAME_INPUT_STATE> InputState                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void APUMG_HUD::InputStateChangePassthrough(TEnumAsByte<PlatformGameFramework_EPGAME_INPUT_STATE> InputState)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(10205);

	APUMG_HUD_InputStateChangePassthrough_Params params {};
	params.InputState = InputState;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00B49610
//		Name   -> Function PlatformUMG.PUMG_HUD.gmmf
//		Flags  -> (Final, Exec, Native, Protected)
// Parameters:
//		bool                                               bAutolaunch                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void APUMG_HUD::gmmf(bool bAutolaunch)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(10204);

	APUMG_HUD_gmmf_Params params {};
	params.bAutolaunch = bAutolaunch;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00B479A0
//		Name   -> Function PlatformUMG.PUMG_HUD.GetViewManager
//		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
//		class UPUMG_ViewManager*                           ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class UPUMG_ViewManager* APUMG_HUD::GetViewManager()
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(10203);

	APUMG_HUD_GetViewManager_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00B47900
//		Name   -> Function PlatformUMG.PUMG_HUD.GetPortalTokenDetails
//		Flags  -> (Final, Exec, Native, Protected)
void APUMG_HUD::GetPortalTokenDetails()
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(10202);

	APUMG_HUD_GetPortalTokenDetails_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function PlatformUMG.PUMG_HUD.GetPopupManager
//		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
//		class UPUMG_PopupManager*                          ReturnValue                                                (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class UPUMG_PopupManager* APUMG_HUD::GetPopupManager()
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(10201);

	APUMG_HUD_GetPopupManager_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00B478D0
//		Name   -> Function PlatformUMG.PUMG_HUD.GetPlayerControllerOwner
//		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure)
// Parameters:
//		class APlayerController*                           ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class APlayerController* APUMG_HUD::GetPlayerControllerOwner()
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(10200);

	APUMG_HUD_GetPlayerControllerOwner_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00B47840
//		Name   -> Function PlatformUMG.PUMG_HUD.GetOrCreatePlayerInfo
//		Flags  -> (Final, Native, Public)
// Parameters:
//		int64_t                                            PlayerId                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		class UPUMG_PlayerInfo*                            ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class UPUMG_PlayerInfo* APUMG_HUD::GetOrCreatePlayerInfo(int64_t PlayerId)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(10199);

	APUMG_HUD_GetOrCreatePlayerInfo_Params params {};
	params.PlayerId = PlayerId;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00B47740
//		Name   -> Function PlatformUMG.PUMG_HUD.GetInputManager
//		Flags  -> (Final, Native, Public, BlueprintCallable)
// Parameters:
//		class UPUMG_InputManager*                          ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class UPUMG_InputManager* APUMG_HUD::GetInputManager()
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(10198);

	APUMG_HUD_GetInputManager_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00B47540
//		Name   -> Function PlatformUMG.PUMG_HUD.GetCurrentInputState
//		Flags  -> (Final, Native, Public, BlueprintCallable)
// Parameters:
//		TEnumAsByte<PlatformGameFramework_EPGAME_INPUT_STATE> ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
TEnumAsByte<PlatformGameFramework_EPGAME_INPUT_STATE> APUMG_HUD::GetCurrentInputState()
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(10197);

	APUMG_HUD_GetCurrentInputState_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00B47450
//		Name   -> Function PlatformUMG.PUMG_HUD.DisplayGenericPopup
//		Flags  -> (Final, Native, Public, BlueprintCallable)
// Parameters:
//		struct FString                                     sTitle                                                     (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		struct FString                                     sDesc                                                      (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void APUMG_HUD::DisplayGenericPopup(const struct FString& sTitle, const struct FString& sDesc)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(10196);

	APUMG_HUD_DisplayGenericPopup_Params params {};
	params.sTitle = sTitle;
	params.sDesc = sDesc;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00B473B0
//		Name   -> Function PlatformUMG.PUMG_HUD.DisplayGenericError
//		Flags  -> (Final, Native, Public, BlueprintCallable)
// Parameters:
//		struct FString                                     sDesc                                                      (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void APUMG_HUD::DisplayGenericError(const struct FString& sDesc)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(10195);

	APUMG_HUD_DisplayGenericError_Params params {};
	params.sDesc = sDesc;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00B47CE0
//		Name   -> Function PlatformUMG.PUMG_InputManager.HandleModeChange
//		Flags  -> (Final, Native, Public)
// Parameters:
//		TEnumAsByte<PlatformGameFramework_EPGAME_INPUT_STATE> Mode                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UPUMG_InputManager::HandleModeChange(TEnumAsByte<PlatformGameFramework_EPGAME_INPUT_STATE> Mode)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(10221);

	UPUMG_InputManager_HandleModeChange_Params params {};
	params.Mode = Mode;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00B47670
//		Name   -> Function PlatformUMG.PUMG_InputManager.GetFocusedWidget
//		Flags  -> (Final, Native, Public, HasOutParms, BlueprintCallable, BlueprintPure)
// Parameters:
//		class UPUMG_Widget*                                ParentWidget                                               (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		class UWidget*                                     FocusWidget                                                (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UPUMG_InputManager::GetFocusedWidget(class UPUMG_Widget* ParentWidget, class UWidget** FocusWidget)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(10220);

	UPUMG_InputManager_GetFocusedWidget_Params params {};
	params.ParentWidget = ParentWidget;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (FocusWidget != nullptr)
		*FocusWidget = params.FocusWidget;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00B47390
//		Name   -> Function PlatformUMG.PUMG_InputManager.ClearNavInputThrottled
//		Flags  -> (Final, Native, Public)
void UPUMG_InputManager::ClearNavInputThrottled()
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(10219);

	UPUMG_InputManager_ClearNavInputThrottled_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00B47370
//		Name   -> Function PlatformUMG.PUMG_InputManager.ClearNavInputDebouncedThrottled
//		Flags  -> (Final, Native, Public)
void UPUMG_InputManager::ClearNavInputDebouncedThrottled()
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(10218);

	UPUMG_InputManager_ClearNavInputDebouncedThrottled_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00B47C50
//		Name   -> Function PlatformUMG.PUMG_JsonDataFactory.HandleJsonReady
//		Flags  -> (Native, Protected)
// Parameters:
//		class UPGame_LandingPanelJSONHandler*              pHandler                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UPUMG_JsonDataFactory::HandleJsonReady(class UPGame_LandingPanelJSONHandler* pHandler)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(10223);

	UPUMG_JsonDataFactory_HandleJsonReady_Params params {};
	params.pHandler = pHandler;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00B47BC0
//		Name   -> Function PlatformUMG.PUMG_JsonDataFactory.HandleImagesReady
//		Flags  -> (Native, Protected)
// Parameters:
//		class UPGame_LandingPanelJSONHandler*              pHandler                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UPUMG_JsonDataFactory::HandleImagesReady(class UPGame_LandingPanelJSONHandler* pHandler)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(10222);

	UPUMG_JsonDataFactory_HandleImagesReady_Params params {};
	params.pHandler = pHandler;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00B495E0
//		Name   -> Function PlatformUMG.PUMG_LoginDataFactory.UpdateControllers
//		Flags  -> (Final, Native, Public, BlueprintCallable)
// Parameters:
//		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UPUMG_LoginDataFactory::UpdateControllers()
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(10257);

	UPUMG_LoginDataFactory_UpdateControllers_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00B494D0
//		Name   -> Function PlatformUMG.PUMG_LoginDataFactory.UIX_TriggerAutoLogin
//		Flags  -> (Native, Public, BlueprintCallable)
void UPUMG_LoginDataFactory::UIX_TriggerAutoLogin()
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(10256);

	UPUMG_LoginDataFactory_UIX_TriggerAutoLogin_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00B493F0
//		Name   -> Function PlatformUMG.PUMG_LoginDataFactory.UIX_OnTwoFactorSubmit
//		Flags  -> (Final, Native, Public, BlueprintCallable)
// Parameters:
//		struct FString                                     AuthCode                                                   (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UPUMG_LoginDataFactory::UIX_OnTwoFactorSubmit(const struct FString& AuthCode)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(10255);

	UPUMG_LoginDataFactory_UIX_OnTwoFactorSubmit_Params params {};
	params.AuthCode = AuthCode;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00B48CF0
//		Name   -> Function PlatformUMG.PUMG_LoginDataFactory.UIX_OnTwoFactorDecline
//		Flags  -> (Final, Native, Public, BlueprintCallable)
void UPUMG_LoginDataFactory::UIX_OnTwoFactorDecline()
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(10254);

	UPUMG_LoginDataFactory_UIX_OnTwoFactorDecline_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00B49280
//		Name   -> Function PlatformUMG.PUMG_LoginDataFactory.UIX_OnSubmitLogin
//		Flags  -> (Final, Native, Public, BlueprintCallable)
// Parameters:
//		struct FString                                     UserName                                                   (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		struct FString                                     password                                                   (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UPUMG_LoginDataFactory::UIX_OnSubmitLogin(const struct FString& UserName, const struct FString& password)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(10253);

	UPUMG_LoginDataFactory_UIX_OnSubmitLogin_Params params {};
	params.UserName = UserName;
	params.password = password;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00B49200
//		Name   -> Function PlatformUMG.PUMG_LoginDataFactory.UIX_OnSubmitConsoleLogin
//		Flags  -> (Final, Native, Public, BlueprintCallable)
// Parameters:
//		int                                                ControllerId                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UPUMG_LoginDataFactory::UIX_OnSubmitConsoleLogin(int ControllerId)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(10252);

	UPUMG_LoginDataFactory_UIX_OnSubmitConsoleLogin_Params params {};
	params.ControllerId = ControllerId;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00B49200
//		Name   -> Function PlatformUMG.PUMG_LoginDataFactory.UIX_OnSubmitAutoLogin
//		Flags  -> (Final, Native, Public, BlueprintCallable)
// Parameters:
//		int                                                ControllerId                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UPUMG_LoginDataFactory::UIX_OnSubmitAutoLogin(int ControllerId)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(10251);

	UPUMG_LoginDataFactory_UIX_OnSubmitAutoLogin_Params params {};
	params.ControllerId = ControllerId;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00B49120
//		Name   -> Function PlatformUMG.PUMG_LoginDataFactory.UIX_OnPlayerCreate
//		Flags  -> (Final, Native, Public, BlueprintCallable)
// Parameters:
//		struct FString                                     PlayerName                                                 (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UPUMG_LoginDataFactory::UIX_OnPlayerCreate(const struct FString& PlayerName)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(10250);

	UPUMG_LoginDataFactory_UIX_OnPlayerCreate_Params params {};
	params.PlayerName = PlayerName;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00B48FB0
//		Name   -> Function PlatformUMG.PUMG_LoginDataFactory.UIX_OnLinkExistingAccount
//		Flags  -> (Final, Native, Public, BlueprintCallable)
// Parameters:
//		struct FString                                     UserName                                                   (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		struct FString                                     password                                                   (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UPUMG_LoginDataFactory::UIX_OnLinkExistingAccount(const struct FString& UserName, const struct FString& password)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(10249);

	UPUMG_LoginDataFactory_UIX_OnLinkExistingAccount_Params params {};
	params.UserName = UserName;
	params.password = password;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00B48F90
//		Name   -> Function PlatformUMG.PUMG_LoginDataFactory.UIX_OnLinkDecline
//		Flags  -> (Final, Native, Public, BlueprintCallable)
void UPUMG_LoginDataFactory::UIX_OnLinkDecline()
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(10248);

	UPUMG_LoginDataFactory_UIX_OnLinkDecline_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00B48D50
//		Name   -> Function PlatformUMG.PUMG_LoginDataFactory.UIX_OnLinkCreateAccount
//		Flags  -> (Final, Native, Public, BlueprintCallable)
// Parameters:
//		struct FString                                     UserName                                                   (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		struct FString                                     password                                                   (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		struct FString                                     Email                                                      (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		bool                                               bAcceptAgeReqs                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UPUMG_LoginDataFactory::UIX_OnLinkCreateAccount(const struct FString& UserName, const struct FString& password, const struct FString& Email, bool bAcceptAgeReqs)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(10247);

	UPUMG_LoginDataFactory_UIX_OnLinkCreateAccount_Params params {};
	params.UserName = UserName;
	params.password = password;
	params.Email = Email;
	params.bAcceptAgeReqs = bAcceptAgeReqs;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00B48CF0
//		Name   -> Function PlatformUMG.PUMG_LoginDataFactory.UIX_OnEulaDecline
//		Flags  -> (Final, Native, Public, BlueprintCallable)
void UPUMG_LoginDataFactory::UIX_OnEulaDecline()
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(10246);

	UPUMG_LoginDataFactory_UIX_OnEulaDecline_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00B48D30
//		Name   -> Function PlatformUMG.PUMG_LoginDataFactory.UIX_OnEulaAccept
//		Flags  -> (Final, Native, Public, BlueprintCallable)
void UPUMG_LoginDataFactory::UIX_OnEulaAccept()
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(10245);

	UPUMG_LoginDataFactory_UIX_OnEulaAccept_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00B48D10
//		Name   -> Function PlatformUMG.PUMG_LoginDataFactory.UIX_OnChangeUserAccount
//		Flags  -> (Final, Native, Public, BlueprintCallable)
void UPUMG_LoginDataFactory::UIX_OnChangeUserAccount()
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(10244);

	UPUMG_LoginDataFactory_UIX_OnChangeUserAccount_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00B48CF0
//		Name   -> Function PlatformUMG.PUMG_LoginDataFactory.UIX_OnCancelLogin
//		Flags  -> (Final, Native, Public, BlueprintCallable)
void UPUMG_LoginDataFactory::UIX_OnCancelLogin()
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(10243);

	UPUMG_LoginDataFactory_UIX_OnCancelLogin_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00B48AB0
//		Name   -> Function PlatformUMG.PUMG_LoginDataFactory.UIX_OnAccountCreate
//		Flags  -> (Final, Native, Public, BlueprintCallable)
// Parameters:
//		struct FString                                     UserName                                                   (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		struct FString                                     password                                                   (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		struct FString                                     Email                                                      (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		bool                                               bAcceptAgeReqs                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UPUMG_LoginDataFactory::UIX_OnAccountCreate(const struct FString& UserName, const struct FString& password, const struct FString& Email, bool bAcceptAgeReqs)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(10242);

	UPUMG_LoginDataFactory_UIX_OnAccountCreate_Params params {};
	params.UserName = UserName;
	params.password = password;
	params.Email = Email;
	params.bAcceptAgeReqs = bAcceptAgeReqs;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00B48A90
//		Name   -> Function PlatformUMG.PUMG_LoginDataFactory.TriggerAutoLogin
//		Flags  -> (Native, Public)
void UPUMG_LoginDataFactory::TriggerAutoLogin()
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(10241);

	UPUMG_LoginDataFactory_TriggerAutoLogin_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00B48850
//		Name   -> Function PlatformUMG.PUMG_LoginDataFactory.ShouldDisplayUsername
//		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
//		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UPUMG_LoginDataFactory::ShouldDisplayUsername()
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(10240);

	UPUMG_LoginDataFactory_ShouldDisplayUsername_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00B48820
//		Name   -> Function PlatformUMG.PUMG_LoginDataFactory.ShouldDisplayDisconnectError
//		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
//		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UPUMG_LoginDataFactory::ShouldDisplayDisconnectError()
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(10239);

	UPUMG_LoginDataFactory_ShouldDisplayDisconnectError_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00B487A0
//		Name   -> Function PlatformUMG.PUMG_LoginDataFactory.SetUserErrorDataTable
//		Flags  -> (Final, Native, Public, BlueprintCallable)
// Parameters:
//		class UDataTable*                                  ErrorMsgTable                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UPUMG_LoginDataFactory::SetUserErrorDataTable(class UDataTable* ErrorMsgTable)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(10238);

	UPUMG_LoginDataFactory_SetUserErrorDataTable_Params params {};
	params.ErrorMsgTable = ErrorMsgTable;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00B482F0
//		Name   -> Function PlatformUMG.PUMG_LoginDataFactory.RecordLoginState
//		Flags  -> (Final, Native, Private)
// Parameters:
//		PlatformUMG_EPUMG_LoginState                       NewState                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UPUMG_LoginDataFactory::RecordLoginState(PlatformUMG_EPUMG_LoginState NewState)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(10237);

	UPUMG_LoginDataFactory_RecordLoginState_Params params {};
	params.NewState = NewState;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00B48160
//		Name   -> Function PlatformUMG.PUMG_LoginDataFactory.LoginEvent_ShowAgreements
//		Flags  -> (Final, Native, Private)
// Parameters:
//		bool                                               bNeedsEULA                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		bool                                               bNeedsTOS                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		bool                                               bNeedsPP                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UPUMG_LoginDataFactory::LoginEvent_ShowAgreements(bool bNeedsEULA, bool bNeedsTOS, bool bNeedsPP)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(10236);

	UPUMG_LoginDataFactory_LoginEvent_ShowAgreements_Params params {};
	params.bNeedsEULA = bNeedsEULA;
	params.bNeedsTOS = bNeedsTOS;
	params.bNeedsPP = bNeedsPP;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00B48060
//		Name   -> Function PlatformUMG.PUMG_LoginDataFactory.LoginEvent_Queued
//		Flags  -> (Final, Native, Private)
// Parameters:
//		uint32_t                                           QueuePosition                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		uint32_t                                           QueueSize                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		uint32_t                                           queueEstimatedWait                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UPUMG_LoginDataFactory::LoginEvent_Queued(uint32_t QueuePosition, uint32_t QueueSize, uint32_t queueEstimatedWait)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(10235);

	UPUMG_LoginDataFactory_LoginEvent_Queued_Params params {};
	params.QueuePosition = QueuePosition;
	params.QueueSize = QueueSize;
	params.queueEstimatedWait = queueEstimatedWait;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00B48040
//		Name   -> Function PlatformUMG.PUMG_LoginDataFactory.LoginEvent_LoginRequested
//		Flags  -> (Final, Native, Private)
void UPUMG_LoginDataFactory::LoginEvent_LoginRequested()
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(10234);

	UPUMG_LoginDataFactory_LoginEvent_LoginRequested_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00B48020
//		Name   -> Function PlatformUMG.PUMG_LoginDataFactory.LoginEvent_LoggedIn
//		Flags  -> (Final, Native, Private)
void UPUMG_LoginDataFactory::LoginEvent_LoggedIn()
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(10233);

	UPUMG_LoginDataFactory_LoginEvent_LoggedIn_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00B47F40
//		Name   -> Function PlatformUMG.PUMG_LoginDataFactory.LoginEvent_FailedClient
//		Flags  -> (Final, Native, Private)
// Parameters:
//		struct FText                                       ErrorMsg                                                   (Parm, NativeAccessSpecifierPublic)
void UPUMG_LoginDataFactory::LoginEvent_FailedClient(const struct FText& ErrorMsg)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(10232);

	UPUMG_LoginDataFactory_LoginEvent_FailedClient_Params params {};
	params.ErrorMsg = ErrorMsg;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00B47EC0
//		Name   -> Function PlatformUMG.PUMG_LoginDataFactory.LoginEvent_Failed
//		Flags  -> (Final, Native, Private)
// Parameters:
//		uint32_t                                           ErrorMsgId                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UPUMG_LoginDataFactory::LoginEvent_Failed(uint32_t ErrorMsgId)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(10231);

	UPUMG_LoginDataFactory_LoginEvent_Failed_Params params {};
	params.ErrorMsgId = ErrorMsgId;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00B47E10
//		Name   -> Function PlatformUMG.PUMG_LoginDataFactory.LoadEULAFile
//		Flags  -> (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
// Parameters:
//		struct FString                                     SaveText                                                   (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UPUMG_LoginDataFactory::STATIC_LoadEULAFile(struct FString* SaveText)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(10230);

	UPUMG_LoginDataFactory_LoadEULAFile_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (SaveText != nullptr)
		*SaveText = params.SaveText;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00B47AC0
//		Name   -> Function PlatformUMG.PUMG_LoginDataFactory.HandleControllerPairingChange
//		Flags  -> (Final, Native, Private)
// Parameters:
//		int                                                ControllerIndex                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		int                                                NewUserId                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		int                                                OldUserId                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UPUMG_LoginDataFactory::HandleControllerPairingChange(int ControllerIndex, int NewUserId, int OldUserId)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(10229);

	UPUMG_LoginDataFactory_HandleControllerPairingChange_Params params {};
	params.ControllerIndex = ControllerIndex;
	params.NewUserId = NewUserId;
	params.OldUserId = OldUserId;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00B479C0
//		Name   -> Function PlatformUMG.PUMG_LoginDataFactory.HandleControllerConnectionChange
//		Flags  -> (Final, Native, Private)
// Parameters:
//		bool                                               IsConnection                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		int                                                UserId                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		int                                                ControllerIndex                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UPUMG_LoginDataFactory::HandleControllerConnectionChange(bool IsConnection, int UserId, int ControllerIndex)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(10228);

	UPUMG_LoginDataFactory_HandleControllerConnectionChange_Params params {};
	params.IsConnection = IsConnection;
	params.UserId = UserId;
	params.ControllerIndex = ControllerIndex;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00B47920
//		Name   -> Function PlatformUMG.PUMG_LoginDataFactory.GetVersion
//		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
//		struct FString                                     ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
struct FString UPUMG_LoginDataFactory::STATIC_GetVersion()
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(10227);

	UPUMG_LoginDataFactory_GetVersion_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00B47760
//		Name   -> Function PlatformUMG.PUMG_LoginDataFactory.GetLastDisconnectReason
//		Flags  -> (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
//		struct FText                                       ErrorMsg                                                   (Parm, OutParm, NativeAccessSpecifierPublic)
//		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UPUMG_LoginDataFactory::GetLastDisconnectReason(struct FText* ErrorMsg)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(10226);

	UPUMG_LoginDataFactory_GetLastDisconnectReason_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (ErrorMsg != nullptr)
		*ErrorMsg = params.ErrorMsg;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00B47590
//		Name   -> Function PlatformUMG.PUMG_LoginDataFactory.GetCurrentPlayerName
//		Flags  -> (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
//		struct FText                                       NameText                                                   (Parm, OutParm, NativeAccessSpecifierPublic)
//		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UPUMG_LoginDataFactory::GetCurrentPlayerName(struct FText* NameText)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(10225);

	UPUMG_LoginDataFactory_GetCurrentPlayerName_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (NameText != nullptr)
		*NameText = params.NameText;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00B47570
//		Name   -> Function PlatformUMG.PUMG_LoginDataFactory.GetCurrentLoginState
//		Flags  -> (Final, Native, Public, BlueprintCallable)
// Parameters:
//		PlatformUMG_EPUMG_LoginState                       ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
PlatformUMG_EPUMG_LoginState UPUMG_LoginDataFactory::GetCurrentLoginState()
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(10224);

	UPUMG_LoginDataFactory_GetCurrentLoginState_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00B50150
//		Name   -> Function PlatformUMG.PUMG_PartyDataFactory.UIX_PromoteMemberToLeader
//		Flags  -> (Native, Public, BlueprintCallable)
// Parameters:
//		int64_t                                            PlayerId                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UPUMG_PartyDataFactory::UIX_PromoteMemberToLeader(int64_t PlayerId)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(10287);

	UPUMG_PartyDataFactory_UIX_PromoteMemberToLeader_Params params {};
	params.PlayerId = PlayerId;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00B50130
//		Name   -> Function PlatformUMG.PUMG_PartyDataFactory.UIX_LeaveParty
//		Flags  -> (Native, Public, BlueprintCallable)
void UPUMG_PartyDataFactory::UIX_LeaveParty()
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(10286);

	UPUMG_PartyDataFactory_UIX_LeaveParty_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00B500A0
//		Name   -> Function PlatformUMG.PUMG_PartyDataFactory.UIX_KickMemberFromParty
//		Flags  -> (Native, Public, BlueprintCallable)
// Parameters:
//		int64_t                                            PlayerId                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UPUMG_PartyDataFactory::UIX_KickMemberFromParty(int64_t PlayerId)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(10285);

	UPUMG_PartyDataFactory_UIX_KickMemberFromParty_Params params {};
	params.PlayerId = PlayerId;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00B50000
//		Name   -> Function PlatformUMG.PUMG_PartyDataFactory.UIX_InviteMemberToParty
//		Flags  -> (Native, Public, BlueprintCallable)
// Parameters:
//		int64_t                                            PlayerId                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UPUMG_PartyDataFactory::UIX_InviteMemberToParty(int64_t PlayerId)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(10284);

	UPUMG_PartyDataFactory_UIX_InviteMemberToParty_Params params {};
	params.PlayerId = PlayerId;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00B4FF70
//		Name   -> Function PlatformUMG.PUMG_PartyDataFactory.UIX_GiveInvitePermission
//		Flags  -> (Native, Public, BlueprintCallable)
// Parameters:
//		int64_t                                            PlayerId                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UPUMG_PartyDataFactory::UIX_GiveInvitePermission(int64_t PlayerId)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(10283);

	UPUMG_PartyDataFactory_UIX_GiveInvitePermission_Params params {};
	params.PlayerId = PlayerId;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00B4FF50
//		Name   -> Function PlatformUMG.PUMG_PartyDataFactory.UIX_DisbandParty
//		Flags  -> (Native, Public, BlueprintCallable)
void UPUMG_PartyDataFactory::UIX_DisbandParty()
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(10282);

	UPUMG_PartyDataFactory_UIX_DisbandParty_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00B4FF30
//		Name   -> Function PlatformUMG.PUMG_PartyDataFactory.UIX_DenyPartyInvitation
//		Flags  -> (Final, Native, Public, BlueprintCallable)
void UPUMG_PartyDataFactory::UIX_DenyPartyInvitation()
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(10281);

	UPUMG_PartyDataFactory_UIX_DenyPartyInvitation_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00B4FF10
//		Name   -> Function PlatformUMG.PUMG_PartyDataFactory.UIX_AcceptPartyInvitation
//		Flags  -> (Final, Native, Public, BlueprintCallable)
void UPUMG_PartyDataFactory::UIX_AcceptPartyInvitation()
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(10280);

	UPUMG_PartyDataFactory_UIX_AcceptPartyInvitation_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00B4FC50
//		Name   -> Function PlatformUMG.PUMG_PartyDataFactory.SetPartyInfo
//		Flags  -> (Final, Native, Public, BlueprintCallable)
// Parameters:
//		struct FString                                     Key                                                        (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		struct FString                                     Value                                                      (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UPUMG_PartyDataFactory::SetPartyInfo(const struct FString& Key, const struct FString& Value)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(10279);

	UPUMG_PartyDataFactory_SetPartyInfo_Params params {};
	params.Key = Key;
	params.Value = Value;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00B4FAA0
//		Name   -> Function PlatformUMG.PUMG_PartyDataFactory.SendPartyMessage
//		Flags  -> (Final, Native, Public, BlueprintCallable)
// Parameters:
//		struct FString                                     Data                                                       (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UPUMG_PartyDataFactory::SendPartyMessage(const struct FString& Data)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(10278);

	UPUMG_PartyDataFactory_SendPartyMessage_Params params {};
	params.Data = Data;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00B4FA00
//		Name   -> Function PlatformUMG.PUMG_PartyDataFactory.PartyPromoteResponse
//		Flags  -> (Final, Native, Public)
void UPUMG_PartyDataFactory::PartyPromoteResponse()
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(10277);

	UPUMG_PartyDataFactory_PartyPromoteResponse_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00B4F9E0
//		Name   -> Function PlatformUMG.PUMG_PartyDataFactory.PartyLeaveResponse
//		Flags  -> (Final, Native, Public)
void UPUMG_PartyDataFactory::PartyLeaveResponse()
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(10276);

	UPUMG_PartyDataFactory_PartyLeaveResponse_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00B4F9C0
//		Name   -> Function PlatformUMG.PUMG_PartyDataFactory.PartyKickResponse
//		Flags  -> (Final, Native, Public)
void UPUMG_PartyDataFactory::PartyKickResponse()
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(10275);

	UPUMG_PartyDataFactory_PartyKickResponse_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00B4F540
//		Name   -> Function PlatformUMG.PUMG_PartyDataFactory.IsPlayerInParty
//		Flags  -> (Native, Public, BlueprintCallable)
// Parameters:
//		int64_t                                            PlayerId                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UPUMG_PartyDataFactory::IsPlayerInParty(int64_t PlayerId)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(10274);

	UPUMG_PartyDataFactory_IsPlayerInParty_Params params {};
	params.PlayerId = PlayerId;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00B4F520
//		Name   -> Function PlatformUMG.PUMG_PartyDataFactory.IsPartyMaxed
//		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
//		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UPUMG_PartyDataFactory::IsPartyMaxed()
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(10273);

	UPUMG_PartyDataFactory_IsPartyMaxed_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00B4F4F0
//		Name   -> Function PlatformUMG.PUMG_PartyDataFactory.IsLeader
//		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
//		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UPUMG_PartyDataFactory::IsLeader()
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(10272);

	UPUMG_PartyDataFactory_IsLeader_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00B4F490
//		Name   -> Function PlatformUMG.PUMG_PartyDataFactory.IsInParty
//		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
//		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UPUMG_PartyDataFactory::IsInParty()
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(10271);

	UPUMG_PartyDataFactory_IsInParty_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00B4F1E0
//		Name   -> Function PlatformUMG.PUMG_PartyDataFactory.HasInvitePrivileges
//		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
//		int64_t                                            PlayerId                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UPUMG_PartyDataFactory::HasInvitePrivileges(int64_t PlayerId)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(10270);

	UPUMG_PartyDataFactory_HasInvitePrivileges_Params params {};
	params.PlayerId = PlayerId;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00B4EF00
//		Name   -> Function PlatformUMG.PUMG_PartyDataFactory.GetQueueId
//		Flags  -> (Final, Native, Public, BlueprintCallable)
// Parameters:
//		int                                                ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
int UPUMG_PartyDataFactory::GetQueueId()
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(10269);

	UPUMG_PartyDataFactory_GetQueueId_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00B4ED40
//		Name   -> Function PlatformUMG.PUMG_PartyDataFactory.GetPartyMemeberName
//		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure)
// Parameters:
//		int64_t                                            PlayerId                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		struct FText                                       ReturnValue                                                (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
struct FText UPUMG_PartyDataFactory::GetPartyMemeberName(int64_t PlayerId)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(10268);

	UPUMG_PartyDataFactory_GetPartyMemeberName_Params params {};
	params.PlayerId = PlayerId;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00B4EBB0
//		Name   -> Function PlatformUMG.PUMG_PartyDataFactory.GetPartyMembers
//		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
//		TArray<struct FPUMG_PartyMemberData>               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
TArray<struct FPUMG_PartyMemberData> UPUMG_PartyDataFactory::GetPartyMembers()
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(10267);

	UPUMG_PartyDataFactory_GetPartyMembers_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00B4EB90
//		Name   -> Function PlatformUMG.PUMG_PartyDataFactory.GetPartyMemberCount
//		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
//		int                                                ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
int UPUMG_PartyDataFactory::GetPartyMemberCount()
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(10266);

	UPUMG_PartyDataFactory_GetPartyMemberCount_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00B4EA60
//		Name   -> Function PlatformUMG.PUMG_PartyDataFactory.GetPartyMemberByID
//		Flags  -> (Final, Native, Public, BlueprintCallable)
// Parameters:
//		int64_t                                            PlayerId                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		struct FPUMG_PartyMemberData                       ReturnValue                                                (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
struct FPUMG_PartyMemberData UPUMG_PartyDataFactory::GetPartyMemberByID(int64_t PlayerId)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(10265);

	UPUMG_PartyDataFactory_GetPartyMemberByID_Params params {};
	params.PlayerId = PlayerId;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00B4EA40
//		Name   -> Function PlatformUMG.PUMG_PartyDataFactory.GetPartyInviter
//		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
//		class UPUMG_PlayerInfo*                            ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class UPUMG_PlayerInfo* UPUMG_PartyDataFactory::GetPartyInviter()
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(10264);

	UPUMG_PartyDataFactory_GetPartyInviter_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00B4EA20
//		Name   -> Function PlatformUMG.PUMG_PartyDataFactory.GetPartyInviteMode
//		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
//		PlatformUMG_EPUMG_PartyInviteRightsMode            ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
PlatformUMG_EPUMG_PartyInviteRightsMode UPUMG_PartyDataFactory::GetPartyInviteMode()
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(10263);

	UPUMG_PartyDataFactory_GetPartyInviteMode_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00B4E930
//		Name   -> Function PlatformUMG.PUMG_PartyDataFactory.GetPartyInfo
//		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
//		struct FString                                     Key                                                        (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		struct FString                                     ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
struct FString UPUMG_PartyDataFactory::GetPartyInfo(const struct FString& Key)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(10262);

	UPUMG_PartyDataFactory_GetPartyInfo_Params params {};
	params.Key = Key;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00B4E750
//		Name   -> Function PlatformUMG.PUMG_PartyDataFactory.GetMaxPartyMembers
//		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
//		int                                                ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
int UPUMG_PartyDataFactory::GetMaxPartyMembers()
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(10261);

	UPUMG_PartyDataFactory_GetMaxPartyMembers_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00B4E0B0
//		Name   -> Function PlatformUMG.PUMG_PartyDataFactory.CheckPartyMemberIsLeader
//		Flags  -> (Final, Native, Public, BlueprintCallable)
// Parameters:
//		int64_t                                            PlayerId                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UPUMG_PartyDataFactory::CheckPartyMemberIsLeader(int64_t PlayerId)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(10260);

	UPUMG_PartyDataFactory_CheckPartyMemberIsLeader_Params params {};
	params.PlayerId = PlayerId;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00B4F940
//		Name   -> Function PlatformUMG.PUMG_PlayerDataFactory.OnSelectAvatar
//		Flags  -> (Final, Native, Public, BlueprintCallable)
// Parameters:
//		int                                                ItemId                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UPUMG_PlayerDataFactory::OnSelectAvatar(int ItemId)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(10289);

	UPUMG_PlayerDataFactory_OnSelectAvatar_Params params {};
	params.ItemId = ItemId;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00B4E290
//		Name   -> Function PlatformUMG.PUMG_PlayerDataFactory.GetAvatarIcon
//		Flags  -> (Native, Public, BlueprintCallable)
void UPUMG_PlayerDataFactory::GetAvatarIcon()
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(10288);

	UPUMG_PlayerDataFactory_GetAvatarIcon_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00B4FB40
//		Name   -> Function PlatformUMG.PUMG_PlayerInfo.SetIgnored
//		Flags  -> (Final, Native, Public, BlueprintCallable)
// Parameters:
//		bool                                               Ignored                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UPUMG_PlayerInfo::SetIgnored(bool Ignored)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(10295);

	UPUMG_PlayerInfo_SetIgnored_Params params {};
	params.Ignored = Ignored;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00B4F400
//		Name   -> Function PlatformUMG.PUMG_PlayerInfo.IsIgnored
//		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
//		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UPUMG_PlayerInfo::IsIgnored()
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(10294);

	UPUMG_PlayerInfo_IsIgnored_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00B4EE50
//		Name   -> Function PlatformUMG.PUMG_PlayerInfo.GetPlayerId
//		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
//		int64_t                                            ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
int64_t UPUMG_PlayerInfo::GetPlayerId()
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(10293);

	UPUMG_PlayerInfo_GetPlayerId_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00B4E7F0
//		Name   -> Function PlatformUMG.PUMG_PlayerInfo.GetName
//		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
//		struct FText                                       ReturnValue                                                (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
struct FText UPUMG_PlayerInfo::GetName()
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(10292);

	UPUMG_PlayerInfo_GetName_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00B4E770
//		Name   -> Function PlatformUMG.PUMG_PlayerInfo.GetMctsName
//		Flags  -> (Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
//		struct FString                                     ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
struct FString UPUMG_PlayerInfo::GetMctsName()
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(10291);

	UPUMG_PlayerInfo_GetMctsName_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00B4E300
//		Name   -> Function PlatformUMG.PUMG_PlayerInfo.GetAvatarItemId
//		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
//		int                                                ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
int UPUMG_PlayerInfo::GetAvatarItemId()
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(10290);

	UPUMG_PlayerInfo_GetAvatarItemId_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00B501E0
//		Name   -> Function PlatformUMG.PUMG_PlayerWhoDataFactory.UIX_SearchByNameForPlayer
//		Flags  -> (Final, Native, Public, BlueprintCallable)
// Parameters:
//		struct FString                                     PlayerName                                                 (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		bool                                               bIncludeOfflinePlayers                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UPUMG_PlayerWhoDataFactory::UIX_SearchByNameForPlayer(const struct FString& PlayerName, bool bIncludeOfflinePlayers)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(10297);

	UPUMG_PlayerWhoDataFactory_UIX_SearchByNameForPlayer_Params params {};
	params.PlayerName = PlayerName;
	params.bIncludeOfflinePlayers = bIncludeOfflinePlayers;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00B4EFF0
//		Name   -> Function PlatformUMG.PUMG_PlayerWhoDataFactory.GetSearchByNameResults
//		Flags  -> (Final, Native, Public, BlueprintCallable)
// Parameters:
//		TArray<class UPUMG_PlayerInfo*>                    ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
TArray<class UPUMG_PlayerInfo*> UPUMG_PlayerWhoDataFactory::GetSearchByNameResults()
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(10296);

	UPUMG_PlayerWhoDataFactory_GetSearchByNameResults_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00B5A100
//		Name   -> Function PlatformUMG.PUMG_Widget.UpdateRegistrationToInputManager
//		Flags  -> (Final, Native, Public, BlueprintCallable)
// Parameters:
//		class UWidget*                                     Widget                                                     (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		int                                                FocusGroup                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		class UWidget*                                     Up                                                         (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		class UWidget*                                     Down                                                       (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		class UWidget*                                     Left                                                       (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		class UWidget*                                     Right                                                      (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UPUMG_Widget::UpdateRegistrationToInputManager(class UWidget* Widget, int FocusGroup, class UWidget* Up, class UWidget* Down, class UWidget* Left, class UWidget* Right)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(6620);

	UPUMG_Widget_UpdateRegistrationToInputManager_Params params {};
	params.Widget = Widget;
	params.FocusGroup = FocusGroup;
	params.Up = Up;
	params.Down = Down;
	params.Left = Left;
	params.Right = Right;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00B5A080
//		Name   -> Function PlatformUMG.PUMG_Widget.UnregisterWidgetFromInputManager
//		Flags  -> (Final, Native, Public, BlueprintCallable)
// Parameters:
//		class UWidget*                                     Widget                                                     (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UPUMG_Widget::UnregisterWidgetFromInputManager(class UWidget* Widget)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(6619);

	UPUMG_Widget_UnregisterWidgetFromInputManager_Params params {};
	params.Widget = Widget;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00B5A000
//		Name   -> Function PlatformUMG.PUMG_Widget.UnregisterFocusGroup
//		Flags  -> (Final, Native, Public, BlueprintCallable)
// Parameters:
//		int                                                FocusGroup                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UPUMG_Widget::UnregisterFocusGroup(int FocusGroup)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(6618);

	UPUMG_Widget_UnregisterFocusGroup_Params params {};
	params.FocusGroup = FocusGroup;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00B59FE0
//		Name   -> Function PlatformUMG.PUMG_Widget.UninitializeWidget
//		Flags  -> (Native, Event, Public, BlueprintCallable, BlueprintEvent)
void UPUMG_Widget::UninitializeWidget()
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(6617);

	UPUMG_Widget_UninitializeWidget_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00B59F60
//		Name   -> Function PlatformUMG.PUMG_Widget.ToggleMobileLayout
//		Flags  -> (Final, Native, Private)
// Parameters:
//		TEnumAsByte<PlatformGameFramework_EPGAME_INPUT_STATE> InputState                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UPUMG_Widget::ToggleMobileLayout(TEnumAsByte<PlatformGameFramework_EPGAME_INPUT_STATE> InputState)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(6616);

	UPUMG_Widget_ToggleMobileLayout_Params params {};
	params.InputState = InputState;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00B59E60
//		Name   -> Function PlatformUMG.PUMG_Widget.SwapViewRoute
//		Flags  -> (Final, Native, Public, BlueprintCallable)
// Parameters:
//		struct FName                                       RouteName                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		struct FName                                       SwapTargetRoute                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		bool                                               ForceTransition                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UPUMG_Widget::SwapViewRoute(const struct FName& RouteName, const struct FName& SwapTargetRoute, bool ForceTransition)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(6615);

	UPUMG_Widget_SwapViewRoute_Params params {};
	params.RouteName = RouteName;
	params.SwapTargetRoute = SwapTargetRoute;
	params.ForceTransition = ForceTransition;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00B59C90
//		Name   -> Function PlatformUMG.PUMG_Widget.StartShowSequence
//		Flags  -> (Native, Event, Public, BlueprintEvent)
// Parameters:
//		struct FName                                       FromRoute                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		struct FName                                       ToRoute                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UPUMG_Widget::StartShowSequence(const struct FName& FromRoute, const struct FName& ToRoute)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(6614);

	UPUMG_Widget_StartShowSequence_Params params {};
	params.FromRoute = FromRoute;
	params.ToRoute = ToRoute;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00B59BC0
//		Name   -> Function PlatformUMG.PUMG_Widget.StartHideSequence
//		Flags  -> (Native, Event, Public, BlueprintEvent)
// Parameters:
//		struct FName                                       FromRoute                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		struct FName                                       ToRoute                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UPUMG_Widget::StartHideSequence(const struct FName& FromRoute, const struct FName& ToRoute)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(6613);

	UPUMG_Widget_StartHideSequence_Params params {};
	params.FromRoute = FromRoute;
	params.ToRoute = ToRoute;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00B59BA0
//		Name   -> Function PlatformUMG.PUMG_Widget.ShowWidget
//		Flags  -> (Native, Public, BlueprintCallable)
void UPUMG_Widget::ShowWidget()
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(6612);

	UPUMG_Widget_ShowWidget_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00B599C0
//		Name   -> Function PlatformUMG.PUMG_Widget.SetPendingRouteData
//		Flags  -> (Final, Native, Public, BlueprintCallable)
// Parameters:
//		struct FName                                       RouteName                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		class UObject*                                     Data                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UPUMG_Widget::SetPendingRouteData(const struct FName& RouteName, class UObject* Data)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(6611);

	UPUMG_Widget_SetPendingRouteData_Params params {};
	params.RouteName = RouteName;
	params.Data = Data;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00B59840
//		Name   -> Function PlatformUMG.PUMG_Widget.SetFocusToWidgetOfGroup
//		Flags  -> (Final, Native, Public, BlueprintCallable)
// Parameters:
//		int                                                FocusGroup                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		class UPUMG_Widget*                                Widget                                                     (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UPUMG_Widget::SetFocusToWidgetOfGroup(int FocusGroup, class UPUMG_Widget* Widget)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(6610);

	UPUMG_Widget_SetFocusToWidgetOfGroup_Params params {};
	params.FocusGroup = FocusGroup;
	params.Widget = Widget;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00B59810
//		Name   -> Function PlatformUMG.PUMG_Widget.SetFocusToThis
//		Flags  -> (Final, Native, Public, BlueprintCallable)
// Parameters:
//		class UWidget*                                     ReturnValue                                                (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class UWidget* UPUMG_Widget::SetFocusToThis()
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(6609);

	UPUMG_Widget_SetFocusToThis_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00B59740
//		Name   -> Function PlatformUMG.PUMG_Widget.SetFocusToGroup
//		Flags  -> (Native, Public, BlueprintCallable)
// Parameters:
//		int                                                FocusGroup                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		bool                                               KeepLastFocus                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UPUMG_Widget::SetFocusToGroup(int FocusGroup, bool KeepLastFocus)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(6608);

	UPUMG_Widget_SetFocusToGroup_Params params {};
	params.FocusGroup = FocusGroup;
	params.KeepLastFocus = KeepLastFocus;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00B59680
//		Name   -> Function PlatformUMG.PUMG_Widget.SetDefaultFocusForGroup
//		Flags  -> (Final, Native, Public, BlueprintCallable)
// Parameters:
//		class UWidget*                                     Widget                                                     (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		int                                                FocusGroup                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UPUMG_Widget::SetDefaultFocusForGroup(class UWidget* Widget, int FocusGroup)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(6607);

	UPUMG_Widget_SetDefaultFocusForGroup_Params params {};
	params.Widget = Widget;
	params.FocusGroup = FocusGroup;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00B594B0
//		Name   -> Function PlatformUMG.PUMG_Widget.RemoveViewRoute
//		Flags  -> (Final, Native, Public, BlueprintCallable)
// Parameters:
//		struct FName                                       RouteName                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		bool                                               ForceTransition                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UPUMG_Widget::RemoveViewRoute(const struct FName& RouteName, bool ForceTransition)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(6606);

	UPUMG_Widget_RemoveViewRoute_Params params {};
	params.RouteName = RouteName;
	params.ForceTransition = ForceTransition;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00B59420
//		Name   -> Function PlatformUMG.PUMG_Widget.RemoveTopViewRoute
//		Flags  -> (Final, Native, Public, BlueprintCallable)
// Parameters:
//		bool                                               ForceTransition                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UPUMG_Widget::RemoveTopViewRoute(bool ForceTransition)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(6605);

	UPUMG_Widget_RemoveTopViewRoute_Params params {};
	params.ForceTransition = ForceTransition;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00B591A0
//		Name   -> Function PlatformUMG.PUMG_Widget.RegisterWidgetToInputManager
//		Flags  -> (Final, Native, Public, BlueprintCallable)
// Parameters:
//		class UWidget*                                     Widget                                                     (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		int                                                FocusGroup                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		class UWidget*                                     Up                                                         (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		class UWidget*                                     Down                                                       (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		class UWidget*                                     Left                                                       (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		class UWidget*                                     Right                                                      (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UPUMG_Widget::RegisterWidgetToInputManager(class UWidget* Widget, int FocusGroup, class UWidget* Up, class UWidget* Down, class UWidget* Left, class UWidget* Right)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(6604);

	UPUMG_Widget_RegisterWidgetToInputManager_Params params {};
	params.Widget = Widget;
	params.FocusGroup = FocusGroup;
	params.Up = Up;
	params.Down = Down;
	params.Left = Left;
	params.Right = Right;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00B58FE0
//		Name   -> Function PlatformUMG.PUMG_Widget.OnShown
//		Flags  -> (Native, Event, Public, BlueprintEvent)
void UPUMG_Widget::OnShown()
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(6603);

	UPUMG_Widget_OnShown_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00B58F20
//		Name   -> Function PlatformUMG.PUMG_Widget.OnHide
//		Flags  -> (Native, Event, Public, BlueprintEvent)
void UPUMG_Widget::OnHide()
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(6602);

	UPUMG_Widget_OnHide_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00B58F00
//		Name   -> Function PlatformUMG.PUMG_Widget.OnGamepadUnhover
//		Flags  -> (Final, Native, Public, BlueprintCallable)
void UPUMG_Widget::OnGamepadUnhover()
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(6601);

	UPUMG_Widget_OnGamepadUnhover_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00B58EE0
//		Name   -> Function PlatformUMG.PUMG_Widget.OnGamepadHover
//		Flags  -> (Final, Native, Public, BlueprintCallable)
void UPUMG_Widget::OnGamepadHover()
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(6600);

	UPUMG_Widget_OnGamepadHover_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function PlatformUMG.PUMG_Widget.OnExitMobileLayout
//		Flags  -> (Event, Public, BlueprintEvent)
void UPUMG_Widget::OnExitMobileLayout()
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(6599);

	UPUMG_Widget_OnExitMobileLayout_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function PlatformUMG.PUMG_Widget.OnEnterMobileLayout
//		Flags  -> (Event, Public, BlueprintEvent)
void UPUMG_Widget::OnEnterMobileLayout()
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(6598);

	UPUMG_Widget_OnEnterMobileLayout_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function PlatformUMG.PUMG_Widget.NavigateUpFailure
//		Flags  -> (Event, Public, BlueprintEvent)
void UPUMG_Widget::NavigateUpFailure()
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(6597);

	UPUMG_Widget_NavigateUpFailure_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function PlatformUMG.PUMG_Widget.NavigateRightFailure
//		Flags  -> (Event, Public, BlueprintEvent)
void UPUMG_Widget::NavigateRightFailure()
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(6596);

	UPUMG_Widget_NavigateRightFailure_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function PlatformUMG.PUMG_Widget.NavigateLeftFailure
//		Flags  -> (Event, Public, BlueprintEvent)
void UPUMG_Widget::NavigateLeftFailure()
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(6595);

	UPUMG_Widget_NavigateLeftFailure_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function PlatformUMG.PUMG_Widget.NavigateDownFailure
//		Flags  -> (Event, Public, BlueprintEvent)
void UPUMG_Widget::NavigateDownFailure()
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(6594);

	UPUMG_Widget_NavigateDownFailure_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00B58EB0
//		Name   -> Function PlatformUMG.PUMG_Widget.NavigateConfirmPressed
//		Flags  -> (Native, Event, Protected, BlueprintCallable, BlueprintEvent)
// Parameters:
//		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UPUMG_Widget::NavigateConfirmPressed()
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(6593);

	UPUMG_Widget_NavigateConfirmPressed_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00B58E90
//		Name   -> Function PlatformUMG.PUMG_Widget.NavigateConfirmCancelled
//		Flags  -> (Native, Event, Protected, BlueprintCallable, BlueprintEvent)
void UPUMG_Widget::NavigateConfirmCancelled()
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(6592);

	UPUMG_Widget_NavigateConfirmCancelled_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00B58E60
//		Name   -> Function PlatformUMG.PUMG_Widget.NavigateConfirm
//		Flags  -> (Native, Event, Protected, BlueprintCallable, BlueprintEvent)
// Parameters:
//		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UPUMG_Widget::NavigateConfirm()
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(6591);

	UPUMG_Widget_NavigateConfirm_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00B58E30
//		Name   -> Function PlatformUMG.PUMG_Widget.NavigateBackPressed
//		Flags  -> (Native, Event, Protected, BlueprintCallable, BlueprintEvent)
// Parameters:
//		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UPUMG_Widget::NavigateBackPressed()
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(6590);

	UPUMG_Widget_NavigateBackPressed_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00B58E10
//		Name   -> Function PlatformUMG.PUMG_Widget.NavigateBackCancelled
//		Flags  -> (Native, Event, Protected, BlueprintCallable, BlueprintEvent)
void UPUMG_Widget::NavigateBackCancelled()
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(6589);

	UPUMG_Widget_NavigateBackCancelled_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00B58DE0
//		Name   -> Function PlatformUMG.PUMG_Widget.NavigateBack
//		Flags  -> (Native, Event, Protected, BlueprintCallable, BlueprintEvent)
// Parameters:
//		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UPUMG_Widget::NavigateBack()
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(6588);

	UPUMG_Widget_NavigateBack_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00B58DB0
//		Name   -> Function PlatformUMG.PUMG_Widget.IsTopViewRoute
//		Flags  -> (Final, Native, Public, BlueprintCallable)
// Parameters:
//		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UPUMG_Widget::IsTopViewRoute()
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(6587);

	UPUMG_Widget_IsTopViewRoute_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00B58C60
//		Name   -> Function PlatformUMG.PUMG_Widget.IsFocusEnabled
//		Flags  -> (Native, Event, Public, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
//		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UPUMG_Widget::IsFocusEnabled()
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(6586);

	UPUMG_Widget_IsFocusEnabled_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function PlatformUMG.PUMG_Widget.InitializeWidgetNavigation
//		Flags  -> (Event, Public, BlueprintEvent)
void UPUMG_Widget::InitializeWidgetNavigation()
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(6585);

	UPUMG_Widget_InitializeWidgetNavigation_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function PlatformUMG.PUMG_Widget.InitializeWidgetButtonListeners
//		Flags  -> (Event, Public, BlueprintEvent)
void UPUMG_Widget::InitializeWidgetButtonListeners()
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(6584);

	UPUMG_Widget_InitializeWidgetButtonListeners_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00B58B70
//		Name   -> Function PlatformUMG.PUMG_Widget.InitializeWidget
//		Flags  -> (Native, Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
//		class APUMG_HUD*                                   HUD                                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UPUMG_Widget::InitializeWidget(class APUMG_HUD* HUD)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(6583);

	UPUMG_Widget_InitializeWidget_Params params {};
	params.HUD = HUD;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00B589D0
//		Name   -> Function PlatformUMG.PUMG_Widget.InheritFocusGroupFromWidget
//		Flags  -> (Final, Native, Public, BlueprintCallable)
// Parameters:
//		int                                                TargetFocusGroupNum                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		class UPUMG_Widget*                                SourceWidget                                               (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		int                                                SourceFocusGroupNum                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UPUMG_Widget::InheritFocusGroupFromWidget(int TargetFocusGroupNum, class UPUMG_Widget* SourceWidget, int SourceFocusGroupNum)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(6582);

	UPUMG_Widget_InheritFocusGroupFromWidget_Params params {};
	params.TargetFocusGroupNum = TargetFocusGroupNum;
	params.SourceWidget = SourceWidget;
	params.SourceFocusGroupNum = SourceFocusGroupNum;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00B589B0
//		Name   -> Function PlatformUMG.PUMG_Widget.HideWidget
//		Flags  -> (Native, Public, BlueprintCallable)
void UPUMG_Widget::HideWidget()
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(6581);

	UPUMG_Widget_HideWidget_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00B587A0
//		Name   -> Function PlatformUMG.PUMG_Widget.GetViewManager
//		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
//		class UPUMG_ViewManager*                           ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class UPUMG_ViewManager* UPUMG_Widget::GetViewManager()
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(6580);

	UPUMG_Widget_GetViewManager_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00B58780
//		Name   -> Function PlatformUMG.PUMG_Widget.GetUsesBlocker
//		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure)
// Parameters:
//		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UPUMG_Widget::GetUsesBlocker()
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(6579);

	UPUMG_Widget_GetUsesBlocker_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00B58610
//		Name   -> Function PlatformUMG.PUMG_Widget.GetPendingRouteData
//		Flags  -> (Final, Native, Public, HasOutParms, BlueprintCallable, BlueprintPure, Const)
// Parameters:
//		struct FName                                       RouteName                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		class UObject*                                     Data                                                       (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UPUMG_Widget::GetPendingRouteData(const struct FName& RouteName, class UObject** Data)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(6578);

	UPUMG_Widget_GetPendingRouteData_Params params {};
	params.RouteName = RouteName;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Data != nullptr)
		*Data = params.Data;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00B584D0
//		Name   -> Function PlatformUMG.PUMG_Widget.GetGeometryFromLastTick
//		Flags  -> (Final, Native, Public, BlueprintCallable)
// Parameters:
//		struct FGeometry                                   ReturnValue                                                (Parm, OutParm, ReturnParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
struct FGeometry UPUMG_Widget::GetGeometryFromLastTick()
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(6577);

	UPUMG_Widget_GetGeometryFromLastTick_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00B58280
//		Name   -> Function PlatformUMG.PUMG_Widget.GetCurrentFocusGroup
//		Flags  -> (Final, Native, Public, HasOutParms, BlueprintCallable, BlueprintPure)
// Parameters:
//		int                                                OutFocusGroup                                              (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UPUMG_Widget::GetCurrentFocusGroup(int* OutFocusGroup)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(6576);

	UPUMG_Widget_GetCurrentFocusGroup_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (OutFocusGroup != nullptr)
		*OutFocusGroup = params.OutFocusGroup;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00B581F0
//		Name   -> Function PlatformUMG.PUMG_Widget.GetCurrentFocusForGroup
//		Flags  -> (Final, Native, Public, BlueprintCallable)
// Parameters:
//		int                                                FocusGroup                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		class UWidget*                                     ReturnValue                                                (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class UWidget* UPUMG_Widget::GetCurrentFocusForGroup(int FocusGroup)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(6575);

	UPUMG_Widget_GetCurrentFocusForGroup_Params params {};
	params.FocusGroup = FocusGroup;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00B57F00
//		Name   -> Function PlatformUMG.PUMG_Widget.GameStateSet
//		Flags  -> (Native, Event, Protected, BlueprintEvent)
// Parameters:
//		class AGameStateBase*                              GameState                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UPUMG_Widget::GameStateSet(class AGameStateBase* GameState)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(6574);

	UPUMG_Widget_GameStateSet_Params params {};
	params.GameState = GameState;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function PlatformUMG.PUMG_Widget.GamepadUnhover
//		Flags  -> (Event, Public, BlueprintEvent)
void UPUMG_Widget::GamepadUnhover()
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(6573);

	UPUMG_Widget_GamepadUnhover_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function PlatformUMG.PUMG_Widget.GamepadHover
//		Flags  -> (Event, Public, BlueprintEvent)
void UPUMG_Widget::GamepadHover()
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(6572);

	UPUMG_Widget_GamepadHover_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00B580C0
//		Name   -> Function PlatformUMG.PUMG_Widget.GamepadButtonUp
//		Flags  -> (Native, Event, Public, BlueprintEvent)
// Parameters:
//		struct FKey                                        Button                                                     (Parm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		struct FEventReply                                 ReturnValue                                                (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
struct FEventReply UPUMG_Widget::GamepadButtonUp(const struct FKey& Button)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(6571);

	UPUMG_Widget_GamepadButtonUp_Params params {};
	params.Button = Button;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00B57F90
//		Name   -> Function PlatformUMG.PUMG_Widget.GamepadButtonDown
//		Flags  -> (Native, Event, Public, BlueprintEvent)
// Parameters:
//		struct FKey                                        Button                                                     (Parm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		struct FEventReply                                 ReturnValue                                                (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
struct FEventReply UPUMG_Widget::GamepadButtonDown(const struct FKey& Button)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(6570);

	UPUMG_Widget_GamepadButtonDown_Params params {};
	params.Button = Button;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function PlatformUMG.PUMG_Widget.FocusGroupNavigateUpFailure
//		Flags  -> (Event, Public, BlueprintEvent)
// Parameters:
//		int                                                FocusGroup                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UPUMG_Widget::FocusGroupNavigateUpFailure(int FocusGroup)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(6569);

	UPUMG_Widget_FocusGroupNavigateUpFailure_Params params {};
	params.FocusGroup = FocusGroup;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function PlatformUMG.PUMG_Widget.FocusGroupNavigateRightFailure
//		Flags  -> (Event, Public, BlueprintEvent)
// Parameters:
//		int                                                FocusGroup                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UPUMG_Widget::FocusGroupNavigateRightFailure(int FocusGroup)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(6568);

	UPUMG_Widget_FocusGroupNavigateRightFailure_Params params {};
	params.FocusGroup = FocusGroup;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function PlatformUMG.PUMG_Widget.FocusGroupNavigateLeftFailure
//		Flags  -> (Event, Public, BlueprintEvent)
// Parameters:
//		int                                                FocusGroup                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UPUMG_Widget::FocusGroupNavigateLeftFailure(int FocusGroup)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(6567);

	UPUMG_Widget_FocusGroupNavigateLeftFailure_Params params {};
	params.FocusGroup = FocusGroup;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function PlatformUMG.PUMG_Widget.FocusGroupNavigateDownFailure
//		Flags  -> (Event, Public, BlueprintEvent)
// Parameters:
//		int                                                FocusGroup                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UPUMG_Widget::FocusGroupNavigateDownFailure(int FocusGroup)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(6566);

	UPUMG_Widget_FocusGroupNavigateDownFailure_Params params {};
	params.FocusGroup = FocusGroup;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00B57ED0
//		Name   -> Function PlatformUMG.PUMG_Widget.ExplicitNavigateUp
//		Flags  -> (Final, Native, Public, BlueprintCallable)
// Parameters:
//		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UPUMG_Widget::ExplicitNavigateUp()
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(6565);

	UPUMG_Widget_ExplicitNavigateUp_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00B57EA0
//		Name   -> Function PlatformUMG.PUMG_Widget.ExplicitNavigateRight
//		Flags  -> (Final, Native, Public, BlueprintCallable)
// Parameters:
//		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UPUMG_Widget::ExplicitNavigateRight()
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(6564);

	UPUMG_Widget_ExplicitNavigateRight_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00B57E70
//		Name   -> Function PlatformUMG.PUMG_Widget.ExplicitNavigateLeft
//		Flags  -> (Final, Native, Public, BlueprintCallable)
// Parameters:
//		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UPUMG_Widget::ExplicitNavigateLeft()
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(6563);

	UPUMG_Widget_ExplicitNavigateLeft_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00B57E40
//		Name   -> Function PlatformUMG.PUMG_Widget.ExplicitNavigateDown
//		Flags  -> (Final, Native, Public, BlueprintCallable)
// Parameters:
//		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UPUMG_Widget::ExplicitNavigateDown()
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(6562);

	UPUMG_Widget_ExplicitNavigateDown_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00B57D50
//		Name   -> Function PlatformUMG.PUMG_Widget.DisplayGenericPopup
//		Flags  -> (Final, Native, Public, BlueprintCallable)
// Parameters:
//		struct FString                                     sTitle                                                     (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		struct FString                                     sDesc                                                      (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UPUMG_Widget::DisplayGenericPopup(const struct FString& sTitle, const struct FString& sDesc)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(6561);

	UPUMG_Widget_DisplayGenericPopup_Params params {};
	params.sTitle = sTitle;
	params.sDesc = sDesc;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00B57CB0
//		Name   -> Function PlatformUMG.PUMG_Widget.DisplayGenericError
//		Flags  -> (Final, Native, Public, BlueprintCallable)
// Parameters:
//		struct FString                                     sDesc                                                      (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UPUMG_Widget::DisplayGenericError(const struct FString& sDesc)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(6560);

	UPUMG_Widget_DisplayGenericError_Params params {};
	params.sDesc = sDesc;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00B57C00
//		Name   -> Function PlatformUMG.PUMG_Widget.ClearNavigationInputThrottle
//		Flags  -> (Final, Native, Public, BlueprintCallable)
void UPUMG_Widget::ClearNavigationInputThrottle()
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(6559);

	UPUMG_Widget_ClearNavigationInputThrottle_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00B57BD0
//		Name   -> Function PlatformUMG.PUMG_Widget.CanCloseOnLogout
//		Flags  -> (Native, Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
//		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UPUMG_Widget::CanCloseOnLogout()
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(6558);

	UPUMG_Widget_CanCloseOnLogout_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00B57BB0
//		Name   -> Function PlatformUMG.PUMG_Widget.CallOnShowSequenceFinished
//		Flags  -> (Final, Native, Public, BlueprintCallable)
void UPUMG_Widget::CallOnShowSequenceFinished()
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(6557);

	UPUMG_Widget_CallOnShowSequenceFinished_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00B57B90
//		Name   -> Function PlatformUMG.PUMG_Widget.CallOnHideSequenceFinished
//		Flags  -> (Final, Native, Public, BlueprintCallable)
void UPUMG_Widget::CallOnHideSequenceFinished()
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(6556);

	UPUMG_Widget_CallOnHideSequenceFinished_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00B57B10
//		Name   -> Function PlatformUMG.PUMG_Widget.BindToInputManager
//		Flags  -> (Final, Native, Public, BlueprintCallable)
// Parameters:
//		int                                                DefaultFocusGroup                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UPUMG_Widget::BindToInputManager(int DefaultFocusGroup)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(6555);

	UPUMG_Widget_BindToInputManager_Params params {};
	params.DefaultFocusGroup = DefaultFocusGroup;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00B57A30
//		Name   -> Function PlatformUMG.PUMG_Widget.AsyncLoadTexture2D
//		Flags  -> (Final, Native, Public, BlueprintCallable)
void UPUMG_Widget::AsyncLoadTexture2D()
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(6554);

	UPUMG_Widget_AsyncLoadTexture2D_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00B578C0
//		Name   -> Function PlatformUMG.PUMG_Widget.AddViewRoute
//		Flags  -> (Final, Native, Public, BlueprintCallable)
// Parameters:
//		struct FName                                       RouteName                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		bool                                               ClearRouteStack                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		bool                                               ForceTransition                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		class UObject*                                     Data                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UPUMG_Widget::AddViewRoute(const struct FName& RouteName, bool ClearRouteStack, bool ForceTransition, class UObject* Data)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(6553);

	UPUMG_Widget_AddViewRoute_Params params {};
	params.RouteName = RouteName;
	params.ClearRouteStack = ClearRouteStack;
	params.ForceTransition = ForceTransition;
	params.Data = Data;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function PlatformUMG.PUMG_PopupManager.ShowPopup
//		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
//		struct FPUMG_PopupConfig                           popupData                                                  (Parm, ContainsInstancedReference, NativeAccessSpecifierPublic)
void UPUMG_PopupManager::ShowPopup(const struct FPUMG_PopupConfig& popupData)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(10306);

	UPUMG_PopupManager_ShowPopup_Params params {};
	params.popupData = popupData;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00B4FA20
//		Name   -> Function PlatformUMG.PUMG_PopupManager.RemovePopup
//		Flags  -> (Final, Native, Public, BlueprintCallable)
// Parameters:
//		int                                                PopupId                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UPUMG_PopupManager::RemovePopup(int PopupId)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(10305);

	UPUMG_PopupManager_RemovePopup_Params params {};
	params.PopupId = PopupId;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00B4F880
//		Name   -> Function PlatformUMG.PUMG_PopupManager.OnPopupResponse
//		Flags  -> (Final, Native, Public, BlueprintCallable)
// Parameters:
//		int                                                nPopupId                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		int                                                nResponseIndex                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UPUMG_PopupManager::OnPopupResponse(int nPopupId, int nResponseIndex)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(10304);

	UPUMG_PopupManager_OnPopupResponse_Params params {};
	params.nPopupId = nPopupId;
	params.nResponseIndex = nResponseIndex;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00B4F860
//		Name   -> Function PlatformUMG.PUMG_PopupManager.OnPopupCanceled
//		Flags  -> (Final, Native, Public, BlueprintCallable)
void UPUMG_PopupManager::OnPopupCanceled()
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(10303);

	UPUMG_PopupManager_OnPopupCanceled_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00B4F840
//		Name   -> Function PlatformUMG.PUMG_PopupManager.NextPopup
//		Flags  -> (Final, Native, Public, BlueprintCallable)
void UPUMG_PopupManager::NextPopup()
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(10302);

	UPUMG_PopupManager_NextPopup_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function PlatformUMG.PUMG_PopupManager.HidePopup
//		Flags  -> (Event, Protected, BlueprintEvent)
void UPUMG_PopupManager::HidePopup()
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(10301);

	UPUMG_PopupManager_HidePopup_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00B4E160
//		Name   -> Function PlatformUMG.PUMG_PopupManager.CloseUnimportantPopups
//		Flags  -> (Final, Native, Public, BlueprintCallable)
void UPUMG_PopupManager::CloseUnimportantPopups()
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(10300);

	UPUMG_PopupManager_CloseUnimportantPopups_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00B4E140
//		Name   -> Function PlatformUMG.PUMG_PopupManager.CloseAllPopups
//		Flags  -> (Final, Native, Public, BlueprintCallable)
void UPUMG_PopupManager::CloseAllPopups()
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(10299);

	UPUMG_PopupManager_CloseAllPopups_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00B4DCE0
//		Name   -> Function PlatformUMG.PUMG_PopupManager.AddPopup
//		Flags  -> (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
//		struct FPUMG_PopupConfig                           popupData                                                  (ConstParm, Parm, OutParm, ReferenceParm, ContainsInstancedReference, NativeAccessSpecifierPublic)
//		int                                                ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
int UPUMG_PopupManager::AddPopup(const struct FPUMG_PopupConfig& popupData)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(10298);

	UPUMG_PopupManager_AddPopup_Params params {};
	params.popupData = popupData;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00B4FE80
//		Name   -> Function PlatformUMG.PUMG_QueueDataFactory.StartCustomMatch
//		Flags  -> (Final, Native, Public, BlueprintCallable)
// Parameters:
//		bool                                               bDoChecks                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UPUMG_QueueDataFactory::StartCustomMatch(bool bDoChecks)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(10346);

	UPUMG_QueueDataFactory_StartCustomMatch_Params params {};
	params.bDoChecks = bDoChecks;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00B4FDC0
//		Name   -> Function PlatformUMG.PUMG_QueueDataFactory.SetPlayerTeamCustomMatch
//		Flags  -> (Final, Native, Public, BlueprintCallable, Const)
// Parameters:
//		int64_t                                            PlayerId                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		int                                                TeamId                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UPUMG_QueueDataFactory::SetPlayerTeamCustomMatch(int64_t PlayerId, int TeamId)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(10345);

	UPUMG_QueueDataFactory_SetPlayerTeamCustomMatch_Params params {};
	params.PlayerId = PlayerId;
	params.TeamId = TeamId;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00B4FD40
//		Name   -> Function PlatformUMG.PUMG_QueueDataFactory.SetPendingMapForCustomQueue
//		Flags  -> (Final, Native, Public, BlueprintCallable)
// Parameters:
//		int                                                MapId                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UPUMG_QueueDataFactory::SetPendingMapForCustomQueue(int MapId)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(10344);

	UPUMG_QueueDataFactory_SetPendingMapForCustomQueue_Params params {};
	params.MapId = MapId;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00B4FBD0
//		Name   -> Function PlatformUMG.PUMG_QueueDataFactory.SetMapForCustomMatch
//		Flags  -> (Final, Native, Public, BlueprintCallable, Const)
// Parameters:
//		int                                                MapId                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UPUMG_QueueDataFactory::SetMapForCustomMatch(int MapId)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(10343);

	UPUMG_QueueDataFactory_SetMapForCustomMatch_Params params {};
	params.MapId = MapId;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00B4F7A0
//		Name   -> Function PlatformUMG.PUMG_QueueDataFactory.LeaveQueue
//		Flags  -> (Native, Public, BlueprintCallable)
// Parameters:
//		bool                                               bLeaveMatch                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UPUMG_QueueDataFactory::LeaveQueue(bool bLeaveMatch)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(10342);

	UPUMG_QueueDataFactory_LeaveQueue_Params params {};
	params.bLeaveMatch = bLeaveMatch;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00B4F720
//		Name   -> Function PlatformUMG.PUMG_QueueDataFactory.KickFromCustomMatch
//		Flags  -> (Final, Native, Public, BlueprintCallable)
// Parameters:
//		int64_t                                            PlayerId                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UPUMG_QueueDataFactory::KickFromCustomMatch(int64_t PlayerId)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(10341);

	UPUMG_QueueDataFactory_KickFromCustomMatch_Params params {};
	params.PlayerId = PlayerId;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00B4F680
//		Name   -> Function PlatformUMG.PUMG_QueueDataFactory.JoinQueue
//		Flags  -> (Native, Public, BlueprintCallable)
// Parameters:
//		int                                                QueueId                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UPUMG_QueueDataFactory::JoinQueue(int QueueId)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(10340);

	UPUMG_QueueDataFactory_JoinQueue_Params params {};
	params.QueueId = QueueId;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00B4F5E0
//		Name   -> Function PlatformUMG.PUMG_QueueDataFactory.IsQueueActive
//		Flags  -> (Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
//		int                                                QueueId                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UPUMG_QueueDataFactory::IsQueueActive(int QueueId)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(10339);

	UPUMG_QueueDataFactory_IsQueueActive_Params params {};
	params.QueueId = QueueId;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00B4F4C0
//		Name   -> Function PlatformUMG.PUMG_QueueDataFactory.IsInQueue
//		Flags  -> (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
//		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UPUMG_QueueDataFactory::STATIC_IsInQueue()
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(10338);

	UPUMG_QueueDataFactory_IsInQueue_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00B4F460
//		Name   -> Function PlatformUMG.PUMG_QueueDataFactory.IsInGame
//		Flags  -> (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
//		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UPUMG_QueueDataFactory::STATIC_IsInGame()
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(10337);

	UPUMG_QueueDataFactory_IsInGame_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00B4F430
//		Name   -> Function PlatformUMG.PUMG_QueueDataFactory.IsInCustomMatch
//		Flags  -> (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
//		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UPUMG_QueueDataFactory::STATIC_IsInCustomMatch()
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(10336);

	UPUMG_QueueDataFactory_IsInCustomMatch_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00B4F370
//		Name   -> Function PlatformUMG.PUMG_QueueDataFactory.IsCustomInvitePending
//		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
//		int64_t                                            PlayerId                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UPUMG_QueueDataFactory::IsCustomInvitePending(int64_t PlayerId)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(10335);

	UPUMG_QueueDataFactory_IsCustomInvitePending_Params params {};
	params.PlayerId = PlayerId;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00B4F2F0
//		Name   -> Function PlatformUMG.PUMG_QueueDataFactory.InviteToCustomMatch
//		Flags  -> (Final, Native, Public, BlueprintCallable)
// Parameters:
//		int64_t                                            PlayerId                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UPUMG_QueueDataFactory::InviteToCustomMatch(int64_t PlayerId)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(10334);

	UPUMG_QueueDataFactory_InviteToCustomMatch_Params params {};
	params.PlayerId = PlayerId;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00B4F270
//		Name   -> Function PlatformUMG.PUMG_QueueDataFactory.IncrementPlayerTeamCustomMatch
//		Flags  -> (Final, Native, Public, BlueprintCallable, Const)
// Parameters:
//		int64_t                                            PlayerId                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UPUMG_QueueDataFactory::IncrementPlayerTeamCustomMatch(int64_t PlayerId)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(10333);

	UPUMG_QueueDataFactory_IncrementPlayerTeamCustomMatch_Params params {};
	params.PlayerId = PlayerId;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00B4F1B0
//		Name   -> Function PlatformUMG.PUMG_QueueDataFactory.HasCurrentMatchId
//		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
//		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UPUMG_QueueDataFactory::STATIC_HasCurrentMatchId()
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(10332);

	UPUMG_QueueDataFactory_HasCurrentMatchId_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00B4F190
//		Name   -> Function PlatformUMG.PUMG_QueueDataFactory.HandleInviteCooldowns
//		Flags  -> (Final, Native, Protected)
void UPUMG_QueueDataFactory::HandleInviteCooldowns()
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(10331);

	UPUMG_QueueDataFactory_HandleInviteCooldowns_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00B4F170
//		Name   -> Function PlatformUMG.PUMG_QueueDataFactory.HandleConfirmKickCustomPlayer
//		Flags  -> (Final, Native, Protected)
void UPUMG_QueueDataFactory::HandleConfirmKickCustomPlayer()
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(10330);

	UPUMG_QueueDataFactory_HandleConfirmKickCustomPlayer_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00B4F140
//		Name   -> Function PlatformUMG.PUMG_QueueDataFactory.GetTimeInQueueSeconds
//		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
//		float                                              ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
float UPUMG_QueueDataFactory::GetTimeInQueueSeconds()
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(10329);

	UPUMG_QueueDataFactory_GetTimeInQueueSeconds_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00B4F0B0
//		Name   -> Function PlatformUMG.PUMG_QueueDataFactory.GetTeamMemberCount
//		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
//		int                                                TeamId                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		int                                                ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
int UPUMG_QueueDataFactory::GetTeamMemberCount(int TeamId)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(10328);

	UPUMG_QueueDataFactory_GetTeamMemberCount_Params params {};
	params.TeamId = TeamId;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00B4EF30
//		Name   -> Function PlatformUMG.PUMG_QueueDataFactory.GetQueueIds
//		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
//		TArray<int>                                        ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
TArray<int> UPUMG_QueueDataFactory::GetQueueIds()
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(10327);

	UPUMG_QueueDataFactory_GetQueueIds_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00B4EE70
//		Name   -> Function PlatformUMG.PUMG_QueueDataFactory.GetPlayerTeamId
//		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
//		int64_t                                            PlayerId                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		int                                                ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
int UPUMG_QueueDataFactory::GetPlayerTeamId(int64_t PlayerId)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(10326);

	UPUMG_QueueDataFactory_GetPlayerTeamId_Params params {};
	params.PlayerId = PlayerId;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00B4EE30
//		Name   -> Function PlatformUMG.PUMG_QueueDataFactory.GetPendingCustomMatchMapId
//		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
//		int                                                ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
int UPUMG_QueueDataFactory::GetPendingCustomMatchMapId()
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(10325);

	UPUMG_QueueDataFactory_GetPendingCustomMatchMapId_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00B4E8A0
//		Name   -> Function PlatformUMG.PUMG_QueueDataFactory.GetNextTeamId
//		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
//		int                                                RelativeToTeamId                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		int                                                ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
int UPUMG_QueueDataFactory::GetNextTeamId(int RelativeToTeamId)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(10324);

	UPUMG_QueueDataFactory_GetNextTeamId_Params params {};
	params.RelativeToTeamId = RelativeToTeamId;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00B4E730
//		Name   -> Function PlatformUMG.PUMG_QueueDataFactory.GetIsJoiningBackfillGame
//		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
//		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UPUMG_QueueDataFactory::GetIsJoiningBackfillGame()
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(10323);

	UPUMG_QueueDataFactory_GetIsJoiningBackfillGame_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00B4E6A0
//		Name   -> Function PlatformUMG.PUMG_QueueDataFactory.GetCustomMatchPermissions
//		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
//		int64_t                                            PlayerId                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		PlatformUMG_EPUMG_CustomMatchPermission            ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
PlatformUMG_EPUMG_CustomMatchPermission UPUMG_QueueDataFactory::GetCustomMatchPermissions(int64_t PlayerId)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(10322);

	UPUMG_QueueDataFactory_GetCustomMatchPermissions_Params params {};
	params.PlayerId = PlayerId;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00B4E610
//		Name   -> Function PlatformUMG.PUMG_QueueDataFactory.GetCustomMatchMembers
//		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure)
// Parameters:
//		TArray<struct FPUMG_CustomMatchMember>             ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
TArray<struct FPUMG_CustomMatchMember> UPUMG_QueueDataFactory::GetCustomMatchMembers()
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(10321);

	UPUMG_QueueDataFactory_GetCustomMatchMembers_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00B4E5E0
//		Name   -> Function PlatformUMG.PUMG_QueueDataFactory.GetCustomMatchMapId
//		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
//		int                                                ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
int UPUMG_QueueDataFactory::GetCustomMatchMapId()
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(10320);

	UPUMG_QueueDataFactory_GetCustomMatchMapId_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00B4E5B0
//		Name   -> Function PlatformUMG.PUMG_QueueDataFactory.GetCustomMatchInviterPlayerInfo
//		Flags  -> (Final, Native, Public, BlueprintCallable)
// Parameters:
//		class UPUMG_PlayerInfo*                            ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class UPUMG_PlayerInfo* UPUMG_QueueDataFactory::GetCustomMatchInviterPlayerInfo()
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(10319);

	UPUMG_QueueDataFactory_GetCustomMatchInviterPlayerInfo_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00B4E580
//		Name   -> Function PlatformUMG.PUMG_QueueDataFactory.GetCurrentQueueMatchState
//		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
//		PlatformUMG_EPUMG_MatchStatus                      ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
PlatformUMG_EPUMG_MatchStatus UPUMG_QueueDataFactory::GetCurrentQueueMatchState()
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(10318);

	UPUMG_QueueDataFactory_GetCurrentQueueMatchState_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00B4E4F0
//		Name   -> Function PlatformUMG.PUMG_QueueDataFactory.GetCurrentQueueId
//		Flags  -> (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
// Parameters:
//		int                                                QueueId                                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UPUMG_QueueDataFactory::STATIC_GetCurrentQueueId(int* QueueId)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(10317);

	UPUMG_QueueDataFactory_GetCurrentQueueId_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (QueueId != nullptr)
		*QueueId = params.QueueId;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00B4E330
//		Name   -> Function PlatformUMG.PUMG_QueueDataFactory.GetBaseQueueInfoById
//		Flags  -> (Final, Native, Public, HasOutParms, BlueprintCallable, BlueprintPure, Const)
// Parameters:
//		int                                                QueueId                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		struct FPUMG_ClientQueueInfo                       InClientQueueInfo                                          (Parm, OutParm, NativeAccessSpecifierPublic)
//		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UPUMG_QueueDataFactory::GetBaseQueueInfoById(int QueueId, struct FPUMG_ClientQueueInfo* InClientQueueInfo)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(10316);

	UPUMG_QueueDataFactory_GetBaseQueueInfoById_Params params {};
	params.QueueId = QueueId;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (InClientQueueInfo != nullptr)
		*InClientQueueInfo = params.InClientQueueInfo;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00B4E270
//		Name   -> Function PlatformUMG.PUMG_QueueDataFactory.DeclineMatchInvite
//		Flags  -> (Native, Public, BlueprintCallable)
void UPUMG_QueueDataFactory::DeclineMatchInvite()
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(10315);

	UPUMG_QueueDataFactory_DeclineMatchInvite_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00B4E180
//		Name   -> Function PlatformUMG.PUMG_QueueDataFactory.CreateCustomMatch
//		Flags  -> (Native, Public, BlueprintCallable)
// Parameters:
//		int                                                QueueId                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		int                                                TeamSize                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		int                                                TaskForceCount                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UPUMG_QueueDataFactory::CreateCustomMatch(int QueueId, int TeamSize, int TaskForceCount)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(10314);

	UPUMG_QueueDataFactory_CreateCustomMatch_Params params {};
	params.QueueId = QueueId;
	params.TeamSize = TeamSize;
	params.TaskForceCount = TaskForceCount;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00B4E020
//		Name   -> Function PlatformUMG.PUMG_QueueDataFactory.CheckCustomMatch
//		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
//		bool                                               bAllowGMOverride                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		PlatformUMG_EPUMG_CustomMatchError                 ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
PlatformUMG_EPUMG_CustomMatchError UPUMG_QueueDataFactory::CheckCustomMatch(bool bAllowGMOverride)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(10313);

	UPUMG_QueueDataFactory_CheckCustomMatch_Params params {};
	params.bAllowGMOverride = bAllowGMOverride;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00B4DFF0
//		Name   -> Function PlatformUMG.PUMG_QueueDataFactory.CanQueue
//		Flags  -> (Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
//		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UPUMG_QueueDataFactory::CanQueue()
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(10312);

	UPUMG_QueueDataFactory_CanQueue_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00B4DF60
//		Name   -> Function PlatformUMG.PUMG_QueueDataFactory.CanLocalPlayerPromoteCustomLobbyPlayer
//		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
//		int64_t                                            PlayerId                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UPUMG_QueueDataFactory::CanLocalPlayerPromoteCustomLobbyPlayer(int64_t PlayerId)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(10311);

	UPUMG_QueueDataFactory_CanLocalPlayerPromoteCustomLobbyPlayer_Params params {};
	params.PlayerId = PlayerId;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00B4DED0
//		Name   -> Function PlatformUMG.PUMG_QueueDataFactory.CanLocalPlayerKickCustomLobbyPlayer
//		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
//		int64_t                                            PlayerId                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UPUMG_QueueDataFactory::CanLocalPlayerKickCustomLobbyPlayer(int64_t PlayerId)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(10310);

	UPUMG_QueueDataFactory_CanLocalPlayerKickCustomLobbyPlayer_Params params {};
	params.PlayerId = PlayerId;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00B4DE40
//		Name   -> Function PlatformUMG.PUMG_QueueDataFactory.CanLocalPlayerControlCustomLobbyPlayer
//		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
//		int64_t                                            PlayerId                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UPUMG_QueueDataFactory::CanLocalPlayerControlCustomLobbyPlayer(int64_t PlayerId)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(10309);

	UPUMG_QueueDataFactory_CanLocalPlayerControlCustomLobbyPlayer_Params params {};
	params.PlayerId = PlayerId;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00B4DDA0
//		Name   -> Function PlatformUMG.PUMG_QueueDataFactory.AttemptRejoinMatch
//		Flags  -> (Native, Public, BlueprintCallable)
// Parameters:
//		bool                                               Forced                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UPUMG_QueueDataFactory::AttemptRejoinMatch(bool Forced)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(10308);

	UPUMG_QueueDataFactory_AttemptRejoinMatch_Params params {};
	params.Forced = Forced;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00B4DCC0
//		Name   -> Function PlatformUMG.PUMG_QueueDataFactory.AcceptMatchInvite
//		Flags  -> (Final, Native, Public, BlueprintCallable)
void UPUMG_QueueDataFactory::AcceptMatchInvite()
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(10307);

	UPUMG_QueueDataFactory_AcceptMatchInvite_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00B54860
//		Name   -> Function PlatformUMG.PUMG_SettingsDataFactory.OnSettingChanged
//		Flags  -> (Native, Public, BlueprintCallable)
// Parameters:
//		struct FName                                       SettingId                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		int                                                SettingValue                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UPUMG_SettingsDataFactory::OnSettingChanged(const struct FName& SettingId, int SettingValue)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(10348);

	UPUMG_SettingsDataFactory_OnSettingChanged_Params params {};
	params.SettingId = SettingId;
	params.SettingValue = SettingValue;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00B48A90
//		Name   -> Function PlatformUMG.PUMG_SettingsDataFactory.InitSettingsForPlayer
//		Flags  -> (Native, Protected, BlueprintCallable)
void UPUMG_SettingsDataFactory::InitSettingsForPlayer()
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(10347);

	UPUMG_SettingsDataFactory_InitSettingsForPlayer_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00B54A80
//		Name   -> Function PlatformUMG.PUMG_StorePurchaseRequest.SubmitPurchaseRequest
//		Flags  -> (Final, Native, Public, BlueprintCallable)
// Parameters:
//		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UPUMG_StorePurchaseRequest::SubmitPurchaseRequest()
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(10349);

	UPUMG_StorePurchaseRequest_SubmitPurchaseRequest_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00B53300
//		Name   -> Function PlatformUMG.PUMG_PortalOffer.GetDiscountPercentage
//		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
//		int                                                ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
int UPUMG_PortalOffer::GetDiscountPercentage()
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(10350);

	UPUMG_PortalOffer_GetDiscountPercentage_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00B53980
//		Name   -> Function PlatformUMG.PUMG_StoreItemPrice.GetPriceWithCoupon
//		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
//		class UPUMG_StoreItem*                             Coupon                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		int                                                ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
int UPUMG_StoreItemPrice::GetPriceWithCoupon(class UPUMG_StoreItem* Coupon)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(10353);

	UPUMG_StoreItemPrice_GetPriceWithCoupon_Params params {};
	params.Coupon = Coupon;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00B53330
//		Name   -> Function PlatformUMG.PUMG_StoreItemPrice.GetDiscountPercentage
//		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
//		int                                                ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
int UPUMG_StoreItemPrice::GetDiscountPercentage()
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(10352);

	UPUMG_StoreItemPrice_GetDiscountPercentage_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00B52F30
//		Name   -> Function PlatformUMG.PUMG_StoreItemPrice.CanAfford
//		Flags  -> (Final, Native, Public, BlueprintCallable)
// Parameters:
//		int                                                Quantity                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		class UPUMG_StoreItem*                             Coupon                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UPUMG_StoreItemPrice::CanAfford(int Quantity, class UPUMG_StoreItem* Coupon)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(10351);

	UPUMG_StoreItemPrice_CanAfford_Params params {};
	params.Quantity = Quantity;
	params.Coupon = Coupon;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00B54C30
//		Name   -> Function PlatformUMG.PUMG_StoreItem.UIX_ShowPurchaseConfirmation
//		Flags  -> (Native, Public, BlueprintCallable)
// Parameters:
//		class UPUMG_StoreItemPrice*                        pPrice                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UPUMG_StoreItem::UIX_ShowPurchaseConfirmation(class UPUMG_StoreItemPrice* pPrice)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(10389);

	UPUMG_StoreItem_UIX_ShowPurchaseConfirmation_Params params {};
	params.pPrice = pPrice;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00B54A50
//		Name   -> Function PlatformUMG.PUMG_StoreItem.ShouldDisplayToUser
//		Flags  -> (Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
//		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UPUMG_StoreItem::ShouldDisplayToUser()
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(10388);

	UPUMG_StoreItem_ShouldDisplayToUser_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00B54930
//		Name   -> Function PlatformUMG.PUMG_StoreItem.PurchaseFromPortal
//		Flags  -> (Final, Native, Public, BlueprintCallable)
void UPUMG_StoreItem::PurchaseFromPortal()
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(10387);

	UPUMG_StoreItem_PurchaseFromPortal_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00B547C0
//		Name   -> Function PlatformUMG.PUMG_StoreItem.IsRented
//		Flags  -> (Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
//		int64_t                                            PlayerId                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UPUMG_StoreItem::IsRented(int64_t PlayerId)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(10386);

	UPUMG_StoreItem_IsRented_Params params {};
	params.PlayerId = PlayerId;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00B54720
//		Name   -> Function PlatformUMG.PUMG_StoreItem.IsRecipeFulfilled
//		Flags  -> (Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
//		int64_t                                            PlayerId                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UPUMG_StoreItem::IsRecipeFulfilled(int64_t PlayerId)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(10385);

	UPUMG_StoreItem_IsRecipeFulfilled_Params params {};
	params.PlayerId = PlayerId;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00B54680
//		Name   -> Function PlatformUMG.PUMG_StoreItem.IsOwned
//		Flags  -> (Native, Public, BlueprintCallable, BlueprintPure)
// Parameters:
//		int64_t                                            PlayerId                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UPUMG_StoreItem::IsOwned(int64_t PlayerId)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(10384);

	UPUMG_StoreItem_IsOwned_Params params {};
	params.PlayerId = PlayerId;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00B54650
//		Name   -> Function PlatformUMG.PUMG_StoreItem.IsOnSale
//		Flags  -> (Native, Public, BlueprintCallable)
// Parameters:
//		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UPUMG_StoreItem::IsOnSale()
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(10383);

	UPUMG_StoreItem_IsOnSale_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00B54620
//		Name   -> Function PlatformUMG.PUMG_StoreItem.IsActive
//		Flags  -> (Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
//		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UPUMG_StoreItem::IsActive()
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(10382);

	UPUMG_StoreItem_IsActive_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00B545F0
//		Name   -> Function PlatformUMG.PUMG_StoreItem.HasPortalOffer
//		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
//		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UPUMG_StoreItem::HasPortalOffer()
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(10381);

	UPUMG_StoreItem_HasPortalOffer_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00B543C0
//		Name   -> Function PlatformUMG.PUMG_StoreItem.GetVendorId
//		Flags  -> (Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
//		int                                                ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
int UPUMG_StoreItem::GetVendorId()
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(10380);

	UPUMG_StoreItem_GetVendorId_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00B54390
//		Name   -> Function PlatformUMG.PUMG_StoreItem.GetUIHint
//		Flags  -> (Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
//		int                                                ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
int UPUMG_StoreItem::GetUIHint()
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(10379);

	UPUMG_StoreItem_GetUIHint_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00B54360
//		Name   -> Function PlatformUMG.PUMG_StoreItem.GetType
//		Flags  -> (Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
//		int                                                ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
int UPUMG_StoreItem::GetType()
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(10378);

	UPUMG_StoreItem_GetType_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00B54330
//		Name   -> Function PlatformUMG.PUMG_StoreItem.GetSubType
//		Flags  -> (Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
//		int                                                ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
int UPUMG_StoreItem::GetSubType()
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(10377);

	UPUMG_StoreItem_GetSubType_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00B53C90
//		Name   -> Function PlatformUMG.PUMG_StoreItem.GetSortOrder
//		Flags  -> (Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
//		int                                                ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
int UPUMG_StoreItem::GetSortOrder()
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(10376);

	UPUMG_StoreItem_GetSortOrder_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00B53C00
//		Name   -> Function PlatformUMG.PUMG_StoreItem.GetSoftItemIconAsPath
//		Flags  -> (Native, Public, HasDefaults, BlueprintCallable, BlueprintPure, Const)
// Parameters:
//		struct FSoftObjectPath                             ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
struct FSoftObjectPath UPUMG_StoreItem::GetSoftItemIconAsPath()
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(10375);

	UPUMG_StoreItem_GetSoftItemIconAsPath_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00B53B90
//		Name   -> Function PlatformUMG.PUMG_StoreItem.GetSoftItemIcon
//		Flags  -> (Native, Public, BlueprintCallable, BlueprintPure, Const)
void UPUMG_StoreItem::GetSoftItemIcon()
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(10374);

	UPUMG_StoreItem_GetSoftItemIcon_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00B53B60
//		Name   -> Function PlatformUMG.PUMG_StoreItem.GetRecipeEntryType
//		Flags  -> (Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
//		int                                                ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
int UPUMG_StoreItem::GetRecipeEntryType()
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(10373);

	UPUMG_StoreItem_GetRecipeEntryType_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00B53AC0
//		Name   -> Function PlatformUMG.PUMG_StoreItem.GetQuantityOwned
//		Flags  -> (Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
//		int64_t                                            PlayerId                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		int                                                ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
int UPUMG_StoreItem::GetQuantityOwned(int64_t PlayerId)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(10372);

	UPUMG_StoreItem_GetQuantityOwned_Params params {};
	params.PlayerId = PlayerId;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00B53A90
//		Name   -> Function PlatformUMG.PUMG_StoreItem.GetPurchaseRequest
//		Flags  -> (Native, Public, BlueprintCallable)
// Parameters:
//		class UPUMG_StorePurchaseRequest*                  ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class UPUMG_StorePurchaseRequest* UPUMG_StoreItem::GetPurchaseRequest()
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(10371);

	UPUMG_StoreItem_GetPurchaseRequest_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00B53A10
//		Name   -> Function PlatformUMG.PUMG_StoreItem.GetPrices
//		Flags  -> (Native, Public, BlueprintCallable, BlueprintPure)
// Parameters:
//		TArray<class UPUMG_StoreItemPrice*>                ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
TArray<class UPUMG_StoreItemPrice*> UPUMG_StoreItem::GetPrices()
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(10370);

	UPUMG_StoreItem_GetPrices_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00B53890
//		Name   -> Function PlatformUMG.PUMG_StoreItem.GetPrice
//		Flags  -> (Native, Public, BlueprintCallable, BlueprintPure)
// Parameters:
//		class UPUMG_StoreItemPrice*                        ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class UPUMG_StoreItemPrice* UPUMG_StoreItem::GetPrice()
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(10369);

	UPUMG_StoreItem_GetPrice_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00B53870
//		Name   -> Function PlatformUMG.PUMG_StoreItem.GetPortalOffer
//		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
//		class UPUMG_PortalOffer*                           ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class UPUMG_PortalOffer* UPUMG_StoreItem::GetPortalOffer()
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(10368);

	UPUMG_StoreItem_GetPortalOffer_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00B53710
//		Name   -> Function PlatformUMG.PUMG_StoreItem.GetName
//		Flags  -> (Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
//		struct FText                                       ReturnValue                                                (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
struct FText UPUMG_StoreItem::GetName()
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(10367);

	UPUMG_StoreItem_GetName_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00B536B0
//		Name   -> Function PlatformUMG.PUMG_StoreItem.GetLootQuantity
//		Flags  -> (Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
//		int                                                ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
int UPUMG_StoreItem::GetLootQuantity()
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(10366);

	UPUMG_StoreItem_GetLootQuantity_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00B53680
//		Name   -> Function PlatformUMG.PUMG_StoreItem.GetLootId
//		Flags  -> (Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
//		int                                                ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
int UPUMG_StoreItem::GetLootId()
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(10365);

	UPUMG_StoreItem_GetLootId_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00B53590
//		Name   -> Function PlatformUMG.PUMG_StoreItem.GetItemId
//		Flags  -> (Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
//		int                                                ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
int UPUMG_StoreItem::GetItemId()
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(10364);

	UPUMG_StoreItem_GetItemId_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00B53530
//		Name   -> Function PlatformUMG.PUMG_StoreItem.GetInventoryItem
//		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
void UPUMG_StoreItem::GetInventoryItem()
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(10363);

	UPUMG_StoreItem_GetInventoryItem_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00B53400
//		Name   -> Function PlatformUMG.PUMG_StoreItem.GetFormattedNameDisplay
//		Flags  -> (Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
//		int                                                ExternalQuantity                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		struct FText                                       ReturnValue                                                (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
struct FText UPUMG_StoreItem::GetFormattedNameDisplay(int ExternalQuantity)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(10362);

	UPUMG_StoreItem_GetFormattedNameDisplay_Params params {};
	params.ExternalQuantity = ExternalQuantity;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00B53360
//		Name   -> Function PlatformUMG.PUMG_StoreItem.GetFormattedDescDisplay
//		Flags  -> (Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
//		struct FText                                       ReturnValue                                                (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
struct FText UPUMG_StoreItem::GetFormattedDescDisplay()
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(10361);

	UPUMG_StoreItem_GetFormattedDescDisplay_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00B53260
//		Name   -> Function PlatformUMG.PUMG_StoreItem.GetDescription
//		Flags  -> (Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
//		struct FText                                       ReturnValue                                                (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
struct FText UPUMG_StoreItem::GetDescription()
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(10360);

	UPUMG_StoreItem_GetDescription_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00B53180
//		Name   -> Function PlatformUMG.PUMG_StoreItem.GetCouponsForPrice
//		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
//		class UPUMG_StoreItemPrice*                        Price                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		TArray<class UPUMG_StoreItem*>                     ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
TArray<class UPUMG_StoreItem*> UPUMG_StoreItem::GetCouponsForPrice(class UPUMG_StoreItemPrice* Price)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(10359);

	UPUMG_StoreItem_GetCouponsForPrice_Params params {};
	params.Price = Price;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00B53150
//		Name   -> Function PlatformUMG.PUMG_StoreItem.GetBundleId
//		Flags  -> (Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
//		int                                                ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
int UPUMG_StoreItem::GetBundleId()
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(10358);

	UPUMG_StoreItem_GetBundleId_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00B53120
//		Name   -> Function PlatformUMG.PUMG_StoreItem.GetBestDiscount
//		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure)
// Parameters:
//		int                                                ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
int UPUMG_StoreItem::GetBestDiscount()
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(10357);

	UPUMG_StoreItem_GetBestDiscount_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00B53090
//		Name   -> Function PlatformUMG.PUMG_StoreItem.GetBestCouponForPrice
//		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
//		class UPUMG_StoreItemPrice*                        Price                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		class UPUMG_StoreItem*                             ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class UPUMG_StoreItem* UPUMG_StoreItem::GetBestCouponForPrice(class UPUMG_StoreItemPrice* Price)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(10356);

	UPUMG_StoreItem_GetBestCouponForPrice_Params params {};
	params.Price = Price;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00B52FF0
//		Name   -> Function PlatformUMG.PUMG_StoreItem.ConfirmGotoPortalOffer
//		Flags  -> (Final, Native, Public, BlueprintCallable)
void UPUMG_StoreItem::ConfirmGotoPortalOffer()
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(10355);

	UPUMG_StoreItem_ConfirmGotoPortalOffer_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00B52E70
//		Name   -> Function PlatformUMG.PUMG_StoreItem.CanAfford
//		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
//		class UPUMG_StoreItemPrice*                        Price                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		int                                                Quantity                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UPUMG_StoreItem::CanAfford(class UPUMG_StoreItemPrice* Price, int Quantity)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(10354);

	UPUMG_StoreItem_CanAfford_Params params {};
	params.Price = Price;
	params.Quantity = Quantity;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00B54480
//		Name   -> Function PlatformUMG.PUMG_XpTable.GetXpAtLevel
//		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
//		int                                                XpLevel                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		int64_t                                            ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
int64_t UPUMG_XpTable::GetXpAtLevel(int XpLevel)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(10395);

	UPUMG_XpTable_GetXpAtLevel_Params params {};
	params.XpLevel = XpLevel;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00B543F0
//		Name   -> Function PlatformUMG.PUMG_XpTable.GetXpAtIndex
//		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
//		int                                                Index                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		int64_t                                            ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
int64_t UPUMG_XpTable::GetXpAtIndex(int Index)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(10394);

	UPUMG_XpTable_GetXpAtIndex_Params params {};
	params.Index = Index;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00B536E0
//		Name   -> Function PlatformUMG.PUMG_XpTable.GetMinXpLevel
//		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
//		int                                                ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
int UPUMG_XpTable::GetMinXpLevel()
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(10393);

	UPUMG_XpTable_GetMinXpLevel_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00B53650
//		Name   -> Function PlatformUMG.PUMG_XpTable.GetLevelCount
//		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
//		int                                                ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
int UPUMG_XpTable::GetLevelCount()
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(10392);

	UPUMG_XpTable_GetLevelCount_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00B535C0
//		Name   -> Function PlatformUMG.PUMG_XpTable.GetLevelAtXp
//		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
//		int64_t                                            XpPoints                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		int                                                ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
int UPUMG_XpTable::GetLevelAtXp(int64_t XpPoints)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(10391);

	UPUMG_XpTable_GetLevelAtXp_Params params {};
	params.XpPoints = XpPoints;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00B53500
//		Name   -> Function PlatformUMG.PUMG_XpTable.GetId
//		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
//		int64_t                                            ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
int64_t UPUMG_XpTable::GetId()
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(10390);

	UPUMG_XpTable_GetId_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00B54B50
//		Name   -> Function PlatformUMG.PUMG_StoreItemHelper.UIX_RedeemCode
//		Flags  -> (Final, Native, Public, BlueprintCallable)
// Parameters:
//		struct FString                                     Code                                                       (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UPUMG_StoreItemHelper::UIX_RedeemCode(const struct FString& Code)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(10412);

	UPUMG_StoreItemHelper_UIX_RedeemCode_Params params {};
	params.Code = Code;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00B54AB0
//		Name   -> Function PlatformUMG.PUMG_StoreItemHelper.UIX_CompletePurchaseItem
//		Flags  -> (Native, Public, BlueprintCallable)
// Parameters:
//		class UPUMG_StorePurchaseRequest*                  PurchaseRequest                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UPUMG_StoreItemHelper::UIX_CompletePurchaseItem(class UPUMG_StorePurchaseRequest* PurchaseRequest)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(10411);

	UPUMG_StoreItemHelper_UIX_CompletePurchaseItem_Params params {};
	params.PurchaseRequest = PurchaseRequest;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00B54950
//		Name   -> Function PlatformUMG.PUMG_StoreItemHelper.RequestVendorData
//		Flags  -> (Native, Public, BlueprintCallable)
// Parameters:
//		TArray<int>                                        VendorIds                                                  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		int                                                ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
int UPUMG_StoreItemHelper::RequestVendorData(TArray<int> VendorIds)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(10410);

	UPUMG_StoreItemHelper_RequestVendorData_Params params {};
	params.VendorIds = VendorIds;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00B545B0
//		Name   -> Function PlatformUMG.PUMG_StoreItemHelper.HasPendingPurchase
//		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
//		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UPUMG_StoreItemHelper::HasPendingPurchase()
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(10409);

	UPUMG_StoreItemHelper_HasPendingPurchase_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00B54510
//		Name   -> Function PlatformUMG.PUMG_StoreItemHelper.GetXpTable
//		Flags  -> (Native, Public, BlueprintCallable, BlueprintPure)
// Parameters:
//		int64_t                                            XpTableId                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		class UPUMG_XpTable*                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class UPUMG_XpTable* UPUMG_StoreItemHelper::GetXpTable(int64_t XpTableId)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(10408);

	UPUMG_StoreItemHelper_GetXpTable_Params params {};
	params.XpTableId = XpTableId;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00B541E0
//		Name   -> Function PlatformUMG.PUMG_StoreItemHelper.GetStoreItemsForVendor
//		Flags  -> (Native, Public, BlueprintCallable, BlueprintPure)
// Parameters:
//		int                                                nVendorId                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		bool                                               bIncludeInactiveItems                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		bool                                               bSearchSubContainers                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		TArray<class UPUMG_StoreItem*>                     ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
TArray<class UPUMG_StoreItem*> UPUMG_StoreItemHelper::GetStoreItemsForVendor(int nVendorId, bool bIncludeInactiveItems, bool bSearchSubContainers)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(10407);

	UPUMG_StoreItemHelper_GetStoreItemsForVendor_Params params {};
	params.nVendorId = nVendorId;
	params.bIncludeInactiveItems = bIncludeInactiveItems;
	params.bSearchSubContainers = bSearchSubContainers;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00B53F40
//		Name   -> Function PlatformUMG.PUMG_StoreItemHelper.GetStoreItemsAndQuantitiesForVendor
//		Flags  -> (Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
//		int                                                nVendorId                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		bool                                               bIncludeInactiveItems                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		bool                                               bSearchSubContainers                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		TMap<int, int>                                     QuantityMap                                                (Parm, OutParm, NativeAccessSpecifierPublic)
//		int                                                ExternalQuantity                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		TArray<class UPUMG_StoreItem*>                     ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
TArray<class UPUMG_StoreItem*> UPUMG_StoreItemHelper::GetStoreItemsAndQuantitiesForVendor(int nVendorId, bool bIncludeInactiveItems, bool bSearchSubContainers, TMap<int, int>* QuantityMap, int ExternalQuantity)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(10406);

	UPUMG_StoreItemHelper_GetStoreItemsAndQuantitiesForVendor_Params params {};
	params.nVendorId = nVendorId;
	params.bIncludeInactiveItems = bIncludeInactiveItems;
	params.bSearchSubContainers = bSearchSubContainers;
	params.ExternalQuantity = ExternalQuantity;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (QuantityMap != nullptr)
		*QuantityMap = params.QuantityMap;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00B53E30
//		Name   -> Function PlatformUMG.PUMG_StoreItemHelper.GetStoreItemForVendorByItemId
//		Flags  -> (Native, Public, BlueprintCallable, BlueprintPure)
// Parameters:
//		int                                                nVendorId                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		int                                                nItemId                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		bool                                               bSearchSubVendors                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		class UPUMG_StoreItem*                             ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class UPUMG_StoreItem* UPUMG_StoreItemHelper::GetStoreItemForVendorByItemId(int nVendorId, int nItemId, bool bSearchSubVendors)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(10405);

	UPUMG_StoreItemHelper_GetStoreItemForVendorByItemId_Params params {};
	params.nVendorId = nVendorId;
	params.nItemId = nItemId;
	params.bSearchSubVendors = bSearchSubVendors;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00B53D60
//		Name   -> Function PlatformUMG.PUMG_StoreItemHelper.GetStoreItemForVendor
//		Flags  -> (Native, Public, BlueprintCallable, BlueprintPure)
// Parameters:
//		int                                                nVendorId                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		int                                                nLootItemId                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		class UPUMG_StoreItem*                             ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class UPUMG_StoreItem* UPUMG_StoreItemHelper::GetStoreItemForVendor(int nVendorId, int nLootItemId)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(10404);

	UPUMG_StoreItemHelper_GetStoreItemForVendor_Params params {};
	params.nVendorId = nVendorId;
	params.nLootItemId = nLootItemId;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00B53CC0
//		Name   -> Function PlatformUMG.PUMG_StoreItemHelper.GetStoreItem
//		Flags  -> (Native, Public, BlueprintCallable, BlueprintPure)
// Parameters:
//		int                                                LootId                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		class UPUMG_StoreItem*                             ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class UPUMG_StoreItem* UPUMG_StoreItemHelper::GetStoreItem(int LootId)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(10403);

	UPUMG_StoreItemHelper_GetStoreItem_Params params {};
	params.LootId = LootId;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00B537B0
//		Name   -> Function PlatformUMG.PUMG_StoreItemHelper.GetPendingPurchaseData
//		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
//		TArray<class UPUMG_StorePurchaseRequest*>          ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
TArray<class UPUMG_StorePurchaseRequest*> UPUMG_StoreItemHelper::GetPendingPurchaseData()
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(10402);

	UPUMG_StoreItemHelper_GetPendingPurchaseData_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00B53070
//		Name   -> Function PlatformUMG.PUMG_StoreItemHelper.ExitInGameStoreUI
//		Flags  -> (Final, Native, Public, BlueprintCallable)
void UPUMG_StoreItemHelper::ExitInGameStoreUI()
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(10401);

	UPUMG_StoreItemHelper_ExitInGameStoreUI_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00B53050
//		Name   -> Function PlatformUMG.PUMG_StoreItemHelper.EnterInGameStoreUI
//		Flags  -> (Final, Native, Public, BlueprintCallable)
void UPUMG_StoreItemHelper::EnterInGameStoreUI()
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(10400);

	UPUMG_StoreItemHelper_EnterInGameStoreUI_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00B53010
//		Name   -> Function PlatformUMG.PUMG_StoreItemHelper.DoesPortalHaveOffers
//		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
//		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UPUMG_StoreItemHelper::DoesPortalHaveOffers()
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(10399);

	UPUMG_StoreItemHelper_DoesPortalHaveOffers_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00B52E50
//		Name   -> Function PlatformUMG.PUMG_StoreItemHelper.AreXpTablesLoaded
//		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure)
// Parameters:
//		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UPUMG_StoreItemHelper::AreXpTablesLoaded()
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(10398);

	UPUMG_StoreItemHelper_AreXpTablesLoaded_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00B52E30
//		Name   -> Function PlatformUMG.PUMG_StoreItemHelper.ArePricePointsLoaded
//		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure)
// Parameters:
//		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UPUMG_StoreItemHelper::ArePricePointsLoaded()
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(10397);

	UPUMG_StoreItemHelper_ArePricePointsLoaded_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00B52E10
//		Name   -> Function PlatformUMG.PUMG_StoreItemHelper.ArePortalOffersLoaded
//		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure)
// Parameters:
//		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UPUMG_StoreItemHelper::ArePortalOffersLoaded()
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(10396);

	UPUMG_StoreItemHelper_ArePortalOffersLoaded_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00B59A80
//		Name   -> Function PlatformUMG.PUMG_ViewRedirecter.ShouldRedirect
//		Flags  -> (Native, Public, HasOutParms)
// Parameters:
//		class APUMG_HUD*                                   HUD                                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		struct FName                                       Route                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		class UObject*                                     SceneData                                                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UPUMG_ViewRedirecter::ShouldRedirect(class APUMG_HUD* HUD, const struct FName& Route, class UObject** SceneData)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(10413);

	UPUMG_ViewRedirecter_ShouldRedirect_Params params {};
	params.HUD = HUD;
	params.Route = Route;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (SceneData != nullptr)
		*SceneData = params.SceneData;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00B58D20
//		Name   -> Function PlatformUMG.PUMG_ViewLayer.IsRouteValid
//		Flags  -> (Final, Native, Protected, BlueprintCallable)
// Parameters:
//		struct FName                                       RouteName                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UPUMG_ViewLayer::IsRouteValid(const struct FName& RouteName)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(10417);

	UPUMG_ViewLayer_IsRouteValid_Params params {};
	params.RouteName = RouteName;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00B58900
//		Name   -> Function PlatformUMG.PUMG_ViewLayer.GoToRoute_InternalShowStep
//		Flags  -> (Final, Native, Protected)
void UPUMG_ViewLayer::GoToRoute_InternalShowStep()
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(10416);

	UPUMG_ViewLayer_GoToRoute_InternalShowStep_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00B58880
//		Name   -> Function PlatformUMG.PUMG_ViewLayer.GoToRoute_HandleShowFinished
//		Flags  -> (Final, Native, Protected)
// Parameters:
//		class UPUMG_Widget*                                Widget                                                     (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UPUMG_ViewLayer::GoToRoute_HandleShowFinished(class UPUMG_Widget* Widget)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(10415);

	UPUMG_ViewLayer_GoToRoute_HandleShowFinished_Params params {};
	params.Widget = Widget;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00B58800
//		Name   -> Function PlatformUMG.PUMG_ViewLayer.GoToRoute_HandleHideFinished
//		Flags  -> (Final, Native, Protected)
// Parameters:
//		class UPUMG_Widget*                                Widget                                                     (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UPUMG_ViewLayer::GoToRoute_HandleHideFinished(class UPUMG_Widget* Widget)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(10414);

	UPUMG_ViewLayer_GoToRoute_HandleHideFinished_Params params {};
	params.Widget = Widget;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00B59D60
//		Name   -> Function PlatformUMG.PUMG_ViewManager.SwapRoute
//		Flags  -> (Final, Native, Public, BlueprintCallable)
// Parameters:
//		struct FName                                       RouteName                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		struct FName                                       SwapTargetRoute                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		bool                                               ForceTransition                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UPUMG_ViewManager::SwapRoute(const struct FName& RouteName, const struct FName& SwapTargetRoute, bool ForceTransition)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(10438);

	UPUMG_ViewManager_SwapRoute_Params params {};
	params.RouteName = RouteName;
	params.SwapTargetRoute = SwapTargetRoute;
	params.ForceTransition = ForceTransition;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00B59900
//		Name   -> Function PlatformUMG.PUMG_ViewManager.SetPendingRouteData
//		Flags  -> (Final, Native, Public, BlueprintCallable)
// Parameters:
//		struct FName                                       RouteName                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		class UObject*                                     Data                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UPUMG_ViewManager::SetPendingRouteData(const struct FName& RouteName, class UObject* Data)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(10437);

	UPUMG_ViewManager_SetPendingRouteData_Params params {};
	params.RouteName = RouteName;
	params.Data = Data;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00B59570
//		Name   -> Function PlatformUMG.PUMG_ViewManager.ReplaceRoute
//		Flags  -> (Final, Native, Public, BlueprintCallable)
// Parameters:
//		struct FName                                       RouteName                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		bool                                               ForceTransition                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		class UObject*                                     Data                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UPUMG_ViewManager::ReplaceRoute(const struct FName& RouteName, bool ForceTransition, class UObject* Data)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(10436);

	UPUMG_ViewManager_ReplaceRoute_Params params {};
	params.RouteName = RouteName;
	params.ForceTransition = ForceTransition;
	params.Data = Data;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00B59360
//		Name   -> Function PlatformUMG.PUMG_ViewManager.RemoveRoute
//		Flags  -> (Final, Native, Public, BlueprintCallable)
// Parameters:
//		struct FName                                       RouteName                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		bool                                               ForceTransition                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UPUMG_ViewManager::RemoveRoute(const struct FName& RouteName, bool ForceTransition)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(10435);

	UPUMG_ViewManager_RemoveRoute_Params params {};
	params.RouteName = RouteName;
	params.ForceTransition = ForceTransition;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00B59090
//		Name   -> Function PlatformUMG.PUMG_ViewManager.PushRoute
//		Flags  -> (Final, Native, Public, BlueprintCallable)
// Parameters:
//		struct FName                                       RouteName                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		bool                                               ForceTransition                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		class UObject*                                     Data                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UPUMG_ViewManager::PushRoute(const struct FName& RouteName, bool ForceTransition, class UObject* Data)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(10434);

	UPUMG_ViewManager_PushRoute_Params params {};
	params.RouteName = RouteName;
	params.ForceTransition = ForceTransition;
	params.Data = Data;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00B59000
//		Name   -> Function PlatformUMG.PUMG_ViewManager.PopRoute
//		Flags  -> (Final, Native, Public, BlueprintCallable)
// Parameters:
//		bool                                               ForceTransition                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UPUMG_ViewManager::PopRoute(bool ForceTransition)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(10433);

	UPUMG_ViewManager_PopRoute_Params params {};
	params.ForceTransition = ForceTransition;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00B58C90
//		Name   -> Function PlatformUMG.PUMG_ViewManager.IsLayerIdle
//		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
//		PlatformUMG_EViewManagerLayer                      LayerType                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UPUMG_ViewManager::IsLayerIdle(PlatformUMG_EViewManagerLayer LayerType)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(10432);

	UPUMG_ViewManager_IsLayerIdle_Params params {};
	params.LayerType = LayerType;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00B58C30
//		Name   -> Function PlatformUMG.PUMG_ViewManager.IsEveryLayerIdle
//		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
//		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UPUMG_ViewManager::IsEveryLayerIdle()
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(10431);

	UPUMG_ViewManager_IsEveryLayerIdle_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00B58C00
//		Name   -> Function PlatformUMG.PUMG_ViewManager.IsBlockingAcquisitions
//		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
//		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UPUMG_ViewManager::IsBlockingAcquisitions()
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(10430);

	UPUMG_ViewManager_IsBlockingAcquisitions_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00B58AF0
//		Name   -> Function PlatformUMG.PUMG_ViewManager.InitializeRoutes
//		Flags  -> (Final, Native, Protected)
// Parameters:
//		class UDataTable*                                  RouteTable                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UPUMG_ViewManager::InitializeRoutes(class UDataTable* RouteTable)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(10429);

	UPUMG_ViewManager_InitializeRoutes_Params params {};
	params.RouteTable = RouteTable;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00B58AD0
//		Name   -> Function PlatformUMG.PUMG_ViewManager.Initialize
//		Flags  -> (Final, Native, Public, BlueprintCallable)
void UPUMG_ViewManager::Initialize()
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(10428);

	UPUMG_ViewManager_Initialize_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00B58920
//		Name   -> Function PlatformUMG.PUMG_ViewManager.HasCompletedRedirectFlow
//		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
//		PlatformUMG_EViewRouteRedirectionPhase             RedirectPhase                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UPUMG_ViewManager::HasCompletedRedirectFlow(PlatformUMG_EViewRouteRedirectionPhase RedirectPhase)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(10427);

	UPUMG_ViewManager_HasCompletedRedirectFlow_Params params {};
	params.RedirectPhase = RedirectPhase;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00B587D0
//		Name   -> Function PlatformUMG.PUMG_ViewManager.GetViewRouteCount
//		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
//		int                                                ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
int UPUMG_ViewManager::GetViewRouteCount()
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(10426);

	UPUMG_ViewManager_GetViewRouteCount_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00B58750
//		Name   -> Function PlatformUMG.PUMG_ViewManager.GetTopViewRouteWidget
//		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
//		class UPUMG_Widget*                                ReturnValue                                                (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class UPUMG_Widget* UPUMG_ViewManager::GetTopViewRouteWidget()
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(10425);

	UPUMG_ViewManager_GetTopViewRouteWidget_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00B58710
//		Name   -> Function PlatformUMG.PUMG_ViewManager.GetTopViewRoute
//		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
//		struct FName                                       ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
struct FName UPUMG_ViewManager::GetTopViewRoute()
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(10424);

	UPUMG_ViewManager_GetTopViewRoute_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00B586E0
//		Name   -> Function PlatformUMG.PUMG_ViewManager.GetTopLayer
//		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
//		PlatformUMG_EViewManagerLayer                      ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
PlatformUMG_EViewManagerLayer UPUMG_ViewManager::GetTopLayer()
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(10423);

	UPUMG_ViewManager_GetTopLayer_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00B58540
//		Name   -> Function PlatformUMG.PUMG_ViewManager.GetPendingRouteData
//		Flags  -> (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
//		struct FName                                       RouteName                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		class UObject*                                     Data                                                       (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UPUMG_ViewManager::GetPendingRouteData(const struct FName& RouteName, class UObject** Data)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(10422);

	UPUMG_ViewManager_GetPendingRouteData_Params params {};
	params.RouteName = RouteName;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Data != nullptr)
		*Data = params.Data;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00B58440
//		Name   -> Function PlatformUMG.PUMG_ViewManager.GetDefaultRouteForLayer
//		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
//		PlatformUMG_EViewManagerLayer                      LayerType                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		struct FName                                       ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
struct FName UPUMG_ViewManager::GetDefaultRouteForLayer(PlatformUMG_EViewManagerLayer LayerType)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(10421);

	UPUMG_ViewManager_GetDefaultRouteForLayer_Params params {};
	params.LayerType = LayerType;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00B583B0
//		Name   -> Function PlatformUMG.PUMG_ViewManager.GetCurrentTransitionRoute
//		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
//		PlatformUMG_EViewManagerLayer                      Layer                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		struct FName                                       ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
struct FName UPUMG_ViewManager::GetCurrentTransitionRoute(PlatformUMG_EViewManagerLayer Layer)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(10420);

	UPUMG_ViewManager_GetCurrentTransitionRoute_Params params {};
	params.Layer = Layer;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00B58320
//		Name   -> Function PlatformUMG.PUMG_ViewManager.GetCurrentRoute
//		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
//		PlatformUMG_EViewManagerLayer                      Layer                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		struct FName                                       ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
struct FName UPUMG_ViewManager::GetCurrentRoute(PlatformUMG_EViewManagerLayer Layer)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(10419);

	UPUMG_ViewManager_GetCurrentRoute_Params params {};
	params.Layer = Layer;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00B57C20
//		Name   -> Function PlatformUMG.PUMG_ViewManager.ContainsRoute
//		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure)
// Parameters:
//		struct FName                                       RouteName                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UPUMG_ViewManager::ContainsRoute(const struct FName& RouteName)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(10418);

	UPUMG_ViewManager_ContainsRoute_Params params {};
	params.RouteName = RouteName;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00B58FC0
//		Name   -> Function PlatformUMG.PUMG_VoiceChatManager.OnPartyDataUpdated
//		Flags  -> (Final, Native, Protected)
void UPUMG_VoiceChatManager::OnPartyDataUpdated()
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(10440);

	UPUMG_VoiceChatManager_OnPartyDataUpdated_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00B58F40
//		Name   -> Function PlatformUMG.PUMG_VoiceChatManager.OnMatchStatusUpdated
//		Flags  -> (Final, Native, Protected)
// Parameters:
//		PlatformUMG_EPUMG_MatchStatus                      MatchStatus                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UPUMG_VoiceChatManager::OnMatchStatusUpdated(PlatformUMG_EPUMG_MatchStatus MatchStatus)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(10439);

	UPUMG_VoiceChatManager_OnMatchStatusUpdated_Params params {};
	params.MatchStatus = MatchStatus;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
