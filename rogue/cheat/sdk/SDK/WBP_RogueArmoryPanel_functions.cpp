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
//		Name   -> Function WBP_RogueArmoryPanel.WBP_RogueArmoryPanel_C.ShowSwapCTA
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
//		bool                                               ShowCTA                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UWBP_RogueArmoryPanel_C::ShowSwapCTA(bool ShowCTA)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(79514);

	UWBP_RogueArmoryPanel_C_ShowSwapCTA_Params params {};
	params.ShowCTA = ShowCTA;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_RogueArmoryPanel.WBP_RogueArmoryPanel_C.DisplayFavoriteWeapon
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
void UWBP_RogueArmoryPanel_C::DisplayFavoriteWeapon()
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(79513);

	UWBP_RogueArmoryPanel_C_DisplayFavoriteWeapon_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_RogueArmoryPanel.WBP_RogueArmoryPanel_C.OnGotoWeapon
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
//		class UKSWeaponAsset*                              WeaponAsset                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWBP_RogueArmoryPanel_C::OnGotoWeapon(class UKSWeaponAsset* WeaponAsset)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(79512);

	UWBP_RogueArmoryPanel_C_OnGotoWeapon_Params params {};
	params.WeaponAsset = WeaponAsset;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_RogueArmoryPanel.WBP_RogueArmoryPanel_C.SetWeaponCategoryData
//		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
//		class UTextBlock*                                  CategoryName                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		class UWBP_AsyncIcon_C*                            CategoryIcon                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		class UTextBlock*                                  CategoryCount                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWBP_RogueArmoryPanel_C::SetWeaponCategoryData(class UTextBlock* CategoryName, class UWBP_AsyncIcon_C* CategoryIcon, class UTextBlock* CategoryCount)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(79511);

	UWBP_RogueArmoryPanel_C_SetWeaponCategoryData_Params params {};
	params.CategoryName = CategoryName;
	params.CategoryIcon = CategoryIcon;
	params.CategoryCount = CategoryCount;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_RogueArmoryPanel.WBP_RogueArmoryPanel_C.SetRogueDetailsWidget
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
//		class UKSRogueDetailsWidget*                       RogueDetailsWidget                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWBP_RogueArmoryPanel_C::SetRogueDetailsWidget(class UKSRogueDetailsWidget* RogueDetailsWidget)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(79510);

	UWBP_RogueArmoryPanel_C_SetRogueDetailsWidget_Params params {};
	params.RogueDetailsWidget = RogueDetailsWidget;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_RogueArmoryPanel.WBP_RogueArmoryPanel_C.SetWeaponAssetToSlot
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
//		class UKSWeaponProgressButton*                     WeaponSlot                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWBP_RogueArmoryPanel_C::SetWeaponAssetToSlot(class UKSWeaponProgressButton* WeaponSlot)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(79509);

	UWBP_RogueArmoryPanel_C_SetWeaponAssetToSlot_Params params {};
	params.WeaponSlot = WeaponSlot;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_RogueArmoryPanel.WBP_RogueArmoryPanel_C.SetupInput
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
//		class UKSWidget*                                   NavigationParent                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		int                                                FocusGroup                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWBP_RogueArmoryPanel_C::SetupInput(class UKSWidget* NavigationParent, int FocusGroup)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(79508);

	UWBP_RogueArmoryPanel_C_SetupInput_Params params {};
	params.NavigationParent = NavigationParent;
	params.FocusGroup = FocusGroup;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_RogueArmoryPanel.WBP_RogueArmoryPanel_C.SetJob
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
//		class UKSJobItem*                                  JobItem                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWBP_RogueArmoryPanel_C::SetJob(class UKSJobItem* JobItem)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(79507);

	UWBP_RogueArmoryPanel_C_SetJob_Params params {};
	params.JobItem = JobItem;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_RogueArmoryPanel.WBP_RogueArmoryPanel_C.BndEvt__PrimaryWeaponSwapButton_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature
//		Flags  -> (BlueprintEvent)
// Parameters:
//		class UWidget*                                     Widget                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWBP_RogueArmoryPanel_C::BndEvt__PrimaryWeaponSwapButton_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature(class UWidget* Widget)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(79506);

	UWBP_RogueArmoryPanel_C_BndEvt__PrimaryWeaponSwapButton_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature_Params params {};
	params.Widget = Widget;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_RogueArmoryPanel.WBP_RogueArmoryPanel_C.OnInitialized
//		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
void UWBP_RogueArmoryPanel_C::OnInitialized()
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(79505);

	UWBP_RogueArmoryPanel_C_OnInitialized_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_RogueArmoryPanel.WBP_RogueArmoryPanel_C.ExecuteUbergraph_WBP_RogueArmoryPanel
//		Flags  -> (Final)
// Parameters:
//		int                                                EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWBP_RogueArmoryPanel_C::ExecuteUbergraph_WBP_RogueArmoryPanel(int EntryPoint)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(79504);

	UWBP_RogueArmoryPanel_C_ExecuteUbergraph_WBP_RogueArmoryPanel_Params params {};
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_RogueArmoryPanel.WBP_RogueArmoryPanel_C.OnSelectPrimaryWeaponSwap__DelegateSignature
//		Flags  -> (Public, Delegate, BlueprintCallable, BlueprintEvent)
void UWBP_RogueArmoryPanel_C::OnSelectPrimaryWeaponSwap__DelegateSignature()
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(79503);

	UWBP_RogueArmoryPanel_C_OnSelectPrimaryWeaponSwap__DelegateSignature_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
