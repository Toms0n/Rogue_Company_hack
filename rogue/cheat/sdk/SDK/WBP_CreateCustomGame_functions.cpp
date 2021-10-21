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
//		Name   -> Function WBP_CreateCustomGame.WBP_CreateCustomGame_C.Handle Input State Changed
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
//		TEnumAsByte<PlatformGameFramework_EPGAME_INPUT_STATE> InputState                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWBP_CreateCustomGame_C::Handle_Input_State_Changed(TEnumAsByte<PlatformGameFramework_EPGAME_INPUT_STATE> InputState)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(89271);

	UWBP_CreateCustomGame_C_Handle_Input_State_Changed_Params params {};
	params.InputState = InputState;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_CreateCustomGame.WBP_CreateCustomGame_C.OnKeyUp
//		Flags  -> (BlueprintCosmetic, Event, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
//		struct FGeometry                                   MyGeometry                                                 (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
//		struct FKeyEvent                                   InKeyEvent                                                 (BlueprintVisible, BlueprintReadOnly, Parm)
//		struct FEventReply                                 ReturnValue                                                (Parm, OutParm, ReturnParm)
struct FEventReply UWBP_CreateCustomGame_C::OnKeyUp(const struct FGeometry& MyGeometry, const struct FKeyEvent& InKeyEvent)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(89270);

	UWBP_CreateCustomGame_C_OnKeyUp_Params params {};
	params.MyGeometry = MyGeometry;
	params.InKeyEvent = InKeyEvent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_CreateCustomGame.WBP_CreateCustomGame_C.GetQueueImageById
//		Flags  -> (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
//		int                                                QueueId                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		class UTexture2D*                                  QueueImage                                                 (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWBP_CreateCustomGame_C::GetQueueImageById(int QueueId, class UTexture2D** QueueImage)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(89269);

	UWBP_CreateCustomGame_C_GetQueueImageById_Params params {};
	params.QueueId = QueueId;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (QueueImage != nullptr)
		*QueueImage = params.QueueImage;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_CreateCustomGame.WBP_CreateCustomGame_C.SetupQueueInfoPanel
//		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
//		struct FClientQueueInfo                            ClientQueueInfo                                            (BlueprintVisible, BlueprintReadOnly, Parm)
void UWBP_CreateCustomGame_C::SetupQueueInfoPanel(const struct FClientQueueInfo& ClientQueueInfo)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(89268);

	UWBP_CreateCustomGame_C_SetupQueueInfoPanel_Params params {};
	params.ClientQueueInfo = ClientQueueInfo;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_CreateCustomGame.WBP_CreateCustomGame_C.OnLobbyCreated
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
//		int                                                QueueId                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWBP_CreateCustomGame_C::OnLobbyCreated(int QueueId)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(89267);

	UWBP_CreateCustomGame_C_OnLobbyCreated_Params params {};
	params.QueueId = QueueId;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_CreateCustomGame.WBP_CreateCustomGame_C.OnLobbyCanceled
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
void UWBP_CreateCustomGame_C::OnLobbyCanceled()
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(89266);

	UWBP_CreateCustomGame_C_OnLobbyCanceled_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_CreateCustomGame.WBP_CreateCustomGame_C.SetupConfirmation
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
void UWBP_CreateCustomGame_C::SetupConfirmation()
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(89265);

	UWBP_CreateCustomGame_C_SetupConfirmation_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_CreateCustomGame.WBP_CreateCustomGame_C.ShowConfirmation
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
//		int                                                QueueId                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		int                                                MapId                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWBP_CreateCustomGame_C::ShowConfirmation(int QueueId, int MapId)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(89264);

	UWBP_CreateCustomGame_C_ShowConfirmation_Params params {};
	params.QueueId = QueueId;
	params.MapId = MapId;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_CreateCustomGame.WBP_CreateCustomGame_C.BindConfirmationNavigation
//		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
void UWBP_CreateCustomGame_C::BindConfirmationNavigation()
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(89263);

	UWBP_CreateCustomGame_C_BindConfirmationNavigation_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_CreateCustomGame.WBP_CreateCustomGame_C.GoToLastScreen
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
void UWBP_CreateCustomGame_C::GoToLastScreen()
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(89262);

	UWBP_CreateCustomGame_C_GoToLastScreen_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_CreateCustomGame.WBP_CreateCustomGame_C.NavigateBack
//		Flags  -> (Event, Protected, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
//		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
bool UWBP_CreateCustomGame_C::NavigateBack()
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(89261);

	UWBP_CreateCustomGame_C_NavigateBack_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_CreateCustomGame.WBP_CreateCustomGame_C.OnKeyDown
//		Flags  -> (BlueprintCosmetic, Event, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
//		struct FGeometry                                   MyGeometry                                                 (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
//		struct FKeyEvent                                   InKeyEvent                                                 (BlueprintVisible, BlueprintReadOnly, Parm)
//		struct FEventReply                                 ReturnValue                                                (Parm, OutParm, ReturnParm)
struct FEventReply UWBP_CreateCustomGame_C::OnKeyDown(const struct FGeometry& MyGeometry, const struct FKeyEvent& InKeyEvent)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(89260);

	UWBP_CreateCustomGame_C_OnKeyDown_Params params {};
	params.MyGeometry = MyGeometry;
	params.InKeyEvent = InKeyEvent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_CreateCustomGame.WBP_CreateCustomGame_C.OnPreviousTab
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
void UWBP_CreateCustomGame_C::OnPreviousTab()
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(89259);

	UWBP_CreateCustomGame_C_OnPreviousTab_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_CreateCustomGame.WBP_CreateCustomGame_C.OnNextTab
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
void UWBP_CreateCustomGame_C::OnNextTab()
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(89258);

	UWBP_CreateCustomGame_C_OnNextTab_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_CreateCustomGame.WBP_CreateCustomGame_C.SetNavigation
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
//		int                                                NumColumns                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWBP_CreateCustomGame_C::SetNavigation(int NumColumns)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(89257);

	UWBP_CreateCustomGame_C_SetNavigation_Params params {};
	params.NumColumns = NumColumns;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_CreateCustomGame.WBP_CreateCustomGame_C.ResetMapSelection
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
void UWBP_CreateCustomGame_C::ResetMapSelection()
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(89256);

	UWBP_CreateCustomGame_C_ResetMapSelection_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_CreateCustomGame.WBP_CreateCustomGame_C.OnMapSelected
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
//		int                                                MapId                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWBP_CreateCustomGame_C::OnMapSelected(int MapId)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(89255);

	UWBP_CreateCustomGame_C_OnMapSelected_Params params {};
	params.MapId = MapId;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_CreateCustomGame.WBP_CreateCustomGame_C.OnTabSelected
