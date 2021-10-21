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

// Function WBP_PlayerAwardsScreen.WBP_PlayerAwardsScreen_C.NavigateBack
struct UWBP_PlayerAwardsScreen_C_NavigateBack_Params
{
	bool                                               ReturnValue;                                               // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
};

// Function WBP_PlayerAwardsScreen.WBP_PlayerAwardsScreen_C.GoBack
struct UWBP_PlayerAwardsScreen_C_GoBack_Params
{
};

// Function WBP_PlayerAwardsScreen.WBP_PlayerAwardsScreen_C.RegisterScrollingInput
struct UWBP_PlayerAwardsScreen_C_RegisterScrollingInput_Params
{
};

// Function WBP_PlayerAwardsScreen.WBP_PlayerAwardsScreen_C.TickScrolling
struct UWBP_PlayerAwardsScreen_C_TickScrolling_Params
{
	float                                              DeltaTime;                                                 // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function WBP_PlayerAwardsScreen.WBP_PlayerAwardsScreen_C.ScrollReleased
struct UWBP_PlayerAwardsScreen_C_ScrollReleased_Params
{
};

// Function WBP_PlayerAwardsScreen.WBP_PlayerAwardsScreen_C.ScrollDownPressed
struct UWBP_PlayerAwardsScreen_C_ScrollDownPressed_Params
{
};

// Function WBP_PlayerAwardsScreen.WBP_PlayerAwardsScreen_C.ScrollUpPressed
struct UWBP_PlayerAwardsScreen_C_ScrollUpPressed_Params
{
};

// Function WBP_PlayerAwardsScreen.WBP_PlayerAwardsScreen_C.CompareChildren
struct UWBP_PlayerAwardsScreen_C_CompareChildren_Params
{
	class UWidget*                                     LHS;                                                       // 0x0000(0x0008)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UWidget*                                     RHS;                                                       // 0x0008(0x0008)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               ReturnValue;                                               // 0x0010(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
};

// Function WBP_PlayerAwardsScreen.WBP_PlayerAwardsScreen_C.Construct
struct UWBP_PlayerAwardsScreen_C_Construct_Params
{
};

// Function WBP_PlayerAwardsScreen.WBP_PlayerAwardsScreen_C.Tick
struct UWBP_PlayerAwardsScreen_C_Tick_Params
{
	struct FGeometry                                   MyGeometry;                                                // 0x0000(0x0058)  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	float                                              InDeltaTime;                                               // 0x0058(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function WBP_PlayerAwardsScreen.WBP_PlayerAwardsScreen_C.OnShown
struct UWBP_PlayerAwardsScreen_C_OnShown_Params
{
};

// Function WBP_PlayerAwardsScreen.WBP_PlayerAwardsScreen_C.InitializeWidgetButtonListeners
struct UWBP_PlayerAwardsScreen_C_InitializeWidgetButtonListeners_Params
{
};

// Function WBP_PlayerAwardsScreen.WBP_PlayerAwardsScreen_C.InitializeWidget
struct UWBP_PlayerAwardsScreen_C_InitializeWidget_Params
{
	class APUMG_HUD*                                   HUD;                                                       // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function WBP_PlayerAwardsScreen.WBP_PlayerAwardsScreen_C.InitializeWidgetNavigation
struct UWBP_PlayerAwardsScreen_C_InitializeWidgetNavigation_Params
{
};

// Function WBP_PlayerAwardsScreen.WBP_PlayerAwardsScreen_C.OnBackPrompt
struct UWBP_PlayerAwardsScreen_C_OnBackPrompt_Params
{
};

// Function WBP_PlayerAwardsScreen.WBP_PlayerAwardsScreen_C.ExecuteUbergraph_WBP_PlayerAwardsScreen
struct UWBP_PlayerAwardsScreen_C_ExecuteUbergraph_WBP_PlayerAwardsScreen_Params
{
	int                                                EntryPoint;                                                // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
