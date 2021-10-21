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
//		Offset -> 0x02C89300
//		Name   -> Function EngineSettings.GameMapsSettings.SetSkipAssigningGamepadToPlayer1
//		Flags  -> (Final, Native, Public, BlueprintCallable)
// Parameters:
//		bool                                               bSkipFirstPlayer                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UGameMapsSettings::SetSkipAssigningGamepadToPlayer1(bool bSkipFirstPlayer)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(18582);

	UGameMapsSettings_SetSkipAssigningGamepadToPlayer1_Params params {};
	params.bSkipFirstPlayer = bSkipFirstPlayer;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x02C892D0
//		Name   -> Function EngineSettings.GameMapsSettings.GetSkipAssigningGamepadToPlayer1
//		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
//		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UGameMapsSettings::GetSkipAssigningGamepadToPlayer1()
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(18581);

	UGameMapsSettings_GetSkipAssigningGamepadToPlayer1_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x02C892A0
//		Name   -> Function EngineSettings.GameMapsSettings.GetGameMapsSettings
//		Flags  -> (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
//		class UGameMapsSettings*                           ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class UGameMapsSettings* UGameMapsSettings::STATIC_GetGameMapsSettings()
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(18580);

	UGameMapsSettings_GetGameMapsSettings_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
