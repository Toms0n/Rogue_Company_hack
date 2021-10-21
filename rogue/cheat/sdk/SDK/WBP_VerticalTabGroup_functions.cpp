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
//		Name   -> Function WBP_VerticalTabGroup.WBP_VerticalTabGroup_C.RevertGamepadSelected
//		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
void UWBP_VerticalTabGroup_C::RevertGamepadSelected()
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(61134);

	UWBP_VerticalTabGroup_C_RevertGamepadSelected_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_VerticalTabGroup.WBP_VerticalTabGroup_C.Display Gamepad Selected
//		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
//		struct FName                                       ViewName                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWBP_VerticalTabGroup_C::Display_Gamepad_Selected(const struct FName& ViewName)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(61133);

	UWBP_VerticalTabGroup_C_Display_Gamepad_Selected_Params params {};
	params.ViewName = ViewName;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_VerticalTabGroup.WBP_VerticalTabGroup_C.SelectEntryByName
//		Flags  -> (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
//		struct FName                                       ViewName                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		class UWBP_VerticalTabGroupEntry_C*                Selected_Entry                                             (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWBP_VerticalTabGroup_C::SelectEntryByName(const struct FName& ViewName, class UWBP_VerticalTabGroupEntry_C** Selected_Entry)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(61132);

	UWBP_VerticalTabGroup_C_SelectEntryByName_Params params {};
	params.ViewName = ViewName;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Selected_Entry != nullptr)
		*Selected_Entry = params.Selected_Entry;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_VerticalTabGroup.WBP_VerticalTabGroup_C.ClearEntries
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
void UWBP_VerticalTabGroup_C::ClearEntries()
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(61131);

	UWBP_VerticalTabGroup_C_ClearEntries_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_VerticalTabGroup.WBP_VerticalTabGroup_C.AddEntry
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
//		struct FName                                       ViewName                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		struct FOverlayTabViewRow                          ViewInfo                                                   (BlueprintVisible, BlueprintReadOnly, Parm)
void UWBP_VerticalTabGroup_C::AddEntry(const struct FName& ViewName, const struct FOverlayTabViewRow& ViewInfo)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(61130);

	UWBP_VerticalTabGroup_C_AddEntry_Params params {};
	params.ViewName = ViewName;
	params.ViewInfo = ViewInfo;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_VerticalTabGroup.WBP_VerticalTabGroup_C.GetEntries
//		Flags  -> (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
//		TArray<class UWBP_VerticalTabGroupEntry_C*>        Return_Value                                               (Parm, OutParm, ContainsInstancedReference, HasGetValueTypeHash)
void UWBP_VerticalTabGroup_C::GetEntries(TArray<class UWBP_VerticalTabGroupEntry_C*>* Return_Value)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(61129);

	UWBP_VerticalTabGroup_C_GetEntries_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Return_Value != nullptr)
		*Return_Value = params.Return_Value;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_VerticalTabGroup.WBP_VerticalTabGroup_C.Handle Tab Selected
//		Flags  -> (BlueprintCallable, BlueprintEvent)
// Parameters:
//		struct FName                                       View_Name                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWBP_VerticalTabGroup_C::Handle_Tab_Selected(const struct FName& View_Name)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(61128);

	UWBP_VerticalTabGroup_C_Handle_Tab_Selected_Params params {};
	params.View_Name = View_Name;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_VerticalTabGroup.WBP_VerticalTabGroup_C.Handle Tab Gamepad Selected
//		Flags  -> (BlueprintCallable, BlueprintEvent)
// Parameters:
//		struct FName                                       View_Name                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWBP_VerticalTabGroup_C::Handle_Tab_Gamepad_Selected(const struct FName& View_Name)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(61127);

	UWBP_VerticalTabGroup_C_Handle_Tab_Gamepad_Selected_Params params {};
	params.View_Name = View_Name;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_VerticalTabGroup.WBP_VerticalTabGroup_C.ExecuteUbergraph_WBP_VerticalTabGroup
//		Flags  -> (Final)
// Parameters:
//		int                                                EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWBP_VerticalTabGroup_C::ExecuteUbergraph_WBP_VerticalTabGroup(int EntryPoint)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(61126);

	UWBP_VerticalTabGroup_C_ExecuteUbergraph_WBP_VerticalTabGroup_Params params {};
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_VerticalTabGroup.WBP_VerticalTabGroup_C.OnSubviewChange__DelegateSignature
//		Flags  -> (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
//		struct FName                                       ViewName                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWBP_VerticalTabGroup_C::OnSubviewChange__DelegateSignature(const struct FName& ViewName)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(61125);

	UWBP_VerticalTabGroup_C_OnSubviewChange__DelegateSignature_Params params {};
	params.ViewName = ViewName;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_VerticalTabGroup.WBP_VerticalTabGroup_C.OnSubviewFocus__DelegateSignature
//		Flags  -> (Public, Delegate, BlueprintCallable, BlueprintEvent)
void UWBP_VerticalTabGroup_C::OnSubviewFocus__DelegateSignature()
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(61124);

	UWBP_VerticalTabGroup_C_OnSubviewFocus__DelegateSignature_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
