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
//		Name   -> Function WBP_subscreen_nav_tab.WBP_subscreen_nav_tab_C.SetSelected
//		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
//		bool                                               bNewSelected                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UWBP_subscreen_nav_tab_C::SetSelected(bool bNewSelected)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(60183);

	UWBP_subscreen_nav_tab_C_SetSelected_Params params {};
	params.bNewSelected = bNewSelected;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_subscreen_nav_tab.WBP_subscreen_nav_tab_C.SetDisabled
//		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
//		bool                                               bNewDisabled                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UWBP_subscreen_nav_tab_C::SetDisabled(bool bNewDisabled)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(60182);

	UWBP_subscreen_nav_tab_C_SetDisabled_Params params {};
	params.bNewDisabled = bNewDisabled;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_subscreen_nav_tab.WBP_subscreen_nav_tab_C.TryCreateCalloutWidget
//		Flags  -> (Protected, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
//		bool                                               Created                                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UWBP_subscreen_nav_tab_C::TryCreateCalloutWidget(bool* Created)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(60181);

	UWBP_subscreen_nav_tab_C_TryCreateCalloutWidget_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Created != nullptr)
		*Created = params.Created;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_subscreen_nav_tab.WBP_subscreen_nav_tab_C.SetShowCallout
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
//		bool                                               Show                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UWBP_subscreen_nav_tab_C::SetShowCallout(bool Show)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(60180);

	UWBP_subscreen_nav_tab_C_SetShowCallout_Params params {};
	params.Show = Show;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_subscreen_nav_tab.WBP_subscreen_nav_tab_C.SettingsSubScreenNavTabClickedSFX
//		Flags  -> (BlueprintCallable, BlueprintEvent)
void UWBP_subscreen_nav_tab_C::SettingsSubScreenNavTabClickedSFX()
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(60179);

	UWBP_subscreen_nav_tab_C_SettingsSubScreenNavTabClickedSFX_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_subscreen_nav_tab.WBP_subscreen_nav_tab_C.SettingsSubScreenNavTabHoveredSFX
//		Flags  -> (BlueprintCallable, BlueprintEvent)
void UWBP_subscreen_nav_tab_C::SettingsSubScreenNavTabHoveredSFX()
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(60178);

	UWBP_subscreen_nav_tab_C_SettingsSubScreenNavTabHoveredSFX_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_subscreen_nav_tab.WBP_subscreen_nav_tab_C.Construct
//		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
void UWBP_subscreen_nav_tab_C::Construct()
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(60177);

	UWBP_subscreen_nav_tab_C_Construct_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_subscreen_nav_tab.WBP_subscreen_nav_tab_C.BndEvt__TabButton_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
//		Flags  -> (BlueprintEvent)
void UWBP_subscreen_nav_tab_C::BndEvt__TabButton_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature()
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(60176);

	UWBP_subscreen_nav_tab_C_BndEvt__TabButton_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_subscreen_nav_tab.WBP_subscreen_nav_tab_C.BndEvt__TabButton_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature
//		Flags  -> (BlueprintEvent)
void UWBP_subscreen_nav_tab_C::BndEvt__TabButton_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature()
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(60175);

	UWBP_subscreen_nav_tab_C_BndEvt__TabButton_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_subscreen_nav_tab.WBP_subscreen_nav_tab_C.BndEvt__TabButton_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature
//		Flags  -> (BlueprintEvent)
void UWBP_subscreen_nav_tab_C::BndEvt__TabButton_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature()
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(60174);

	UWBP_subscreen_nav_tab_C_BndEvt__TabButton_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_subscreen_nav_tab.WBP_subscreen_nav_tab_C.SetButtonText
//		Flags  -> (BlueprintCallable, BlueprintEvent)
// Parameters:
//		struct FText                                       ButtonText                                                 (BlueprintVisible, BlueprintReadOnly, Parm)
void UWBP_subscreen_nav_tab_C::SetButtonText(const struct FText& ButtonText)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(60173);

	UWBP_subscreen_nav_tab_C_SetButtonText_Params params {};
	params.ButtonText = ButtonText;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_subscreen_nav_tab.WBP_subscreen_nav_tab_C.InitializeWidget
//		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
//		class APUMG_HUD*                                   HUD                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWBP_subscreen_nav_tab_C::InitializeWidget(class APUMG_HUD* HUD)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(60172);

	UWBP_subscreen_nav_tab_C_InitializeWidget_Params params {};
	params.HUD = HUD;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_subscreen_nav_tab.WBP_subscreen_nav_tab_C.PreConstruct
//		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
//		bool                                               IsDesignTime                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UWBP_subscreen_nav_tab_C::PreConstruct(bool IsDesignTime)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(60171);

	UWBP_subscreen_nav_tab_C_PreConstruct_Params params {};
	params.IsDesignTime = IsDesignTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_subscreen_nav_tab.WBP_subscreen_nav_tab_C.SelectNavTab
//		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
void UWBP_subscreen_nav_tab_C::SelectNavTab()
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(60170);

	UWBP_subscreen_nav_tab_C_SelectNavTab_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_subscreen_nav_tab.WBP_subscreen_nav_tab_C.UnselectNavTab
//		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
void UWBP_subscreen_nav_tab_C::UnselectNavTab()
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(60169);

	UWBP_subscreen_nav_tab_C_UnselectNavTab_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_subscreen_nav_tab.WBP_subscreen_nav_tab_C.Handle View State Changed
//		Flags  -> (BlueprintCallable, BlueprintEvent)
// Parameters:
//		struct FName                                       CurrentRoute                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		struct FName                                       PreviousRoute                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		PlatformUMG_EViewManagerLayer                      Layer                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWBP_subscreen_nav_tab_C::Handle_View_State_Changed(const struct FName& CurrentRoute, const struct FName& PreviousRoute, PlatformUMG_EViewManagerLayer Layer)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(60168);

	UWBP_subscreen_nav_tab_C_Handle_View_State_Changed_Params params {};
	params.CurrentRoute = CurrentRoute;
	params.PreviousRoute = PreviousRoute;
	params.Layer = Layer;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_subscreen_nav_tab.WBP_subscreen_nav_tab_C.ExecuteUbergraph_WBP_subscreen_nav_tab
//		Flags  -> (Final, HasDefaults)
// Parameters:
//		int                                                EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWBP_subscreen_nav_tab_C::ExecuteUbergraph_WBP_subscreen_nav_tab(int EntryPoint)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(60167);

	UWBP_subscreen_nav_tab_C_ExecuteUbergraph_WBP_subscreen_nav_tab_Params params {};
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
