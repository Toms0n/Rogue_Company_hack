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
//		Name   -> Function WBP_WrapCustomization.WBP_WrapCustomization_C.WBP_WrapCustomization_AutoGenFunc
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
//		class UWidget*                                     Widget                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWBP_WrapCustomization_C::WBP_WrapCustomization_AutoGenFunc(class UWidget* Widget)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(72446);

	UWBP_WrapCustomization_C_WBP_WrapCustomization_AutoGenFunc_Params params {};
	params.Widget = Widget;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_WrapCustomization.WBP_WrapCustomization_C.GetWrapEntryByWeaponAttachment
//		Flags  -> (Event, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
//		class UKSWeaponAttachment*                         WeaponAttachment                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		class UKSWrapSelectionEntry*                       OutWrapEntry                                               (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
bool UWBP_WrapCustomization_C::GetWrapEntryByWeaponAttachment(class UKSWeaponAttachment* WeaponAttachment, class UKSWrapSelectionEntry** OutWrapEntry)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(72445);

	UWBP_WrapCustomization_C_GetWrapEntryByWeaponAttachment_Params params {};
	params.WeaponAttachment = WeaponAttachment;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (OutWrapEntry != nullptr)
		*OutWrapEntry = params.OutWrapEntry;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_WrapCustomization.WBP_WrapCustomization_C.GetModelViewerActorName
//		Flags  -> (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
//		struct FName                                       ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
struct FName UWBP_WrapCustomization_C::GetModelViewerActorName()
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(72444);

	UWBP_WrapCustomization_C_GetModelViewerActorName_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_WrapCustomization.WBP_WrapCustomization_C.GetWrapEntry
//		Flags  -> (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
//		int                                                Index                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		class UKSWrapSelectionEntry*                       OutWrapEntry                                               (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
bool UWBP_WrapCustomization_C::GetWrapEntry(int Index, class UKSWrapSelectionEntry** OutWrapEntry)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(72443);

	UWBP_WrapCustomization_C_GetWrapEntry_Params params {};
	params.Index = Index;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (OutWrapEntry != nullptr)
		*OutWrapEntry = params.OutWrapEntry;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_WrapCustomization.WBP_WrapCustomization_C.GetWrapEntryCount
//		Flags  -> (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
//		int                                                ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
int UWBP_WrapCustomization_C::GetWrapEntryCount()
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(72442);

	UWBP_WrapCustomization_C_GetWrapEntryCount_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_WrapCustomization.WBP_WrapCustomization_C.NavigateBack
//		Flags  -> (Event, Protected, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
//		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
bool UWBP_WrapCustomization_C::NavigateBack()
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(72441);

	UWBP_WrapCustomization_C_NavigateBack_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_WrapCustomization.WBP_WrapCustomization_C.CreateAndAddWrapEntry
//		Flags  -> (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
//		class UKSWrapSelectionEntry*                       ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
class UKSWrapSelectionEntry* UWBP_WrapCustomization_C::CreateAndAddWrapEntry()
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(72440);

	UWBP_WrapCustomization_C_CreateAndAddWrapEntry_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_WrapCustomization.WBP_WrapCustomization_C.ConfigureViewModel
//		Flags  -> (Event, Public, BlueprintEvent)
// Parameters:
//		class UKSWeaponAsset*                              WeaponAsset                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		class UKSWeaponAttachment*                         WeaponWrap                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWBP_WrapCustomization_C::ConfigureViewModel(class UKSWeaponAsset* WeaponAsset, class UKSWeaponAttachment* WeaponWrap)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(72439);

	UWBP_WrapCustomization_C_ConfigureViewModel_Params params {};
	params.WeaponAsset = WeaponAsset;
	params.WeaponWrap = WeaponWrap;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_WrapCustomization.WBP_WrapCustomization_C.DisplayWeaponInfo
//		Flags  -> (Event, Public, BlueprintEvent)
// Parameters:
//		class UKSWeaponAsset*                              WeaponAsset                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		class UKSWeaponCategoryAsset*                      WeaponCategory                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWBP_WrapCustomization_C::DisplayWeaponInfo(class UKSWeaponAsset* WeaponAsset, class UKSWeaponCategoryAsset* WeaponCategory)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(72438);

	UWBP_WrapCustomization_C_DisplayWeaponInfo_Params params {};
	params.WeaponAsset = WeaponAsset;
	params.WeaponCategory = WeaponCategory;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_WrapCustomization.WBP_WrapCustomization_C.ClearEntries
//		Flags  -> (Event, Public, BlueprintEvent)
void UWBP_WrapCustomization_C::ClearEntries()
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(72437);

	UWBP_WrapCustomization_C_ClearEntries_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_WrapCustomization.WBP_WrapCustomization_C.DisplayWrapInfo
