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

// Function WBP_CustomizeAvatar.WBP_CustomizeAvatar_C.OnSortRarityDescNameAsc
struct UWBP_CustomizeAvatar_C_OnSortRarityDescNameAsc_Params
{
	class UWidget*                                     LHS;                                                       // 0x0000(0x0008)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UWidget*                                     RHS;                                                       // 0x0008(0x0008)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               ReturnValue;                                               // 0x0010(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
};

// Function WBP_CustomizeAvatar.WBP_CustomizeAvatar_C.NavigateBack
struct UWBP_CustomizeAvatar_C_NavigateBack_Params
{
	bool                                               ReturnValue;                                               // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
};

// Function WBP_CustomizeAvatar.WBP_CustomizeAvatar_C.OnKeyDown
struct UWBP_CustomizeAvatar_C_OnKeyDown_Params
{
	struct FGeometry                                   MyGeometry;                                                // 0x0000(0x0058)  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	struct FKeyEvent                                   InKeyEvent;                                                // 0x0058(0x0038)  (BlueprintVisible, BlueprintReadOnly, Parm)
	struct FEventReply                                 ReturnValue;                                               // 0x0090(0x00C0)  (Parm, OutParm, ReturnParm)
};

// Function WBP_CustomizeAvatar.WBP_CustomizeAvatar_C.AddEmptySlots
struct UWBP_CustomizeAvatar_C_AddEmptySlots_Params
{
};

// Function WBP_CustomizeAvatar.WBP_CustomizeAvatar_C.SetActiveStates
struct UWBP_CustomizeAvatar_C_SetActiveStates_Params
{
	class UWBP_CosmeticItem_Avatar_C*                  ActiveWidget;                                              // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function WBP_CustomizeAvatar.WBP_CustomizeAvatar_C.RegisterNavigation
struct UWBP_CustomizeAvatar_C_RegisterNavigation_Params
{
};

// Function WBP_CustomizeAvatar.WBP_CustomizeAvatar_C.IsAvatarItemEquipped
struct UWBP_CustomizeAvatar_C_IsAvatarItemEquipped_Params
{
	class UKSItem*                                     KSItem;                                                    // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               IsEquipped;                                                // 0x0008(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function WBP_CustomizeAvatar.WBP_CustomizeAvatar_C.ResetAvatarSelection
struct UWBP_CustomizeAvatar_C_ResetAvatarSelection_Params
{
};

// Function WBP_CustomizeAvatar.WBP_CustomizeAvatar_C.SetContextBar
struct UWBP_CustomizeAvatar_C_SetContextBar_Params
{
};

// Function WBP_CustomizeAvatar.WBP_CustomizeAvatar_C.SetAvatarSelection
struct UWBP_CustomizeAvatar_C_SetAvatarSelection_Params
{
};

// Function WBP_CustomizeAvatar.WBP_CustomizeAvatar_C.OnShown
struct UWBP_CustomizeAvatar_C_OnShown_Params
{
};

// Function WBP_CustomizeAvatar.WBP_CustomizeAvatar_C.OnBackPrompt
struct UWBP_CustomizeAvatar_C_OnBackPrompt_Params
{
};

// Function WBP_CustomizeAvatar.WBP_CustomizeAvatar_C.InitializeWidgetNavigation
struct UWBP_CustomizeAvatar_C_InitializeWidgetNavigation_Params
{
};

// Function WBP_CustomizeAvatar.WBP_CustomizeAvatar_C.InitializeWidget
struct UWBP_CustomizeAvatar_C_InitializeWidget_Params
{
	class APUMG_HUD*                                   HUD;                                                       // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function WBP_CustomizeAvatar.WBP_CustomizeAvatar_C.OnAvatarHover
struct UWBP_CustomizeAvatar_C_OnAvatarHover_Params
{
	class UPlatformInventoryItem*                      PlatformItem;                                              // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function WBP_CustomizeAvatar.WBP_CustomizeAvatar_C.OnAvatarUnhover
struct UWBP_CustomizeAvatar_C_OnAvatarUnhover_Params
{
};

// Function WBP_CustomizeAvatar.WBP_CustomizeAvatar_C.OnAvatarSelected
struct UWBP_CustomizeAvatar_C_OnAvatarSelected_Params
{
	class UPlatformInventoryItem*                      PlatformItem;                                              // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UWidget*                                     Widget;                                                    // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function WBP_CustomizeAvatar.WBP_CustomizeAvatar_C.OnAvatarGamepadHover
struct UWBP_CustomizeAvatar_C_OnAvatarGamepadHover_Params
{
	class UPUMG_Widget*                                Widget;                                                    // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               bHovered;                                                  // 0x0008(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function WBP_CustomizeAvatar.WBP_CustomizeAvatar_C.OnHide
struct UWBP_CustomizeAvatar_C_OnHide_Params
{
};

// Function WBP_CustomizeAvatar.WBP_CustomizeAvatar_C.ExecuteUbergraph_WBP_CustomizeAvatar
struct UWBP_CustomizeAvatar_C_ExecuteUbergraph_WBP_CustomizeAvatar_Params
{
	int                                                EntryPoint;                                                // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
