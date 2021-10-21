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

// Function WBP_SettingsEntryList.WBP_SettingsEntryList_C.SetDesiredIndex
struct UWBP_SettingsEntryList_C_SetDesiredIndex_Params
{
	int                                                Index;                                                     // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               Success;                                                   // 0x0004(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function WBP_SettingsEntryList.WBP_SettingsEntryList_C.NavigateBack
struct UWBP_SettingsEntryList_C_NavigateBack_Params
{
	bool                                               ReturnValue;                                               // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
};

// Function WBP_SettingsEntryList.WBP_SettingsEntryList_C.NavigateConfirmPressed
struct UWBP_SettingsEntryList_C_NavigateConfirmPressed_Params
{
	bool                                               ReturnValue;                                               // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
};

// Function WBP_SettingsEntryList.WBP_SettingsEntryList_C.NavigateConfirm
struct UWBP_SettingsEntryList_C_NavigateConfirm_Params
{
	bool                                               ReturnValue;                                               // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
};

// Function WBP_SettingsEntryList.WBP_SettingsEntryList_C.GetDirtyIndex
struct UWBP_SettingsEntryList_C_GetDirtyIndex_Params
{
	int                                                Index;                                                     // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function WBP_SettingsEntryList.WBP_SettingsEntryList_C.OnWidgetSettingsInfoSet
struct UWBP_SettingsEntryList_C_OnWidgetSettingsInfoSet_Params
{
};

// Function WBP_SettingsEntryList.WBP_SettingsEntryList_C.Selection Made
struct UWBP_SettingsEntryList_C_Selection_Made_Params
{
	int                                                Index;                                                     // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FText                                       Text;                                                      // 0x0008(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function WBP_SettingsEntryList.WBP_SettingsEntryList_C.ExecuteUbergraph_WBP_SettingsEntryList
struct UWBP_SettingsEntryList_C_ExecuteUbergraph_WBP_SettingsEntryList_Params
{
	int                                                EntryPoint;                                                // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function WBP_SettingsEntryList.WBP_SettingsEntryList_C.OnSelection__DelegateSignature
struct UWBP_SettingsEntryList_C_OnSelection__DelegateSignature_Params
{
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
