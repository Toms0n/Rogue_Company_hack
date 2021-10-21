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
//		Name   -> Function WBP_PartyModuleCardSlot.WBP_PartyModuleCardSlot_C.NavigateConfirm
//		Flags  -> (Event, Protected, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
//		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
bool UWBP_PartyModuleCardSlot_C::NavigateConfirm()
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(81947);

	UWBP_PartyModuleCardSlot_C_NavigateConfirm_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_PartyModuleCardSlot.WBP_PartyModuleCardSlot_C.SetPlayerView
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
//		class UPUMG_PlayerInfo*                            Player_Info                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWBP_PartyModuleCardSlot_C::SetPlayerView(class UPUMG_PlayerInfo* Player_Info)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(81946);

	UWBP_PartyModuleCardSlot_C_SetPlayerView_Params params {};
	params.Player_Info = Player_Info;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_PartyModuleCardSlot.WBP_PartyModuleCardSlot_C.SetEmptyView
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
void UWBP_PartyModuleCardSlot_C::SetEmptyView()
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(81945);

	UWBP_PartyModuleCardSlot_C_SetEmptyView_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_PartyModuleCardSlot.WBP_PartyModuleCardSlot_C.InitializeWidget
//		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
//		class APUMG_HUD*                                   HUD                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWBP_PartyModuleCardSlot_C::InitializeWidget(class APUMG_HUD* HUD)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(81944);

	UWBP_PartyModuleCardSlot_C_InitializeWidget_Params params {};
	params.HUD = HUD;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_PartyModuleCardSlot.WBP_PartyModuleCardSlot_C.BndEvt__EmptySlotGroup_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
//		Flags  -> (BlueprintEvent)
void UWBP_PartyModuleCardSlot_C::BndEvt__EmptySlotGroup_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature()
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(81943);

	UWBP_PartyModuleCardSlot_C_BndEvt__EmptySlotGroup_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_PartyModuleCardSlot.WBP_PartyModuleCardSlot_C.BndEvt__EmptySlotGroup_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature
//		Flags  -> (BlueprintEvent)
void UWBP_PartyModuleCardSlot_C::BndEvt__EmptySlotGroup_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature()
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(81942);

	UWBP_PartyModuleCardSlot_C_BndEvt__EmptySlotGroup_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_PartyModuleCardSlot.WBP_PartyModuleCardSlot_C.BndEvt__EmptySlotGroup_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature
//		Flags  -> (BlueprintEvent)
void UWBP_PartyModuleCardSlot_C::BndEvt__EmptySlotGroup_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature()
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(81941);

	UWBP_PartyModuleCardSlot_C_BndEvt__EmptySlotGroup_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_PartyModuleCardSlot.WBP_PartyModuleCardSlot_C.GamepadHover
//		Flags  -> (Event, Public, BlueprintEvent)
void UWBP_PartyModuleCardSlot_C::GamepadHover()
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(81940);

	UWBP_PartyModuleCardSlot_C_GamepadHover_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_PartyModuleCardSlot.WBP_PartyModuleCardSlot_C.GamepadUnhover
//		Flags  -> (Event, Public, BlueprintEvent)
void UWBP_PartyModuleCardSlot_C::GamepadUnhover()
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(81939);

	UWBP_PartyModuleCardSlot_C_GamepadUnhover_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_PartyModuleCardSlot.WBP_PartyModuleCardSlot_C.Add Party Member Selected
//		Flags  -> (BlueprintCallable, BlueprintEvent)
void UWBP_PartyModuleCardSlot_C::Add_Party_Member_Selected()
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(81938);

	UWBP_PartyModuleCardSlot_C_Add_Party_Member_Selected_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_PartyModuleCardSlot.WBP_PartyModuleCardSlot_C.Add Party Member Hovered
//		Flags  -> (BlueprintCallable, BlueprintEvent)
void UWBP_PartyModuleCardSlot_C::Add_Party_Member_Hovered()
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(81937);

	UWBP_PartyModuleCardSlot_C_Add_Party_Member_Hovered_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_PartyModuleCardSlot.WBP_PartyModuleCardSlot_C.Add Party Member Unhovered
//		Flags  -> (BlueprintCallable, BlueprintEvent)
void UWBP_PartyModuleCardSlot_C::Add_Party_Member_Unhovered()
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(81936);

	UWBP_PartyModuleCardSlot_C_Add_Party_Member_Unhovered_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_PartyModuleCardSlot.WBP_PartyModuleCardSlot_C.ExecuteUbergraph_WBP_PartyModuleCardSlot
//		Flags  -> (Final, HasDefaults)
// Parameters:
//		int                                                EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWBP_PartyModuleCardSlot_C::ExecuteUbergraph_WBP_PartyModuleCardSlot(int EntryPoint)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(81935);

	UWBP_PartyModuleCardSlot_C_ExecuteUbergraph_WBP_PartyModuleCardSlot_Params params {};
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
