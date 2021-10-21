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
//		Name   -> Function NeutralBombZone.NeutralBombZone_C.DoesLocalPlayerHaveBomb
//		Flags  -> (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
//		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
bool ANeutralBombZone_C::DoesLocalPlayerHaveBomb()
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(33492);

	ANeutralBombZone_C_DoesLocalPlayerHaveBomb_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function NeutralBombZone.NeutralBombZone_C.ReceiveBeginPlay
//		Flags  -> (Event, Protected, BlueprintEvent)
void ANeutralBombZone_C::ReceiveBeginPlay()
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(33491);

	ANeutralBombZone_C_ReceiveBeginPlay_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function NeutralBombZone.NeutralBombZone_C.UpdateZoneMaterial
//		Flags  -> (BlueprintCallable, BlueprintEvent)
void ANeutralBombZone_C::UpdateZoneMaterial()
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(33490);

	ANeutralBombZone_C_UpdateZoneMaterial_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function NeutralBombZone.NeutralBombZone_C.RoundSetup
//		Flags  -> (HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
//		struct FRoundInitState                             RoundInitState                                             (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor)
void ANeutralBombZone_C::RoundSetup(const struct FRoundInitState& RoundInitState)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(33489);

	ANeutralBombZone_C_RoundSetup_Params params {};
	params.RoundInitState = RoundInitState;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function NeutralBombZone.NeutralBombZone_C.TeamUpdated
//		Flags  -> (Event, Protected, BlueprintEvent)
void ANeutralBombZone_C::TeamUpdated()
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(33488);

	ANeutralBombZone_C_TeamUpdated_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function NeutralBombZone.NeutralBombZone_C.Activated
//		Flags  -> (Event, Protected, BlueprintEvent)
// Parameters:
//		bool                                               bActive                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void ANeutralBombZone_C::Activated(bool bActive)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(33487);

	ANeutralBombZone_C_Activated_Params params {};
	params.bActive = bActive;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function NeutralBombZone.NeutralBombZone_C.On Objective State Changed
//		Flags  -> (BlueprintCallable, BlueprintEvent)
void ANeutralBombZone_C::On_Objective_State_Changed()
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(33486);

	ANeutralBombZone_C_On_Objective_State_Changed_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function NeutralBombZone.NeutralBombZone_C.ExecuteUbergraph_NeutralBombZone
//		Flags  -> (Final, HasDefaults)
// Parameters:
//		int                                                EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ANeutralBombZone_C::ExecuteUbergraph_NeutralBombZone(int EntryPoint)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(33485);

	ANeutralBombZone_C_ExecuteUbergraph_NeutralBombZone_Params params {};
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
