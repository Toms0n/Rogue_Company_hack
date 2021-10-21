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
//		Name   -> Function WBP_RogueMasteryRewardIcon.WBP_RogueMasteryRewardIcon_C.SetFromTagContainer
//		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
//		struct FGameplayTagContainer                       GameplayTagContainer                                       (BlueprintVisible, BlueprintReadOnly, Parm)
void UWBP_RogueMasteryRewardIcon_C::SetFromTagContainer(const struct FGameplayTagContainer& GameplayTagContainer)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(78798);

	UWBP_RogueMasteryRewardIcon_C_SetFromTagContainer_Params params {};
	params.GameplayTagContainer = GameplayTagContainer;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_RogueMasteryRewardIcon.WBP_RogueMasteryRewardIcon_C.SetFromRarity
//		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
//		struct FGameplayTag                                RarityTag                                                  (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)
void UWBP_RogueMasteryRewardIcon_C::SetFromRarity(const struct FGameplayTag& RarityTag)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(78797);

	UWBP_RogueMasteryRewardIcon_C_SetFromRarity_Params params {};
	params.RarityTag = RarityTag;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_RogueMasteryRewardIcon.WBP_RogueMasteryRewardIcon_C.SetRewardItem
//		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
//		class UPUMG_StoreItem*                             StoreItem                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWBP_RogueMasteryRewardIcon_C::SetRewardItem(class UPUMG_StoreItem* StoreItem)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(78796);

	UWBP_RogueMasteryRewardIcon_C_SetRewardItem_Params params {};
	params.StoreItem = StoreItem;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
