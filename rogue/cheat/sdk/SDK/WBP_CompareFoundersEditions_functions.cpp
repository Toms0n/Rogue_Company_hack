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
//		Name   -> Function WBP_CompareFoundersEditions.WBP_CompareFoundersEditions_C.OnClickedOtherClosed
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
//		class UWidget*                                     Widget                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWBP_CompareFoundersEditions_C::OnClickedOtherClosed(class UWidget* Widget)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(72541);

	UWBP_CompareFoundersEditions_C_OnClickedOtherClosed_Params params {};
	params.Widget = Widget;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_CompareFoundersEditions.WBP_CompareFoundersEditions_C.NavigateBack
//		Flags  -> (Event, Protected, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
//		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
bool UWBP_CompareFoundersEditions_C::NavigateBack()
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(72540);

	UWBP_CompareFoundersEditions_C_NavigateBack_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_CompareFoundersEditions.WBP_CompareFoundersEditions_C.OnCloseClicked
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
void UWBP_CompareFoundersEditions_C::OnCloseClicked()
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(72539);

	UWBP_CompareFoundersEditions_C_OnCloseClicked_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_CompareFoundersEditions.WBP_CompareFoundersEditions_C.OnShown
//		Flags  -> (Event, Public, BlueprintEvent)
void UWBP_CompareFoundersEditions_C::OnShown()
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(72538);

	UWBP_CompareFoundersEditions_C_OnShown_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_CompareFoundersEditions.WBP_CompareFoundersEditions_C.InitializeWidget
//		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
//		class APUMG_HUD*                                   HUD                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWBP_CompareFoundersEditions_C::InitializeWidget(class APUMG_HUD* HUD)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(72537);

	UWBP_CompareFoundersEditions_C_InitializeWidget_Params params {};
	params.HUD = HUD;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_CompareFoundersEditions.WBP_CompareFoundersEditions_C.InitializeWidgetNavigation
//		Flags  -> (Event, Public, BlueprintEvent)
void UWBP_CompareFoundersEditions_C::InitializeWidgetNavigation()
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(72536);

	UWBP_CompareFoundersEditions_C_InitializeWidgetNavigation_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_CompareFoundersEditions.WBP_CompareFoundersEditions_C.ExecuteUbergraph_WBP_CompareFoundersEditions
//		Flags  -> (Final)
// Parameters:
//		int                                                EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWBP_CompareFoundersEditions_C::ExecuteUbergraph_WBP_CompareFoundersEditions(int EntryPoint)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(72535);

	UWBP_CompareFoundersEditions_C_ExecuteUbergraph_WBP_CompareFoundersEditions_Params params {};
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
