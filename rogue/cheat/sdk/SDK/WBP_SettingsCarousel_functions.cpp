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
//		Name   -> Function WBP_SettingsCarousel.WBP_SettingsCarousel_C.Make Indicator Lights
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
void UWBP_SettingsCarousel_C::Make_Indicator_Lights()
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(44012);

	UWBP_SettingsCarousel_C_Make_Indicator_Lights_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_SettingsCarousel.WBP_SettingsCarousel_C.Add Indicator Light
//		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
void UWBP_SettingsCarousel_C::Add_Indicator_Light()
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(44011);

	UWBP_SettingsCarousel_C_Add_Indicator_Light_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_SettingsCarousel.WBP_SettingsCarousel_C.SetAnimationTextToIndex
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
//		int                                                Index                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWBP_SettingsCarousel_C::SetAnimationTextToIndex(int Index)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(44010);

	UWBP_SettingsCarousel_C_SetAnimationTextToIndex_Params params {};
	params.Index = Index;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_SettingsCarousel.WBP_SettingsCarousel_C.SetDisplayTextToIndex
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
//		int                                                Index                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWBP_SettingsCarousel_C::SetDisplayTextToIndex(int Index)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(44009);

	UWBP_SettingsCarousel_C_SetDisplayTextToIndex_Params params {};
	params.Index = Index;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_SettingsCarousel.WBP_SettingsCarousel_C.GetDirtyIndex
//		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
//		int                                                Index                                                      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWBP_SettingsCarousel_C::GetDirtyIndex(int* Index)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(44008);

	UWBP_SettingsCarousel_C_GetDirtyIndex_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Index != nullptr)
		*Index = params.Index;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_SettingsCarousel.WBP_SettingsCarousel_C.SetDesiredIndex
//		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
//		int                                                Desired_Index                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		bool                                               Index_Changed                                              (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UWBP_SettingsCarousel_C::SetDesiredIndex(int Desired_Index, bool* Index_Changed)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(44007);

	UWBP_SettingsCarousel_C_SetDesiredIndex_Params params {};
	params.Desired_Index = Desired_Index;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Index_Changed != nullptr)
		*Index_Changed = params.Index_Changed;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_SettingsCarousel.WBP_SettingsCarousel_C.SetTextToIndex
//		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
//		class UTextBlock*                                  Text_Widget                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		int                                                Index                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWBP_SettingsCarousel_C::SetTextToIndex(class UTextBlock* Text_Widget, int Index)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(44006);

	UWBP_SettingsCarousel_C_SetTextToIndex_Params params {};
	params.Text_Widget = Text_Widget;
	params.Index = Index;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_SettingsCarousel.WBP_SettingsCarousel_C.SettingsCarouselHoverSFX
//		Flags  -> (BlueprintCallable, BlueprintEvent)
void UWBP_SettingsCarousel_C::SettingsCarouselHoverSFX()
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(44005);

	UWBP_SettingsCarousel_C_SettingsCarouselHoverSFX_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_SettingsCarousel.WBP_SettingsCarousel_C.SettingsCarouselClickedSFX
//		Flags  -> (BlueprintCallable, BlueprintEvent)
void UWBP_SettingsCarousel_C::SettingsCarouselClickedSFX()
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(44004);

	UWBP_SettingsCarousel_C_SettingsCarouselClickedSFX_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_SettingsCarousel.WBP_SettingsCarousel_C.GamepadHover
//		Flags  -> (Event, Public, BlueprintEvent)
void UWBP_SettingsCarousel_C::GamepadHover()
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(44003);

	UWBP_SettingsCarousel_C_GamepadHover_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_SettingsCarousel.WBP_SettingsCarousel_C.GamepadUnhover
//		Flags  -> (Event, Public, BlueprintEvent)
void UWBP_SettingsCarousel_C::GamepadUnhover()
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(44002);

	UWBP_SettingsCarousel_C_GamepadUnhover_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_SettingsCarousel.WBP_SettingsCarousel_C.BndEvt__Right_Button_K2Node_ComponentBoundEvent_4_OnButtonHoverEvent__DelegateSignature
