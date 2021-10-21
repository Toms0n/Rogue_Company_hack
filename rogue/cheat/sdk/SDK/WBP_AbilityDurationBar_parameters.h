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

// Function WBP_AbilityDurationBar.WBP_AbilityDurationBar_C.SetDurationBar
struct UWBP_AbilityDurationBar_C_SetDurationBar_Params
{
	float                                              Duration;                                                  // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              RemainingTime;                                             // 0x0004(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UKSItem*                                     KSItem;                                                    // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function WBP_AbilityDurationBar.WBP_AbilityDurationBar_C.Tick
struct UWBP_AbilityDurationBar_C_Tick_Params
{
	struct FGeometry                                   MyGeometry;                                                // 0x0000(0x0058)  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	float                                              InDeltaTime;                                               // 0x0058(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function WBP_AbilityDurationBar.WBP_AbilityDurationBar_C.OpenUpdateGate
struct UWBP_AbilityDurationBar_C_OpenUpdateGate_Params
{
};

// Function WBP_AbilityDurationBar.WBP_AbilityDurationBar_C.CloseUpdateGate
struct UWBP_AbilityDurationBar_C_CloseUpdateGate_Params
{
};

// Function WBP_AbilityDurationBar.WBP_AbilityDurationBar_C.UpdateDurationDisplay
struct UWBP_AbilityDurationBar_C_UpdateDurationDisplay_Params
{
};

// Function WBP_AbilityDurationBar.WBP_AbilityDurationBar_C.HideDurationBar
struct UWBP_AbilityDurationBar_C_HideDurationBar_Params
{
};

// Function WBP_AbilityDurationBar.WBP_AbilityDurationBar_C.HandleModActivated
struct UWBP_AbilityDurationBar_C_HandleModActivated_Params
{
	bool                                               Activated;                                                 // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function WBP_AbilityDurationBar.WBP_AbilityDurationBar_C.SetupDurationBar
struct UWBP_AbilityDurationBar_C_SetupDurationBar_Params
{
	class UKSModInst_Activated*                        ModInstance;                                               // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function WBP_AbilityDurationBar.WBP_AbilityDurationBar_C.ExecuteUbergraph_WBP_AbilityDurationBar
struct UWBP_AbilityDurationBar_C_ExecuteUbergraph_WBP_AbilityDurationBar_Params
{
	int                                                EntryPoint;                                                // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
