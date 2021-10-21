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

// Function WBP_ControllerPrompt.WBP_ControllerPrompt_C.SetButtonPrompt
struct UWBP_ControllerPrompt_C_SetButtonPrompt_Params
{
	struct FKey                                        Button;                                                    // 0x0000(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
};

// Function WBP_ControllerPrompt.WBP_ControllerPrompt_C.SetIsCancel
struct UWBP_ControllerPrompt_C_SetIsCancel_Params
{
};

// Function WBP_ControllerPrompt.WBP_ControllerPrompt_C.SetIsConfirm
struct UWBP_ControllerPrompt_C_SetIsConfirm_Params
{
};

// Function WBP_ControllerPrompt.WBP_ControllerPrompt_C.SetPromptFromButton
struct UWBP_ControllerPrompt_C_SetPromptFromButton_Params
{
	struct FKey                                        Button;                                                    // 0x0000(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
};

// Function WBP_ControllerPrompt.WBP_ControllerPrompt_C.UpdateFromSetValues
struct UWBP_ControllerPrompt_C_UpdateFromSetValues_Params
{
};

// Function WBP_ControllerPrompt.WBP_ControllerPrompt_C.SetInputAction
struct UWBP_ControllerPrompt_C_SetInputAction_Params
{
	struct FName                                       ActionName;                                                // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function WBP_ControllerPrompt.WBP_ControllerPrompt_C.PreConstruct
struct UWBP_ControllerPrompt_C_PreConstruct_Params
{
	bool                                               IsDesignTime;                                              // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function WBP_ControllerPrompt.WBP_ControllerPrompt_C.Construct
struct UWBP_ControllerPrompt_C_Construct_Params
{
};

// Function WBP_ControllerPrompt.WBP_ControllerPrompt_C.ExecuteUbergraph_WBP_ControllerPrompt
struct UWBP_ControllerPrompt_C_ExecuteUbergraph_WBP_ControllerPrompt_Params
{
	int                                                EntryPoint;                                                // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
