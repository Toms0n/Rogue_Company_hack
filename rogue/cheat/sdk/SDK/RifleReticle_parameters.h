#pragma once

// Name: roguecompany, Version: 425


/*!!DEFINE!!*/

/*!!HELPER_DEF!!*/

/*!!HELPER_INC!!*/

#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

namespace CG
{
//---------------------------------------------------------------------------
// Parameters
//---------------------------------------------------------------------------

// Function RifleReticle.RifleReticle_C.HandleBonusAmmo
struct URifleReticle_C_HandleBonusAmmo_Params
{
	unsigned char                                      AmmoChange;                                                // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      AmmoInClip;                                                // 0x0001(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               IsBonusAmmo;                                               // 0x0002(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function RifleReticle.RifleReticle_C.Set Reticle Color
struct URifleReticle_C_Set_Reticle_Color_Params
{
	struct FLinearColor                                Color;                                                     // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function RifleReticle.RifleReticle_C.Set Reticle Height
struct URifleReticle_C_Set_Reticle_Height_Params
{
	int                                                Height;                                                    // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function RifleReticle.RifleReticle_C.Set Reticle Width
struct URifleReticle_C_Set_Reticle_Width_Params
{
	int                                                Width;                                                     // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function RifleReticle.RifleReticle_C.ChangeReticleSizeInternal
struct URifleReticle_C_ChangeReticleSizeInternal_Params
{
	int                                                Center_Dot_Index;                                          // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                Crosshair_Index;                                           // 0x0004(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function RifleReticle.RifleReticle_C.ChangeReticleSize
struct URifleReticle_C_ChangeReticleSize_Params
{
};

// Function RifleReticle.RifleReticle_C.HideAmmoProgressCircle
struct URifleReticle_C_HideAmmoProgressCircle_Params
{
	bool                                               IsADS;                                                     // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function RifleReticle.RifleReticle_C.IsValidWeaponType
struct URifleReticle_C_IsValidWeaponType_Params
{
	class UKSWeaponComponent*                          NewParam1;                                                 // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               IsValidWeaponType;                                         // 0x0008(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function RifleReticle.RifleReticle_C.ShouldHideAmmoGauge
struct URifleReticle_C_ShouldHideAmmoGauge_Params
{
	class UKSWeaponComponent*                          Weapon;                                                    // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               bShouldHideAmmoGauge;                                      // 0x0008(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function RifleReticle.RifleReticle_C.UpdateReticleDisplay
struct URifleReticle_C_UpdateReticleDisplay_Params
{
	float                                              InOffset;                                                  // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function RifleReticle.RifleReticle_C.Construct
struct URifleReticle_C_Construct_Params
{
};

// Function RifleReticle.RifleReticle_C.Tick
struct URifleReticle_C_Tick_Params
{
	struct FGeometry                                   MyGeometry;                                                // 0x0000(0x0058)  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	float                                              InDeltaTime;                                               // 0x0058(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function RifleReticle.RifleReticle_C.UpdateOffset
struct URifleReticle_C_UpdateOffset_Params
{
	float                                              Offset;                                                    // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function RifleReticle.RifleReticle_C.ChangeADS
struct URifleReticle_C_ChangeADS_Params
{
	bool                                               Active;                                                    // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function RifleReticle.RifleReticle_C.UpdateAmmoGauge
struct URifleReticle_C_UpdateAmmoGauge_Params
{
	class UKSWeaponComponent*                          Weapon;                                                    // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      AmmoChange;                                                // 0x0008(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               BonusAmmo;                                                 // 0x0009(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function RifleReticle.RifleReticle_C.UpdateMagazineOffset
struct URifleReticle_C_UpdateMagazineOffset_Params
{
	struct FVector2D                                   NewOffset;                                                 // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function RifleReticle.RifleReticle_C.ExecuteUbergraph_RifleReticle
struct URifleReticle_C_ExecuteUbergraph_RifleReticle_Params
{
	int                                                EntryPoint;                                                // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
