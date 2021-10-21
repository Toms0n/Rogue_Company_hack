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

// Function WBP_VoucherAcquisition.WBP_VoucherAcquisition_C.OnScrollRight
struct UWBP_VoucherAcquisition_C_OnScrollRight_Params
{
	KillstreakUINew_EContextPromptHoldReleaseState     Status;                                                    // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function WBP_VoucherAcquisition.WBP_VoucherAcquisition_C.OnScrollLeft
struct UWBP_VoucherAcquisition_C_OnScrollLeft_Params
{
	KillstreakUINew_EContextPromptHoldReleaseState     Status;                                                    // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function WBP_VoucherAcquisition.WBP_VoucherAcquisition_C.TickScroll
struct UWBP_VoucherAcquisition_C_TickScroll_Params
{
	float                                              fPercentage;                                               // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function WBP_VoucherAcquisition.WBP_VoucherAcquisition_C.DisplayVoucherAcquisitions
struct UWBP_VoucherAcquisition_C_DisplayVoucherAcquisitions_Params
{
};

// Function WBP_VoucherAcquisition.WBP_VoucherAcquisition_C.AttemptGetAcquisition
struct UWBP_VoucherAcquisition_C_AttemptGetAcquisition_Params
{
	bool                                               ReturnValue;                                               // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
};

// Function WBP_VoucherAcquisition.WBP_VoucherAcquisition_C.OnRedeemDLC
struct UWBP_VoucherAcquisition_C_OnRedeemDLC_Params
{
	class UWidget*                                     Widget;                                                    // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function WBP_VoucherAcquisition.WBP_VoucherAcquisition_C.NavigateBack
struct UWBP_VoucherAcquisition_C_NavigateBack_Params
{
	bool                                               ReturnValue;                                               // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
};

// Function WBP_VoucherAcquisition.WBP_VoucherAcquisition_C.Tick
struct UWBP_VoucherAcquisition_C_Tick_Params
{
	struct FGeometry                                   MyGeometry;                                                // 0x0000(0x0058)  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	float                                              InDeltaTime;                                               // 0x0058(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function WBP_VoucherAcquisition.WBP_VoucherAcquisition_C.InitializeWidget
struct UWBP_VoucherAcquisition_C_InitializeWidget_Params
{
	class APUMG_HUD*                                   HUD;                                                       // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function WBP_VoucherAcquisition.WBP_VoucherAcquisition_C.InitializeWidgetNavigation
struct UWBP_VoucherAcquisition_C_InitializeWidgetNavigation_Params
{
};

// Function WBP_VoucherAcquisition.WBP_VoucherAcquisition_C.OnShown
struct UWBP_VoucherAcquisition_C_OnShown_Params
{
};

// Function WBP_VoucherAcquisition.WBP_VoucherAcquisition_C.PreConstruct
struct UWBP_VoucherAcquisition_C_PreConstruct_Params
{
	bool                                               IsDesignTime;                                              // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function WBP_VoucherAcquisition.WBP_VoucherAcquisition_C.ExecuteUbergraph_WBP_VoucherAcquisition
struct UWBP_VoucherAcquisition_C_ExecuteUbergraph_WBP_VoucherAcquisition_Params
{
	int                                                EntryPoint;                                                // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
