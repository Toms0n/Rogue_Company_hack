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

// Function WBP_Store.WBP_Store_C.ConvertStoreTime
struct UWBP_Store_C_ConvertStoreTime_Params
{
	struct FText                                       Time;                                                      // 0x0000(0x0018)  (Parm, OutParm)
};

// Function WBP_Store.WBP_Store_C.UpdateStoreTimer
struct UWBP_Store_C_UpdateStoreTimer_Params
{
};

// Function WBP_Store.WBP_Store_C.GetKSStoreItemHelper
struct UWBP_Store_C_GetKSStoreItemHelper_Params
{
	class UKSStoreItemHelper*                          StoreItemHelper;                                           // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function WBP_Store.WBP_Store_C.Set Initial Scroll Position
struct UWBP_Store_C_Set_Initial_Scroll_Position_Params
{
};

// Function WBP_Store.WBP_Store_C.OnKeyDown
struct UWBP_Store_C_OnKeyDown_Params
{
	struct FGeometry                                   MyGeometry;                                                // 0x0000(0x0058)  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	struct FKeyEvent                                   InKeyEvent;                                                // 0x0058(0x0038)  (BlueprintVisible, BlueprintReadOnly, Parm)
	struct FEventReply                                 ReturnValue;                                               // 0x0090(0x00C0)  (Parm, OutParm, ReturnParm)
};

// Function WBP_Store.WBP_Store_C.OnPrevSection
struct UWBP_Store_C_OnPrevSection_Params
{
};

// Function WBP_Store.WBP_Store_C.OnNextSection
struct UWBP_Store_C_OnNextSection_Params
{
};

// Function WBP_Store.WBP_Store_C.OnStoreSectionSelected
struct UWBP_Store_C_OnStoreSectionSelected_Params
{
	int                                                Index;                                                     // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function WBP_Store.WBP_Store_C.AddSectionsToStore
struct UWBP_Store_C_AddSectionsToStore_Params
{
	TArray<class UKSStoreSection*>                     StoreSection;                                              // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, HasGetValueTypeHash)
};

// Function WBP_Store.WBP_Store_C.NavigateBack
struct UWBP_Store_C_NavigateBack_Params
{
	bool                                               ReturnValue;                                               // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
};

// Function WBP_Store.WBP_Store_C.PopulateStore
struct UWBP_Store_C_PopulateStore_Params
{
};

// Function WBP_Store.WBP_Store_C.Tick
struct UWBP_Store_C_Tick_Params
{
	struct FGeometry                                   MyGeometry;                                                // 0x0000(0x0058)  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	float                                              InDeltaTime;                                               // 0x0058(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function WBP_Store.WBP_Store_C.OnVendorsReceived
struct UWBP_Store_C_OnVendorsReceived_Params
{
	int                                                GroupId;                                                   // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<int>                                        VendorIds;                                                 // 0x0008(0x0010)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, HasGetValueTypeHash)
};

// Function WBP_Store.WBP_Store_C.InitializeWidget
struct UWBP_Store_C_InitializeWidget_Params
{
	class APUMG_HUD*                                   HUD;                                                       // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function WBP_Store.WBP_Store_C.OnBackPrompt
struct UWBP_Store_C_OnBackPrompt_Params
{
};

// Function WBP_Store.WBP_Store_C.InitializeWidgetNavigation
struct UWBP_Store_C_InitializeWidgetNavigation_Params
{
};

// Function WBP_Store.WBP_Store_C.OnShown
struct UWBP_Store_C_OnShown_Params
{
};

// Function WBP_Store.WBP_Store_C.OnHide
struct UWBP_Store_C_OnHide_Params
{
};

// Function WBP_Store.WBP_Store_C.OnOpenCodeRedeem
struct UWBP_Store_C_OnOpenCodeRedeem_Params
{
};

// Function WBP_Store.WBP_Store_C.FocusGroupNavigateLeftFailure
struct UWBP_Store_C_FocusGroupNavigateLeftFailure_Params
{
	int                                                FocusGroup;                                                // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function WBP_Store.WBP_Store_C.FocusGroupNavigateRightFailure
struct UWBP_Store_C_FocusGroupNavigateRightFailure_Params
{
	int                                                FocusGroup;                                                // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function WBP_Store.WBP_Store_C.OnPortalOffersReceived
struct UWBP_Store_C_OnPortalOffersReceived_Params
{
};

// Function WBP_Store.WBP_Store_C.OnPricePointsReveived
struct UWBP_Store_C_OnPricePointsReveived_Params
{
};

// Function WBP_Store.WBP_Store_C.ExecuteUbergraph_WBP_Store
struct UWBP_Store_C_ExecuteUbergraph_WBP_Store_Params
{
	int                                                EntryPoint;                                                // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