//		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
//		int                                                ButtonIndex                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWBP_CreateCustomGame_C::OnTabSelected(int ButtonIndex)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(89254);

	UWBP_CreateCustomGame_C_OnTabSelected_Params params {};
	params.ButtonIndex = ButtonIndex;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_CreateCustomGame.WBP_CreateCustomGame_C.Setup Custom Tabs
//		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
void UWBP_CreateCustomGame_C::Setup_Custom_Tabs()
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(89253);

	UWBP_CreateCustomGame_C_Setup_Custom_Tabs_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_CreateCustomGame.WBP_CreateCustomGame_C.Construct
//		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
void UWBP_CreateCustomGame_C::Construct()
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(89252);

	UWBP_CreateCustomGame_C_Construct_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_CreateCustomGame.WBP_CreateCustomGame_C.InitializeWidget
//		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
//		class APUMG_HUD*                                   HUD                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWBP_CreateCustomGame_C::InitializeWidget(class APUMG_HUD* HUD)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(89251);

	UWBP_CreateCustomGame_C_InitializeWidget_Params params {};
	params.HUD = HUD;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_CreateCustomGame.WBP_CreateCustomGame_C.InitializeWidgetNavigation
//		Flags  -> (Event, Public, BlueprintEvent)
void UWBP_CreateCustomGame_C::InitializeWidgetNavigation()
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(89250);

	UWBP_CreateCustomGame_C_InitializeWidgetNavigation_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_CreateCustomGame.WBP_CreateCustomGame_C.CheckIsInCustomMatch
//		Flags  -> (BlueprintCallable, BlueprintEvent)
// Parameters:
//		PlatformUMG_EPUMG_MatchStatus                      MatchStatus                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWBP_CreateCustomGame_C::CheckIsInCustomMatch(PlatformUMG_EPUMG_MatchStatus MatchStatus)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(89249);

	UWBP_CreateCustomGame_C_CheckIsInCustomMatch_Params params {};
	params.MatchStatus = MatchStatus;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_CreateCustomGame.WBP_CreateCustomGame_C.OnButtonsCreated
//		Flags  -> (BlueprintCallable, BlueprintEvent)
void UWBP_CreateCustomGame_C::OnButtonsCreated()
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(89248);

	UWBP_CreateCustomGame_C_OnButtonsCreated_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_CreateCustomGame.WBP_CreateCustomGame_C.OnBackButtonClicked
//		Flags  -> (BlueprintCallable, BlueprintEvent)
void UWBP_CreateCustomGame_C::OnBackButtonClicked()
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(89247);

	UWBP_CreateCustomGame_C_OnBackButtonClicked_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_CreateCustomGame.WBP_CreateCustomGame_C.OnHide
//		Flags  -> (Event, Public, BlueprintEvent)
void UWBP_CreateCustomGame_C::OnHide()
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(89246);

	UWBP_CreateCustomGame_C_OnHide_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_CreateCustomGame.WBP_CreateCustomGame_C.OnShown
//		Flags  -> (Event, Public, BlueprintEvent)
void UWBP_CreateCustomGame_C::OnShown()
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(89245);

	UWBP_CreateCustomGame_C_OnShown_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_CreateCustomGame.WBP_CreateCustomGame_C.PreConstruct
//		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
//		bool                                               IsDesignTime                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UWBP_CreateCustomGame_C::PreConstruct(bool IsDesignTime)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(89244);

	UWBP_CreateCustomGame_C_PreConstruct_Params params {};
	params.IsDesignTime = IsDesignTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_CreateCustomGame.WBP_CreateCustomGame_C.HandleMapScrollChange
//		Flags  -> (BlueprintCallable, BlueprintEvent)
void UWBP_CreateCustomGame_C::HandleMapScrollChange()
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(89243);

	UWBP_CreateCustomGame_C_HandleMapScrollChange_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_CreateCustomGame.WBP_CreateCustomGame_C.Tick
//		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
//		struct FGeometry                                   MyGeometry                                                 (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
//		float                                              InDeltaTime                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWBP_CreateCustomGame_C::Tick(const struct FGeometry& MyGeometry, float InDeltaTime)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(89242);

	UWBP_CreateCustomGame_C_Tick_Params params {};
	params.MyGeometry = MyGeometry;
	params.InDeltaTime = InDeltaTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_CreateCustomGame.WBP_CreateCustomGame_C.ExecuteUbergraph_WBP_CreateCustomGame
//		Flags  -> (Final, HasDefaults)
// Parameters:
//		int                                                EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWBP_CreateCustomGame_C::ExecuteUbergraph_WBP_CreateCustomGame(int EntryPoint)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(89241);

	UWBP_CreateCustomGame_C_ExecuteUbergraph_WBP_CreateCustomGame_Params params {};
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
