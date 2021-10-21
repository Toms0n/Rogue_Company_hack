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
//		Name   -> Function WBP_Notification_Icon.WBP_Notification_Icon_C.Construct
//		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
void UWBP_Notification_Icon_C::Construct()
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(257773);

	UWBP_Notification_Icon_C_Construct_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_Notification_Icon.WBP_Notification_Icon_C.OnShown
//		Flags  -> (Event, Public, BlueprintEvent)
void UWBP_Notification_Icon_C::OnShown()
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(257772);

	UWBP_Notification_Icon_C_OnShown_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_Notification_Icon.WBP_Notification_Icon_C.OnHide
//		Flags  -> (Event, Public, BlueprintEvent)
void UWBP_Notification_Icon_C::OnHide()
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(257771);

	UWBP_Notification_Icon_C_OnHide_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_Notification_Icon.WBP_Notification_Icon_C.HandleShown
//		Flags  -> (BlueprintCallable, BlueprintEvent)
void UWBP_Notification_Icon_C::HandleShown()
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(257770);

	UWBP_Notification_Icon_C_HandleShown_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_Notification_Icon.WBP_Notification_Icon_C.HandleHide
//		Flags  -> (BlueprintCallable, BlueprintEvent)
void UWBP_Notification_Icon_C::HandleHide()
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(257769);

	UWBP_Notification_Icon_C_HandleHide_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_Notification_Icon.WBP_Notification_Icon_C.ExecuteUbergraph_WBP_Notification_Icon
//		Flags  -> (Final)
// Parameters:
//		int                                                EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWBP_Notification_Icon_C::ExecuteUbergraph_WBP_Notification_Icon(int EntryPoint)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(257768);

	UWBP_Notification_Icon_C_ExecuteUbergraph_WBP_Notification_Icon_Params params {};
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
