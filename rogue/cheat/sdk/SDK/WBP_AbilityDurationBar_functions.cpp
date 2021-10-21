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
//		Name   -> Function WBP_AbilityDurationBar.WBP_AbilityDurationBar_C.SetDurationBar
//		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
//		float                                              Duration                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		float                                              RemainingTime                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		class UKSItem*                                     KSItem                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWBP_AbilityDurationBar_C::SetDurationBar(float Duration, float RemainingTime, class UKSItem* KSItem)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(27773);

	UWBP_AbilityDurationBar_C_SetDurationBar_Params params {};
	params.Duration = Duration;
	params.RemainingTime = RemainingTime;
	params.KSItem = KSItem;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_AbilityDurationBar.WBP_AbilityDurationBar_C.Tick
//		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
//		struct FGeometry                                   MyGeometry                                                 (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
//		float                                              InDeltaTime                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWBP_AbilityDurationBar_C::Tick(const struct FGeometry& MyGeometry, float InDeltaTime)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(27772);

	UWBP_AbilityDurationBar_C_Tick_Params params {};
	params.MyGeometry = MyGeometry;
	params.InDeltaTime = InDeltaTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_AbilityDurationBar.WBP_AbilityDurationBar_C.OpenUpdateGate
//		Flags  -> (BlueprintCallable, BlueprintEvent)
void UWBP_AbilityDurationBar_C::OpenUpdateGate()
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(27771);

	UWBP_AbilityDurationBar_C_OpenUpdateGate_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_AbilityDurationBar.WBP_AbilityDurationBar_C.CloseUpdateGate
//		Flags  -> (BlueprintCallable, BlueprintEvent)
void UWBP_AbilityDurationBar_C::CloseUpdateGate()
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(27770);

	UWBP_AbilityDurationBar_C_CloseUpdateGate_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_AbilityDurationBar.WBP_AbilityDurationBar_C.UpdateDurationDisplay
//		Flags  -> (BlueprintCallable, BlueprintEvent)
void UWBP_AbilityDurationBar_C::UpdateDurationDisplay()
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(27769);

	UWBP_AbilityDurationBar_C_UpdateDurationDisplay_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_AbilityDurationBar.WBP_AbilityDurationBar_C.HideDurationBar
//		Flags  -> (BlueprintCallable, BlueprintEvent)
void UWBP_AbilityDurationBar_C::HideDurationBar()
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(27768);

	UWBP_AbilityDurationBar_C_HideDurationBar_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_AbilityDurationBar.WBP_AbilityDurationBar_C.HandleModActivated
//		Flags  -> (BlueprintCallable, BlueprintEvent)
// Parameters:
//		bool                                               Activated                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UWBP_AbilityDurationBar_C::HandleModActivated(bool Activated)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(27767);

	UWBP_AbilityDurationBar_C_HandleModActivated_Params params {};
	params.Activated = Activated;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_AbilityDurationBar.WBP_AbilityDurationBar_C.SetupDurationBar
//		Flags  -> (BlueprintCallable, BlueprintEvent)
// Parameters:
//		class UKSModInst_Activated*                        ModInstance                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWBP_AbilityDurationBar_C::SetupDurationBar(class UKSModInst_Activated* ModInstance)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(27766);

	UWBP_AbilityDurationBar_C_SetupDurationBar_Params params {};
	params.ModInstance = ModInstance;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_AbilityDurationBar.WBP_AbilityDurationBar_C.ExecuteUbergraph_WBP_AbilityDurationBar
//		Flags  -> (Final, HasDefaults)
// Parameters:
//		int                                                EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWBP_AbilityDurationBar_C::ExecuteUbergraph_WBP_AbilityDurationBar(int EntryPoint)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(27765);

	UWBP_AbilityDurationBar_C_ExecuteUbergraph_WBP_AbilityDurationBar_Params params {};
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
