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
//		Name   -> Function WBP_PlayerAwardsScreen.WBP_PlayerAwardsScreen_C.NavigateBack
//		Flags  -> (Event, Protected, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
//		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
bool UWBP_PlayerAwardsScreen_C::NavigateBack()
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(89672);

	UWBP_PlayerAwardsScreen_C_NavigateBack_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_PlayerAwardsScreen.WBP_PlayerAwardsScreen_C.GoBack
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
void UWBP_PlayerAwardsScreen_C::GoBack()
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(89671);

	UWBP_PlayerAwardsScreen_C_GoBack_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_PlayerAwardsScreen.WBP_PlayerAwardsScreen_C.RegisterScrollingInput
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
void UWBP_PlayerAwardsScreen_C::RegisterScrollingInput()
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(89670);

	UWBP_PlayerAwardsScreen_C_RegisterScrollingInput_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_PlayerAwardsScreen.WBP_PlayerAwardsScreen_C.TickScrolling
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
//		float                                              DeltaTime                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWBP_PlayerAwardsScreen_C::TickScrolling(float DeltaTime)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(89669);

	UWBP_PlayerAwardsScreen_C_TickScrolling_Params params {};
	params.DeltaTime = DeltaTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_PlayerAwardsScreen.WBP_PlayerAwardsScreen_C.ScrollReleased
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
void UWBP_PlayerAwardsScreen_C::ScrollReleased()
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(89668);

	UWBP_PlayerAwardsScreen_C_ScrollReleased_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_PlayerAwardsScreen.WBP_PlayerAwardsScreen_C.ScrollDownPressed
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
void UWBP_PlayerAwardsScreen_C::ScrollDownPressed()
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(89667);

	UWBP_PlayerAwardsScreen_C_ScrollDownPressed_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_PlayerAwardsScreen.WBP_PlayerAwardsScreen_C.ScrollUpPressed
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
void UWBP_PlayerAwardsScreen_C::ScrollUpPressed()
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(89666);

	UWBP_PlayerAwardsScreen_C_ScrollUpPressed_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_PlayerAwardsScreen.WBP_PlayerAwardsScreen_C.CompareChildren
//		Flags  -> (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
//		class UWidget*                                     LHS                                                        (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		class UWidget*                                     RHS                                                        (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
bool UWBP_PlayerAwardsScreen_C::CompareChildren(class UWidget* LHS, class UWidget* RHS)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(89665);

	UWBP_PlayerAwardsScreen_C_CompareChildren_Params params {};
	params.LHS = LHS;
	params.RHS = RHS;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_PlayerAwardsScreen.WBP_PlayerAwardsScreen_C.Construct
//		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
void UWBP_PlayerAwardsScreen_C::Construct()
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(89664);

	UWBP_PlayerAwardsScreen_C_Construct_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_PlayerAwardsScreen.WBP_PlayerAwardsScreen_C.Tick
//		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
//		struct FGeometry                                   MyGeometry                                                 (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
//		float                                              InDeltaTime                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWBP_PlayerAwardsScreen_C::Tick(const struct FGeometry& MyGeometry, float InDeltaTime)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(89663);

	UWBP_PlayerAwardsScreen_C_Tick_Params params {};
	params.MyGeometry = MyGeometry;
	params.InDeltaTime = InDeltaTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_PlayerAwardsScreen.WBP_PlayerAwardsScreen_C.OnShown
//		Flags  -> (Event, Public, BlueprintEvent)
void UWBP_PlayerAwardsScreen_C::OnShown()
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(89662);

	UWBP_PlayerAwardsScreen_C_OnShown_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_PlayerAwardsScreen.WBP_PlayerAwardsScreen_C.InitializeWidgetButtonListeners
//		Flags  -> (Event, Public, BlueprintEvent)
void UWBP_PlayerAwardsScreen_C::InitializeWidgetButtonListeners()
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(89661);

	UWBP_PlayerAwardsScreen_C_InitializeWidgetButtonListeners_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_PlayerAwardsScreen.WBP_PlayerAwardsScreen_C.InitializeWidget
//		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
//		class APUMG_HUD*                                   HUD                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWBP_PlayerAwardsScreen_C::InitializeWidget(class APUMG_HUD* HUD)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(89660);

	UWBP_PlayerAwardsScreen_C_InitializeWidget_Params params {};
	params.HUD = HUD;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_PlayerAwardsScreen.WBP_PlayerAwardsScreen_C.InitializeWidgetNavigation
//		Flags  -> (Event, Public, BlueprintEvent)
void UWBP_PlayerAwardsScreen_C::InitializeWidgetNavigation()
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(89659);

	UWBP_PlayerAwardsScreen_C_InitializeWidgetNavigation_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_PlayerAwardsScreen.WBP_PlayerAwardsScreen_C.OnBackPrompt
//		Flags  -> (BlueprintCallable, BlueprintEvent)
void UWBP_PlayerAwardsScreen_C::OnBackPrompt()
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(89658);

	UWBP_PlayerAwardsScreen_C_OnBackPrompt_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_PlayerAwardsScreen.WBP_PlayerAwardsScreen_C.ExecuteUbergraph_WBP_PlayerAwardsScreen
//		Flags  -> (Final, HasDefaults)
// Parameters:
//		int                                                EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWBP_PlayerAwardsScreen_C::ExecuteUbergraph_WBP_PlayerAwardsScreen(int EntryPoint)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(89657);

	UWBP_PlayerAwardsScreen_C_ExecuteUbergraph_WBP_PlayerAwardsScreen_Params params {};
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
