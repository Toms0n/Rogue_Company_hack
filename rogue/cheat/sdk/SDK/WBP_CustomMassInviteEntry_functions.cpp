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
//		Name   -> Function WBP_CustomMassInviteEntry.WBP_CustomMassInviteEntry_C.GetPlayerInfo
//		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
//		class UKSPlayerInfo*                               playerinfo                                                 (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWBP_CustomMassInviteEntry_C::GetPlayerInfo(class UKSPlayerInfo** playerinfo)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(232710);

	UWBP_CustomMassInviteEntry_C_GetPlayerInfo_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (playerinfo != nullptr)
		*playerinfo = params.playerinfo;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_CustomMassInviteEntry.WBP_CustomMassInviteEntry_C.BndEvt__HitArea_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
//		Flags  -> (BlueprintEvent)
void UWBP_CustomMassInviteEntry_C::BndEvt__HitArea_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature()
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(232709);

	UWBP_CustomMassInviteEntry_C_BndEvt__HitArea_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_CustomMassInviteEntry.WBP_CustomMassInviteEntry_C.BndEvt__HitArea_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature
//		Flags  -> (BlueprintEvent)
void UWBP_CustomMassInviteEntry_C::BndEvt__HitArea_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature()
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(232708);

	UWBP_CustomMassInviteEntry_C_BndEvt__HitArea_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_CustomMassInviteEntry.WBP_CustomMassInviteEntry_C.BndEvt__HitArea_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature
//		Flags  -> (BlueprintEvent)
void UWBP_CustomMassInviteEntry_C::BndEvt__HitArea_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature()
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(232707);

	UWBP_CustomMassInviteEntry_C_BndEvt__HitArea_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_CustomMassInviteEntry.WBP_CustomMassInviteEntry_C.BP_OnItemSelectionChanged
//		Flags  -> (Event, Protected, BlueprintEvent)
// Parameters:
//		bool                                               bIsSelected                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UWBP_CustomMassInviteEntry_C::BP_OnItemSelectionChanged(bool bIsSelected)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(232706);

	UWBP_CustomMassInviteEntry_C_BP_OnItemSelectionChanged_Params params {};
	params.bIsSelected = bIsSelected;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_CustomMassInviteEntry.WBP_CustomMassInviteEntry_C.BP_OnItemExpansionChanged
//		Flags  -> (Event, Protected, BlueprintEvent)
// Parameters:
//		bool                                               bIsExpanded                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UWBP_CustomMassInviteEntry_C::BP_OnItemExpansionChanged(bool bIsExpanded)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(232705);

	UWBP_CustomMassInviteEntry_C_BP_OnItemExpansionChanged_Params params {};
	params.bIsExpanded = bIsExpanded;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_CustomMassInviteEntry.WBP_CustomMassInviteEntry_C.BP_OnEntryReleased
//		Flags  -> (Event, Protected, BlueprintEvent)
void UWBP_CustomMassInviteEntry_C::BP_OnEntryReleased()
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(232704);

	UWBP_CustomMassInviteEntry_C_BP_OnEntryReleased_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_CustomMassInviteEntry.WBP_CustomMassInviteEntry_C.OnListItemObjectSet
//		Flags  -> (Event, Protected, BlueprintEvent)
// Parameters:
//		class UObject*                                     ListItemObject                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWBP_CustomMassInviteEntry_C::OnListItemObjectSet(class UObject* ListItemObject)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(232703);

	UWBP_CustomMassInviteEntry_C_OnListItemObjectSet_Params params {};
	params.ListItemObject = ListItemObject;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_CustomMassInviteEntry.WBP_CustomMassInviteEntry_C.ForceHovered
//		Flags  -> (BlueprintCallable, BlueprintEvent)
void UWBP_CustomMassInviteEntry_C::ForceHovered()
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(232702);

	UWBP_CustomMassInviteEntry_C_ForceHovered_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_CustomMassInviteEntry.WBP_CustomMassInviteEntry_C.ForceUnhovered
//		Flags  -> (BlueprintCallable, BlueprintEvent)
void UWBP_CustomMassInviteEntry_C::ForceUnhovered()
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(232701);

	UWBP_CustomMassInviteEntry_C_ForceUnhovered_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_CustomMassInviteEntry.WBP_CustomMassInviteEntry_C.PlaySelection
//		Flags  -> (BlueprintCallable, BlueprintEvent)
void UWBP_CustomMassInviteEntry_C::PlaySelection()
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(232700);

	UWBP_CustomMassInviteEntry_C_PlaySelection_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_CustomMassInviteEntry.WBP_CustomMassInviteEntry_C.PlayDeselection
//		Flags  -> (BlueprintCallable, BlueprintEvent)
void UWBP_CustomMassInviteEntry_C::PlayDeselection()
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(232699);

	UWBP_CustomMassInviteEntry_C_PlayDeselection_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_CustomMassInviteEntry.WBP_CustomMassInviteEntry_C.SetSelected
//		Flags  -> (BlueprintCallable, BlueprintEvent)
// Parameters:
//		bool                                               Selected                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UWBP_CustomMassInviteEntry_C::SetSelected(bool Selected)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(232698);

	UWBP_CustomMassInviteEntry_C_SetSelected_Params params {};
	params.Selected = Selected;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_CustomMassInviteEntry.WBP_CustomMassInviteEntry_C.OnMouseEnter
//		Flags  -> (BlueprintCosmetic, Event, Public, HasOutParms, BlueprintEvent)
// Parameters:
//		struct FGeometry                                   MyGeometry                                                 (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
//		struct FPointerEvent                               MouseEvent                                                 (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
void UWBP_CustomMassInviteEntry_C::OnMouseEnter(const struct FGeometry& MyGeometry, const struct FPointerEvent& MouseEvent)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(232697);

	UWBP_CustomMassInviteEntry_C_OnMouseEnter_Params params {};
	params.MyGeometry = MyGeometry;
	params.MouseEvent = MouseEvent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_CustomMassInviteEntry.WBP_CustomMassInviteEntry_C.OnMouseLeave
//		Flags  -> (BlueprintCosmetic, Event, Public, HasOutParms, BlueprintEvent)
// Parameters:
//		struct FPointerEvent                               MouseEvent                                                 (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
void UWBP_CustomMassInviteEntry_C::OnMouseLeave(const struct FPointerEvent& MouseEvent)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(232696);

	UWBP_CustomMassInviteEntry_C_OnMouseLeave_Params params {};
	params.MouseEvent = MouseEvent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_CustomMassInviteEntry.WBP_CustomMassInviteEntry_C.ExecuteUbergraph_WBP_CustomMassInviteEntry
//		Flags  -> (Final, HasDefaults)
// Parameters:
//		int                                                EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWBP_CustomMassInviteEntry_C::ExecuteUbergraph_WBP_CustomMassInviteEntry(int EntryPoint)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(232695);

	UWBP_CustomMassInviteEntry_C_ExecuteUbergraph_WBP_CustomMassInviteEntry_Params params {};
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_CustomMassInviteEntry.WBP_CustomMassInviteEntry_C.OnClicked__DelegateSignature
//		Flags  -> (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
//		class UWidget*                                     Widget                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWBP_CustomMassInviteEntry_C::OnClicked__DelegateSignature(class UWidget* Widget)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(87634);

	UWBP_CustomMassInviteEntry_C_OnClicked__DelegateSignature_Params params {};
	params.Widget = Widget;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
