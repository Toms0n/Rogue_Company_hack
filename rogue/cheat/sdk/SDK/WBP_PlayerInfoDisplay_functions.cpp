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
//		Name   -> Function WBP_PlayerInfoDisplay.WBP_PlayerInfoDisplay_C.UpdateVoiceDisplay
//		Flags  -> (Protected, BlueprintCallable, BlueprintEvent)
void UWBP_PlayerInfoDisplay_C::UpdateVoiceDisplay()
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(86912);

	UWBP_PlayerInfoDisplay_C_UpdateVoiceDisplay_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_PlayerInfoDisplay.WBP_PlayerInfoDisplay_C.Get Status Message
//		Flags  -> (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
//		struct FText                                       StatusMessage                                              (Parm, OutParm)
void UWBP_PlayerInfoDisplay_C::Get_Status_Message(struct FText* StatusMessage)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(86911);

	UWBP_PlayerInfoDisplay_C_Get_Status_Message_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (StatusMessage != nullptr)
		*StatusMessage = params.StatusMessage;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_PlayerInfoDisplay.WBP_PlayerInfoDisplay_C.SetPlayerNameFont
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
//		struct FSlateFontInfo                              Font                                                       (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
void UWBP_PlayerInfoDisplay_C::SetPlayerNameFont(const struct FSlateFontInfo& Font)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(86910);

	UWBP_PlayerInfoDisplay_C_SetPlayerNameFont_Params params {};
	params.Font = Font;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_PlayerInfoDisplay.WBP_PlayerInfoDisplay_C.SetPlayerNameColor
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
//		struct FSlateColor                                 Color                                                      (BlueprintVisible, BlueprintReadOnly, Parm)
void UWBP_PlayerInfoDisplay_C::SetPlayerNameColor(const struct FSlateColor& Color)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(86909);

	UWBP_PlayerInfoDisplay_C_SetPlayerNameColor_Params params {};
	params.Color = Color;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_PlayerInfoDisplay.WBP_PlayerInfoDisplay_C.TogglePartyLeaderIcon
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
//		bool                                               ShowLeaderIcon                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UWBP_PlayerInfoDisplay_C::TogglePartyLeaderIcon(bool ShowLeaderIcon)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(86908);

	UWBP_PlayerInfoDisplay_C_TogglePartyLeaderIcon_Params params {};
	params.ShowLeaderIcon = ShowLeaderIcon;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_PlayerInfoDisplay.WBP_PlayerInfoDisplay_C.SetVoiceActive
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
//		bool                                               IsActive                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UWBP_PlayerInfoDisplay_C::SetVoiceActive(bool IsActive)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(86907);

	UWBP_PlayerInfoDisplay_C_SetVoiceActive_Params params {};
	params.IsActive = IsActive;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_PlayerInfoDisplay.WBP_PlayerInfoDisplay_C.SetVoiceTalking
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
//		bool                                               Talking                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UWBP_PlayerInfoDisplay_C::SetVoiceTalking(bool Talking)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(86906);

	UWBP_PlayerInfoDisplay_C_SetVoiceTalking_Params params {};
	params.Talking = Talking;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_PlayerInfoDisplay.WBP_PlayerInfoDisplay_C.SetVoiceMuted
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
//		bool                                               Muted                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UWBP_PlayerInfoDisplay_C::SetVoiceMuted(bool Muted)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(86905);

	UWBP_PlayerInfoDisplay_C_SetVoiceMuted_Params params {};
	params.Muted = Muted;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_PlayerInfoDisplay.WBP_PlayerInfoDisplay_C.GetStatusColor
//		Flags  -> (Protected, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
//		struct FSlateColor                                 StatusColor                                                (Parm, OutParm)
void UWBP_PlayerInfoDisplay_C::GetStatusColor(struct FSlateColor* StatusColor)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(86904);

	UWBP_PlayerInfoDisplay_C_GetStatusColor_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (StatusColor != nullptr)
		*StatusColor = params.StatusColor;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_PlayerInfoDisplay.WBP_PlayerInfoDisplay_C.UpdateStatus
