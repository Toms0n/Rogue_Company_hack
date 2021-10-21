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
//		Name   -> Function WBP_SettingsCarousel_Light_Indicator.WBP_SettingsCarousel_Light_Indicator_C.Light Up
//		Flags  -> (BlueprintCallable, BlueprintEvent)
void UWBP_SettingsCarousel_Light_Indicator_C::Light_Up()
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(43730);

	UWBP_SettingsCarousel_Light_Indicator_C_Light_Up_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_SettingsCarousel_Light_Indicator.WBP_SettingsCarousel_Light_Indicator_C.Dim Light
//		Flags  -> (BlueprintCallable, BlueprintEvent)
void UWBP_SettingsCarousel_Light_Indicator_C::Dim_Light()
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(43729);

	UWBP_SettingsCarousel_Light_Indicator_C_Dim_Light_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_SettingsCarousel_Light_Indicator.WBP_SettingsCarousel_Light_Indicator_C.Toggle Lit Up
//		Flags  -> (BlueprintCallable, BlueprintEvent)
void UWBP_SettingsCarousel_Light_Indicator_C::Toggle_Lit_Up()
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(43728);

	UWBP_SettingsCarousel_Light_Indicator_C_Toggle_Lit_Up_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_SettingsCarousel_Light_Indicator.WBP_SettingsCarousel_Light_Indicator_C.ExecuteUbergraph_WBP_SettingsCarousel_Light_Indicator
//		Flags  -> (Final)
// Parameters:
//		int                                                EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWBP_SettingsCarousel_Light_Indicator_C::ExecuteUbergraph_WBP_SettingsCarousel_Light_Indicator(int EntryPoint)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(43727);

	UWBP_SettingsCarousel_Light_Indicator_C_ExecuteUbergraph_WBP_SettingsCarousel_Light_Indicator_Params params {};
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
