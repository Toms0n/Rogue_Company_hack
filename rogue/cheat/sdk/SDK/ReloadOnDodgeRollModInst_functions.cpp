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
//		Name   -> Function ReloadOnDodgeRollModInst.ReloadOnDodgeRollModInst_C.MagDropForDodgeReload
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
//		class UKSWeaponComponent*                          Master_Weapon_Ref                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UReloadOnDodgeRollModInst_C::MagDropForDodgeReload(class UKSWeaponComponent* Master_Weapon_Ref)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(27327);

	UReloadOnDodgeRollModInst_C_MagDropForDodgeReload_Params params {};
	params.Master_Weapon_Ref = Master_Weapon_Ref;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function ReloadOnDodgeRollModInst.ReloadOnDodgeRollModInst_C.StopAnimationFromEvent
//		Flags  -> (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
//		struct FName                                       AnimEventName                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		class UKSCharacterAnimInst*                        CharAnimInstance                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
bool UReloadOnDodgeRollModInst_C::StopAnimationFromEvent(const struct FName& AnimEventName, class UKSCharacterAnimInst* CharAnimInstance)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(27326);

	UReloadOnDodgeRollModInst_C_StopAnimationFromEvent_Params params {};
	params.AnimEventName = AnimEventName;
	params.CharAnimInstance = CharAnimInstance;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function ReloadOnDodgeRollModInst.ReloadOnDodgeRollModInst_C.ReactsToAnimationEvent
//		Flags  -> (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
//		struct FName                                       AnimEventName                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		int                                                Priority                                                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
bool UReloadOnDodgeRollModInst_C::ReactsToAnimationEvent(const struct FName& AnimEventName, int* Priority)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(27325);

	UReloadOnDodgeRollModInst_C_ReactsToAnimationEvent_Params params {};
	params.AnimEventName = AnimEventName;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Priority != nullptr)
		*Priority = params.Priority;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function ReloadOnDodgeRollModInst.ReloadOnDodgeRollModInst_C.OnDodgeRoll
//		Flags  -> (Event, Public, BlueprintEvent)
// Parameters:
//		float                                              RollDuration                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UReloadOnDodgeRollModInst_C::OnDodgeRoll(float RollDuration)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(27324);

	UReloadOnDodgeRollModInst_C_OnDodgeRoll_Params params {};
	params.RollDuration = RollDuration;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function ReloadOnDodgeRollModInst.ReloadOnDodgeRollModInst_C.RemotePlayerAudio
//		Flags  -> (Net, NetMulticast, BlueprintCallable, BlueprintEvent)
void UReloadOnDodgeRollModInst_C::RemotePlayerAudio()
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(27323);

	UReloadOnDodgeRollModInst_C_RemotePlayerAudio_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function ReloadOnDodgeRollModInst.ReloadOnDodgeRollModInst_C.Dodge Reload Mod Notified
//		Flags  -> (BlueprintCallable, BlueprintEvent)
void UReloadOnDodgeRollModInst_C::Dodge_Reload_Mod_Notified()
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(27322);

	UReloadOnDodgeRollModInst_C_Dodge_Reload_Mod_Notified_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function ReloadOnDodgeRollModInst.ReloadOnDodgeRollModInst_C.ExecuteUbergraph_ReloadOnDodgeRollModInst
//		Flags  -> (Final, HasDefaults)
// Parameters:
//		int                                                EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UReloadOnDodgeRollModInst_C::ExecuteUbergraph_ReloadOnDodgeRollModInst(int EntryPoint)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(27321);

	UReloadOnDodgeRollModInst_C_ExecuteUbergraph_ReloadOnDodgeRollModInst_Params params {};
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
