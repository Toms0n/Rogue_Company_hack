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
//		Name   -> Function WBP_Social_Header_Cosmetic.WBP_Social_Header_Cosmetic_C.BindContextMenu
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
void UWBP_Social_Header_Cosmetic_C::BindContextMenu()
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(67548);

	UWBP_Social_Header_Cosmetic_C_BindContextMenu_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_Social_Header_Cosmetic.WBP_Social_Header_Cosmetic_C.UpdateName
//		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
void UWBP_Social_Header_Cosmetic_C::UpdateName()
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(67547);

	UWBP_Social_Header_Cosmetic_C_UpdateName_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_Social_Header_Cosmetic.WBP_Social_Header_Cosmetic_C.UpdateAfterInfoChange
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
void UWBP_Social_Header_Cosmetic_C::UpdateAfterInfoChange()
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(67546);

	UWBP_Social_Header_Cosmetic_C_UpdateAfterInfoChange_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_Social_Header_Cosmetic.WBP_Social_Header_Cosmetic_C.UpdateBanner
//		Flags  -> (Protected, BlueprintCallable, BlueprintEvent)
// Parameters:
void UWBP_Social_Header_Cosmetic_C::UpdateBanner()
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(67545);

	UWBP_Social_Header_Cosmetic_C_UpdateBanner_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_Social_Header_Cosmetic.WBP_Social_Header_Cosmetic_C.UpdateAvatar
//		Flags  -> (Protected, BlueprintCallable, BlueprintEvent)
// Parameters:
void UWBP_Social_Header_Cosmetic_C::UpdateAvatar()
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(67544);

	UWBP_Social_Header_Cosmetic_C_UpdateAvatar_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_Social_Header_Cosmetic.WBP_Social_Header_Cosmetic_C.SetData
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
//		class UKSPlayerInfo*                               playerinfo                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWBP_Social_Header_Cosmetic_C::SetData(class UKSPlayerInfo* playerinfo)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(67543);

	UWBP_Social_Header_Cosmetic_C_SetData_Params params {};
	params.playerinfo = playerinfo;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_Social_Header_Cosmetic.WBP_Social_Header_Cosmetic_C.PreConstruct
//		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
//		bool                                               IsDesignTime                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UWBP_Social_Header_Cosmetic_C::PreConstruct(bool IsDesignTime)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(67542);

	UWBP_Social_Header_Cosmetic_C_PreConstruct_Params params {};
	params.IsDesignTime = IsDesignTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_Social_Header_Cosmetic.WBP_Social_Header_Cosmetic_C.InitializeWidget
//		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
//		class APUMG_HUD*                                   HUD                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWBP_Social_Header_Cosmetic_C::InitializeWidget(class APUMG_HUD* HUD)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(67541);

	UWBP_Social_Header_Cosmetic_C_InitializeWidget_Params params {};
	params.HUD = HUD;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_Social_Header_Cosmetic.WBP_Social_Header_Cosmetic_C.BndEvt__DNDToggleBtn_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
//		Flags  -> (BlueprintEvent)
void UWBP_Social_Header_Cosmetic_C::BndEvt__DNDToggleBtn_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature()
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(67540);

	UWBP_Social_Header_Cosmetic_C_BndEvt__DNDToggleBtn_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_Social_Header_Cosmetic.WBP_Social_Header_Cosmetic_C.HandleInputStateChanged
//		Flags  -> (BlueprintCallable, BlueprintEvent)
// Parameters:
//		TEnumAsByte<PlatformGameFramework_EPGAME_INPUT_STATE> InputState                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWBP_Social_Header_Cosmetic_C::HandleInputStateChanged(TEnumAsByte<PlatformGameFramework_EPGAME_INPUT_STATE> InputState)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(67539);

	UWBP_Social_Header_Cosmetic_C_HandleInputStateChanged_Params params {};
	params.InputState = InputState;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_Social_Header_Cosmetic.WBP_Social_Header_Cosmetic_C.ToggleDND
//		Flags  -> (BlueprintCallable, BlueprintEvent)
void UWBP_Social_Header_Cosmetic_C::ToggleDND()
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(67538);

	UWBP_Social_Header_Cosmetic_C_ToggleDND_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_Social_Header_Cosmetic.WBP_Social_Header_Cosmetic_C.HandleReadyNavigation
