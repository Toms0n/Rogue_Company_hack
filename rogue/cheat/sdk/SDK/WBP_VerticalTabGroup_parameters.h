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

// Function WBP_VerticalTabGroup.WBP_VerticalTabGroup_C.RevertGamepadSelected
struct UWBP_VerticalTabGroup_C_RevertGamepadSelected_Params
{
};

// Function WBP_VerticalTabGroup.WBP_VerticalTabGroup_C.Display Gamepad Selected
struct UWBP_VerticalTabGroup_C_Display_Gamepad_Selected_Params
{
	struct FName                                       ViewName;                                                  // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function WBP_VerticalTabGroup.WBP_VerticalTabGroup_C.SelectEntryByName
struct UWBP_VerticalTabGroup_C_SelectEntryByName_Params
{
	struct FName                                       ViewName;                                                  // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UWBP_VerticalTabGroupEntry_C*                Selected_Entry;                                            // 0x0008(0x0008)  (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function WBP_VerticalTabGroup.WBP_VerticalTabGroup_C.ClearEntries
struct UWBP_VerticalTabGroup_C_ClearEntries_Params
{
};

// Function WBP_VerticalTabGroup.WBP_VerticalTabGroup_C.AddEntry
struct UWBP_VerticalTabGroup_C_AddEntry_Params
{
	struct FName                                       ViewName;                                                  // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FOverlayTabViewRow                          ViewInfo;                                                  // 0x0008(0x0030)  (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function WBP_VerticalTabGroup.WBP_VerticalTabGroup_C.GetEntries
struct UWBP_VerticalTabGroup_C_GetEntries_Params
{
	TArray<class UWBP_VerticalTabGroupEntry_C*>        Return_Value;                                              // 0x0000(0x0010)  (Parm, OutParm, ContainsInstancedReference, HasGetValueTypeHash)
};

// Function WBP_VerticalTabGroup.WBP_VerticalTabGroup_C.Handle Tab Selected
struct UWBP_VerticalTabGroup_C_Handle_Tab_Selected_Params
{
	struct FName                                       View_Name;                                                 // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function WBP_VerticalTabGroup.WBP_VerticalTabGroup_C.Handle Tab Gamepad Selected
struct UWBP_VerticalTabGroup_C_Handle_Tab_Gamepad_Selected_Params
{
	struct FName                                       View_Name;                                                 // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function WBP_VerticalTabGroup.WBP_VerticalTabGroup_C.ExecuteUbergraph_WBP_VerticalTabGroup
struct UWBP_VerticalTabGroup_C_ExecuteUbergraph_WBP_VerticalTabGroup_Params
{
	int                                                EntryPoint;                                                // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function WBP_VerticalTabGroup.WBP_VerticalTabGroup_C.OnSubviewChange__DelegateSignature
struct UWBP_VerticalTabGroup_C_OnSubviewChange__DelegateSignature_Params
{
	struct FName                                       ViewName;                                                  // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function WBP_VerticalTabGroup.WBP_VerticalTabGroup_C.OnSubviewFocus__DelegateSignature
struct UWBP_VerticalTabGroup_C_OnSubviewFocus__DelegateSignature_Params
{
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
