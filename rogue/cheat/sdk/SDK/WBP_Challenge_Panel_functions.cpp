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
//		Name   -> Function WBP_Challenge_Panel.WBP_Challenge_Panel_C.DisplayRerollPrompt
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
//		bool                                               Show                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UWBP_Challenge_Panel_C::DisplayRerollPrompt(bool Show)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(82536);

	UWBP_Challenge_Panel_C_DisplayRerollPrompt_Params params {};
	params.Show = Show;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_Challenge_Panel.WBP_Challenge_Panel_C.GetNavigationWidgets
//		Flags  -> (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
//		TArray<class UPUMG_Widget*>                        Widgets                                                    (Parm, OutParm, ContainsInstancedReference, HasGetValueTypeHash)
void UWBP_Challenge_Panel_C::GetNavigationWidgets(TArray<class UPUMG_Widget*>* Widgets)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(82535);

	UWBP_Challenge_Panel_C_GetNavigationWidgets_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Widgets != nullptr)
		*Widgets = params.Widgets;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_Challenge_Panel.WBP_Challenge_Panel_C.PopulateChallenges
//		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
void UWBP_Challenge_Panel_C::PopulateChallenges()
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(82534);

	UWBP_Challenge_Panel_C_PopulateChallenges_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_Challenge_Panel.WBP_Challenge_Panel_C.PreConstruct
//		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
//		bool                                               IsDesignTime                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UWBP_Challenge_Panel_C::PreConstruct(bool IsDesignTime)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(82533);

	UWBP_Challenge_Panel_C_PreConstruct_Params params {};
	params.IsDesignTime = IsDesignTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_Challenge_Panel.WBP_Challenge_Panel_C.InitializeWidget
//		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
//		class APUMG_HUD*                                   HUD                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWBP_Challenge_Panel_C::InitializeWidget(class APUMG_HUD* HUD)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(82532);

	UWBP_Challenge_Panel_C_InitializeWidget_Params params {};
	params.HUD = HUD;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_Challenge_Panel.WBP_Challenge_Panel_C.ExecuteUbergraph_WBP_Challenge_Panel
//		Flags  -> (Final)
// Parameters:
//		int                                                EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWBP_Challenge_Panel_C::ExecuteUbergraph_WBP_Challenge_Panel(int EntryPoint)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(82531);

	UWBP_Challenge_Panel_C_ExecuteUbergraph_WBP_Challenge_Panel_Params params {};
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
