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
//		Name   -> Function WBP_RewardsTrackMeter.WBP_RewardsTrackMeter_C.Create Segments
//		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
void UWBP_RewardsTrackMeter_C::Create_Segments()
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(81333);

	UWBP_RewardsTrackMeter_C_Create_Segments_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_RewardsTrackMeter.WBP_RewardsTrackMeter_C.Set From Activity Instance
//		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
//		class UKSActivityInstance*                         Progression                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		int                                                Starting_Tier                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWBP_RewardsTrackMeter_C::Set_From_Activity_Instance(class UKSActivityInstance* Progression, int Starting_Tier)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(81332);

	UWBP_RewardsTrackMeter_C_Set_From_Activity_Instance_Params params {};
	params.Progression = Progression;
	params.Starting_Tier = Starting_Tier;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_RewardsTrackMeter.WBP_RewardsTrackMeter_C.PreConstruct
//		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
//		bool                                               IsDesignTime                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UWBP_RewardsTrackMeter_C::PreConstruct(bool IsDesignTime)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(81331);

	UWBP_RewardsTrackMeter_C_PreConstruct_Params params {};
	params.IsDesignTime = IsDesignTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_RewardsTrackMeter.WBP_RewardsTrackMeter_C.ExecuteUbergraph_WBP_RewardsTrackMeter
//		Flags  -> (Final)
// Parameters:
//		int                                                EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWBP_RewardsTrackMeter_C::ExecuteUbergraph_WBP_RewardsTrackMeter(int EntryPoint)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(81330);

	UWBP_RewardsTrackMeter_C_ExecuteUbergraph_WBP_RewardsTrackMeter_Params params {};
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_RewardsTrackMeter.WBP_RewardsTrackMeter_C.OnLerpUpdate__DelegateSignature
//		Flags  -> (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
//		float                                              CurrentLerpPercantage                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWBP_RewardsTrackMeter_C::OnLerpUpdate__DelegateSignature(float CurrentLerpPercantage)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(81329);

	UWBP_RewardsTrackMeter_C_OnLerpUpdate__DelegateSignature_Params params {};
	params.CurrentLerpPercantage = CurrentLerpPercantage;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_RewardsTrackMeter.WBP_RewardsTrackMeter_C.OnLevelDownEvent__DelegateSignature
//		Flags  -> (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
//		int                                                NewLevel                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWBP_RewardsTrackMeter_C::OnLevelDownEvent__DelegateSignature(int NewLevel)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(81328);

	UWBP_RewardsTrackMeter_C_OnLevelDownEvent__DelegateSignature_Params params {};
	params.NewLevel = NewLevel;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_RewardsTrackMeter.WBP_RewardsTrackMeter_C.OnLevelUpEvent__DelegateSignature
//		Flags  -> (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
//		int                                                NewLevel                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWBP_RewardsTrackMeter_C::OnLevelUpEvent__DelegateSignature(int NewLevel)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(81327);

	UWBP_RewardsTrackMeter_C_OnLevelUpEvent__DelegateSignature_Params params {};
	params.NewLevel = NewLevel;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
