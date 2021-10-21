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
//		Name   -> Function BrightLobbyWidget.BrightLobbyWidget_C.OnKeyUp
//		Flags  -> (BlueprintCosmetic, Event, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
//		struct FGeometry                                   MyGeometry                                                 (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
//		struct FKeyEvent                                   InKeyEvent                                                 (BlueprintVisible, BlueprintReadOnly, Parm)
//		struct FEventReply                                 ReturnValue                                                (Parm, OutParm, ReturnParm)
struct FEventReply UBrightLobbyWidget_C::OnKeyUp(const struct FGeometry& MyGeometry, const struct FKeyEvent& InKeyEvent)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(67895);

	UBrightLobbyWidget_C_OnKeyUp_Params params {};
	params.MyGeometry = MyGeometry;
	params.InKeyEvent = InKeyEvent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function BrightLobbyWidget.BrightLobbyWidget_C.OnKeyDown
//		Flags  -> (BlueprintCosmetic, Event, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
//		struct FGeometry                                   MyGeometry                                                 (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
//		struct FKeyEvent                                   InKeyEvent                                                 (BlueprintVisible, BlueprintReadOnly, Parm)
//		struct FEventReply                                 ReturnValue                                                (Parm, OutParm, ReturnParm)
struct FEventReply UBrightLobbyWidget_C::OnKeyDown(const struct FGeometry& MyGeometry, const struct FKeyEvent& InKeyEvent)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(67894);

	UBrightLobbyWidget_C_OnKeyDown_Params params {};
	params.MyGeometry = MyGeometry;
	params.InKeyEvent = InKeyEvent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function BrightLobbyWidget.BrightLobbyWidget_C.SetErrorMessageDT
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
void UBrightLobbyWidget_C::SetErrorMessageDT()
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(67893);

	UBrightLobbyWidget_C_SetErrorMessageDT_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function BrightLobbyWidget.BrightLobbyWidget_C.UninitializeSubWidgets
//		Flags  -> (Protected, BlueprintCallable, BlueprintEvent)
// Parameters:
//		class UPanelWidget*                                Container                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UBrightLobbyWidget_C::UninitializeSubWidgets(class UPanelWidget* Container)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(67892);

	UBrightLobbyWidget_C_UninitializeSubWidgets_Params params {};
	params.Container = Container;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function BrightLobbyWidget.BrightLobbyWidget_C.InitializeSubWidgets
//		Flags  -> (Protected, BlueprintCallable, BlueprintEvent)
// Parameters:
//		class UPanelWidget*                                Container                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UBrightLobbyWidget_C::InitializeSubWidgets(class UPanelWidget* Container)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(67891);

	UBrightLobbyWidget_C_InitializeSubWidgets_Params params {};
	params.Container = Container;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function BrightLobbyWidget.BrightLobbyWidget_C.HidePersistentWidgets
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
void UBrightLobbyWidget_C::HidePersistentWidgets()
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(67890);

	UBrightLobbyWidget_C_HidePersistentWidgets_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function BrightLobbyWidget.BrightLobbyWidget_C.UninitializeKSWidgets
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
void UBrightLobbyWidget_C::UninitializeKSWidgets()
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(67889);

	UBrightLobbyWidget_C_UninitializeKSWidgets_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function BrightLobbyWidget.BrightLobbyWidget_C.InitializeKSWidgets
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
void UBrightLobbyWidget_C::InitializeKSWidgets()
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(67888);

	UBrightLobbyWidget_C_InitializeKSWidgets_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function BrightLobbyWidget.BrightLobbyWidget_C.CreateStickyWidgetData
//		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
void UBrightLobbyWidget_C::CreateStickyWidgetData()
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(67887);

	UBrightLobbyWidget_C_CreateStickyWidgetData_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function BrightLobbyWidget.BrightLobbyWidget_C.Set Safe Frame
//		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
//		float                                              Scale                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UBrightLobbyWidget_C::Set_Safe_Frame(float Scale)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(67886);

	UBrightLobbyWidget_C_Set_Safe_Frame_Params params {};
	params.Scale = Scale;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function BrightLobbyWidget.BrightLobbyWidget_C.InitializeWidget
//		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
//		class APUMG_HUD*                                   HUD                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UBrightLobbyWidget_C::InitializeWidget(class APUMG_HUD* HUD)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(67885);

	UBrightLobbyWidget_C_InitializeWidget_Params params {};
	params.HUD = HUD;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function BrightLobbyWidget.BrightLobbyWidget_C.UninitializeWidget
//		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
void UBrightLobbyWidget_C::UninitializeWidget()
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(67884);

	UBrightLobbyWidget_C_UninitializeWidget_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function BrightLobbyWidget.BrightLobbyWidget_C.OnShown
//		Flags  -> (Event, Public, BlueprintEvent)
void UBrightLobbyWidget_C::OnShown()
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(67883);

	UBrightLobbyWidget_C_OnShown_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function BrightLobbyWidget.BrightLobbyWidget_C.HandleSpecialRouteCases
//		Flags  -> (BlueprintCallable, BlueprintEvent)
// Parameters:
//		struct FName                                       CurrentRoute                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		struct FName                                       LastRoute                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		PlatformUMG_EViewManagerLayer                      Layer                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UBrightLobbyWidget_C::HandleSpecialRouteCases(const struct FName& CurrentRoute, const struct FName& LastRoute, PlatformUMG_EViewManagerLayer Layer)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(67882);

	UBrightLobbyWidget_C_HandleSpecialRouteCases_Params params {};
	params.CurrentRoute = CurrentRoute;
	params.LastRoute = LastRoute;
	params.Layer = Layer;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function BrightLobbyWidget.BrightLobbyWidget_C.Tick
