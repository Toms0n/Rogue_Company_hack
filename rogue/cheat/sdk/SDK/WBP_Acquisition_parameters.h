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

// Function WBP_Acquisition.WBP_Acquisition_C.OnGamepadItemHover
struct UWBP_Acquisition_C_OnGamepadItemHover_Params
{
	class UAcquisitionItemData*                        Item;                                                      // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UKSWidget*                                   Widget;                                                    // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function WBP_Acquisition.WBP_Acquisition_C.DisplayStoreItem
struct UWBP_Acquisition_C_DisplayStoreItem_Params
{
	class UAcquisitionItemData*                        AcqusitionItem;                                            // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function WBP_Acquisition.WBP_Acquisition_C.SetAcquisitionDisplay
struct UWBP_Acquisition_C_SetAcquisitionDisplay_Params
{
	class UKSAcquisition*                              Acquistion;                                                // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function WBP_Acquisition.WBP_Acquisition_C.NavigateBack
struct UWBP_Acquisition_C_NavigateBack_Params
{
	bool                                               ReturnValue;                                               // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
};

// Function WBP_Acquisition.WBP_Acquisition_C.PreConstruct
struct UWBP_Acquisition_C_PreConstruct_Params
{
	bool                                               IsDesignTime;                                              // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function WBP_Acquisition.WBP_Acquisition_C.InitializeWidget
struct UWBP_Acquisition_C_InitializeWidget_Params
{
	class APUMG_HUD*                                   HUD;                                                       // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function WBP_Acquisition.WBP_Acquisition_C.OnBackPrompt
struct UWBP_Acquisition_C_OnBackPrompt_Params
{
};

// Function WBP_Acquisition.WBP_Acquisition_C.InitializeWidgetNavigation
struct UWBP_Acquisition_C_InitializeWidgetNavigation_Params
{
};

// Function WBP_Acquisition.WBP_Acquisition_C.OnShown
struct UWBP_Acquisition_C_OnShown_Params
{
};

// Function WBP_Acquisition.WBP_Acquisition_C.OnHide
struct UWBP_Acquisition_C_OnHide_Params
{
};

// Function WBP_Acquisition.WBP_Acquisition_C.ExecuteUbergraph_WBP_Acquisition
struct UWBP_Acquisition_C_ExecuteUbergraph_WBP_Acquisition_Params
{
	int                                                EntryPoint;                                                // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
