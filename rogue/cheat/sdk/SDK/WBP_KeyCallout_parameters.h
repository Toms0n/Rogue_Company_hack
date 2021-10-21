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

// Function WBP_KeyCallout.WBP_KeyCallout_C.SetKeybind
struct UWBP_KeyCallout_C_SetKeybind_Params
{
	struct FName                                       KeyBind;                                                   // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function WBP_KeyCallout.WBP_KeyCallout_C.UpdateKeyDisplay
struct UWBP_KeyCallout_C_UpdateKeyDisplay_Params
{
};

// Function WBP_KeyCallout.WBP_KeyCallout_C.SetKey
struct UWBP_KeyCallout_C_SetKey_Params
{
	struct FKey                                        Key;                                                       // 0x0000(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
};

// Function WBP_KeyCallout.WBP_KeyCallout_C.PreConstruct
struct UWBP_KeyCallout_C_PreConstruct_Params
{
	bool                                               IsDesignTime;                                              // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function WBP_KeyCallout.WBP_KeyCallout_C.ExecuteUbergraph_WBP_KeyCallout
struct UWBP_KeyCallout_C_ExecuteUbergraph_WBP_KeyCallout_Params
{
	int                                                EntryPoint;                                                // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
