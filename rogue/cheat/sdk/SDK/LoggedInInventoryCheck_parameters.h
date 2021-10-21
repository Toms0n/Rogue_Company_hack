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

// Function LoggedInInventoryCheck.LoggedInInventoryCheck_C.OnInputStateChanged
struct ULoggedInInventoryCheck_C_OnInputStateChanged_Params
{
	TEnumAsByte<PlatformGameFramework_EPGAME_INPUT_STATE> InputState;                                                // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function LoggedInInventoryCheck.LoggedInInventoryCheck_C.OnKeyUp
struct ULoggedInInventoryCheck_C_OnKeyUp_Params
{
	struct FGeometry                                   MyGeometry;                                                // 0x0000(0x0058)  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	struct FKeyEvent                                   InKeyEvent;                                                // 0x0058(0x0038)  (BlueprintVisible, BlueprintReadOnly, Parm)
	struct FEventReply                                 ReturnValue;                                               // 0x0090(0x00C0)  (Parm, OutParm, ReturnParm)
};

// Function LoggedInInventoryCheck.LoggedInInventoryCheck_C.Tick
struct ULoggedInInventoryCheck_C_Tick_Params
{
	struct FGeometry                                   MyGeometry;                                                // 0x0000(0x0058)  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	float                                              InDeltaTime;                                               // 0x0058(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function LoggedInInventoryCheck.LoggedInInventoryCheck_C.Construct
struct ULoggedInInventoryCheck_C_Construct_Params
{
};

// Function LoggedInInventoryCheck.LoggedInInventoryCheck_C.PreConstruct
struct ULoggedInInventoryCheck_C_PreConstruct_Params
{
	bool                                               IsDesignTime;                                              // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function LoggedInInventoryCheck.LoggedInInventoryCheck_C.OpenGate
struct ULoggedInInventoryCheck_C_OpenGate_Params
{
};

// Function LoggedInInventoryCheck.LoggedInInventoryCheck_C.CloseGate
struct ULoggedInInventoryCheck_C_CloseGate_Params
{
};

// Function LoggedInInventoryCheck.LoggedInInventoryCheck_C.OnShown
struct ULoggedInInventoryCheck_C_OnShown_Params
{
};

// Function LoggedInInventoryCheck.LoggedInInventoryCheck_C.InitializeWidget
struct ULoggedInInventoryCheck_C_InitializeWidget_Params
{
	class APUMG_HUD*                                   HUD;                                                       // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function LoggedInInventoryCheck.LoggedInInventoryCheck_C.BndEvt__WBP_StandardButtonMedium_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature
struct ULoggedInInventoryCheck_C_BndEvt__WBP_StandardButtonMedium_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature_Params
{
	class UWidget*                                     Widget;                                                    // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function LoggedInInventoryCheck.LoggedInInventoryCheck_C.InitializeWidgetNavigation
struct ULoggedInInventoryCheck_C_InitializeWidgetNavigation_Params
{
};

// Function LoggedInInventoryCheck.LoggedInInventoryCheck_C.ExecuteUbergraph_LoggedInInventoryCheck
struct ULoggedInInventoryCheck_C_ExecuteUbergraph_LoggedInInventoryCheck_Params
{
	int                                                EntryPoint;                                                // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
