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
//		Name   -> Function WBP_ThrobberShield.WBP_ThrobberShield_C.ResetThrobberAnim
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
void UWBP_ThrobberShield_C::ResetThrobberAnim()
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(232630);

	UWBP_ThrobberShield_C_ResetThrobberAnim_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_ThrobberShield.WBP_ThrobberShield_C.PlayThrobberAnim
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
void UWBP_ThrobberShield_C::PlayThrobberAnim()
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(232629);

	UWBP_ThrobberShield_C_PlayThrobberAnim_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_ThrobberShield.WBP_ThrobberShield_C.PreConstruct
//		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
//		bool                                               IsDesignTime                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UWBP_ThrobberShield_C::PreConstruct(bool IsDesignTime)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(232628);

	UWBP_ThrobberShield_C_PreConstruct_Params params {};
	params.IsDesignTime = IsDesignTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_ThrobberShield.WBP_ThrobberShield_C.Construct
//		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
void UWBP_ThrobberShield_C::Construct()
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(71512);

	UWBP_ThrobberShield_C_Construct_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_ThrobberShield.WBP_ThrobberShield_C.ExecuteUbergraph_WBP_ThrobberShield
//		Flags  -> (Final, HasDefaults)
// Parameters:
//		int                                                EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWBP_ThrobberShield_C::ExecuteUbergraph_WBP_ThrobberShield(int EntryPoint)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(71511);

	UWBP_ThrobberShield_C_ExecuteUbergraph_WBP_ThrobberShield_Params params {};
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
