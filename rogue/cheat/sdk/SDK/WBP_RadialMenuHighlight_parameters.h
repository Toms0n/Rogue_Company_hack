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

// Function WBP_RadialMenuHighlight.WBP_RadialMenuHighlight_C.SetDisabledAppearance
struct UWBP_RadialMenuHighlight_C_SetDisabledAppearance_Params
{
	bool                                               IsDisabled;                                                // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function WBP_RadialMenuHighlight.WBP_RadialMenuHighlight_C.GetHighlightMat
struct UWBP_RadialMenuHighlight_C_GetHighlightMat_Params
{
	class UMaterialInstanceDynamic*                    ReturnValue;                                               // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function WBP_RadialMenuHighlight.WBP_RadialMenuHighlight_C.SetPosition
struct UWBP_RadialMenuHighlight_C_SetPosition_Params
{
	float                                              Position;                                                  // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function WBP_RadialMenuHighlight.WBP_RadialMenuHighlight_C.SetWidth
struct UWBP_RadialMenuHighlight_C_SetWidth_Params
{
	float                                              Width;                                                     // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
