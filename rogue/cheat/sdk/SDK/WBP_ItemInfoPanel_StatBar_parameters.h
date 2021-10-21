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

// Function WBP_ItemInfoPanel_StatBar.WBP_ItemInfoPanel_StatBar_C.Get Stat Value Text
struct UWBP_ItemInfoPanel_StatBar_C_Get_Stat_Value_Text_Params
{
	float                                              Stat_Value;                                                // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FText                                       Value_Text;                                                // 0x0008(0x0018)  (Parm, OutParm)
};

// Function WBP_ItemInfoPanel_StatBar.WBP_ItemInfoPanel_StatBar_C.Update Stat Values
struct UWBP_ItemInfoPanel_StatBar_C_Update_Stat_Values_Params
{
	struct FItemDisplayStat                            Current_Stat;                                              // 0x0000(0x0038)  (BlueprintVisible, BlueprintReadOnly, Parm)
	struct FItemDisplayStat                            Upgrade_Stat;                                              // 0x0038(0x0038)  (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function WBP_ItemInfoPanel_StatBar.WBP_ItemInfoPanel_StatBar_C.Refresh From Display Parameters
struct UWBP_ItemInfoPanel_StatBar_C_Refresh_From_Display_Parameters_Params
{
};

// Function WBP_ItemInfoPanel_StatBar.WBP_ItemInfoPanel_StatBar_C.PreConstruct
struct UWBP_ItemInfoPanel_StatBar_C_PreConstruct_Params
{
	bool                                               IsDesignTime;                                              // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function WBP_ItemInfoPanel_StatBar.WBP_ItemInfoPanel_StatBar_C.Construct
struct UWBP_ItemInfoPanel_StatBar_C_Construct_Params
{
};

// Function WBP_ItemInfoPanel_StatBar.WBP_ItemInfoPanel_StatBar_C.ExecuteUbergraph_WBP_ItemInfoPanel_StatBar
struct UWBP_ItemInfoPanel_StatBar_C_ExecuteUbergraph_WBP_ItemInfoPanel_StatBar_Params
{
	int                                                EntryPoint;                                                // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
