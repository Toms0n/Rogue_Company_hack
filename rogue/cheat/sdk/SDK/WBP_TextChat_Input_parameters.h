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

// Function WBP_TextChat_Input.WBP_TextChat_Input_C.SetPromptActionActive
struct UWBP_TextChat_Input_C_SetPromptActionActive_Params
{
	bool                                               IsActive;                                                  // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function WBP_TextChat_Input.WBP_TextChat_Input_C.UpdateGamepadFocus
struct UWBP_TextChat_Input_C_UpdateGamepadFocus_Params
{
};

// Function WBP_TextChat_Input.WBP_TextChat_Input_C.HandleInputStateChange
struct UWBP_TextChat_Input_C_HandleInputStateChange_Params
{
	TEnumAsByte<PlatformGameFramework_EPGAME_INPUT_STATE> InputState;                                                // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function WBP_TextChat_Input.WBP_TextChat_Input_C.SetEngaged
struct UWBP_TextChat_Input_C_SetEngaged_Params
{
	bool                                               Engaged;                                                   // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function WBP_TextChat_Input.WBP_TextChat_Input_C.UpdateHintText
struct UWBP_TextChat_Input_C_UpdateHintText_Params
{
};

// Function WBP_TextChat_Input.WBP_TextChat_Input_C.GetHintText
struct UWBP_TextChat_Input_C_GetHintText_Params
{
	struct FText                                       ReturnValue;                                               // 0x0000(0x0018)  (Parm, OutParm, ReturnParm)
};

// Function WBP_TextChat_Input.WBP_TextChat_Input_C.SetCurrentChannel
struct UWBP_TextChat_Input_C_SetCurrentChannel_Params
{
	PlatformUMG_EPUMG_ChatChannel                      Channel;                                                   // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UPUMG_PlayerInfo*                            PersonalChannelPlayer;                                     // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function WBP_TextChat_Input.WBP_TextChat_Input_C.On_Input_KeyDown
struct UWBP_TextChat_Input_C_On_Input_KeyDown_Params
{
	struct FGeometry                                   MyGeometry;                                                // 0x0000(0x0058)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor)
	struct FKeyEvent                                   InKeyEvent;                                                // 0x0058(0x0038)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	struct FEventReply                                 ReturnValue;                                               // 0x0090(0x00C0)  (Parm, OutParm, ReturnParm)
};

// Function WBP_TextChat_Input.WBP_TextChat_Input_C.PreConstruct
struct UWBP_TextChat_Input_C_PreConstruct_Params
{
	bool                                               IsDesignTime;                                              // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function WBP_TextChat_Input.WBP_TextChat_Input_C.BndEvt__Button_66_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
struct UWBP_TextChat_Input_C_BndEvt__Button_66_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature_Params
{
};

// Function WBP_TextChat_Input.WBP_TextChat_Input_C.InitializeWidget
struct UWBP_TextChat_Input_C_InitializeWidget_Params
{
	class APUMG_HUD*                                   HUD;                                                       // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function WBP_TextChat_Input.WBP_TextChat_Input_C.OnViewStateChanged
struct UWBP_TextChat_Input_C_OnViewStateChanged_Params
{
	struct FName                                       CurrentRoute;                                              // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FName                                       PreviousRoute;                                             // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	PlatformUMG_EViewManagerLayer                      Layer;                                                     // 0x0010(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function WBP_TextChat_Input.WBP_TextChat_Input_C.BndEvt__Input_K2Node_ComponentBoundEvent_1_OnEditableTextBoxChangedEvent__DelegateSignature
struct UWBP_TextChat_Input_C_BndEvt__Input_K2Node_ComponentBoundEvent_1_OnEditableTextBoxChangedEvent__DelegateSignature_Params
{
	struct FText                                       Text;                                                      // 0x0000(0x0018)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};

// Function WBP_TextChat_Input.WBP_TextChat_Input_C.BndEvt__Input_K2Node_ComponentBoundEvent_2_OnEditableTextBoxCommittedEvent__DelegateSignature
struct UWBP_TextChat_Input_C_BndEvt__Input_K2Node_ComponentBoundEvent_2_OnEditableTextBoxCommittedEvent__DelegateSignature_Params
{
	struct FText                                       Text;                                                      // 0x0000(0x0018)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	TEnumAsByte<SlateCore_ETextCommit>                 CommitMethod;                                              // 0x0018(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function WBP_TextChat_Input.WBP_TextChat_Input_C.ExecuteUbergraph_WBP_TextChat_Input
struct UWBP_TextChat_Input_C_ExecuteUbergraph_WBP_TextChat_Input_Params
{
	int                                                EntryPoint;                                                // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function WBP_TextChat_Input.WBP_TextChat_Input_C.OnDownPressed__DelegateSignature
struct UWBP_TextChat_Input_C_OnDownPressed__DelegateSignature_Params
{
};

// Function WBP_TextChat_Input.WBP_TextChat_Input_C.OnUpPressed__DelegateSignature
struct UWBP_TextChat_Input_C_OnUpPressed__DelegateSignature_Params
{
};

// Function WBP_TextChat_Input.WBP_TextChat_Input_C.OnRightPressed__DelegateSignature
struct UWBP_TextChat_Input_C_OnRightPressed__DelegateSignature_Params
{
};

// Function WBP_TextChat_Input.WBP_TextChat_Input_C.OnLeftPressed__DelegateSignature
struct UWBP_TextChat_Input_C_OnLeftPressed__DelegateSignature_Params
{
};

// Function WBP_TextChat_Input.WBP_TextChat_Input_C.OnCancelPressed__DelegateSignature
struct UWBP_TextChat_Input_C_OnCancelPressed__DelegateSignature_Params
{
	struct FKey                                        Key;                                                       // 0x0000(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
};

// Function WBP_TextChat_Input.WBP_TextChat_Input_C.OnTabPressed__DelegateSignature
struct UWBP_TextChat_Input_C_OnTabPressed__DelegateSignature_Params
{
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
