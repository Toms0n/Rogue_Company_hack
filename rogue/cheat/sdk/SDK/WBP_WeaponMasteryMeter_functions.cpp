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
//		Name   -> Function WBP_WeaponMasteryMeter.WBP_WeaponMasteryMeter_C.SequenceEvent__ENTRYPOINTWBP_WeaponMasteryMeter_3
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
void UWBP_WeaponMasteryMeter_C::SequenceEvent__ENTRYPOINTWBP_WeaponMasteryMeter_3()
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(75432);

	UWBP_WeaponMasteryMeter_C_SequenceEvent__ENTRYPOINTWBP_WeaponMasteryMeter_3_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_WeaponMasteryMeter.WBP_WeaponMasteryMeter_C.SequenceEvent__ENTRYPOINTWBP_WeaponMasteryMeter_2
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
void UWBP_WeaponMasteryMeter_C::SequenceEvent__ENTRYPOINTWBP_WeaponMasteryMeter_2()
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(75431);

	UWBP_WeaponMasteryMeter_C_SequenceEvent__ENTRYPOINTWBP_WeaponMasteryMeter_2_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_WeaponMasteryMeter.WBP_WeaponMasteryMeter_C.SequenceEvent__ENTRYPOINTWBP_WeaponMasteryMeter_1
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
void UWBP_WeaponMasteryMeter_C::SequenceEvent__ENTRYPOINTWBP_WeaponMasteryMeter_1()
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(75430);

	UWBP_WeaponMasteryMeter_C_SequenceEvent__ENTRYPOINTWBP_WeaponMasteryMeter_1_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_WeaponMasteryMeter.WBP_WeaponMasteryMeter_C.SetBarColors
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
//		struct FSlateColor                                 BaseColor                                                  (BlueprintVisible, BlueprintReadOnly, Parm)
//		struct FSlateColor                                 IncreaseColor                                              (BlueprintVisible, BlueprintReadOnly, Parm)
//		struct FSlateColor                                 DecreaseColor                                              (BlueprintVisible, BlueprintReadOnly, Parm)
void UWBP_WeaponMasteryMeter_C::SetBarColors(const struct FSlateColor& BaseColor, const struct FSlateColor& IncreaseColor, const struct FSlateColor& DecreaseColor)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(75429);

	UWBP_WeaponMasteryMeter_C_SetBarColors_Params params {};
	params.BaseColor = BaseColor;
	params.IncreaseColor = IncreaseColor;
	params.DecreaseColor = DecreaseColor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_WeaponMasteryMeter.WBP_WeaponMasteryMeter_C.Revert Delta Anim
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
void UWBP_WeaponMasteryMeter_C::Revert_Delta_Anim()
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(75428);

	UWBP_WeaponMasteryMeter_C_Revert_Delta_Anim_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_WeaponMasteryMeter.WBP_WeaponMasteryMeter_C.DisplayAnimState
//		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
//		int                                                BaseCount                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		float                                              ProgressCount                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWBP_WeaponMasteryMeter_C::DisplayAnimState(int BaseCount, float ProgressCount)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(75427);

	UWBP_WeaponMasteryMeter_C_DisplayAnimState_Params params {};
	params.BaseCount = BaseCount;
	params.ProgressCount = ProgressCount;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_WeaponMasteryMeter.WBP_WeaponMasteryMeter_C.StartDeltaAnim
//		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
void UWBP_WeaponMasteryMeter_C::StartDeltaAnim()
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(75426);

	UWBP_WeaponMasteryMeter_C_StartDeltaAnim_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_WeaponMasteryMeter.WBP_WeaponMasteryMeter_C.InitializeDeltaAnim
