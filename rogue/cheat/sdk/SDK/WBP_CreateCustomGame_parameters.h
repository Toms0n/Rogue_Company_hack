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

// Function WBP_CreateCustomGame.WBP_CreateCustomGame_C.Handle Input State Changed
struct UWBP_CreateCustomGame_C_Handle_Input_State_Changed_Params
{
	TEnumAsByte<PlatformGameFramework_EPGAME_INPUT_STATE> InputState;                                                // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function WBP_CreateCustomGame.WBP_CreateCustomGame_C.OnKeyUp
struct UWBP_CreateCustomGame_C_OnKeyUp_Params
{
	struct FGeometry                                   MyGeometry;                                                // 0x0000(0x0058)  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	struct FKeyEvent                                   InKeyEvent;                                                // 0x0058(0x0038)  (BlueprintVisible, BlueprintReadOnly, Parm)
	struct FEventReply                                 ReturnValue;                                               // 0x0090(0x00C0)  (Parm, OutParm, ReturnParm)
};

// Function WBP_CreateCustomGame.WBP_CreateCustomGame_C.GetQueueImageById
struct UWBP_CreateCustomGame_C_GetQueueImageById_Params
{
	int                                                QueueId;                                                   // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UTexture2D*                                  QueueImage;                                                // 0x0008(0x0008)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function WBP_CreateCustomGame.WBP_CreateCustomGame_C.SetupQueueInfoPanel
struct UWBP_CreateCustomGame_C_SetupQueueInfoPanel_Params
{
	struct FClientQueueInfo                            ClientQueueInfo;                                           // 0x0000(0x00C8)  (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function WBP_CreateCustomGame.WBP_CreateCustomGame_C.OnLobbyCreated
struct UWBP_CreateCustomGame_C_OnLobbyCreated_Params
{
	int                                                QueueId;                                                   // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function WBP_CreateCustomGame.WBP_CreateCustomGame_C.OnLobbyCanceled
struct UWBP_CreateCustomGame_C_OnLobbyCanceled_Params
{
};

// Function WBP_CreateCustomGame.WBP_CreateCustomGame_C.SetupConfirmation
struct UWBP_CreateCustomGame_C_SetupConfirmation_Params
{
};

// Function WBP_CreateCustomGame.WBP_CreateCustomGame_C.ShowConfirmation
struct UWBP_CreateCustomGame_C_ShowConfirmation_Params
{
	int                                                QueueId;                                                   // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                MapId;                                                     // 0x0004(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function WBP_CreateCustomGame.WBP_CreateCustomGame_C.BindConfirmationNavigation
struct UWBP_CreateCustomGame_C_BindConfirmationNavigation_Params
{
};

// Function WBP_CreateCustomGame.WBP_CreateCustomGame_C.GoToLastScreen
struct UWBP_CreateCustomGame_C_GoToLastScreen_Params
{
};

// Function WBP_CreateCustomGame.WBP_CreateCustomGame_C.NavigateBack
struct UWBP_CreateCustomGame_C_NavigateBack_Params
{
	bool                                               ReturnValue;                                               // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
};

// Function WBP_CreateCustomGame.WBP_CreateCustomGame_C.OnKeyDown
struct UWBP_CreateCustomGame_C_OnKeyDown_Params
{
	struct FGeometry                                   MyGeometry;                                                // 0x0000(0x0058)  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	struct FKeyEvent                                   InKeyEvent;                                                // 0x0058(0x0038)  (BlueprintVisible, BlueprintReadOnly, Parm)
	struct FEventReply                                 ReturnValue;                                               // 0x0090(0x00C0)  (Parm, OutParm, ReturnParm)
};

// Function WBP_CreateCustomGame.WBP_CreateCustomGame_C.OnPreviousTab
struct UWBP_CreateCustomGame_C_OnPreviousTab_Params
{
};

// Function WBP_CreateCustomGame.WBP_CreateCustomGame_C.OnNextTab
struct UWBP_CreateCustomGame_C_OnNextTab_Params
{
};

// Function WBP_CreateCustomGame.WBP_CreateCustomGame_C.SetNavigation
struct UWBP_CreateCustomGame_C_SetNavigation_Params
{
	int                                                NumColumns;                                                // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function WBP_CreateCustomGame.WBP_CreateCustomGame_C.ResetMapSelection
struct UWBP_CreateCustomGame_C_ResetMapSelection_Params
{
};

// Function WBP_CreateCustomGame.WBP_CreateCustomGame_C.OnMapSelected
struct UWBP_CreateCustomGame_C_OnMapSelected_Params
{
	int                                                MapId;                                                     // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function WBP_CreateCustomGame.WBP_CreateCustomGame_C.OnTabSelected
struct UWBP_CreateCustomGame_C_OnTabSelected_Params
{
	int                                                ButtonIndex;                                               // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function WBP_CreateCustomGame.WBP_CreateCustomGame_C.Setup Custom Tabs
struct UWBP_CreateCustomGame_C_Setup_Custom_Tabs_Params
{
};

// Function WBP_CreateCustomGame.WBP_CreateCustomGame_C.Construct
struct UWBP_CreateCustomGame_C_Construct_Params
{
};

// Function WBP_CreateCustomGame.WBP_CreateCustomGame_C.InitializeWidget
struct UWBP_CreateCustomGame_C_InitializeWidget_Params
{
	class APUMG_HUD*                                   HUD;                                                       // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function WBP_CreateCustomGame.WBP_CreateCustomGame_C.InitializeWidgetNavigation
struct UWBP_CreateCustomGame_C_InitializeWidgetNavigation_Params
{
};

// Function WBP_CreateCustomGame.WBP_CreateCustomGame_C.CheckIsInCustomMatch
struct UWBP_CreateCustomGame_C_CheckIsInCustomMatch_Params
{
	PlatformUMG_EPUMG_MatchStatus                      MatchStatus;                                               // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function WBP_CreateCustomGame.WBP_CreateCustomGame_C.OnButtonsCreated
struct UWBP_CreateCustomGame_C_OnButtonsCreated_Params
{
};

// Function WBP_CreateCustomGame.WBP_CreateCustomGame_C.OnBackButtonClicked
struct UWBP_CreateCustomGame_C_OnBackButtonClicked_Params
{
};

// Function WBP_CreateCustomGame.WBP_CreateCustomGame_C.OnHide
struct UWBP_CreateCustomGame_C_OnHide_Params
{
};

// Function WBP_CreateCustomGame.WBP_CreateCustomGame_C.OnShown
struct UWBP_CreateCustomGame_C_OnShown_Params
{
};

// Function WBP_CreateCustomGame.WBP_CreateCustomGame_C.PreConstruct
struct UWBP_CreateCustomGame_C_PreConstruct_Params
{
	bool                                               IsDesignTime;                                              // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function WBP_CreateCustomGame.WBP_CreateCustomGame_C.HandleMapScrollChange
struct UWBP_CreateCustomGame_C_HandleMapScrollChange_Params
{
};

// Function WBP_CreateCustomGame.WBP_CreateCustomGame_C.Tick
struct UWBP_CreateCustomGame_C_Tick_Params
{
	struct FGeometry                                   MyGeometry;                                                // 0x0000(0x0058)  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	float                                              InDeltaTime;                                               // 0x0058(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function WBP_CreateCustomGame.WBP_CreateCustomGame_C.ExecuteUbergraph_WBP_CreateCustomGame
struct UWBP_CreateCustomGame_C_ExecuteUbergraph_WBP_CreateCustomGame_Params
{
	int                                                EntryPoint;                                                // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
