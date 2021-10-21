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

// Function WBP_RogueListing.WBP_RogueListing_C.GotoAdOffer
struct UWBP_RogueListing_C_GotoAdOffer_Params
{
};

// Function WBP_RogueListing.WBP_RogueListing_C.MakeFavorite
struct UWBP_RogueListing_C_MakeFavorite_Params
{
};

// Function WBP_RogueListing.WBP_RogueListing_C.OnGotoOffer
struct UWBP_RogueListing_C_OnGotoOffer_Params
{
	class UPUMG_StoreItem*                             StoreItem;                                                 // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function WBP_RogueListing.WBP_RogueListing_C.SetDLCDisplay
struct UWBP_RogueListing_C_SetDLCDisplay_Params
{
	bool                                               ShowDLC;                                                   // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function WBP_RogueListing.WBP_RogueListing_C.IsJobOwned
struct UWBP_RogueListing_C_IsJobOwned_Params
{
	class UKSJobItem*                                  JobItem;                                                   // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               owned;                                                     // 0x0008(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function WBP_RogueListing.WBP_RogueListing_C.SetRogueOwned
struct UWBP_RogueListing_C_SetRogueOwned_Params
{
	class UPUMG_StoreItem*                             StoreItem;                                                 // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function WBP_RogueListing.WBP_RogueListing_C.ResetFavoriteIcons
struct UWBP_RogueListing_C_ResetFavoriteIcons_Params
{
};

// Function WBP_RogueListing.WBP_RogueListing_C.OnJobHovered
struct UWBP_RogueListing_C_OnJobHovered_Params
{
	class UKSJobItem*                                  JobItem;                                                   // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function WBP_RogueListing.WBP_RogueListing_C.NavigateBack
struct UWBP_RogueListing_C_NavigateBack_Params
{
	bool                                               ReturnValue;                                               // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
};

// Function WBP_RogueListing.WBP_RogueListing_C.PopulateRoleFilters
struct UWBP_RogueListing_C_PopulateRoleFilters_Params
{
};

// Function WBP_RogueListing.WBP_RogueListing_C.GetJobButtons
struct UWBP_RogueListing_C_GetJobButtons_Params
{
	TArray<class UWBP_JobGeneralButton_C*>             JobButtons;                                                // 0x0000(0x0010)  (Parm, OutParm, ContainsInstancedReference, HasGetValueTypeHash)
};

// Function WBP_RogueListing.WBP_RogueListing_C.SetRowAndColumn
struct UWBP_RogueListing_C_SetRowAndColumn_Params
{
	class UGridSlot*                                   GridSlot;                                                  // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                Index;                                                     // 0x0008(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                MaxRowCount;                                               // 0x000C(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function WBP_RogueListing.WBP_RogueListing_C.ResetButtonState
struct UWBP_RogueListing_C_ResetButtonState_Params
{
};

// Function WBP_RogueListing.WBP_RogueListing_C.ResetJobList
struct UWBP_RogueListing_C_ResetJobList_Params
{
};

// Function WBP_RogueListing.WBP_RogueListing_C.PopulateJobList
struct UWBP_RogueListing_C_PopulateJobList_Params
{
};

// Function WBP_RogueListing.WBP_RogueListing_C.InitializeTickAnimations
struct UWBP_RogueListing_C_InitializeTickAnimations_Params
{
};

// Function WBP_RogueListing.WBP_RogueListing_C.OnShowScreenAnimUpdate
struct UWBP_RogueListing_C_OnShowScreenAnimUpdate_Params
{
	float                                              ElapsedTime;                                               // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              ElapsedAlpha;                                              // 0x0004(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function WBP_RogueListing.WBP_RogueListing_C.OnShowScreenAnimFinished
struct UWBP_RogueListing_C_OnShowScreenAnimFinished_Params
{
};

// Function WBP_RogueListing.WBP_RogueListing_C.StartShowScreenAnim
struct UWBP_RogueListing_C_StartShowScreenAnim_Params
{
};

// Function WBP_RogueListing.WBP_RogueListing_C.InitializeWidget
struct UWBP_RogueListing_C_InitializeWidget_Params
{
	class APUMG_HUD*                                   HUD;                                                       // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function WBP_RogueListing.WBP_RogueListing_C.HandleOnJobSelected
struct UWBP_RogueListing_C_HandleOnJobSelected_Params
{
	class UKSJobItem*                                  SelectedJob;                                               // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function WBP_RogueListing.WBP_RogueListing_C.OnShown
struct UWBP_RogueListing_C_OnShown_Params
{
};

// Function WBP_RogueListing.WBP_RogueListing_C.ExternalOnShown
struct UWBP_RogueListing_C_ExternalOnShown_Params
{
};

// Function WBP_RogueListing.WBP_RogueListing_C.InitializeWidgetNavigation
struct UWBP_RogueListing_C_InitializeWidgetNavigation_Params
{
};

// Function WBP_RogueListing.WBP_RogueListing_C.OnBackPrompt
struct UWBP_RogueListing_C_OnBackPrompt_Params
{
};

// Function WBP_RogueListing.WBP_RogueListing_C.HandleOnPurchasedItem
struct UWBP_RogueListing_C_HandleOnPurchasedItem_Params
{
	class UPUMG_StoreItem*                             Item;                                                      // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UPUMG_StoreItemPrice*                        Price;                                                     // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function WBP_RogueListing.WBP_RogueListing_C.OnItemGamepadHovered
struct UWBP_RogueListing_C_OnItemGamepadHovered_Params
{
	class UPUMG_Widget*                                Widget;                                                    // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               bHovered;                                                  // 0x0008(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function WBP_RogueListing.WBP_RogueListing_C.OnHide
struct UWBP_RogueListing_C_OnHide_Params
{
};

// Function WBP_RogueListing.WBP_RogueListing_C.BndEvt__WBP_RogueListingOfferPanel_K2Node_ComponentBoundEvent_0_OnOfferClicked__DelegateSignature
struct UWBP_RogueListing_C_BndEvt__WBP_RogueListingOfferPanel_K2Node_ComponentBoundEvent_0_OnOfferClicked__DelegateSignature_Params
{
	class UPUMG_StoreItem*                             StoreItem;                                                 // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function WBP_RogueListing.WBP_RogueListing_C.FocusGroupNavigateRightFailure
struct UWBP_RogueListing_C_FocusGroupNavigateRightFailure_Params
{
	int                                                FocusGroup;                                                // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function WBP_RogueListing.WBP_RogueListing_C.FocusGroupNavigateLeftFailure
struct UWBP_RogueListing_C_FocusGroupNavigateLeftFailure_Params
{
	int                                                FocusGroup;                                                // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function WBP_RogueListing.WBP_RogueListing_C.ExecuteUbergraph_WBP_RogueListing
struct UWBP_RogueListing_C_ExecuteUbergraph_WBP_RogueListing_Params
{
	int                                                EntryPoint;                                                // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function WBP_RogueListing.WBP_RogueListing_C.OnJobListReady__DelegateSignature
struct UWBP_RogueListing_C_OnJobListReady__DelegateSignature_Params
{
	TArray<class UWBP_JobGeneralButton_C*>             JobButtons;                                                // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, ContainsInstancedReference, HasGetValueTypeHash)
};

// Function WBP_RogueListing.WBP_RogueListing_C.OnJobSelected__DelegateSignature
struct UWBP_RogueListing_C_OnJobSelected__DelegateSignature_Params
{
	class UKSJobItem*                                  JobItem;                                                   // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
