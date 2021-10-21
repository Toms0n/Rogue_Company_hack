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
//		Name   -> Function WBP_PurchasedTransition.WBP_PurchasedTransition_C.GoToAcquisitonScene
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
void UWBP_PurchasedTransition_C::GoToAcquisitonScene()
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(72726);

	UWBP_PurchasedTransition_C_GoToAcquisitonScene_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_PurchasedTransition.WBP_PurchasedTransition_C.SetAcquisitionDisplay
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
//		class UKSAcquisition*                              Acquisition                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWBP_PurchasedTransition_C::SetAcquisitionDisplay(class UKSAcquisition* Acquisition)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(72725);

	UWBP_PurchasedTransition_C_SetAcquisitionDisplay_Params params {};
	params.Acquisition = Acquisition;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_PurchasedTransition.WBP_PurchasedTransition_C.SequenceEvent_1
//		Flags  -> (BlueprintCallable, BlueprintEvent)
void UWBP_PurchasedTransition_C::SequenceEvent_1()
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(72724);

	UWBP_PurchasedTransition_C_SequenceEvent_1_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_PurchasedTransition.WBP_PurchasedTransition_C.InitializeWidget
//		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
//		class APUMG_HUD*                                   HUD                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWBP_PurchasedTransition_C::InitializeWidget(class APUMG_HUD* HUD)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(72723);

	UWBP_PurchasedTransition_C_InitializeWidget_Params params {};
	params.HUD = HUD;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_PurchasedTransition.WBP_PurchasedTransition_C.OnAcceptPrompt
//		Flags  -> (BlueprintCallable, BlueprintEvent)
void UWBP_PurchasedTransition_C::OnAcceptPrompt()
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(72722);

	UWBP_PurchasedTransition_C_OnAcceptPrompt_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_PurchasedTransition.WBP_PurchasedTransition_C.OnAnimationFinished
//		Flags  -> (BlueprintCosmetic, Event, Protected, BlueprintEvent)
// Parameters:
//		class UWidgetAnimation*                            Animation                                                  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWBP_PurchasedTransition_C::OnAnimationFinished(class UWidgetAnimation* Animation)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(72721);

	UWBP_PurchasedTransition_C_OnAnimationFinished_Params params {};
	params.Animation = Animation;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_PurchasedTransition.WBP_PurchasedTransition_C.OnShown
//		Flags  -> (Event, Public, BlueprintEvent)
void UWBP_PurchasedTransition_C::OnShown()
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(72720);

	UWBP_PurchasedTransition_C_OnShown_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_PurchasedTransition.WBP_PurchasedTransition_C.ExecuteUbergraph_WBP_PurchasedTransition
//		Flags  -> (Final, HasDefaults)
// Parameters:
//		int                                                EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWBP_PurchasedTransition_C::ExecuteUbergraph_WBP_PurchasedTransition(int EntryPoint)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(72719);

	UWBP_PurchasedTransition_C_ExecuteUbergraph_WBP_PurchasedTransition_Params params {};
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_PurchasedTransition.WBP_PurchasedTransition_C.TransitionFinished__DelegateSignature
//		Flags  -> (Public, Delegate, BlueprintCallable, BlueprintEvent)
void UWBP_PurchasedTransition_C::TransitionFinished__DelegateSignature()
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(72718);

	UWBP_PurchasedTransition_C_TransitionFinished__DelegateSignature_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
