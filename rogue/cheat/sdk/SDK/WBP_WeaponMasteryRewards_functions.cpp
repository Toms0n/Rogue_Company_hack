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
//		Name   -> Function WBP_WeaponMasteryRewards.WBP_WeaponMasteryRewards_C.GetModelViewerActorName
//		Flags  -> (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
//		struct FName                                       ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
struct FName UWBP_WeaponMasteryRewards_C::GetModelViewerActorName()
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(235080);

	UWBP_WeaponMasteryRewards_C_GetModelViewerActorName_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_WeaponMasteryRewards.WBP_WeaponMasteryRewards_C.GetCurrentPreviewWeapon
//		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
//		class UKSWeaponAsset*                              Return_Value                                               (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWBP_WeaponMasteryRewards_C::GetCurrentPreviewWeapon(class UKSWeaponAsset** Return_Value)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(235079);

	UWBP_WeaponMasteryRewards_C_GetCurrentPreviewWeapon_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Return_Value != nullptr)
		*Return_Value = params.Return_Value;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_WeaponMasteryRewards.WBP_WeaponMasteryRewards_C.GetItemTypeTexts
//		Flags  -> (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
//		TArray<struct FTierRewardItemData>                 RewardItems                                                (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, HasGetValueTypeHash)
//		TArray<struct FText>                               ReturnValue                                                (Parm, OutParm, ReturnParm, HasGetValueTypeHash)
TArray<struct FText> UWBP_WeaponMasteryRewards_C::GetItemTypeTexts(TArray<struct FTierRewardItemData>* RewardItems)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(235078);

	UWBP_WeaponMasteryRewards_C_GetItemTypeTexts_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (RewardItems != nullptr)
		*RewardItems = params.RewardItems;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_WeaponMasteryRewards.WBP_WeaponMasteryRewards_C.GetCurrentMasteryLevel
//		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
//		int                                                MasteryLevel                                               (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWBP_WeaponMasteryRewards_C::GetCurrentMasteryLevel(int* MasteryLevel)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(235077);

	UWBP_WeaponMasteryRewards_C_GetCurrentMasteryLevel_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (MasteryLevel != nullptr)
		*MasteryLevel = params.MasteryLevel;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_WeaponMasteryRewards.WBP_WeaponMasteryRewards_C.GetMaxRegularLevel
//		Flags  -> (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
//		int                                                Tier                                                       (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWBP_WeaponMasteryRewards_C::GetMaxRegularLevel(int* Tier)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(235076);

	UWBP_WeaponMasteryRewards_C_GetMaxRegularLevel_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Tier != nullptr)
		*Tier = params.Tier;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_WeaponMasteryRewards.WBP_WeaponMasteryRewards_C.Display Reward Preview
//		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
//		struct FMasteryRewardData                          RewardItem                                                 (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
//		class UWBP_ListButton_Cosmetic_C*                  SelectedWidget                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWBP_WeaponMasteryRewards_C::Display_Reward_Preview(const struct FMasteryRewardData& RewardItem, class UWBP_ListButton_Cosmetic_C* SelectedWidget)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(235075);

	UWBP_WeaponMasteryRewards_C_Display_Reward_Preview_Params params {};
	params.RewardItem = RewardItem;
	params.SelectedWidget = SelectedWidget;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_WeaponMasteryRewards.WBP_WeaponMasteryRewards_C.Update Reward List
//		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
//		struct FActivityTier                               RewardTier                                                 (BlueprintVisible, BlueprintReadOnly, Parm)
void UWBP_WeaponMasteryRewards_C::Update_Reward_List(const struct FActivityTier& RewardTier)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(235074);

	UWBP_WeaponMasteryRewards_C_Update_Reward_List_Params params {};
	params.RewardTier = RewardTier;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_WeaponMasteryRewards.WBP_WeaponMasteryRewards_C.SetContextBar
//		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
void UWBP_WeaponMasteryRewards_C::SetContextBar()
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(235073);

	UWBP_WeaponMasteryRewards_C_SetContextBar_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_WeaponMasteryRewards.WBP_WeaponMasteryRewards_C.NavigateBack
//		Flags  -> (Event, Protected, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
//		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
bool UWBP_WeaponMasteryRewards_C::NavigateBack()
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(235072);

	UWBP_WeaponMasteryRewards_C_NavigateBack_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_WeaponMasteryRewards.WBP_WeaponMasteryRewards_C.OnBack
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
void UWBP_WeaponMasteryRewards_C::OnBack()
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(235071);

	UWBP_WeaponMasteryRewards_C_OnBack_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_WeaponMasteryRewards.WBP_WeaponMasteryRewards_C.Construct
//		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
void UWBP_WeaponMasteryRewards_C::Construct()
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(235070);

	UWBP_WeaponMasteryRewards_C_Construct_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_WeaponMasteryRewards.WBP_WeaponMasteryRewards_C.InitializeWidget
//		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
//		class APUMG_HUD*                                   HUD                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWBP_WeaponMasteryRewards_C::InitializeWidget(class APUMG_HUD* HUD)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(235069);

	UWBP_WeaponMasteryRewards_C_InitializeWidget_Params params {};
	params.HUD = HUD;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_WeaponMasteryRewards.WBP_WeaponMasteryRewards_C.InitializeWidgetNavigation
//		Flags  -> (Event, Public, BlueprintEvent)
void UWBP_WeaponMasteryRewards_C::InitializeWidgetNavigation()
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(235068);

	UWBP_WeaponMasteryRewards_C_InitializeWidgetNavigation_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_WeaponMasteryRewards.WBP_WeaponMasteryRewards_C.FocusGroupNavigateLeftFailure
