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
//		Name   -> Function WBP_CustomMassInvite.WBP_CustomMassInvite_C.FocusFirstPlayer
//		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
//		class UKSTreeView*                                 TreeView                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWBP_CustomMassInvite_C::FocusFirstPlayer(class UKSTreeView* TreeView)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(88963);

	UWBP_CustomMassInvite_C_FocusFirstPlayer_Params params {};
	params.TreeView = TreeView;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_CustomMassInvite.WBP_CustomMassInvite_C.List_HandleItemClicked
//		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
//		class UObject*                                     Item                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		class UKSTreeView*                                 OwningList                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWBP_CustomMassInvite_C::List_HandleItemClicked(class UObject* Item, class UKSTreeView* OwningList)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(88962);

	UWBP_CustomMassInvite_C_List_HandleItemClicked_Params params {};
	params.Item = Item;
	params.OwningList = OwningList;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_CustomMassInvite.WBP_CustomMassInvite_C.List_HandleItemInitialized
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
//		class UObject*                                     Item                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		class UUserWidget*                                 Widget                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWBP_CustomMassInvite_C::List_HandleItemInitialized(class UObject* Item, class UUserWidget* Widget)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(88961);

	UWBP_CustomMassInvite_C_List_HandleItemInitialized_Params params {};
	params.Item = Item;
	params.Widget = Widget;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_CustomMassInvite.WBP_CustomMassInvite_C.List_HandleListItemHover
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
//		class UObject*                                     Item                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		bool                                               bIsSelected                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UWBP_CustomMassInvite_C::List_HandleListItemHover(class UObject* Item, bool bIsSelected)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(88960);

	UWBP_CustomMassInvite_C_List_HandleListItemHover_Params params {};
	params.Item = Item;
	params.bIsSelected = bIsSelected;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_CustomMassInvite.WBP_CustomMassInvite_C.ShowLoadAnimImpl
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
//		bool                                               ShowLoading                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
//		class UWidgetAnimation*                            Animation                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWBP_CustomMassInvite_C::ShowLoadAnimImpl(bool ShowLoading, class UWidgetAnimation* Animation)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(88959);

	UWBP_CustomMassInvite_C_ShowLoadAnimImpl_Params params {};
	params.ShowLoading = ShowLoading;
	params.Animation = Animation;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_CustomMassInvite.WBP_CustomMassInvite_C.ShowSearchListLoading
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
//		bool                                               ShowLoading                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UWBP_CustomMassInvite_C::ShowSearchListLoading(bool ShowLoading)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(88958);

	UWBP_CustomMassInvite_C_ShowSearchListLoading_Params params {};
	params.ShowLoading = ShowLoading;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_CustomMassInvite.WBP_CustomMassInvite_C.HandleReceiveSearchPlayers
//		Flags  -> (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
//		KillstreakUINew_EKSPlayerQueryError                Error                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		TArray<class UKSPlayerInfo*>                       Matches                                                    (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, HasGetValueTypeHash)
void UWBP_CustomMassInvite_C::HandleReceiveSearchPlayers(KillstreakUINew_EKSPlayerQueryError Error, TArray<class UKSPlayerInfo*> Matches)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(88957);

	UWBP_CustomMassInvite_C_HandleReceiveSearchPlayers_Params params {};
	params.Error = Error;
	params.Matches = Matches;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_CustomMassInvite.WBP_CustomMassInvite_C.GetQueryDataFactory
//		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
//		class UKSPlayerQueryDataFactory*                   DataFactory                                                (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWBP_CustomMassInvite_C::GetQueryDataFactory(class UKSPlayerQueryDataFactory** DataFactory)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(88956);

	UWBP_CustomMassInvite_C_GetQueryDataFactory_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (DataFactory != nullptr)
		*DataFactory = params.DataFactory;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_CustomMassInvite.WBP_CustomMassInvite_C.SetTab
//		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
//		int                                                Index                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWBP_CustomMassInvite_C::SetTab(int Index)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(88955);

	UWBP_CustomMassInvite_C_SetTab_Params params {};
	params.Index = Index;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_CustomMassInvite.WBP_CustomMassInvite_C.OnKeyUp
