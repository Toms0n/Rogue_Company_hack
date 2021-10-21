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
//		Name   -> Function DebugMenu.DebugMenu_C.CloseDebugMenu
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
void UDebugMenu_C::CloseDebugMenu()
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(63689);

	UDebugMenu_C_CloseDebugMenu_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function DebugMenu.DebugMenu_C.GetParamTypeForSubCommand
//		Flags  -> (Event, Protected, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
//		struct FString                                     BaseCommandString                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
//		KillstreakUINew_EConsoleCommandParamType           ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
KillstreakUINew_EConsoleCommandParamType UDebugMenu_C::GetParamTypeForSubCommand(const struct FString& BaseCommandString)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(63688);

	UDebugMenu_C_GetParamTypeForSubCommand_Params params {};
	params.BaseCommandString = BaseCommandString;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function DebugMenu.DebugMenu_C.AddBaseCommandHeader
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
//		struct FString                                     BaseCommand                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
void UDebugMenu_C::AddBaseCommandHeader(const struct FString& BaseCommand)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(63687);

	UDebugMenu_C_AddBaseCommandHeader_Params params {};
	params.BaseCommand = BaseCommand;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function DebugMenu.DebugMenu_C.NavigateBack
//		Flags  -> (Event, Protected, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
//		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
bool UDebugMenu_C::NavigateBack()
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(63686);

	UDebugMenu_C_NavigateBack_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function DebugMenu.DebugMenu_C.CommandSelected
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
//		struct FDebugMenuCommandInfo                       Command                                                    (BlueprintVisible, BlueprintReadOnly, Parm)
void UDebugMenu_C::CommandSelected(const struct FDebugMenuCommandInfo& Command)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(63685);

	UDebugMenu_C_CommandSelected_Params params {};
	params.Command = Command;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function DebugMenu.DebugMenu_C.MakeBoolSubmenu
//		Flags  -> (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
//		TArray<struct FDebugMenuCommandInfo>               Array                                                      (Parm, OutParm, HasGetValueTypeHash)
void UDebugMenu_C::MakeBoolSubmenu(TArray<struct FDebugMenuCommandInfo>* Array)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(63684);

	UDebugMenu_C_MakeBoolSubmenu_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Array != nullptr)
		*Array = params.Array;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function DebugMenu.DebugMenu_C.InternalPopulate
//		Flags  -> (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
//		TArray<struct FDebugMenuCommandInfo>               Commands                                                   (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, HasGetValueTypeHash)
void UDebugMenu_C::InternalPopulate(TArray<struct FDebugMenuCommandInfo>* Commands)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(63683);

	UDebugMenu_C_InternalPopulate_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Commands != nullptr)
		*Commands = params.Commands;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function DebugMenu.DebugMenu_C.PopulateList
//		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
//		int                                                Depth                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UDebugMenu_C::PopulateList(int Depth)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(63682);

	UDebugMenu_C_PopulateList_Params params {};
	params.Depth = Depth;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function DebugMenu.DebugMenu_C.Construct
//		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
void UDebugMenu_C::Construct()
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(63681);

	UDebugMenu_C_Construct_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function DebugMenu.DebugMenu_C.OnShown
//		Flags  -> (Event, Public, BlueprintEvent)
void UDebugMenu_C::OnShown()
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(63680);

	UDebugMenu_C_OnShown_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function DebugMenu.DebugMenu_C.OnHide
//		Flags  -> (Event, Public, BlueprintEvent)
void UDebugMenu_C::OnHide()
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(63679);

	UDebugMenu_C_OnHide_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function DebugMenu.DebugMenu_C.InitializeWidgetNavigation
//		Flags  -> (Event, Public, BlueprintEvent)
void UDebugMenu_C::InitializeWidgetNavigation()
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(63678);

	UDebugMenu_C_InitializeWidgetNavigation_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function DebugMenu.DebugMenu_C.ExecuteUbergraph_DebugMenu
//		Flags  -> (Final, HasDefaults)
// Parameters:
//		int                                                EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UDebugMenu_C::ExecuteUbergraph_DebugMenu(int EntryPoint)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(63677);

	UDebugMenu_C_ExecuteUbergraph_DebugMenu_Params params {};
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
