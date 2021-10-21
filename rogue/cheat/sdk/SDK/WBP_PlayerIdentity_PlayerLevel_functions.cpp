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
//		Name   -> Function WBP_PlayerIdentity_PlayerLevel.WBP_PlayerIdentity_PlayerLevel_C.SetThrobber
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
void UWBP_PlayerIdentity_PlayerLevel_C::SetThrobber()
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(55333);

	UWBP_PlayerIdentity_PlayerLevel_C_SetThrobber_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_PlayerIdentity_PlayerLevel.WBP_PlayerIdentity_PlayerLevel_C.SetPlayerLevelExplicit
//		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
//		int                                                NewLevel                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWBP_PlayerIdentity_PlayerLevel_C::SetPlayerLevelExplicit(int NewLevel)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(55332);

	UWBP_PlayerIdentity_PlayerLevel_C_SetPlayerLevelExplicit_Params params {};
	params.NewLevel = NewLevel;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