//		Flags  -> (BlueprintCosmetic, Event, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
//		struct FGeometry                                   MyGeometry                                                 (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
//		struct FKeyEvent                                   InKeyEvent                                                 (BlueprintVisible, BlueprintReadOnly, Parm)
//		struct FEventReply                                 ReturnValue                                                (Parm, OutParm, ReturnParm)
struct FEventReply UWBP_CustomMassInvite_C::OnKeyUp(const struct FGeometry& MyGeometry, const struct FKeyEvent& InKeyEvent)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(88954);

	UWBP_CustomMassInvite_C_OnKeyUp_Params params {};
	params.MyGeometry = MyGeometry;
	params.InKeyEvent = InKeyEvent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_CustomMassInvite.WBP_CustomMassInvite_C.ShowAutoListLoading
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
//		bool                                               Show                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UWBP_CustomMassInvite_C::ShowAutoListLoading(bool Show)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(88953);

	UWBP_CustomMassInvite_C_ShowAutoListLoading_Params params {};
	params.Show = Show;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_CustomMassInvite.WBP_CustomMassInvite_C.OnBlockerClick
//		Flags  -> (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
//		struct FGeometry                                   MyGeometry                                                 (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
//		struct FPointerEvent                               MouseEvent                                                 (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
//		struct FEventReply                                 ReturnValue                                                (Parm, OutParm, ReturnParm)
struct FEventReply UWBP_CustomMassInvite_C::OnBlockerClick(const struct FGeometry& MyGeometry, const struct FPointerEvent& MouseEvent)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(88952);

	UWBP_CustomMassInvite_C_OnBlockerClick_Params params {};
	params.MyGeometry = MyGeometry;
	params.MouseEvent = MouseEvent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_CustomMassInvite.WBP_CustomMassInvite_C.List_OnGetItemChildren
//		Flags  -> (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
//		class UObject*                                     Item                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		TArray<class UObject*>                             Children                                                   (Parm, OutParm, HasGetValueTypeHash)
void UWBP_CustomMassInvite_C::List_OnGetItemChildren(class UObject* Item, TArray<class UObject*>* Children)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(88951);

	UWBP_CustomMassInvite_C_List_OnGetItemChildren_Params params {};
	params.Item = Item;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Children != nullptr)
		*Children = params.Children;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_CustomMassInvite.WBP_CustomMassInvite_C.NavigateBack
//		Flags  -> (Event, Protected, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
//		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
bool UWBP_CustomMassInvite_C::NavigateBack()
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(88950);

	UWBP_CustomMassInvite_C_NavigateBack_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_CustomMassInvite.WBP_CustomMassInvite_C.OnShown
//		Flags  -> (Event, Public, BlueprintEvent)
void UWBP_CustomMassInvite_C::OnShown()
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(88949);

	UWBP_CustomMassInvite_C_OnShown_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_CustomMassInvite.WBP_CustomMassInvite_C.BndEvt__PlayerList_K2Node_ComponentBoundEvent_0_SimpleListItemEventDynamic__DelegateSignature
//		Flags  -> (BlueprintEvent)
// Parameters:
//		class UObject*                                     Item                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWBP_CustomMassInvite_C::BndEvt__PlayerList_K2Node_ComponentBoundEvent_0_SimpleListItemEventDynamic__DelegateSignature(class UObject* Item)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(88948);

	UWBP_CustomMassInvite_C_BndEvt__PlayerList_K2Node_ComponentBoundEvent_0_SimpleListItemEventDynamic__DelegateSignature_Params params {};
	params.Item = Item;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_CustomMassInvite.WBP_CustomMassInvite_C.OnReceivePlayers
//		Flags  -> (HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
//		TArray<class UKSPlayerInfo*>                       Players                                                    (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, HasGetValueTypeHash)
void UWBP_CustomMassInvite_C::OnReceivePlayers(TArray<class UKSPlayerInfo*> Players)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(88947);

	UWBP_CustomMassInvite_C_OnReceivePlayers_Params params {};
	params.Players = Players;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_CustomMassInvite.WBP_CustomMassInvite_C.BndEvt__PlayerList_K2Node_ComponentBoundEvent_2_OnListEntryInitializedDynamic__DelegateSignature
//		Flags  -> (BlueprintEvent)
// Parameters:
//		class UObject*                                     Item                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		class UUserWidget*                                 Widget                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWBP_CustomMassInvite_C::BndEvt__PlayerList_K2Node_ComponentBoundEvent_2_OnListEntryInitializedDynamic__DelegateSignature(class UObject* Item, class UUserWidget* Widget)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(88946);

	UWBP_CustomMassInvite_C_BndEvt__PlayerList_K2Node_ComponentBoundEvent_2_OnListEntryInitializedDynamic__DelegateSignature_Params params {};
	params.Item = Item;
	params.Widget = Widget;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_CustomMassInvite.WBP_CustomMassInvite_C.InitializeWidgetNavigation
