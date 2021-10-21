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

// Function PopupManager.PopupManager_C.OnKeyUp
struct UPopupManager_C_OnKeyUp_Params
{
	struct FGeometry                                   MyGeometry;                                                // 0x0000(0x0058)  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	struct FKeyEvent                                   InKeyEvent;                                                // 0x0058(0x0038)  (BlueprintVisible, BlueprintReadOnly, Parm)
	struct FEventReply                                 ReturnValue;                                               // 0x0090(0x00C0)  (Parm, OutParm, ReturnParm)
};

// Function PopupManager.PopupManager_C.OnKeyDown
struct UPopupManager_C_OnKeyDown_Params
{
	struct FGeometry                                   MyGeometry;                                                // 0x0000(0x0058)  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	struct FKeyEvent                                   InKeyEvent;                                                // 0x0058(0x0038)  (BlueprintVisible, BlueprintReadOnly, Parm)
	struct FEventReply                                 ReturnValue;                                               // 0x0090(0x00C0)  (Parm, OutParm, ReturnParm)
};

// Function PopupManager.PopupManager_C.SetupSubHeaderText
struct UPopupManager_C_SetupSubHeaderText_Params
{
	struct FText                                       NewSubHeaderText;                                          // 0x0000(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function PopupManager.PopupManager_C.SetupButtons
struct UPopupManager_C_SetupButtons_Params
{
	TArray<struct FPUMG_PopupButtonConfig>             ButtonInfo;                                                // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, ContainsInstancedReference, HasGetValueTypeHash)
};

// Function PopupManager.PopupManager_C.SetupTextEntry
struct UPopupManager_C_SetupTextEntry_Params
{
	bool                                               HasTextEntry;                                              // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FText                                       DefaultEntryText;                                          // 0x0008(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function PopupManager.PopupManager_C.SetupWarningText
struct UPopupManager_C_SetupWarningText_Params
{
	struct FText                                       NewWarningText;                                            // 0x0000(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function PopupManager.PopupManager_C.SetupDescription
struct UPopupManager_C_SetupDescription_Params
{
	struct FText                                       NewDescText;                                               // 0x0000(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function PopupManager.PopupManager_C.SetupHeader
struct UPopupManager_C_SetupHeader_Params
{
	struct FText                                       NewHeaderText;                                             // 0x0000(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function PopupManager.PopupManager_C.NavigateBack
struct UPopupManager_C_NavigateBack_Params
{
	bool                                               ReturnValue;                                               // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
};

// Function PopupManager.PopupManager_C.Construct
struct UPopupManager_C_Construct_Params
{
};

// Function PopupManager.PopupManager_C.ShowPopup
struct UPopupManager_C_ShowPopup_Params
{
	struct FPUMG_PopupConfig                           popupData;                                                 // 0x0000(0x00E0)  (BlueprintVisible, BlueprintReadOnly, Parm, ContainsInstancedReference)
};

// Function PopupManager.PopupManager_C.HidePopup
struct UPopupManager_C_HidePopup_Params
{
};

// Function PopupManager.PopupManager_C.ButtonPressed
struct UPopupManager_C_ButtonPressed_Params
{
	class UWidget*                                     Index;                                                     // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function PopupManager.PopupManager_C.InitializeWidgetNavigation
struct UPopupManager_C_InitializeWidgetNavigation_Params
{
};

// Function PopupManager.PopupManager_C.InitializeWidget
struct UPopupManager_C_InitializeWidget_Params
{
	class APUMG_HUD*                                   HUD;                                                       // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function PopupManager.PopupManager_C.BndEvt__CancelButton_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature
struct UPopupManager_C_BndEvt__CancelButton_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature_Params
{
	class UWidget*                                     Widget;                                                    // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function PopupManager.PopupManager_C.HandleCancelButtonClicked
struct UPopupManager_C_HandleCancelButtonClicked_Params
{
	class UWidget*                                     InIndex;                                                   // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function PopupManager.PopupManager_C.OnShown
struct UPopupManager_C_OnShown_Params
{
};

// Function PopupManager.PopupManager_C.OnHide
struct UPopupManager_C_OnHide_Params
{
};

// Function PopupManager.PopupManager_C.OnBackButton
struct UPopupManager_C_OnBackButton_Params
{
};

// Function PopupManager.PopupManager_C.ExecuteUbergraph_PopupManager
struct UPopupManager_C_ExecuteUbergraph_PopupManager_Params
{
	int                                                EntryPoint;                                                // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
