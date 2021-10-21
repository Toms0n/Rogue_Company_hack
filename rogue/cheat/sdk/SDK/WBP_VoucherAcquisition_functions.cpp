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
//		Name   -> Function WBP_VoucherAcquisition.WBP_VoucherAcquisition_C.OnScrollRight
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
//		KillstreakUINew_EContextPromptHoldReleaseState     Status                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWBP_VoucherAcquisition_C::OnScrollRight(KillstreakUINew_EContextPromptHoldReleaseState Status)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(91021);

	UWBP_VoucherAcquisition_C_OnScrollRight_Params params {};
	params.Status = Status;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_VoucherAcquisition.WBP_VoucherAcquisition_C.OnScrollLeft
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
//		KillstreakUINew_EContextPromptHoldReleaseState     Status                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWBP_VoucherAcquisition_C::OnScrollLeft(KillstreakUINew_EContextPromptHoldReleaseState Status)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(91020);

	UWBP_VoucherAcquisition_C_OnScrollLeft_Params params {};
	params.Status = Status;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_VoucherAcquisition.WBP_VoucherAcquisition_C.TickScroll
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
//		float                                              fPercentage                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWBP_VoucherAcquisition_C::TickScroll(float fPercentage)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(91019);

	UWBP_VoucherAcquisition_C_TickScroll_Params params {};
	params.fPercentage = fPercentage;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_VoucherAcquisition.WBP_VoucherAcquisition_C.DisplayVoucherAcquisitions
//		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
void UWBP_VoucherAcquisition_C::DisplayVoucherAcquisitions()
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(91018);

	UWBP_VoucherAcquisition_C_DisplayVoucherAcquisitions_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_VoucherAcquisition.WBP_VoucherAcquisition_C.AttemptGetAcquisition
//		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
//		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
bool UWBP_VoucherAcquisition_C::AttemptGetAcquisition()
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(91017);

	UWBP_VoucherAcquisition_C_AttemptGetAcquisition_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_VoucherAcquisition.WBP_VoucherAcquisition_C.OnRedeemDLC
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
//		class UWidget*                                     Widget                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWBP_VoucherAcquisition_C::OnRedeemDLC(class UWidget* Widget)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(91016);

	UWBP_VoucherAcquisition_C_OnRedeemDLC_Params params {};
	params.Widget = Widget;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_VoucherAcquisition.WBP_VoucherAcquisition_C.NavigateBack
//		Flags  -> (Event, Protected, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
//		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
bool UWBP_VoucherAcquisition_C::NavigateBack()
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(91015);

	UWBP_VoucherAcquisition_C_NavigateBack_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_VoucherAcquisition.WBP_VoucherAcquisition_C.Tick
//		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
//		struct FGeometry                                   MyGeometry                                                 (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
//		float                                              InDeltaTime                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWBP_VoucherAcquisition_C::Tick(const struct FGeometry& MyGeometry, float InDeltaTime)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(91014);

	UWBP_VoucherAcquisition_C_Tick_Params params {};
	params.MyGeometry = MyGeometry;
	params.InDeltaTime = InDeltaTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_VoucherAcquisition.WBP_VoucherAcquisition_C.InitializeWidget
//		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
//		class APUMG_HUD*                                   HUD                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWBP_VoucherAcquisition_C::InitializeWidget(class APUMG_HUD* HUD)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(91013);

	UWBP_VoucherAcquisition_C_InitializeWidget_Params params {};
	params.HUD = HUD;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_VoucherAcquisition.WBP_VoucherAcquisition_C.InitializeWidgetNavigation
//		Flags  -> (Event, Public, BlueprintEvent)
void UWBP_VoucherAcquisition_C::InitializeWidgetNavigation()
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(91012);

	UWBP_VoucherAcquisition_C_InitializeWidgetNavigation_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_VoucherAcquisition.WBP_VoucherAcquisition_C.OnShown
//		Flags  -> (Event, Public, BlueprintEvent)
void UWBP_VoucherAcquisition_C::OnShown()
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(91011);

	UWBP_VoucherAcquisition_C_OnShown_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_VoucherAcquisition.WBP_VoucherAcquisition_C.PreConstruct
//		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
//		bool                                               IsDesignTime                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UWBP_VoucherAcquisition_C::PreConstruct(bool IsDesignTime)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(91010);

	UWBP_VoucherAcquisition_C_PreConstruct_Params params {};
	params.IsDesignTime = IsDesignTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_VoucherAcquisition.WBP_VoucherAcquisition_C.ExecuteUbergraph_WBP_VoucherAcquisition
//		Flags  -> (Final, HasDefaults)
// Parameters:
//		int                                                EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWBP_VoucherAcquisition_C::ExecuteUbergraph_WBP_VoucherAcquisition(int EntryPoint)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(91009);

	UWBP_VoucherAcquisition_C_ExecuteUbergraph_WBP_VoucherAcquisition_Params params {};
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