//		Flags  -> (Event, Public, BlueprintEvent)
// Parameters:
//		int                                                FocusGroup                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWBP_WeaponMasteryRewards_C::FocusGroupNavigateLeftFailure(int FocusGroup)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(235067);

	UWBP_WeaponMasteryRewards_C_FocusGroupNavigateLeftFailure_Params params {};
	params.FocusGroup = FocusGroup;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_WeaponMasteryRewards.WBP_WeaponMasteryRewards_C.FocusGroupNavigateRightFailure
//		Flags  -> (Event, Public, BlueprintEvent)
// Parameters:
//		int                                                FocusGroup                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWBP_WeaponMasteryRewards_C::FocusGroupNavigateRightFailure(int FocusGroup)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(235066);

	UWBP_WeaponMasteryRewards_C_FocusGroupNavigateRightFailure_Params params {};
	params.FocusGroup = FocusGroup;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_WeaponMasteryRewards.WBP_WeaponMasteryRewards_C.ConfigureLobbyCamera
//		Flags  -> (Event, Public, BlueprintEvent)
void UWBP_WeaponMasteryRewards_C::ConfigureLobbyCamera()
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(235065);

	UWBP_WeaponMasteryRewards_C_ConfigureLobbyCamera_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_WeaponMasteryRewards.WBP_WeaponMasteryRewards_C.DisplayWeaponAsset
//		Flags  -> (Event, Public, BlueprintEvent)
// Parameters:
//		class UKSWeaponAsset*                              WeaponAsset                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWBP_WeaponMasteryRewards_C::DisplayWeaponAsset(class UKSWeaponAsset* WeaponAsset)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(235064);

	UWBP_WeaponMasteryRewards_C_DisplayWeaponAsset_Params params {};
	params.WeaponAsset = WeaponAsset;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_WeaponMasteryRewards.WBP_WeaponMasteryRewards_C.DisplayWeaponCategory
//		Flags  -> (Event, Public, BlueprintEvent)
// Parameters:
//		class UKSWeaponCategoryAsset*                      WeaponCategory                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWBP_WeaponMasteryRewards_C::DisplayWeaponCategory(class UKSWeaponCategoryAsset* WeaponCategory)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(235063);

	UWBP_WeaponMasteryRewards_C_DisplayWeaponCategory_Params params {};
	params.WeaponCategory = WeaponCategory;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_WeaponMasteryRewards.WBP_WeaponMasteryRewards_C.DisplayWeaponsMaster
//		Flags  -> (Event, Public, BlueprintEvent)
void UWBP_WeaponMasteryRewards_C::DisplayWeaponsMaster()
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(235062);

	UWBP_WeaponMasteryRewards_C_DisplayWeaponsMaster_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_WeaponMasteryRewards.WBP_WeaponMasteryRewards_C.DisplayActivityProgress
//		Flags  -> (Event, Public, BlueprintEvent)
// Parameters:
//		int                                                Level                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		int                                                LevelProgressCount                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		int                                                LevelProgressTotal                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWBP_WeaponMasteryRewards_C::DisplayActivityProgress(int Level, int LevelProgressCount, int LevelProgressTotal)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(235061);

	UWBP_WeaponMasteryRewards_C_DisplayActivityProgress_Params params {};
	params.Level = Level;
	params.LevelProgressCount = LevelProgressCount;
	params.LevelProgressTotal = LevelProgressTotal;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_WeaponMasteryRewards.WBP_WeaponMasteryRewards_C.OnCurrentProgressActivityInstanceUpdated
//		Flags  -> (Event, Public, BlueprintEvent)
void UWBP_WeaponMasteryRewards_C::OnCurrentProgressActivityInstanceUpdated()
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(235060);

	UWBP_WeaponMasteryRewards_C_OnCurrentProgressActivityInstanceUpdated_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_WeaponMasteryRewards.WBP_WeaponMasteryRewards_C.PopulateRewardTiers
//		Flags  -> (Event, Public, BlueprintEvent)
void UWBP_WeaponMasteryRewards_C::PopulateRewardTiers()
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(235059);

	UWBP_WeaponMasteryRewards_C_PopulateRewardTiers_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_WeaponMasteryRewards.WBP_WeaponMasteryRewards_C.DisplayRewardTier
//		Flags  -> (Event, Public, BlueprintEvent)
// Parameters:
//		struct FActivityTier                               SelectedTier                                               (BlueprintVisible, BlueprintReadOnly, Parm)
void UWBP_WeaponMasteryRewards_C::DisplayRewardTier(const struct FActivityTier& SelectedTier)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(235058);

	UWBP_WeaponMasteryRewards_C_DisplayRewardTier_Params params {};
	params.SelectedTier = SelectedTier;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_WeaponMasteryRewards.WBP_WeaponMasteryRewards_C.DisplayReactiveStateDescription
//		Flags  -> (Event, Public, HasOutParms, BlueprintEvent)
// Parameters:
//		struct FText                                       DescText                                                   (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
void UWBP_WeaponMasteryRewards_C::DisplayReactiveStateDescription(const struct FText& DescText)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(76037);

	UWBP_WeaponMasteryRewards_C_DisplayReactiveStateDescription_Params params {};
	params.DescText = DescText;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_WeaponMasteryRewards.WBP_WeaponMasteryRewards_C.ExecuteUbergraph_WBP_WeaponMasteryRewards
//		Flags  -> (Final, HasDefaults)
// Parameters:
//		int                                                EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWBP_WeaponMasteryRewards_C::ExecuteUbergraph_WBP_WeaponMasteryRewards(int EntryPoint)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(76036);

	UWBP_WeaponMasteryRewards_C_ExecuteUbergraph_WBP_WeaponMasteryRewards_Params params {};
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
