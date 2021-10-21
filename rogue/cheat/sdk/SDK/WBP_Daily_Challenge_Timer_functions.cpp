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
//		Name   -> Function WBP_Daily_Challenge_Timer.WBP_Daily_Challenge_Timer_C.GetCurrentSecondsRemaining
//		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
//		float                                              ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
float UWBP_Daily_Challenge_Timer_C::GetCurrentSecondsRemaining()
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(61546);

	UWBP_Daily_Challenge_Timer_C_GetCurrentSecondsRemaining_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_Daily_Challenge_Timer.WBP_Daily_Challenge_Timer_C.CheckForNewChallenge
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
void UWBP_Daily_Challenge_Timer_C::CheckForNewChallenge()
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(61545);

	UWBP_Daily_Challenge_Timer_C_CheckForNewChallenge_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_Daily_Challenge_Timer.WBP_Daily_Challenge_Timer_C.UpdateContractTimer
//		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
void UWBP_Daily_Challenge_Timer_C::UpdateContractTimer()
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(61544);

	UWBP_Daily_Challenge_Timer_C_UpdateContractTimer_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_Daily_Challenge_Timer.WBP_Daily_Challenge_Timer_C.SetRemainingTime
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
void UWBP_Daily_Challenge_Timer_C::SetRemainingTime()
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(61543);

	UWBP_Daily_Challenge_Timer_C_SetRemainingTime_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_Daily_Challenge_Timer.WBP_Daily_Challenge_Timer_C.Tick
//		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
//		struct FGeometry                                   MyGeometry                                                 (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
//		float                                              InDeltaTime                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWBP_Daily_Challenge_Timer_C::Tick(const struct FGeometry& MyGeometry, float InDeltaTime)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(61542);

	UWBP_Daily_Challenge_Timer_C_Tick_Params params {};
	params.MyGeometry = MyGeometry;
	params.InDeltaTime = InDeltaTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_Daily_Challenge_Timer.WBP_Daily_Challenge_Timer_C.InitializeWidget
//		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
//		class APUMG_HUD*                                   HUD                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWBP_Daily_Challenge_Timer_C::InitializeWidget(class APUMG_HUD* HUD)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(61541);

	UWBP_Daily_Challenge_Timer_C_InitializeWidget_Params params {};
	params.HUD = HUD;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_Daily_Challenge_Timer.WBP_Daily_Challenge_Timer_C.ExecuteUbergraph_WBP_Daily_Challenge_Timer
//		Flags  -> (Final, HasDefaults)
// Parameters:
//		int                                                EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWBP_Daily_Challenge_Timer_C::ExecuteUbergraph_WBP_Daily_Challenge_Timer(int EntryPoint)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(61540);

	UWBP_Daily_Challenge_Timer_C_ExecuteUbergraph_WBP_Daily_Challenge_Timer_Params params {};
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
