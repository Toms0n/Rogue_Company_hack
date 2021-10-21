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
//		Name   -> Function ShotgunReticle.ShotgunReticle_C.HandleBonusAmmo
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
//		unsigned char                                      AmmoChange                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		unsigned char                                      AmmoInClip                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		bool                                               IsBonusAmmo                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UShotgunReticle_C::HandleBonusAmmo(unsigned char AmmoChange, unsigned char AmmoInClip, bool IsBonusAmmo)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(45376);

	UShotgunReticle_C_HandleBonusAmmo_Params params {};
	params.AmmoChange = AmmoChange;
	params.AmmoInClip = AmmoInClip;
	params.IsBonusAmmo = IsBonusAmmo;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function ShotgunReticle.ShotgunReticle_C.On Shotgun Crosshair Size Changed
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
void UShotgunReticle_C::On_Shotgun_Crosshair_Size_Changed()
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(45375);

	UShotgunReticle_C_On_Shotgun_Crosshair_Size_Changed_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function ShotgunReticle.ShotgunReticle_C.Set Reticle Color
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
//		struct FLinearColor                                Color                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UShotgunReticle_C::Set_Reticle_Color(const struct FLinearColor& Color)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(45374);

	UShotgunReticle_C_Set_Reticle_Color_Params params {};
	params.Color = Color;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function ShotgunReticle.ShotgunReticle_C.ChangeReticleSizeInternal
//		Flags  -> (Protected, BlueprintCallable, BlueprintEvent)
// Parameters:
//		int                                                CrosshairIndex                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UShotgunReticle_C::ChangeReticleSizeInternal(int CrosshairIndex)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(45373);

	UShotgunReticle_C_ChangeReticleSizeInternal_Params params {};
	params.CrosshairIndex = CrosshairIndex;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function ShotgunReticle.ShotgunReticle_C.ChangeReticleSize
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
void UShotgunReticle_C::ChangeReticleSize()
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(45372);

	UShotgunReticle_C_ChangeReticleSize_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function ShotgunReticle.ShotgunReticle_C.IsValidWeaponType
//		Flags  -> (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
//		class UKSWeaponComponent*                          NewParam                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		bool                                               IsValidWeaponType                                          (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UShotgunReticle_C::IsValidWeaponType(class UKSWeaponComponent* NewParam, bool* IsValidWeaponType)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(45371);

	UShotgunReticle_C_IsValidWeaponType_Params params {};
	params.NewParam = NewParam;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (IsValidWeaponType != nullptr)
		*IsValidWeaponType = params.IsValidWeaponType;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function ShotgunReticle.ShotgunReticle_C.ShouldHideAmmoGauge
//		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
//		class UKSWeaponComponent*                          NewParam                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		bool                                               bShouldHideAmmoGauge                                       (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UShotgunReticle_C::ShouldHideAmmoGauge(class UKSWeaponComponent* NewParam, bool* bShouldHideAmmoGauge)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(45370);

	UShotgunReticle_C_ShouldHideAmmoGauge_Params params {};
	params.NewParam = NewParam;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (bShouldHideAmmoGauge != nullptr)
		*bShouldHideAmmoGauge = params.bShouldHideAmmoGauge;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function ShotgunReticle.ShotgunReticle_C.UpdateReloadBarPosition
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
void UShotgunReticle_C::UpdateReloadBarPosition()
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(45369);

	UShotgunReticle_C_UpdateReloadBarPosition_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function ShotgunReticle.ShotgunReticle_C.UpdateCrosshairDisplay
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
void UShotgunReticle_C::UpdateCrosshairDisplay()
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(45368);

	UShotgunReticle_C_UpdateCrosshairDisplay_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function ShotgunReticle.ShotgunReticle_C.FadeClipMeter
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
void UShotgunReticle_C::FadeClipMeter()
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(45367);

	UShotgunReticle_C_FadeClipMeter_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function ShotgunReticle.ShotgunReticle_C.UpdateOffset
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
//		float                                              Offset                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UShotgunReticle_C::UpdateOffset(float Offset)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(45366);

	UShotgunReticle_C_UpdateOffset_Params params {};
	params.Offset = Offset;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function ShotgunReticle.ShotgunReticle_C.ChangeADS
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
//		bool                                               Active                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UShotgunReticle_C::ChangeADS(bool Active)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(45365);

	UShotgunReticle_C_ChangeADS_Params params {};
	params.Active = Active;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function ShotgunReticle.ShotgunReticle_C.UpdateAmmoGauge
//		Flags  -> (BlueprintCallable, BlueprintEvent)
// Parameters:
//		class UKSWeaponComponent*                          Weapon                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		unsigned char                                      AmmoChange                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		bool                                               BonusAmmo                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UShotgunReticle_C::UpdateAmmoGauge(class UKSWeaponComponent* Weapon, unsigned char AmmoChange, bool BonusAmmo)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(45364);

	UShotgunReticle_C_UpdateAmmoGauge_Params params {};
	params.Weapon = Weapon;
	params.AmmoChange = AmmoChange;
	params.BonusAmmo = BonusAmmo;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function ShotgunReticle.ShotgunReticle_C.OnInitialized
//		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
void UShotgunReticle_C::OnInitialized()
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(45363);

	UShotgunReticle_C_OnInitialized_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function ShotgunReticle.ShotgunReticle_C.Tick
//		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
//		struct FGeometry                                   MyGeometry                                                 (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
//		float                                              InDeltaTime                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UShotgunReticle_C::Tick(const struct FGeometry& MyGeometry, float InDeltaTime)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(45362);

	UShotgunReticle_C_Tick_Params params {};
	params.MyGeometry = MyGeometry;
	params.InDeltaTime = InDeltaTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function ShotgunReticle.ShotgunReticle_C.ExecuteUbergraph_ShotgunReticle
//		Flags  -> (Final, HasDefaults)
// Parameters:
//		int                                                EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UShotgunReticle_C::ExecuteUbergraph_ShotgunReticle(int EntryPoint)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(45361);

	UShotgunReticle_C_ExecuteUbergraph_ShotgunReticle_Params params {};
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
