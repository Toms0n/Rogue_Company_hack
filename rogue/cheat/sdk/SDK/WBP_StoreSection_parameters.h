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

// Function WBP_StoreSection.WBP_StoreSection_C.OnStoreTimerTick
struct UWBP_StoreSection_C_OnStoreTimerTick_Params
{
};

// Function WBP_StoreSection.WBP_StoreSection_C.ShowCTA
struct UWBP_StoreSection_C_ShowCTA_Params
{
	bool                                               ShowCTA;                                                   // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function WBP_StoreSection.WBP_StoreSection_C.UpdateSectionTimer
struct UWBP_StoreSection_C_UpdateSectionTimer_Params
{
};

// Function WBP_StoreSection.WBP_StoreSection_C.FindTaxInfo
struct UWBP_StoreSection_C_FindTaxInfo_Params
{
	class UKSStoreSection*                             StoreSection;                                              // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function WBP_StoreSection.WBP_StoreSection_C.SetItemSelected
struct UWBP_StoreSection_C_SetItemSelected_Params
{
	int                                                SectionIndex;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                ItemIndex;                                                 // 0x0004(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function WBP_StoreSection.WBP_StoreSection_C.SetupSectionNavigation
struct UWBP_StoreSection_C_SetupSectionNavigation_Params
{
	bool                                               SelectLast;                                                // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function WBP_StoreSection.WBP_StoreSection_C.SetSectionData
struct UWBP_StoreSection_C_SetSectionData_Params
{
	class UKSStoreSection*                             SectionData;                                               // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function WBP_StoreSection.WBP_StoreSection_C.ClearContents
struct UWBP_StoreSection_C_ClearContents_Params
{
};

// Function WBP_StoreSection.WBP_StoreSection_C.AddItemToSection
struct UWBP_StoreSection_C_AddItemToSection_Params
{
	class UKSStoreSectionItem*                         StoreItem;                                                 // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UGridSlot*                                   NewSlot;                                                   // 0x0008(0x0008)  (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function WBP_StoreSection.WBP_StoreSection_C.Construct
struct UWBP_StoreSection_C_Construct_Params
{
};

// Function WBP_StoreSection.WBP_StoreSection_C.Tick
struct UWBP_StoreSection_C_Tick_Params
{
	struct FGeometry                                   MyGeometry;                                                // 0x0000(0x0058)  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	float                                              InDeltaTime;                                               // 0x0058(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function WBP_StoreSection.WBP_StoreSection_C.ExecuteUbergraph_WBP_StoreSection
struct UWBP_StoreSection_C_ExecuteUbergraph_WBP_StoreSection_Params
{
	int                                                EntryPoint;                                                // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
