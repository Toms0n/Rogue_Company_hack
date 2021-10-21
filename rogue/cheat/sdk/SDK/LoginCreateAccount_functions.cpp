// Name: roguecompany, Version: 425

#include "../pch.h"

/*!!DEFINE!!*/

/*!!HELPER_DEF!!*/

/*!!HELPER_INC!!*/

#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

namespace CG
{
//---------------------------------------------------------------------------
// Functions
//---------------------------------------------------------------------------

// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function LoginCreateAccount.LoginCreateAccount_C.InitializeWidget
//		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
//		class APUMG_HUD*                                   HUD                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ULoginCreateAccount_C::InitializeWidget(class APUMG_HUD* HUD)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(91180);

	ULoginCreateAccount_C_InitializeWidget_Params params {};
	params.HUD = HUD;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function LoginCreateAccount.LoginCreateAccount_C.Handle Text Committed
//		Flags  -> (HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
//		struct FText                                       Text                                                       (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
//		TEnumAsByte<SlateCore_ETextCommit>                 CommitMethod                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ULoginCreateAccount_C::Handle_Text_Committed(const struct FText& Text, TEnumAsByte<SlateCore_ETextCommit> CommitMethod)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(91179);

	ULoginCreateAccount_C_Handle_Text_Committed_Params params {};
	params.Text = Text;
	params.CommitMethod = CommitMethod;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function LoginCreateAccount.LoginCreateAccount_C.BndEvt__NextButton_K2Node_ComponentBoundEvent_6_OnClicked__DelegateSignature
//		Flags  -> (BlueprintEvent)
// Parameters:
//		class UWidget*                                     Widget                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ULoginCreateAccount_C::BndEvt__NextButton_K2Node_ComponentBoundEvent_6_OnClicked__DelegateSignature(class UWidget* Widget)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(91178);

	ULoginCreateAccount_C_BndEvt__NextButton_K2Node_ComponentBoundEvent_6_OnClicked__DelegateSignature_Params params {};
	params.Widget = Widget;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function LoginCreateAccount.LoginCreateAccount_C.Handle Text Changed
//		Flags  -> (HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
//		struct FText                                       Text                                                       (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
void ULoginCreateAccount_C::Handle_Text_Changed(const struct FText& Text)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(91177);

	ULoginCreateAccount_C_Handle_Text_Changed_Params params {};
	params.Text = Text;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function LoginCreateAccount.LoginCreateAccount_C.InitializeWidgetNavigation
//		Flags  -> (Event, Public, BlueprintEvent)
void ULoginCreateAccount_C::InitializeWidgetNavigation()
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(91176);

	ULoginCreateAccount_C_InitializeWidgetNavigation_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function LoginCreateAccount.LoginCreateAccount_C.Handle Login Error
//		Flags  -> (BlueprintCallable, BlueprintEvent)
// Parameters:
//		struct FText                                       MessageText                                                (BlueprintVisible, BlueprintReadOnly, Parm)
//		int                                                MessageId                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ULoginCreateAccount_C::Handle_Login_Error(const struct FText& MessageText, int MessageId)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(91175);

	ULoginCreateAccount_C_Handle_Login_Error_Params params {};
	params.MessageText = MessageText;
	params.MessageId = MessageId;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function LoginCreateAccount.LoginCreateAccount_C.Submit New Account
//		Flags  -> (BlueprintCallable, BlueprintEvent)
void ULoginCreateAccount_C::Submit_New_Account()
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(91174);

	ULoginCreateAccount_C_Submit_New_Account_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function LoginCreateAccount.LoginCreateAccount_C.Handle Checkbox Changed
//		Flags  -> (BlueprintCallable, BlueprintEvent)
// Parameters:
//		bool                                               Checked                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void ULoginCreateAccount_C::Handle_Checkbox_Changed(bool Checked)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(91173);

	ULoginCreateAccount_C_Handle_Checkbox_Changed_Params params {};
	params.Checked = Checked;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function LoginCreateAccount.LoginCreateAccount_C.OnShown
//		Flags  -> (Event, Public, BlueprintEvent)
void ULoginCreateAccount_C::OnShown()
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(91172);

	ULoginCreateAccount_C_OnShown_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function LoginCreateAccount.LoginCreateAccount_C.BndEvt__BackButton_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature
//		Flags  -> (BlueprintEvent)
// Parameters:
//		int                                                Index                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ULoginCreateAccount_C::BndEvt__BackButton_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature(int Index)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(91171);

	ULoginCreateAccount_C_BndEvt__BackButton_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature_Params params {};
	params.Index = Index;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function LoginCreateAccount.LoginCreateAccount_C.Gamepad Select Email
//		Flags  -> (BlueprintCallable, BlueprintEvent)
void ULoginCreateAccount_C::Gamepad_Select_Email()
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(91170);

	ULoginCreateAccount_C_Gamepad_Select_Email_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function LoginCreateAccount.LoginCreateAccount_C.Gamepad Select Repeat Password
//		Flags  -> (BlueprintCallable, BlueprintEvent)
void ULoginCreateAccount_C::Gamepad_Select_Repeat_Password()
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(91169);

	ULoginCreateAccount_C_Gamepad_Select_Repeat_Password_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function LoginCreateAccount.LoginCreateAccount_C.Gamepad Select Password
//		Flags  -> (BlueprintCallable, BlueprintEvent)
void ULoginCreateAccount_C::Gamepad_Select_Password()
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(91168);

	ULoginCreateAccount_C_Gamepad_Select_Password_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function LoginCreateAccount.LoginCreateAccount_C.Gamepad Select Username
//		Flags  -> (BlueprintCallable, BlueprintEvent)
void ULoginCreateAccount_C::Gamepad_Select_Username()
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(91167);

	ULoginCreateAccount_C_Gamepad_Select_Username_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function LoginCreateAccount.LoginCreateAccount_C.ExecuteUbergraph_LoginCreateAccount
//		Flags  -> (Final, HasDefaults)
// Parameters:
//		int                                                EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ULoginCreateAccount_C::ExecuteUbergraph_LoginCreateAccount(int EntryPoint)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(91166);

	ULoginCreateAccount_C_ExecuteUbergraph_LoginCreateAccount_Params params {};
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
