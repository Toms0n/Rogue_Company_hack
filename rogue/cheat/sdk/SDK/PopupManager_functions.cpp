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
//		Name   -> Function PopupManager.PopupManager_C.OnKeyUp
//		Flags  -> (BlueprintCosmetic, Event, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
//		struct FGeometry                                   MyGeometry                                                 (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
//		struct FKeyEvent                                   InKeyEvent                                                 (BlueprintVisible, BlueprintReadOnly, Parm)
//		struct FEventReply                                 ReturnValue                                                (Parm, OutParm, ReturnParm)
struct FEventReply UPopupManager_C::OnKeyUp(const struct FGeometry& MyGeometry, const struct FKeyEvent& InKeyEvent)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(57386);

	UPopupManager_C_OnKeyUp_Params params {};
	params.MyGeometry = MyGeometry;
	params.InKeyEvent = InKeyEvent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function PopupManager.PopupManager_C.OnKeyDown
//		Flags  -> (BlueprintCosmetic, Event, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
//		struct FGeometry                                   MyGeometry                                                 (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
//		struct FKeyEvent                                   InKeyEvent                                                 (BlueprintVisible, BlueprintReadOnly, Parm)
//		struct FEventReply                                 ReturnValue                                                (Parm, OutParm, ReturnParm)
struct FEventReply UPopupManager_C::OnKeyDown(const struct FGeometry& MyGeometry, const struct FKeyEvent& InKeyEvent)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(57385);

	UPopupManager_C_OnKeyDown_Params params {};
	params.MyGeometry = MyGeometry;
	params.InKeyEvent = InKeyEvent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function PopupManager.PopupManager_C.SetupSubHeaderText
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
//		struct FText                                       NewSubHeaderText                                           (BlueprintVisible, BlueprintReadOnly, Parm)
void UPopupManager_C::SetupSubHeaderText(const struct FText& NewSubHeaderText)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(57384);

	UPopupManager_C_SetupSubHeaderText_Params params {};
	params.NewSubHeaderText = NewSubHeaderText;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function PopupManager.PopupManager_C.SetupButtons
//		Flags  -> (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
//		TArray<struct FPUMG_PopupButtonConfig>             ButtonInfo                                                 (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, ContainsInstancedReference, HasGetValueTypeHash)
void UPopupManager_C::SetupButtons(TArray<struct FPUMG_PopupButtonConfig>* ButtonInfo)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(57383);

	UPopupManager_C_SetupButtons_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (ButtonInfo != nullptr)
		*ButtonInfo = params.ButtonInfo;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function PopupManager.PopupManager_C.SetupTextEntry
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
//		bool                                               HasTextEntry                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
//		struct FText                                       DefaultEntryText                                           (BlueprintVisible, BlueprintReadOnly, Parm)
void UPopupManager_C::SetupTextEntry(bool HasTextEntry, const struct FText& DefaultEntryText)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(57382);

	UPopupManager_C_SetupTextEntry_Params params {};
	params.HasTextEntry = HasTextEntry;
	params.DefaultEntryText = DefaultEntryText;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function PopupManager.PopupManager_C.SetupWarningText
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
//		struct FText                                       NewWarningText                                             (BlueprintVisible, BlueprintReadOnly, Parm)
void UPopupManager_C::SetupWarningText(const struct FText& NewWarningText)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(57381);

	UPopupManager_C_SetupWarningText_Params params {};
	params.NewWarningText = NewWarningText;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function PopupManager.PopupManager_C.SetupDescription
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
//		struct FText                                       NewDescText                                                (BlueprintVisible, BlueprintReadOnly, Parm)
void UPopupManager_C::SetupDescription(const struct FText& NewDescText)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(57380);

	UPopupManager_C_SetupDescription_Params params {};
	params.NewDescText = NewDescText;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function PopupManager.PopupManager_C.SetupHeader
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
//		struct FText                                       NewHeaderText                                              (BlueprintVisible, BlueprintReadOnly, Parm)
void UPopupManager_C::SetupHeader(const struct FText& NewHeaderText)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(57379);

	UPopupManager_C_SetupHeader_Params params {};
	params.NewHeaderText = NewHeaderText;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function PopupManager.PopupManager_C.NavigateBack
