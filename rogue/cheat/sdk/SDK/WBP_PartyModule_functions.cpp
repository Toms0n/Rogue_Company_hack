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
//		Name   -> Function WBP_PartyModule.WBP_PartyModule_C.GetPrimaryFocus
//		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
//		class UWBP_Social_Snapshot_C*                      Primary_Focus                                              (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWBP_PartyModule_C::GetPrimaryFocus(class UWBP_Social_Snapshot_C** Primary_Focus)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(218650);

	UWBP_PartyModule_C_GetPrimaryFocus_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Primary_Focus != nullptr)
		*Primary_Focus = params.Primary_Focus;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_PartyModule.WBP_PartyModule_C.FindPlayerCardByVoiceId
//		Flags  -> (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
//		struct FString                                     VoiceId                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
//		class UWBP_player_card_module_C*                   PlayerCard                                                 (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWBP_PartyModule_C::FindPlayerCardByVoiceId(const struct FString& VoiceId, class UWBP_player_card_module_C** PlayerCard)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(218649);

	UWBP_PartyModule_C_FindPlayerCardByVoiceId_Params params {};
	params.VoiceId = VoiceId;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (PlayerCard != nullptr)
		*PlayerCard = params.PlayerCard;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_PartyModule.WBP_PartyModule_C.Get Navigation Widgets
//		Flags  -> (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
//		TArray<class UPUMG_Widget*>                        Return_Value                                               (Parm, OutParm, ContainsInstancedReference, HasGetValueTypeHash)
void UWBP_PartyModule_C::Get_Navigation_Widgets(TArray<class UPUMG_Widget*>* Return_Value)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(218648);

	UWBP_PartyModule_C_Get_Navigation_Widgets_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Return_Value != nullptr)
		*Return_Value = params.Return_Value;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_PartyModule.WBP_PartyModule_C.Get Other Party Members
//		Flags  -> (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
//		TArray<struct FPUMG_PartyMemberData>               Party_Members                                              (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, HasGetValueTypeHash)
//		TArray<struct FPUMG_PartyMemberData>               Return_Value                                               (Parm, OutParm, HasGetValueTypeHash)
void UWBP_PartyModule_C::Get_Other_Party_Members(TArray<struct FPUMG_PartyMemberData>* Party_Members, TArray<struct FPUMG_PartyMemberData>* Return_Value)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(218647);

	UWBP_PartyModule_C_Get_Other_Party_Members_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Party_Members != nullptr)
		*Party_Members = params.Party_Members;
	if (Return_Value != nullptr)
		*Return_Value = params.Return_Value;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_PartyModule.WBP_PartyModule_C.ApplyPartyData
//		Flags  -> (Event, Protected, HasOutParms, BlueprintEvent)
// Parameters:
//		TArray<struct FPUMG_PartyMemberData>               PartyMembers                                               (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, HasGetValueTypeHash)
void UWBP_PartyModule_C::ApplyPartyData(TArray<struct FPUMG_PartyMemberData> PartyMembers)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(218646);

	UWBP_PartyModule_C_ApplyPartyData_Params params {};
	params.PartyMembers = PartyMembers;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_PartyModule.WBP_PartyModule_C.InitializeWidget
//		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
//		class APUMG_HUD*                                   HUD                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWBP_PartyModule_C::InitializeWidget(class APUMG_HUD* HUD)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(218645);

	UWBP_PartyModule_C_InitializeWidget_Params params {};
	params.HUD = HUD;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_PartyModule.WBP_PartyModule_C.VoiceParticipantAdded
//		Flags  -> (BlueprintCallable, BlueprintEvent)
// Parameters:
//		struct FString                                     AccountId                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
void UWBP_PartyModule_C::VoiceParticipantAdded(const struct FString& AccountId)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(218644);

	UWBP_PartyModule_C_VoiceParticipantAdded_Params params {};
	params.AccountId = AccountId;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_PartyModule.WBP_PartyModule_C.VoiceParticipantRemoved
//		Flags  -> (BlueprintCallable, BlueprintEvent)
// Parameters:
//		struct FString                                     AccountId                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
void UWBP_PartyModule_C::VoiceParticipantRemoved(const struct FString& AccountId)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(218643);

	UWBP_PartyModule_C_VoiceParticipantRemoved_Params params {};
	params.AccountId = AccountId;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_PartyModule.WBP_PartyModule_C.VoiceParticipantUpdated
