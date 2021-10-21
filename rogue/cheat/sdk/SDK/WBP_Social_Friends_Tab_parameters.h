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

// Function WBP_Social_Friends_Tab.WBP_Social_Friends_Tab_C.FocusFirstItem
struct UWBP_Social_Friends_Tab_C_FocusFirstItem_Params
{
};

// Function WBP_Social_Friends_Tab.WBP_Social_Friends_Tab_C.TryGetFirstItemForCategory
struct UWBP_Social_Friends_Tab_C_TryGetFirstItemForCategory_Params
{
	KillstreakUINew_EKSSocialOverlaySection            Category;                                                  // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UKSPlayerInfo*                               Output;                                                    // 0x0008(0x0008)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function WBP_Social_Friends_Tab.WBP_Social_Friends_Tab_C.FindFirstOnlinePlayerOrDefault
struct UWBP_Social_Friends_Tab_C_FindFirstOnlinePlayerOrDefault_Params
{
	class UObject*                                     Item;                                                      // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function WBP_Social_Friends_Tab.WBP_Social_Friends_Tab_C.FocusFirstOnlinePlayer
struct UWBP_Social_Friends_Tab_C_FocusFirstOnlinePlayer_Params
{
};

// Function WBP_Social_Friends_Tab.WBP_Social_Friends_Tab_C.OnFocusReceived
struct UWBP_Social_Friends_Tab_C_OnFocusReceived_Params
{
	struct FGeometry                                   MyGeometry;                                                // 0x0000(0x0058)  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	struct FFocusEvent                                 InFocusEvent;                                              // 0x0058(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
	struct FEventReply                                 ReturnValue;                                               // 0x0060(0x00C0)  (Parm, OutParm, ReturnParm)
};

// Function WBP_Social_Friends_Tab.WBP_Social_Friends_Tab_C.HandleItemClicked
struct UWBP_Social_Friends_Tab_C_HandleItemClicked_Params
{
	class UObject*                                     Item;                                                      // 0x0000(0x0008)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function WBP_Social_Friends_Tab.WBP_Social_Friends_Tab_C.NavigateConfirm
struct UWBP_Social_Friends_Tab_C_NavigateConfirm_Params
{
	bool                                               ReturnValue;                                               // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
};

// Function WBP_Social_Friends_Tab.WBP_Social_Friends_Tab_C.GetFocusTarget
struct UWBP_Social_Friends_Tab_C_GetFocusTarget_Params
{
	class UWidget*                                     Target;                                                    // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function WBP_Social_Friends_Tab.WBP_Social_Friends_Tab_C.InitializeWidget
struct UWBP_Social_Friends_Tab_C_InitializeWidget_Params
{
	class APUMG_HUD*                                   HUD;                                                       // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function WBP_Social_Friends_Tab.WBP_Social_Friends_Tab_C.UninitializeWidget
struct UWBP_Social_Friends_Tab_C_UninitializeWidget_Params
{
};

// Function WBP_Social_Friends_Tab.WBP_Social_Friends_Tab_C.BndEvt__PlayerList_K2Node_ComponentBoundEvent_0_OnItemIsHoveredChangedDynamic__DelegateSignature
struct UWBP_Social_Friends_Tab_C_BndEvt__PlayerList_K2Node_ComponentBoundEvent_0_OnItemIsHoveredChangedDynamic__DelegateSignature_Params
{
	class UObject*                                     Item;                                                      // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               bIsHovered;                                                // 0x0008(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function WBP_Social_Friends_Tab.WBP_Social_Friends_Tab_C.OnShown
struct UWBP_Social_Friends_Tab_C_OnShown_Params
{
};

// Function WBP_Social_Friends_Tab.WBP_Social_Friends_Tab_C.BndEvt__PlayerList_K2Node_ComponentBoundEvent_1_SimpleListItemEventDynamic__DelegateSignature
struct UWBP_Social_Friends_Tab_C_BndEvt__PlayerList_K2Node_ComponentBoundEvent_1_SimpleListItemEventDynamic__DelegateSignature_Params
{
	class UObject*                                     Item;                                                      // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function WBP_Social_Friends_Tab.WBP_Social_Friends_Tab_C.OnInputStateChanged
struct UWBP_Social_Friends_Tab_C_OnInputStateChanged_Params
{
	TEnumAsByte<PlatformGameFramework_EPGAME_INPUT_STATE> InputState;                                                // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function WBP_Social_Friends_Tab.WBP_Social_Friends_Tab_C.InitializeWidgetNavigation
struct UWBP_Social_Friends_Tab_C_InitializeWidgetNavigation_Params
{
};

// Function WBP_Social_Friends_Tab.WBP_Social_Friends_Tab_C.OnListScrolled
struct UWBP_Social_Friends_Tab_C_OnListScrolled_Params
{
	float                                              ItemOffset;                                                // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              DistanceRemaining;                                         // 0x0004(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function WBP_Social_Friends_Tab.WBP_Social_Friends_Tab_C.ExecuteUbergraph_WBP_Social_Friends_Tab
struct UWBP_Social_Friends_Tab_C_ExecuteUbergraph_WBP_Social_Friends_Tab_Params
{
	int                                                EntryPoint;                                                // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function WBP_Social_Friends_Tab.WBP_Social_Friends_Tab_C.OnPlayerListScrolled__DelegateSignature
struct UWBP_Social_Friends_Tab_C_OnPlayerListScrolled__DelegateSignature_Params
{
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
