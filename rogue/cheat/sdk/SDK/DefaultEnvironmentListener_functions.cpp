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
//		Name   -> Function DefaultEnvironmentListener.DefaultEnvironmentListener_C.OnEnvironmentChanged
//		Flags  -> (Event, Protected, BlueprintEvent)
// Parameters:
//		struct FName                                       OldEnvironmentTag                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UDefaultEnvironmentListener_C::OnEnvironmentChanged(const struct FName& OldEnvironmentTag)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(42098);

	UDefaultEnvironmentListener_C_OnEnvironmentChanged_Params params {};
	params.OldEnvironmentTag = OldEnvironmentTag;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function DefaultEnvironmentListener.DefaultEnvironmentListener_C.Print State
//		Flags  -> (BlueprintCallable, BlueprintEvent)
// Parameters:
//		bool                                               Print_to_Screen                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
//		bool                                               Print_to_Log                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
//		struct FLinearColor                                Text_Color                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		float                                              Duration                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UDefaultEnvironmentListener_C::Print_State(bool Print_to_Screen, bool Print_to_Log, const struct FLinearColor& Text_Color, float Duration)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(42097);

	UDefaultEnvironmentListener_C_Print_State_Params params {};
	params.Print_to_Screen = Print_to_Screen;
	params.Print_to_Log = Print_to_Log;
	params.Text_Color = Text_Color;
	params.Duration = Duration;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function DefaultEnvironmentListener.DefaultEnvironmentListener_C.ReceiveBeginPlay
//		Flags  -> (Event, Public, BlueprintEvent)
void UDefaultEnvironmentListener_C::ReceiveBeginPlay()
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(42096);

	UDefaultEnvironmentListener_C_ReceiveBeginPlay_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function DefaultEnvironmentListener.DefaultEnvironmentListener_C.ExecuteUbergraph_DefaultEnvironmentListener
//		Flags  -> (Final, HasDefaults)
// Parameters:
//		int                                                EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UDefaultEnvironmentListener_C::ExecuteUbergraph_DefaultEnvironmentListener(int EntryPoint)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(42095);

	UDefaultEnvironmentListener_C_ExecuteUbergraph_DefaultEnvironmentListener_Params params {};
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