//		Flags  -> (BlueprintCallable, BlueprintEvent)
// Parameters:
//		struct FString                                     AccountId                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
//		bool                                               IsTalking                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
//		bool                                               IsMuted                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UWBP_PartyModule_C::VoiceParticipantUpdated(const struct FString& AccountId, bool IsTalking, bool IsMuted)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(218642);

	UWBP_PartyModule_C_VoiceParticipantUpdated_Params params {};
	params.AccountId = AccountId;
	params.IsTalking = IsTalking;
	params.IsMuted = IsMuted;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_PartyModule.WBP_PartyModule_C.VoiceStateChange
//		Flags  -> (BlueprintCallable, BlueprintEvent)
// Parameters:
//		KillstreakUINew_EKSVoiceActivityAudioState         State                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWBP_PartyModule_C::VoiceStateChange(KillstreakUINew_EKSVoiceActivityAudioState State)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(218641);

	UWBP_PartyModule_C_VoiceStateChange_Params params {};
	params.State = State;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_PartyModule.WBP_PartyModule_C.Handle Player Card Clicked
//		Flags  -> (BlueprintCallable, BlueprintEvent)
// Parameters:
//		class UWBP_player_card_module_C*                   Selected_Player_Card                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWBP_PartyModule_C::Handle_Player_Card_Clicked(class UWBP_player_card_module_C* Selected_Player_Card)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(218640);

	UWBP_PartyModule_C_Handle_Player_Card_Clicked_Params params {};
	params.Selected_Player_Card = Selected_Player_Card;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_PartyModule.WBP_PartyModule_C.Handle Player Card Back
//		Flags  -> (BlueprintCallable, BlueprintEvent)
void UWBP_PartyModule_C::Handle_Player_Card_Back()
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(218639);

	UWBP_PartyModule_C_Handle_Player_Card_Back_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_PartyModule.WBP_PartyModule_C.HandlePartyLeaveVisibilityChange
//		Flags  -> (BlueprintCallable, BlueprintEvent)
// Parameters:
//		bool                                               Visible                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UWBP_PartyModule_C::HandlePartyLeaveVisibilityChange(bool Visible)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(218638);

	UWBP_PartyModule_C_HandlePartyLeaveVisibilityChange_Params params {};
	params.Visible = Visible;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_PartyModule.WBP_PartyModule_C.ExecuteUbergraph_WBP_PartyModule
//		Flags  -> (Final, HasDefaults)
// Parameters:
//		int                                                EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWBP_PartyModule_C::ExecuteUbergraph_WBP_PartyModule(int EntryPoint)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(218637);

	UWBP_PartyModule_C_ExecuteUbergraph_WBP_PartyModule_Params params {};
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_PartyModule.WBP_PartyModule_C.OnPartyLeaveVisibilityChange__DelegateSignature
//		Flags  -> (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
//		bool                                               Visible                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UWBP_PartyModule_C::OnPartyLeaveVisibilityChange__DelegateSignature(bool Visible)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(82956);

	UWBP_PartyModule_C_OnPartyLeaveVisibilityChange__DelegateSignature_Params params {};
	params.Visible = Visible;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_PartyModule.WBP_PartyModule_C.OnPlayerCardBackButton__DelegateSignature
//		Flags  -> (Public, Delegate, BlueprintCallable, BlueprintEvent)
void UWBP_PartyModule_C::OnPlayerCardBackButton__DelegateSignature()
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(82955);

	UWBP_PartyModule_C_OnPlayerCardBackButton__DelegateSignature_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_PartyModule.WBP_PartyModule_C.OnPlayerCardSelected__DelegateSignature
//		Flags  -> (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
//		class UWBP_player_card_module_C*                   Selected_Player_Card                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWBP_PartyModule_C::OnPlayerCardSelected__DelegateSignature(class UWBP_player_card_module_C* Selected_Player_Card)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(82954);

	UWBP_PartyModule_C_OnPlayerCardSelected__DelegateSignature_Params params {};
	params.Selected_Player_Card = Selected_Player_Card;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
