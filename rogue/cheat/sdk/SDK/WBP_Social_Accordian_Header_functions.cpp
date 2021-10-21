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
//		Name   -> Function WBP_Social_Accordian_Header.WBP_Social_Accordian_Header_C.OnHeaderUpdated
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
//		class UKSDataSocialCategory*                       Category                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		struct FText                                       Header                                                     (BlueprintVisible, BlueprintReadOnly, Parm)
void UWBP_Social_Accordian_Header_C::OnHeaderUpdated(class UKSDataSocialCategory* Category, const struct FText& Header)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(70121);

	UWBP_Social_Accordian_Header_C_OnHeaderUpdated_Params params {};
	params.Category = Category;
	params.Header = Header;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_Social_Accordian_Header.WBP_Social_Accordian_Header_C.OnPlayersUpdated
//		Flags  -> (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
//		class UKSDataSocialCategory*                       Category                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		TArray<class UKSDataSocialPlayer*>                 Players                                                    (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, HasGetValueTypeHash)
void UWBP_Social_Accordian_Header_C::OnPlayersUpdated(class UKSDataSocialCategory* Category, TArray<class UKSDataSocialPlayer*> Players)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(70120);

	UWBP_Social_Accordian_Header_C_OnPlayersUpdated_Params params {};
	params.Category = Category;
	params.Players = Players;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_Social_Accordian_Header.WBP_Social_Accordian_Header_C.UpdateMessage
//		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
//		class UKSDataSocialCategory*                       Category                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		bool                                               Processing                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
//		struct FText                                       Message                                                    (BlueprintVisible, BlueprintReadOnly, Parm)
void UWBP_Social_Accordian_Header_C::UpdateMessage(class UKSDataSocialCategory* Category, bool Processing, const struct FText& Message)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(70119);

	UWBP_Social_Accordian_Header_C_UpdateMessage_Params params {};
	params.Category = Category;
	params.Processing = Processing;
	params.Message = Message;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_Social_Accordian_Header.WBP_Social_Accordian_Header_C.GetIsExpanded
//		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
//		bool                                               Expanded                                                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UWBP_Social_Accordian_Header_C::GetIsExpanded(bool* Expanded)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(70118);

	UWBP_Social_Accordian_Header_C_GetIsExpanded_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Expanded != nullptr)
		*Expanded = params.Expanded;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_Social_Accordian_Header.WBP_Social_Accordian_Header_C.GetData
//		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
//		class UKSDataSocialCategory*                       NewParam                                                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWBP_Social_Accordian_Header_C::GetData(class UKSDataSocialCategory** NewParam)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(70117);

	UWBP_Social_Accordian_Header_C_GetData_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (NewParam != nullptr)
		*NewParam = params.NewParam;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_Social_Accordian_Header.WBP_Social_Accordian_Header_C.SetExpanded
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
//		bool                                               Expanded                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UWBP_Social_Accordian_Header_C::SetExpanded(bool Expanded)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(70116);

	UWBP_Social_Accordian_Header_C_SetExpanded_Params params {};
	params.Expanded = Expanded;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_Social_Accordian_Header.WBP_Social_Accordian_Header_C.GetOuterHud
//		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
//		class AKSHUDCommon*                                HUD                                                        (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWBP_Social_Accordian_Header_C::GetOuterHud(class AKSHUDCommon** HUD)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(70115);

	UWBP_Social_Accordian_Header_C_GetOuterHud_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (HUD != nullptr)
		*HUD = params.HUD;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_Social_Accordian_Header.WBP_Social_Accordian_Header_C.SetListItemObject
//		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
//		class UObject*                                     Object                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWBP_Social_Accordian_Header_C::SetListItemObject(class UObject* Object)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(70114);

	UWBP_Social_Accordian_Header_C_SetListItemObject_Params params {};
	params.Object = Object;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_Social_Accordian_Header.WBP_Social_Accordian_Header_C.InitializeWidget
//		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
//		class APUMG_HUD*                                   HUD                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWBP_Social_Accordian_Header_C::InitializeWidget(class APUMG_HUD* HUD)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(70113);

	UWBP_Social_Accordian_Header_C_InitializeWidget_Params params {};
	params.HUD = HUD;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_Social_Accordian_Header.WBP_Social_Accordian_Header_C.UninitializeWidget
//		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
void UWBP_Social_Accordian_Header_C::UninitializeWidget()
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(70112);

	UWBP_Social_Accordian_Header_C_UninitializeWidget_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_Social_Accordian_Header.WBP_Social_Accordian_Header_C.HandleClicked
//		Flags  -> (BlueprintCallable, BlueprintEvent)
void UWBP_Social_Accordian_Header_C::HandleClicked()
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(70111);

	UWBP_Social_Accordian_Header_C_HandleClicked_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_Social_Accordian_Header.WBP_Social_Accordian_Header_C.OnUnhovered
