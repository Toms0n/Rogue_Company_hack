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
//		Name   -> Function WBP_WeaponMasteryTrackLevel.WBP_WeaponMasteryTrackLevel_C.GetItemTypeTexts
//		Flags  -> (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
//		TArray<struct FTierRewardItemData>                 Items                                                      (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, HasGetValueTypeHash)
//		TArray<struct FText>                               ReturnValue                                                (Parm, OutParm, ReturnParm, HasGetValueTypeHash)
TArray<struct FText> UWBP_WeaponMasteryTrackLevel_C::GetItemTypeTexts(TArray<struct FTierRewardItemData>* Items)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(87988);

	UWBP_WeaponMasteryTrackLevel_C_GetItemTypeTexts_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Items != nullptr)
		*Items = params.Items;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_WeaponMasteryTrackLevel.WBP_WeaponMasteryTrackLevel_C.ToggleEdgeNavCallouts
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
//		bool                                               ShowPrev                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
//		bool                                               ShowNext                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UWBP_WeaponMasteryTrackLevel_C::ToggleEdgeNavCallouts(bool ShowPrev, bool ShowNext)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(87987);

	UWBP_WeaponMasteryTrackLevel_C_ToggleEdgeNavCallouts_Params params {};
	params.ShowPrev = ShowPrev;
	params.ShowNext = ShowNext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_WeaponMasteryTrackLevel.WBP_WeaponMasteryTrackLevel_C.DisplayWeaponsMaster
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
void UWBP_WeaponMasteryTrackLevel_C::DisplayWeaponsMaster()
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(87986);

	UWBP_WeaponMasteryTrackLevel_C_DisplayWeaponsMaster_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_WeaponMasteryTrackLevel.WBP_WeaponMasteryTrackLevel_C.DisplayWeaponCategory
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
//		class UKSWeaponCategoryAsset*                      Weapon_Category                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWBP_WeaponMasteryTrackLevel_C::DisplayWeaponCategory(class UKSWeaponCategoryAsset* Weapon_Category)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(87985);

	UWBP_WeaponMasteryTrackLevel_C_DisplayWeaponCategory_Params params {};
	params.Weapon_Category = Weapon_Category;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_WeaponMasteryTrackLevel.WBP_WeaponMasteryTrackLevel_C.DisplayWeaponAsset
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
//		class UKSWeaponAsset*                              Weapon_Asset                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWBP_WeaponMasteryTrackLevel_C::DisplayWeaponAsset(class UKSWeaponAsset* Weapon_Asset)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(87984);

	UWBP_WeaponMasteryTrackLevel_C_DisplayWeaponAsset_Params params {};
	params.Weapon_Asset = Weapon_Asset;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_WeaponMasteryTrackLevel.WBP_WeaponMasteryTrackLevel_C.UpdateIsAchieved
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
//		bool                                               IsAchieved                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UWBP_WeaponMasteryTrackLevel_C::UpdateIsAchieved(bool IsAchieved)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(87983);

	UWBP_WeaponMasteryTrackLevel_C_UpdateIsAchieved_Params params {};
	params.IsAchieved = IsAchieved;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_WeaponMasteryTrackLevel.WBP_WeaponMasteryTrackLevel_C.DisplayGamepadFocus
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
//		bool                                               ShouldDisplayFocus                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UWBP_WeaponMasteryTrackLevel_C::DisplayGamepadFocus(bool ShouldDisplayFocus)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(87982);

	UWBP_WeaponMasteryTrackLevel_C_DisplayGamepadFocus_Params params {};
	params.ShouldDisplayFocus = ShouldDisplayFocus;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_WeaponMasteryTrackLevel.WBP_WeaponMasteryTrackLevel_C.SetSelected
//		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
//		bool                                               Selected                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UWBP_WeaponMasteryTrackLevel_C::SetSelected(bool Selected)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(87981);

	UWBP_WeaponMasteryTrackLevel_C_SetSelected_Params params {};
	params.Selected = Selected;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_WeaponMasteryTrackLevel.WBP_WeaponMasteryTrackLevel_C.UpdateGamepadPromptState
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
void UWBP_WeaponMasteryTrackLevel_C::UpdateGamepadPromptState()
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(87980);

	UWBP_WeaponMasteryTrackLevel_C_UpdateGamepadPromptState_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_WeaponMasteryTrackLevel.WBP_WeaponMasteryTrackLevel_C.OnInputStateChanged
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
//		TEnumAsByte<PlatformGameFramework_EPGAME_INPUT_STATE> InputState                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWBP_WeaponMasteryTrackLevel_C::OnInputStateChanged(TEnumAsByte<PlatformGameFramework_EPGAME_INPUT_STATE> InputState)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(87979);

	UWBP_WeaponMasteryTrackLevel_C_OnInputStateChanged_Params params {};
	params.InputState = InputState;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_WeaponMasteryTrackLevel.WBP_WeaponMasteryTrackLevel_C.Set Tier Data
