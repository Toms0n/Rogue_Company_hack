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
//		Name   -> Function Dropdown.Dropdown_C.IsSelecting
//		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
//		bool                                               IsSelecting                                                (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UDropdown_C::IsSelecting(bool* IsSelecting)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(45054);

	UDropdown_C_IsSelecting_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (IsSelecting != nullptr)
		*IsSelecting = params.IsSelecting;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function Dropdown.Dropdown_C.NavigateConfirm
//		Flags  -> (Event, Protected, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
//		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
bool UDropdown_C::NavigateConfirm()
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(45053);

	UDropdown_C_NavigateConfirm_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function Dropdown.Dropdown_C.AppendOptions
//		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
//		TArray<struct FText>                               OptionsToAppend                                            (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, HasGetValueTypeHash)
void UDropdown_C::AppendOptions(TArray<struct FText>* OptionsToAppend)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(45052);

	UDropdown_C_AppendOptions_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (OptionsToAppend != nullptr)
		*OptionsToAppend = params.OptionsToAppend;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function Dropdown.Dropdown_C.ForceClose
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
void UDropdown_C::ForceClose()
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(45051);

	UDropdown_C_ForceClose_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function Dropdown.Dropdown_C.ForceToggle
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
void UDropdown_C::ForceToggle()
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(45050);

	UDropdown_C_ForceToggle_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function Dropdown.Dropdown_C.ForceOpen
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
void UDropdown_C::ForceOpen()
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(45049);

	UDropdown_C_ForceOpen_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function Dropdown.Dropdown_C.InitializeDropdownList
//		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
//		class UWidget*                                     ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
class UWidget* UDropdown_C::InitializeDropdownList()
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(45048);

	UDropdown_C_InitializeDropdownList_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function Dropdown.Dropdown_C.SetSelectedOptionByIndex
//		Flags  -> (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
//		int                                                Index                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		bool                                               Success                                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UDropdown_C::SetSelectedOptionByIndex(int Index, bool* Success)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(45047);

	UDropdown_C_SetSelectedOptionByIndex_Params params {};
	params.Index = Index;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Success != nullptr)
		*Success = params.Success;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function Dropdown.Dropdown_C.SetSelectedOptionByText
//		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
//		struct FText                                       Text                                                       (BlueprintVisible, BlueprintReadOnly, Parm)
//		bool                                               Success                                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UDropdown_C::SetSelectedOptionByText(const struct FText& Text, bool* Success)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(45046);

	UDropdown_C_SetSelectedOptionByText_Params params {};
	params.Text = Text;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Success != nullptr)
		*Success = params.Success;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function Dropdown.Dropdown_C.RemoveOptionByIndex
//		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
//		int                                                Index                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		bool                                               Success                                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UDropdown_C::RemoveOptionByIndex(int Index, bool* Success)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(45045);

	UDropdown_C_RemoveOptionByIndex_Params params {};
	params.Index = Index;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Success != nullptr)
		*Success = params.Success;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function Dropdown.Dropdown_C.RemoveOptionByText
//		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
//		struct FText                                       Option                                                     (BlueprintVisible, BlueprintReadOnly, Parm)
//		bool                                               Success                                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UDropdown_C::RemoveOptionByText(const struct FText& Option, bool* Success)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(45044);

	UDropdown_C_RemoveOptionByText_Params params {};
	params.Option = Option;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Success != nullptr)
		*Success = params.Success;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function Dropdown.Dropdown_C.GetSelectedOption
//		Flags  -> (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
//		struct FText                                       Selection                                                  (Parm, OutParm)
//		int                                                Index                                                      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UDropdown_C::GetSelectedOption(struct FText* Selection, int* Index)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(45043);

	UDropdown_C_GetSelectedOption_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Selection != nullptr)
		*Selection = params.Selection;
	if (Index != nullptr)
		*Index = params.Index;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function Dropdown.Dropdown_C.GetOptionCount
//		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
//		int                                                Count                                                      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UDropdown_C::GetOptionCount(int* Count)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(45042);

	UDropdown_C_GetOptionCount_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Count != nullptr)
		*Count = params.Count;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function Dropdown.Dropdown_C.FindIndexForOption