//		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
//		int                                                BaseCount                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		int                                                ProgressCount                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		int                                                FinalProgressCount                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		bool                                               FromLevelUp                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UWBP_WeaponMasteryMeter_C::InitializeDeltaAnim(int BaseCount, int ProgressCount, int FinalProgressCount, bool FromLevelUp)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(75425);

	UWBP_WeaponMasteryMeter_C_InitializeDeltaAnim_Params params {};
	params.BaseCount = BaseCount;
	params.ProgressCount = ProgressCount;
	params.FinalProgressCount = FinalProgressCount;
	params.FromLevelUp = FromLevelUp;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_WeaponMasteryMeter.WBP_WeaponMasteryMeter_C.GetItemTypeTexts
//		Flags  -> (Event, Protected, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
//		TArray<struct FTierRewardItemData>                 RewardItems                                                (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, HasGetValueTypeHash)
//		TArray<struct FText>                               ReturnValue                                                (Parm, OutParm, ReturnParm, HasGetValueTypeHash)
TArray<struct FText> UWBP_WeaponMasteryMeter_C::GetItemTypeTexts(TArray<struct FTierRewardItemData> RewardItems)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(75424);

	UWBP_WeaponMasteryMeter_C_GetItemTypeTexts_Params params {};
	params.RewardItems = RewardItems;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_WeaponMasteryMeter.WBP_WeaponMasteryMeter_C.Apply Layout for Mastery Type
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
void UWBP_WeaponMasteryMeter_C::Apply_Layout_for_Mastery_Type()
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(75423);

	UWBP_WeaponMasteryMeter_C_Apply_Layout_for_Mastery_Type_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_WeaponMasteryMeter.WBP_WeaponMasteryMeter_C.SetPageTitleText
//		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
//		struct FText                                       PageTitleText                                              (BlueprintVisible, BlueprintReadOnly, Parm)
//		struct FText                                       WeaponCategoryText                                         (BlueprintVisible, BlueprintReadOnly, Parm)
void UWBP_WeaponMasteryMeter_C::SetPageTitleText(const struct FText& PageTitleText, const struct FText& WeaponCategoryText)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(75422);

	UWBP_WeaponMasteryMeter_C_SetPageTitleText_Params params {};
	params.PageTitleText = PageTitleText;
	params.WeaponCategoryText = WeaponCategoryText;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_WeaponMasteryMeter.WBP_WeaponMasteryMeter_C.LevelUp_EmblemSwap
//		Flags  -> (BlueprintCallable, BlueprintEvent)
void UWBP_WeaponMasteryMeter_C::LevelUp_EmblemSwap()
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(75421);

	UWBP_WeaponMasteryMeter_C_LevelUp_EmblemSwap_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_WeaponMasteryMeter.WBP_WeaponMasteryMeter_C.LevelUp_BarFlash
//		Flags  -> (BlueprintCallable, BlueprintEvent)
void UWBP_WeaponMasteryMeter_C::LevelUp_BarFlash()
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(75420);

	UWBP_WeaponMasteryMeter_C_LevelUp_BarFlash_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_WeaponMasteryMeter.WBP_WeaponMasteryMeter_C.LevelUp_RewardSwap
//		Flags  -> (BlueprintCallable, BlueprintEvent)
void UWBP_WeaponMasteryMeter_C::LevelUp_RewardSwap()
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(75419);

	UWBP_WeaponMasteryMeter_C_LevelUp_RewardSwap_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_WeaponMasteryMeter.WBP_WeaponMasteryMeter_C.InitializeTickAnimations
//		Flags  -> (Event, Protected, BlueprintEvent)
void UWBP_WeaponMasteryMeter_C::InitializeTickAnimations()
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(75418);

	UWBP_WeaponMasteryMeter_C_InitializeTickAnimations_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_WeaponMasteryMeter.WBP_WeaponMasteryMeter_C.DeltaAnim_Update
//		Flags  -> (BlueprintCallable, BlueprintEvent)
// Parameters:
//		float                                              ElapsedTime                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		float                                              ElapsedAlpha                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWBP_WeaponMasteryMeter_C::DeltaAnim_Update(float ElapsedTime, float ElapsedAlpha)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(75417);

	UWBP_WeaponMasteryMeter_C_DeltaAnim_Update_Params params {};
	params.ElapsedTime = ElapsedTime;
	params.ElapsedAlpha = ElapsedAlpha;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_WeaponMasteryMeter.WBP_WeaponMasteryMeter_C.DeltaAnim_Finished
