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
//		Offset -> 0x018498C0
//		Name   -> Function MainCharacterThreatComponent.MainCharacterThreatComponent_C.ReceiveTick
//		Flags  -> (Native, Event, Public)
// Parameters:
//		float                                              bpp__DeltaSeconds__pf                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UMainCharacterThreatComponent_C::ReceiveTick(float bpp__DeltaSeconds__pf)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(25083);

	UMainCharacterThreatComponent_C_ReceiveTick_Params params {};
	params.bpp__DeltaSeconds__pf = bpp__DeltaSeconds__pf;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x018461C0
//		Name   -> Function MainCharacterThreatComponent.MainCharacterThreatComponent_C.DebugThreatLevels
//		Flags  -> (Native, Event, Public)
// Parameters:
//		bool                                               bpp__Show__pf                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UMainCharacterThreatComponent_C::DebugThreatLevels(bool bpp__Show__pf)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(25082);

	UMainCharacterThreatComponent_C_DebugThreatLevels_Params params {};
	params.bpp__Show__pf = bpp__Show__pf;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