//		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
//		struct FText                                       Option                                                     (BlueprintVisible, BlueprintReadOnly, Parm)
//		bool                                               Success                                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
//		int                                                Index                                                      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UDropdown_C::FindIndexForOption(const struct FText& Option, bool* Success, int* Index)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(45041);

	UDropdown_C_FindIndexForOption_Params params {};
	params.Option = Option;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Success != nullptr)
		*Success = params.Success;
	if (Index != nullptr)
		*Index = params.Index;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function Dropdown.Dropdown_C.FindOptionByIndex
//		Flags  -> (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
//		int                                                Index                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		bool                                               Success                                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
//		struct FText                                       Option                                                     (Parm, OutParm)
void UDropdown_C::FindOptionByIndex(int Index, bool* Success, struct FText* Option)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(45040);

	UDropdown_C_FindOptionByIndex_Params params {};
	params.Index = Index;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Success != nullptr)
		*Success = params.Success;
	if (Option != nullptr)
		*Option = params.Option;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function Dropdown.Dropdown_C.ClearSelection
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
void UDropdown_C::ClearSelection()
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(45039);

	UDropdown_C_ClearSelection_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function Dropdown.Dropdown_C.ClearOptions
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
void UDropdown_C::ClearOptions()
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(45038);

	UDropdown_C_ClearOptions_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function Dropdown.Dropdown_C.AddOption
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
//		struct FText                                       OptionText                                                 (BlueprintVisible, BlueprintReadOnly, Parm)
void UDropdown_C::AddOption(const struct FText& OptionText)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(45037);

	UDropdown_C_AddOption_Params params {};
	params.OptionText = OptionText;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function Dropdown.Dropdown_C.BndEvt__HitTarget_K2Node_ComponentBoundEvent_4_OnButtonHoverEvent__DelegateSignature
//		Flags  -> (BlueprintEvent)
void UDropdown_C::BndEvt__HitTarget_K2Node_ComponentBoundEvent_4_OnButtonHoverEvent__DelegateSignature()
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(45036);

	UDropdown_C_BndEvt__HitTarget_K2Node_ComponentBoundEvent_4_OnButtonHoverEvent__DelegateSignature_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function Dropdown.Dropdown_C.SelectionMade
//		Flags  -> (BlueprintCallable, BlueprintEvent)
// Parameters:
//		int                                                Index                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		struct FText                                       Selection                                                  (BlueprintVisible, BlueprintReadOnly, Parm)
void UDropdown_C::SelectionMade(int Index, const struct FText& Selection)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(45035);

	UDropdown_C_SelectionMade_Params params {};
	params.Index = Index;
	params.Selection = Selection;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function Dropdown.Dropdown_C.BndEvt__HitTarget_K2Node_ComponentBoundEvent_8_OnButtonClickedEvent__DelegateSignature
//		Flags  -> (BlueprintEvent)
void UDropdown_C::BndEvt__HitTarget_K2Node_ComponentBoundEvent_8_OnButtonClickedEvent__DelegateSignature()
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(45034);

	UDropdown_C_BndEvt__HitTarget_K2Node_ComponentBoundEvent_8_OnButtonClickedEvent__DelegateSignature_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function Dropdown.Dropdown_C.SelectionCancel
//		Flags  -> (BlueprintCallable, BlueprintEvent)
void UDropdown_C::SelectionCancel()
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(45033);

	UDropdown_C_SelectionCancel_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function Dropdown.Dropdown_C.BndEvt__DropdownAnchor_K2Node_ComponentBoundEvent_0_OnMenuOpenChangedEvent__DelegateSignature
//		Flags  -> (BlueprintEvent)
// Parameters:
//		bool                                               bIsOpen                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UDropdown_C::BndEvt__DropdownAnchor_K2Node_ComponentBoundEvent_0_OnMenuOpenChangedEvent__DelegateSignature(bool bIsOpen)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(45032);

	UDropdown_C_BndEvt__DropdownAnchor_K2Node_ComponentBoundEvent_0_OnMenuOpenChangedEvent__DelegateSignature_Params params {};
	params.bIsOpen = bIsOpen;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function Dropdown.Dropdown_C.HandleSetCurrentHoverIndex
