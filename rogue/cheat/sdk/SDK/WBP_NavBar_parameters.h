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

// Function WBP_NavBar.WBP_NavBar_C.ClearIndeces
struct UWBP_NavBar_C_ClearIndeces_Params
{
};

// Function WBP_NavBar.WBP_NavBar_C.GetActiveIndex
struct UWBP_NavBar_C_GetActiveIndex_Params
{
	int                                                Index;                                                     // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function WBP_NavBar.WBP_NavBar_C.HandleNavRightFromIndex
struct UWBP_NavBar_C_HandleNavRightFromIndex_Params
{
	int                                                PreviousIndex;                                             // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function WBP_NavBar.WBP_NavBar_C.HandleNavLeftFromIndex
struct UWBP_NavBar_C_HandleNavLeftFromIndex_Params
{
	int                                                PreviousIndex;                                             // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function WBP_NavBar.WBP_NavBar_C.HandleInput
struct UWBP_NavBar_C_HandleInput_Params
{
	struct FKey                                        InKey;                                                     // 0x0000(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
	bool                                               Handled;                                                   // 0x0018(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function WBP_NavBar.WBP_NavBar_C.OnKeyUp
struct UWBP_NavBar_C_OnKeyUp_Params
{
	struct FGeometry                                   MyGeometry;                                                // 0x0000(0x0058)  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	struct FKeyEvent                                   InKeyEvent;                                                // 0x0058(0x0038)  (BlueprintVisible, BlueprintReadOnly, Parm)
	struct FEventReply                                 ReturnValue;                                               // 0x0090(0x00C0)  (Parm, OutParm, ReturnParm)
};

// Function WBP_NavBar.WBP_NavBar_C.SetButtonIndexActive
struct UWBP_NavBar_C_SetButtonIndexActive_Params
{
	int                                                ButtonIndex;                                               // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function WBP_NavBar.WBP_NavBar_C.HandleNavRight
struct UWBP_NavBar_C_HandleNavRight_Params
{
};

// Function WBP_NavBar.WBP_NavBar_C.HandleNavLeft
struct UWBP_NavBar_C_HandleNavLeft_Params
{
};

// Function WBP_NavBar.WBP_NavBar_C.HandleInputStateChanged
struct UWBP_NavBar_C_HandleInputStateChanged_Params
{
	TEnumAsByte<PlatformGameFramework_EPGAME_INPUT_STATE> InputState;                                                // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function WBP_NavBar.WBP_NavBar_C.SetupGamepadCallouts
struct UWBP_NavBar_C_SetupGamepadCallouts_Params
{
};

// Function WBP_NavBar.WBP_NavBar_C.SetNavButtons
struct UWBP_NavBar_C_SetNavButtons_Params
{
	TArray<struct FNavButtonData>                      Buttons;                                                   // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, ContainsInstancedReference, HasGetValueTypeHash)
};

// Function WBP_NavBar.WBP_NavBar_C.Construct
struct UWBP_NavBar_C_Construct_Params
{
};

// Function WBP_NavBar.WBP_NavBar_C.OnButtonClicked
struct UWBP_NavBar_C_OnButtonClicked_Params
{
	class UKSWidget*                                   ButtonClicked;                                             // 0x0000(0x0008)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function WBP_NavBar.WBP_NavBar_C.InitializeWidget
struct UWBP_NavBar_C_InitializeWidget_Params
{
	class APUMG_HUD*                                   HUD;                                                       // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function WBP_NavBar.WBP_NavBar_C.ExecuteUbergraph_WBP_NavBar
struct UWBP_NavBar_C_ExecuteUbergraph_WBP_NavBar_Params
{
	int                                                EntryPoint;                                                // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function WBP_NavBar.WBP_NavBar_C.OnButtonsCreated__DelegateSignature
struct UWBP_NavBar_C_OnButtonsCreated__DelegateSignature_Params
{
};

// Function WBP_NavBar.WBP_NavBar_C.OnButtonSelected__DelegateSignature
struct UWBP_NavBar_C_OnButtonSelected__DelegateSignature_Params
{
	int                                                ButtonIndex;                                               // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
