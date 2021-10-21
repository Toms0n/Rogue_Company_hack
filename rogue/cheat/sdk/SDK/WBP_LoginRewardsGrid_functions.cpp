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
//		Name   -> Function WBP_LoginRewardsGrid.WBP_LoginRewardsGrid_C.GetRewardItems
//		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
//		TArray<class UWBP_LoginRewardItem_C*>              RewardItems                                                (Parm, OutParm, ContainsInstancedReference, HasGetValueTypeHash)
void UWBP_LoginRewardsGrid_C::GetRewardItems(TArray<class UWBP_LoginRewardItem_C*>* RewardItems)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(80324);

	UWBP_LoginRewardsGrid_C_GetRewardItems_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (RewardItems != nullptr)
		*RewardItems = params.RewardItems;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_LoginRewardsGrid.WBP_LoginRewardsGrid_C.SetMaxPerRow
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
//		int                                                Num                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWBP_LoginRewardsGrid_C::SetMaxPerRow(int Num)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(80323);

	UWBP_LoginRewardsGrid_C_SetMaxPerRow_Params params {};
	params.Num = Num;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_LoginRewardsGrid.WBP_LoginRewardsGrid_C.GetRewardItemAtIndex
//		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
//		int                                                Index                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		class UWBP_LoginRewardItem_C*                      RewardItem                                                 (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWBP_LoginRewardsGrid_C::GetRewardItemAtIndex(int Index, class UWBP_LoginRewardItem_C** RewardItem)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(80322);

	UWBP_LoginRewardsGrid_C_GetRewardItemAtIndex_Params params {};
	params.Index = Index;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (RewardItem != nullptr)
		*RewardItem = params.RewardItem;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_LoginRewardsGrid.WBP_LoginRewardsGrid_C.HandleClaimRewardAnimFinished
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
void UWBP_LoginRewardsGrid_C::HandleClaimRewardAnimFinished()
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(80321);

	UWBP_LoginRewardsGrid_C_HandleClaimRewardAnimFinished_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_LoginRewardsGrid.WBP_LoginRewardsGrid_C.ResetGrid
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
void UWBP_LoginRewardsGrid_C::ResetGrid()
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(80320);

	UWBP_LoginRewardsGrid_C_ResetGrid_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_LoginRewardsGrid.WBP_LoginRewardsGrid_C.PopulateRewardGrid
//		Flags  -> (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
//		TArray<struct FLoginRewardItem>                    RewardItems                                                (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, HasGetValueTypeHash)
//		bool                                               AllowClaimReward                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UWBP_LoginRewardsGrid_C::PopulateRewardGrid(TArray<struct FLoginRewardItem>* RewardItems, bool AllowClaimReward)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(80319);

	UWBP_LoginRewardsGrid_C_PopulateRewardGrid_Params params {};
	params.AllowClaimReward = AllowClaimReward;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (RewardItems != nullptr)
		*RewardItems = params.RewardItems;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_LoginRewardsGrid.WBP_LoginRewardsGrid_C.HandleOnRewardHovered
//		Flags  -> (BlueprintCallable, BlueprintEvent)
// Parameters:
//		class UWBP_LoginRewardItem_C*                      RewardItemWidget                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWBP_LoginRewardsGrid_C::HandleOnRewardHovered(class UWBP_LoginRewardItem_C* RewardItemWidget)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(80318);

	UWBP_LoginRewardsGrid_C_HandleOnRewardHovered_Params params {};
	params.RewardItemWidget = RewardItemWidget;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_LoginRewardsGrid.WBP_LoginRewardsGrid_C.HandleOnRewardUnhovered
//		Flags  -> (BlueprintCallable, BlueprintEvent)
void UWBP_LoginRewardsGrid_C::HandleOnRewardUnhovered()
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(80317);

	UWBP_LoginRewardsGrid_C_HandleOnRewardUnhovered_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_LoginRewardsGrid.WBP_LoginRewardsGrid_C.HandleOnRewardClicked
//		Flags  -> (BlueprintCallable, BlueprintEvent)
// Parameters:
//		struct FLoginRewardItem                            RewardItem                                                 (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
void UWBP_LoginRewardsGrid_C::HandleOnRewardClicked(const struct FLoginRewardItem& RewardItem)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(80316);

	UWBP_LoginRewardsGrid_C_HandleOnRewardClicked_Params params {};
	params.RewardItem = RewardItem;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_LoginRewardsGrid.WBP_LoginRewardsGrid_C.ExecuteUbergraph_WBP_LoginRewardsGrid
//		Flags  -> (Final, HasDefaults)
// Parameters:
//		int                                                EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWBP_LoginRewardsGrid_C::ExecuteUbergraph_WBP_LoginRewardsGrid(int EntryPoint)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(80315);

	UWBP_LoginRewardsGrid_C_ExecuteUbergraph_WBP_LoginRewardsGrid_Params params {};
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_LoginRewardsGrid.WBP_LoginRewardsGrid_C.OnRewardClicked__DelegateSignature
//		Flags  -> (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
//		struct FLoginRewardItem                            RewardItem                                                 (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
void UWBP_LoginRewardsGrid_C::OnRewardClicked__DelegateSignature(const struct FLoginRewardItem& RewardItem)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(80314);

	UWBP_LoginRewardsGrid_C_OnRewardClicked__DelegateSignature_Params params {};
	params.RewardItem = RewardItem;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_LoginRewardsGrid.WBP_LoginRewardsGrid_C.OnRewardUnhovered__DelegateSignature
//		Flags  -> (Public, Delegate, BlueprintCallable, BlueprintEvent)
void UWBP_LoginRewardsGrid_C::OnRewardUnhovered__DelegateSignature()
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(80313);

	UWBP_LoginRewardsGrid_C_OnRewardUnhovered__DelegateSignature_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_LoginRewardsGrid.WBP_LoginRewardsGrid_C.OnRewardHovered__DelegateSignature
//		Flags  -> (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
//		class UWBP_LoginRewardItem_C*                      Widget                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWBP_LoginRewardsGrid_C::OnRewardHovered__DelegateSignature(class UWBP_LoginRewardItem_C* Widget)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(80312);

	UWBP_LoginRewardsGrid_C_OnRewardHovered__DelegateSignature_Params params {};
	params.Widget = Widget;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_LoginRewardsGrid.WBP_LoginRewardsGrid_C.OnRewardItemsPopulated__DelegateSignature
//		Flags  -> (Public, Delegate, BlueprintCallable, BlueprintEvent)
void UWBP_LoginRewardsGrid_C::OnRewardItemsPopulated__DelegateSignature()
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(80311);

	UWBP_LoginRewardsGrid_C_OnRewardItemsPopulated__DelegateSignature_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_LoginRewardsGrid.WBP_LoginRewardsGrid_C.OnClaimRewardAnimComplete__DelegateSignature
//		Flags  -> (Public, Delegate, BlueprintCallable, BlueprintEvent)
void UWBP_LoginRewardsGrid_C::OnClaimRewardAnimComplete__DelegateSignature()
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(80310);

	UWBP_LoginRewardsGrid_C_OnClaimRewardAnimComplete__DelegateSignature_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