//		Flags  -> (HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
//		TArray<class UWBP_PlayerStatus_ContextMenuOption_C*> StatusButtons                                              (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, ContainsInstancedReference, HasGetValueTypeHash)
void UWBP_Social_Header_Cosmetic_C::HandleReadyNavigation(TArray<class UWBP_PlayerStatus_ContextMenuOption_C*>* StatusButtons)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(67537);

	UWBP_Social_Header_Cosmetic_C_HandleReadyNavigation_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (StatusButtons != nullptr)
		*StatusButtons = params.StatusButtons;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_Social_Header_Cosmetic.WBP_Social_Header_Cosmetic_C.HandleMenuStart
//		Flags  -> (BlueprintCallable, BlueprintEvent)
// Parameters:
//		class UWBP_PlayerStatus_ContextMenuOption_C*       FocusWidget                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWBP_Social_Header_Cosmetic_C::HandleMenuStart(class UWBP_PlayerStatus_ContextMenuOption_C* FocusWidget)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(67536);

	UWBP_Social_Header_Cosmetic_C_HandleMenuStart_Params params {};
	params.FocusWidget = FocusWidget;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_Social_Header_Cosmetic.WBP_Social_Header_Cosmetic_C.HandleMenuHidden
//		Flags  -> (BlueprintCallable, BlueprintEvent)
void UWBP_Social_Header_Cosmetic_C::HandleMenuHidden()
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(67535);

	UWBP_Social_Header_Cosmetic_C_HandleMenuHidden_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_Social_Header_Cosmetic.WBP_Social_Header_Cosmetic_C.HideStatusMenu
//		Flags  -> (BlueprintCallable, BlueprintEvent)
void UWBP_Social_Header_Cosmetic_C::HideStatusMenu()
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(67534);

	UWBP_Social_Header_Cosmetic_C_HideStatusMenu_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_Social_Header_Cosmetic.WBP_Social_Header_Cosmetic_C.ExecuteUbergraph_WBP_Social_Header_Cosmetic
//		Flags  -> (Final, HasDefaults)
// Parameters:
//		int                                                EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWBP_Social_Header_Cosmetic_C::ExecuteUbergraph_WBP_Social_Header_Cosmetic(int EntryPoint)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(67533);

	UWBP_Social_Header_Cosmetic_C_ExecuteUbergraph_WBP_Social_Header_Cosmetic_Params params {};
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_Social_Header_Cosmetic.WBP_Social_Header_Cosmetic_C.OnMenuHidden__DelegateSignature
//		Flags  -> (Public, Delegate, BlueprintCallable, BlueprintEvent)
void UWBP_Social_Header_Cosmetic_C::OnMenuHidden__DelegateSignature()
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(60855);

	UWBP_Social_Header_Cosmetic_C_OnMenuHidden__DelegateSignature_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_Social_Header_Cosmetic.WBP_Social_Header_Cosmetic_C.OnMenuShown__DelegateSignature
//		Flags  -> (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
//		class UWBP_PlayerStatus_ContextMenuOption_C*       FocusWidget                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWBP_Social_Header_Cosmetic_C::OnMenuShown__DelegateSignature(class UWBP_PlayerStatus_ContextMenuOption_C* FocusWidget)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(60854);

	UWBP_Social_Header_Cosmetic_C_OnMenuShown__DelegateSignature_Params params {};
	params.FocusWidget = FocusWidget;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_Social_Header_Cosmetic.WBP_Social_Header_Cosmetic_C.OnNavigationReady__DelegateSignature
//		Flags  -> (Public, Delegate, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
//		TArray<class UWBP_PlayerStatus_ContextMenuOption_C*> StatusButtons                                              (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, ContainsInstancedReference, HasGetValueTypeHash)
void UWBP_Social_Header_Cosmetic_C::OnNavigationReady__DelegateSignature(TArray<class UWBP_PlayerStatus_ContextMenuOption_C*>* StatusButtons)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(60853);

	UWBP_Social_Header_Cosmetic_C_OnNavigationReady__DelegateSignature_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (StatusButtons != nullptr)
		*StatusButtons = params.StatusButtons;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
