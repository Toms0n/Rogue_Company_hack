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
//		Name   -> Function WBP_SettingsContainer.WBP_SettingsContainer_C.GetPreviewWidget
//		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
//		class UKSWidget*                                   PreviewWidget                                              (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWBP_SettingsContainer_C::GetPreviewWidget(class UKSWidget** PreviewWidget)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(67747);

	UWBP_SettingsContainer_C_GetPreviewWidget_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (PreviewWidget != nullptr)
		*PreviewWidget = params.PreviewWidget;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_SettingsContainer.WBP_SettingsContainer_C.Add Setting Widget To Box
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
//		class UKSSettingsWidget*                           Setting_Widget                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWBP_SettingsContainer_C::Add_Setting_Widget_To_Box(class UKSSettingsWidget* Setting_Widget)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(67746);

	UWBP_SettingsContainer_C_Add_Setting_Widget_To_Box_Params params {};
	params.Setting_Widget = Setting_Widget;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_SettingsContainer.WBP_SettingsContainer_C.SettingsContainerHoverSFX
//		Flags  -> (BlueprintCallable, BlueprintEvent)
void UWBP_SettingsContainer_C::SettingsContainerHoverSFX()
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(67745);

	UWBP_SettingsContainer_C_SettingsContainerHoverSFX_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_SettingsContainer.WBP_SettingsContainer_C.OnContainerConfigSet
//		Flags  -> (Event, Protected, BlueprintEvent)
void UWBP_SettingsContainer_C::OnContainerConfigSet()
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(67744);

	UWBP_SettingsContainer_C_OnContainerConfigSet_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_SettingsContainer.WBP_SettingsContainer_C.AddSettingsWidget
//		Flags  -> (Event, Protected, BlueprintEvent)
// Parameters:
//		class UKSSettingsWidget*                           SettingsWidget                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWBP_SettingsContainer_C::AddSettingsWidget(class UKSSettingsWidget* SettingsWidget)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(67743);

	UWBP_SettingsContainer_C_AddSettingsWidget_Params params {};
	params.SettingsWidget = SettingsWidget;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_SettingsContainer.WBP_SettingsContainer_C.OnMouseEnter
//		Flags  -> (BlueprintCosmetic, Event, Public, HasOutParms, BlueprintEvent)
// Parameters:
//		struct FGeometry                                   MyGeometry                                                 (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
//		struct FPointerEvent                               MouseEvent                                                 (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
void UWBP_SettingsContainer_C::OnMouseEnter(const struct FGeometry& MyGeometry, const struct FPointerEvent& MouseEvent)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(67742);

	UWBP_SettingsContainer_C_OnMouseEnter_Params params {};
	params.MyGeometry = MyGeometry;
	params.MouseEvent = MouseEvent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_SettingsContainer.WBP_SettingsContainer_C.OnMouseLeave
//		Flags  -> (BlueprintCosmetic, Event, Public, HasOutParms, BlueprintEvent)
// Parameters:
//		struct FPointerEvent                               MouseEvent                                                 (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
void UWBP_SettingsContainer_C::OnMouseLeave(const struct FPointerEvent& MouseEvent)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(67741);

	UWBP_SettingsContainer_C_OnMouseLeave_Params params {};
	params.MouseEvent = MouseEvent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_SettingsContainer.WBP_SettingsContainer_C.PlayHoverAnim
//		Flags  -> (BlueprintCallable, BlueprintEvent)
void UWBP_SettingsContainer_C::PlayHoverAnim()
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(67740);

	UWBP_SettingsContainer_C_PlayHoverAnim_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_SettingsContainer.WBP_SettingsContainer_C.PlayUnhoverAnim
//		Flags  -> (BlueprintCallable, BlueprintEvent)
void UWBP_SettingsContainer_C::PlayUnhoverAnim()
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(67739);

	UWBP_SettingsContainer_C_PlayUnhoverAnim_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_SettingsContainer.WBP_SettingsContainer_C.AddPreviewWidget
//		Flags  -> (Event, Protected, BlueprintEvent)
// Parameters:
//		class UKSSettingsPreview*                          PreviewWidget                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWBP_SettingsContainer_C::AddPreviewWidget(class UKSSettingsPreview* PreviewWidget)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(67738);

	UWBP_SettingsContainer_C_AddPreviewWidget_Params params {};
	params.PreviewWidget = PreviewWidget;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_SettingsContainer.WBP_SettingsContainer_C.ExecuteUbergraph_WBP_SettingsContainer
//		Flags  -> (Final, HasDefaults)
// Parameters:
//		int                                                EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWBP_SettingsContainer_C::ExecuteUbergraph_WBP_SettingsContainer(int EntryPoint)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(67737);

	UWBP_SettingsContainer_C_ExecuteUbergraph_WBP_SettingsContainer_Params params {};
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_SettingsContainer.WBP_SettingsContainer_C.OnAddToPreview__DelegateSignature
//		Flags  -> (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
//		class UKSWidget*                                   PreviewWidget                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWBP_SettingsContainer_C::OnAddToPreview__DelegateSignature(class UKSWidget* PreviewWidget)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(60456);

	UWBP_SettingsContainer_C_OnAddToPreview__DelegateSignature_Params params {};
	params.PreviewWidget = PreviewWidget;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