//		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
//		struct FActivityTier                               ActivityTier                                               (BlueprintVisible, BlueprintReadOnly, Parm)
void UWBP_WeaponMasteryTrackLevel_C::Set_Tier_Data(const struct FActivityTier& ActivityTier)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(87978);

	UWBP_WeaponMasteryTrackLevel_C_Set_Tier_Data_Params params {};
	params.ActivityTier = ActivityTier;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_WeaponMasteryTrackLevel.WBP_WeaponMasteryTrackLevel_C.Construct
//		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
void UWBP_WeaponMasteryTrackLevel_C::Construct()
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(87977);

	UWBP_WeaponMasteryTrackLevel_C_Construct_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_WeaponMasteryTrackLevel.WBP_WeaponMasteryTrackLevel_C.BndEvt__Button_339_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
//		Flags  -> (BlueprintEvent)
void UWBP_WeaponMasteryTrackLevel_C::BndEvt__Button_339_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature()
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(87976);

	UWBP_WeaponMasteryTrackLevel_C_BndEvt__Button_339_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_WeaponMasteryTrackLevel.WBP_WeaponMasteryTrackLevel_C.BndEvt__Button_339_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature
//		Flags  -> (BlueprintEvent)
void UWBP_WeaponMasteryTrackLevel_C::BndEvt__Button_339_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature()
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(87975);

	UWBP_WeaponMasteryTrackLevel_C_BndEvt__Button_339_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_WeaponMasteryTrackLevel.WBP_WeaponMasteryTrackLevel_C.BndEvt__Button_339_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature
//		Flags  -> (BlueprintEvent)
void UWBP_WeaponMasteryTrackLevel_C::BndEvt__Button_339_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature()
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(87974);

	UWBP_WeaponMasteryTrackLevel_C_BndEvt__Button_339_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_WeaponMasteryTrackLevel.WBP_WeaponMasteryTrackLevel_C.GamepadHover
//		Flags  -> (Event, Public, BlueprintEvent)
void UWBP_WeaponMasteryTrackLevel_C::GamepadHover()
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(87973);

	UWBP_WeaponMasteryTrackLevel_C_GamepadHover_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_WeaponMasteryTrackLevel.WBP_WeaponMasteryTrackLevel_C.GamepadUnhover
//		Flags  -> (Event, Public, BlueprintEvent)
void UWBP_WeaponMasteryTrackLevel_C::GamepadUnhover()
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(87972);

	UWBP_WeaponMasteryTrackLevel_C_GamepadUnhover_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_WeaponMasteryTrackLevel.WBP_WeaponMasteryTrackLevel_C.InitializeWidget
//		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
//		class APUMG_HUD*                                   HUD                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWBP_WeaponMasteryTrackLevel_C::InitializeWidget(class APUMG_HUD* HUD)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(87971);

	UWBP_WeaponMasteryTrackLevel_C_InitializeWidget_Params params {};
	params.HUD = HUD;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_WeaponMasteryTrackLevel.WBP_WeaponMasteryTrackLevel_C.ExecuteUbergraph_WBP_WeaponMasteryTrackLevel
//		Flags  -> (Final, HasDefaults)
// Parameters:
//		int                                                EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWBP_WeaponMasteryTrackLevel_C::ExecuteUbergraph_WBP_WeaponMasteryTrackLevel(int EntryPoint)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(87970);

	UWBP_WeaponMasteryTrackLevel_C_ExecuteUbergraph_WBP_WeaponMasteryTrackLevel_Params params {};
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_WeaponMasteryTrackLevel.WBP_WeaponMasteryTrackLevel_C.OnTrackLevelSelected__DelegateSignature
//		Flags  -> (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
//		struct FActivityTier                               Activity_Tier                                              (BlueprintVisible, BlueprintReadOnly, Parm)
void UWBP_WeaponMasteryTrackLevel_C::OnTrackLevelSelected__DelegateSignature(const struct FActivityTier& Activity_Tier)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(87969);

	UWBP_WeaponMasteryTrackLevel_C_OnTrackLevelSelected__DelegateSignature_Params params {};
	params.Activity_Tier = Activity_Tier;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
