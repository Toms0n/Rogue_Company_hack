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
//		Name   -> Function WBP_WeaponHubStatsPanel.WBP_WeaponHubStatsPanel_C.GetCurrentStatCount
//		Flags  -> (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
//		int                                                ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
int UWBP_WeaponHubStatsPanel_C::GetCurrentStatCount()
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(75895);

	UWBP_WeaponHubStatsPanel_C_GetCurrentStatCount_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_WeaponHubStatsPanel.WBP_WeaponHubStatsPanel_C.OnKeyUp
//		Flags  -> (BlueprintCosmetic, Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
//		struct FGeometry                                   MyGeometry                                                 (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
//		struct FKeyEvent                                   InKeyEvent                                                 (BlueprintVisible, BlueprintReadOnly, Parm)
//		struct FEventReply                                 ReturnValue                                                (Parm, OutParm, ReturnParm)
struct FEventReply UWBP_WeaponHubStatsPanel_C::OnKeyUp(const struct FGeometry& MyGeometry, const struct FKeyEvent& InKeyEvent)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(75894);

	UWBP_WeaponHubStatsPanel_C_OnKeyUp_Params params {};
	params.MyGeometry = MyGeometry;
	params.InKeyEvent = InKeyEvent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_WeaponHubStatsPanel.WBP_WeaponHubStatsPanel_C.BndEvt__PrevTierButton_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
//		Flags  -> (BlueprintEvent)
void UWBP_WeaponHubStatsPanel_C::BndEvt__PrevTierButton_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature()
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(75893);

	UWBP_WeaponHubStatsPanel_C_BndEvt__PrevTierButton_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_WeaponHubStatsPanel.WBP_WeaponHubStatsPanel_C.BndEvt__NextTierButton_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature
//		Flags  -> (BlueprintEvent)
void UWBP_WeaponHubStatsPanel_C::BndEvt__NextTierButton_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature()
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(75892);

	UWBP_WeaponHubStatsPanel_C_BndEvt__NextTierButton_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_WeaponHubStatsPanel.WBP_WeaponHubStatsPanel_C.DisplayWeaponInfo
//		Flags  -> (Event, Public, BlueprintEvent)
// Parameters:
//		int                                                Level                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		class UKSWeaponAsset*                              LevelWeapon                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWBP_WeaponHubStatsPanel_C::DisplayWeaponInfo(int Level, class UKSWeaponAsset* LevelWeapon)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(75891);

	UWBP_WeaponHubStatsPanel_C_DisplayWeaponInfo_Params params {};
	params.Level = Level;
	params.LevelWeapon = LevelWeapon;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_WeaponHubStatsPanel.WBP_WeaponHubStatsPanel_C.InitializeWidget
//		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
//		class APUMG_HUD*                                   HUD                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWBP_WeaponHubStatsPanel_C::InitializeWidget(class APUMG_HUD* HUD)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(75890);

	UWBP_WeaponHubStatsPanel_C_InitializeWidget_Params params {};
	params.HUD = HUD;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_WeaponHubStatsPanel.WBP_WeaponHubStatsPanel_C.Handle Input State Changed
//		Flags  -> (BlueprintCallable, BlueprintEvent)
// Parameters:
//		TEnumAsByte<PlatformGameFramework_EPGAME_INPUT_STATE> InputState                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWBP_WeaponHubStatsPanel_C::Handle_Input_State_Changed(TEnumAsByte<PlatformGameFramework_EPGAME_INPUT_STATE> InputState)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(75889);

	UWBP_WeaponHubStatsPanel_C_Handle_Input_State_Changed_Params params {};
	params.InputState = InputState;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_WeaponHubStatsPanel.WBP_WeaponHubStatsPanel_C.AddStatWidget
