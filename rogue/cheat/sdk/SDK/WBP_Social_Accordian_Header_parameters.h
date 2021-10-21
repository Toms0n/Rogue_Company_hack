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

// Function WBP_Social_Accordian_Header.WBP_Social_Accordian_Header_C.OnHeaderUpdated
struct UWBP_Social_Accordian_Header_C_OnHeaderUpdated_Params
{
	class UKSDataSocialCategory*                       Category;                                                  // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FText                                       Header;                                                    // 0x0008(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function WBP_Social_Accordian_Header.WBP_Social_Accordian_Header_C.OnPlayersUpdated
struct UWBP_Social_Accordian_Header_C_OnPlayersUpdated_Params
{
	class UKSDataSocialCategory*                       Category;                                                  // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<class UKSDataSocialPlayer*>                 Players;                                                   // 0x0008(0x0010)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, HasGetValueTypeHash)
};

// Function WBP_Social_Accordian_Header.WBP_Social_Accordian_Header_C.UpdateMessage
struct UWBP_Social_Accordian_Header_C_UpdateMessage_Params
{
	class UKSDataSocialCategory*                       Category;                                                  // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               Processing;                                                // 0x0008(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FText                                       Message;                                                   // 0x0010(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function WBP_Social_Accordian_Header.WBP_Social_Accordian_Header_C.GetIsExpanded
struct UWBP_Social_Accordian_Header_C_GetIsExpanded_Params
{
	bool                                               Expanded;                                                  // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function WBP_Social_Accordian_Header.WBP_Social_Accordian_Header_C.GetData
struct UWBP_Social_Accordian_Header_C_GetData_Params
{
	class UKSDataSocialCategory*                       NewParam;                                                  // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function WBP_Social_Accordian_Header.WBP_Social_Accordian_Header_C.SetExpanded
struct UWBP_Social_Accordian_Header_C_SetExpanded_Params
{
	bool                                               Expanded;                                                  // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function WBP_Social_Accordian_Header.WBP_Social_Accordian_Header_C.GetOuterHud
struct UWBP_Social_Accordian_Header_C_GetOuterHud_Params
{
	class AKSHUDCommon*                                HUD;                                                       // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function WBP_Social_Accordian_Header.WBP_Social_Accordian_Header_C.SetListItemObject
struct UWBP_Social_Accordian_Header_C_SetListItemObject_Params
{
	class UObject*                                     Object;                                                    // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function WBP_Social_Accordian_Header.WBP_Social_Accordian_Header_C.InitializeWidget
struct UWBP_Social_Accordian_Header_C_InitializeWidget_Params
{
	class APUMG_HUD*                                   HUD;                                                       // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function WBP_Social_Accordian_Header.WBP_Social_Accordian_Header_C.UninitializeWidget
struct UWBP_Social_Accordian_Header_C_UninitializeWidget_Params
{
};

// Function WBP_Social_Accordian_Header.WBP_Social_Accordian_Header_C.HandleClicked
struct UWBP_Social_Accordian_Header_C_HandleClicked_Params
{
};

// Function WBP_Social_Accordian_Header.WBP_Social_Accordian_Header_C.OnUnhovered
struct UWBP_Social_Accordian_Header_C_OnUnhovered_Params
{
};

// Function WBP_Social_Accordian_Header.WBP_Social_Accordian_Header_C.OnHovered
struct UWBP_Social_Accordian_Header_C_OnHovered_Params
{
};

// Function WBP_Social_Accordian_Header.WBP_Social_Accordian_Header_C.OnListItemObjectSet
struct UWBP_Social_Accordian_Header_C_OnListItemObjectSet_Params
{
	class UObject*                                     ListItemObject;                                            // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function WBP_Social_Accordian_Header.WBP_Social_Accordian_Header_C.BP_OnEntryReleased
struct UWBP_Social_Accordian_Header_C_BP_OnEntryReleased_Params
{
};

// Function WBP_Social_Accordian_Header.WBP_Social_Accordian_Header_C.BP_OnItemExpansionChanged
struct UWBP_Social_Accordian_Header_C_BP_OnItemExpansionChanged_Params
{
	bool                                               bIsExpanded;                                               // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function WBP_Social_Accordian_Header.WBP_Social_Accordian_Header_C.BP_OnItemSelectionChanged
struct UWBP_Social_Accordian_Header_C_BP_OnItemSelectionChanged_Params
{
	bool                                               bIsSelected;                                               // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function WBP_Social_Accordian_Header.WBP_Social_Accordian_Header_C.Construct
struct UWBP_Social_Accordian_Header_C_Construct_Params
{
};

// Function WBP_Social_Accordian_Header.WBP_Social_Accordian_Header_C.UnbindCategoryEvents
struct UWBP_Social_Accordian_Header_C_UnbindCategoryEvents_Params
{
};

// Function WBP_Social_Accordian_Header.WBP_Social_Accordian_Header_C.BindCategoryEvents
struct UWBP_Social_Accordian_Header_C_BindCategoryEvents_Params
{
};

// Function WBP_Social_Accordian_Header.WBP_Social_Accordian_Header_C.OnInputStateChange
struct UWBP_Social_Accordian_Header_C_OnInputStateChange_Params
{
	TEnumAsByte<PlatformGameFramework_EPGAME_INPUT_STATE> InputState;                                                // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function WBP_Social_Accordian_Header.WBP_Social_Accordian_Header_C.ForceUnhover
struct UWBP_Social_Accordian_Header_C_ForceUnhover_Params
{
};

// Function WBP_Social_Accordian_Header.WBP_Social_Accordian_Header_C.ExecuteUbergraph_WBP_Social_Accordian_Header
struct UWBP_Social_Accordian_Header_C_ExecuteUbergraph_WBP_Social_Accordian_Header_Params
{
	int                                                EntryPoint;                                                // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function WBP_Social_Accordian_Header.WBP_Social_Accordian_Header_C.OnClicked__DelegateSignature
struct UWBP_Social_Accordian_Header_C_OnClicked__DelegateSignature_Params
{
	class UUserWidget*                                 Widget;                                                    // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