//		Flags  -> (Event, Public, BlueprintEvent)
void UWBP_CustomMassInvite_C::InitializeWidgetNavigation()
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(88945);

	UWBP_CustomMassInvite_C_InitializeWidgetNavigation_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_CustomMassInvite.WBP_CustomMassInvite_C.BndEvt__WBP_ModalPopupContainer_K2Node_ComponentBoundEvent_3_CloseButtonClicked__DelegateSignature
//		Flags  -> (BlueprintEvent)
void UWBP_CustomMassInvite_C::BndEvt__WBP_ModalPopupContainer_K2Node_ComponentBoundEvent_3_CloseButtonClicked__DelegateSignature()
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(88944);

	UWBP_CustomMassInvite_C_BndEvt__WBP_ModalPopupContainer_K2Node_ComponentBoundEvent_3_CloseButtonClicked__DelegateSignature_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_CustomMassInvite.WBP_CustomMassInvite_C.BndEvt__PlayerList_K2Node_ComponentBoundEvent_5_OnItemIsHoveredChangedDynamic__DelegateSignature
//		Flags  -> (BlueprintEvent)
// Parameters:
//		class UObject*                                     Item                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		bool                                               bIsHovered                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UWBP_CustomMassInvite_C::BndEvt__PlayerList_K2Node_ComponentBoundEvent_5_OnItemIsHoveredChangedDynamic__DelegateSignature(class UObject* Item, bool bIsHovered)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(88943);

	UWBP_CustomMassInvite_C_BndEvt__PlayerList_K2Node_ComponentBoundEvent_5_OnItemIsHoveredChangedDynamic__DelegateSignature_Params params {};
	params.Item = Item;
	params.bIsHovered = bIsHovered;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_CustomMassInvite.WBP_CustomMassInvite_C.BndEvt__PlayerList_K2Node_ComponentBoundEvent_6_OnListItemSelectionChangedDynamic__DelegateSignature
//		Flags  -> (BlueprintEvent)
// Parameters:
//		class UObject*                                     Item                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		bool                                               bIsSelected                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UWBP_CustomMassInvite_C::BndEvt__PlayerList_K2Node_ComponentBoundEvent_6_OnListItemSelectionChangedDynamic__DelegateSignature(class UObject* Item, bool bIsSelected)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(88942);

	UWBP_CustomMassInvite_C_BndEvt__PlayerList_K2Node_ComponentBoundEvent_6_OnListItemSelectionChangedDynamic__DelegateSignature_Params params {};
	params.Item = Item;
	params.bIsSelected = bIsSelected;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_CustomMassInvite.WBP_CustomMassInvite_C.BndEvt__BlockerButton_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature
//		Flags  -> (BlueprintEvent)
void UWBP_CustomMassInvite_C::BndEvt__BlockerButton_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature()
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(88941);

	UWBP_CustomMassInvite_C_BndEvt__BlockerButton_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_CustomMassInvite.WBP_CustomMassInvite_C.OnInitialized
//		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
void UWBP_CustomMassInvite_C::OnInitialized()
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(88940);

	UWBP_CustomMassInvite_C_OnInitialized_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_CustomMassInvite.WBP_CustomMassInvite_C.OnLoadingAnimationStart
//		Flags  -> (BlueprintCallable, BlueprintEvent)
void UWBP_CustomMassInvite_C::OnLoadingAnimationStart()
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(88939);

	UWBP_CustomMassInvite_C_OnLoadingAnimationStart_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_CustomMassInvite.WBP_CustomMassInvite_C.OnLoadingAnimationEnd
//		Flags  -> (BlueprintCallable, BlueprintEvent)
void UWBP_CustomMassInvite_C::OnLoadingAnimationEnd()
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(88938);

	UWBP_CustomMassInvite_C_OnLoadingAnimationEnd_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_CustomMassInvite.WBP_CustomMassInvite_C.OnInputStateChanged
