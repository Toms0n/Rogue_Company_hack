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

// Function WBP_RadialMenuEntry.WBP_RadialMenuEntry_C.SetHoverOverlay
struct UWBP_RadialMenuEntry_C_SetHoverOverlay_Params
{
	bool                                               IsShowingHover;                                            // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function WBP_RadialMenuEntry.WBP_RadialMenuEntry_C.SetDisabled
struct UWBP_RadialMenuEntry_C_SetDisabled_Params
{
	bool                                               IsDisabled;                                                // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function WBP_RadialMenuEntry.WBP_RadialMenuEntry_C.ShowBigTextInsteadOfIcon
struct UWBP_RadialMenuEntry_C_ShowBigTextInsteadOfIcon_Params
{
	bool                                               ShowBigText;                                               // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function WBP_RadialMenuEntry.WBP_RadialMenuEntry_C.SetEmpty
struct UWBP_RadialMenuEntry_C_SetEmpty_Params
{
};

// Function WBP_RadialMenuEntry.WBP_RadialMenuEntry_C.SetIconColor
struct UWBP_RadialMenuEntry_C_SetIconColor_Params
{
	struct FLinearColor                                LinearColor;                                               // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function WBP_RadialMenuEntry.WBP_RadialMenuEntry_C.SetIconFromSoftTexture
struct UWBP_RadialMenuEntry_C_SetIconFromSoftTexture_Params
{
};

// Function WBP_RadialMenuEntry.WBP_RadialMenuEntry_C.Set IconAndName
struct UWBP_RadialMenuEntry_C_Set_IconAndName_Params
{
	class UKSItem*                                     Item;                                                      // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               ShowSmallText;                                             // 0x0008(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function WBP_RadialMenuEntry.WBP_RadialMenuEntry_C.SetRotation
struct UWBP_RadialMenuEntry_C_SetRotation_Params
{
	float                                              Angle;                                                     // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function WBP_RadialMenuEntry.WBP_RadialMenuEntry_C.OnInitialized
struct UWBP_RadialMenuEntry_C_OnInitialized_Params
{
};

// Function WBP_RadialMenuEntry.WBP_RadialMenuEntry_C.ExecuteUbergraph_WBP_RadialMenuEntry
struct UWBP_RadialMenuEntry_C_ExecuteUbergraph_WBP_RadialMenuEntry_Params
{
	int                                                EntryPoint;                                                // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
