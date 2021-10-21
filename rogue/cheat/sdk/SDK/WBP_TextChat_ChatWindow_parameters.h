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

// Function WBP_TextChat_ChatWindow.WBP_TextChat_ChatWindow_C.GetMaxChatMessages
struct UWBP_TextChat_ChatWindow_C_GetMaxChatMessages_Params
{
	int                                                MaxChatMessages;                                           // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function WBP_TextChat_ChatWindow.WBP_TextChat_ChatWindow_C.SetCollapsed
struct UWBP_TextChat_ChatWindow_C_SetCollapsed_Params
{
	bool                                               Collapsed;                                                 // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function WBP_TextChat_ChatWindow.WBP_TextChat_ChatWindow_C.AddChatMessage
struct UWBP_TextChat_ChatWindow_C_AddChatMessage_Params
{
	struct FPUMG_ChatData                              ChatData;                                                  // 0x0000(0x0040)  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};

// Function WBP_TextChat_ChatWindow.WBP_TextChat_ChatWindow_C.Tick
struct UWBP_TextChat_ChatWindow_C_Tick_Params
{
	struct FGeometry                                   MyGeometry;                                                // 0x0000(0x0058)  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	float                                              InDeltaTime;                                               // 0x0058(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function WBP_TextChat_ChatWindow.WBP_TextChat_ChatWindow_C.BndEvt__CloseBtn_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
struct UWBP_TextChat_ChatWindow_C_BndEvt__CloseBtn_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature_Params
{
};

// Function WBP_TextChat_ChatWindow.WBP_TextChat_ChatWindow_C.InitializeWidget
struct UWBP_TextChat_ChatWindow_C_InitializeWidget_Params
{
	class APUMG_HUD*                                   HUD;                                                       // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function WBP_TextChat_ChatWindow.WBP_TextChat_ChatWindow_C.HandleInputStateChanged
struct UWBP_TextChat_ChatWindow_C_HandleInputStateChanged_Params
{
	TEnumAsByte<PlatformGameFramework_EPGAME_INPUT_STATE> InputState;                                                // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function WBP_TextChat_ChatWindow.WBP_TextChat_ChatWindow_C.ExecuteUbergraph_WBP_TextChat_ChatWindow
struct UWBP_TextChat_ChatWindow_C_ExecuteUbergraph_WBP_TextChat_ChatWindow_Params
{
	int                                                EntryPoint;                                                // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function WBP_TextChat_ChatWindow.WBP_TextChat_ChatWindow_C.OnCloseButtonClicked__DelegateSignature
struct UWBP_TextChat_ChatWindow_C_OnCloseButtonClicked__DelegateSignature_Params
{
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
