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
//		Name   -> Function WBP_ToastNotification_Manager.WBP_ToastNotification_Manager_C.PushAwardsEarnedInMatch
//		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
void UWBP_ToastNotification_Manager_C::PushAwardsEarnedInMatch()
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(55719);

	UWBP_ToastNotification_Manager_C_PushAwardsEarnedInMatch_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_ToastNotification_Manager.WBP_ToastNotification_Manager_C.DisplayChallengeToast
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
//		class UWBP_Toast2_C*                               Toast                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWBP_ToastNotification_Manager_C::DisplayChallengeToast(class UWBP_Toast2_C* Toast)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(55718);

	UWBP_ToastNotification_Manager_C_DisplayChallengeToast_Params params {};
	params.Toast = Toast;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_ToastNotification_Manager.WBP_ToastNotification_Manager_C.DisplayToast
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
//		class UWBP_ToastNotifcation_Entry_C*               Toast                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWBP_ToastNotification_Manager_C::DisplayToast(class UWBP_ToastNotifcation_Entry_C* Toast)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(55717);

	UWBP_ToastNotification_Manager_C_DisplayToast_Params params {};
	params.Toast = Toast;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_ToastNotification_Manager.WBP_ToastNotification_Manager_C.OnToastNotificationReceived
//		Flags  -> (Event, Public, BlueprintEvent)
// Parameters:
//		struct FToastData                                  ToastData                                                  (BlueprintVisible, BlueprintReadOnly, Parm)
void UWBP_ToastNotification_Manager_C::OnToastNotificationReceived(const struct FToastData& ToastData)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(55716);

	UWBP_ToastNotification_Manager_C_OnToastNotificationReceived_Params params {};
	params.ToastData = ToastData;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_ToastNotification_Manager.WBP_ToastNotification_Manager_C.HandleToastNotificationRemove
//		Flags  -> (BlueprintCallable, BlueprintEvent)
// Parameters:
//		class UKSWidget*                                   ToastNotification                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWBP_ToastNotification_Manager_C::HandleToastNotificationRemove(class UKSWidget* ToastNotification)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(55715);

	UWBP_ToastNotification_Manager_C_HandleToastNotificationRemove_Params params {};
	params.ToastNotification = ToastNotification;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_ToastNotification_Manager.WBP_ToastNotification_Manager_C.OnToastIntroAnimFinished
//		Flags  -> (BlueprintCallable, BlueprintEvent)
void UWBP_ToastNotification_Manager_C::OnToastIntroAnimFinished()
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(55714);

	UWBP_ToastNotification_Manager_C_OnToastIntroAnimFinished_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_ToastNotification_Manager.WBP_ToastNotification_Manager_C.Construct
//		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
void UWBP_ToastNotification_Manager_C::Construct()
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(55713);

	UWBP_ToastNotification_Manager_C_Construct_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_ToastNotification_Manager.WBP_ToastNotification_Manager_C.HandleChallengeToastNotificationRemove
//		Flags  -> (BlueprintCallable, BlueprintEvent)
// Parameters:
//		class UKSWidget*                                   ToastNotification                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWBP_ToastNotification_Manager_C::HandleChallengeToastNotificationRemove(class UKSWidget* ToastNotification)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(55712);

	UWBP_ToastNotification_Manager_C_HandleChallengeToastNotificationRemove_Params params {};
	params.ToastNotification = ToastNotification;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_ToastNotification_Manager.WBP_ToastNotification_Manager_C.ExecuteUbergraph_WBP_ToastNotification_Manager
//		Flags  -> (Final, HasDefaults)
// Parameters:
//		int                                                EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWBP_ToastNotification_Manager_C::ExecuteUbergraph_WBP_ToastNotification_Manager(int EntryPoint)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(55711);

	UWBP_ToastNotification_Manager_C_ExecuteUbergraph_WBP_ToastNotification_Manager_Params params {};
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
