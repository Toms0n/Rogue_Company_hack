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
//		Offset -> 0x01829390
//		Name   -> Function CharacterHeatSourceComponent.CharacterHeatSourceComponent_C.ReceiveEndPlay
//		Flags  -> (Native, Event, Public)
// Parameters:
//		TEnumAsByte<Engine_EEndPlayReason>                 bpp__EndPlayReason__pf                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UCharacterHeatSourceComponent_C::ReceiveEndPlay(TEnumAsByte<Engine_EEndPlayReason> bpp__EndPlayReason__pf)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(28331);

	UCharacterHeatSourceComponent_C_ReceiveEndPlay_Params params {};
	params.bpp__EndPlayReason__pf = bpp__EndPlayReason__pf;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x018292F0
//		Name   -> Function CharacterHeatSourceComponent.CharacterHeatSourceComponent_C.OnThermalVisionStateChanged
//		Flags  -> (BlueprintCosmetic, Native, Event, Public)
// Parameters:
//		Killstreak_EModViewModeState                       bpp__NewState__pf                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UCharacterHeatSourceComponent_C::OnThermalVisionStateChanged(Killstreak_EModViewModeState bpp__NewState__pf)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(28330);

	UCharacterHeatSourceComponent_C_OnThermalVisionStateChanged_Params params {};
	params.bpp__NewState__pf = bpp__NewState__pf;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x01829220
//		Name   -> Function CharacterHeatSourceComponent.CharacterHeatSourceComponent_C.OnTemperatureChanged_Event_1
//		Flags  -> (Native, Public, BlueprintCallable)
// Parameters:
//		class UKSHeatSourceComponent*                      bpp__HeatSource__pf__const                                 (ConstParm, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		float                                              bpp__NewTemperature__pf                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UCharacterHeatSourceComponent_C::OnTemperatureChanged_Event_1(class UKSHeatSourceComponent* bpp__HeatSource__pf__const, float bpp__NewTemperature__pf)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(28329);

	UCharacterHeatSourceComponent_C_OnTemperatureChanged_Event_1_Params params {};
	params.bpp__HeatSource__pf__const = bpp__HeatSource__pf__const;
	params.bpp__NewTemperature__pf = bpp__NewTemperature__pf;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x01829200
//		Name   -> Function CharacterHeatSourceComponent.CharacterHeatSourceComponent_C.OnOwnerInfoUpdateNotify
//		Flags  -> (Native, Event, Public, BlueprintCallable)
void UCharacterHeatSourceComponent_C::OnOwnerInfoUpdateNotify()
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(28328);

	UCharacterHeatSourceComponent_C_OnOwnerInfoUpdateNotify_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x01829180
//		Name   -> Function CharacterHeatSourceComponent.CharacterHeatSourceComponent_C.ExecuteUbergraph_CharacterHeatSourceComponent_2
//		Flags  -> (Final, Native, Public)
// Parameters:
//		int                                                bpp__EntryPoint__pf                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UCharacterHeatSourceComponent_C::ExecuteUbergraph_CharacterHeatSourceComponent_2(int bpp__EntryPoint__pf)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(28327);

	UCharacterHeatSourceComponent_C_ExecuteUbergraph_CharacterHeatSourceComponent_2_Params params {};
	params.bpp__EntryPoint__pf = bpp__EntryPoint__pf;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x01829100
//		Name   -> Function CharacterHeatSourceComponent.CharacterHeatSourceComponent_C.Conditionally Apply Temperature
//		Flags  -> (Native, Public, BlueprintCallable)
// Parameters:
//		float                                              bpp__AppliedxTemp__pfT                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UCharacterHeatSourceComponent_C::Conditionally_Apply_Temperature(float bpp__AppliedxTemp__pfT)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(28326);

	UCharacterHeatSourceComponent_C_Conditionally_Apply_Temperature_Params params {};
	params.bpp__AppliedxTemp__pfT = bpp__AppliedxTemp__pfT;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x01828F50
//		Name   -> Function CharacterHeatSourceComponent.CharacterHeatSourceComponent_C.Apply Temperature
//		Flags  -> (Native, Public, BlueprintCallable)
// Parameters:
//		float                                              bpp__AppliedxTemp__pfT                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UCharacterHeatSourceComponent_C::Apply_Temperature(float bpp__AppliedxTemp__pfT)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(28325);

	UCharacterHeatSourceComponent_C_Apply_Temperature_Params params {};
	params.bpp__AppliedxTemp__pfT = bpp__AppliedxTemp__pfT;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> DelegateFunction CharacterHeatSourceComponent.CharacterHeatSourceComponent_C.OnTempChanged__DelegateSignature
//		Flags  -> (Public, Delegate)
// Parameters:
//		class UKSHeatSourceComponent*                      bpp__HeatSource__pf                                        (ConstParm, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		float                                              bpp__NewTemperature__pf                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UCharacterHeatSourceComponent_C::OnTempChanged__DelegateSignature(class UKSHeatSourceComponent* bpp__HeatSource__pf, float bpp__NewTemperature__pf)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(28324);

	UCharacterHeatSourceComponent_C_OnTempChanged__DelegateSignature_Params params {};
	params.bpp__HeatSource__pf = bpp__HeatSource__pf;
	params.bpp__NewTemperature__pf = bpp__NewTemperature__pf;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
