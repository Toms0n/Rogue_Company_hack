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

// Function PlayerHealthMeterSegment.PlayerHealthMeterSegment_C.SequenceEvent__ENTRYPOINTPlayerHealthMeterSegment_2
struct UPlayerHealthMeterSegment_C_SequenceEvent__ENTRYPOINTPlayerHealthMeterSegment_2_Params
{
	class UOverlay*                                    SliceImmuneOverlay;                                        // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function PlayerHealthMeterSegment.PlayerHealthMeterSegment_C.SequenceEvent__ENTRYPOINTPlayerHealthMeterSegment_1
struct UPlayerHealthMeterSegment_C_SequenceEvent__ENTRYPOINTPlayerHealthMeterSegment_1_Params
{
	class UOverlay*                                    SliceImmuneOverlay;                                        // 0x0000(0x0008)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function PlayerHealthMeterSegment.PlayerHealthMeterSegment_C.Get Enemy Health Color By Color Correction
struct UPlayerHealthMeterSegment_C_Get_Enemy_Health_Color_By_Color_Correction_Params
{
	struct FLinearColor                                Healthy;                                                   // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                                HealthyHighlight;                                          // 0x0010(0x0010)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                                Downed;                                                    // 0x0020(0x0010)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                                DownedHighlight;                                           // 0x0030(0x0010)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                                DownedEnemyBackground;                                     // 0x0040(0x0010)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function PlayerHealthMeterSegment.PlayerHealthMeterSegment_C.SetHealthColors
struct UPlayerHealthMeterSegment_C_SetHealthColors_Params
{
};

// Function PlayerHealthMeterSegment.PlayerHealthMeterSegment_C.SetIsDowned
struct UPlayerHealthMeterSegment_C_SetIsDowned_Params
{
	bool                                               IsDowned;                                                  // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function PlayerHealthMeterSegment.PlayerHealthMeterSegment_C.SetImmune
struct UPlayerHealthMeterSegment_C_SetImmune_Params
{
	bool                                               bEnabled;                                                  // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                               bImmediate;                                                // 0x0001(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function PlayerHealthMeterSegment.PlayerHealthMeterSegment_C.SetDotVisibility
struct UPlayerHealthMeterSegment_C_SetDotVisibility_Params
{
	bool                                               IsVisible;                                                 // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function PlayerHealthMeterSegment.PlayerHealthMeterSegment_C.PlayDamagePulse
struct UPlayerHealthMeterSegment_C_PlayDamagePulse_Params
{
};

// Function PlayerHealthMeterSegment.PlayerHealthMeterSegment_C.SetBonusState
struct UPlayerHealthMeterSegment_C_SetBonusState_Params
{
	bool                                               IsBonus;                                                   // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function PlayerHealthMeterSegment.PlayerHealthMeterSegment_C.SetSliceValues
struct UPlayerHealthMeterSegment_C_SetSliceValues_Params
{
	int                                                Health;                                                    // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                Armor;                                                     // 0x0004(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                Overheal;                                                  // 0x0008(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                Depleted;                                                  // 0x000C(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                Inactive;                                                  // 0x0010(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function PlayerHealthMeterSegment.PlayerHealthMeterSegment_C.OnDisableImmuneParams
struct UPlayerHealthMeterSegment_C_OnDisableImmuneParams_Params
{
	class UOverlay*                                    SliceImmuneOverlay;                                        // 0x0000(0x0008)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function PlayerHealthMeterSegment.PlayerHealthMeterSegment_C.OnEnableImmuneParams
struct UPlayerHealthMeterSegment_C_OnEnableImmuneParams_Params
{
	class UOverlay*                                    SliceImmuneOverlay;                                        // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function PlayerHealthMeterSegment.PlayerHealthMeterSegment_C.ExecuteUbergraph_PlayerHealthMeterSegment
struct UPlayerHealthMeterSegment_C_ExecuteUbergraph_PlayerHealthMeterSegment_Params
{
	int                                                EntryPoint;                                                // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