//		Flags  -> (Event, Public, BlueprintEvent)
void UWBP_WeaponHubStatsPanel_C::AddStatWidget()
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(75888);

	UWBP_WeaponHubStatsPanel_C_AddStatWidget_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_WeaponHubStatsPanel.WBP_WeaponHubStatsPanel_C.RemoveStatWidget
//		Flags  -> (Event, Public, BlueprintEvent)
void UWBP_WeaponHubStatsPanel_C::RemoveStatWidget()
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(75887);

	UWBP_WeaponHubStatsPanel_C_RemoveStatWidget_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_WeaponHubStatsPanel.WBP_WeaponHubStatsPanel_C.UpdateStatAtIndex
//		Flags  -> (Event, Public, BlueprintEvent)
// Parameters:
//		int                                                WidgetIndex                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		struct FItemDisplayStat                            WeaponStat                                                 (BlueprintVisible, BlueprintReadOnly, Parm)
//		struct FItemDisplayStat                            UpgradeStat                                                (BlueprintVisible, BlueprintReadOnly, Parm)
void UWBP_WeaponHubStatsPanel_C::UpdateStatAtIndex(int WidgetIndex, const struct FItemDisplayStat& WeaponStat, const struct FItemDisplayStat& UpgradeStat)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(75886);

	UWBP_WeaponHubStatsPanel_C_UpdateStatAtIndex_Params params {};
	params.WidgetIndex = WidgetIndex;
	params.WeaponStat = WeaponStat;
	params.UpgradeStat = UpgradeStat;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_WeaponHubStatsPanel.WBP_WeaponHubStatsPanel_C.UpdateSideNavigation
//		Flags  -> (Event, Public, BlueprintEvent)
// Parameters:
//		bool                                               PrevLevelEnabled                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
//		bool                                               NextLevelEnabled                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UWBP_WeaponHubStatsPanel_C::UpdateSideNavigation(bool PrevLevelEnabled, bool NextLevelEnabled)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(75885);

	UWBP_WeaponHubStatsPanel_C_UpdateSideNavigation_Params params {};
	params.PrevLevelEnabled = PrevLevelEnabled;
	params.NextLevelEnabled = NextLevelEnabled;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_WeaponHubStatsPanel.WBP_WeaponHubStatsPanel_C.BndEvt__PrevTierButton_K2Node_ComponentBoundEvent_6_OnButtonHoverEvent__DelegateSignature
//		Flags  -> (BlueprintEvent)
void UWBP_WeaponHubStatsPanel_C::BndEvt__PrevTierButton_K2Node_ComponentBoundEvent_6_OnButtonHoverEvent__DelegateSignature()
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(75884);

	UWBP_WeaponHubStatsPanel_C_BndEvt__PrevTierButton_K2Node_ComponentBoundEvent_6_OnButtonHoverEvent__DelegateSignature_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_WeaponHubStatsPanel.WBP_WeaponHubStatsPanel_C.BndEvt__NextTierButton_K2Node_ComponentBoundEvent_7_OnButtonHoverEvent__DelegateSignature
//		Flags  -> (BlueprintEvent)
void UWBP_WeaponHubStatsPanel_C::BndEvt__NextTierButton_K2Node_ComponentBoundEvent_7_OnButtonHoverEvent__DelegateSignature()
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(75883);

	UWBP_WeaponHubStatsPanel_C_BndEvt__NextTierButton_K2Node_ComponentBoundEvent_7_OnButtonHoverEvent__DelegateSignature_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_WeaponHubStatsPanel.WBP_WeaponHubStatsPanel_C.ExecuteUbergraph_WBP_WeaponHubStatsPanel
//		Flags  -> (Final, HasDefaults)
// Parameters:
//		int                                                EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWBP_WeaponHubStatsPanel_C::ExecuteUbergraph_WBP_WeaponHubStatsPanel(int EntryPoint)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(75882);

	UWBP_WeaponHubStatsPanel_C_ExecuteUbergraph_WBP_WeaponHubStatsPanel_Params params {};
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
