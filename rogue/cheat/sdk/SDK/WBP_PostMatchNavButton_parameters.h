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

// Function WBP_PostMatchNavButton.WBP_PostMatchNavButton_C.NavigateConfirm
struct UWBP_PostMatchNavButton_C_NavigateConfirm_Params
{
	bool                                               ReturnValue;                                               // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
};

// Function WBP_PostMatchNavButton.WBP_PostMatchNavButton_C.GamepadConfirm
struct UWBP_PostMatchNavButton_C_GamepadConfirm_Params
{
};

// Function WBP_PostMatchNavButton.WBP_PostMatchNavButton_C.SetActive
struct UWBP_PostMatchNavButton_C_SetActive_Params
{
	bool                                               IsActive;                                                  // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function WBP_PostMatchNavButton.WBP_PostMatchNavButton_C.Construct
struct UWBP_PostMatchNavButton_C_Construct_Params
{
};

// Function WBP_PostMatchNavButton.WBP_PostMatchNavButton_C.InitializeWidget
struct UWBP_PostMatchNavButton_C_InitializeWidget_Params
{
	class APUMG_HUD*                                   HUD;                                                       // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function WBP_PostMatchNavButton.WBP_PostMatchNavButton_C.PreConstruct
struct UWBP_PostMatchNavButton_C_PreConstruct_Params
{
	bool                                               IsDesignTime;                                              // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function WBP_PostMatchNavButton.WBP_PostMatchNavButton_C.HandleNavTabSelected
struct UWBP_PostMatchNavButton_C_HandleNavTabSelected_Params
{
	class UKSNavTabWidget*                             SelectedNavTab;                                            // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function WBP_PostMatchNavButton.WBP_PostMatchNavButton_C.ExecuteUbergraph_WBP_PostMatchNavButton
struct UWBP_PostMatchNavButton_C_ExecuteUbergraph_WBP_PostMatchNavButton_Params
{
	int                                                EntryPoint;                                                // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function WBP_PostMatchNavButton.WBP_PostMatchNavButton_C.OnClicked__DelegateSignature
struct UWBP_PostMatchNavButton_C_OnClicked__DelegateSignature_Params
{
	class UWBP_PostMatchNavButton_C*                   SelectedWidget;                                            // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
