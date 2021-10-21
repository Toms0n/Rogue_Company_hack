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

// Function DropdownList.DropdownList_C.NavigateBack
struct UDropdownList_C_NavigateBack_Params
{
	bool                                               ReturnValue;                                               // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
};

// Function DropdownList.DropdownList_C.InitializeWidget
struct UDropdownList_C_InitializeWidget_Params
{
	class APUMG_HUD*                                   HUD;                                                       // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function DropdownList.DropdownList_C.Selection
struct UDropdownList_C_Selection_Params
{
	int                                                Index;                                                     // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FText                                       Text;                                                      // 0x0008(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function DropdownList.DropdownList_C.InitializeWidgetNavigation
struct UDropdownList_C_InitializeWidgetNavigation_Params
{
};

// Function DropdownList.DropdownList_C.HandleOnHover
struct UDropdownList_C_HandleOnHover_Params
{
	class UWidget*                                     Widget;                                                    // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                Index;                                                     // 0x0008(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function DropdownList.DropdownList_C.SetSelectedEntryByIndex
struct UDropdownList_C_SetSelectedEntryByIndex_Params
{
	int                                                Index;                                                     // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function DropdownList.DropdownList_C.BndEvt__Button_123_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
struct UDropdownList_C_BndEvt__Button_123_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature_Params
{
};

// Function DropdownList.DropdownList_C.ExecuteUbergraph_DropdownList
struct UDropdownList_C_ExecuteUbergraph_DropdownList_Params
{
	int                                                EntryPoint;                                                // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function DropdownList.DropdownList_C.OnHoverPreview__DelegateSignature
struct UDropdownList_C_OnHoverPreview__DelegateSignature_Params
{
	int                                                Index;                                                     // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function DropdownList.DropdownList_C.OnCancel__DelegateSignature
struct UDropdownList_C_OnCancel__DelegateSignature_Params
{
};

// Function DropdownList.DropdownList_C.OnSelection__DelegateSignature
struct UDropdownList_C_OnSelection__DelegateSignature_Params
{
	int                                                Index;                                                     // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FText                                       Text;                                                      // 0x0008(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
