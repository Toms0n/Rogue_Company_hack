﻿// Name: roguecompany, Version: 425

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
//		Name   -> Function WBP_BulletedListEntry.WBP_BulletedListEntry_C.SetText
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
//		struct FText                                       Text                                                       (BlueprintVisible, BlueprintReadOnly, Parm)
void UWBP_BulletedListEntry_C::SetText(const struct FText& Text)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(65904);

	UWBP_BulletedListEntry_C_SetText_Params params {};
	params.Text = Text;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_BulletedListEntry.WBP_BulletedListEntry_C.PreConstruct
//		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
//		bool                                               IsDesignTime                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UWBP_BulletedListEntry_C::PreConstruct(bool IsDesignTime)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(65903);

	UWBP_BulletedListEntry_C_PreConstruct_Params params {};
	params.IsDesignTime = IsDesignTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_BulletedListEntry.WBP_BulletedListEntry_C.Construct
//		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
void UWBP_BulletedListEntry_C::Construct()
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(65902);

	UWBP_BulletedListEntry_C_Construct_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_BulletedListEntry.WBP_BulletedListEntry_C.ExecuteUbergraph_WBP_BulletedListEntry
//		Flags  -> (Final)
// Parameters:
//		int                                                EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWBP_BulletedListEntry_C::ExecuteUbergraph_WBP_BulletedListEntry(int EntryPoint)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(65901);

	UWBP_BulletedListEntry_C_ExecuteUbergraph_WBP_BulletedListEntry_Params params {};
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
