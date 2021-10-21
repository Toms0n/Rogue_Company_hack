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

// Function LoginEula.LoginEula_C.EnableAcceptButton
struct ULoginEula_C_EnableAcceptButton_Params
{
	bool                                               Enable;                                                    // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function LoginEula.LoginEula_C.ShowArrows
struct ULoginEula_C_ShowArrows_Params
{
	float                                              Value;                                                     // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              MaxValue;                                                  // 0x0004(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function LoginEula.LoginEula_C.ChangeFontSizeText
struct ULoginEula_C_ChangeFontSizeText_Params
{
};

// Function LoginEula.LoginEula_C.HandleCalloutSwitcher
struct ULoginEula_C_HandleCalloutSwitcher_Params
{
};

// Function LoginEula.LoginEula_C.Tick
struct ULoginEula_C_Tick_Params
{
	struct FGeometry                                   MyGeometry;                                                // 0x0000(0x0058)  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	float                                              InDeltaTime;                                               // 0x0058(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function LoginEula.LoginEula_C.InitializeWidget
struct ULoginEula_C_InitializeWidget_Params
{
	class APUMG_HUD*                                   HUD;                                                       // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function LoginEula.LoginEula_C.InitializeWidgetNavigation
struct ULoginEula_C_InitializeWidgetNavigation_Params
{
};

// Function LoginEula.LoginEula_C.InitializeWidgetButtonListeners
struct ULoginEula_C_InitializeWidgetButtonListeners_Params
{
};

// Function LoginEula.LoginEula_C.ScrollUpPressed
struct ULoginEula_C_ScrollUpPressed_Params
{
};

// Function LoginEula.LoginEula_C.ScrollDownPressed
struct ULoginEula_C_ScrollDownPressed_Params
{
};

// Function LoginEula.LoginEula_C.ScrollUpReleased
struct ULoginEula_C_ScrollUpReleased_Params
{
};

// Function LoginEula.LoginEula_C.ScrollDownReleased
struct ULoginEula_C_ScrollDownReleased_Params
{
};

// Function LoginEula.LoginEula_C.Handle Input State Changed
struct ULoginEula_C_Handle_Input_State_Changed_Params
{
	TEnumAsByte<PlatformGameFramework_EPGAME_INPUT_STATE> InputState;                                                // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function LoginEula.LoginEula_C.SetActiveScrollCallout
struct ULoginEula_C_SetActiveScrollCallout_Params
{
};

// Function LoginEula.LoginEula_C.BndEvt__FormBackButton_K2Node_ComponentBoundEvent_1_OnClicked__DelegateSignature
struct ULoginEula_C_BndEvt__FormBackButton_K2Node_ComponentBoundEvent_1_OnClicked__DelegateSignature_Params
{
	int                                                Index;                                                     // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function LoginEula.LoginEula_C.BndEvt__FormNextButton_K2Node_ComponentBoundEvent_2_OnClicked__DelegateSignature
struct ULoginEula_C_BndEvt__FormNextButton_K2Node_ComponentBoundEvent_2_OnClicked__DelegateSignature_Params
{
	int                                                Index;                                                     // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function LoginEula.LoginEula_C.BndEvt__Checkbox_K2Node_ComponentBoundEvent_0_OnCheckChanged__DelegateSignature
struct ULoginEula_C_BndEvt__Checkbox_K2Node_ComponentBoundEvent_0_OnCheckChanged__DelegateSignature_Params
{
	bool                                               Checked;                                                   // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function LoginEula.LoginEula_C.BndEvt__AcceptNew_K2Node_ComponentBoundEvent_5_OnClicked__DelegateSignature
struct ULoginEula_C_BndEvt__AcceptNew_K2Node_ComponentBoundEvent_5_OnClicked__DelegateSignature_Params
{
	class UWidget*                                     Widget;                                                    // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function LoginEula.LoginEula_C.BndEvt__BackNew_K2Node_ComponentBoundEvent_7_OnClicked__DelegateSignature
struct ULoginEula_C_BndEvt__BackNew_K2Node_ComponentBoundEvent_7_OnClicked__DelegateSignature_Params
{
	class UWidget*                                     Widget;                                                    // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function LoginEula.LoginEula_C.ExecuteUbergraph_LoginEula
struct ULoginEula_C_ExecuteUbergraph_LoginEula_Params
{
	int                                                EntryPoint;                                                // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
