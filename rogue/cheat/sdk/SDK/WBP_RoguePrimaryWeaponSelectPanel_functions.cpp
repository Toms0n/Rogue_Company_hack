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
//		Name   -> Function WBP_RoguePrimaryWeaponSelectPanel.WBP_RoguePrimaryWeaponSelectPanel_C.FavoriteHoveredWeapon
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
void UWBP_RoguePrimaryWeaponSelectPanel_C::FavoriteHoveredWeapon()
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(209636);

	UWBP_RoguePrimaryWeaponSelectPanel_C_FavoriteHoveredWeapon_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_RoguePrimaryWeaponSelectPanel.WBP_RoguePrimaryWeaponSelectPanel_C.OnFavoriteSelected
//		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
//		class UKSWeaponAsset*                              WeaponAsset                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWBP_RoguePrimaryWeaponSelectPanel_C::OnFavoriteSelected(class UKSWeaponAsset* WeaponAsset)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(209635);

	UWBP_RoguePrimaryWeaponSelectPanel_C_OnFavoriteSelected_Params params {};
	params.WeaponAsset = WeaponAsset;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_RoguePrimaryWeaponSelectPanel.WBP_RoguePrimaryWeaponSelectPanel_C.CustomizeHoveredWeapon
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
void UWBP_RoguePrimaryWeaponSelectPanel_C::CustomizeHoveredWeapon()
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(209634);

	UWBP_RoguePrimaryWeaponSelectPanel_C_CustomizeHoveredWeapon_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_RoguePrimaryWeaponSelectPanel.WBP_RoguePrimaryWeaponSelectPanel_C.SetCustomizeBind
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
void UWBP_RoguePrimaryWeaponSelectPanel_C::SetCustomizeBind()
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(209633);

	UWBP_RoguePrimaryWeaponSelectPanel_C_SetCustomizeBind_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_RoguePrimaryWeaponSelectPanel.WBP_RoguePrimaryWeaponSelectPanel_C.CanWeaponBeFavorited
//		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
//		class UKSWeaponAsset*                              WeaponAsset                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		bool                                               CanFavorite                                                (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UWBP_RoguePrimaryWeaponSelectPanel_C::CanWeaponBeFavorited(class UKSWeaponAsset* WeaponAsset, bool* CanFavorite)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(209632);

	UWBP_RoguePrimaryWeaponSelectPanel_C_CanWeaponBeFavorited_Params params {};
	params.WeaponAsset = WeaponAsset;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (CanFavorite != nullptr)
		*CanFavorite = params.CanFavorite;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_RoguePrimaryWeaponSelectPanel.WBP_RoguePrimaryWeaponSelectPanel_C.DisplayOnStatsPanel
//		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
//		class UKSWeaponAsset*                              WeaponAsset                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWBP_RoguePrimaryWeaponSelectPanel_C::DisplayOnStatsPanel(class UKSWeaponAsset* WeaponAsset)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(209631);

	UWBP_RoguePrimaryWeaponSelectPanel_C_DisplayOnStatsPanel_Params params {};
	params.WeaponAsset = WeaponAsset;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_RoguePrimaryWeaponSelectPanel.WBP_RoguePrimaryWeaponSelectPanel_C.OnWeaponPreview
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
//		class UKSWeaponAsset*                              WeaponAsset                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWBP_RoguePrimaryWeaponSelectPanel_C::OnWeaponPreview(class UKSWeaponAsset* WeaponAsset)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(209630);

	UWBP_RoguePrimaryWeaponSelectPanel_C_OnWeaponPreview_Params params {};
	params.WeaponAsset = WeaponAsset;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_RoguePrimaryWeaponSelectPanel.WBP_RoguePrimaryWeaponSelectPanel_C.RebuildColumnNavigation
//		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
//		TArray<class UWidget*>                             PrimaryColumn                                              (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, ContainsInstancedReference, HasGetValueTypeHash)
//		TArray<class UWidget*>                             SecondaryColumn                                            (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, ContainsInstancedReference, HasGetValueTypeHash)
//		bool                                               IsLeftColumn                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UWBP_RoguePrimaryWeaponSelectPanel_C::RebuildColumnNavigation(TArray<class UWidget*>* PrimaryColumn, TArray<class UWidget*>* SecondaryColumn, bool IsLeftColumn)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(209629);

	UWBP_RoguePrimaryWeaponSelectPanel_C_RebuildColumnNavigation_Params params {};
	params.IsLeftColumn = IsLeftColumn;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (PrimaryColumn != nullptr)
		*PrimaryColumn = params.PrimaryColumn;
	if (SecondaryColumn != nullptr)
		*SecondaryColumn = params.SecondaryColumn;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_RoguePrimaryWeaponSelectPanel.WBP_RoguePrimaryWeaponSelectPanel_C.RebuildNavigation