//		Flags  -> (BlueprintCallable, BlueprintEvent)
void UWBP_WeaponMasteryMeter_C::DeltaAnim_Finished()
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(75416);

	UWBP_WeaponMasteryMeter_C_DeltaAnim_Finished_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_WeaponMasteryMeter.WBP_WeaponMasteryMeter_C.PreConstruct
//		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
//		bool                                               IsDesignTime                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UWBP_WeaponMasteryMeter_C::PreConstruct(bool IsDesignTime)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(75415);

	UWBP_WeaponMasteryMeter_C_PreConstruct_Params params {};
	params.IsDesignTime = IsDesignTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_WeaponMasteryMeter.WBP_WeaponMasteryMeter_C.Construct
//		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
void UWBP_WeaponMasteryMeter_C::Construct()
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(75414);

	UWBP_WeaponMasteryMeter_C_Construct_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_WeaponMasteryMeter.WBP_WeaponMasteryMeter_C.DisplayProgressReward
//		Flags  -> (Event, Protected, BlueprintEvent)
// Parameters:
//		struct FWeaponMasteryRewardDisplayData             RewardDisplayData                                          (BlueprintVisible, BlueprintReadOnly, Parm)
void UWBP_WeaponMasteryMeter_C::DisplayProgressReward(const struct FWeaponMasteryRewardDisplayData& RewardDisplayData)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(75413);

	UWBP_WeaponMasteryMeter_C_DisplayProgressReward_Params params {};
	params.RewardDisplayData = RewardDisplayData;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_WeaponMasteryMeter.WBP_WeaponMasteryMeter_C.BndEvt__WBP_KSCosmeticItemDisplay_2_K2Node_ComponentBoundEvent_0_OnCosmeticClicked__DelegateSignature
//		Flags  -> (BlueprintEvent)
// Parameters:
//		class UWBP_KSCosmeticItemDisplay_C*                Widget                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		struct FCosmeticSlotDetails                        CosmeticSlotDetails                                        (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)
void UWBP_WeaponMasteryMeter_C::BndEvt__WBP_KSCosmeticItemDisplay_2_K2Node_ComponentBoundEvent_0_OnCosmeticClicked__DelegateSignature(class UWBP_KSCosmeticItemDisplay_C* Widget, const struct FCosmeticSlotDetails& CosmeticSlotDetails)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(75412);

	UWBP_WeaponMasteryMeter_C_BndEvt__WBP_KSCosmeticItemDisplay_2_K2Node_ComponentBoundEvent_0_OnCosmeticClicked__DelegateSignature_Params params {};
	params.Widget = Widget;
	params.CosmeticSlotDetails = CosmeticSlotDetails;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_WeaponMasteryMeter.WBP_WeaponMasteryMeter_C.DisplayAltDescription
//		Flags  -> (Event, Protected, HasOutParms, BlueprintEvent)
// Parameters:
//		struct FText                                       DescriptionText                                            (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
void UWBP_WeaponMasteryMeter_C::DisplayAltDescription(const struct FText& DescriptionText)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(75411);

	UWBP_WeaponMasteryMeter_C_DisplayAltDescription_Params params {};
	params.DescriptionText = DescriptionText;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_WeaponMasteryMeter.WBP_WeaponMasteryMeter_C.DisplayWeaponCategory
//		Flags  -> (Event, Protected, BlueprintEvent)
// Parameters:
//		class UKSWeaponCategoryAsset*                      WeaponCategory                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWBP_WeaponMasteryMeter_C::DisplayWeaponCategory(class UKSWeaponCategoryAsset* WeaponCategory)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(75410);

	UWBP_WeaponMasteryMeter_C_DisplayWeaponCategory_Params params {};
	params.WeaponCategory = WeaponCategory;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_WeaponMasteryMeter.WBP_WeaponMasteryMeter_C.DisplayWeapon