//		Flags  -> (Event, Protected, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
//		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
bool UPopupManager_C::NavigateBack()
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(57378);

	UPopupManager_C_NavigateBack_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function PopupManager.PopupManager_C.Construct
//		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
void UPopupManager_C::Construct()
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(57377);

	UPopupManager_C_Construct_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function PopupManager.PopupManager_C.ShowPopup
//		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
//		struct FPUMG_PopupConfig                           popupData                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ContainsInstancedReference)
void UPopupManager_C::ShowPopup(const struct FPUMG_PopupConfig& popupData)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(57376);

	UPopupManager_C_ShowPopup_Params params {};
	params.popupData = popupData;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function PopupManager.PopupManager_C.HidePopup
//		Flags  -> (Event, Protected, BlueprintEvent)
void UPopupManager_C::HidePopup()
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(57375);

	UPopupManager_C_HidePopup_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function PopupManager.PopupManager_C.ButtonPressed
//		Flags  -> (BlueprintCallable, BlueprintEvent)
// Parameters:
//		class UWidget*                                     Index                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UPopupManager_C::ButtonPressed(class UWidget* Index)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(57374);

	UPopupManager_C_ButtonPressed_Params params {};
	params.Index = Index;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function PopupManager.PopupManager_C.InitializeWidgetNavigation
//		Flags  -> (Event, Public, BlueprintEvent)
void UPopupManager_C::InitializeWidgetNavigation()
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(57373);

	UPopupManager_C_InitializeWidgetNavigation_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function PopupManager.PopupManager_C.InitializeWidget
//		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
//		class APUMG_HUD*                                   HUD                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UPopupManager_C::InitializeWidget(class APUMG_HUD* HUD)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(57372);

	UPopupManager_C_InitializeWidget_Params params {};
	params.HUD = HUD;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function PopupManager.PopupManager_C.BndEvt__CancelButton_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature
//		Flags  -> (BlueprintEvent)
// Parameters:
//		class UWidget*                                     Widget                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UPopupManager_C::BndEvt__CancelButton_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature(class UWidget* Widget)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(57371);

	UPopupManager_C_BndEvt__CancelButton_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature_Params params {};
	params.Widget = Widget;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function PopupManager.PopupManager_C.HandleCancelButtonClicked
//		Flags  -> (BlueprintCallable, BlueprintEvent)
// Parameters:
//		class UWidget*                                     InIndex                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UPopupManager_C::HandleCancelButtonClicked(class UWidget* InIndex)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(57370);

	UPopupManager_C_HandleCancelButtonClicked_Params params {};
	params.InIndex = InIndex;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function PopupManager.PopupManager_C.OnShown
//		Flags  -> (Event, Public, BlueprintEvent)
void UPopupManager_C::OnShown()
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(57369);

	UPopupManager_C_OnShown_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function PopupManager.PopupManager_C.OnHide
//		Flags  -> (Event, Public, BlueprintEvent)
void UPopupManager_C::OnHide()
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(57270);

	UPopupManager_C_OnHide_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function PopupManager.PopupManager_C.OnBackButton
//		Flags  -> (BlueprintCallable, BlueprintEvent)
void UPopupManager_C::OnBackButton()
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(57269);

	UPopupManager_C_OnBackButton_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function PopupManager.PopupManager_C.ExecuteUbergraph_PopupManager
//		Flags  -> (Final, HasDefaults)
// Parameters:
//		int                                                EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UPopupManager_C::ExecuteUbergraph_PopupManager(int EntryPoint)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(57268);

	UPopupManager_C_ExecuteUbergraph_PopupManager_Params params {};
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
