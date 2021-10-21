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
//		Name   -> Function WBP_ChallengeEntry_Card.WBP_ChallengeEntry_Card_C.GetCurrentChallengeId
//		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
//		int                                                Return_Value                                               (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWBP_ChallengeEntry_Card_C::GetCurrentChallengeId(int* Return_Value)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(70615);

	UWBP_ChallengeEntry_Card_C_GetCurrentChallengeId_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Return_Value != nullptr)
		*Return_Value = params.Return_Value;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_ChallengeEntry_Card.WBP_ChallengeEntry_Card_C.NavigateConfirm
//		Flags  -> (Event, Protected, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
//		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
bool UWBP_ChallengeEntry_Card_C::NavigateConfirm()
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(70614);

	UWBP_ChallengeEntry_Card_C_NavigateConfirm_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_ChallengeEntry_Card.WBP_ChallengeEntry_Card_C.SetChallengeData
//		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
//		class UKSActivityInstance*                         ChallengeActivityInstance                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWBP_ChallengeEntry_Card_C::SetChallengeData(class UKSActivityInstance* ChallengeActivityInstance)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(70613);

	UWBP_ChallengeEntry_Card_C_SetChallengeData_Params params {};
	params.ChallengeActivityInstance = ChallengeActivityInstance;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_ChallengeEntry_Card.WBP_ChallengeEntry_Card_C.SetVisualState
//		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
//		TEnumAsByte<EChallengeEntry_Card_State_EChallengeEntry_Card_State> State                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWBP_ChallengeEntry_Card_C::SetVisualState(TEnumAsByte<EChallengeEntry_Card_State_EChallengeEntry_Card_State> State)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(70612);

	UWBP_ChallengeEntry_Card_C_SetVisualState_Params params {};
	params.State = State;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_ChallengeEntry_Card.WBP_ChallengeEntry_Card_C.PreConstruct
//		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
//		bool                                               IsDesignTime                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UWBP_ChallengeEntry_Card_C::PreConstruct(bool IsDesignTime)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(70611);

	UWBP_ChallengeEntry_Card_C_PreConstruct_Params params {};
	params.IsDesignTime = IsDesignTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_ChallengeEntry_Card.WBP_ChallengeEntry_Card_C.BndEvt__RerollButton_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature
//		Flags  -> (BlueprintEvent)
void UWBP_ChallengeEntry_Card_C::BndEvt__RerollButton_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature()
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(70610);

	UWBP_ChallengeEntry_Card_C_BndEvt__RerollButton_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_ChallengeEntry_Card.WBP_ChallengeEntry_Card_C.BndEvt__RerollButton_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature
//		Flags  -> (BlueprintEvent)
void UWBP_ChallengeEntry_Card_C::BndEvt__RerollButton_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature()
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(70609);

	UWBP_ChallengeEntry_Card_C_BndEvt__RerollButton_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_ChallengeEntry_Card.WBP_ChallengeEntry_Card_C.BndEvt__HoverButton_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature
//		Flags  -> (BlueprintEvent)
void UWBP_ChallengeEntry_Card_C::BndEvt__HoverButton_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature()
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(70608);

	UWBP_ChallengeEntry_Card_C_BndEvt__HoverButton_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_ChallengeEntry_Card.WBP_ChallengeEntry_Card_C.BndEvt__HoverButton_K2Node_ComponentBoundEvent_3_OnButtonHoverEvent__DelegateSignature
//		Flags  -> (BlueprintEvent)
void UWBP_ChallengeEntry_Card_C::BndEvt__HoverButton_K2Node_ComponentBoundEvent_3_OnButtonHoverEvent__DelegateSignature()
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(70607);

	UWBP_ChallengeEntry_Card_C_BndEvt__HoverButton_K2Node_ComponentBoundEvent_3_OnButtonHoverEvent__DelegateSignature_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_ChallengeEntry_Card.WBP_ChallengeEntry_Card_C.GamepadHover
