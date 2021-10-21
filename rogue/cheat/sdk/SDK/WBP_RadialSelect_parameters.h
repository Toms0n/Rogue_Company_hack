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

// Function WBP_RadialSelect.WBP_RadialSelect_C.SetupSelectorForActivationMode
struct UWBP_RadialSelect_C_SetupSelectorForActivationMode_Params
{
};

// Function WBP_RadialSelect.WBP_RadialSelect_C.IsItemUsable
struct UWBP_RadialSelect_C_IsItemUsable_Params
{
	class UKSItem*                                     KSItem;                                                    // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               Return_Value;                                              // 0x0008(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function WBP_RadialSelect.WBP_RadialSelect_C.SetHoverForAllEntries
struct UWBP_RadialSelect_C_SetHoverForAllEntries_Params
{
	class UWBP_RadialMenuEntry_C*                      New_Hovered_Entry;                                         // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function WBP_RadialSelect.WBP_RadialSelect_C.GetRadialEntryByIndex
struct UWBP_RadialSelect_C_GetRadialEntryByIndex_Params
{
	int                                                Index;                                                     // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UWBP_RadialMenuEntry_C*                      Entry;                                                     // 0x0008(0x0008)  (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function WBP_RadialSelect.WBP_RadialSelect_C.OnKeyDown
struct UWBP_RadialSelect_C_OnKeyDown_Params
{
	struct FGeometry                                   MyGeometry;                                                // 0x0000(0x0058)  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	struct FKeyEvent                                   InKeyEvent;                                                // 0x0058(0x0038)  (BlueprintVisible, BlueprintReadOnly, Parm)
	struct FEventReply                                 ReturnValue;                                               // 0x0090(0x00C0)  (Parm, OutParm, ReturnParm)
};

// Function WBP_RadialSelect.WBP_RadialSelect_C.OnKeyUp
struct UWBP_RadialSelect_C_OnKeyUp_Params
{
	struct FGeometry                                   MyGeometry;                                                // 0x0000(0x0058)  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	struct FKeyEvent                                   InKeyEvent;                                                // 0x0058(0x0038)  (BlueprintVisible, BlueprintReadOnly, Parm)
	struct FEventReply                                 ReturnValue;                                               // 0x0090(0x00C0)  (Parm, OutParm, ReturnParm)
};

// Function WBP_RadialSelect.WBP_RadialSelect_C.GetRadialItemData
struct UWBP_RadialSelect_C_GetRadialItemData_Params
{
	int                                                Item_Index;                                                // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UKSItem*                                     KSItem;                                                    // 0x0008(0x0008)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function WBP_RadialSelect.WBP_RadialSelect_C.NavigateConfirm
struct UWBP_RadialSelect_C_NavigateConfirm_Params
{
	bool                                               ReturnValue;                                               // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
};

// Function WBP_RadialSelect.WBP_RadialSelect_C.NavigateBack
struct UWBP_RadialSelect_C_NavigateBack_Params
{
	bool                                               ReturnValue;                                               // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
};

// Function WBP_RadialSelect.WBP_RadialSelect_C.OnMouseButtonDown
struct UWBP_RadialSelect_C_OnMouseButtonDown_Params
{
	struct FGeometry                                   MyGeometry;                                                // 0x0000(0x0058)  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	struct FPointerEvent                               MouseEvent;                                                // 0x0058(0x0070)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	struct FEventReply                                 ReturnValue;                                               // 0x00C8(0x00C0)  (Parm, OutParm, ReturnParm)
};

// Function WBP_RadialSelect.WBP_RadialSelect_C.SetRadialItemName
struct UWBP_RadialSelect_C_SetRadialItemName_Params
{
	int                                                Index;                                                     // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function WBP_RadialSelect.WBP_RadialSelect_C.SetupInputCallout
struct UWBP_RadialSelect_C_SetupInputCallout_Params
{
	class UWBP_InputCallout_C*                         InputCallout;                                              // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class APUMG_HUD*                                   HUD;                                                       // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TEnumAsByte<PlatformGameFramework_EPGAME_INPUT_STATE> InputState;                                                // 0x0010(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function WBP_RadialSelect.WBP_RadialSelect_C.IsSelectorVisible
struct UWBP_RadialSelect_C_IsSelectorVisible_Params
{
	bool                                               ReturnValue;                                               // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
};

// Function WBP_RadialSelect.WBP_RadialSelect_C.ShowRadialMenuCycle
struct UWBP_RadialSelect_C_ShowRadialMenuCycle_Params
{
	bool                                               Show;                                                      // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function WBP_RadialSelect.WBP_RadialSelect_C.Get Radial Item Name from Player Controller
struct UWBP_RadialSelect_C_Get_Radial_Item_Name_from_Player_Controller_Params
{
	int                                                Index;                                                     // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AKSPlayerController*                         KSPlayerController;                                        // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FText                                       RadialItemName;                                            // 0x0010(0x0018)  (Parm, OutParm)
};

// Function WBP_RadialSelect.WBP_RadialSelect_C.GetTextForCosmeticSlot
struct UWBP_RadialSelect_C_GetTextForCosmeticSlot_Params
{
	Killstreak_EMercCosmeticSlot                       CosmeticSlot;                                              // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FText                                       Text;                                                      // 0x0008(0x0018)  (Parm, OutParm)
};

// Function WBP_RadialSelect.WBP_RadialSelect_C.SetRadialMenuNames
struct UWBP_RadialSelect_C_SetRadialMenuNames_Params
{
};

// Function WBP_RadialSelect.WBP_RadialSelect_C.GetDeadZone
struct UWBP_RadialSelect_C_GetDeadZone_Params
{
	float                                              ReturnValue;                                               // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function WBP_RadialSelect.WBP_RadialSelect_C.RefreshOptions
struct UWBP_RadialSelect_C_RefreshOptions_Params
{
};

// Function WBP_RadialSelect.WBP_RadialSelect_C.GetOptionsCount
struct UWBP_RadialSelect_C_GetOptionsCount_Params
{
	int                                                ReturnValue;                                               // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function WBP_RadialSelect.WBP_RadialSelect_C.GetWheelSize
struct UWBP_RadialSelect_C_GetWheelSize_Params
{
	float                                              ReturnValue;                                               // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function WBP_RadialSelect.WBP_RadialSelect_C.PreConstruct
struct UWBP_RadialSelect_C_PreConstruct_Params
{
	bool                                               IsDesignTime;                                              // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function WBP_RadialSelect.WBP_RadialSelect_C.HideSelector
struct UWBP_RadialSelect_C_HideSelector_Params
{
};

// Function WBP_RadialSelect.WBP_RadialSelect_C.ShowSelector
struct UWBP_RadialSelect_C_ShowSelector_Params
{
};

// Function WBP_RadialSelect.WBP_RadialSelect_C.InitializeWidget
struct UWBP_RadialSelect_C_InitializeWidget_Params
{
	class APUMG_HUD*                                   HUD;                                                       // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function WBP_RadialSelect.WBP_RadialSelect_C.RadialOptionUnhover
struct UWBP_RadialSelect_C_RadialOptionUnhover_Params
{
};

// Function WBP_RadialSelect.WBP_RadialSelect_C.RadialOptionSelected
struct UWBP_RadialSelect_C_RadialOptionSelected_Params
{
	int                                                Index;                                                     // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function WBP_RadialSelect.WBP_RadialSelect_C.RadialOptionHovered
struct UWBP_RadialSelect_C_RadialOptionHovered_Params
{
	int                                                Index;                                                     // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function WBP_RadialSelect.WBP_RadialSelect_C.TraceSelectionCursor
struct UWBP_RadialSelect_C_TraceSelectionCursor_Params
{
	float                                              Radius;                                                    // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              Angle;                                                     // 0x0004(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function WBP_RadialSelect.WBP_RadialSelect_C.Handle Equipment Change
struct UWBP_RadialSelect_C_Handle_Equipment_Change_Params
{
	class AKSEquipment*                                AddedEquipment;                                            // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function WBP_RadialSelect.WBP_RadialSelect_C.ChangeToNewRadialMenu
struct UWBP_RadialSelect_C_ChangeToNewRadialMenu_Params
{
};

// Function WBP_RadialSelect.WBP_RadialSelect_C.OnCycledMenus
struct UWBP_RadialSelect_C_OnCycledMenus_Params
{
	bool                                               bCycledRight;                                              // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function WBP_RadialSelect.WBP_RadialSelect_C.SetupForRadialWheelMode
struct UWBP_RadialSelect_C_SetupForRadialWheelMode_Params
{
};

// Function WBP_RadialSelect.WBP_RadialSelect_C.InitializeWidgetNavigation
struct UWBP_RadialSelect_C_InitializeWidgetNavigation_Params
{
};

// Function WBP_RadialSelect.WBP_RadialSelect_C.Handle View State Changed
struct UWBP_RadialSelect_C_Handle_View_State_Changed_Params
{
	struct FName                                       CurrentRoute;                                              // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FName                                       PreviousRoute;                                             // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	PlatformUMG_EViewManagerLayer                      Layer;                                                     // 0x0010(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function WBP_RadialSelect.WBP_RadialSelect_C.NetMulticast_PlayCinematicEmote
struct UWBP_RadialSelect_C_NetMulticast_PlayCinematicEmote_Params
{
	class AKSLobbyCharacter*                           Character;                                                 // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UKSEmote*                                    Emote;                                                     // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function WBP_RadialSelect.WBP_RadialSelect_C.Server_PlayCinematicEmote
struct UWBP_RadialSelect_C_Server_PlayCinematicEmote_Params
{
	class AKSLobbyCharacter*                           Character;                                                 // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UKSEmote*                                    Emote;                                                     // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function WBP_RadialSelect.WBP_RadialSelect_C.ExecuteUbergraph_WBP_RadialSelect
struct UWBP_RadialSelect_C_ExecuteUbergraph_WBP_RadialSelect_Params
{
	int                                                EntryPoint;                                                // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
