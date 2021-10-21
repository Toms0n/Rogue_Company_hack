// Name: roguecompany, Version: 425

#include "../pch.h"

/*!!DEFINE!!*/

/*!!HELPER_DEF!!*/

/*!!HELPER_INC!!*/

#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

namespace CG
{
//---------------------------------------------------------------------------
// Functions
//---------------------------------------------------------------------------

// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function ReportMenu.ReportMenu_C.GetNavigationWidgets
//		Flags  -> (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
//		TArray<class UPUMG_Widget*>                        Return_Value                                               (Parm, OutParm, ContainsInstancedReference, HasGetValueTypeHash)
void UReportMenu_C::GetNavigationWidgets(TArray<class UPUMG_Widget*>* Return_Value)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(222473);

	UReportMenu_C_GetNavigationWidgets_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Return_Value != nullptr)
		*Return_Value = params.Return_Value;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function ReportMenu.ReportMenu_C.SelectReason
//		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
//		KillstreakUINew_EReportPlayerReason                ReportReason                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UReportMenu_C::SelectReason(KillstreakUINew_EReportPlayerReason ReportReason)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(222472);

	UReportMenu_C_SelectReason_Params params {};
	params.ReportReason = ReportReason;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function ReportMenu.ReportMenu_C.ReportPlayer
//		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
//		KillstreakUINew_EReportPlayerReason                ReportReason                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UReportMenu_C::ReportPlayer(KillstreakUINew_EReportPlayerReason ReportReason)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(222471);

	UReportMenu_C_ReportPlayer_Params params {};
	params.ReportReason = ReportReason;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function ReportMenu.ReportMenu_C.OnOpenReportScreen
//		Flags  -> (HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
//		struct FReportPlayerParams                         Report                                                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
void UReportMenu_C::OnOpenReportScreen(const struct FReportPlayerParams& Report)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(222470);

	UReportMenu_C_OnOpenReportScreen_Params params {};
	params.Report = Report;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function ReportMenu.ReportMenu_C.InitializeWidget
//		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
//		class APUMG_HUD*                                   HUD                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UReportMenu_C::InitializeWidget(class APUMG_HUD* HUD)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(222469);

	UReportMenu_C_InitializeWidget_Params params {};
	params.HUD = HUD;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function ReportMenu.ReportMenu_C.OnShown
//		Flags  -> (Event, Public, BlueprintEvent)
void UReportMenu_C::OnShown()
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(222468);

	UReportMenu_C_OnShown_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function ReportMenu.ReportMenu_C.OnHide
//		Flags  -> (Event, Public, BlueprintEvent)
void UReportMenu_C::OnHide()
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(222467);

	UReportMenu_C_OnHide_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function ReportMenu.ReportMenu_C.BndEvt__SubmitNew_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature
//		Flags  -> (BlueprintEvent)
// Parameters:
//		class UWidget*                                     Widget                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UReportMenu_C::BndEvt__SubmitNew_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature(class UWidget* Widget)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(222466);

	UReportMenu_C_BndEvt__SubmitNew_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature_Params params {};
	params.Widget = Widget;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function ReportMenu.ReportMenu_C.BndEvt__HarassmentButton_K2Node_ComponentBoundEvent_1_OnBtnStackedClicked__DelegateSignature
//		Flags  -> (BlueprintEvent)
void UReportMenu_C::BndEvt__HarassmentButton_K2Node_ComponentBoundEvent_1_OnBtnStackedClicked__DelegateSignature()
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(222465);

	UReportMenu_C_BndEvt__HarassmentButton_K2Node_ComponentBoundEvent_1_OnBtnStackedClicked__DelegateSignature_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function ReportMenu.ReportMenu_C.BndEvt__CheatingButton_K2Node_ComponentBoundEvent_3_OnBtnStackedClicked__DelegateSignature
