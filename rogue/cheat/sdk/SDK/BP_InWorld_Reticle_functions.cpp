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
//		Name   -> Function BP_InWorld_Reticle.BP_InWorld_Reticle_C.SetWeaponComponent
//		Flags  -> (BlueprintCallable, BlueprintEvent)
// Parameters:
//		class UKSWeaponComponent*                          WeaponComponent                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_InWorld_Reticle_C::SetWeaponComponent(class UKSWeaponComponent* WeaponComponent)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(27575);

	ABP_InWorld_Reticle_C_SetWeaponComponent_Params params {};
	params.WeaponComponent = WeaponComponent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function BP_InWorld_Reticle.BP_InWorld_Reticle_C.SetPossession
//		Flags  -> (BlueprintCallable, BlueprintEvent)
// Parameters:
//		class APlayerState*                                PlayerState                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_InWorld_Reticle_C::SetPossession(class APlayerState* PlayerState)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(27574);

	ABP_InWorld_Reticle_C_SetPossession_Params params {};
	params.PlayerState = PlayerState;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function BP_InWorld_Reticle.BP_InWorld_Reticle_C.ReceiveBeginPlay
//		Flags  -> (Event, Protected, BlueprintEvent)
void ABP_InWorld_Reticle_C::ReceiveBeginPlay()
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(27573);

	ABP_InWorld_Reticle_C_ReceiveBeginPlay_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function BP_InWorld_Reticle.BP_InWorld_Reticle_C.ExecuteUbergraph_BP_InWorld_Reticle
//		Flags  -> (Final)
// Parameters:
//		int                                                EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_InWorld_Reticle_C::ExecuteUbergraph_BP_InWorld_Reticle(int EntryPoint)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(27572);

	ABP_InWorld_Reticle_C_ExecuteUbergraph_BP_InWorld_Reticle_Params params {};
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