//		Flags  -> (BlueprintCallable, BlueprintEvent)
// Parameters:
//		TEnumAsByte<PlatformGameFramework_EPGAME_INPUT_STATE> InputState                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWBP_CustomMassInvite_C::OnInputStateChanged(TEnumAsByte<PlatformGameFramework_EPGAME_INPUT_STATE> InputState)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(88937);

	UWBP_CustomMassInvite_C_OnInputStateChanged_Params params {};
	params.InputState = InputState;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_CustomMassInvite.WBP_CustomMassInvite_C.InitializeWidget
//		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
//		class APUMG_HUD*                                   HUD                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWBP_CustomMassInvite_C::InitializeWidget(class APUMG_HUD* HUD)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(88936);

	UWBP_CustomMassInvite_C_InitializeWidget_Params params {};
	params.HUD = HUD;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_CustomMassInvite.WBP_CustomMassInvite_C.BndEvt__SearchBar_K2Node_ComponentBoundEvent_9_OnSearchTermChange__DelegateSignature
//		Flags  -> (BlueprintEvent)
// Parameters:
//		struct FText                                       SearchTerm                                                 (BlueprintVisible, BlueprintReadOnly, Parm)
void UWBP_CustomMassInvite_C::BndEvt__SearchBar_K2Node_ComponentBoundEvent_9_OnSearchTermChange__DelegateSignature(const struct FText& SearchTerm)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(88935);

	UWBP_CustomMassInvite_C_BndEvt__SearchBar_K2Node_ComponentBoundEvent_9_OnSearchTermChange__DelegateSignature_Params params {};
	params.SearchTerm = SearchTerm;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_CustomMassInvite.WBP_CustomMassInvite_C.OnHide
//		Flags  -> (Event, Public, BlueprintEvent)
void UWBP_CustomMassInvite_C::OnHide()
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(88934);

	UWBP_CustomMassInvite_C_OnHide_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_CustomMassInvite.WBP_CustomMassInvite_C.OnLoadingSearchStart
//		Flags  -> (BlueprintCallable, BlueprintEvent)
void UWBP_CustomMassInvite_C::OnLoadingSearchStart()
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(88933);

	UWBP_CustomMassInvite_C_OnLoadingSearchStart_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_CustomMassInvite.WBP_CustomMassInvite_C.OnLoadingSearchEnd
//		Flags  -> (BlueprintCallable, BlueprintEvent)
void UWBP_CustomMassInvite_C::OnLoadingSearchEnd()
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(88932);

	UWBP_CustomMassInvite_C_OnLoadingSearchEnd_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_CustomMassInvite.WBP_CustomMassInvite_C.BndEvt__SearchList_K2Node_ComponentBoundEvent_10_OnListEntryInitializedDynamic__DelegateSignature
//		Flags  -> (BlueprintEvent)
// Parameters:
//		class UObject*                                     Item                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		class UUserWidget*                                 Widget                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWBP_CustomMassInvite_C::BndEvt__SearchList_K2Node_ComponentBoundEvent_10_OnListEntryInitializedDynamic__DelegateSignature(class UObject* Item, class UUserWidget* Widget)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(88931);

	UWBP_CustomMassInvite_C_BndEvt__SearchList_K2Node_ComponentBoundEvent_10_OnListEntryInitializedDynamic__DelegateSignature_Params params {};
	params.Item = Item;
	params.Widget = Widget;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_CustomMassInvite.WBP_CustomMassInvite_C.BndEvt__SearchList_K2Node_ComponentBoundEvent_11_SimpleListItemEventDynamic__DelegateSignature
//		Flags  -> (BlueprintEvent)
// Parameters:
//		class UObject*                                     Item                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWBP_CustomMassInvite_C::BndEvt__SearchList_K2Node_ComponentBoundEvent_11_SimpleListItemEventDynamic__DelegateSignature(class UObject* Item)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(88930);

	UWBP_CustomMassInvite_C_BndEvt__SearchList_K2Node_ComponentBoundEvent_11_SimpleListItemEventDynamic__DelegateSignature_Params params {};
	params.Item = Item;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_CustomMassInvite.WBP_CustomMassInvite_C.BndEvt__SearchList_K2Node_ComponentBoundEvent_12_OnListItemSelectionChangedDynamic__DelegateSignature
