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
//		Name   -> Function WBP_KeyCallout.WBP_KeyCallout_C.SetKeybind
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
//		struct FName                                       KeyBind                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWBP_KeyCallout_C::SetKeybind(const struct FName& KeyBind)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(43857);

	UWBP_KeyCallout_C_SetKeybind_Params params {};
	params.KeyBind = KeyBind;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_KeyCallout.WBP_KeyCallout_C.UpdateKeyDisplay
//		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
void UWBP_KeyCallout_C::UpdateKeyDisplay()
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(43856);

	UWBP_KeyCallout_C_UpdateKeyDisplay_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_KeyCallout.WBP_KeyCallout_C.SetKey
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
//		struct FKey                                        Key                                                        (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
void UWBP_KeyCallout_C::SetKey(const struct FKey& Key)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(43855);

	UWBP_KeyCallout_C_SetKey_Params params {};
	params.Key = Key;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_KeyCallout.WBP_KeyCallout_C.PreConstruct
//		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
//		bool                                               IsDesignTime                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UWBP_KeyCallout_C::PreConstruct(bool IsDesignTime)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(43854);

	UWBP_KeyCallout_C_PreConstruct_Params params {};
	params.IsDesignTime = IsDesignTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_KeyCallout.WBP_KeyCallout_C.ExecuteUbergraph_WBP_KeyCallout
//		Flags  -> (Final)
// Parameters:
//		int                                                EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWBP_KeyCallout_C::ExecuteUbergraph_WBP_KeyCallout(int EntryPoint)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(43853);

	UWBP_KeyCallout_C_ExecuteUbergraph_WBP_KeyCallout_Params params {};
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