//		Flags  -> (BlueprintEvent)
void UReportMenu_C::BndEvt__CheatingButton_K2Node_ComponentBoundEvent_3_OnBtnStackedClicked__DelegateSignature()
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(222464);

	UReportMenu_C_BndEvt__CheatingButton_K2Node_ComponentBoundEvent_3_OnBtnStackedClicked__DelegateSignature_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function ReportMenu.ReportMenu_C.BndEvt__IntentionalFeedingButton_K2Node_ComponentBoundEvent_5_OnBtnStackedClicked__DelegateSignature
//		Flags  -> (BlueprintEvent)
void UReportMenu_C::BndEvt__IntentionalFeedingButton_K2Node_ComponentBoundEvent_5_OnBtnStackedClicked__DelegateSignature()
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(222463);

	UReportMenu_C_BndEvt__IntentionalFeedingButton_K2Node_ComponentBoundEvent_5_OnBtnStackedClicked__DelegateSignature_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function ReportMenu.ReportMenu_C.BndEvt__StreamSnipingButton_K2Node_ComponentBoundEvent_8_OnBtnStackedClicked__DelegateSignature
//		Flags  -> (BlueprintEvent)
void UReportMenu_C::BndEvt__StreamSnipingButton_K2Node_ComponentBoundEvent_8_OnBtnStackedClicked__DelegateSignature()
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(222462);

	UReportMenu_C_BndEvt__StreamSnipingButton_K2Node_ComponentBoundEvent_8_OnBtnStackedClicked__DelegateSignature_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function ReportMenu.ReportMenu_C.BndEvt__LeavingButton_K2Node_ComponentBoundEvent_12_OnBtnStackedClicked__DelegateSignature
//		Flags  -> (BlueprintEvent)
void UReportMenu_C::BndEvt__LeavingButton_K2Node_ComponentBoundEvent_12_OnBtnStackedClicked__DelegateSignature()
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(222461);

	UReportMenu_C_BndEvt__LeavingButton_K2Node_ComponentBoundEvent_12_OnBtnStackedClicked__DelegateSignature_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function ReportMenu.ReportMenu_C.BndEvt__OtherButton_K2Node_ComponentBoundEvent_16_OnBtnStackedClicked__DelegateSignature
//		Flags  -> (BlueprintEvent)
void UReportMenu_C::BndEvt__OtherButton_K2Node_ComponentBoundEvent_16_OnBtnStackedClicked__DelegateSignature()
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(222460);

	UReportMenu_C_BndEvt__OtherButton_K2Node_ComponentBoundEvent_16_OnBtnStackedClicked__DelegateSignature_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function ReportMenu.ReportMenu_C.ExecuteUbergraph_ReportMenu
//		Flags  -> (Final, HasDefaults)
// Parameters:
//		int                                                EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UReportMenu_C::ExecuteUbergraph_ReportMenu(int EntryPoint)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(222459);

	UReportMenu_C_ExecuteUbergraph_ReportMenu_Params params {};
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function ReportMenu.ReportMenu_C.OnTabPressed__DelegateSignature
//		Flags  -> (Public, Delegate, BlueprintCallable, BlueprintEvent)
void UReportMenu_C::OnTabPressed__DelegateSignature()
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(222458);

	UReportMenu_C_OnTabPressed__DelegateSignature_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function ReportMenu.ReportMenu_C.OnPlayerReported__DelegateSignature
//		Flags  -> (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
//		int64_t                                            PlayerId                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		bool                                               Success                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UReportMenu_C::OnPlayerReported__DelegateSignature(int64_t PlayerId, bool Success)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(71134);

	UReportMenu_C_OnPlayerReported__DelegateSignature_Params params {};
	params.PlayerId = PlayerId;
	params.Success = Success;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function ReportMenu.ReportMenu_C.OnCloseTabScreen__DelegateSignature
//		Flags  -> (Public, Delegate, BlueprintCallable, BlueprintEvent)
void UReportMenu_C::OnCloseTabScreen__DelegateSignature()
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(71133);

	UReportMenu_C_OnCloseTabScreen__DelegateSignature_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
