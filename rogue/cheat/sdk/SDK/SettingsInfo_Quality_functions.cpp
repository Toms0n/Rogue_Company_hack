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
//		Name   -> Function SettingsInfo_Quality.SettingsInfo_Quality_C.InitializeValue
//		Flags  -> (Event, Protected, BlueprintEvent)
void USettingsInfo_Quality_C::InitializeValue()
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(43721);

	USettingsInfo_Quality_C_InitializeValue_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function SettingsInfo_Quality.SettingsInfo_Quality_C.ExecuteUbergraph_SettingsInfo_Quality
//		Flags  -> (Final, HasDefaults)
// Parameters:
//		int                                                EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void USettingsInfo_Quality_C::ExecuteUbergraph_SettingsInfo_Quality(int EntryPoint)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(43720);

	USettingsInfo_Quality_C_ExecuteUbergraph_SettingsInfo_Quality_Params params {};
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
