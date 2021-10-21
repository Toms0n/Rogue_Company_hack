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
//		Name   -> Function WBP_PlayerIdentity_Full.WBP_PlayerIdentity_Full_C.Populate Lobby Player
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
//		class UKSPlayerInfo*                               KS_Player_Info                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWBP_PlayerIdentity_Full_C::Populate_Lobby_Player(class UKSPlayerInfo* KS_Player_Info)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(71750);

	UWBP_PlayerIdentity_Full_C_Populate_Lobby_Player_Params params {};
	params.KS_Player_Info = KS_Player_Info;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_PlayerIdentity_Full.WBP_PlayerIdentity_Full_C.Update Title
//		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
//		bool                                               Use_Game_State_Data                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UWBP_PlayerIdentity_Full_C::Update_Title(bool Use_Game_State_Data)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(71749);

	UWBP_PlayerIdentity_Full_C_Update_Title_Params params {};
	params.Use_Game_State_Data = Use_Game_State_Data;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_PlayerIdentity_Full.WBP_PlayerIdentity_Full_C.Set From Player Info
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
//		class UKSPlayerInfo*                               KS_Player_Info                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		bool                                               Use_Game_State_Data                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UWBP_PlayerIdentity_Full_C::Set_From_Player_Info(class UKSPlayerInfo* KS_Player_Info, bool Use_Game_State_Data)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(71748);

	UWBP_PlayerIdentity_Full_C_Set_From_Player_Info_Params params {};
	params.KS_Player_Info = KS_Player_Info;
	params.Use_Game_State_Data = Use_Game_State_Data;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_PlayerIdentity_Full.WBP_PlayerIdentity_Full_C.Update Border
//		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
//		bool                                               Use_Game_State_Data                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UWBP_PlayerIdentity_Full_C::Update_Border(bool Use_Game_State_Data)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(71747);

	UWBP_PlayerIdentity_Full_C_Update_Border_Params params {};
	params.Use_Game_State_Data = Use_Game_State_Data;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_PlayerIdentity_Full.WBP_PlayerIdentity_Full_C.Update Banner
//		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
//		bool                                               Use_Game_State_Data                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UWBP_PlayerIdentity_Full_C::Update_Banner(bool Use_Game_State_Data)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(71746);

	UWBP_PlayerIdentity_Full_C_Update_Banner_Params params {};
	params.Use_Game_State_Data = Use_Game_State_Data;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_PlayerIdentity_Full.WBP_PlayerIdentity_Full_C.Update Avatar
//		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
//		bool                                               Use_Game_State_Data                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UWBP_PlayerIdentity_Full_C::Update_Avatar(bool Use_Game_State_Data)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(71745);

	UWBP_PlayerIdentity_Full_C_Update_Avatar_Params params {};
	params.Use_Game_State_Data = Use_Game_State_Data;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_PlayerIdentity_Full.WBP_PlayerIdentity_Full_C.Update Level
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
void UWBP_PlayerIdentity_Full_C::Update_Level()
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(71744);

	UWBP_PlayerIdentity_Full_C_Update_Level_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_PlayerIdentity_Full.WBP_PlayerIdentity_Full_C.Update Current Name
//		Flags  -> (Private, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
void UWBP_PlayerIdentity_Full_C::Update_Current_Name()
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(71743);

	UWBP_PlayerIdentity_Full_C_Update_Current_Name_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_PlayerIdentity_Full.WBP_PlayerIdentity_Full_C.Populate Game Player
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
//		class AKSPlayerState*                              KSPlayerState                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWBP_PlayerIdentity_Full_C::Populate_Game_Player(class AKSPlayerState* KSPlayerState)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(71742);

	UWBP_PlayerIdentity_Full_C_Populate_Game_Player_Params params {};
	params.KSPlayerState = KSPlayerState;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_PlayerIdentity_Full.WBP_PlayerIdentity_Full_C.Apply Layout Type
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
//		TEnumAsByte<EPlayerIdentityLayoutType_EPlayerIdentityLayoutType> Layout_Type                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWBP_PlayerIdentity_Full_C::Apply_Layout_Type(TEnumAsByte<EPlayerIdentityLayoutType_EPlayerIdentityLayoutType> Layout_Type)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(71741);

	UWBP_PlayerIdentity_Full_C_Apply_Layout_Type_Params params {};
	params.Layout_Type = Layout_Type;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_PlayerIdentity_Full.WBP_PlayerIdentity_Full_C.SetInitialView
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
void UWBP_PlayerIdentity_Full_C::SetInitialView()
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(71740);

	UWBP_PlayerIdentity_Full_C_SetInitialView_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_PlayerIdentity_Full.WBP_PlayerIdentity_Full_C.PreConstruct
//		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
//		bool                                               IsDesignTime                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UWBP_PlayerIdentity_Full_C::PreConstruct(bool IsDesignTime)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(71739);

	UWBP_PlayerIdentity_Full_C_PreConstruct_Params params {};
	params.IsDesignTime = IsDesignTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_PlayerIdentity_Full.WBP_PlayerIdentity_Full_C.Construct
//		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
void UWBP_PlayerIdentity_Full_C::Construct()
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(71738);

	UWBP_PlayerIdentity_Full_C_Construct_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_PlayerIdentity_Full.WBP_PlayerIdentity_Full_C.ExecuteUbergraph_WBP_PlayerIdentity_Full
//		Flags  -> (Final)
// Parameters:
//		int                                                EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWBP_PlayerIdentity_Full_C::ExecuteUbergraph_WBP_PlayerIdentity_Full(int EntryPoint)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(71737);

	UWBP_PlayerIdentity_Full_C_ExecuteUbergraph_WBP_PlayerIdentity_Full_Params params {};
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
