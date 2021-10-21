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
//		Name   -> Function WaypointBeacon.WaypointBeacon_C.UserConstructionScript
//		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
void AWaypointBeacon_C::UserConstructionScript()
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(42393);

	AWaypointBeacon_C_UserConstructionScript_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WaypointBeacon.WaypointBeacon_C.ReceiveBeginPlay
//		Flags  -> (Event, Protected, BlueprintEvent)
void AWaypointBeacon_C::ReceiveBeginPlay()
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(42392);

	AWaypointBeacon_C_ReceiveBeginPlay_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WaypointBeacon.WaypointBeacon_C.SetupBeaconDisplay
//		Flags  -> (Event, Public, BlueprintEvent)
void AWaypointBeacon_C::SetupBeaconDisplay()
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(42391);

	AWaypointBeacon_C_SetupBeaconDisplay_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WaypointBeacon.WaypointBeacon_C.ExecuteUbergraph_WaypointBeacon
//		Flags  -> (Final)
// Parameters:
//		int                                                EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void AWaypointBeacon_C::ExecuteUbergraph_WaypointBeacon(int EntryPoint)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(42390);

	AWaypointBeacon_C_ExecuteUbergraph_WaypointBeacon_Params params {};
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
