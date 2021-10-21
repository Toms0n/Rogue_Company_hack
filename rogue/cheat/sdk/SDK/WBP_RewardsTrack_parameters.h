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

// Function WBP_RewardsTrack.WBP_RewardsTrack_C.GetCurrentPosition
struct UWBP_RewardsTrack_C_GetCurrentPosition_Params
{
	class URewardsTrackSavedPosition_C*                ReturnValue;                                               // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function WBP_RewardsTrack.WBP_RewardsTrack_C.OnInputStateChanged
struct UWBP_RewardsTrack_C_OnInputStateChanged_Params
{
	TEnumAsByte<PlatformGameFramework_EPGAME_INPUT_STATE> InputState;                                                // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function WBP_RewardsTrack.WBP_RewardsTrack_C.NavigatePageWithDirection
struct UWBP_RewardsTrack_C_NavigatePageWithDirection_Params
{
	int                                                Direction;                                                 // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               DidNavigate;                                               // 0x0004(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function WBP_RewardsTrack.WBP_RewardsTrack_C.DisplayPage
struct UWBP_RewardsTrack_C_DisplayPage_Params
{
	int                                                Page;                                                      // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function WBP_RewardsTrack.WBP_RewardsTrack_C.GetNavigationWidgets
struct UWBP_RewardsTrack_C_GetNavigationWidgets_Params
{
	TArray<class UWBP_RewardListEntry_C*>              Widgets;                                                   // 0x0000(0x0010)  (Parm, OutParm, ContainsInstancedReference, HasGetValueTypeHash)
};

// Function WBP_RewardsTrack.WBP_RewardsTrack_C.InitializeWithActivityInstance
struct UWBP_RewardsTrack_C_InitializeWithActivityInstance_Params
{
	class UKSActivityInstance*                         ActivityInstance;                                          // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function WBP_RewardsTrack.WBP_RewardsTrack_C.InitializeWithStoreItems
struct UWBP_RewardsTrack_C_InitializeWithStoreItems_Params
{
	TArray<class UPUMG_StoreItem*>                     StoreItems;                                                // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, HasGetValueTypeHash)
};

// Function WBP_RewardsTrack.WBP_RewardsTrack_C.InitializeWithAcquisition
struct UWBP_RewardsTrack_C_InitializeWithAcquisition_Params
{
	class UKSAcquisition*                              Acquisition;                                               // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function WBP_RewardsTrack.WBP_RewardsTrack_C.InitializeWidget
struct UWBP_RewardsTrack_C_InitializeWidget_Params
{
	class APUMG_HUD*                                   HUD;                                                       // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function WBP_RewardsTrack.WBP_RewardsTrack_C.OnEntryClicked
struct UWBP_RewardsTrack_C_OnEntryClicked_Params
{
	class UWBP_RewardListEntry_C*                      Widget;                                                    // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FCosmeticSlotDetails                        RewardSlotDetails;                                         // 0x0008(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)
	class UPUMG_StoreItem*                             StoreItem;                                                 // 0x0020(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function WBP_RewardsTrack.WBP_RewardsTrack_C.OnClickedPageLeft
struct UWBP_RewardsTrack_C_OnClickedPageLeft_Params
{
};

// Function WBP_RewardsTrack.WBP_RewardsTrack_C.OnClickedPageRight
struct UWBP_RewardsTrack_C_OnClickedPageRight_Params
{
};

// Function WBP_RewardsTrack.WBP_RewardsTrack_C.Construct
struct UWBP_RewardsTrack_C_Construct_Params
{
};

// Function WBP_RewardsTrack.WBP_RewardsTrack_C.ExecuteUbergraph_WBP_RewardsTrack
struct UWBP_RewardsTrack_C_ExecuteUbergraph_WBP_RewardsTrack_Params
{
	int                                                EntryPoint;                                                // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function WBP_RewardsTrack.WBP_RewardsTrack_C.OnPageNavigated__DelegateSignature
struct UWBP_RewardsTrack_C_OnPageNavigated__DelegateSignature_Params
{
	int                                                Direction;                                                 // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
