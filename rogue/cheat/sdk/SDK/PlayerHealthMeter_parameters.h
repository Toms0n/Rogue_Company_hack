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

// Function PlayerHealthMeter.PlayerHealthMeter_C.UpdateColorCorrectionValue
struct UPlayerHealthMeter_C_UpdateColorCorrectionValue_Params
{
	SlateCore_EColorVisionDeficiency                   bpp__ColorCorrection__pf;                                  // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function PlayerHealthMeter.PlayerHealthMeter_C.SetImmune
struct UPlayerHealthMeter_C_SetImmune_Params
{
	bool                                               bpp__bEnabled__pf;                                         // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bpp__bImmediate__pf;                                       // 0x0001(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function PlayerHealthMeter.PlayerHealthMeter_C.SetHealthMeterState
struct UPlayerHealthMeter_C_SetHealthMeterState_Params
{
	struct FPlayerHealthMeterState                     bpp__HealthMeterState__pf;                                 // 0x0000(0x0018)  (Parm, NoDestructor, NativeAccessSpecifierPublic)
};

// Function PlayerHealthMeter.PlayerHealthMeter_C.SequenceEvent__ENTRYPOINTPlayerHealthMeter_2
struct UPlayerHealthMeter_C_SequenceEvent__ENTRYPOINTPlayerHealthMeter_2_Params
{
	class UImage*                                      bpp__OutlineBorder__pf;                                    // 0x0000(0x0008)  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function PlayerHealthMeter.PlayerHealthMeter_C.SequenceEvent__ENTRYPOINTPlayerHealthMeter_1
struct UPlayerHealthMeter_C_SequenceEvent__ENTRYPOINTPlayerHealthMeter_1_Params
{
	class UImage*                                      bpp__OutlineBorder__pf;                                    // 0x0000(0x0008)  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function PlayerHealthMeter.PlayerHealthMeter_C.PreConstruct
struct UPlayerHealthMeter_C_PreConstruct_Params
{
	bool                                               bpp__IsDesignTime__pf;                                     // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function PlayerHealthMeter.PlayerHealthMeter_C.PlayDamagePulse
struct UPlayerHealthMeter_C_PlayDamagePulse_Params
{
};

// Function PlayerHealthMeter.PlayerHealthMeter_C.OnEnableImmuneParams
struct UPlayerHealthMeter_C_OnEnableImmuneParams_Params
{
	class UImage*                                      bpp__OutlineBorder__pf;                                    // 0x0000(0x0008)  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function PlayerHealthMeter.PlayerHealthMeter_C.OnDisableImmuneParams
struct UPlayerHealthMeter_C_OnDisableImmuneParams_Params
{
	class UImage*                                      bpp__OutlineBorder__pf;                                    // 0x0000(0x0008)  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function PlayerHealthMeter.PlayerHealthMeter_C.InitNameplateWidgetOptimizations
struct UPlayerHealthMeter_C_InitNameplateWidgetOptimizations_Params
{
};

// Function PlayerHealthMeter.PlayerHealthMeter_C.Construct
struct UPlayerHealthMeter_C_Construct_Params
{
};

// Function PlayerHealthMeter.PlayerHealthMeter_C.Apply State To Segments
struct UPlayerHealthMeter_C_Apply_State_To_Segments_Params
{
};

// Function PlayerHealthMeter.PlayerHealthMeter_C.Add Segments if Needed
struct UPlayerHealthMeter_C_Add_Segments_if_Needed_Params
{
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
