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
//		Name   -> Function WBP_ToastNotifcation_Entry.WBP_ToastNotifcation_Entry_C.SetViewStyle
//		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
//		KillstreakUINew_EToastCategory                     ToastCategory                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWBP_ToastNotifcation_Entry_C::SetViewStyle(KillstreakUINew_EToastCategory ToastCategory)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(56669);

	UWBP_ToastNotifcation_Entry_C_SetViewStyle_Params params {};
	params.ToastCategory = ToastCategory;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_ToastNotifcation_Entry.WBP_ToastNotifcation_Entry_C.PlayOutroAnimation
//		Flags  -> (BlueprintCallable, BlueprintEvent)
void UWBP_ToastNotifcation_Entry_C::PlayOutroAnimation()
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(56668);

	UWBP_ToastNotifcation_Entry_C_PlayOutroAnimation_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_ToastNotifcation_Entry.WBP_ToastNotifcation_Entry_C.HandleOutroAnimFinished
//		Flags  -> (BlueprintCallable, BlueprintEvent)
void UWBP_ToastNotifcation_Entry_C::HandleOutroAnimFinished()
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(56667);

	UWBP_ToastNotifcation_Entry_C_HandleOutroAnimFinished_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_ToastNotifcation_Entry.WBP_ToastNotifcation_Entry_C.PlayWaitAnimation
//		Flags  -> (BlueprintCallable, BlueprintEvent)
void UWBP_ToastNotifcation_Entry_C::PlayWaitAnimation()
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(56666);

	UWBP_ToastNotifcation_Entry_C_PlayWaitAnimation_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_ToastNotifcation_Entry.WBP_ToastNotifcation_Entry_C.Construct
//		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
void UWBP_ToastNotifcation_Entry_C::Construct()
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(56665);

	UWBP_ToastNotifcation_Entry_C_Construct_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_ToastNotifcation_Entry.WBP_ToastNotifcation_Entry_C.ExecuteUbergraph_WBP_ToastNotifcation_Entry
//		Flags  -> (Final, HasDefaults)
// Parameters:
//		int                                                EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWBP_ToastNotifcation_Entry_C::ExecuteUbergraph_WBP_ToastNotifcation_Entry(int EntryPoint)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(56664);

	UWBP_ToastNotifcation_Entry_C_ExecuteUbergraph_WBP_ToastNotifcation_Entry_Params params {};
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_ToastNotifcation_Entry.WBP_ToastNotifcation_Entry_C.FinishedIntroAnimation__DelegateSignature
//		Flags  -> (Public, Delegate, BlueprintCallable, BlueprintEvent)
void UWBP_ToastNotifcation_Entry_C::FinishedIntroAnimation__DelegateSignature()
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(56663);

	UWBP_ToastNotifcation_Entry_C_FinishedIntroAnimation__DelegateSignature_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_ToastNotifcation_Entry.WBP_ToastNotifcation_Entry_C.OnRemoveToastNotification__DelegateSignature
//		Flags  -> (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
//		class UKSWidget*                                   ToastWidget                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWBP_ToastNotifcation_Entry_C::OnRemoveToastNotification__DelegateSignature(class UKSWidget* ToastWidget)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(56662);

	UWBP_ToastNotifcation_Entry_C_OnRemoveToastNotification__DelegateSignature_Params params {};
	params.ToastWidget = ToastWidget;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
