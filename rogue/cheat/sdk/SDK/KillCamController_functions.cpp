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
//		Name   -> Function KillCamController.KillCamController_C.ReceiveBeginPlay
//		Flags  -> (Event, Protected, BlueprintEvent)
void AKillCamController_C::ReceiveBeginPlay()
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(47642);

	AKillCamController_C_ReceiveBeginPlay_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function KillCamController.KillCamController_C.ExecuteUbergraph_KillCamController
//		Flags  -> (Final)
// Parameters:
//		int                                                EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void AKillCamController_C::ExecuteUbergraph_KillCamController(int EntryPoint)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(47641);

	AKillCamController_C_ExecuteUbergraph_KillCamController_Params params {};
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
