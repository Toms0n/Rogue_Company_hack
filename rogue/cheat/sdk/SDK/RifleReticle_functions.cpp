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
//		Name   -> Function RifleReticle.RifleReticle_C.HandleBonusAmmo
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
//		unsigned char                                      AmmoChange                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		unsigned char                                      AmmoInClip                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		bool                                               IsBonusAmmo                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void URifleReticle_C::HandleBonusAmmo(unsigned char AmmoChange, unsigned char AmmoInClip, bool IsBonusAmmo)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(45753);

	URifleReticle_C_HandleBonusAmmo_Params params {};
	params.AmmoChange = AmmoChange;
	params.AmmoInClip = AmmoInClip;
	params.IsBonusAmmo = IsBonusAmmo;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function RifleReticle.RifleReticle_C.Set Reticle Color
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
//		struct FLinearColor                                Color                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void URifleReticle_C::Set_Reticle_Color(const struct FLinearColor& Color)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(45752);

	URifleReticle_C_Set_Reticle_Color_Params params {};
	params.Color = Color;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function RifleReticle.RifleReticle_C.Set Reticle Height
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
//		int                                                Height                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void URifleReticle_C::Set_Reticle_Height(int Height)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(45751);

	URifleReticle_C_Set_Reticle_Height_Params params {};
	params.Height = Height;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function RifleReticle.RifleReticle_C.Set Reticle Width
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
//		int                                                Width                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void URifleReticle_C::Set_Reticle_Width(int Width)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(45750);

	URifleReticle_C_Set_Reticle_Width_Params params {};
	params.Width = Width;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function RifleReticle.RifleReticle_C.ChangeReticleSizeInternal
//		Flags  -> (Protected, BlueprintCallable, BlueprintEvent)
// Parameters:
//		int                                                Center_Dot_Index                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		int                                                Crosshair_Index                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void URifleReticle_C::ChangeReticleSizeInternal(int Center_Dot_Index, int Crosshair_Index)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(45749);

	URifleReticle_C_ChangeReticleSizeInternal_Params params {};
	params.Center_Dot_Index = Center_Dot_Index;
	params.Crosshair_Index = Crosshair_Index;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function RifleReticle.RifleReticle_C.ChangeReticleSize
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
void URifleReticle_C::ChangeReticleSize()
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(45748);

	URifleReticle_C_ChangeReticleSize_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function RifleReticle.RifleReticle_C.HideAmmoProgressCircle
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
//		bool                                               IsADS                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void URifleReticle_C::HideAmmoProgressCircle(bool IsADS)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(45747);

	URifleReticle_C_HideAmmoProgressCircle_Params params {};
	params.IsADS = IsADS;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function RifleReticle.RifleReticle_C.IsValidWeaponType
//		Flags  -> (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
//		class UKSWeaponComponent*                          NewParam1                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		bool                                               IsValidWeaponType                                          (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
void URifleReticle_C::IsValidWeaponType(class UKSWeaponComponent* NewParam1, bool* IsValidWeaponType)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(45746);

	URifleReticle_C_IsValidWeaponType_Params params {};
	params.NewParam1 = NewParam1;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (IsValidWeaponType != nullptr)
		*IsValidWeaponType = params.IsValidWeaponType;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function RifleReticle.RifleReticle_C.ShouldHideAmmoGauge
//		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
//		class UKSWeaponComponent*                          Weapon                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		bool                                               bShouldHideAmmoGauge                                       (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
void URifleReticle_C::ShouldHideAmmoGauge(class UKSWeaponComponent* Weapon, bool* bShouldHideAmmoGauge)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(45745);

	URifleReticle_C_ShouldHideAmmoGauge_Params params {};
	params.Weapon = Weapon;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (bShouldHideAmmoGauge != nullptr)
		*bShouldHideAmmoGauge = params.bShouldHideAmmoGauge;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function RifleReticle.RifleReticle_C.UpdateReticleDisplay
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
//		float                                              InOffset                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void URifleReticle_C::UpdateReticleDisplay(float InOffset)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(45744);

	URifleReticle_C_UpdateReticleDisplay_Params params {};
	params.InOffset = InOffset;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function RifleReticle.RifleReticle_C.Construct
//		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
void URifleReticle_C::Construct()
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(45743);

	URifleReticle_C_Construct_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function RifleReticle.RifleReticle_C.Tick
//		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
//		struct FGeometry                                   MyGeometry                                                 (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
//		float                                              InDeltaTime                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void URifleReticle_C::Tick(const struct FGeometry& MyGeometry, float InDeltaTime)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(45742);

	URifleReticle_C_Tick_Params params {};
	params.MyGeometry = MyGeometry;
	params.InDeltaTime = InDeltaTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function RifleReticle.RifleReticle_C.UpdateOffset
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
//		float                                              Offset                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void URifleReticle_C::UpdateOffset(float Offset)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(45741);

	URifleReticle_C_UpdateOffset_Params params {};
	params.Offset = Offset;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function RifleReticle.RifleReticle_C.ChangeADS
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
//		bool                                               Active                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void URifleReticle_C::ChangeADS(bool Active)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(45740);

	URifleReticle_C_ChangeADS_Params params {};
	params.Active = Active;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function RifleReticle.RifleReticle_C.UpdateAmmoGauge
//		Flags  -> (BlueprintCallable, BlueprintEvent)
// Parameters:
//		class UKSWeaponComponent*                          Weapon                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		unsigned char                                      AmmoChange                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		bool                                               BonusAmmo                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void URifleReticle_C::UpdateAmmoGauge(class UKSWeaponComponent* Weapon, unsigned char AmmoChange, bool BonusAmmo)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(45739);

	URifleReticle_C_UpdateAmmoGauge_Params params {};
	params.Weapon = Weapon;
	params.AmmoChange = AmmoChange;
	params.BonusAmmo = BonusAmmo;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function RifleReticle.RifleReticle_C.UpdateMagazineOffset
//		Flags  -> (BlueprintCallable, BlueprintEvent)
// Parameters:
//		struct FVector2D                                   NewOffset                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void URifleReticle_C::UpdateMagazineOffset(const struct FVector2D& NewOffset)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(45441);

	URifleReticle_C_UpdateMagazineOffset_Params params {};
	params.NewOffset = NewOffset;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function RifleReticle.RifleReticle_C.ExecuteUbergraph_RifleReticle
//		Flags  -> (Final, HasDefaults)
// Parameters:
//		int                                                EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void URifleReticle_C::ExecuteUbergraph_RifleReticle(int EntryPoint)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(45440);

	URifleReticle_C_ExecuteUbergraph_RifleReticle_Params params {};
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
