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
//		Name   -> Function GamepadPrompt_Bright.GamepadPrompt_Bright_C.Construct
//		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
void UGamepadPrompt_Bright_C::Construct()
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(61114);

	UGamepadPrompt_Bright_C_Construct_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function GamepadPrompt_Bright.GamepadPrompt_Bright_C.PreConstruct
//		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
//		bool                                               IsDesignTime                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UGamepadPrompt_Bright_C::PreConstruct(bool IsDesignTime)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(61113);

	UGamepadPrompt_Bright_C_PreConstruct_Params params {};
	params.IsDesignTime = IsDesignTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function GamepadPrompt_Bright.GamepadPrompt_Bright_C.ExecuteUbergraph_GamepadPrompt_Bright
//		Flags  -> (Final, HasDefaults)
// Parameters:
//		int                                                EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UGamepadPrompt_Bright_C::ExecuteUbergraph_GamepadPrompt_Bright(int EntryPoint)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(61112);

	UGamepadPrompt_Bright_C_ExecuteUbergraph_GamepadPrompt_Bright_Params params {};
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
