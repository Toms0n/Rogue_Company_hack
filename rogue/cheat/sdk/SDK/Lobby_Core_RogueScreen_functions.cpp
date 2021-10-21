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
//		Name   -> Function Lobby_Core_RogueScreen.Lobby_Core_RogueScreen_C.On Rogue Preview Fully Loaded
//		Flags  -> (HasOutParms, BlueprintCallable, BlueprintEvent)
void ALobby_Core_RogueScreen_C::On_Rogue_Preview_Fully_Loaded()
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(245113);

	ALobby_Core_RogueScreen_C_On_Rogue_Preview_Fully_Loaded_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function Lobby_Core_RogueScreen.Lobby_Core_RogueScreen_C.Time Dilation for  Posed Rogues
//		Flags  -> (BlueprintCallable, BlueprintEvent)
void ALobby_Core_RogueScreen_C::Time_Dilation_for__Posed_Rogues()
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(245112);

	ALobby_Core_RogueScreen_C_Time_Dilation_for__Posed_Rogues_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function Lobby_Core_RogueScreen.Lobby_Core_RogueScreen_C.ReceiveTick
//		Flags  -> (Event, Public, BlueprintEvent)
// Parameters:
//		float                                              DeltaSeconds                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ALobby_Core_RogueScreen_C::ReceiveTick(float DeltaSeconds)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(245111);

	ALobby_Core_RogueScreen_C_ReceiveTick_Params params {};
	params.DeltaSeconds = DeltaSeconds;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function Lobby_Core_RogueScreen.Lobby_Core_RogueScreen_C.ReceiveBeginPlay
//		Flags  -> (Event, Protected, BlueprintEvent)
void ALobby_Core_RogueScreen_C::ReceiveBeginPlay()
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(245110);

	ALobby_Core_RogueScreen_C_ReceiveBeginPlay_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function Lobby_Core_RogueScreen.Lobby_Core_RogueScreen_C.On Player Rogue Preview Changed
//		Flags  -> (BlueprintCallable, BlueprintEvent)
// Parameters:
//		class AKSJobSelectPreviewActor*                    PreviewActor                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		Killstreak_EKSJobSelectPreviewLoadState            PreviousState                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ALobby_Core_RogueScreen_C::On_Player_Rogue_Preview_Changed(class AKSJobSelectPreviewActor* PreviewActor, Killstreak_EKSJobSelectPreviewLoadState PreviousState)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(245109);

	ALobby_Core_RogueScreen_C_On_Player_Rogue_Preview_Changed_Params params {};
	params.PreviewActor = PreviewActor;
	params.PreviousState = PreviousState;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function Lobby_Core_RogueScreen.Lobby_Core_RogueScreen_C.ExecuteUbergraph_Lobby_Core_RogueScreen
//		Flags  -> (Final, HasDefaults)
// Parameters:
//		int                                                EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ALobby_Core_RogueScreen_C::ExecuteUbergraph_Lobby_Core_RogueScreen(int EntryPoint)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(245108);

	ALobby_Core_RogueScreen_C_ExecuteUbergraph_Lobby_Core_RogueScreen_Params params {};
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
