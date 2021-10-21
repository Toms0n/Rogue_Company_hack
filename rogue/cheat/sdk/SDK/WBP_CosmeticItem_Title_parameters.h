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

// Function WBP_CosmeticItem_Title.WBP_CosmeticItem_Title_C.SetTitleItemSlot
struct UWBP_CosmeticItem_Title_C_SetTitleItemSlot_Params
{
};

// Function WBP_CosmeticItem_Title.WBP_CosmeticItem_Title_C.NavigateConfirm
struct UWBP_CosmeticItem_Title_C_NavigateConfirm_Params
{
	bool                                               ReturnValue;                                               // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
};

// Function WBP_CosmeticItem_Title.WBP_CosmeticItem_Title_C.OnHoverSound
struct UWBP_CosmeticItem_Title_C_OnHoverSound_Params
{
};

// Function WBP_CosmeticItem_Title.WBP_CosmeticItem_Title_C.OnClickSound
struct UWBP_CosmeticItem_Title_C_OnClickSound_Params
{
};

// Function WBP_CosmeticItem_Title.WBP_CosmeticItem_Title_C.Construct
struct UWBP_CosmeticItem_Title_C_Construct_Params
{
};

// Function WBP_CosmeticItem_Title.WBP_CosmeticItem_Title_C.PopulateSlot
struct UWBP_CosmeticItem_Title_C_PopulateSlot_Params
{
};

// Function WBP_CosmeticItem_Title.WBP_CosmeticItem_Title_C.OnTitleHover
struct UWBP_CosmeticItem_Title_C_OnTitleHover_Params
{
	bool                                               IsGamepad;                                                 // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function WBP_CosmeticItem_Title.WBP_CosmeticItem_Title_C.OnTitleUnhover
struct UWBP_CosmeticItem_Title_C_OnTitleUnhover_Params
{
};

// Function WBP_CosmeticItem_Title.WBP_CosmeticItem_Title_C.OnTitleClick
struct UWBP_CosmeticItem_Title_C_OnTitleClick_Params
{
};

// Function WBP_CosmeticItem_Title.WBP_CosmeticItem_Title_C.GamepadHover
struct UWBP_CosmeticItem_Title_C_GamepadHover_Params
{
};

// Function WBP_CosmeticItem_Title.WBP_CosmeticItem_Title_C.GamepadUnhover
struct UWBP_CosmeticItem_Title_C_GamepadUnhover_Params
{
};

// Function WBP_CosmeticItem_Title.WBP_CosmeticItem_Title_C.SetTitleActive
struct UWBP_CosmeticItem_Title_C_SetTitleActive_Params
{
	bool                                               IsActive;                                                  // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function WBP_CosmeticItem_Title.WBP_CosmeticItem_Title_C.InitializeWidget
struct UWBP_CosmeticItem_Title_C_InitializeWidget_Params
{
	class APUMG_HUD*                                   HUD;                                                       // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function WBP_CosmeticItem_Title.WBP_CosmeticItem_Title_C.ExecuteUbergraph_WBP_CosmeticItem_Title
struct UWBP_CosmeticItem_Title_C_ExecuteUbergraph_WBP_CosmeticItem_Title_Params
{
	int                                                EntryPoint;                                                // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function WBP_CosmeticItem_Title.WBP_CosmeticItem_Title_C.OnItemClicked__DelegateSignature
struct UWBP_CosmeticItem_Title_C_OnItemClicked__DelegateSignature_Params
{
	class UPlatformInventoryItem*                      PlatformItem;                                              // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UWidget*                                     Widget;                                                    // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function WBP_CosmeticItem_Title.WBP_CosmeticItem_Title_C.OnItemUnhovered__DelegateSignature
struct UWBP_CosmeticItem_Title_C_OnItemUnhovered__DelegateSignature_Params
{
};

// Function WBP_CosmeticItem_Title.WBP_CosmeticItem_Title_C.OnItemHovered__DelegateSignature
struct UWBP_CosmeticItem_Title_C_OnItemHovered__DelegateSignature_Params
{
	class UPlatformInventoryItem*                      PlatformItem;                                              // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
