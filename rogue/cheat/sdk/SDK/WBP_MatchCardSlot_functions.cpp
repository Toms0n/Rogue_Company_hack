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
//		Name   -> Function WBP_MatchCardSlot.WBP_MatchCardSlot_C.PopulateWithPlayerStats
//		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
void UWBP_MatchCardSlot_C::PopulateWithPlayerStats()
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(71354);

	UWBP_MatchCardSlot_C_PopulateWithPlayerStats_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_MatchCardSlot.WBP_MatchCardSlot_C.Construct
//		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
void UWBP_MatchCardSlot_C::Construct()
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(71353);

	UWBP_MatchCardSlot_C_Construct_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_MatchCardSlot.WBP_MatchCardSlot_C.AnimateIn
//		Flags  -> (BlueprintCallable, BlueprintEvent)
// Parameters:
//		float                                              Delay                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWBP_MatchCardSlot_C::AnimateIn(float Delay)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(71352);

	UWBP_MatchCardSlot_C_AnimateIn_Params params {};
	params.Delay = Delay;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_MatchCardSlot.WBP_MatchCardSlot_C.PreConstruct
//		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
//		bool                                               IsDesignTime                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UWBP_MatchCardSlot_C::PreConstruct(bool IsDesignTime)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(71351);

	UWBP_MatchCardSlot_C_PreConstruct_Params params {};
	params.IsDesignTime = IsDesignTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_MatchCardSlot.WBP_MatchCardSlot_C.ExecuteUbergraph_WBP_MatchCardSlot
//		Flags  -> (Final)
// Parameters:
//		int                                                EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWBP_MatchCardSlot_C::ExecuteUbergraph_WBP_MatchCardSlot(int EntryPoint)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(71350);

	UWBP_MatchCardSlot_C_ExecuteUbergraph_WBP_MatchCardSlot_Params params {};
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_MatchCardSlot.WBP_MatchCardSlot_C.StartAnimation__DelegateSignature
//		Flags  -> (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
//		int                                                CurrencyEarned                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWBP_MatchCardSlot_C::StartAnimation__DelegateSignature(int CurrencyEarned)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(71349);

	UWBP_MatchCardSlot_C_StartAnimation__DelegateSignature_Params params {};
	params.CurrencyEarned = CurrencyEarned;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
