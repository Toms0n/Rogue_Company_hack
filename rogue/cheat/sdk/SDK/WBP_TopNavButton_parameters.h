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

// Function WBP_TopNavButton.WBP_TopNavButton_C.SetNewIndicator
struct UWBP_TopNavButton_C_SetNewIndicator_Params
{
	bool                                               Visible;                                                   // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function WBP_TopNavButton.WBP_TopNavButton_C.IsDisabled
struct UWBP_TopNavButton_C_IsDisabled_Params
{
	bool                                               Disabled;                                                  // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function WBP_TopNavButton.WBP_TopNavButton_C.IsActive
struct UWBP_TopNavButton_C_IsActive_Params
{
	bool                                               Active;                                                    // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function WBP_TopNavButton.WBP_TopNavButton_C.PreConstruct
struct UWBP_TopNavButton_C_PreConstruct_Params
{
	bool                                               IsDesignTime;                                              // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function WBP_TopNavButton.WBP_TopNavButton_C.SetMessage
struct UWBP_TopNavButton_C_SetMessage_Params
{
	struct FText                                       Message;                                                   // 0x0000(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function WBP_TopNavButton.WBP_TopNavButton_C.Construct
struct UWBP_TopNavButton_C_Construct_Params
{
};

// Function WBP_TopNavButton.WBP_TopNavButton_C.DisableButton
struct UWBP_TopNavButton_C_DisableButton_Params
{
	bool                                               IsDisabled;                                                // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function WBP_TopNavButton.WBP_TopNavButton_C.SetActive
struct UWBP_TopNavButton_C_SetActive_Params
{
	bool                                               IsActive;                                                  // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function WBP_TopNavButton.WBP_TopNavButton_C.GamepadConfirm
struct UWBP_TopNavButton_C_GamepadConfirm_Params
{
};

// Function WBP_TopNavButton.WBP_TopNavButton_C.InitializeWidget
struct UWBP_TopNavButton_C_InitializeWidget_Params
{
	class APUMG_HUD*                                   HUD;                                                       // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function WBP_TopNavButton.WBP_TopNavButton_C.NavTabSelected
struct UWBP_TopNavButton_C_NavTabSelected_Params
{
	class UKSNavTabWidget*                             SelectedNavTab;                                            // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function WBP_TopNavButton.WBP_TopNavButton_C.ExecuteUbergraph_WBP_TopNavButton
struct UWBP_TopNavButton_C_ExecuteUbergraph_WBP_TopNavButton_Params
{
	int                                                EntryPoint;                                                // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function WBP_TopNavButton.WBP_TopNavButton_C.OnNonRouteClicked__DelegateSignature
struct UWBP_TopNavButton_C_OnNonRouteClicked__DelegateSignature_Params
{
	class UKSWidget*                                   ButtonClicked;                                             // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function WBP_TopNavButton.WBP_TopNavButton_C.OnUnhovered__DelegateSignature
struct UWBP_TopNavButton_C_OnUnhovered__DelegateSignature_Params
{
};

// Function WBP_TopNavButton.WBP_TopNavButton_C.OnHovered__DelegateSignature
struct UWBP_TopNavButton_C_OnHovered__DelegateSignature_Params
{
};

// Function WBP_TopNavButton.WBP_TopNavButton_C.OnClicked__DelegateSignature
struct UWBP_TopNavButton_C_OnClicked__DelegateSignature_Params
{
	struct FName                                       TargetViewState;                                           // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