//		Flags  -> (Event, Protected, BlueprintEvent)
// Parameters:
//		class UKSWeaponAsset*                              WeaponAsset                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWBP_WeaponMasteryMeter_C::DisplayWeapon(class UKSWeaponAsset* WeaponAsset)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(75409);

	UWBP_WeaponMasteryMeter_C_DisplayWeapon_Params params {};
	params.WeaponAsset = WeaponAsset;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_WeaponMasteryMeter.WBP_WeaponMasteryMeter_C.DisplayWeaponsMaster
//		Flags  -> (Event, Protected, BlueprintEvent)
void UWBP_WeaponMasteryMeter_C::DisplayWeaponsMaster()
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(75408);

	UWBP_WeaponMasteryMeter_C_DisplayWeaponsMaster_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_WeaponMasteryMeter.WBP_WeaponMasteryMeter_C.HandleInputStateChanged
//		Flags  -> (BlueprintCallable, BlueprintEvent)
// Parameters:
//		TEnumAsByte<PlatformGameFramework_EPGAME_INPUT_STATE> InputState                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWBP_WeaponMasteryMeter_C::HandleInputStateChanged(TEnumAsByte<PlatformGameFramework_EPGAME_INPUT_STATE> InputState)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(75407);

	UWBP_WeaponMasteryMeter_C_HandleInputStateChanged_Params params {};
	params.InputState = InputState;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_WeaponMasteryMeter.WBP_WeaponMasteryMeter_C.OnInitialized
//		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
void UWBP_WeaponMasteryMeter_C::OnInitialized()
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(75406);

	UWBP_WeaponMasteryMeter_C_OnInitialized_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_WeaponMasteryMeter.WBP_WeaponMasteryMeter_C.DisplayProgress
//		Flags  -> (Event, Protected, BlueprintEvent)
// Parameters:
//		int                                                MasteryLevel                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		int                                                LevelProgressCount                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		int                                                LevelProgressTotal                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWBP_WeaponMasteryMeter_C::DisplayProgress(int MasteryLevel, int LevelProgressCount, int LevelProgressTotal)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(75405);

	UWBP_WeaponMasteryMeter_C_DisplayProgress_Params params {};
	params.MasteryLevel = MasteryLevel;
	params.LevelProgressCount = LevelProgressCount;
	params.LevelProgressTotal = LevelProgressTotal;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_WeaponMasteryMeter.WBP_WeaponMasteryMeter_C.ClearProgressReward
//		Flags  -> (Event, Protected, BlueprintEvent)
void UWBP_WeaponMasteryMeter_C::ClearProgressReward()
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(75404);

	UWBP_WeaponMasteryMeter_C_ClearProgressReward_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_WeaponMasteryMeter.WBP_WeaponMasteryMeter_C.BndEvt__Button_261_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature
//		Flags  -> (BlueprintEvent)
void UWBP_WeaponMasteryMeter_C::BndEvt__Button_261_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature()
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(75403);

	UWBP_WeaponMasteryMeter_C_BndEvt__Button_261_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_WeaponMasteryMeter.WBP_WeaponMasteryMeter_C.BndEvt__MasteryRewardsTextHitTarget_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature
//		Flags  -> (BlueprintEvent)
void UWBP_WeaponMasteryMeter_C::BndEvt__MasteryRewardsTextHitTarget_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature()
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(75402);

	UWBP_WeaponMasteryMeter_C_BndEvt__MasteryRewardsTextHitTarget_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_WeaponMasteryMeter.WBP_WeaponMasteryMeter_C.BndEvt__MasteryRewardsTextHitTarget_K2Node_ComponentBoundEvent_3_OnButtonHoverEvent__DelegateSignature