//		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
void UWBP_RoguePrimaryWeaponSelectPanel_C::RebuildNavigation()
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(209628);

	UWBP_RoguePrimaryWeaponSelectPanel_C_RebuildNavigation_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_RoguePrimaryWeaponSelectPanel.WBP_RoguePrimaryWeaponSelectPanel_C.OnWeaponSelected
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
//		class UKSWeaponAsset*                              WeaponAsset                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWBP_RoguePrimaryWeaponSelectPanel_C::OnWeaponSelected(class UKSWeaponAsset* WeaponAsset)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(209627);

	UWBP_RoguePrimaryWeaponSelectPanel_C_OnWeaponSelected_Params params {};
	params.WeaponAsset = WeaponAsset;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_RoguePrimaryWeaponSelectPanel.WBP_RoguePrimaryWeaponSelectPanel_C.PopulateWeaponsInCategory
//		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
//		class UVerticalBox*                                Category                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		class UTextBlock*                                  CategoryName                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		class UTextBlock*                                  CategoryQuantity                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		class UWBP_AsyncIcon_C*                            CategoryIcon                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWBP_RoguePrimaryWeaponSelectPanel_C::PopulateWeaponsInCategory(class UVerticalBox* Category, class UTextBlock* CategoryName, class UTextBlock* CategoryQuantity, class UWBP_AsyncIcon_C* CategoryIcon)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(209626);

	UWBP_RoguePrimaryWeaponSelectPanel_C_PopulateWeaponsInCategory_Params params {};
	params.Category = Category;
	params.CategoryName = CategoryName;
	params.CategoryQuantity = CategoryQuantity;
	params.CategoryIcon = CategoryIcon;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_RoguePrimaryWeaponSelectPanel.WBP_RoguePrimaryWeaponSelectPanel_C.SetJob
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
//		class UKSJobItem*                                  JobItem                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWBP_RoguePrimaryWeaponSelectPanel_C::SetJob(class UKSJobItem* JobItem)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(209625);

	UWBP_RoguePrimaryWeaponSelectPanel_C_SetJob_Params params {};
	params.JobItem = JobItem;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_RoguePrimaryWeaponSelectPanel.WBP_RoguePrimaryWeaponSelectPanel_C.SetRogueDetailsWidget
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
//		class UKSRogueDetailsWidget*                       RogueDetailsWidget                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWBP_RoguePrimaryWeaponSelectPanel_C::SetRogueDetailsWidget(class UKSRogueDetailsWidget* RogueDetailsWidget)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(209624);

	UWBP_RoguePrimaryWeaponSelectPanel_C_SetRogueDetailsWidget_Params params {};
	params.RogueDetailsWidget = RogueDetailsWidget;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_RoguePrimaryWeaponSelectPanel.WBP_RoguePrimaryWeaponSelectPanel_C.SetupInput
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
//		class UKSWidget*                                   NavigationParent                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		int                                                FocusGroup                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWBP_RoguePrimaryWeaponSelectPanel_C::SetupInput(class UKSWidget* NavigationParent, int FocusGroup)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(209623);

	UWBP_RoguePrimaryWeaponSelectPanel_C_SetupInput_Params params {};
	params.NavigationParent = NavigationParent;
	params.FocusGroup = FocusGroup;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_RoguePrimaryWeaponSelectPanel.WBP_RoguePrimaryWeaponSelectPanel_C.PreConstruct
//		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
//		bool                                               IsDesignTime                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UWBP_RoguePrimaryWeaponSelectPanel_C::PreConstruct(bool IsDesignTime)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(209622);

	UWBP_RoguePrimaryWeaponSelectPanel_C_PreConstruct_Params params {};
	params.IsDesignTime = IsDesignTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_RoguePrimaryWeaponSelectPanel.WBP_RoguePrimaryWeaponSelectPanel_C.ExecuteUbergraph_WBP_RoguePrimaryWeaponSelectPanel
//		Flags  -> (Final)
// Parameters:
//		int                                                EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWBP_RoguePrimaryWeaponSelectPanel_C::ExecuteUbergraph_WBP_RoguePrimaryWeaponSelectPanel(int EntryPoint)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(78892);

	UWBP_RoguePrimaryWeaponSelectPanel_C_ExecuteUbergraph_WBP_RoguePrimaryWeaponSelectPanel_Params params {};
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
