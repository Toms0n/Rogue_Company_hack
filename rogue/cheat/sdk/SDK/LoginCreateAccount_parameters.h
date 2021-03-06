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

// Function LoginCreateAccount.LoginCreateAccount_C.InitializeWidget
struct ULoginCreateAccount_C_InitializeWidget_Params
{
	class APUMG_HUD*                                   HUD;                                                       // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function LoginCreateAccount.LoginCreateAccount_C.Handle Text Committed
struct ULoginCreateAccount_C_Handle_Text_Committed_Params
{
	struct FText                                       Text;                                                      // 0x0000(0x0018)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	TEnumAsByte<SlateCore_ETextCommit>                 CommitMethod;                                              // 0x0018(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function LoginCreateAccount.LoginCreateAccount_C.BndEvt__NextButton_K2Node_ComponentBoundEvent_6_OnClicked__DelegateSignature
struct ULoginCreateAccount_C_BndEvt__NextButton_K2Node_ComponentBoundEvent_6_OnClicked__DelegateSignature_Params
{
	class UWidget*                                     Widget;                                                    // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function LoginCreateAccount.LoginCreateAccount_C.Handle Text Changed
struct ULoginCreateAccount_C_Handle_Text_Changed_Params
{
	struct FText                                       Text;                                                      // 0x0000(0x0018)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};

// Function LoginCreateAccount.LoginCreateAccount_C.InitializeWidgetNavigation
struct ULoginCreateAccount_C_InitializeWidgetNavigation_Params
{
};

// Function LoginCreateAccount.LoginCreateAccount_C.Handle Login Error
struct ULoginCreateAccount_C_Handle_Login_Error_Params
{
	struct FText                                       MessageText;                                               // 0x0000(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm)
	int                                                MessageId;                                                 // 0x0018(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function LoginCreateAccount.LoginCreateAccount_C.Submit New Account
struct ULoginCreateAccount_C_Submit_New_Account_Params
{
};

// Function LoginCreateAccount.LoginCreateAccount_C.Handle Checkbox Changed
struct ULoginCreateAccount_C_Handle_Checkbox_Changed_Params
{
	bool                                               Checked;                                                   // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function LoginCreateAccount.LoginCreateAccount_C.OnShown
struct ULoginCreateAccount_C_OnShown_Params
{
};

// Function LoginCreateAccount.LoginCreateAccount_C.BndEvt__BackButton_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature
struct ULoginCreateAccount_C_BndEvt__BackButton_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature_Params
{
	int                                                Index;                                                     // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function LoginCreateAccount.LoginCreateAccount_C.Gamepad Select Email
struct ULoginCreateAccount_C_Gamepad_Select_Email_Params
{
};

// Function LoginCreateAccount.LoginCreateAccount_C.Gamepad Select Repeat Password
struct ULoginCreateAccount_C_Gamepad_Select_Repeat_Password_Params
{
};

// Function LoginCreateAccount.LoginCreateAccount_C.Gamepad Select Password
struct ULoginCreateAccount_C_Gamepad_Select_Password_Params
{
};

// Function LoginCreateAccount.LoginCreateAccount_C.Gamepad Select Username
struct ULoginCreateAccount_C_Gamepad_Select_Username_Params
{
};

// Function LoginCreateAccount.LoginCreateAccount_C.ExecuteUbergraph_LoginCreateAccount
struct ULoginCreateAccount_C_ExecuteUbergraph_LoginCreateAccount_Params
{
	int                                                EntryPoint;                                                // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