//		Flags  -> (BlueprintCallable, BlueprintEvent)
// Parameters:
//		int                                                CurrentHoverIndex                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UDropdown_C::HandleSetCurrentHoverIndex(int CurrentHoverIndex)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(45031);

	UDropdown_C_HandleSetCurrentHoverIndex_Params params {};
	params.CurrentHoverIndex = CurrentHoverIndex;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function Dropdown.Dropdown_C.BndEvt__HitTarget_K2Node_ComponentBoundEvent_3_OnButtonHoverEvent__DelegateSignature
//		Flags  -> (BlueprintEvent)
void UDropdown_C::BndEvt__HitTarget_K2Node_ComponentBoundEvent_3_OnButtonHoverEvent__DelegateSignature()
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(45030);

	UDropdown_C_BndEvt__HitTarget_K2Node_ComponentBoundEvent_3_OnButtonHoverEvent__DelegateSignature_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function Dropdown.Dropdown_C.GamepadHover
//		Flags  -> (Event, Public, BlueprintEvent)
void UDropdown_C::GamepadHover()
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(45029);

	UDropdown_C_GamepadHover_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function Dropdown.Dropdown_C.GamepadUnhover
//		Flags  -> (Event, Public, BlueprintEvent)
void UDropdown_C::GamepadUnhover()
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(45028);

	UDropdown_C_GamepadUnhover_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function Dropdown.Dropdown_C.On Selected
//		Flags  -> (BlueprintCallable, BlueprintEvent)
void UDropdown_C::On_Selected()
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(45027);

	UDropdown_C_On_Selected_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function Dropdown.Dropdown_C.Hover
//		Flags  -> (BlueprintCallable, BlueprintEvent)
void UDropdown_C::Hover()
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(45026);

	UDropdown_C_Hover_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function Dropdown.Dropdown_C.Unhover
//		Flags  -> (BlueprintCallable, BlueprintEvent)
void UDropdown_C::Unhover()
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(45025);

	UDropdown_C_Unhover_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function Dropdown.Dropdown_C.HoverPreview
//		Flags  -> (BlueprintCallable, BlueprintEvent)
// Parameters:
//		int                                                Index                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UDropdown_C::HoverPreview(int Index)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(45024);

	UDropdown_C_HoverPreview_Params params {};
	params.Index = Index;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function Dropdown.Dropdown_C.ExecuteUbergraph_Dropdown
//		Flags  -> (Final, HasDefaults)
// Parameters:
//		int                                                EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UDropdown_C::ExecuteUbergraph_Dropdown(int EntryPoint)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(45023);

	UDropdown_C_ExecuteUbergraph_Dropdown_Params params {};
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function Dropdown.Dropdown_C.OnSelectionCanceled__DelegateSignature
//		Flags  -> (Public, Delegate, BlueprintCallable, BlueprintEvent)
void UDropdown_C::OnSelectionCanceled__DelegateSignature()
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(45022);

	UDropdown_C_OnSelectionCanceled__DelegateSignature_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function Dropdown.Dropdown_C.OnHoverPreview__DelegateSignature
//		Flags  -> (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
//		int                                                Index                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UDropdown_C::OnHoverPreview__DelegateSignature(int Index)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(45021);

	UDropdown_C_OnHoverPreview__DelegateSignature_Params params {};
	params.Index = Index;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function Dropdown.Dropdown_C.OnSelectionChanged__DelegateSignature
//		Flags  -> (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
//		struct FText                                       SelectionText                                              (BlueprintVisible, BlueprintReadOnly, Parm)
//		int                                                SelectionIndex                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UDropdown_C::OnSelectionChanged__DelegateSignature(const struct FText& SelectionText, int SelectionIndex)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(45020);

	UDropdown_C_OnSelectionChanged__DelegateSignature_Params params {};
	params.SelectionText = SelectionText;
	params.SelectionIndex = SelectionIndex;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
