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
//		Name   -> Function BloodEffectCurveComponent.BloodEffectCurveComponent_C.UpdateScalarTrack
//		Flags  -> (Event, Protected, BlueprintEvent)
// Parameters:
//		struct FName                                       TrackName                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		float                                              TrackValue                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UBloodEffectCurveComponent_C::UpdateScalarTrack(const struct FName& TrackName, float TrackValue)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(25223);

	UBloodEffectCurveComponent_C_UpdateScalarTrack_Params params {};
	params.TrackName = TrackName;
	params.TrackValue = TrackValue;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function BloodEffectCurveComponent.BloodEffectCurveComponent_C.ExecuteUbergraph_BloodEffectCurveComponent
//		Flags  -> (Final)
// Parameters:
//		int                                                EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UBloodEffectCurveComponent_C::ExecuteUbergraph_BloodEffectCurveComponent(int EntryPoint)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(25222);

	UBloodEffectCurveComponent_C_ExecuteUbergraph_BloodEffectCurveComponent_Params params {};
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