//		Flags  -> (BlueprintEvent)
void UWBP_WeaponMasteryMeter_C::BndEvt__MasteryRewardsTextHitTarget_K2Node_ComponentBoundEvent_3_OnButtonHoverEvent__DelegateSignature()
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(75401);

	UWBP_WeaponMasteryMeter_C_BndEvt__MasteryRewardsTextHitTarget_K2Node_ComponentBoundEvent_3_OnButtonHoverEvent__DelegateSignature_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_WeaponMasteryMeter.WBP_WeaponMasteryMeter_C.BndEvt__WBP_KSCosmeticItemDisplay_2_K2Node_ComponentBoundEvent_4_OnHover__DelegateSignature
//		Flags  -> (BlueprintEvent)
// Parameters:
//		struct FCosmeticSlotDetails                        CosmeticSlotDetails                                        (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)
//		bool                                               IsGamepad                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
//		class UWBP_KSCosmeticItemDisplay_C*                Widget                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWBP_WeaponMasteryMeter_C::BndEvt__WBP_KSCosmeticItemDisplay_2_K2Node_ComponentBoundEvent_4_OnHover__DelegateSignature(const struct FCosmeticSlotDetails& CosmeticSlotDetails, bool IsGamepad, class UWBP_KSCosmeticItemDisplay_C* Widget)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(75400);

	UWBP_WeaponMasteryMeter_C_BndEvt__WBP_KSCosmeticItemDisplay_2_K2Node_ComponentBoundEvent_4_OnHover__DelegateSignature_Params params {};
	params.CosmeticSlotDetails = CosmeticSlotDetails;
	params.IsGamepad = IsGamepad;
	params.Widget = Widget;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_WeaponMasteryMeter.WBP_WeaponMasteryMeter_C.BndEvt__WBP_KSCosmeticItemDisplay_2_K2Node_ComponentBoundEvent_5_OnUnhover__DelegateSignature
//		Flags  -> (BlueprintEvent)
void UWBP_WeaponMasteryMeter_C::BndEvt__WBP_KSCosmeticItemDisplay_2_K2Node_ComponentBoundEvent_5_OnUnhover__DelegateSignature()
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(75399);

	UWBP_WeaponMasteryMeter_C_BndEvt__WBP_KSCosmeticItemDisplay_2_K2Node_ComponentBoundEvent_5_OnUnhover__DelegateSignature_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_WeaponMasteryMeter.WBP_WeaponMasteryMeter_C.InitializeWidget
//		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
//		class APUMG_HUD*                                   HUD                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWBP_WeaponMasteryMeter_C::InitializeWidget(class APUMG_HUD* HUD)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(75398);

	UWBP_WeaponMasteryMeter_C_InitializeWidget_Params params {};
	params.HUD = HUD;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_WeaponMasteryMeter.WBP_WeaponMasteryMeter_C.Handle LevelUp Anim Finished
//		Flags  -> (BlueprintCallable, BlueprintEvent)
void UWBP_WeaponMasteryMeter_C::Handle_LevelUp_Anim_Finished()
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(75397);

	UWBP_WeaponMasteryMeter_C_Handle_LevelUp_Anim_Finished_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_WeaponMasteryMeter.WBP_WeaponMasteryMeter_C.ExecuteUbergraph_WBP_WeaponMasteryMeter
//		Flags  -> (Final, HasDefaults)
// Parameters:
//		int                                                EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWBP_WeaponMasteryMeter_C::ExecuteUbergraph_WBP_WeaponMasteryMeter(int EntryPoint)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(75396);

	UWBP_WeaponMasteryMeter_C_ExecuteUbergraph_WBP_WeaponMasteryMeter_Params params {};
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_WeaponMasteryMeter.WBP_WeaponMasteryMeter_C.LevelUpComplete__DelegateSignature
//		Flags  -> (Public, Delegate, BlueprintCallable, BlueprintEvent)
void UWBP_WeaponMasteryMeter_C::LevelUpComplete__DelegateSignature()
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(75395);

	UWBP_WeaponMasteryMeter_C_LevelUpComplete__DelegateSignature_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