//		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
//		struct FGeometry                                   MyGeometry                                                 (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
//		float                                              InDeltaTime                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UBrightLobbyWidget_C::Tick(const struct FGeometry& MyGeometry, float InDeltaTime)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(67881);

	UBrightLobbyWidget_C_Tick_Params params {};
	params.MyGeometry = MyGeometry;
	params.InDeltaTime = InDeltaTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function BrightLobbyWidget.BrightLobbyWidget_C.Handle Viewport Size Changed
//		Flags  -> (BlueprintCallable, BlueprintEvent)
// Parameters:
//		struct FIntPoint                                   ViewportSize                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UBrightLobbyWidget_C::Handle_Viewport_Size_Changed(const struct FIntPoint& ViewportSize)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(67880);

	UBrightLobbyWidget_C_Handle_Viewport_Size_Changed_Params params {};
	params.ViewportSize = ViewportSize;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function BrightLobbyWidget.BrightLobbyWidget_C.HandleOpenTextChat
//		Flags  -> (BlueprintCallable, BlueprintEvent)
// Parameters:
//		bool                                               BeginChatCommand                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UBrightLobbyWidget_C::HandleOpenTextChat(bool BeginChatCommand)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(67879);

	UBrightLobbyWidget_C_HandleOpenTextChat_Params params {};
	params.BeginChatCommand = BeginChatCommand;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function BrightLobbyWidget.BrightLobbyWidget_C.HandleOpenTextChatForCommand
//		Flags  -> (BlueprintCallable, BlueprintEvent)
void UBrightLobbyWidget_C::HandleOpenTextChatForCommand()
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(67878);

	UBrightLobbyWidget_C_HandleOpenTextChatForCommand_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function BrightLobbyWidget.BrightLobbyWidget_C.HandleOpenTextChatForChat
//		Flags  -> (BlueprintCallable, BlueprintEvent)
void UBrightLobbyWidget_C::HandleOpenTextChatForChat()
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(67877);

	UBrightLobbyWidget_C_HandleOpenTextChatForChat_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function BrightLobbyWidget.BrightLobbyWidget_C.OpenTextChatToPlayer
//		Flags  -> (BlueprintCallable, BlueprintEvent)
// Parameters:
//		class UPUMG_PlayerInfo*                            Player                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UBrightLobbyWidget_C::OpenTextChatToPlayer(class UPUMG_PlayerInfo* Player)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(67876);

	UBrightLobbyWidget_C_OpenTextChatToPlayer_Params params {};
	params.Player = Player;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function BrightLobbyWidget.BrightLobbyWidget_C.HandleViewStateChangeStarted
//		Flags  -> (BlueprintCallable, BlueprintEvent)
// Parameters:
//		struct FName                                       CurrentRoute                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		struct FName                                       NextRoute                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		PlatformUMG_EViewManagerLayer                      Layer                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UBrightLobbyWidget_C::HandleViewStateChangeStarted(const struct FName& CurrentRoute, const struct FName& NextRoute, PlatformUMG_EViewManagerLayer Layer)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(67875);

	UBrightLobbyWidget_C_HandleViewStateChangeStarted_Params params {};
	params.CurrentRoute = CurrentRoute;
	params.NextRoute = NextRoute;
	params.Layer = Layer;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function BrightLobbyWidget.BrightLobbyWidget_C.DebugOnePress
//		Flags  -> (BlueprintCallable, BlueprintEvent)
void UBrightLobbyWidget_C::DebugOnePress()
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(67874);

	UBrightLobbyWidget_C_DebugOnePress_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function BrightLobbyWidget.BrightLobbyWidget_C.DebugOneRelease
//		Flags  -> (BlueprintCallable, BlueprintEvent)
void UBrightLobbyWidget_C::DebugOneRelease()
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(67873);

	UBrightLobbyWidget_C_DebugOneRelease_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function BrightLobbyWidget.BrightLobbyWidget_C.DebugTwoPress
//		Flags  -> (BlueprintCallable, BlueprintEvent)
void UBrightLobbyWidget_C::DebugTwoPress()
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(67872);

	UBrightLobbyWidget_C_DebugTwoPress_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function BrightLobbyWidget.BrightLobbyWidget_C.DebugTwoRelease
//		Flags  -> (BlueprintCallable, BlueprintEvent)
void UBrightLobbyWidget_C::DebugTwoRelease()
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(58259);

	UBrightLobbyWidget_C_DebugTwoRelease_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function BrightLobbyWidget.BrightLobbyWidget_C.ExecuteUbergraph_BrightLobbyWidget
//		Flags  -> (Final, HasDefaults)
// Parameters:
//		int                                                EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UBrightLobbyWidget_C::ExecuteUbergraph_BrightLobbyWidget(int EntryPoint)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(58258);

	UBrightLobbyWidget_C_ExecuteUbergraph_BrightLobbyWidget_Params params {};
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function BrightLobbyWidget.BrightLobbyWidget_C.BackButtonClicked__DelegateSignature
//		Flags  -> (Public, Delegate, BlueprintCallable, BlueprintEvent)
void UBrightLobbyWidget_C::BackButtonClicked__DelegateSignature()
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(58257);

	UBrightLobbyWidget_C_BackButtonClicked__DelegateSignature_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
