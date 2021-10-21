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
//		Name   -> Function WBP_RogueMasteryTrackSection.WBP_RogueMasteryTrackSection_C.DisplayGamepadFocus
//		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
//		bool                                               ShouldDisplayFocus                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UWBP_RogueMasteryTrackSection_C::DisplayGamepadFocus(bool ShouldDisplayFocus)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(79149);

	UWBP_RogueMasteryTrackSection_C_DisplayGamepadFocus_Params params {};
	params.ShouldDisplayFocus = ShouldDisplayFocus;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_RogueMasteryTrackSection.WBP_RogueMasteryTrackSection_C.SetSelectedEntry
//		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
//		int                                                ActivityTierNumber                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWBP_RogueMasteryTrackSection_C::SetSelectedEntry(int ActivityTierNumber)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(79148);

	UWBP_RogueMasteryTrackSection_C_SetSelectedEntry_Params params {};
	params.ActivityTierNumber = ActivityTierNumber;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_RogueMasteryTrackSection.WBP_RogueMasteryTrackSection_C.SetSectionData
//		Flags  -> (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
//		struct FMasterySectionData                         SectionData                                                (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
//		int                                                CurrentTier                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWBP_RogueMasteryTrackSection_C::SetSectionData(struct FMasterySectionData* SectionData, int CurrentTier)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(79147);

	UWBP_RogueMasteryTrackSection_C_SetSectionData_Params params {};
	params.CurrentTier = CurrentTier;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (SectionData != nullptr)
		*SectionData = params.SectionData;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_RogueMasteryTrackSection.WBP_RogueMasteryTrackSection_C.GetSelectedActivity
//		Flags  -> (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
//		int                                                Index                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		struct FActivityTier                               Activity                                                   (Parm, OutParm)
void UWBP_RogueMasteryTrackSection_C::GetSelectedActivity(int Index, struct FActivityTier* Activity)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(79146);

	UWBP_RogueMasteryTrackSection_C_GetSelectedActivity_Params params {};
	params.Index = Index;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Activity != nullptr)
		*Activity = params.Activity;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_RogueMasteryTrackSection.WBP_RogueMasteryTrackSection_C.OnMasteryLevelSelected
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
//		struct FActivityTier                               Activity                                                   (BlueprintVisible, BlueprintReadOnly, Parm)
void UWBP_RogueMasteryTrackSection_C::OnMasteryLevelSelected(const struct FActivityTier& Activity)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(79145);

	UWBP_RogueMasteryTrackSection_C_OnMasteryLevelSelected_Params params {};
	params.Activity = Activity;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_RogueMasteryTrackSection.WBP_RogueMasteryTrackSection_C.PreConstruct
//		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
//		bool                                               IsDesignTime                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UWBP_RogueMasteryTrackSection_C::PreConstruct(bool IsDesignTime)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(79144);

	UWBP_RogueMasteryTrackSection_C_PreConstruct_Params params {};
	params.IsDesignTime = IsDesignTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_RogueMasteryTrackSection.WBP_RogueMasteryTrackSection_C.Construct
//		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
void UWBP_RogueMasteryTrackSection_C::Construct()
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(79143);

	UWBP_RogueMasteryTrackSection_C_Construct_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_RogueMasteryTrackSection.WBP_RogueMasteryTrackSection_C.InitializeWidget
//		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
//		class APUMG_HUD*                                   HUD                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWBP_RogueMasteryTrackSection_C::InitializeWidget(class APUMG_HUD* HUD)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(79142);

	UWBP_RogueMasteryTrackSection_C_InitializeWidget_Params params {};
	params.HUD = HUD;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_RogueMasteryTrackSection.WBP_RogueMasteryTrackSection_C.ExecuteUbergraph_WBP_RogueMasteryTrackSection
//		Flags  -> (Final, HasDefaults)
// Parameters:
//		int                                                EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWBP_RogueMasteryTrackSection_C::ExecuteUbergraph_WBP_RogueMasteryTrackSection(int EntryPoint)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(79141);

	UWBP_RogueMasteryTrackSection_C_ExecuteUbergraph_WBP_RogueMasteryTrackSection_Params params {};
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_RogueMasteryTrackSection.WBP_RogueMasteryTrackSection_C.OnTrackEntrySelected__DelegateSignature
//		Flags  -> (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
//		struct FActivityTier                               ActivityTier                                               (BlueprintVisible, BlueprintReadOnly, Parm)
void UWBP_RogueMasteryTrackSection_C::OnTrackEntrySelected__DelegateSignature(const struct FActivityTier& ActivityTier)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(79140);

	UWBP_RogueMasteryTrackSection_C_OnTrackEntrySelected__DelegateSignature_Params params {};
	params.ActivityTier = ActivityTier;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
