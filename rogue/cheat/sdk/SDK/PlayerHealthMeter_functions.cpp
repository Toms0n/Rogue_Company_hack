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
//		Offset -> 0x0186ADD0
//		Name   -> Function PlayerHealthMeter.PlayerHealthMeter_C.UpdateColorCorrectionValue
//		Flags  -> (Native, Public, BlueprintCallable)
// Parameters:
//		SlateCore_EColorVisionDeficiency                   bpp__ColorCorrection__pf                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UPlayerHealthMeter_C::UpdateColorCorrectionValue(SlateCore_EColorVisionDeficiency bpp__ColorCorrection__pf)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(27647);

	UPlayerHealthMeter_C_UpdateColorCorrectionValue_Params params {};
	params.bpp__ColorCorrection__pf = bpp__ColorCorrection__pf;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x0186AD00
//		Name   -> Function PlayerHealthMeter.PlayerHealthMeter_C.SetImmune
//		Flags  -> (Native, Public, BlueprintCallable)
// Parameters:
//		bool                                               bpp__bEnabled__pf                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		bool                                               bpp__bImmediate__pf                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UPlayerHealthMeter_C::SetImmune(bool bpp__bEnabled__pf, bool bpp__bImmediate__pf)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(27646);

	UPlayerHealthMeter_C_SetImmune_Params params {};
	params.bpp__bEnabled__pf = bpp__bEnabled__pf;
	params.bpp__bImmediate__pf = bpp__bImmediate__pf;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x0186AC50
//		Name   -> Function PlayerHealthMeter.PlayerHealthMeter_C.SetHealthMeterState
//		Flags  -> (Native, Event, Public, BlueprintCallable)
// Parameters:
//		struct FPlayerHealthMeterState                     bpp__HealthMeterState__pf                                  (Parm, NoDestructor, NativeAccessSpecifierPublic)
void UPlayerHealthMeter_C::SetHealthMeterState(const struct FPlayerHealthMeterState& bpp__HealthMeterState__pf)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(27645);

	UPlayerHealthMeter_C_SetHealthMeterState_Params params {};
	params.bpp__HealthMeterState__pf = bpp__HealthMeterState__pf;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x01856A10
//		Name   -> Function PlayerHealthMeter.PlayerHealthMeter_C.SequenceEvent__ENTRYPOINTPlayerHealthMeter_2
//		Flags  -> (Native, Public, BlueprintCallable)
// Parameters:
//		class UImage*                                      bpp__OutlineBorder__pf                                     (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UPlayerHealthMeter_C::SequenceEvent__ENTRYPOINTPlayerHealthMeter_2(class UImage* bpp__OutlineBorder__pf)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(27644);

	UPlayerHealthMeter_C_SequenceEvent__ENTRYPOINTPlayerHealthMeter_2_Params params {};
	params.bpp__OutlineBorder__pf = bpp__OutlineBorder__pf;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x01856750
//		Name   -> Function PlayerHealthMeter.PlayerHealthMeter_C.SequenceEvent__ENTRYPOINTPlayerHealthMeter_1
//		Flags  -> (Native, Public, BlueprintCallable)
// Parameters:
//		class UImage*                                      bpp__OutlineBorder__pf                                     (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UPlayerHealthMeter_C::SequenceEvent__ENTRYPOINTPlayerHealthMeter_1(class UImage* bpp__OutlineBorder__pf)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(27643);

	UPlayerHealthMeter_C_SequenceEvent__ENTRYPOINTPlayerHealthMeter_1_Params params {};
	params.bpp__OutlineBorder__pf = bpp__OutlineBorder__pf;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x0186ABC0
//		Name   -> Function PlayerHealthMeter.PlayerHealthMeter_C.PreConstruct
//		Flags  -> (BlueprintCosmetic, Native, Event, Public)
// Parameters:
//		bool                                               bpp__IsDesignTime__pf                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UPlayerHealthMeter_C::PreConstruct(bool bpp__IsDesignTime__pf)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(27642);

	UPlayerHealthMeter_C_PreConstruct_Params params {};
	params.bpp__IsDesignTime__pf = bpp__IsDesignTime__pf;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00B58E90
//		Name   -> Function PlayerHealthMeter.PlayerHealthMeter_C.PlayDamagePulse
//		Flags  -> (Native, Public, BlueprintCallable)
void UPlayerHealthMeter_C::PlayDamagePulse()
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(27641);

	UPlayerHealthMeter_C_PlayDamagePulse_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x0186AB30
//		Name   -> Function PlayerHealthMeter.PlayerHealthMeter_C.OnEnableImmuneParams
//		Flags  -> (Native, Public, BlueprintCallable)
// Parameters:
//		class UImage*                                      bpp__OutlineBorder__pf                                     (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UPlayerHealthMeter_C::OnEnableImmuneParams(class UImage* bpp__OutlineBorder__pf)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(27640);

	UPlayerHealthMeter_C_OnEnableImmuneParams_Params params {};
	params.bpp__OutlineBorder__pf = bpp__OutlineBorder__pf;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x0186AAA0
//		Name   -> Function PlayerHealthMeter.PlayerHealthMeter_C.OnDisableImmuneParams
//		Flags  -> (Native, Public, BlueprintCallable)
// Parameters:
//		class UImage*                                      bpp__OutlineBorder__pf                                     (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UPlayerHealthMeter_C::OnDisableImmuneParams(class UImage* bpp__OutlineBorder__pf)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(27639);

	UPlayerHealthMeter_C_OnDisableImmuneParams_Params params {};
	params.bpp__OutlineBorder__pf = bpp__OutlineBorder__pf;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x018566A0
//		Name   -> Function PlayerHealthMeter.PlayerHealthMeter_C.InitNameplateWidgetOptimizations
//		Flags  -> (Native, Public, BlueprintCallable)
void UPlayerHealthMeter_C::InitNameplateWidgetOptimizations()
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(27638);

	UPlayerHealthMeter_C_InitNameplateWidgetOptimizations_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x01856110
//		Name   -> Function PlayerHealthMeter.PlayerHealthMeter_C.Construct
//		Flags  -> (BlueprintCosmetic, Native, Event, Public)
void UPlayerHealthMeter_C::Construct()
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(27637);

	UPlayerHealthMeter_C_Construct_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x01856130
//		Name   -> Function PlayerHealthMeter.PlayerHealthMeter_C.Apply State To Segments
//		Flags  -> (Native, Public, BlueprintCallable)
void UPlayerHealthMeter_C::Apply_State_To_Segments()
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(27636);

	UPlayerHealthMeter_C_Apply_State_To_Segments_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x0186A9D0
//		Name   -> Function PlayerHealthMeter.PlayerHealthMeter_C.Add Segments if Needed
//		Flags  -> (Native, Public, BlueprintCallable)
void UPlayerHealthMeter_C::Add_Segments_if_Needed()
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(27635);

	UPlayerHealthMeter_C_Add_Segments_if_Needed_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
