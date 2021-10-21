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
//		Name   -> Function WBP_ChallengeEntry_Seasonal.WBP_ChallengeEntry_Seasonal_C.RefreshFromActivitySequenceData
//		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
void UWBP_ChallengeEntry_Seasonal_C::RefreshFromActivitySequenceData()
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(70544);

	UWBP_ChallengeEntry_Seasonal_C_RefreshFromActivitySequenceData_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_ChallengeEntry_Seasonal.WBP_ChallengeEntry_Seasonal_C.SetLayoutState
//		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
//		TEnumAsByte<EChallengeEntry_Card_State_EChallengeEntry_Card_State> ProgressState                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWBP_ChallengeEntry_Seasonal_C::SetLayoutState(TEnumAsByte<EChallengeEntry_Card_State_EChallengeEntry_Card_State> ProgressState)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(70543);

	UWBP_ChallengeEntry_Seasonal_C_SetLayoutState_Params params {};
	params.ProgressState = ProgressState;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_ChallengeEntry_Seasonal.WBP_ChallengeEntry_Seasonal_C.PreConstruct
//		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
//		bool                                               IsDesignTime                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UWBP_ChallengeEntry_Seasonal_C::PreConstruct(bool IsDesignTime)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(70542);

	UWBP_ChallengeEntry_Seasonal_C_PreConstruct_Params params {};
	params.IsDesignTime = IsDesignTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_ChallengeEntry_Seasonal.WBP_ChallengeEntry_Seasonal_C.BndEvt__HitTarget_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature
//		Flags  -> (BlueprintEvent)
void UWBP_ChallengeEntry_Seasonal_C::BndEvt__HitTarget_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature()
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(70541);

	UWBP_ChallengeEntry_Seasonal_C_BndEvt__HitTarget_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_ChallengeEntry_Seasonal.WBP_ChallengeEntry_Seasonal_C.BndEvt__HitTarget_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature
//		Flags  -> (BlueprintEvent)
void UWBP_ChallengeEntry_Seasonal_C::BndEvt__HitTarget_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature()
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(70540);

	UWBP_ChallengeEntry_Seasonal_C_BndEvt__HitTarget_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_ChallengeEntry_Seasonal.WBP_ChallengeEntry_Seasonal_C.GamepadHover
//		Flags  -> (Event, Public, BlueprintEvent)
void UWBP_ChallengeEntry_Seasonal_C::GamepadHover()
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(70539);

	UWBP_ChallengeEntry_Seasonal_C_GamepadHover_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_ChallengeEntry_Seasonal.WBP_ChallengeEntry_Seasonal_C.GamepadUnhover
//		Flags  -> (Event, Public, BlueprintEvent)
void UWBP_ChallengeEntry_Seasonal_C::GamepadUnhover()
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(70538);

	UWBP_ChallengeEntry_Seasonal_C_GamepadUnhover_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_ChallengeEntry_Seasonal.WBP_ChallengeEntry_Seasonal_C.ExecuteUbergraph_WBP_ChallengeEntry_Seasonal
//		Flags  -> (Final, HasDefaults)
// Parameters:
//		int                                                EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWBP_ChallengeEntry_Seasonal_C::ExecuteUbergraph_WBP_ChallengeEntry_Seasonal(int EntryPoint)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(70537);

	UWBP_ChallengeEntry_Seasonal_C_ExecuteUbergraph_WBP_ChallengeEntry_Seasonal_Params params {};
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_ChallengeEntry_Seasonal.WBP_ChallengeEntry_Seasonal_C.OnWeekGamepadHovered__DelegateSignature
//		Flags  -> (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
//		class UWBP_ChallengeEntry_Seasonal_C*              Hovered_Widget                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWBP_ChallengeEntry_Seasonal_C::OnWeekGamepadHovered__DelegateSignature(class UWBP_ChallengeEntry_Seasonal_C* Hovered_Widget)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(70536);

	UWBP_ChallengeEntry_Seasonal_C_OnWeekGamepadHovered__DelegateSignature_Params params {};
	params.Hovered_Widget = Hovered_Widget;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
