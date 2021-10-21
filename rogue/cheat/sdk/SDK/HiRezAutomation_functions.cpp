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
//		Name   -> Function HiRezAutomation.PerfSpline.InitPerfMovementAndCapture
//		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
void APerfSpline::InitPerfMovementAndCapture()
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(21631);

	APerfSpline_InitPerfMovementAndCapture_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00A6A770
//		Name   -> Function HiRezAutomation.PerfSpline.CaptureStats
//		Flags  -> (Final, Native, Public, BlueprintCallable)
void APerfSpline::CaptureStats()
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(21630);

	APerfSpline_CaptureStats_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
