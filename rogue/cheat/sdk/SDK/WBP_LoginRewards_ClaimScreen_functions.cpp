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
//		Name   -> Function WBP_LoginRewards_ClaimScreen.WBP_LoginRewards_ClaimScreen_C.PlayClaimedRewardAnim
//		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
void UWBP_LoginRewards_ClaimScreen_C::PlayClaimedRewardAnim()
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(88331);

	UWBP_LoginRewards_ClaimScreen_C_PlayClaimedRewardAnim_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_LoginRewards_ClaimScreen.WBP_LoginRewards_ClaimScreen_C.HandleRewardsReady
//		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
//		TArray<struct FLoginRewardItem>                    RewardItems                                                (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, HasGetValueTypeHash)
void UWBP_LoginRewards_ClaimScreen_C::HandleRewardsReady(TArray<struct FLoginRewardItem>* RewardItems)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(88330);

	UWBP_LoginRewards_ClaimScreen_C_HandleRewardsReady_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (RewardItems != nullptr)
		*RewardItems = params.RewardItems;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_LoginRewards_ClaimScreen.WBP_LoginRewards_ClaimScreen_C.Construct
//		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
void UWBP_LoginRewards_ClaimScreen_C::Construct()
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(88329);

	UWBP_LoginRewards_ClaimScreen_C_Construct_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_LoginRewards_ClaimScreen.WBP_LoginRewards_ClaimScreen_C.InitializeWidget
//		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
//		class APUMG_HUD*                                   HUD                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWBP_LoginRewards_ClaimScreen_C::InitializeWidget(class APUMG_HUD* HUD)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(88328);

	UWBP_LoginRewards_ClaimScreen_C_InitializeWidget_Params params {};
	params.HUD = HUD;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_LoginRewards_ClaimScreen.WBP_LoginRewards_ClaimScreen_C.BndEvt__WBP_StandardButtonLarge_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature
//		Flags  -> (BlueprintEvent)
// Parameters:
//		class UWidget*                                     Widget                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWBP_LoginRewards_ClaimScreen_C::BndEvt__WBP_StandardButtonLarge_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature(class UWidget* Widget)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(88327);

	UWBP_LoginRewards_ClaimScreen_C_BndEvt__WBP_StandardButtonLarge_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature_Params params {};
	params.Widget = Widget;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_LoginRewards_ClaimScreen.WBP_LoginRewards_ClaimScreen_C.CloseLoginClaimScreen
//		Flags  -> (BlueprintCallable, BlueprintEvent)
void UWBP_LoginRewards_ClaimScreen_C::CloseLoginClaimScreen()
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(88326);

	UWBP_LoginRewards_ClaimScreen_C_CloseLoginClaimScreen_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_LoginRewards_ClaimScreen.WBP_LoginRewards_ClaimScreen_C.OnShown
//		Flags  -> (Event, Public, BlueprintEvent)
void UWBP_LoginRewards_ClaimScreen_C::OnShown()
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(88325);

	UWBP_LoginRewards_ClaimScreen_C_OnShown_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_LoginRewards_ClaimScreen.WBP_LoginRewards_ClaimScreen_C.InitializeWidgetNavigation
//		Flags  -> (Event, Public, BlueprintEvent)
void UWBP_LoginRewards_ClaimScreen_C::InitializeWidgetNavigation()
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(88324);

	UWBP_LoginRewards_ClaimScreen_C_InitializeWidgetNavigation_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_LoginRewards_ClaimScreen.WBP_LoginRewards_ClaimScreen_C.ExecuteUbergraph_WBP_LoginRewards_ClaimScreen
//		Flags  -> (Final, HasDefaults)
// Parameters:
//		int                                                EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWBP_LoginRewards_ClaimScreen_C::ExecuteUbergraph_WBP_LoginRewards_ClaimScreen(int EntryPoint)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(88323);

	UWBP_LoginRewards_ClaimScreen_C_ExecuteUbergraph_WBP_LoginRewards_ClaimScreen_Params params {};
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
