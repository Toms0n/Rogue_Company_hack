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

// Function WBP_AmmoWrapper.WBP_AmmoWrapper_C.GetAmmoWidgets
struct UWBP_AmmoWrapper_C_GetAmmoWidgets_Params
{
	TArray<class UWBP_AmmoCount_C*>                    AmmoWidgtes;                                               // 0x0000(0x0010)  (Parm, OutParm, ContainsInstancedReference, HasGetValueTypeHash)
};

// Function WBP_AmmoWrapper.WBP_AmmoWrapper_C.OnAmmoChanged
struct UWBP_AmmoWrapper_C_OnAmmoChanged_Params
{
	class UKSWeaponComponent*                          Weapon;                                                    // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      AmmoChange;                                                // 0x0008(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               BonusAmmo;                                                 // 0x0009(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function WBP_AmmoWrapper.WBP_AmmoWrapper_C.SetInitialAmmoCount
struct UWBP_AmmoWrapper_C_SetInitialAmmoCount_Params
{
	class UKSWeaponComponent*                          Weapon;                                                    // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function WBP_AmmoWrapper.WBP_AmmoWrapper_C.AddAmmoCount
struct UWBP_AmmoWrapper_C_AddAmmoCount_Params
{
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
