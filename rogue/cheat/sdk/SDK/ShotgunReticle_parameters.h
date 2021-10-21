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

// Function ShotgunReticle.ShotgunReticle_C.HandleBonusAmmo
struct UShotgunReticle_C_HandleBonusAmmo_Params
{
	unsigned char                                      AmmoChange;                                                // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      AmmoInClip;                                                // 0x0001(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               IsBonusAmmo;                                               // 0x0002(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function ShotgunReticle.ShotgunReticle_C.On Shotgun Crosshair Size Changed
struct UShotgunReticle_C_On_Shotgun_Crosshair_Size_Changed_Params
{
};

// Function ShotgunReticle.ShotgunReticle_C.Set Reticle Color
struct UShotgunReticle_C_Set_Reticle_Color_Params
{
	struct FLinearColor                                Color;                                                     // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function ShotgunReticle.ShotgunReticle_C.ChangeReticleSizeInternal
struct UShotgunReticle_C_ChangeReticleSizeInternal_Params
{
	int                                                CrosshairIndex;                                            // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function ShotgunReticle.ShotgunReticle_C.ChangeReticleSize
struct UShotgunReticle_C_ChangeReticleSize_Params
{
};

// Function ShotgunReticle.ShotgunReticle_C.IsValidWeaponType
struct UShotgunReticle_C_IsValidWeaponType_Params
{
	class UKSWeaponComponent*                          NewParam;                                                  // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               IsValidWeaponType;                                         // 0x0008(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function ShotgunReticle.ShotgunReticle_C.ShouldHideAmmoGauge
struct UShotgunReticle_C_ShouldHideAmmoGauge_Params
{
	class UKSWeaponComponent*                          NewParam;                                                  // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               bShouldHideAmmoGauge;                                      // 0x0008(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function ShotgunReticle.ShotgunReticle_C.UpdateReloadBarPosition
struct UShotgunReticle_C_UpdateReloadBarPosition_Params
{
};

// Function ShotgunReticle.ShotgunReticle_C.UpdateCrosshairDisplay
struct UShotgunReticle_C_UpdateCrosshairDisplay_Params
{
};

// Function ShotgunReticle.ShotgunReticle_C.FadeClipMeter
struct UShotgunReticle_C_FadeClipMeter_Params
{
};

// Function ShotgunReticle.ShotgunReticle_C.UpdateOffset
struct UShotgunReticle_C_UpdateOffset_Params
{
	float                                              Offset;                                                    // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function ShotgunReticle.ShotgunReticle_C.ChangeADS
struct UShotgunReticle_C_ChangeADS_Params
{
	bool                                               Active;                                                    // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function ShotgunReticle.ShotgunReticle_C.UpdateAmmoGauge
struct UShotgunReticle_C_UpdateAmmoGauge_Params
{
	class UKSWeaponComponent*                          Weapon;                                                    // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      AmmoChange;                                                // 0x0008(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               BonusAmmo;                                                 // 0x0009(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function ShotgunReticle.ShotgunReticle_C.OnInitialized
struct UShotgunReticle_C_OnInitialized_Params
{
};

// Function ShotgunReticle.ShotgunReticle_C.Tick
struct UShotgunReticle_C_Tick_Params
{
	struct FGeometry                                   MyGeometry;                                                // 0x0000(0x0058)  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	float                                              InDeltaTime;                                               // 0x0058(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function ShotgunReticle.ShotgunReticle_C.ExecuteUbergraph_ShotgunReticle
struct UShotgunReticle_C_ExecuteUbergraph_ShotgunReticle_Params
{
	int                                                EntryPoint;                                                // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
