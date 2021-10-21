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

// Function PopupButton.PopupButton_C.NavigateBack
struct UPopupButton_C_NavigateBack_Params
{
	bool                                               ReturnValue;                                               // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
};

// Function PopupButton.PopupButton_C.ToggleGamepadCallout
struct UPopupButton_C_ToggleGamepadCallout_Params
{
	bool                                               Show;                                                      // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function PopupButton.PopupButton_C.SetDisplayText
struct UPopupButton_C_SetDisplayText_Params
{
	struct FText                                       InText;                                                    // 0x0000(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function PopupButton.PopupButton_C.SetButtonCalloutImage
struct UPopupButton_C_SetButtonCalloutImage_Params
{
	struct FName                                       InActionName;                                              // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function PopupButton.PopupButton_C.SetFontSize
struct UPopupButton_C_SetFontSize_Params
{
	int                                                In_Font_Size;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function PopupButton.PopupButton_C.NavigateConfirm
struct UPopupButton_C_NavigateConfirm_Params
{
	bool                                               ReturnValue;                                               // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
};

// Function PopupButton.PopupButton_C.PreConstruct
struct UPopupButton_C_PreConstruct_Params
{
	bool                                               IsDesignTime;                                              // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function PopupButton.PopupButton_C.BndEvt__Button_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
struct UPopupButton_C_BndEvt__Button_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature_Params
{
};

// Function PopupButton.PopupButton_C.BndEvt__Button_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature
struct UPopupButton_C_BndEvt__Button_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature_Params
{
};

// Function PopupButton.PopupButton_C.BndEvt__Button_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature
struct UPopupButton_C_BndEvt__Button_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature_Params
{
};

// Function PopupButton.PopupButton_C.GamepadHover
struct UPopupButton_C_GamepadHover_Params
{
};

// Function PopupButton.PopupButton_C.GamepadUnhover
struct UPopupButton_C_GamepadUnhover_Params
{
};

// Function PopupButton.PopupButton_C.GamepadPress
struct UPopupButton_C_GamepadPress_Params
{
};

// Function PopupButton.PopupButton_C.OnNavBack
struct UPopupButton_C_OnNavBack_Params
{
};

// Function PopupButton.PopupButton_C.Construct
struct UPopupButton_C_Construct_Params
{
};

// Function PopupButton.PopupButton_C.ExecuteUbergraph_PopupButton
struct UPopupButton_C_ExecuteUbergraph_PopupButton_Params
{
	int                                                EntryPoint;                                                // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function PopupButton.PopupButton_C.OnNavigateBackAction__DelegateSignature
struct UPopupButton_C_OnNavigateBackAction__DelegateSignature_Params
{
};

// Function PopupButton.PopupButton_C.OnClicked__DelegateSignature
struct UPopupButton_C_OnClicked__DelegateSignature_Params
{
	int                                                Index;                                                     // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
