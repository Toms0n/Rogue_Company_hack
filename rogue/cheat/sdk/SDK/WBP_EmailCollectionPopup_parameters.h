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

// Function WBP_EmailCollectionPopup.WBP_EmailCollectionPopup_C.GotoTermsAndConditions
struct UWBP_EmailCollectionPopup_C_GotoTermsAndConditions_Params
{
};

// Function WBP_EmailCollectionPopup.WBP_EmailCollectionPopup_C.SetupNavigation
struct UWBP_EmailCollectionPopup_C_SetupNavigation_Params
{
};

// Function WBP_EmailCollectionPopup.WBP_EmailCollectionPopup_C.OnInputeStateChanged
struct UWBP_EmailCollectionPopup_C_OnInputeStateChanged_Params
{
	TEnumAsByte<PlatformGameFramework_EPGAME_INPUT_STATE> InputState;                                                // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function WBP_EmailCollectionPopup.WBP_EmailCollectionPopup_C.UpdatePrompts
struct UWBP_EmailCollectionPopup_C_UpdatePrompts_Params
{
};

// Function WBP_EmailCollectionPopup.WBP_EmailCollectionPopup_C.ValidateCheckbox
struct UWBP_EmailCollectionPopup_C_ValidateCheckbox_Params
{
	bool                                               CheckboxValid;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function WBP_EmailCollectionPopup.WBP_EmailCollectionPopup_C.NavigateBack
struct UWBP_EmailCollectionPopup_C_NavigateBack_Params
{
	bool                                               ReturnValue;                                               // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
};

// Function WBP_EmailCollectionPopup.WBP_EmailCollectionPopup_C.CloseEmailPopup
struct UWBP_EmailCollectionPopup_C_CloseEmailPopup_Params
{
};

// Function WBP_EmailCollectionPopup.WBP_EmailCollectionPopup_C.ValidateEmail
struct UWBP_EmailCollectionPopup_C_ValidateEmail_Params
{
	bool                                               EmailValid;                                                // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function WBP_EmailCollectionPopup.WBP_EmailCollectionPopup_C.QueueEmailValidation
struct UWBP_EmailCollectionPopup_C_QueueEmailValidation_Params
{
	struct FText                                       Text;                                                      // 0x0000(0x0018)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};

// Function WBP_EmailCollectionPopup.WBP_EmailCollectionPopup_C.Tick
struct UWBP_EmailCollectionPopup_C_Tick_Params
{
	struct FGeometry                                   MyGeometry;                                                // 0x0000(0x0058)  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	float                                              InDeltaTime;                                               // 0x0058(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function WBP_EmailCollectionPopup.WBP_EmailCollectionPopup_C.OnInitialized
struct UWBP_EmailCollectionPopup_C_OnInitialized_Params
{
};

// Function WBP_EmailCollectionPopup.WBP_EmailCollectionPopup_C.BndEvt__SubmitButton_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature
struct UWBP_EmailCollectionPopup_C_BndEvt__SubmitButton_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature_Params
{
	class UWidget*                                     Widget;                                                    // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function WBP_EmailCollectionPopup.WBP_EmailCollectionPopup_C.OnSubmitEmailResponse
struct UWBP_EmailCollectionPopup_C_OnSubmitEmailResponse_Params
{
	bool                                               Success;                                                   // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function WBP_EmailCollectionPopup.WBP_EmailCollectionPopup_C.BndEvt__OKButton_K2Node_ComponentBoundEvent_1_OnClicked__DelegateSignature
struct UWBP_EmailCollectionPopup_C_BndEvt__OKButton_K2Node_ComponentBoundEvent_1_OnClicked__DelegateSignature_Params
{
	class UWidget*                                     Widget;                                                    // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function WBP_EmailCollectionPopup.WBP_EmailCollectionPopup_C.InitializeWidgetNavigation
struct UWBP_EmailCollectionPopup_C_InitializeWidgetNavigation_Params
{
};

// Function WBP_EmailCollectionPopup.WBP_EmailCollectionPopup_C.BndEvt__CloseButtonGamepad_K2Node_ComponentBoundEvent_3_OnClicked__DelegateSignature
struct UWBP_EmailCollectionPopup_C_BndEvt__CloseButtonGamepad_K2Node_ComponentBoundEvent_3_OnClicked__DelegateSignature_Params
{
	class UWidget*                                     Widget;                                                    // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function WBP_EmailCollectionPopup.WBP_EmailCollectionPopup_C.InitializeWidget
struct UWBP_EmailCollectionPopup_C_InitializeWidget_Params
{
	class APUMG_HUD*                                   HUD;                                                       // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function WBP_EmailCollectionPopup.WBP_EmailCollectionPopup_C.EventOnCheckChanged
struct UWBP_EmailCollectionPopup_C_EventOnCheckChanged_Params
{
	bool                                               Checked;                                                   // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function WBP_EmailCollectionPopup.WBP_EmailCollectionPopup_C.BndEvt__WBP_ModalPopupContainer_K2Node_ComponentBoundEvent_4_CloseButtonClicked__DelegateSignature
struct UWBP_EmailCollectionPopup_C_BndEvt__WBP_ModalPopupContainer_K2Node_ComponentBoundEvent_4_CloseButtonClicked__DelegateSignature_Params
{
};

// Function WBP_EmailCollectionPopup.WBP_EmailCollectionPopup_C.OnShown
struct UWBP_EmailCollectionPopup_C_OnShown_Params
{
};

// Function WBP_EmailCollectionPopup.WBP_EmailCollectionPopup_C.TickScrolling
struct UWBP_EmailCollectionPopup_C_TickScrolling_Params
{
	float                                              fPercentage;                                               // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function WBP_EmailCollectionPopup.WBP_EmailCollectionPopup_C.OnScrollUp
struct UWBP_EmailCollectionPopup_C_OnScrollUp_Params
{
	KillstreakUINew_EContextPromptHoldReleaseState     Status;                                                    // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function WBP_EmailCollectionPopup.WBP_EmailCollectionPopup_C.OnScrollDown
struct UWBP_EmailCollectionPopup_C_OnScrollDown_Params
{
	KillstreakUINew_EContextPromptHoldReleaseState     Status;                                                    // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function WBP_EmailCollectionPopup.WBP_EmailCollectionPopup_C.ExecuteUbergraph_WBP_EmailCollectionPopup
struct UWBP_EmailCollectionPopup_C_ExecuteUbergraph_WBP_EmailCollectionPopup_Params
{
	int                                                EntryPoint;                                                // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
