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
//		Name   -> Function ReticleBase.ReticleBase_C.Set Reticle Color
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
//		struct FLinearColor                                Color                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UReticleBase_C::Set_Reticle_Color(const struct FLinearColor& Color)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(45345);

	UReticleBase_C_Set_Reticle_Color_Params params {};
	params.Color = Color;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function ReticleBase.ReticleBase_C.On Reticle Color Changed
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
void UReticleBase_C::On_Reticle_Color_Changed()
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(45344);

	UReticleBase_C_On_Reticle_Color_Changed_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function ReticleBase.ReticleBase_C.Set Reticle Width
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
//		int                                                Width                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UReticleBase_C::Set_Reticle_Width(int Width)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(45343);

	UReticleBase_C_Set_Reticle_Width_Params params {};
	params.Width = Width;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function ReticleBase.ReticleBase_C.Set Reticle Height
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
//		int                                                Height                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UReticleBase_C::Set_Reticle_Height(int Height)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(45342);

	UReticleBase_C_Set_Reticle_Height_Params params {};
	params.Height = Height;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function ReticleBase.ReticleBase_C.On Reticle Width Changed
//		Flags  -> (Private, BlueprintCallable, BlueprintEvent)
// Parameters:
void UReticleBase_C::On_Reticle_Width_Changed()
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(45341);

	UReticleBase_C_On_Reticle_Width_Changed_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function ReticleBase.ReticleBase_C.On Reticle Height Changed
//		Flags  -> (Private, BlueprintCallable, BlueprintEvent)
// Parameters:
void UReticleBase_C::On_Reticle_Height_Changed()
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(45340);

	UReticleBase_C_On_Reticle_Height_Changed_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function ReticleBase.ReticleBase_C.On Reticle Dimension Changed
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
void UReticleBase_C::On_Reticle_Dimension_Changed()
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(45339);

	UReticleBase_C_On_Reticle_Dimension_Changed_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function ReticleBase.ReticleBase_C.ChangeReticleSize
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
void UReticleBase_C::ChangeReticleSize()
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(45338);

	UReticleBase_C_ChangeReticleSize_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function ReticleBase.ReticleBase_C.GetAmmoState
//		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
//		class UKSWeaponComponent*                          NewParam                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		KillstreakUINew_EAmmoState                         Return_Value                                               (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UReticleBase_C::GetAmmoState(class UKSWeaponComponent* NewParam, KillstreakUINew_EAmmoState* Return_Value)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(45337);

	UReticleBase_C_GetAmmoState_Params params {};
	params.NewParam = NewParam;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Return_Value != nullptr)
		*Return_Value = params.Return_Value;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function ReticleBase.ReticleBase_C.HitConfirm
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
void UReticleBase_C::HitConfirm()
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(45336);

	UReticleBase_C_HitConfirm_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function ReticleBase.ReticleBase_C.ForceADS
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
//		bool                                               Active                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UReticleBase_C::ForceADS(bool Active)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(45335);

	UReticleBase_C_ForceADS_Params params {};
	params.Active = Active;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function ReticleBase.ReticleBase_C.GrenadeCook
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
//		bool                                               Active                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
//		float                                              TickPeriod                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UReticleBase_C::GrenadeCook(bool Active, float TickPeriod)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(45334);

	UReticleBase_C_GrenadeCook_Params params {};
	params.Active = Active;
	params.TickPeriod = TickPeriod;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function ReticleBase.ReticleBase_C.ChangeADS
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
//		bool                                               Active                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UReticleBase_C::ChangeADS(bool Active)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(45333);

	UReticleBase_C_ChangeADS_Params params {};
	params.Active = Active;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function ReticleBase.ReticleBase_C.KillConfirm
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
void UReticleBase_C::KillConfirm()
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(45332);

	UReticleBase_C_KillConfirm_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function ReticleBase.ReticleBase_C.Headshot
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
void UReticleBase_C::Headshot()
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(45331);

	UReticleBase_C_Headshot_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function ReticleBase.ReticleBase_C.UpdateOffset
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
//		float                                              Offset                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UReticleBase_C::UpdateOffset(float Offset)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(45330);

	UReticleBase_C_UpdateOffset_Params params {};
	params.Offset = Offset;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function ReticleBase.ReticleBase_C.OnInitialized
//		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
void UReticleBase_C::OnInitialized()
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(45329);

	UReticleBase_C_OnInitialized_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function ReticleBase.ReticleBase_C.ExecuteUbergraph_ReticleBase
//		Flags  -> (Final, HasDefaults)
// Parameters:
//		int                                                EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UReticleBase_C::ExecuteUbergraph_ReticleBase(int EntryPoint)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(45328);

	UReticleBase_C_ExecuteUbergraph_ReticleBase_Params params {};
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
