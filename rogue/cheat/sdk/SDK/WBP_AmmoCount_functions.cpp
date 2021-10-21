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
//		Name   -> Function WBP_AmmoCount.WBP_AmmoCount_C.Construct
//		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
void UWBP_AmmoCount_C::Construct()
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(27425);

	UWBP_AmmoCount_C_Construct_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_AmmoCount.WBP_AmmoCount_C.SetAmmoActive
//		Flags  -> (BlueprintCallable, BlueprintEvent)
// Parameters:
//		bool                                               IsActive                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UWBP_AmmoCount_C::SetAmmoActive(bool IsActive)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(27424);

	UWBP_AmmoCount_C_SetAmmoActive_Params params {};
	params.IsActive = IsActive;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_AmmoCount.WBP_AmmoCount_C.SetAmmoColor
//		Flags  -> (BlueprintCallable, BlueprintEvent)
// Parameters:
//		bool                                               IsActive                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UWBP_AmmoCount_C::SetAmmoColor(bool IsActive)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(27423);

	UWBP_AmmoCount_C_SetAmmoColor_Params params {};
	params.IsActive = IsActive;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_AmmoCount.WBP_AmmoCount_C.ExecuteUbergraph_WBP_AmmoCount
//		Flags  -> (Final)
// Parameters:
//		int                                                EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWBP_AmmoCount_C::ExecuteUbergraph_WBP_AmmoCount(int EntryPoint)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(27422);

	UWBP_AmmoCount_C_ExecuteUbergraph_WBP_AmmoCount_Params params {};
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
