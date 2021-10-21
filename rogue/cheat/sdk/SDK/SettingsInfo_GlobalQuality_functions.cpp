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
//		Name   -> Function SettingsInfo_GlobalQuality.SettingsInfo_GlobalQuality_C.InitializeValue
//		Flags  -> (Event, Protected, BlueprintEvent)
void USettingsInfo_GlobalQuality_C::InitializeValue()
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(44414);

	USettingsInfo_GlobalQuality_C_InitializeValue_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function SettingsInfo_GlobalQuality.SettingsInfo_GlobalQuality_C.ExecuteUbergraph_SettingsInfo_GlobalQuality
//		Flags  -> (Final, HasDefaults)
// Parameters:
//		int                                                EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void USettingsInfo_GlobalQuality_C::ExecuteUbergraph_SettingsInfo_GlobalQuality(int EntryPoint)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(44413);

	USettingsInfo_GlobalQuality_C_ExecuteUbergraph_SettingsInfo_GlobalQuality_Params params {};
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
