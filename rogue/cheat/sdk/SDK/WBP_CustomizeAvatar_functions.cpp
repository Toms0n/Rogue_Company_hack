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
//		Name   -> Function WBP_CustomizeAvatar.WBP_CustomizeAvatar_C.OnSortRarityDescNameAsc
//		Flags  -> (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
//		class UWidget*                                     LHS                                                        (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		class UWidget*                                     RHS                                                        (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
bool UWBP_CustomizeAvatar_C::OnSortRarityDescNameAsc(class UWidget* LHS, class UWidget* RHS)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(89882);

	UWBP_CustomizeAvatar_C_OnSortRarityDescNameAsc_Params params {};
	params.LHS = LHS;
	params.RHS = RHS;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_CustomizeAvatar.WBP_CustomizeAvatar_C.NavigateBack
//		Flags  -> (Event, Protected, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
//		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
bool UWBP_CustomizeAvatar_C::NavigateBack()
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(89881);

	UWBP_CustomizeAvatar_C_NavigateBack_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_CustomizeAvatar.WBP_CustomizeAvatar_C.OnKeyDown
//		Flags  -> (BlueprintCosmetic, Event, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
//		struct FGeometry                                   MyGeometry                                                 (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
//		struct FKeyEvent                                   InKeyEvent                                                 (BlueprintVisible, BlueprintReadOnly, Parm)
//		struct FEventReply                                 ReturnValue                                                (Parm, OutParm, ReturnParm)
struct FEventReply UWBP_CustomizeAvatar_C::OnKeyDown(const struct FGeometry& MyGeometry, const struct FKeyEvent& InKeyEvent)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(89880);

	UWBP_CustomizeAvatar_C_OnKeyDown_Params params {};
	params.MyGeometry = MyGeometry;
	params.InKeyEvent = InKeyEvent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_CustomizeAvatar.WBP_CustomizeAvatar_C.AddEmptySlots
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
void UWBP_CustomizeAvatar_C::AddEmptySlots()
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(89879);

	UWBP_CustomizeAvatar_C_AddEmptySlots_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_CustomizeAvatar.WBP_CustomizeAvatar_C.SetActiveStates
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
//		class UWBP_CosmeticItem_Avatar_C*                  ActiveWidget                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWBP_CustomizeAvatar_C::SetActiveStates(class UWBP_CosmeticItem_Avatar_C* ActiveWidget)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(89878);

	UWBP_CustomizeAvatar_C_SetActiveStates_Params params {};
	params.ActiveWidget = ActiveWidget;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_CustomizeAvatar.WBP_CustomizeAvatar_C.RegisterNavigation
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
void UWBP_CustomizeAvatar_C::RegisterNavigation()
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(89877);

	UWBP_CustomizeAvatar_C_RegisterNavigation_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_CustomizeAvatar.WBP_CustomizeAvatar_C.IsAvatarItemEquipped
//		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
//		class UKSItem*                                     KSItem                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		bool                                               IsEquipped                                                 (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UWBP_CustomizeAvatar_C::IsAvatarItemEquipped(class UKSItem* KSItem, bool* IsEquipped)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(89876);

	UWBP_CustomizeAvatar_C_IsAvatarItemEquipped_Params params {};
	params.KSItem = KSItem;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (IsEquipped != nullptr)
		*IsEquipped = params.IsEquipped;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_CustomizeAvatar.WBP_CustomizeAvatar_C.ResetAvatarSelection
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
void UWBP_CustomizeAvatar_C::ResetAvatarSelection()
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(89875);

	UWBP_CustomizeAvatar_C_ResetAvatarSelection_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_CustomizeAvatar.WBP_CustomizeAvatar_C.SetContextBar
//		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
void UWBP_CustomizeAvatar_C::SetContextBar()
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(89874);

	UWBP_CustomizeAvatar_C_SetContextBar_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_CustomizeAvatar.WBP_CustomizeAvatar_C.SetAvatarSelection
//		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
void UWBP_CustomizeAvatar_C::SetAvatarSelection()
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(89873);

	UWBP_CustomizeAvatar_C_SetAvatarSelection_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_CustomizeAvatar.WBP_CustomizeAvatar_C.OnShown
