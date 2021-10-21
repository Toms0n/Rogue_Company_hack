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

// Function NeutralBombZone.NeutralBombZone_C.DoesLocalPlayerHaveBomb
struct ANeutralBombZone_C_DoesLocalPlayerHaveBomb_Params
{
	bool                                               ReturnValue;                                               // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
};

// Function NeutralBombZone.NeutralBombZone_C.ReceiveBeginPlay
struct ANeutralBombZone_C_ReceiveBeginPlay_Params
{
};

// Function NeutralBombZone.NeutralBombZone_C.UpdateZoneMaterial
struct ANeutralBombZone_C_UpdateZoneMaterial_Params
{
};

// Function NeutralBombZone.NeutralBombZone_C.RoundSetup
struct ANeutralBombZone_C_RoundSetup_Params
{
	struct FRoundInitState                             RoundInitState;                                            // 0x0000(0x0010)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor)
};

// Function NeutralBombZone.NeutralBombZone_C.TeamUpdated
struct ANeutralBombZone_C_TeamUpdated_Params
{
};

// Function NeutralBombZone.NeutralBombZone_C.Activated
struct ANeutralBombZone_C_Activated_Params
{
	bool                                               bActive;                                                   // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function NeutralBombZone.NeutralBombZone_C.On Objective State Changed
struct ANeutralBombZone_C_On_Objective_State_Changed_Params
{
};

// Function NeutralBombZone.NeutralBombZone_C.ExecuteUbergraph_NeutralBombZone
struct ANeutralBombZone_C_ExecuteUbergraph_NeutralBombZone_Params
{
	int                                                EntryPoint;                                                // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
