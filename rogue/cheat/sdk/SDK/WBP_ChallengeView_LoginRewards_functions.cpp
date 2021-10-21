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
//		Name   -> Function WBP_ChallengeView_LoginRewards.WBP_ChallengeView_LoginRewards_C.BindRewardGridEvents
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
void UWBP_ChallengeView_LoginRewards_C::BindRewardGridEvents()
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(86295);

	UWBP_ChallengeView_LoginRewards_C_BindRewardGridEvents_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_ChallengeView_LoginRewards.WBP_ChallengeView_LoginRewards_C.HandleRewardItemUnhovered
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
void UWBP_ChallengeView_LoginRewards_C::HandleRewardItemUnhovered()
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(86294);

	UWBP_ChallengeView_LoginRewards_C_HandleRewardItemUnhovered_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_ChallengeView_LoginRewards.WBP_ChallengeView_LoginRewards_C.HandleRewardItemHovered
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
//		class UWBP_LoginRewardItem_C*                      RewardItemWidget                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWBP_ChallengeView_LoginRewards_C::HandleRewardItemHovered(class UWBP_LoginRewardItem_C* RewardItemWidget)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(86293);

	UWBP_ChallengeView_LoginRewards_C_HandleRewardItemHovered_Params params {};
	params.RewardItemWidget = RewardItemWidget;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_ChallengeView_LoginRewards.WBP_ChallengeView_LoginRewards_C.BindRewardItems
//		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
void UWBP_ChallengeView_LoginRewards_C::BindRewardItems()
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(86292);

	UWBP_ChallengeView_LoginRewards_C_BindRewardItems_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_ChallengeView_LoginRewards.WBP_ChallengeView_LoginRewards_C.SetupRewardItems
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
void UWBP_ChallengeView_LoginRewards_C::SetupRewardItems()
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(86291);

	UWBP_ChallengeView_LoginRewards_C_SetupRewardItems_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_ChallengeView_LoginRewards.WBP_ChallengeView_LoginRewards_C.ResetRewardItemsNavigation
//		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
void UWBP_ChallengeView_LoginRewards_C::ResetRewardItemsNavigation()
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(86290);

	UWBP_ChallengeView_LoginRewards_C_ResetRewardItemsNavigation_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_ChallengeView_LoginRewards.WBP_ChallengeView_LoginRewards_C.SetRewardItemNavigation
//		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
void UWBP_ChallengeView_LoginRewards_C::SetRewardItemNavigation()
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(86289);

	UWBP_ChallengeView_LoginRewards_C_SetRewardItemNavigation_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_ChallengeView_LoginRewards.WBP_ChallengeView_LoginRewards_C.HandleRewardItemsReady
//		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
//		TArray<struct FLoginRewardItem>                    RewardItems                                                (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, HasGetValueTypeHash)
void UWBP_ChallengeView_LoginRewards_C::HandleRewardItemsReady(TArray<struct FLoginRewardItem>* RewardItems)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(86288);

	UWBP_ChallengeView_LoginRewards_C_HandleRewardItemsReady_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (RewardItems != nullptr)
		*RewardItems = params.RewardItems;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_ChallengeView_LoginRewards.WBP_ChallengeView_LoginRewards_C.Construct
//		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
void UWBP_ChallengeView_LoginRewards_C::Construct()
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(86287);

	UWBP_ChallengeView_LoginRewards_C_Construct_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_ChallengeView_LoginRewards.WBP_ChallengeView_LoginRewards_C.InitializeWidget
//		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
//		class APUMG_HUD*                                   HUD                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWBP_ChallengeView_LoginRewards_C::InitializeWidget(class APUMG_HUD* HUD)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(86286);

	UWBP_ChallengeView_LoginRewards_C_InitializeWidget_Params params {};
	params.HUD = HUD;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_ChallengeView_LoginRewards.WBP_ChallengeView_LoginRewards_C.InitializeWidgetNavigation
//		Flags  -> (Event, Public, BlueprintEvent)
void UWBP_ChallengeView_LoginRewards_C::InitializeWidgetNavigation()
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(86285);

	UWBP_ChallengeView_LoginRewards_C_InitializeWidgetNavigation_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_ChallengeView_LoginRewards.WBP_ChallengeView_LoginRewards_C.ExecuteUbergraph_WBP_ChallengeView_LoginRewards
//		Flags  -> (Final, HasDefaults)
// Parameters:
//		int                                                EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWBP_ChallengeView_LoginRewards_C::ExecuteUbergraph_WBP_ChallengeView_LoginRewards(int EntryPoint)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(86284);

	UWBP_ChallengeView_LoginRewards_C_ExecuteUbergraph_WBP_ChallengeView_LoginRewards_Params params {};
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
