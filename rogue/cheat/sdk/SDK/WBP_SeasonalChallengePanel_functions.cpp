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
//		Name   -> Function WBP_SeasonalChallengePanel.WBP_SeasonalChallengePanel_C.InitializeWidget
//		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
//		class APUMG_HUD*                                   HUD                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWBP_SeasonalChallengePanel_C::InitializeWidget(class APUMG_HUD* HUD)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(81209);

	UWBP_SeasonalChallengePanel_C_InitializeWidget_Params params {};
	params.HUD = HUD;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_SeasonalChallengePanel.WBP_SeasonalChallengePanel_C.Refresh Player Challenges
//		Flags  -> (BlueprintCallable, BlueprintEvent)
void UWBP_SeasonalChallengePanel_C::Refresh_Player_Challenges()
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(81208);

	UWBP_SeasonalChallengePanel_C_Refresh_Player_Challenges_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_SeasonalChallengePanel.WBP_SeasonalChallengePanel_C.Click Action
//		Flags  -> (BlueprintCallable, BlueprintEvent)
void UWBP_SeasonalChallengePanel_C::Click_Action()
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(81207);

	UWBP_SeasonalChallengePanel_C_Click_Action_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_SeasonalChallengePanel.WBP_SeasonalChallengePanel_C.BndEvt__WBP_ChallengeEntry_CardHorizontal_K2Node_ComponentBoundEvent_1_OnClicked__DelegateSignature
//		Flags  -> (BlueprintEvent)
void UWBP_SeasonalChallengePanel_C::BndEvt__WBP_ChallengeEntry_CardHorizontal_K2Node_ComponentBoundEvent_1_OnClicked__DelegateSignature()
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(81206);

	UWBP_SeasonalChallengePanel_C_BndEvt__WBP_ChallengeEntry_CardHorizontal_K2Node_ComponentBoundEvent_1_OnClicked__DelegateSignature_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_SeasonalChallengePanel.WBP_SeasonalChallengePanel_C.Handle Input State Changed
//		Flags  -> (BlueprintCallable, BlueprintEvent)
// Parameters:
//		TEnumAsByte<PlatformGameFramework_EPGAME_INPUT_STATE> InputState                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWBP_SeasonalChallengePanel_C::Handle_Input_State_Changed(TEnumAsByte<PlatformGameFramework_EPGAME_INPUT_STATE> InputState)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(81205);

	UWBP_SeasonalChallengePanel_C_Handle_Input_State_Changed_Params params {};
	params.InputState = InputState;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_SeasonalChallengePanel.WBP_SeasonalChallengePanel_C.ExecuteUbergraph_WBP_SeasonalChallengePanel
//		Flags  -> (Final)
// Parameters:
//		int                                                EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWBP_SeasonalChallengePanel_C::ExecuteUbergraph_WBP_SeasonalChallengePanel(int EntryPoint)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(81204);

	UWBP_SeasonalChallengePanel_C_ExecuteUbergraph_WBP_SeasonalChallengePanel_Params params {};
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
