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
//		Name   -> Function WBP_ChallengeView_SeasonalContracts.WBP_ChallengeView_SeasonalContracts_C.RefreshSeasonalChallengesDescription
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
void UWBP_ChallengeView_SeasonalContracts_C::RefreshSeasonalChallengesDescription()
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(70394);

	UWBP_ChallengeView_SeasonalContracts_C_RefreshSeasonalChallengesDescription_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_ChallengeView_SeasonalContracts.WBP_ChallengeView_SeasonalContracts_C.RefreshSequenceWidgets
//		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
void UWBP_ChallengeView_SeasonalContracts_C::RefreshSequenceWidgets()
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(70393);

	UWBP_ChallengeView_SeasonalContracts_C_RefreshSequenceWidgets_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_ChallengeView_SeasonalContracts.WBP_ChallengeView_SeasonalContracts_C.GetWeeklySequenceWidgets
//		Flags  -> (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
//		TArray<class UWBP_ChallengeEntry_Seasonal_C*>      Return_Value                                               (Parm, OutParm, ContainsInstancedReference, HasGetValueTypeHash)
void UWBP_ChallengeView_SeasonalContracts_C::GetWeeklySequenceWidgets(TArray<class UWBP_ChallengeEntry_Seasonal_C*>* Return_Value)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(70392);

	UWBP_ChallengeView_SeasonalContracts_C_GetWeeklySequenceWidgets_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Return_Value != nullptr)
		*Return_Value = params.Return_Value;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_ChallengeView_SeasonalContracts.WBP_ChallengeView_SeasonalContracts_C.RefreshTimeRemaining
//		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
void UWBP_ChallengeView_SeasonalContracts_C::RefreshTimeRemaining()
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(70391);

	UWBP_ChallengeView_SeasonalContracts_C_RefreshTimeRemaining_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_ChallengeView_SeasonalContracts.WBP_ChallengeView_SeasonalContracts_C.InitializeWidget
//		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
//		class APUMG_HUD*                                   HUD                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWBP_ChallengeView_SeasonalContracts_C::InitializeWidget(class APUMG_HUD* HUD)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(70390);

	UWBP_ChallengeView_SeasonalContracts_C_InitializeWidget_Params params {};
	params.HUD = HUD;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_ChallengeView_SeasonalContracts.WBP_ChallengeView_SeasonalContracts_C.InitializeWidgetNavigation
//		Flags  -> (Event, Public, BlueprintEvent)
void UWBP_ChallengeView_SeasonalContracts_C::InitializeWidgetNavigation()
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(70389);

	UWBP_ChallengeView_SeasonalContracts_C_InitializeWidgetNavigation_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_ChallengeView_SeasonalContracts.WBP_ChallengeView_SeasonalContracts_C.OnChallengesUpdated
//		Flags  -> (BlueprintCallable, BlueprintEvent)
void UWBP_ChallengeView_SeasonalContracts_C::OnChallengesUpdated()
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(70388);

	UWBP_ChallengeView_SeasonalContracts_C_OnChallengesUpdated_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_ChallengeView_SeasonalContracts.WBP_ChallengeView_SeasonalContracts_C.OnShown
//		Flags  -> (Event, Public, BlueprintEvent)
void UWBP_ChallengeView_SeasonalContracts_C::OnShown()
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(70387);

	UWBP_ChallengeView_SeasonalContracts_C_OnShown_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_ChallengeView_SeasonalContracts.WBP_ChallengeView_SeasonalContracts_C.Handle On Week Gamepad Hovered
//		Flags  -> (BlueprintCallable, BlueprintEvent)
// Parameters:
//		class UWBP_ChallengeEntry_Seasonal_C*              Hovered_Widget                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWBP_ChallengeView_SeasonalContracts_C::Handle_On_Week_Gamepad_Hovered(class UWBP_ChallengeEntry_Seasonal_C* Hovered_Widget)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(70386);

	UWBP_ChallengeView_SeasonalContracts_C_Handle_On_Week_Gamepad_Hovered_Params params {};
	params.Hovered_Widget = Hovered_Widget;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_ChallengeView_SeasonalContracts.WBP_ChallengeView_SeasonalContracts_C.ExecuteUbergraph_WBP_ChallengeView_SeasonalContracts
//		Flags  -> (Final, HasDefaults)
// Parameters:
//		int                                                EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWBP_ChallengeView_SeasonalContracts_C::ExecuteUbergraph_WBP_ChallengeView_SeasonalContracts(int EntryPoint)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(70385);

	UWBP_ChallengeView_SeasonalContracts_C_ExecuteUbergraph_WBP_ChallengeView_SeasonalContracts_Params params {};
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
