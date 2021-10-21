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
//		Name   -> Function DropdownList.DropdownList_C.NavigateBack
//		Flags  -> (Event, Protected, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
//		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
bool UDropdownList_C::NavigateBack()
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(45003);

	UDropdownList_C_NavigateBack_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function DropdownList.DropdownList_C.InitializeWidget
//		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
//		class APUMG_HUD*                                   HUD                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UDropdownList_C::InitializeWidget(class APUMG_HUD* HUD)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(45002);

	UDropdownList_C_InitializeWidget_Params params {};
	params.HUD = HUD;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function DropdownList.DropdownList_C.Selection
//		Flags  -> (BlueprintCallable, BlueprintEvent)
// Parameters:
//		int                                                Index                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		struct FText                                       Text                                                       (BlueprintVisible, BlueprintReadOnly, Parm)
void UDropdownList_C::Selection(int Index, const struct FText& Text)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(45001);

	UDropdownList_C_Selection_Params params {};
	params.Index = Index;
	params.Text = Text;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function DropdownList.DropdownList_C.InitializeWidgetNavigation
//		Flags  -> (Event, Public, BlueprintEvent)
void UDropdownList_C::InitializeWidgetNavigation()
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(45000);

	UDropdownList_C_InitializeWidgetNavigation_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function DropdownList.DropdownList_C.HandleOnHover
//		Flags  -> (BlueprintCallable, BlueprintEvent)
// Parameters:
//		class UWidget*                                     Widget                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		int                                                Index                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UDropdownList_C::HandleOnHover(class UWidget* Widget, int Index)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(44999);

	UDropdownList_C_HandleOnHover_Params params {};
	params.Widget = Widget;
	params.Index = Index;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function DropdownList.DropdownList_C.SetSelectedEntryByIndex
//		Flags  -> (BlueprintCallable, BlueprintEvent)
// Parameters:
//		int                                                Index                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UDropdownList_C::SetSelectedEntryByIndex(int Index)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(44998);

	UDropdownList_C_SetSelectedEntryByIndex_Params params {};
	params.Index = Index;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function DropdownList.DropdownList_C.BndEvt__Button_123_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
//		Flags  -> (BlueprintEvent)
void UDropdownList_C::BndEvt__Button_123_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature()
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(44997);

	UDropdownList_C_BndEvt__Button_123_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function DropdownList.DropdownList_C.ExecuteUbergraph_DropdownList
//		Flags  -> (Final, HasDefaults)
// Parameters:
//		int                                                EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UDropdownList_C::ExecuteUbergraph_DropdownList(int EntryPoint)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(44996);

	UDropdownList_C_ExecuteUbergraph_DropdownList_Params params {};
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function DropdownList.DropdownList_C.OnHoverPreview__DelegateSignature
//		Flags  -> (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
//		int                                                Index                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UDropdownList_C::OnHoverPreview__DelegateSignature(int Index)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(44995);

	UDropdownList_C_OnHoverPreview__DelegateSignature_Params params {};
	params.Index = Index;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function DropdownList.DropdownList_C.OnCancel__DelegateSignature
//		Flags  -> (Public, Delegate, BlueprintCallable, BlueprintEvent)
void UDropdownList_C::OnCancel__DelegateSignature()
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(44994);

	UDropdownList_C_OnCancel__DelegateSignature_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function DropdownList.DropdownList_C.OnSelection__DelegateSignature
//		Flags  -> (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
//		int                                                Index                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		struct FText                                       Text                                                       (BlueprintVisible, BlueprintReadOnly, Parm)
void UDropdownList_C::OnSelection__DelegateSignature(int Index, const struct FText& Text)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(44993);

	UDropdownList_C_OnSelection__DelegateSignature_Params params {};
	params.Index = Index;
	params.Text = Text;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
