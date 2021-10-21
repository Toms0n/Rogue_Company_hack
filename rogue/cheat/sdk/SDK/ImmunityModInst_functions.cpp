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
//		Name   -> Function ImmunityModInst.ImmunityModInst_C.ReceiveBeginPlay
//		Flags  -> (Event, Public, BlueprintEvent)
void UImmunityModInst_C::ReceiveBeginPlay()
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(27297);

	UImmunityModInst_C_ReceiveBeginPlay_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function ImmunityModInst.ImmunityModInst_C.ReceiveTick
//		Flags  -> (Event, Public, BlueprintEvent)
// Parameters:
//		float                                              DeltaSeconds                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UImmunityModInst_C::ReceiveTick(float DeltaSeconds)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(27296);

	UImmunityModInst_C_ReceiveTick_Params params {};
	params.DeltaSeconds = DeltaSeconds;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function ImmunityModInst.ImmunityModInst_C.ReceiveEndPlay
//		Flags  -> (Event, Public, BlueprintEvent)
// Parameters:
//		TEnumAsByte<Engine_EEndPlayReason>                 EndPlayReason                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UImmunityModInst_C::ReceiveEndPlay(TEnumAsByte<Engine_EEndPlayReason> EndPlayReason)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(27295);

	UImmunityModInst_C_ReceiveEndPlay_Params params {};
	params.EndPlayReason = EndPlayReason;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function ImmunityModInst.ImmunityModInst_C.OnNewCharacterFoundation
//		Flags  -> (Event, Public, BlueprintEvent)
void UImmunityModInst_C::OnNewCharacterFoundation()
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(27294);

	UImmunityModInst_C_OnNewCharacterFoundation_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function ImmunityModInst.ImmunityModInst_C.ExecuteUbergraph_ImmunityModInst
//		Flags  -> (Final)
// Parameters:
//		int                                                EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UImmunityModInst_C::ExecuteUbergraph_ImmunityModInst(int EntryPoint)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(27293);

	UImmunityModInst_C_ExecuteUbergraph_ImmunityModInst_Params params {};
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
