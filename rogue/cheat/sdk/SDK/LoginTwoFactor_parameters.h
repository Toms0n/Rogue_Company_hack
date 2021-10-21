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

// Function LoginTwoFactor.LoginTwoFactor_C.InitializeWidget
struct ULoginTwoFactor_C_InitializeWidget_Params
{
	class APUMG_HUD*                                   HUD;                                                       // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function LoginTwoFactor.LoginTwoFactor_C.Handle Text Committed
struct ULoginTwoFactor_C_Handle_Text_Committed_Params
{
	struct FText                                       Text;                                                      // 0x0000(0x0018)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	TEnumAsByte<SlateCore_ETextCommit>                 CommitMethod;                                              // 0x0018(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function LoginTwoFactor.LoginTwoFactor_C.BndEvt__NextButton_K2Node_ComponentBoundEvent_6_OnClicked__DelegateSignature
struct ULoginTwoFactor_C_BndEvt__NextButton_K2Node_ComponentBoundEvent_6_OnClicked__DelegateSignature_Params
{
	class UWidget*                                     Widget;                                                    // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function LoginTwoFactor.LoginTwoFactor_C.Handle Text Changed
struct ULoginTwoFactor_C_Handle_Text_Changed_Params
{
	struct FText                                       Text;                                                      // 0x0000(0x0018)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};

// Function LoginTwoFactor.LoginTwoFactor_C.BndEvt__BackButton_K2Node_ComponentBoundEvent_26_OnClicked__DelegateSignature
struct ULoginTwoFactor_C_BndEvt__BackButton_K2Node_ComponentBoundEvent_26_OnClicked__DelegateSignature_Params
{
	class UWidget*                                     Widget;                                                    // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function LoginTwoFactor.LoginTwoFactor_C.Submit Code
struct ULoginTwoFactor_C_Submit_Code_Params
{
};

// Function LoginTwoFactor.LoginTwoFactor_C.InitializeWidgetNavigation
struct ULoginTwoFactor_C_InitializeWidgetNavigation_Params
{
};

// Function LoginTwoFactor.LoginTwoFactor_C.Handle CodeField Gamepad Confirm
struct ULoginTwoFactor_C_Handle_CodeField_Gamepad_Confirm_Params
{
};

// Function LoginTwoFactor.LoginTwoFactor_C.Handle Login Error
struct ULoginTwoFactor_C_Handle_Login_Error_Params
{
	struct FText                                       MessageText;                                               // 0x0000(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm)
	int                                                MessageId;                                                 // 0x0018(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function LoginTwoFactor.LoginTwoFactor_C.ExecuteUbergraph_LoginTwoFactor
struct ULoginTwoFactor_C_ExecuteUbergraph_LoginTwoFactor_Params
{
	int                                                EntryPoint;                                                // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
