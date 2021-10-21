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
//		Name   -> Function WBP_RogueStatsScreen.WBP_RogueStatsScreen_C.SetStatHeader
//		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
//		class UWBP_RogueStatsScreen_TabEntry_C*            CurrentTab                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWBP_RogueStatsScreen_C::SetStatHeader(class UWBP_RogueStatsScreen_TabEntry_C* CurrentTab)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(73332);

	UWBP_RogueStatsScreen_C_SetStatHeader_Params params {};
	params.CurrentTab = CurrentTab;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_RogueStatsScreen.WBP_RogueStatsScreen_C.RegisterScrollingInput
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
void UWBP_RogueStatsScreen_C::RegisterScrollingInput()
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(73331);

	UWBP_RogueStatsScreen_C_RegisterScrollingInput_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_RogueStatsScreen.WBP_RogueStatsScreen_C.NavigateBack
//		Flags  -> (Event, Protected, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
//		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
bool UWBP_RogueStatsScreen_C::NavigateBack()
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(73330);

	UWBP_RogueStatsScreen_C_NavigateBack_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_RogueStatsScreen.WBP_RogueStatsScreen_C.GoBack
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
void UWBP_RogueStatsScreen_C::GoBack()
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(73329);

	UWBP_RogueStatsScreen_C_GoBack_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_RogueStatsScreen.WBP_RogueStatsScreen_C.TickScrolling
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
//		float                                              DeltaTime                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWBP_RogueStatsScreen_C::TickScrolling(float DeltaTime)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(73328);

	UWBP_RogueStatsScreen_C_TickScrolling_Params params {};
	params.DeltaTime = DeltaTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_RogueStatsScreen.WBP_RogueStatsScreen_C.ScrollReleased
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
void UWBP_RogueStatsScreen_C::ScrollReleased()
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(73327);

	UWBP_RogueStatsScreen_C_ScrollReleased_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_RogueStatsScreen.WBP_RogueStatsScreen_C.ScrollDownPressed
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
void UWBP_RogueStatsScreen_C::ScrollDownPressed()
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(73326);

	UWBP_RogueStatsScreen_C_ScrollDownPressed_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_RogueStatsScreen.WBP_RogueStatsScreen_C.ScrollUpPressed
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
void UWBP_RogueStatsScreen_C::ScrollUpPressed()
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(73325);

	UWBP_RogueStatsScreen_C_ScrollUpPressed_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_RogueStatsScreen.WBP_RogueStatsScreen_C.SetupTabNavigation
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
void UWBP_RogueStatsScreen_C::SetupTabNavigation()
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(73324);

	UWBP_RogueStatsScreen_C_SetupTabNavigation_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_RogueStatsScreen.WBP_RogueStatsScreen_C.GetPooledStatEntry
//		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
//		class UWBP_RogueStatsScreen_RogueEntry_C*          StatEntry                                                  (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWBP_RogueStatsScreen_C::GetPooledStatEntry(class UWBP_RogueStatsScreen_RogueEntry_C** StatEntry)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(73323);

	UWBP_RogueStatsScreen_C_GetPooledStatEntry_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (StatEntry != nullptr)
		*StatEntry = params.StatEntry;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_RogueStatsScreen.WBP_RogueStatsScreen_C.ReturnAllStatEntriesToPool
//		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
void UWBP_RogueStatsScreen_C::ReturnAllStatEntriesToPool()
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(73322);

	UWBP_RogueStatsScreen_C_ReturnAllStatEntriesToPool_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_RogueStatsScreen.WBP_RogueStatsScreen_C.On_PnlStatEntries_SortCompareChildren_1
//		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
//		class UWidget*                                     LHS                                                        (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		class UWidget*                                     RHS                                                        (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
bool UWBP_RogueStatsScreen_C::On_PnlStatEntries_SortCompareChildren_1(class UWidget* LHS, class UWidget* RHS)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(73321);

	UWBP_RogueStatsScreen_C_On_PnlStatEntries_SortCompareChildren_1_Params params {};
	params.LHS = LHS;
	params.RHS = RHS;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_RogueStatsScreen.WBP_RogueStatsScreen_C.SelectStat
