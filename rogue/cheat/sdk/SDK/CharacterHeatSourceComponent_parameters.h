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

// Function CharacterHeatSourceComponent.CharacterHeatSourceComponent_C.ReceiveEndPlay
struct UCharacterHeatSourceComponent_C_ReceiveEndPlay_Params
{
	TEnumAsByte<Engine_EEndPlayReason>                 bpp__EndPlayReason__pf;                                    // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function CharacterHeatSourceComponent.CharacterHeatSourceComponent_C.OnThermalVisionStateChanged
struct UCharacterHeatSourceComponent_C_OnThermalVisionStateChanged_Params
{
	Killstreak_EModViewModeState                       bpp__NewState__pf;                                         // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function CharacterHeatSourceComponent.CharacterHeatSourceComponent_C.OnTemperatureChanged_Event_1
struct UCharacterHeatSourceComponent_C_OnTemperatureChanged_Event_1_Params
{
	class UKSHeatSourceComponent*                      bpp__HeatSource__pf__const;                                // 0x0000(0x0008)  (ConstParm, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              bpp__NewTemperature__pf;                                   // 0x0008(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function CharacterHeatSourceComponent.CharacterHeatSourceComponent_C.OnOwnerInfoUpdateNotify
struct UCharacterHeatSourceComponent_C_OnOwnerInfoUpdateNotify_Params
{
};

// Function CharacterHeatSourceComponent.CharacterHeatSourceComponent_C.ExecuteUbergraph_CharacterHeatSourceComponent_2
struct UCharacterHeatSourceComponent_C_ExecuteUbergraph_CharacterHeatSourceComponent_2_Params
{
	int                                                bpp__EntryPoint__pf;                                       // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function CharacterHeatSourceComponent.CharacterHeatSourceComponent_C.Conditionally Apply Temperature
struct UCharacterHeatSourceComponent_C_Conditionally_Apply_Temperature_Params
{
	float                                              bpp__AppliedxTemp__pfT;                                    // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function CharacterHeatSourceComponent.CharacterHeatSourceComponent_C.Apply Temperature
struct UCharacterHeatSourceComponent_C_Apply_Temperature_Params
{
	float                                              bpp__AppliedxTemp__pfT;                                    // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// DelegateFunction CharacterHeatSourceComponent.CharacterHeatSourceComponent_C.OnTempChanged__DelegateSignature
struct UCharacterHeatSourceComponent_C_OnTempChanged__DelegateSignature_Params
{
	class UKSHeatSourceComponent*                      bpp__HeatSource__pf;                                       // 0x0000(0x0008)  (ConstParm, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              bpp__NewTemperature__pf;                                   // 0x0008(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
