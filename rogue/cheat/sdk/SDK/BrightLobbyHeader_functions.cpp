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
//		Name   -> Function BrightLobbyHeader.BrightLobbyHeader_C.StartShowSequence
//		Flags  -> (Event, Public, BlueprintEvent)
// Parameters:
//		struct FName                                       FromRoute                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		struct FName                                       ToRoute                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UBrightLobbyHeader_C::StartShowSequence(const struct FName& FromRoute, const struct FName& ToRoute)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(55421);

	UBrightLobbyHeader_C_StartShowSequence_Params params {};
	params.FromRoute = FromRoute;
	params.ToRoute = ToRoute;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function BrightLobbyHeader.BrightLobbyHeader_C.HandleLobbyStartMenuInputAction
//		Flags  -> (BlueprintCallable, BlueprintEvent)
void UBrightLobbyHeader_C::HandleLobbyStartMenuInputAction()
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(55420);

	UBrightLobbyHeader_C_HandleLobbyStartMenuInputAction_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function BrightLobbyHeader.BrightLobbyHeader_C.StartHideSequence
//		Flags  -> (Event, Public, BlueprintEvent)
// Parameters:
//		struct FName                                       FromRoute                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		struct FName                                       ToRoute                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UBrightLobbyHeader_C::StartHideSequence(const struct FName& FromRoute, const struct FName& ToRoute)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(55419);

	UBrightLobbyHeader_C_StartHideSequence_Params params {};
	params.FromRoute = FromRoute;
	params.ToRoute = ToRoute;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function BrightLobbyHeader.BrightLobbyHeader_C.ExecuteUbergraph_BrightLobbyHeader
//		Flags  -> (Final, HasDefaults)
// Parameters:
//		int                                                EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UBrightLobbyHeader_C::ExecuteUbergraph_BrightLobbyHeader(int EntryPoint)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(55418);

	UBrightLobbyHeader_C_ExecuteUbergraph_BrightLobbyHeader_Params params {};
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
