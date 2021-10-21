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

// Function MasterMelee_WeaponComponent.MasterMelee_WeaponComponent_C.TwistHipsOnFire
struct UMasterMelee_WeaponComponent_C_TwistHipsOnFire_Params
{
};

// Function MasterMelee_WeaponComponent.MasterMelee_WeaponComponent_C.PlayBulletNearMissSound
struct UMasterMelee_WeaponComponent_C_PlayBulletNearMissSound_Params
{
	struct FVector                                     bpp__InxTracexStart__pfTT;                                 // 0x0000(0x000C)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                                     bpp__InxTracexEnd__pfTT;                                   // 0x000C(0x000C)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<struct FHitResult>                          bpp__Hits__pf;                                             // 0x0018(0x0010)  (Parm, OutParm, ZeroConstructor, ContainsInstancedReference, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function MasterMelee_WeaponComponent.MasterMelee_WeaponComponent_C.On Thrown
struct UMasterMelee_WeaponComponent_C_On_Thrown_Params
{
	bool                                               bpp__Thrown__pf;                                           // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function MasterMelee_WeaponComponent.MasterMelee_WeaponComponent_C.On Lunge State Changed
struct UMasterMelee_WeaponComponent_C_On_Lunge_State_Changed_Params
{
	bool                                               bpp__IsLunging__pf;                                        // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function MasterMelee_WeaponComponent.MasterMelee_WeaponComponent_C.Lunge Attack
struct UMasterMelee_WeaponComponent_C_Lunge_Attack_Params
{
	bool                                               bpp__IsxLunging__pfT;                                      // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class AKSCharacter*                                bpp__CharacterxOwner__pfT;                                 // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function MasterMelee_WeaponComponent.MasterMelee_WeaponComponent_C.IsTooCloseToLunge
struct UMasterMelee_WeaponComponent_C_IsTooCloseToLunge_Params
{
	class AKSCharacter*                                bpp__CharacterOwner__pf;                                   // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bpp__TooClose__pf;                                         // 0x0008(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function MasterMelee_WeaponComponent.MasterMelee_WeaponComponent_C.Get Or Cache Player 3P Fire Montage
struct UMasterMelee_WeaponComponent_C_Get_Or_Cache_Player_3P_Fire_Montage_Params
{
	class UAnimMontage*                                bpp__FirexMontage__pfT;                                    // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function MasterMelee_WeaponComponent.MasterMelee_WeaponComponent_C.GetMeleeStillMontage
struct UMasterMelee_WeaponComponent_C_GetMeleeStillMontage_Params
{
	class UAnimMontage*                                bpp__Montage__pf;                                          // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function MasterMelee_WeaponComponent.MasterMelee_WeaponComponent_C.ExecuteUbergraph_MasterMelee_WeaponComponent_5
struct UMasterMelee_WeaponComponent_C_ExecuteUbergraph_MasterMelee_WeaponComponent_5_Params
{
	int                                                bpp__EntryPoint__pf;                                       // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function MasterMelee_WeaponComponent.MasterMelee_WeaponComponent_C.End Zipline
struct UMasterMelee_WeaponComponent_C_End_Zipline_Params
{
};

// Function MasterMelee_WeaponComponent.MasterMelee_WeaponComponent_C.CheckForMeleeAim
struct UMasterMelee_WeaponComponent_C_CheckForMeleeAim_Params
{
};

// DelegateFunction MasterMelee_WeaponComponent.MasterMelee_WeaponComponent_C.OnLungeChanged__DelegateSignature
struct UMasterMelee_WeaponComponent_C_OnLungeChanged__DelegateSignature_Params
{
	bool                                               bpp__IsLunging__pf;                                        // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// DelegateFunction MasterMelee_WeaponComponent.MasterMelee_WeaponComponent_C.OnEndZipline__DelegateSignature
struct UMasterMelee_WeaponComponent_C_OnEndZipline__DelegateSignature_Params
{
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
