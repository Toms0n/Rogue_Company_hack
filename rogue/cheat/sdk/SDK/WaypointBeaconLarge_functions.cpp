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
//		Name   -> Function WaypointBeaconLarge.WaypointBeaconLarge_C.UserConstructionScript
//		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
void AWaypointBeaconLarge_C::UserConstructionScript()
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(42383);

	AWaypointBeaconLarge_C_UserConstructionScript_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WaypointBeaconLarge.WaypointBeaconLarge_C.ReceiveBeginPlay
//		Flags  -> (Event, Protected, BlueprintEvent)
void AWaypointBeaconLarge_C::ReceiveBeginPlay()
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(42382);

	AWaypointBeaconLarge_C_ReceiveBeginPlay_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WaypointBeaconLarge.WaypointBeaconLarge_C.SetupBeaconDisplay
//		Flags  -> (Event, Public, BlueprintEvent)
void AWaypointBeaconLarge_C::SetupBeaconDisplay()
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(42381);

	AWaypointBeaconLarge_C_SetupBeaconDisplay_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WaypointBeaconLarge.WaypointBeaconLarge_C.ExecuteUbergraph_WaypointBeaconLarge
//		Flags  -> (Final)
// Parameters:
//		int                                                EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void AWaypointBeaconLarge_C::ExecuteUbergraph_WaypointBeaconLarge(int EntryPoint)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(42380);

	AWaypointBeaconLarge_C_ExecuteUbergraph_WaypointBeaconLarge_Params params {};
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
