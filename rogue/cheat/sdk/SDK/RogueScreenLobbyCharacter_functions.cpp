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
//		Name   -> Function RogueScreenLobbyCharacter.RogueScreenLobbyCharacter_C.ReceiveBeginPlay
//		Flags  -> (Event, Protected, BlueprintEvent)
void ARogueScreenLobbyCharacter_C::ReceiveBeginPlay()
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(54600);

	ARogueScreenLobbyCharacter_C_ReceiveBeginPlay_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function RogueScreenLobbyCharacter.RogueScreenLobbyCharacter_C.ExecuteUbergraph_RogueScreenLobbyCharacter
//		Flags  -> (Final)
// Parameters:
//		int                                                EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ARogueScreenLobbyCharacter_C::ExecuteUbergraph_RogueScreenLobbyCharacter(int EntryPoint)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(54599);

	ARogueScreenLobbyCharacter_C_ExecuteUbergraph_RogueScreenLobbyCharacter_Params params {};
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
