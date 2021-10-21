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

// Function WBP_PlayerIDCustomize.WBP_PlayerIDCustomize_C.SavePlayerIdentity
struct UWBP_PlayerIDCustomize_C_SavePlayerIdentity_Params
{
};

// Function WBP_PlayerIDCustomize.WBP_PlayerIDCustomize_C.OnPreviousTab
struct UWBP_PlayerIDCustomize_C_OnPreviousTab_Params
{
};

// Function WBP_PlayerIDCustomize.WBP_PlayerIDCustomize_C.OnNextTab
struct UWBP_PlayerIDCustomize_C_OnNextTab_Params
{
};

// Function WBP_PlayerIDCustomize.WBP_PlayerIDCustomize_C.SetInfoFieldData
struct UWBP_PlayerIDCustomize_C_SetInfoFieldData_Params
{
	class UPlatformInventoryItem*                      CosmeticItem;                                              // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	Killstreak_EPlayerAccountSlot                      ItemSlot;                                                  // 0x0008(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function WBP_PlayerIDCustomize.WBP_PlayerIDCustomize_C.PreConstruct
struct UWBP_PlayerIDCustomize_C_PreConstruct_Params
{
	bool                                               IsDesignTime;                                              // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function WBP_PlayerIDCustomize.WBP_PlayerIDCustomize_C.Construct
struct UWBP_PlayerIDCustomize_C_Construct_Params
{
};

// Function WBP_PlayerIDCustomize.WBP_PlayerIDCustomize_C.InitializeWidget
struct UWBP_PlayerIDCustomize_C_InitializeWidget_Params
{
	class APUMG_HUD*                                   HUD;                                                       // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function WBP_PlayerIDCustomize.WBP_PlayerIDCustomize_C.Update Player Identity
struct UWBP_PlayerIDCustomize_C_Update_Player_Identity_Params
{
};

// Function WBP_PlayerIDCustomize.WBP_PlayerIDCustomize_C.OnButtonsCreated
struct UWBP_PlayerIDCustomize_C_OnButtonsCreated_Params
{
};

// Function WBP_PlayerIDCustomize.WBP_PlayerIDCustomize_C.UninitializeWidget
struct UWBP_PlayerIDCustomize_C_UninitializeWidget_Params
{
};

// Function WBP_PlayerIDCustomize.WBP_PlayerIDCustomize_C.OnLocalLoadoutUpdate
struct UWBP_PlayerIDCustomize_C_OnLocalLoadoutUpdate_Params
{
};

// Function WBP_PlayerIDCustomize.WBP_PlayerIDCustomize_C.ExecuteUbergraph_WBP_PlayerIDCustomize
struct UWBP_PlayerIDCustomize_C_ExecuteUbergraph_WBP_PlayerIDCustomize_Params
{
	int                                                EntryPoint;                                                // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