//		Flags  -> (BlueprintEvent)
void UWBP_SettingsCarousel_C::BndEvt__Right_Button_K2Node_ComponentBoundEvent_4_OnButtonHoverEvent__DelegateSignature()
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(44001);

	UWBP_SettingsCarousel_C_BndEvt__Right_Button_K2Node_ComponentBoundEvent_4_OnButtonHoverEvent__DelegateSignature_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_SettingsCarousel.WBP_SettingsCarousel_C.BndEvt__Right_Button_K2Node_ComponentBoundEvent_5_OnButtonHoverEvent__DelegateSignature
//		Flags  -> (BlueprintEvent)
void UWBP_SettingsCarousel_C::BndEvt__Right_Button_K2Node_ComponentBoundEvent_5_OnButtonHoverEvent__DelegateSignature()
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(44000);

	UWBP_SettingsCarousel_C_BndEvt__Right_Button_K2Node_ComponentBoundEvent_5_OnButtonHoverEvent__DelegateSignature_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_SettingsCarousel.WBP_SettingsCarousel_C.BndEvt__Left_Button_K2Node_ComponentBoundEvent_6_OnButtonHoverEvent__DelegateSignature
//		Flags  -> (BlueprintEvent)
void UWBP_SettingsCarousel_C::BndEvt__Left_Button_K2Node_ComponentBoundEvent_6_OnButtonHoverEvent__DelegateSignature()
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(43999);

	UWBP_SettingsCarousel_C_BndEvt__Left_Button_K2Node_ComponentBoundEvent_6_OnButtonHoverEvent__DelegateSignature_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_SettingsCarousel.WBP_SettingsCarousel_C.BndEvt__Left_Button_K2Node_ComponentBoundEvent_7_OnButtonHoverEvent__DelegateSignature
//		Flags  -> (BlueprintEvent)
void UWBP_SettingsCarousel_C::BndEvt__Left_Button_K2Node_ComponentBoundEvent_7_OnButtonHoverEvent__DelegateSignature()
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(43998);

	UWBP_SettingsCarousel_C_BndEvt__Left_Button_K2Node_ComponentBoundEvent_7_OnButtonHoverEvent__DelegateSignature_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_SettingsCarousel.WBP_SettingsCarousel_C.Master Hover
//		Flags  -> (BlueprintCallable, BlueprintEvent)
void UWBP_SettingsCarousel_C::Master_Hover()
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(43997);

	UWBP_SettingsCarousel_C_Master_Hover_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_SettingsCarousel.WBP_SettingsCarousel_C.Master Unhover
//		Flags  -> (BlueprintCallable, BlueprintEvent)
void UWBP_SettingsCarousel_C::Master_Unhover()
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(43996);

	UWBP_SettingsCarousel_C_Master_Unhover_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_SettingsCarousel.WBP_SettingsCarousel_C.InitializeWidget
//		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
//		class APUMG_HUD*                                   HUD                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWBP_SettingsCarousel_C::InitializeWidget(class APUMG_HUD* HUD)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(43995);

	UWBP_SettingsCarousel_C_InitializeWidget_Params params {};
	params.HUD = HUD;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_SettingsCarousel.WBP_SettingsCarousel_C.OnWidgetSettingsInfoSet
//		Flags  -> (Event, Protected, BlueprintEvent)
void UWBP_SettingsCarousel_C::OnWidgetSettingsInfoSet()
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(43994);

	UWBP_SettingsCarousel_C_OnWidgetSettingsInfoSet_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_SettingsCarousel.WBP_SettingsCarousel_C.OnWidgetConfigSet
//		Flags  -> (Event, Protected, BlueprintEvent)
void UWBP_SettingsCarousel_C::OnWidgetConfigSet()
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(43993);

	UWBP_SettingsCarousel_C_OnWidgetConfigSet_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_SettingsCarousel.WBP_SettingsCarousel_C.BndEvt__Left_Button_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
//		Flags  -> (BlueprintEvent)
void UWBP_SettingsCarousel_C::BndEvt__Left_Button_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature()
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(43992);

	UWBP_SettingsCarousel_C_BndEvt__Left_Button_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_SettingsCarousel.WBP_SettingsCarousel_C.BndEvt__Right_Button_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature
