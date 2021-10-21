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

// Function ReloadOnDodgeRollModInst.ReloadOnDodgeRollModInst_C.MagDropForDodgeReload
struct UReloadOnDodgeRollModInst_C_MagDropForDodgeReload_Params
{
	class UKSWeaponComponent*                          Master_Weapon_Ref;                                         // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function ReloadOnDodgeRollModInst.ReloadOnDodgeRollModInst_C.StopAnimationFromEvent
struct UReloadOnDodgeRollModInst_C_StopAnimationFromEvent_Params
{
	struct FName                                       AnimEventName;                                             // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UKSCharacterAnimInst*                        CharAnimInstance;                                          // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               ReturnValue;                                               // 0x0010(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
};

// Function ReloadOnDodgeRollModInst.ReloadOnDodgeRollModInst_C.ReactsToAnimationEvent
struct UReloadOnDodgeRollModInst_C_ReactsToAnimationEvent_Params
{
	struct FName                                       AnimEventName;                                             // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                Priority;                                                  // 0x0008(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               ReturnValue;                                               // 0x000C(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
};

// Function ReloadOnDodgeRollModInst.ReloadOnDodgeRollModInst_C.OnDodgeRoll
struct UReloadOnDodgeRollModInst_C_OnDodgeRoll_Params
{
	float                                              RollDuration;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function ReloadOnDodgeRollModInst.ReloadOnDodgeRollModInst_C.RemotePlayerAudio
struct UReloadOnDodgeRollModInst_C_RemotePlayerAudio_Params
{
};

// Function ReloadOnDodgeRollModInst.ReloadOnDodgeRollModInst_C.Dodge Reload Mod Notified
struct UReloadOnDodgeRollModInst_C_Dodge_Reload_Mod_Notified_Params
{
};

// Function ReloadOnDodgeRollModInst.ReloadOnDodgeRollModInst_C.ExecuteUbergraph_ReloadOnDodgeRollModInst
struct UReloadOnDodgeRollModInst_C_ExecuteUbergraph_ReloadOnDodgeRollModInst_Params
{
	int                                                EntryPoint;                                                // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
