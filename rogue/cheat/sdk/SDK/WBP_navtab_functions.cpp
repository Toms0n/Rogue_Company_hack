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
//		Name   -> Function WBP_navtab.WBP_navtab_C.SetIsFirstTab
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
//		bool                                               IsFirstTab                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UWBP_navtab_C::SetIsFirstTab(bool IsFirstTab)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(56008);

	UWBP_navtab_C_SetIsFirstTab_Params params {};
	params.IsFirstTab = IsFirstTab;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_navtab.WBP_navtab_C.SetSelected
//		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
//		bool                                               bNewSelected                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UWBP_navtab_C::SetSelected(bool bNewSelected)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(56007);

	UWBP_navtab_C_SetSelected_Params params {};
	params.bNewSelected = bNewSelected;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_navtab.WBP_navtab_C.SetDisabled
//		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
//		bool                                               bNewDisabled                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UWBP_navtab_C::SetDisabled(bool bNewDisabled)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(56006);

	UWBP_navtab_C_SetDisabled_Params params {};
	params.bNewDisabled = bNewDisabled;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_navtab.WBP_navtab_C.TryCreateCalloutWidget
//		Flags  -> (Protected, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
//		bool                                               Created                                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UWBP_navtab_C::TryCreateCalloutWidget(bool* Created)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(56005);

	UWBP_navtab_C_TryCreateCalloutWidget_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Created != nullptr)
		*Created = params.Created;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_navtab.WBP_navtab_C.SetShowCallout
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
//		bool                                               Show                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UWBP_navtab_C::SetShowCallout(bool Show)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(56004);

	UWBP_navtab_C_SetShowCallout_Params params {};
	params.Show = Show;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_navtab.WBP_navtab_C.SettingsSubScreenNavTabClickedSFX
//		Flags  -> (BlueprintCallable, BlueprintEvent)
void UWBP_navtab_C::SettingsSubScreenNavTabClickedSFX()
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(56003);

	UWBP_navtab_C_SettingsSubScreenNavTabClickedSFX_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_navtab.WBP_navtab_C.SettingsSubScreenNavTabHoveredSFX
//		Flags  -> (BlueprintCallable, BlueprintEvent)
void UWBP_navtab_C::SettingsSubScreenNavTabHoveredSFX()
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(56002);

	UWBP_navtab_C_SettingsSubScreenNavTabHoveredSFX_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_navtab.WBP_navtab_C.Construct
//		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
void UWBP_navtab_C::Construct()
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(56001);

	UWBP_navtab_C_Construct_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_navtab.WBP_navtab_C.BndEvt__TabButton_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
//		Flags  -> (BlueprintEvent)
void UWBP_navtab_C::BndEvt__TabButton_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature()
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(56000);

	UWBP_navtab_C_BndEvt__TabButton_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_navtab.WBP_navtab_C.BndEvt__TabButton_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature
//		Flags  -> (BlueprintEvent)
void UWBP_navtab_C::BndEvt__TabButton_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature()
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(55999);

	UWBP_navtab_C_BndEvt__TabButton_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_navtab.WBP_navtab_C.BndEvt__TabButton_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature
//		Flags  -> (BlueprintEvent)
void UWBP_navtab_C::BndEvt__TabButton_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature()
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(55998);

	UWBP_navtab_C_BndEvt__TabButton_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_navtab.WBP_navtab_C.SetButtonText
//		Flags  -> (BlueprintCallable, BlueprintEvent)
// Parameters:
//		struct FText                                       ButtonText                                                 (BlueprintVisible, BlueprintReadOnly, Parm)
void UWBP_navtab_C::SetButtonText(const struct FText& ButtonText)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(55997);

	UWBP_navtab_C_SetButtonText_Params params {};
	params.ButtonText = ButtonText;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_navtab.WBP_navtab_C.InitializeWidget
//		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
//		class APUMG_HUD*                                   HUD                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWBP_navtab_C::InitializeWidget(class APUMG_HUD* HUD)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(55996);

	UWBP_navtab_C_InitializeWidget_Params params {};
	params.HUD = HUD;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_navtab.WBP_navtab_C.PreConstruct
//		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
//		bool                                               IsDesignTime                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UWBP_navtab_C::PreConstruct(bool IsDesignTime)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(55995);

	UWBP_navtab_C_PreConstruct_Params params {};
	params.IsDesignTime = IsDesignTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_navtab.WBP_navtab_C.SelectNavTab
//		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
void UWBP_navtab_C::SelectNavTab()
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(55994);

	UWBP_navtab_C_SelectNavTab_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_navtab.WBP_navtab_C.UnselectNavTab
//		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
void UWBP_navtab_C::UnselectNavTab()
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(55993);

	UWBP_navtab_C_UnselectNavTab_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_navtab.WBP_navtab_C.Handle View State Changed
//		Flags  -> (BlueprintCallable, BlueprintEvent)
// Parameters:
//		struct FName                                       CurrentRoute                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		struct FName                                       PreviousRoute                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		PlatformUMG_EViewManagerLayer                      Layer                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWBP_navtab_C::Handle_View_State_Changed(const struct FName& CurrentRoute, const struct FName& PreviousRoute, PlatformUMG_EViewManagerLayer Layer)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(55992);

	UWBP_navtab_C_Handle_View_State_Changed_Params params {};
	params.CurrentRoute = CurrentRoute;
	params.PreviousRoute = PreviousRoute;
	params.Layer = Layer;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_navtab.WBP_navtab_C.ExecuteUbergraph_WBP_navtab
//		Flags  -> (Final, HasDefaults)
// Parameters:
//		int                                                EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWBP_navtab_C::ExecuteUbergraph_WBP_navtab(int EntryPoint)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(55991);

	UWBP_navtab_C_ExecuteUbergraph_WBP_navtab_Params params {};
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
