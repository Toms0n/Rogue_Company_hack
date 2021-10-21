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

// Function ReportMenu.ReportMenu_C.GetNavigationWidgets
struct UReportMenu_C_GetNavigationWidgets_Params
{
	TArray<class UPUMG_Widget*>                        Return_Value;                                              // 0x0000(0x0010)  (Parm, OutParm, ContainsInstancedReference, HasGetValueTypeHash)
};

// Function ReportMenu.ReportMenu_C.SelectReason
struct UReportMenu_C_SelectReason_Params
{
	KillstreakUINew_EReportPlayerReason                ReportReason;                                              // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function ReportMenu.ReportMenu_C.ReportPlayer
struct UReportMenu_C_ReportPlayer_Params
{
	KillstreakUINew_EReportPlayerReason                ReportReason;                                              // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function ReportMenu.ReportMenu_C.OnOpenReportScreen
struct UReportMenu_C_OnOpenReportScreen_Params
{
	struct FReportPlayerParams                         Report;                                                    // 0x0000(0x0050)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};

// Function ReportMenu.ReportMenu_C.InitializeWidget
struct UReportMenu_C_InitializeWidget_Params
{
	class APUMG_HUD*                                   HUD;                                                       // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function ReportMenu.ReportMenu_C.OnShown
struct UReportMenu_C_OnShown_Params
{
};

// Function ReportMenu.ReportMenu_C.OnHide
struct UReportMenu_C_OnHide_Params
{
};

// Function ReportMenu.ReportMenu_C.BndEvt__SubmitNew_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature
struct UReportMenu_C_BndEvt__SubmitNew_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature_Params
{
	class UWidget*                                     Widget;                                                    // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function ReportMenu.ReportMenu_C.BndEvt__HarassmentButton_K2Node_ComponentBoundEvent_1_OnBtnStackedClicked__DelegateSignature
struct UReportMenu_C_BndEvt__HarassmentButton_K2Node_ComponentBoundEvent_1_OnBtnStackedClicked__DelegateSignature_Params
{
};

// Function ReportMenu.ReportMenu_C.BndEvt__CheatingButton_K2Node_ComponentBoundEvent_3_OnBtnStackedClicked__DelegateSignature
struct UReportMenu_C_BndEvt__CheatingButton_K2Node_ComponentBoundEvent_3_OnBtnStackedClicked__DelegateSignature_Params
{
};

// Function ReportMenu.ReportMenu_C.BndEvt__IntentionalFeedingButton_K2Node_ComponentBoundEvent_5_OnBtnStackedClicked__DelegateSignature
struct UReportMenu_C_BndEvt__IntentionalFeedingButton_K2Node_ComponentBoundEvent_5_OnBtnStackedClicked__DelegateSignature_Params
{
};

// Function ReportMenu.ReportMenu_C.BndEvt__StreamSnipingButton_K2Node_ComponentBoundEvent_8_OnBtnStackedClicked__DelegateSignature
struct UReportMenu_C_BndEvt__StreamSnipingButton_K2Node_ComponentBoundEvent_8_OnBtnStackedClicked__DelegateSignature_Params
{
};

// Function ReportMenu.ReportMenu_C.BndEvt__LeavingButton_K2Node_ComponentBoundEvent_12_OnBtnStackedClicked__DelegateSignature
struct UReportMenu_C_BndEvt__LeavingButton_K2Node_ComponentBoundEvent_12_OnBtnStackedClicked__DelegateSignature_Params
{
};

// Function ReportMenu.ReportMenu_C.BndEvt__OtherButton_K2Node_ComponentBoundEvent_16_OnBtnStackedClicked__DelegateSignature
struct UReportMenu_C_BndEvt__OtherButton_K2Node_ComponentBoundEvent_16_OnBtnStackedClicked__DelegateSignature_Params
{
};

// Function ReportMenu.ReportMenu_C.ExecuteUbergraph_ReportMenu
struct UReportMenu_C_ExecuteUbergraph_ReportMenu_Params
{
	int                                                EntryPoint;                                                // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function ReportMenu.ReportMenu_C.OnTabPressed__DelegateSignature
struct UReportMenu_C_OnTabPressed__DelegateSignature_Params
{
};

// Function ReportMenu.ReportMenu_C.OnPlayerReported__DelegateSignature
struct UReportMenu_C_OnPlayerReported__DelegateSignature_Params
{
	int64_t                                            PlayerId;                                                  // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               Success;                                                   // 0x0008(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function ReportMenu.ReportMenu_C.OnCloseTabScreen__DelegateSignature
struct UReportMenu_C_OnCloseTabScreen__DelegateSignature_Params
{
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
