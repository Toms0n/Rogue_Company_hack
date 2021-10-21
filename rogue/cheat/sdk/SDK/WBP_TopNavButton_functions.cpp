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
//		Name   -> Function WBP_TopNavButton.WBP_TopNavButton_C.SetNewIndicator
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
//		bool                                               Visible                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UWBP_TopNavButton_C::SetNewIndicator(bool Visible)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(58171);

	UWBP_TopNavButton_C_SetNewIndicator_Params params {};
	params.Visible = Visible;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_TopNavButton.WBP_TopNavButton_C.IsDisabled
//		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
//		bool                                               Disabled                                                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UWBP_TopNavButton_C::IsDisabled(bool* Disabled)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(58170);

	UWBP_TopNavButton_C_IsDisabled_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Disabled != nullptr)
		*Disabled = params.Disabled;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_TopNavButton.WBP_TopNavButton_C.IsActive
//		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
//		bool                                               Active                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UWBP_TopNavButton_C::IsActive(bool* Active)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(58169);

	UWBP_TopNavButton_C_IsActive_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Active != nullptr)
		*Active = params.Active;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_TopNavButton.WBP_TopNavButton_C.PreConstruct
//		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
//		bool                                               IsDesignTime                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UWBP_TopNavButton_C::PreConstruct(bool IsDesignTime)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(58168);

	UWBP_TopNavButton_C_PreConstruct_Params params {};
	params.IsDesignTime = IsDesignTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_TopNavButton.WBP_TopNavButton_C.SetMessage
//		Flags  -> (BlueprintCallable, BlueprintEvent)
// Parameters:
//		struct FText                                       Message                                                    (BlueprintVisible, BlueprintReadOnly, Parm)
void UWBP_TopNavButton_C::SetMessage(const struct FText& Message)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(58167);

	UWBP_TopNavButton_C_SetMessage_Params params {};
	params.Message = Message;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_TopNavButton.WBP_TopNavButton_C.Construct
//		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
void UWBP_TopNavButton_C::Construct()
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(58166);

	UWBP_TopNavButton_C_Construct_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_TopNavButton.WBP_TopNavButton_C.DisableButton
//		Flags  -> (BlueprintCallable, BlueprintEvent)
// Parameters:
//		bool                                               IsDisabled                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UWBP_TopNavButton_C::DisableButton(bool IsDisabled)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(58165);

	UWBP_TopNavButton_C_DisableButton_Params params {};
	params.IsDisabled = IsDisabled;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_TopNavButton.WBP_TopNavButton_C.SetActive
//		Flags  -> (BlueprintCallable, BlueprintEvent)
// Parameters:
//		bool                                               IsActive                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UWBP_TopNavButton_C::SetActive(bool IsActive)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(58164);

	UWBP_TopNavButton_C_SetActive_Params params {};
	params.IsActive = IsActive;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_TopNavButton.WBP_TopNavButton_C.GamepadConfirm
//		Flags  -> (BlueprintCallable, BlueprintEvent)
void UWBP_TopNavButton_C::GamepadConfirm()
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(58163);

	UWBP_TopNavButton_C_GamepadConfirm_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_TopNavButton.WBP_TopNavButton_C.InitializeWidget
//		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
//		class APUMG_HUD*                                   HUD                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWBP_TopNavButton_C::InitializeWidget(class APUMG_HUD* HUD)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(58162);

	UWBP_TopNavButton_C_InitializeWidget_Params params {};
	params.HUD = HUD;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_TopNavButton.WBP_TopNavButton_C.NavTabSelected
//		Flags  -> (BlueprintCallable, BlueprintEvent)
// Parameters:
//		class UKSNavTabWidget*                             SelectedNavTab                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWBP_TopNavButton_C::NavTabSelected(class UKSNavTabWidget* SelectedNavTab)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(58161);

	UWBP_TopNavButton_C_NavTabSelected_Params params {};
	params.SelectedNavTab = SelectedNavTab;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_TopNavButton.WBP_TopNavButton_C.ExecuteUbergraph_WBP_TopNavButton
//		Flags  -> (Final, HasDefaults)
// Parameters:
//		int                                                EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWBP_TopNavButton_C::ExecuteUbergraph_WBP_TopNavButton(int EntryPoint)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(58160);

	UWBP_TopNavButton_C_ExecuteUbergraph_WBP_TopNavButton_Params params {};
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_TopNavButton.WBP_TopNavButton_C.OnNonRouteClicked__DelegateSignature
//		Flags  -> (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
//		class UKSWidget*                                   ButtonClicked                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWBP_TopNavButton_C::OnNonRouteClicked__DelegateSignature(class UKSWidget* ButtonClicked)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(58159);

	UWBP_TopNavButton_C_OnNonRouteClicked__DelegateSignature_Params params {};
	params.ButtonClicked = ButtonClicked;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_TopNavButton.WBP_TopNavButton_C.OnUnhovered__DelegateSignature
//		Flags  -> (Public, Delegate, BlueprintCallable, BlueprintEvent)
void UWBP_TopNavButton_C::OnUnhovered__DelegateSignature()
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(58158);

	UWBP_TopNavButton_C_OnUnhovered__DelegateSignature_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_TopNavButton.WBP_TopNavButton_C.OnHovered__DelegateSignature
//		Flags  -> (Public, Delegate, BlueprintCallable, BlueprintEvent)
void UWBP_TopNavButton_C::OnHovered__DelegateSignature()
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(58157);

	UWBP_TopNavButton_C_OnHovered__DelegateSignature_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_TopNavButton.WBP_TopNavButton_C.OnClicked__DelegateSignature
//		Flags  -> (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
//		struct FName                                       TargetViewState                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWBP_TopNavButton_C::OnClicked__DelegateSignature(const struct FName& TargetViewState)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(58156);

	UWBP_TopNavButton_C_OnClicked__DelegateSignature_Params params {};
	params.TargetViewState = TargetViewState;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
