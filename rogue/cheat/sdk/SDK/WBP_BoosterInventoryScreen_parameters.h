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

// Function WBP_BoosterInventoryScreen.WBP_BoosterInventoryScreen_C.Navigate Back Passthrough
struct UWBP_BoosterInventoryScreen_C_Navigate_Back_Passthrough_Params
{
};

// Function WBP_BoosterInventoryScreen.WBP_BoosterInventoryScreen_C.OnKeyUp
struct UWBP_BoosterInventoryScreen_C_OnKeyUp_Params
{
	struct FGeometry                                   MyGeometry;                                                // 0x0000(0x0058)  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	struct FKeyEvent                                   InKeyEvent;                                                // 0x0058(0x0038)  (BlueprintVisible, BlueprintReadOnly, Parm)
	struct FEventReply                                 ReturnValue;                                               // 0x0090(0x00C0)  (Parm, OutParm, ReturnParm)
};

// Function WBP_BoosterInventoryScreen.WBP_BoosterInventoryScreen_C.PopulateActiveBoosts
struct UWBP_BoosterInventoryScreen_C_PopulateActiveBoosts_Params
{
};

// Function WBP_BoosterInventoryScreen.WBP_BoosterInventoryScreen_C.PopulateInactiveBoostInventory
struct UWBP_BoosterInventoryScreen_C_PopulateInactiveBoostInventory_Params
{
};

// Function WBP_BoosterInventoryScreen.WBP_BoosterInventoryScreen_C.NavigateBack
struct UWBP_BoosterInventoryScreen_C_NavigateBack_Params
{
	bool                                               ReturnValue;                                               // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
};

// Function WBP_BoosterInventoryScreen.WBP_BoosterInventoryScreen_C.BndEvt__Blocker_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
struct UWBP_BoosterInventoryScreen_C_BndEvt__Blocker_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature_Params
{
};

// Function WBP_BoosterInventoryScreen.WBP_BoosterInventoryScreen_C.StartHideSequence
struct UWBP_BoosterInventoryScreen_C_StartHideSequence_Params
{
	struct FName                                       FromRoute;                                                 // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FName                                       ToRoute;                                                   // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function WBP_BoosterInventoryScreen.WBP_BoosterInventoryScreen_C.StartShowSequence
struct UWBP_BoosterInventoryScreen_C_StartShowSequence_Params
{
	struct FName                                       FromRoute;                                                 // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FName                                       ToRoute;                                                   // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function WBP_BoosterInventoryScreen.WBP_BoosterInventoryScreen_C.OnShown
struct UWBP_BoosterInventoryScreen_C_OnShown_Params
{
};

// Function WBP_BoosterInventoryScreen.WBP_BoosterInventoryScreen_C.InitializeWidgetNavigation
struct UWBP_BoosterInventoryScreen_C_InitializeWidgetNavigation_Params
{
};

// Function WBP_BoosterInventoryScreen.WBP_BoosterInventoryScreen_C.OnViewStateChange
struct UWBP_BoosterInventoryScreen_C_OnViewStateChange_Params
{
	struct FName                                       CurrentRoute;                                              // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FName                                       PreviousRoute;                                             // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	PlatformUMG_EViewManagerLayer                      Layer;                                                     // 0x0010(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function WBP_BoosterInventoryScreen.WBP_BoosterInventoryScreen_C.InitializeWidget
struct UWBP_BoosterInventoryScreen_C_InitializeWidget_Params
{
	class APUMG_HUD*                                   HUD;                                                       // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function WBP_BoosterInventoryScreen.WBP_BoosterInventoryScreen_C.OnAcquisition
struct UWBP_BoosterInventoryScreen_C_OnAcquisition_Params
{
	class UKSAcquisition*                              Acquisition;                                               // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function WBP_BoosterInventoryScreen.WBP_BoosterInventoryScreen_C.ExecuteUbergraph_WBP_BoosterInventoryScreen
struct UWBP_BoosterInventoryScreen_C_ExecuteUbergraph_WBP_BoosterInventoryScreen_Params
{
	int                                                EntryPoint;                                                // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
