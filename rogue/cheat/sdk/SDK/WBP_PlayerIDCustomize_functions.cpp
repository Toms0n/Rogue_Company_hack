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
//		Name   -> Function WBP_PlayerIDCustomize.WBP_PlayerIDCustomize_C.SavePlayerIdentity
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
void UWBP_PlayerIDCustomize_C::SavePlayerIdentity()
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(86627);

	UWBP_PlayerIDCustomize_C_SavePlayerIdentity_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_PlayerIDCustomize.WBP_PlayerIDCustomize_C.OnPreviousTab
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
void UWBP_PlayerIDCustomize_C::OnPreviousTab()
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(86626);

	UWBP_PlayerIDCustomize_C_OnPreviousTab_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_PlayerIDCustomize.WBP_PlayerIDCustomize_C.OnNextTab
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
void UWBP_PlayerIDCustomize_C::OnNextTab()
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(86625);

	UWBP_PlayerIDCustomize_C_OnNextTab_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_PlayerIDCustomize.WBP_PlayerIDCustomize_C.SetInfoFieldData
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
//		class UPlatformInventoryItem*                      CosmeticItem                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		Killstreak_EPlayerAccountSlot                      ItemSlot                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWBP_PlayerIDCustomize_C::SetInfoFieldData(class UPlatformInventoryItem* CosmeticItem, Killstreak_EPlayerAccountSlot ItemSlot)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(86624);

	UWBP_PlayerIDCustomize_C_SetInfoFieldData_Params params {};
	params.CosmeticItem = CosmeticItem;
	params.ItemSlot = ItemSlot;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_PlayerIDCustomize.WBP_PlayerIDCustomize_C.PreConstruct
//		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
//		bool                                               IsDesignTime                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UWBP_PlayerIDCustomize_C::PreConstruct(bool IsDesignTime)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(86623);

	UWBP_PlayerIDCustomize_C_PreConstruct_Params params {};
	params.IsDesignTime = IsDesignTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_PlayerIDCustomize.WBP_PlayerIDCustomize_C.Construct
//		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
void UWBP_PlayerIDCustomize_C::Construct()
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(86622);

	UWBP_PlayerIDCustomize_C_Construct_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_PlayerIDCustomize.WBP_PlayerIDCustomize_C.InitializeWidget
//		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
//		class APUMG_HUD*                                   HUD                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWBP_PlayerIDCustomize_C::InitializeWidget(class APUMG_HUD* HUD)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(86621);

	UWBP_PlayerIDCustomize_C_InitializeWidget_Params params {};
	params.HUD = HUD;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_PlayerIDCustomize.WBP_PlayerIDCustomize_C.Update Player Identity
//		Flags  -> (BlueprintCallable, BlueprintEvent)
void UWBP_PlayerIDCustomize_C::Update_Player_Identity()
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(86620);

	UWBP_PlayerIDCustomize_C_Update_Player_Identity_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_PlayerIDCustomize.WBP_PlayerIDCustomize_C.OnButtonsCreated
//		Flags  -> (BlueprintCallable, BlueprintEvent)
void UWBP_PlayerIDCustomize_C::OnButtonsCreated()
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(86619);

	UWBP_PlayerIDCustomize_C_OnButtonsCreated_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_PlayerIDCustomize.WBP_PlayerIDCustomize_C.UninitializeWidget
//		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
void UWBP_PlayerIDCustomize_C::UninitializeWidget()
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(86618);

	UWBP_PlayerIDCustomize_C_UninitializeWidget_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_PlayerIDCustomize.WBP_PlayerIDCustomize_C.OnLocalLoadoutUpdate
//		Flags  -> (BlueprintCallable, BlueprintEvent)
void UWBP_PlayerIDCustomize_C::OnLocalLoadoutUpdate()
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(86617);

	UWBP_PlayerIDCustomize_C_OnLocalLoadoutUpdate_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_PlayerIDCustomize.WBP_PlayerIDCustomize_C.ExecuteUbergraph_WBP_PlayerIDCustomize
//		Flags  -> (Final, HasDefaults)
// Parameters:
//		int                                                EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWBP_PlayerIDCustomize_C::ExecuteUbergraph_WBP_PlayerIDCustomize(int EntryPoint)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(86616);

	UWBP_PlayerIDCustomize_C_ExecuteUbergraph_WBP_PlayerIDCustomize_Params params {};
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