//		Flags  -> (Event, Public, BlueprintEvent)
// Parameters:
//		class UKSWeaponAttachment*                         WeaponWrap                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWBP_WrapCustomization_C::DisplayWrapInfo(class UKSWeaponAttachment* WeaponWrap)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(72436);

	UWBP_WrapCustomization_C_DisplayWrapInfo_Params params {};
	params.WeaponWrap = WeaponWrap;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_WrapCustomization.WBP_WrapCustomization_C.Handle Input State Changed
//		Flags  -> (BlueprintCallable, BlueprintEvent)
// Parameters:
//		TEnumAsByte<PlatformGameFramework_EPGAME_INPUT_STATE> InputState                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWBP_WrapCustomization_C::Handle_Input_State_Changed(TEnumAsByte<PlatformGameFramework_EPGAME_INPUT_STATE> InputState)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(72435);

	UWBP_WrapCustomization_C_Handle_Input_State_Changed_Params params {};
	params.InputState = InputState;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_WrapCustomization.WBP_WrapCustomization_C.InitializeWidget
//		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
//		class APUMG_HUD*                                   HUD                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWBP_WrapCustomization_C::InitializeWidget(class APUMG_HUD* HUD)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(72434);

	UWBP_WrapCustomization_C_InitializeWidget_Params params {};
	params.HUD = HUD;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_WrapCustomization.WBP_WrapCustomization_C.OnWrapPopulationFinished
//		Flags  -> (Event, Public, BlueprintEvent)
void UWBP_WrapCustomization_C::OnWrapPopulationFinished()
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(72433);

	UWBP_WrapCustomization_C_OnWrapPopulationFinished_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_WrapCustomization.WBP_WrapCustomization_C.RefreshWidgetNavigation
//		Flags  -> (Event, Public, BlueprintEvent)
void UWBP_WrapCustomization_C::RefreshWidgetNavigation()
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(72432);

	UWBP_WrapCustomization_C_RefreshWidgetNavigation_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_WrapCustomization.WBP_WrapCustomization_C.InitializeWidgetNavigation
//		Flags  -> (Event, Public, BlueprintEvent)
void UWBP_WrapCustomization_C::InitializeWidgetNavigation()
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(72431);

	UWBP_WrapCustomization_C_InitializeWidgetNavigation_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_WrapCustomization.WBP_WrapCustomization_C.OnShown
//		Flags  -> (Event, Public, BlueprintEvent)
void UWBP_WrapCustomization_C::OnShown()
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(72430);

	UWBP_WrapCustomization_C_OnShown_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_WrapCustomization.WBP_WrapCustomization_C.RemoveLastWrapEntry
//		Flags  -> (Event, Public, BlueprintEvent)
void UWBP_WrapCustomization_C::RemoveLastWrapEntry()
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(72429);

	UWBP_WrapCustomization_C_RemoveLastWrapEntry_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_WrapCustomization.WBP_WrapCustomization_C.DisplayReactiveStateDescription
//		Flags  -> (Event, Public, HasOutParms, BlueprintEvent)
// Parameters:
//		struct FText                                       DescText                                                   (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
void UWBP_WrapCustomization_C::DisplayReactiveStateDescription(const struct FText& DescText)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(72428);

	UWBP_WrapCustomization_C_DisplayReactiveStateDescription_Params params {};
	params.DescText = DescText;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_WrapCustomization.WBP_WrapCustomization_C.SetActionButtonText
//		Flags  -> (Event, Public, HasOutParms, BlueprintEvent)
// Parameters:
//		struct FText                                       DescText                                                   (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
void UWBP_WrapCustomization_C::SetActionButtonText(const struct FText& DescText)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(72427);

	UWBP_WrapCustomization_C_SetActionButtonText_Params params {};
	params.DescText = DescText;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_WrapCustomization.WBP_WrapCustomization_C.OnHide
//		Flags  -> (Event, Public, BlueprintEvent)
void UWBP_WrapCustomization_C::OnHide()
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(72426);

	UWBP_WrapCustomization_C_OnHide_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_WrapCustomization.WBP_WrapCustomization_C.ExecuteUbergraph_WBP_WrapCustomization
//		Flags  -> (Final, HasDefaults)
// Parameters:
//		int                                                EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWBP_WrapCustomization_C::ExecuteUbergraph_WBP_WrapCustomization(int EntryPoint)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(72425);

	UWBP_WrapCustomization_C_ExecuteUbergraph_WBP_WrapCustomization_Params params {};
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