//		Flags  -> (Event, Public, BlueprintEvent)
void UWBP_ChallengeEntry_Card_C::GamepadHover()
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(70606);

	UWBP_ChallengeEntry_Card_C_GamepadHover_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_ChallengeEntry_Card.WBP_ChallengeEntry_Card_C.GamepadUnhover
//		Flags  -> (Event, Public, BlueprintEvent)
void UWBP_ChallengeEntry_Card_C::GamepadUnhover()
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(70605);

	UWBP_ChallengeEntry_Card_C_GamepadUnhover_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_ChallengeEntry_Card.WBP_ChallengeEntry_Card_C.InitializeWidget
//		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
//		class APUMG_HUD*                                   HUD                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWBP_ChallengeEntry_Card_C::InitializeWidget(class APUMG_HUD* HUD)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(70604);

	UWBP_ChallengeEntry_Card_C_InitializeWidget_Params params {};
	params.HUD = HUD;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_ChallengeEntry_Card.WBP_ChallengeEntry_Card_C.Handle Input State Changed
//		Flags  -> (BlueprintCallable, BlueprintEvent)
// Parameters:
//		TEnumAsByte<PlatformGameFramework_EPGAME_INPUT_STATE> InputState                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWBP_ChallengeEntry_Card_C::Handle_Input_State_Changed(TEnumAsByte<PlatformGameFramework_EPGAME_INPUT_STATE> InputState)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(70603);

	UWBP_ChallengeEntry_Card_C_Handle_Input_State_Changed_Params params {};
	params.InputState = InputState;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_ChallengeEntry_Card.WBP_ChallengeEntry_Card_C.BndEvt__RerollButton_K2Node_ComponentBoundEvent_4_OnButtonClickedEvent__DelegateSignature
//		Flags  -> (BlueprintEvent)
void UWBP_ChallengeEntry_Card_C::BndEvt__RerollButton_K2Node_ComponentBoundEvent_4_OnButtonClickedEvent__DelegateSignature()
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(70602);

	UWBP_ChallengeEntry_Card_C_BndEvt__RerollButton_K2Node_ComponentBoundEvent_4_OnButtonClickedEvent__DelegateSignature_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_ChallengeEntry_Card.WBP_ChallengeEntry_Card_C.TryReroll
//		Flags  -> (BlueprintCallable, BlueprintEvent)
void UWBP_ChallengeEntry_Card_C::TryReroll()
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(70601);

	UWBP_ChallengeEntry_Card_C_TryReroll_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_ChallengeEntry_Card.WBP_ChallengeEntry_Card_C.BndEvt__HoverButton_K2Node_ComponentBoundEvent_5_OnButtonClickedEvent__DelegateSignature
//		Flags  -> (BlueprintEvent)
void UWBP_ChallengeEntry_Card_C::BndEvt__HoverButton_K2Node_ComponentBoundEvent_5_OnButtonClickedEvent__DelegateSignature()
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(70600);

	UWBP_ChallengeEntry_Card_C_BndEvt__HoverButton_K2Node_ComponentBoundEvent_5_OnButtonClickedEvent__DelegateSignature_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_ChallengeEntry_Card.WBP_ChallengeEntry_Card_C.Play Reroll Anim
//		Flags  -> (BlueprintCallable, BlueprintEvent)
void UWBP_ChallengeEntry_Card_C::Play_Reroll_Anim()
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(70599);

	UWBP_ChallengeEntry_Card_C_Play_Reroll_Anim_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_ChallengeEntry_Card.WBP_ChallengeEntry_Card_C.ExecuteUbergraph_WBP_ChallengeEntry_Card
//		Flags  -> (Final, HasDefaults)
// Parameters:
//		int                                                EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWBP_ChallengeEntry_Card_C::ExecuteUbergraph_WBP_ChallengeEntry_Card(int EntryPoint)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(70598);

	UWBP_ChallengeEntry_Card_C_ExecuteUbergraph_WBP_ChallengeEntry_Card_Params params {};
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
