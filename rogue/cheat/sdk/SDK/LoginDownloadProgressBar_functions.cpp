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
//		Name   -> Function LoginDownloadProgressBar.LoginDownloadProgressBar_C.Make Progress Text
//		Flags  -> (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
//		float                                              Percent                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		float                                              Seconds                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		bool                                               Supports_ETA                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
//		struct FText                                       Text                                                       (Parm, OutParm)
void ULoginDownloadProgressBar_C::Make_Progress_Text(float Percent, float Seconds, bool Supports_ETA, struct FText* Text)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(60770);

	ULoginDownloadProgressBar_C_Make_Progress_Text_Params params {};
	params.Percent = Percent;
	params.Seconds = Seconds;
	params.Supports_ETA = Supports_ETA;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Text != nullptr)
		*Text = params.Text;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function LoginDownloadProgressBar.LoginDownloadProgressBar_C.Construct
//		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
void ULoginDownloadProgressBar_C::Construct()
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(60769);

	ULoginDownloadProgressBar_C_Construct_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function LoginDownloadProgressBar.LoginDownloadProgressBar_C.UpdatedDownloadProgress
//		Flags  -> (Event, Protected, BlueprintEvent)
// Parameters:
//		float                                              Progress                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		float                                              Total                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		float                                              Eta                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		bool                                               bSupportsEta                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void ULoginDownloadProgressBar_C::UpdatedDownloadProgress(float Progress, float Total, float Eta, bool bSupportsEta)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(60768);

	ULoginDownloadProgressBar_C_UpdatedDownloadProgress_Params params {};
	params.Progress = Progress;
	params.Total = Total;
	params.Eta = Eta;
	params.bSupportsEta = bSupportsEta;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function LoginDownloadProgressBar.LoginDownloadProgressBar_C.UpdateFinished
//		Flags  -> (Event, Protected, BlueprintEvent)
void ULoginDownloadProgressBar_C::UpdateFinished()
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(60767);

	ULoginDownloadProgressBar_C_UpdateFinished_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function LoginDownloadProgressBar.LoginDownloadProgressBar_C.ExecuteUbergraph_LoginDownloadProgressBar
//		Flags  -> (Final, HasDefaults)
// Parameters:
//		int                                                EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ULoginDownloadProgressBar_C::ExecuteUbergraph_LoginDownloadProgressBar(int EntryPoint)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(60766);

	ULoginDownloadProgressBar_C_ExecuteUbergraph_LoginDownloadProgressBar_Params params {};
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
