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
//		Name   -> Function CamMod_JumpStart.CamMod_JumpStart_C.ShouldModifyCamera
//		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
//		bool                                               bSuccess                                                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UCamMod_JumpStart_C::ShouldModifyCamera(bool* bSuccess)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(42119);

	UCamMod_JumpStart_C_ShouldModifyCamera_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (bSuccess != nullptr)
		*bSuccess = params.bSuccess;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function CamMod_JumpStart.CamMod_JumpStart_C.PlayTimeline
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
void UCamMod_JumpStart_C::PlayTimeline()
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(42118);

	UCamMod_JumpStart_C_PlayTimeline_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function CamMod_JumpStart.CamMod_JumpStart_C.ExecuteUbergraph_CamMod_JumpStart
//		Flags  -> (Final)
// Parameters:
//		int                                                EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UCamMod_JumpStart_C::ExecuteUbergraph_CamMod_JumpStart(int EntryPoint)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(42117);

	UCamMod_JumpStart_C_ExecuteUbergraph_CamMod_JumpStart_Params params {};
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