//		Flags  -> (Event, Public, BlueprintEvent)
void UWBP_CustomizeAvatar_C::OnShown()
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(89872);

	UWBP_CustomizeAvatar_C_OnShown_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_CustomizeAvatar.WBP_CustomizeAvatar_C.OnBackPrompt
//		Flags  -> (BlueprintCallable, BlueprintEvent)
void UWBP_CustomizeAvatar_C::OnBackPrompt()
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(89871);

	UWBP_CustomizeAvatar_C_OnBackPrompt_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_CustomizeAvatar.WBP_CustomizeAvatar_C.InitializeWidgetNavigation
//		Flags  -> (Event, Public, BlueprintEvent)
void UWBP_CustomizeAvatar_C::InitializeWidgetNavigation()
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(89870);

	UWBP_CustomizeAvatar_C_InitializeWidgetNavigation_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_CustomizeAvatar.WBP_CustomizeAvatar_C.InitializeWidget
//		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
//		class APUMG_HUD*                                   HUD                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWBP_CustomizeAvatar_C::InitializeWidget(class APUMG_HUD* HUD)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(89869);

	UWBP_CustomizeAvatar_C_InitializeWidget_Params params {};
	params.HUD = HUD;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_CustomizeAvatar.WBP_CustomizeAvatar_C.OnAvatarHover
//		Flags  -> (BlueprintCallable, BlueprintEvent)
// Parameters:
//		class UPlatformInventoryItem*                      PlatformItem                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWBP_CustomizeAvatar_C::OnAvatarHover(class UPlatformInventoryItem* PlatformItem)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(89868);

	UWBP_CustomizeAvatar_C_OnAvatarHover_Params params {};
	params.PlatformItem = PlatformItem;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_CustomizeAvatar.WBP_CustomizeAvatar_C.OnAvatarUnhover
//		Flags  -> (BlueprintCallable, BlueprintEvent)
void UWBP_CustomizeAvatar_C::OnAvatarUnhover()
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(89867);

	UWBP_CustomizeAvatar_C_OnAvatarUnhover_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_CustomizeAvatar.WBP_CustomizeAvatar_C.OnAvatarSelected
//		Flags  -> (BlueprintCallable, BlueprintEvent)
// Parameters:
//		class UPlatformInventoryItem*                      PlatformItem                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		class UWidget*                                     Widget                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWBP_CustomizeAvatar_C::OnAvatarSelected(class UPlatformInventoryItem* PlatformItem, class UWidget* Widget)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(89866);

	UWBP_CustomizeAvatar_C_OnAvatarSelected_Params params {};
	params.PlatformItem = PlatformItem;
	params.Widget = Widget;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_CustomizeAvatar.WBP_CustomizeAvatar_C.OnAvatarGamepadHover
//		Flags  -> (BlueprintCallable, BlueprintEvent)
// Parameters:
//		class UPUMG_Widget*                                Widget                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		bool                                               bHovered                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UWBP_CustomizeAvatar_C::OnAvatarGamepadHover(class UPUMG_Widget* Widget, bool bHovered)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(89865);

	UWBP_CustomizeAvatar_C_OnAvatarGamepadHover_Params params {};
	params.Widget = Widget;
	params.bHovered = bHovered;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_CustomizeAvatar.WBP_CustomizeAvatar_C.OnHide
//		Flags  -> (Event, Public, BlueprintEvent)
void UWBP_CustomizeAvatar_C::OnHide()
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(89864);

	UWBP_CustomizeAvatar_C_OnHide_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_CustomizeAvatar.WBP_CustomizeAvatar_C.ExecuteUbergraph_WBP_CustomizeAvatar
//		Flags  -> (Final)
// Parameters:
//		int                                                EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWBP_CustomizeAvatar_C::ExecuteUbergraph_WBP_CustomizeAvatar(int EntryPoint)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(89863);

	UWBP_CustomizeAvatar_C_ExecuteUbergraph_WBP_CustomizeAvatar_Params params {};
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
