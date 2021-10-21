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

// Function WBP_ActiveBoosterEntry.WBP_ActiveBoosterEntry_C.SetDisplayType
struct UWBP_ActiveBoosterEntry_C_SetDisplayType_Params
{
};

// Function WBP_ActiveBoosterEntry.WBP_ActiveBoosterEntry_C.PreConstruct
struct UWBP_ActiveBoosterEntry_C_PreConstruct_Params
{
	bool                                               IsDesignTime;                                              // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function WBP_ActiveBoosterEntry.WBP_ActiveBoosterEntry_C.Construct
struct UWBP_ActiveBoosterEntry_C_Construct_Params
{
};

// Function WBP_ActiveBoosterEntry.WBP_ActiveBoosterEntry_C.Set Item Properties
struct UWBP_ActiveBoosterEntry_C_Set_Item_Properties_Params
{
	struct FAccountConsumableDetails                   Item_Details;                                              // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
};

// Function WBP_ActiveBoosterEntry.WBP_ActiveBoosterEntry_C.ExecuteUbergraph_WBP_ActiveBoosterEntry
struct UWBP_ActiveBoosterEntry_C_ExecuteUbergraph_WBP_ActiveBoosterEntry_Params
{
	int                                                EntryPoint;                                                // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