//		Flags  -> (BlueprintEvent)
void UWBP_SettingsCarousel_C::BndEvt__Right_Button_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature()
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(43991);

	UWBP_SettingsCarousel_C_BndEvt__Right_Button_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_SettingsCarousel.WBP_SettingsCarousel_C.Reset Text
//		Flags  -> (BlueprintCallable, BlueprintEvent)
void UWBP_SettingsCarousel_C::Reset_Text()
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(43990);

	UWBP_SettingsCarousel_C_Reset_Text_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_SettingsCarousel.WBP_SettingsCarousel_C.Reset Indicator Light
//		Flags  -> (BlueprintCallable, BlueprintEvent)
void UWBP_SettingsCarousel_C::Reset_Indicator_Light()
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(43989);

	UWBP_SettingsCarousel_C_Reset_Indicator_Light_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_SettingsCarousel.WBP_SettingsCarousel_C.Reset
//		Flags  -> (BlueprintCallable, BlueprintEvent)
void UWBP_SettingsCarousel_C::Reset()
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(43988);

	UWBP_SettingsCarousel_C_Reset_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_SettingsCarousel.WBP_SettingsCarousel_C.NavigateRightFailure
//		Flags  -> (Event, Public, BlueprintEvent)
void UWBP_SettingsCarousel_C::NavigateRightFailure()
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(43987);

	UWBP_SettingsCarousel_C_NavigateRightFailure_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_SettingsCarousel.WBP_SettingsCarousel_C.NavigateLeftFailure
//		Flags  -> (Event, Public, BlueprintEvent)
void UWBP_SettingsCarousel_C::NavigateLeftFailure()
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(43986);

	UWBP_SettingsCarousel_C_NavigateLeftFailure_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_SettingsCarousel.WBP_SettingsCarousel_C.FocusGroupNavigateDownFailure
//		Flags  -> (Event, Public, BlueprintEvent)
// Parameters:
//		int                                                FocusGroup                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWBP_SettingsCarousel_C::FocusGroupNavigateDownFailure(int FocusGroup)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(43985);

	UWBP_SettingsCarousel_C_FocusGroupNavigateDownFailure_Params params {};
	params.FocusGroup = FocusGroup;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_SettingsCarousel.WBP_SettingsCarousel_C.FocusGroupNavigateUpFailure
//		Flags  -> (Event, Public, BlueprintEvent)
// Parameters:
//		int                                                FocusGroup                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWBP_SettingsCarousel_C::FocusGroupNavigateUpFailure(int FocusGroup)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(43984);

	UWBP_SettingsCarousel_C_FocusGroupNavigateUpFailure_Params params {};
	params.FocusGroup = FocusGroup;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_SettingsCarousel.WBP_SettingsCarousel_C.Reset Indicator Lights
//		Flags  -> (BlueprintCallable, BlueprintEvent)
void UWBP_SettingsCarousel_C::Reset_Indicator_Lights()
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(43983);

	UWBP_SettingsCarousel_C_Reset_Indicator_Lights_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_SettingsCarousel.WBP_SettingsCarousel_C.OnSettingsInfoValueChanged
//		Flags  -> (Event, Protected, BlueprintCallable, BlueprintEvent)
// Parameters:
//		bool                                               bChangedExternally                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UWBP_SettingsCarousel_C::OnSettingsInfoValueChanged(bool bChangedExternally)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(43982);

	UWBP_SettingsCarousel_C_OnSettingsInfoValueChanged_Params params {};
	params.bChangedExternally = bChangedExternally;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_SettingsCarousel.WBP_SettingsCarousel_C.ExecuteUbergraph_WBP_SettingsCarousel
//		Flags  -> (Final, HasDefaults)
// Parameters:
//		int                                                EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWBP_SettingsCarousel_C::ExecuteUbergraph_WBP_SettingsCarousel(int EntryPoint)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(43981);

	UWBP_SettingsCarousel_C_ExecuteUbergraph_WBP_SettingsCarousel_Params params {};
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
