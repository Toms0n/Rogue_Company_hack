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
//		Name   -> Function TrendedKick.TrendedKick_C.GetMaximumHorizontalKick
//		Flags  -> (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
//		float                                              ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
float UTrendedKick_C::GetMaximumHorizontalKick()
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(44585);

	UTrendedKick_C_GetMaximumHorizontalKick_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function TrendedKick.TrendedKick_C.GetMaximumVerticalKick
//		Flags  -> (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
//		float                                              ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
float UTrendedKick_C::GetMaximumVerticalKick()
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(44584);

	UTrendedKick_C_GetMaximumVerticalKick_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function TrendedKick.TrendedKick_C.GetCurrentTrendProfile
//		Flags  -> (Protected, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
//		int                                                ShotIndex                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		struct FKickTrendProfile                           TrendProfile                                               (Parm, OutParm, NoDestructor, HasGetValueTypeHash)
void UTrendedKick_C::GetCurrentTrendProfile(int ShotIndex, struct FKickTrendProfile* TrendProfile)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(44583);

	UTrendedKick_C_GetCurrentTrendProfile_Params params {};
	params.ShotIndex = ShotIndex;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (TrendProfile != nullptr)
		*TrendProfile = params.TrendProfile;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function TrendedKick.TrendedKick_C.MakeKickbackInstance
//		Flags  -> (Event, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
//		int                                                ShotIndex                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		float                                              AbsoluteMaxDuration                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		struct FInterpCurveVector2D                        ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash)
struct FInterpCurveVector2D UTrendedKick_C::MakeKickbackInstance(int ShotIndex, float AbsoluteMaxDuration)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(44582);

	UTrendedKick_C_MakeKickbackInstance_Params params {};
	params.ShotIndex = ShotIndex;
	params.AbsoluteMaxDuration = AbsoluteMaxDuration;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
