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
//		Name   -> Function WBP_TextChat_ChatEntry.WBP_TextChat_ChatEntry_C.HandleInitialSpawn
//		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
void UWBP_TextChat_ChatEntry_C::HandleInitialSpawn()
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(55581);

	UWBP_TextChat_ChatEntry_C_HandleInitialSpawn_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_TextChat_ChatEntry.WBP_TextChat_ChatEntry_C.InitialShowFinished
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
void UWBP_TextChat_ChatEntry_C::InitialShowFinished()
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(55580);

	UWBP_TextChat_ChatEntry_C_InitialShowFinished_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_TextChat_ChatEntry.WBP_TextChat_ChatEntry_C.SetWindowCollapsed
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
//		bool                                               Collapsed                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UWBP_TextChat_ChatEntry_C::SetWindowCollapsed(bool Collapsed)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(55579);

	UWBP_TextChat_ChatEntry_C_SetWindowCollapsed_Params params {};
	params.Collapsed = Collapsed;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_TextChat_ChatEntry.WBP_TextChat_ChatEntry_C.SetTextWithoutPlayer
//		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
//		struct FText                                       Text                                                       (BlueprintVisible, BlueprintReadOnly, Parm)
//		PlatformUMG_EPUMG_ChatChannel                      Channel                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWBP_TextChat_ChatEntry_C::SetTextWithoutPlayer(const struct FText& Text, PlatformUMG_EPUMG_ChatChannel Channel)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(55578);

	UWBP_TextChat_ChatEntry_C_SetTextWithoutPlayer_Params params {};
	params.Text = Text;
	params.Channel = Channel;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_TextChat_ChatEntry.WBP_TextChat_ChatEntry_C.SetTextWithPlayer
//		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
//		struct FText                                       Text                                                       (BlueprintVisible, BlueprintReadOnly, Parm)
//		class UPUMG_PlayerInfo*                            Sender                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		class UPUMG_PlayerInfo*                            Recipient                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		bool                                               IsOwnMessage                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
//		PlatformUMG_EPUMG_ChatChannel                      Channel                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWBP_TextChat_ChatEntry_C::SetTextWithPlayer(const struct FText& Text, class UPUMG_PlayerInfo* Sender, class UPUMG_PlayerInfo* Recipient, bool IsOwnMessage, PlatformUMG_EPUMG_ChatChannel Channel)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(55577);

	UWBP_TextChat_ChatEntry_C_SetTextWithPlayer_Params params {};
	params.Text = Text;
	params.Sender = Sender;
	params.Recipient = Recipient;
	params.IsOwnMessage = IsOwnMessage;
	params.Channel = Channel;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_TextChat_ChatEntry.WBP_TextChat_ChatEntry_C.Construct
//		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
void UWBP_TextChat_ChatEntry_C::Construct()
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(55576);

	UWBP_TextChat_ChatEntry_C_Construct_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_TextChat_ChatEntry.WBP_TextChat_ChatEntry_C.ExecuteUbergraph_WBP_TextChat_ChatEntry
//		Flags  -> (Final)
// Parameters:
//		int                                                EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWBP_TextChat_ChatEntry_C::ExecuteUbergraph_WBP_TextChat_ChatEntry(int EntryPoint)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(55575);

	UWBP_TextChat_ChatEntry_C_ExecuteUbergraph_WBP_TextChat_ChatEntry_Params params {};
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