//		Flags  -> (Protected, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
void UWBP_PlayerInfoDisplay_C::UpdateStatus()
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(86903);

	UWBP_PlayerInfoDisplay_C_UpdateStatus_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_PlayerInfoDisplay.WBP_PlayerInfoDisplay_C.UpdatePlayerInfoIcons
//		Flags  -> (Protected, BlueprintCallable, BlueprintEvent)
// Parameters:
void UWBP_PlayerInfoDisplay_C::UpdatePlayerInfoIcons()
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(86902);

	UWBP_PlayerInfoDisplay_C_UpdatePlayerInfoIcons_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_PlayerInfoDisplay.WBP_PlayerInfoDisplay_C.UpdateAvatarDisplay
//		Flags  -> (Protected, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
void UWBP_PlayerInfoDisplay_C::UpdateAvatarDisplay()
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(86901);

	UWBP_PlayerInfoDisplay_C_UpdateAvatarDisplay_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_PlayerInfoDisplay.WBP_PlayerInfoDisplay_C.SetPlayerInfo
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
//		class UKSPlayerInfo*                               playerinfo                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWBP_PlayerInfoDisplay_C::SetPlayerInfo(class UKSPlayerInfo* playerinfo)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(86900);

	UWBP_PlayerInfoDisplay_C_SetPlayerInfo_Params params {};
	params.playerinfo = playerinfo;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_PlayerInfoDisplay.WBP_PlayerInfoDisplay_C.SetVoiceState
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
//		bool                                               ShouldShow                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
//		bool                                               IsTalking                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
//		bool                                               IsMuted                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UWBP_PlayerInfoDisplay_C::SetVoiceState(bool ShouldShow, bool IsTalking, bool IsMuted)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(86899);

	UWBP_PlayerInfoDisplay_C_SetVoiceState_Params params {};
	params.ShouldShow = ShouldShow;
	params.IsTalking = IsTalking;
	params.IsMuted = IsMuted;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_PlayerInfoDisplay.WBP_PlayerInfoDisplay_C.ToggleStatusDisplay
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
//		bool                                               ShowStatus                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UWBP_PlayerInfoDisplay_C::ToggleStatusDisplay(bool ShowStatus)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(86898);

	UWBP_PlayerInfoDisplay_C_ToggleStatusDisplay_Params params {};
	params.ShowStatus = ShowStatus;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_PlayerInfoDisplay.WBP_PlayerInfoDisplay_C.PreConstruct
//		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
//		bool                                               IsDesignTime                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UWBP_PlayerInfoDisplay_C::PreConstruct(bool IsDesignTime)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(86897);

	UWBP_PlayerInfoDisplay_C_PreConstruct_Params params {};
	params.IsDesignTime = IsDesignTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_PlayerInfoDisplay.WBP_PlayerInfoDisplay_C.HandleFilteredNameUpdate
//		Flags  -> (BlueprintCallable, BlueprintEvent)
void UWBP_PlayerInfoDisplay_C::HandleFilteredNameUpdate()
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(86896);

	UWBP_PlayerInfoDisplay_C_HandleFilteredNameUpdate_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_PlayerInfoDisplay.WBP_PlayerInfoDisplay_C.OnInitialized
//		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
void UWBP_PlayerInfoDisplay_C::OnInitialized()
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(86895);

	UWBP_PlayerInfoDisplay_C_OnInitialized_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_PlayerInfoDisplay.WBP_PlayerInfoDisplay_C.ExecuteUbergraph_WBP_PlayerInfoDisplay
//		Flags  -> (Final, HasDefaults)
// Parameters:
//		int                                                EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWBP_PlayerInfoDisplay_C::ExecuteUbergraph_WBP_PlayerInfoDisplay(int EntryPoint)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(86894);

	UWBP_PlayerInfoDisplay_C_ExecuteUbergraph_WBP_PlayerInfoDisplay_Params params {};
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
