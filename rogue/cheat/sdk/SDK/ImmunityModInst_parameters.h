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

// Function ImmunityModInst.ImmunityModInst_C.ReceiveBeginPlay
struct UImmunityModInst_C_ReceiveBeginPlay_Params
{
};

// Function ImmunityModInst.ImmunityModInst_C.ReceiveTick
struct UImmunityModInst_C_ReceiveTick_Params
{
	float                                              DeltaSeconds;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function ImmunityModInst.ImmunityModInst_C.ReceiveEndPlay
struct UImmunityModInst_C_ReceiveEndPlay_Params
{
	TEnumAsByte<Engine_EEndPlayReason>                 EndPlayReason;                                             // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function ImmunityModInst.ImmunityModInst_C.OnNewCharacterFoundation
struct UImmunityModInst_C_OnNewCharacterFoundation_Params
{
};

// Function ImmunityModInst.ImmunityModInst_C.ExecuteUbergraph_ImmunityModInst
struct UImmunityModInst_C_ExecuteUbergraph_ImmunityModInst_Params
{
	int                                                EntryPoint;                                                // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
