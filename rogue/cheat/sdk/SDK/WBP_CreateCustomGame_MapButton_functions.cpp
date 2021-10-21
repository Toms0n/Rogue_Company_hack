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
//		Name   -> Function WBP_CreateCustomGame_MapButton.WBP_CreateCustomGame_MapButton_C.NavigateConfirm
//		Flags  -> (Event, Protected, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
//		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
bool UWBP_CreateCustomGame_MapButton_C::NavigateConfirm()
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(86731);

	UWBP_CreateCustomGame_MapButton_C_NavigateConfirm_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_CreateCustomGame_MapButton.WBP_CreateCustomGame_MapButton_C.SetMap
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
//		int                                                MapId                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		struct FMapDetail                                  MapInfo                                                    (BlueprintVisible, BlueprintReadOnly, Parm)
void UWBP_CreateCustomGame_MapButton_C::SetMap(int MapId, const struct FMapDetail& MapInfo)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(86730);

	UWBP_CreateCustomGame_MapButton_C_SetMap_Params params {};
	params.MapId = MapId;
	params.MapInfo = MapInfo;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_CreateCustomGame_MapButton.WBP_CreateCustomGame_MapButton_C.BndEvt__Button_195_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature
//		Flags  -> (BlueprintEvent)
void UWBP_CreateCustomGame_MapButton_C::BndEvt__Button_195_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature()
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(86729);

	UWBP_CreateCustomGame_MapButton_C_BndEvt__Button_195_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_CreateCustomGame_MapButton.WBP_CreateCustomGame_MapButton_C.BndEvt__Button_195_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature
//		Flags  -> (BlueprintEvent)
void UWBP_CreateCustomGame_MapButton_C::BndEvt__Button_195_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature()
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(86728);

	UWBP_CreateCustomGame_MapButton_C_BndEvt__Button_195_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_CreateCustomGame_MapButton.WBP_CreateCustomGame_MapButton_C.InitializeWidget
//		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
//		class APUMG_HUD*                                   HUD                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWBP_CreateCustomGame_MapButton_C::InitializeWidget(class APUMG_HUD* HUD)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(86727);

	UWBP_CreateCustomGame_MapButton_C_InitializeWidget_Params params {};
	params.HUD = HUD;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_CreateCustomGame_MapButton.WBP_CreateCustomGame_MapButton_C.GamepadHover
//		Flags  -> (Event, Public, BlueprintEvent)
void UWBP_CreateCustomGame_MapButton_C::GamepadHover()
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(86726);

	UWBP_CreateCustomGame_MapButton_C_GamepadHover_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_CreateCustomGame_MapButton.WBP_CreateCustomGame_MapButton_C.GamepadUnhover
//		Flags  -> (Event, Public, BlueprintEvent)
void UWBP_CreateCustomGame_MapButton_C::GamepadUnhover()
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(86725);

	UWBP_CreateCustomGame_MapButton_C_GamepadUnhover_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_CreateCustomGame_MapButton.WBP_CreateCustomGame_MapButton_C.BndEvt__HitTarget_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
//		Flags  -> (BlueprintEvent)
void UWBP_CreateCustomGame_MapButton_C::BndEvt__HitTarget_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature()
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(86724);

	UWBP_CreateCustomGame_MapButton_C_BndEvt__HitTarget_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_CreateCustomGame_MapButton.WBP_CreateCustomGame_MapButton_C.OnGamepadConfirm
//		Flags  -> (BlueprintCallable, BlueprintEvent)
void UWBP_CreateCustomGame_MapButton_C::OnGamepadConfirm()
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(86723);

	UWBP_CreateCustomGame_MapButton_C_OnGamepadConfirm_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_CreateCustomGame_MapButton.WBP_CreateCustomGame_MapButton_C.ExecuteUbergraph_WBP_CreateCustomGame_MapButton
//		Flags  -> (Final, HasDefaults)
// Parameters:
//		int                                                EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWBP_CreateCustomGame_MapButton_C::ExecuteUbergraph_WBP_CreateCustomGame_MapButton(int EntryPoint)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(86722);

	UWBP_CreateCustomGame_MapButton_C_ExecuteUbergraph_WBP_CreateCustomGame_MapButton_Params params {};
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_CreateCustomGame_MapButton.WBP_CreateCustomGame_MapButton_C.OnMapSelected__DelegateSignature
//		Flags  -> (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
//		int                                                MapId                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWBP_CreateCustomGame_MapButton_C::OnMapSelected__DelegateSignature(int MapId)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(86721);

	UWBP_CreateCustomGame_MapButton_C_OnMapSelected__DelegateSignature_Params params {};
	params.MapId = MapId;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
