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

// Function Dropdown.Dropdown_C.IsSelecting
struct UDropdown_C_IsSelecting_Params
{
	bool                                               IsSelecting;                                               // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function Dropdown.Dropdown_C.NavigateConfirm
struct UDropdown_C_NavigateConfirm_Params
{
	bool                                               ReturnValue;                                               // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
};

// Function Dropdown.Dropdown_C.AppendOptions
struct UDropdown_C_AppendOptions_Params
{
	TArray<struct FText>                               OptionsToAppend;                                           // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, HasGetValueTypeHash)
};

// Function Dropdown.Dropdown_C.ForceClose
struct UDropdown_C_ForceClose_Params
{
};

// Function Dropdown.Dropdown_C.ForceToggle
struct UDropdown_C_ForceToggle_Params
{
};

// Function Dropdown.Dropdown_C.ForceOpen
struct UDropdown_C_ForceOpen_Params
{
};

// Function Dropdown.Dropdown_C.InitializeDropdownList
struct UDropdown_C_InitializeDropdownList_Params
{
	class UWidget*                                     ReturnValue;                                               // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Dropdown.Dropdown_C.SetSelectedOptionByIndex
struct UDropdown_C_SetSelectedOptionByIndex_Params
{
	int                                                Index;                                                     // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               Success;                                                   // 0x0004(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function Dropdown.Dropdown_C.SetSelectedOptionByText
struct UDropdown_C_SetSelectedOptionByText_Params
{
	struct FText                                       Text;                                                      // 0x0000(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm)
	bool                                               Success;                                                   // 0x0018(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function Dropdown.Dropdown_C.RemoveOptionByIndex
struct UDropdown_C_RemoveOptionByIndex_Params
{
	int                                                Index;                                                     // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               Success;                                                   // 0x0004(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function Dropdown.Dropdown_C.RemoveOptionByText
struct UDropdown_C_RemoveOptionByText_Params
{
	struct FText                                       Option;                                                    // 0x0000(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm)
	bool                                               Success;                                                   // 0x0018(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function Dropdown.Dropdown_C.GetSelectedOption
struct UDropdown_C_GetSelectedOption_Params
{
	struct FText                                       Selection;                                                 // 0x0000(0x0018)  (Parm, OutParm)
	int                                                Index;                                                     // 0x0018(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Dropdown.Dropdown_C.GetOptionCount
struct UDropdown_C_GetOptionCount_Params
{
	int                                                Count;                                                     // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Dropdown.Dropdown_C.FindIndexForOption
struct UDropdown_C_FindIndexForOption_Params
{
	struct FText                                       Option;                                                    // 0x0000(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm)
	bool                                               Success;                                                   // 0x0018(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	int                                                Index;                                                     // 0x001C(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Dropdown.Dropdown_C.FindOptionByIndex
struct UDropdown_C_FindOptionByIndex_Params
{
	int                                                Index;                                                     // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               Success;                                                   // 0x0004(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FText                                       Option;                                                    // 0x0008(0x0018)  (Parm, OutParm)
};

// Function Dropdown.Dropdown_C.ClearSelection
struct UDropdown_C_ClearSelection_Params
{
};

// Function Dropdown.Dropdown_C.ClearOptions
struct UDropdown_C_ClearOptions_Params
{
};

// Function Dropdown.Dropdown_C.AddOption
struct UDropdown_C_AddOption_Params
{
	struct FText                                       OptionText;                                                // 0x0000(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function Dropdown.Dropdown_C.BndEvt__HitTarget_K2Node_ComponentBoundEvent_4_OnButtonHoverEvent__DelegateSignature
struct UDropdown_C_BndEvt__HitTarget_K2Node_ComponentBoundEvent_4_OnButtonHoverEvent__DelegateSignature_Params
{
};

// Function Dropdown.Dropdown_C.SelectionMade
struct UDropdown_C_SelectionMade_Params
{
	int                                                Index;                                                     // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FText                                       Selection;                                                 // 0x0008(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function Dropdown.Dropdown_C.BndEvt__HitTarget_K2Node_ComponentBoundEvent_8_OnButtonClickedEvent__DelegateSignature
struct UDropdown_C_BndEvt__HitTarget_K2Node_ComponentBoundEvent_8_OnButtonClickedEvent__DelegateSignature_Params
{
};

// Function Dropdown.Dropdown_C.SelectionCancel
struct UDropdown_C_SelectionCancel_Params
{
};

// Function Dropdown.Dropdown_C.BndEvt__DropdownAnchor_K2Node_ComponentBoundEvent_0_OnMenuOpenChangedEvent__DelegateSignature
struct UDropdown_C_BndEvt__DropdownAnchor_K2Node_ComponentBoundEvent_0_OnMenuOpenChangedEvent__DelegateSignature_Params
{
	bool                                               bIsOpen;                                                   // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function Dropdown.Dropdown_C.HandleSetCurrentHoverIndex
struct UDropdown_C_HandleSetCurrentHoverIndex_Params
{
	int                                                CurrentHoverIndex;                                         // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Dropdown.Dropdown_C.BndEvt__HitTarget_K2Node_ComponentBoundEvent_3_OnButtonHoverEvent__DelegateSignature
struct UDropdown_C_BndEvt__HitTarget_K2Node_ComponentBoundEvent_3_OnButtonHoverEvent__DelegateSignature_Params
{
};

// Function Dropdown.Dropdown_C.GamepadHover
struct UDropdown_C_GamepadHover_Params
{
};

// Function Dropdown.Dropdown_C.GamepadUnhover
struct UDropdown_C_GamepadUnhover_Params
{
};

// Function Dropdown.Dropdown_C.On Selected
struct UDropdown_C_On_Selected_Params
{
};

// Function Dropdown.Dropdown_C.Hover
struct UDropdown_C_Hover_Params
{
};

// Function Dropdown.Dropdown_C.Unhover
struct UDropdown_C_Unhover_Params
{
};

// Function Dropdown.Dropdown_C.HoverPreview
struct UDropdown_C_HoverPreview_Params
{
	int                                                Index;                                                     // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Dropdown.Dropdown_C.ExecuteUbergraph_Dropdown
struct UDropdown_C_ExecuteUbergraph_Dropdown_Params
{
	int                                                EntryPoint;                                                // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Dropdown.Dropdown_C.OnSelectionCanceled__DelegateSignature
struct UDropdown_C_OnSelectionCanceled__DelegateSignature_Params
{
};

// Function Dropdown.Dropdown_C.OnHoverPreview__DelegateSignature
struct UDropdown_C_OnHoverPreview__DelegateSignature_Params
{
	int                                                Index;                                                     // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Dropdown.Dropdown_C.OnSelectionChanged__DelegateSignature
struct UDropdown_C_OnSelectionChanged__DelegateSignature_Params
{
	struct FText                                       SelectionText;                                             // 0x0000(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm)
	int                                                SelectionIndex;                                            // 0x0018(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
