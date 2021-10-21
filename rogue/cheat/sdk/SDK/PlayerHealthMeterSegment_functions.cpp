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
//		Name   -> Function PlayerHealthMeterSegment.PlayerHealthMeterSegment_C.SequenceEvent__ENTRYPOINTPlayerHealthMeterSegment_2
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
//		class UOverlay*                                    SliceImmuneOverlay                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UPlayerHealthMeterSegment_C::SequenceEvent__ENTRYPOINTPlayerHealthMeterSegment_2(class UOverlay* SliceImmuneOverlay)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(27456);

	UPlayerHealthMeterSegment_C_SequenceEvent__ENTRYPOINTPlayerHealthMeterSegment_2_Params params {};
	params.SliceImmuneOverlay = SliceImmuneOverlay;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function PlayerHealthMeterSegment.PlayerHealthMeterSegment_C.SequenceEvent__ENTRYPOINTPlayerHealthMeterSegment_1
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
//		class UOverlay*                                    SliceImmuneOverlay                                         (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UPlayerHealthMeterSegment_C::SequenceEvent__ENTRYPOINTPlayerHealthMeterSegment_1(class UOverlay* SliceImmuneOverlay)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(27455);

	UPlayerHealthMeterSegment_C_SequenceEvent__ENTRYPOINTPlayerHealthMeterSegment_1_Params params {};
	params.SliceImmuneOverlay = SliceImmuneOverlay;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function PlayerHealthMeterSegment.PlayerHealthMeterSegment_C.Get Enemy Health Color By Color Correction
//		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
//		struct FLinearColor                                Healthy                                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		struct FLinearColor                                HealthyHighlight                                           (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		struct FLinearColor                                Downed                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		struct FLinearColor                                DownedHighlight                                            (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		struct FLinearColor                                DownedEnemyBackground                                      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UPlayerHealthMeterSegment_C::Get_Enemy_Health_Color_By_Color_Correction(struct FLinearColor* Healthy, struct FLinearColor* HealthyHighlight, struct FLinearColor* Downed, struct FLinearColor* DownedHighlight, struct FLinearColor* DownedEnemyBackground)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(27454);

	UPlayerHealthMeterSegment_C_Get_Enemy_Health_Color_By_Color_Correction_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Healthy != nullptr)
		*Healthy = params.Healthy;
	if (HealthyHighlight != nullptr)
		*HealthyHighlight = params.HealthyHighlight;
	if (Downed != nullptr)
		*Downed = params.Downed;
	if (DownedHighlight != nullptr)
		*DownedHighlight = params.DownedHighlight;
	if (DownedEnemyBackground != nullptr)
		*DownedEnemyBackground = params.DownedEnemyBackground;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function PlayerHealthMeterSegment.PlayerHealthMeterSegment_C.SetHealthColors
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
void UPlayerHealthMeterSegment_C::SetHealthColors()
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(27453);

	UPlayerHealthMeterSegment_C_SetHealthColors_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function PlayerHealthMeterSegment.PlayerHealthMeterSegment_C.SetIsDowned
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
//		bool                                               IsDowned                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UPlayerHealthMeterSegment_C::SetIsDowned(bool IsDowned)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(27452);

	UPlayerHealthMeterSegment_C_SetIsDowned_Params params {};
	params.IsDowned = IsDowned;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function PlayerHealthMeterSegment.PlayerHealthMeterSegment_C.SetImmune
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
//		bool                                               bEnabled                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
//		bool                                               bImmediate                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UPlayerHealthMeterSegment_C::SetImmune(bool bEnabled, bool bImmediate)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(27451);

	UPlayerHealthMeterSegment_C_SetImmune_Params params {};
	params.bEnabled = bEnabled;
	params.bImmediate = bImmediate;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function PlayerHealthMeterSegment.PlayerHealthMeterSegment_C.SetDotVisibility
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
//		bool                                               IsVisible                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UPlayerHealthMeterSegment_C::SetDotVisibility(bool IsVisible)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(27450);

	UPlayerHealthMeterSegment_C_SetDotVisibility_Params params {};
	params.IsVisible = IsVisible;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function PlayerHealthMeterSegment.PlayerHealthMeterSegment_C.PlayDamagePulse
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
void UPlayerHealthMeterSegment_C::PlayDamagePulse()
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(27449);

	UPlayerHealthMeterSegment_C_PlayDamagePulse_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function PlayerHealthMeterSegment.PlayerHealthMeterSegment_C.SetBonusState
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
//		bool                                               IsBonus                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UPlayerHealthMeterSegment_C::SetBonusState(bool IsBonus)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(27448);

	UPlayerHealthMeterSegment_C_SetBonusState_Params params {};
	params.IsBonus = IsBonus;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function PlayerHealthMeterSegment.PlayerHealthMeterSegment_C.SetSliceValues
//		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
//		int                                                Health                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		int                                                Armor                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		int                                                Overheal                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		int                                                Depleted                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		int                                                Inactive                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UPlayerHealthMeterSegment_C::SetSliceValues(int Health, int Armor, int Overheal, int Depleted, int Inactive)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(27447);

	UPlayerHealthMeterSegment_C_SetSliceValues_Params params {};
	params.Health = Health;
	params.Armor = Armor;
	params.Overheal = Overheal;
	params.Depleted = Depleted;
	params.Inactive = Inactive;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function PlayerHealthMeterSegment.PlayerHealthMeterSegment_C.OnDisableImmuneParams
//		Flags  -> (BlueprintCallable, BlueprintEvent)
// Parameters:
//		class UOverlay*                                    SliceImmuneOverlay                                         (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UPlayerHealthMeterSegment_C::OnDisableImmuneParams(class UOverlay* SliceImmuneOverlay)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(27446);

	UPlayerHealthMeterSegment_C_OnDisableImmuneParams_Params params {};
	params.SliceImmuneOverlay = SliceImmuneOverlay;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function PlayerHealthMeterSegment.PlayerHealthMeterSegment_C.OnEnableImmuneParams
//		Flags  -> (BlueprintCallable, BlueprintEvent)
// Parameters:
//		class UOverlay*                                    SliceImmuneOverlay                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UPlayerHealthMeterSegment_C::OnEnableImmuneParams(class UOverlay* SliceImmuneOverlay)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(27445);

	UPlayerHealthMeterSegment_C_OnEnableImmuneParams_Params params {};
	params.SliceImmuneOverlay = SliceImmuneOverlay;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function PlayerHealthMeterSegment.PlayerHealthMeterSegment_C.ExecuteUbergraph_PlayerHealthMeterSegment
//		Flags  -> (Final)
// Parameters:
//		int                                                EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UPlayerHealthMeterSegment_C::ExecuteUbergraph_PlayerHealthMeterSegment(int EntryPoint)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(27444);

	UPlayerHealthMeterSegment_C_ExecuteUbergraph_PlayerHealthMeterSegment_Params params {};
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