//		Flags  -> (BlueprintEvent)
// Parameters:
//		class UObject*                                     Item                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		bool                                               bIsSelected                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UWBP_CustomMassInvite_C::BndEvt__SearchList_K2Node_ComponentBoundEvent_12_OnListItemSelectionChangedDynamic__DelegateSignature(class UObject* Item, bool bIsSelected)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(88929);

	UWBP_CustomMassInvite_C_BndEvt__SearchList_K2Node_ComponentBoundEvent_12_OnListItemSelectionChangedDynamic__DelegateSignature_Params params {};
	params.Item = Item;
	params.bIsSelected = bIsSelected;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_CustomMassInvite.WBP_CustomMassInvite_C.BndEvt__SearchList_K2Node_ComponentBoundEvent_13_OnItemIsHoveredChangedDynamic__DelegateSignature
//		Flags  -> (BlueprintEvent)
// Parameters:
//		class UObject*                                     Item                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		bool                                               bIsHovered                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UWBP_CustomMassInvite_C::BndEvt__SearchList_K2Node_ComponentBoundEvent_13_OnItemIsHoveredChangedDynamic__DelegateSignature(class UObject* Item, bool bIsHovered)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(88928);

	UWBP_CustomMassInvite_C_BndEvt__SearchList_K2Node_ComponentBoundEvent_13_OnItemIsHoveredChangedDynamic__DelegateSignature_Params params {};
	params.Item = Item;
	params.bIsHovered = bIsHovered;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_CustomMassInvite.WBP_CustomMassInvite_C.BndEvt__SubmitBtn_K2Node_ComponentBoundEvent_14_OnClicked__DelegateSignature
//		Flags  -> (BlueprintEvent)
// Parameters:
//		class UWidget*                                     Widget                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWBP_CustomMassInvite_C::BndEvt__SubmitBtn_K2Node_ComponentBoundEvent_14_OnClicked__DelegateSignature(class UWidget* Widget)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(88927);

	UWBP_CustomMassInvite_C_BndEvt__SubmitBtn_K2Node_ComponentBoundEvent_14_OnClicked__DelegateSignature_Params params {};
	params.Widget = Widget;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_CustomMassInvite.WBP_CustomMassInvite_C.BndEvt__AutoTab_K2Node_ComponentBoundEvent_4_OnNavTabSelected__DelegateSignature
//		Flags  -> (BlueprintEvent)
// Parameters:
//		class UKSNavTabWidget*                             SelectedNavTab                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWBP_CustomMassInvite_C::BndEvt__AutoTab_K2Node_ComponentBoundEvent_4_OnNavTabSelected__DelegateSignature(class UKSNavTabWidget* SelectedNavTab)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(88926);

	UWBP_CustomMassInvite_C_BndEvt__AutoTab_K2Node_ComponentBoundEvent_4_OnNavTabSelected__DelegateSignature_Params params {};
	params.SelectedNavTab = SelectedNavTab;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_CustomMassInvite.WBP_CustomMassInvite_C.BndEvt__SearchTab_K2Node_ComponentBoundEvent_15_OnNavTabSelected__DelegateSignature
//		Flags  -> (BlueprintEvent)
// Parameters:
//		class UKSNavTabWidget*                             SelectedNavTab                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWBP_CustomMassInvite_C::BndEvt__SearchTab_K2Node_ComponentBoundEvent_15_OnNavTabSelected__DelegateSignature(class UKSNavTabWidget* SelectedNavTab)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(88925);

	UWBP_CustomMassInvite_C_BndEvt__SearchTab_K2Node_ComponentBoundEvent_15_OnNavTabSelected__DelegateSignature_Params params {};
	params.SelectedNavTab = SelectedNavTab;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_CustomMassInvite.WBP_CustomMassInvite_C.ExecuteUbergraph_WBP_CustomMassInvite
//		Flags  -> (Final, HasDefaults)
// Parameters:
//		int                                                EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWBP_CustomMassInvite_C::ExecuteUbergraph_WBP_CustomMassInvite(int EntryPoint)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(88924);

	UWBP_CustomMassInvite_C_ExecuteUbergraph_WBP_CustomMassInvite_Params params {};
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_CustomMassInvite.WBP_CustomMassInvite_C.OnSelect__DelegateSignature
//		Flags  -> (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
//		class UKSPlayerInfo*                               playerinfo                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWBP_CustomMassInvite_C::OnSelect__DelegateSignature(class UKSPlayerInfo* playerinfo)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(88923);

	UWBP_CustomMassInvite_C_OnSelect__DelegateSignature_Params params {};
	params.playerinfo = playerinfo;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