//		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
//		class UClass*                                      PlayerStat                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		class UClass*                                      RogueStat                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWBP_RogueStatsScreen_C::SelectStat(class UClass* PlayerStat, class UClass* RogueStat)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(73320);

	UWBP_RogueStatsScreen_C_SelectStat_Params params {};
	params.PlayerStat = PlayerStat;
	params.RogueStat = RogueStat;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_RogueStatsScreen.WBP_RogueStatsScreen_C.AddStatTabs
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
void UWBP_RogueStatsScreen_C::AddStatTabs()
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(73319);

	UWBP_RogueStatsScreen_C_AddStatTabs_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_RogueStatsScreen.WBP_RogueStatsScreen_C.Construct
//		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
void UWBP_RogueStatsScreen_C::Construct()
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(73318);

	UWBP_RogueStatsScreen_C_Construct_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_RogueStatsScreen.WBP_RogueStatsScreen_C.Tick
//		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
//		struct FGeometry                                   MyGeometry                                                 (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
//		float                                              InDeltaTime                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWBP_RogueStatsScreen_C::Tick(const struct FGeometry& MyGeometry, float InDeltaTime)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(73317);

	UWBP_RogueStatsScreen_C_Tick_Params params {};
	params.MyGeometry = MyGeometry;
	params.InDeltaTime = InDeltaTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_RogueStatsScreen.WBP_RogueStatsScreen_C.InitializeWidget
//		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
//		class APUMG_HUD*                                   HUD                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWBP_RogueStatsScreen_C::InitializeWidget(class APUMG_HUD* HUD)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(73316);

	UWBP_RogueStatsScreen_C_InitializeWidget_Params params {};
	params.HUD = HUD;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_RogueStatsScreen.WBP_RogueStatsScreen_C.BndEvt__KeyboardBackButton_K2Node_ComponentBoundEvent_2_OnBackButtonClicked__DelegateSignature
//		Flags  -> (BlueprintEvent)
void UWBP_RogueStatsScreen_C::BndEvt__KeyboardBackButton_K2Node_ComponentBoundEvent_2_OnBackButtonClicked__DelegateSignature()
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(73315);

	UWBP_RogueStatsScreen_C_BndEvt__KeyboardBackButton_K2Node_ComponentBoundEvent_2_OnBackButtonClicked__DelegateSignature_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_RogueStatsScreen.WBP_RogueStatsScreen_C.InitializeWidgetNavigation
//		Flags  -> (Event, Public, BlueprintEvent)
void UWBP_RogueStatsScreen_C::InitializeWidgetNavigation()
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(73314);

	UWBP_RogueStatsScreen_C_InitializeWidgetNavigation_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_RogueStatsScreen.WBP_RogueStatsScreen_C.InitializeWidgetButtonListeners
//		Flags  -> (Event, Public, BlueprintEvent)
void UWBP_RogueStatsScreen_C::InitializeWidgetButtonListeners()
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(73313);

	UWBP_RogueStatsScreen_C_InitializeWidgetButtonListeners_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_RogueStatsScreen.WBP_RogueStatsScreen_C.OnShown
//		Flags  -> (Event, Public, BlueprintEvent)
void UWBP_RogueStatsScreen_C::OnShown()
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(73312);

	UWBP_RogueStatsScreen_C_OnShown_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_RogueStatsScreen.WBP_RogueStatsScreen_C.OnBackPrompt
//		Flags  -> (BlueprintCallable, BlueprintEvent)
void UWBP_RogueStatsScreen_C::OnBackPrompt()
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(73311);

	UWBP_RogueStatsScreen_C_OnBackPrompt_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_RogueStatsScreen.WBP_RogueStatsScreen_C.ExecuteUbergraph_WBP_RogueStatsScreen
//		Flags  -> (Final, HasDefaults)
// Parameters:
//		int                                                EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWBP_RogueStatsScreen_C::ExecuteUbergraph_WBP_RogueStatsScreen(int EntryPoint)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(73310);

	UWBP_RogueStatsScreen_C_ExecuteUbergraph_WBP_RogueStatsScreen_Params params {};
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
