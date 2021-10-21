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
//		Name   -> Function WBP_WeaponCategoryScreen.WBP_WeaponCategoryScreen_C.NavigateBack
//		Flags  -> (Event, Protected, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
//		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
bool UWBP_WeaponCategoryScreen_C::NavigateBack()
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(88161);

	UWBP_WeaponCategoryScreen_C_NavigateBack_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_WeaponCategoryScreen.WBP_WeaponCategoryScreen_C.GetWeaponProgressButtons
//		Flags  -> (Event, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
//		TArray<class UKSWeaponProgressButton*>             ReturnValue                                                (Parm, OutParm, ReturnParm, ContainsInstancedReference, HasGetValueTypeHash)
TArray<class UKSWeaponProgressButton*> UWBP_WeaponCategoryScreen_C::GetWeaponProgressButtons()
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(88160);

	UWBP_WeaponCategoryScreen_C_GetWeaponProgressButtons_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_WeaponCategoryScreen.WBP_WeaponCategoryScreen_C.CreateAndAddWeaponEntry
//		Flags  -> (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
//		class UKSWeaponProgressButton*                     ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
class UKSWeaponProgressButton* UWBP_WeaponCategoryScreen_C::CreateAndAddWeaponEntry()
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(88159);

	UWBP_WeaponCategoryScreen_C_CreateAndAddWeaponEntry_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_WeaponCategoryScreen.WBP_WeaponCategoryScreen_C.PreConstruct
//		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
//		bool                                               IsDesignTime                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UWBP_WeaponCategoryScreen_C::PreConstruct(bool IsDesignTime)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(88158);

	UWBP_WeaponCategoryScreen_C_PreConstruct_Params params {};
	params.IsDesignTime = IsDesignTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_WeaponCategoryScreen.WBP_WeaponCategoryScreen_C.ClearWeaponEntries
//		Flags  -> (Event, Public, BlueprintEvent)
void UWBP_WeaponCategoryScreen_C::ClearWeaponEntries()
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(88157);

	UWBP_WeaponCategoryScreen_C_ClearWeaponEntries_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_WeaponCategoryScreen.WBP_WeaponCategoryScreen_C.DisplayWeaponCategory
//		Flags  -> (Event, Public, BlueprintEvent)
// Parameters:
//		class UKSWeaponCategoryAsset*                      WeaponCategory                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWBP_WeaponCategoryScreen_C::DisplayWeaponCategory(class UKSWeaponCategoryAsset* WeaponCategory)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(88156);

	UWBP_WeaponCategoryScreen_C_DisplayWeaponCategory_Params params {};
	params.WeaponCategory = WeaponCategory;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_WeaponCategoryScreen.WBP_WeaponCategoryScreen_C.InitializeWidgetNavigation
//		Flags  -> (Event, Public, BlueprintEvent)
void UWBP_WeaponCategoryScreen_C::InitializeWidgetNavigation()
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(88155);

	UWBP_WeaponCategoryScreen_C_InitializeWidgetNavigation_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_WeaponCategoryScreen.WBP_WeaponCategoryScreen_C.RefreshWidgetNavigation
//		Flags  -> (Event, Public, BlueprintEvent)
void UWBP_WeaponCategoryScreen_C::RefreshWidgetNavigation()
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(88154);

	UWBP_WeaponCategoryScreen_C_RefreshWidgetNavigation_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_WeaponCategoryScreen.WBP_WeaponCategoryScreen_C.OnShown
//		Flags  -> (Event, Public, BlueprintEvent)
void UWBP_WeaponCategoryScreen_C::OnShown()
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(88153);

	UWBP_WeaponCategoryScreen_C_OnShown_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_WeaponCategoryScreen.WBP_WeaponCategoryScreen_C.FX_OnCustomizeContextAction
//		Flags  -> (Event, Public, BlueprintEvent)
void UWBP_WeaponCategoryScreen_C::FX_OnCustomizeContextAction()
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(88152);

	UWBP_WeaponCategoryScreen_C_FX_OnCustomizeContextAction_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_WeaponCategoryScreen.WBP_WeaponCategoryScreen_C.FX_OnViewMasteryRewards
//		Flags  -> (Event, Public, BlueprintEvent)
void UWBP_WeaponCategoryScreen_C::FX_OnViewMasteryRewards()
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(88151);

	UWBP_WeaponCategoryScreen_C_FX_OnViewMasteryRewards_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_WeaponCategoryScreen.WBP_WeaponCategoryScreen_C.ExecuteUbergraph_WBP_WeaponCategoryScreen
//		Flags  -> (Final, HasDefaults)
// Parameters:
//		int                                                EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWBP_WeaponCategoryScreen_C::ExecuteUbergraph_WBP_WeaponCategoryScreen(int EntryPoint)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(88150);

	UWBP_WeaponCategoryScreen_C_ExecuteUbergraph_WBP_WeaponCategoryScreen_Params params {};
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