//		Flags  -> (BlueprintCallable, BlueprintEvent)
void UWBP_Social_Accordian_Header_C::OnUnhovered()
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(70110);

	UWBP_Social_Accordian_Header_C_OnUnhovered_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_Social_Accordian_Header.WBP_Social_Accordian_Header_C.OnHovered
//		Flags  -> (BlueprintCallable, BlueprintEvent)
void UWBP_Social_Accordian_Header_C::OnHovered()
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(70109);

	UWBP_Social_Accordian_Header_C_OnHovered_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_Social_Accordian_Header.WBP_Social_Accordian_Header_C.OnListItemObjectSet
//		Flags  -> (Event, Protected, BlueprintEvent)
// Parameters:
//		class UObject*                                     ListItemObject                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWBP_Social_Accordian_Header_C::OnListItemObjectSet(class UObject* ListItemObject)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(70108);

	UWBP_Social_Accordian_Header_C_OnListItemObjectSet_Params params {};
	params.ListItemObject = ListItemObject;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_Social_Accordian_Header.WBP_Social_Accordian_Header_C.BP_OnEntryReleased
//		Flags  -> (Event, Protected, BlueprintEvent)
void UWBP_Social_Accordian_Header_C::BP_OnEntryReleased()
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(70107);

	UWBP_Social_Accordian_Header_C_BP_OnEntryReleased_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_Social_Accordian_Header.WBP_Social_Accordian_Header_C.BP_OnItemExpansionChanged
//		Flags  -> (Event, Protected, BlueprintEvent)
// Parameters:
//		bool                                               bIsExpanded                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UWBP_Social_Accordian_Header_C::BP_OnItemExpansionChanged(bool bIsExpanded)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(70106);

	UWBP_Social_Accordian_Header_C_BP_OnItemExpansionChanged_Params params {};
	params.bIsExpanded = bIsExpanded;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_Social_Accordian_Header.WBP_Social_Accordian_Header_C.BP_OnItemSelectionChanged
//		Flags  -> (Event, Protected, BlueprintEvent)
// Parameters:
//		bool                                               bIsSelected                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UWBP_Social_Accordian_Header_C::BP_OnItemSelectionChanged(bool bIsSelected)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(70105);

	UWBP_Social_Accordian_Header_C_BP_OnItemSelectionChanged_Params params {};
	params.bIsSelected = bIsSelected;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_Social_Accordian_Header.WBP_Social_Accordian_Header_C.Construct
//		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
void UWBP_Social_Accordian_Header_C::Construct()
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(70104);

	UWBP_Social_Accordian_Header_C_Construct_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_Social_Accordian_Header.WBP_Social_Accordian_Header_C.UnbindCategoryEvents
//		Flags  -> (BlueprintCallable, BlueprintEvent)
void UWBP_Social_Accordian_Header_C::UnbindCategoryEvents()
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(70103);

	UWBP_Social_Accordian_Header_C_UnbindCategoryEvents_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_Social_Accordian_Header.WBP_Social_Accordian_Header_C.BindCategoryEvents
//		Flags  -> (BlueprintCallable, BlueprintEvent)
void UWBP_Social_Accordian_Header_C::BindCategoryEvents()
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(70102);

	UWBP_Social_Accordian_Header_C_BindCategoryEvents_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_Social_Accordian_Header.WBP_Social_Accordian_Header_C.OnInputStateChange
//		Flags  -> (BlueprintCallable, BlueprintEvent)
// Parameters:
//		TEnumAsByte<PlatformGameFramework_EPGAME_INPUT_STATE> InputState                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWBP_Social_Accordian_Header_C::OnInputStateChange(TEnumAsByte<PlatformGameFramework_EPGAME_INPUT_STATE> InputState)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(70101);

	UWBP_Social_Accordian_Header_C_OnInputStateChange_Params params {};
	params.InputState = InputState;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_Social_Accordian_Header.WBP_Social_Accordian_Header_C.ForceUnhover
//		Flags  -> (BlueprintCallable, BlueprintEvent)
void UWBP_Social_Accordian_Header_C::ForceUnhover()
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(70100);

	UWBP_Social_Accordian_Header_C_ForceUnhover_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_Social_Accordian_Header.WBP_Social_Accordian_Header_C.ExecuteUbergraph_WBP_Social_Accordian_Header
//		Flags  -> (Final)
// Parameters:
//		int                                                EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWBP_Social_Accordian_Header_C::ExecuteUbergraph_WBP_Social_Accordian_Header(int EntryPoint)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(70099);

	UWBP_Social_Accordian_Header_C_ExecuteUbergraph_WBP_Social_Accordian_Header_Params params {};
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_Social_Accordian_Header.WBP_Social_Accordian_Header_C.OnClicked__DelegateSignature
//		Flags  -> (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
//		class UUserWidget*                                 Widget                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWBP_Social_Accordian_Header_C::OnClicked__DelegateSignature(class UUserWidget* Widget)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(70098);

	UWBP_Social_Accordian_Header_C_OnClicked__DelegateSignature_Params params {};
	params.Widget = Widget;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
