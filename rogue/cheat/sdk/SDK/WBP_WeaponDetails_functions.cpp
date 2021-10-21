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
//		Name   -> Function WBP_WeaponDetails.WBP_WeaponDetails_C.NavigateConfirm
//		Flags  -> (Event, Protected, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
//		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
bool UWBP_WeaponDetails_C::NavigateConfirm()
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(88110);

	UWBP_WeaponDetails_C_NavigateConfirm_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_WeaponDetails.WBP_WeaponDetails_C.NavigateBack
//		Flags  -> (Event, Protected, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
//		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
bool UWBP_WeaponDetails_C::NavigateBack()
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(88109);

	UWBP_WeaponDetails_C_NavigateBack_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_WeaponDetails.WBP_WeaponDetails_C.OnKeyUp
//		Flags  -> (BlueprintCosmetic, Event, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
//		struct FGeometry                                   MyGeometry                                                 (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
//		struct FKeyEvent                                   InKeyEvent                                                 (BlueprintVisible, BlueprintReadOnly, Parm)
//		struct FEventReply                                 ReturnValue                                                (Parm, OutParm, ReturnParm)
struct FEventReply UWBP_WeaponDetails_C::OnKeyUp(const struct FGeometry& MyGeometry, const struct FKeyEvent& InKeyEvent)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(88108);

	UWBP_WeaponDetails_C_OnKeyUp_Params params {};
	params.MyGeometry = MyGeometry;
	params.InKeyEvent = InKeyEvent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_WeaponDetails.WBP_WeaponDetails_C.DisplayWeapon
//		Flags  -> (Event, Public, BlueprintEvent)
// Parameters:
//		class UKSWeaponAsset*                              WeaponAsset                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		class UKSWeaponCategoryAsset*                      WeaponCategory                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWBP_WeaponDetails_C::DisplayWeapon(class UKSWeaponAsset* WeaponAsset, class UKSWeaponCategoryAsset* WeaponCategory)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(88107);

	UWBP_WeaponDetails_C_DisplayWeapon_Params params {};
	params.WeaponAsset = WeaponAsset;
	params.WeaponCategory = WeaponCategory;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_WeaponDetails.WBP_WeaponDetails_C.OnShown
//		Flags  -> (Event, Public, BlueprintEvent)
void UWBP_WeaponDetails_C::OnShown()
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(88106);

	UWBP_WeaponDetails_C_OnShown_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_WeaponDetails.WBP_WeaponDetails_C.ConfigureViewModel
//		Flags  -> (Event, Public, BlueprintEvent)
// Parameters:
//		class UKSWeaponAsset*                              WeaponAsset                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		class UKSWeaponAttachment*                         WeaponWrap                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWBP_WeaponDetails_C::ConfigureViewModel(class UKSWeaponAsset* WeaponAsset, class UKSWeaponAttachment* WeaponWrap)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(88105);

	UWBP_WeaponDetails_C_ConfigureViewModel_Params params {};
	params.WeaponAsset = WeaponAsset;
	params.WeaponWrap = WeaponWrap;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_WeaponDetails.WBP_WeaponDetails_C.DisplayEquippedWrap
//		Flags  -> (Event, Public, BlueprintEvent)
// Parameters:
//		class UKSWeaponAttachment*                         EquippedWrap                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWBP_WeaponDetails_C::DisplayEquippedWrap(class UKSWeaponAttachment* EquippedWrap)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(88104);

	UWBP_WeaponDetails_C_DisplayEquippedWrap_Params params {};
	params.EquippedWrap = EquippedWrap;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_WeaponDetails.WBP_WeaponDetails_C.InitializeWidget
//		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
//		class APUMG_HUD*                                   HUD                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWBP_WeaponDetails_C::InitializeWidget(class APUMG_HUD* HUD)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(88103);

	UWBP_WeaponDetails_C_InitializeWidget_Params params {};
	params.HUD = HUD;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_WeaponDetails.WBP_WeaponDetails_C.BndEvt__EquippedWrap_K2Node_ComponentBoundEvent_0_OnSelected__DelegateSignature
//		Flags  -> (BlueprintEvent)
void UWBP_WeaponDetails_C::BndEvt__EquippedWrap_K2Node_ComponentBoundEvent_0_OnSelected__DelegateSignature()
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(88102);

	UWBP_WeaponDetails_C_BndEvt__EquippedWrap_K2Node_ComponentBoundEvent_0_OnSelected__DelegateSignature_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_WeaponDetails.WBP_WeaponDetails_C.InitializeWidgetNavigation
//		Flags  -> (Event, Public, BlueprintEvent)
void UWBP_WeaponDetails_C::InitializeWidgetNavigation()
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(88101);

	UWBP_WeaponDetails_C_InitializeWidgetNavigation_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_WeaponDetails.WBP_WeaponDetails_C.OnHide
//		Flags  -> (Event, Public, BlueprintEvent)
void UWBP_WeaponDetails_C::OnHide()
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(88100);

	UWBP_WeaponDetails_C_OnHide_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_WeaponDetails.WBP_WeaponDetails_C.On Weapon Set
//		Flags  -> (BlueprintCallable, BlueprintEvent)
void UWBP_WeaponDetails_C::On_Weapon_Set()
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(88099);

	UWBP_WeaponDetails_C_On_Weapon_Set_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_WeaponDetails.WBP_WeaponDetails_C.BndEvt__UnlockMilestonesButton_K2Node_ComponentBoundEvent_1_OnClicked__DelegateSignature
//		Flags  -> (BlueprintEvent)
// Parameters:
//		class UWidget*                                     Widget                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWBP_WeaponDetails_C::BndEvt__UnlockMilestonesButton_K2Node_ComponentBoundEvent_1_OnClicked__DelegateSignature(class UWidget* Widget)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(88098);

	UWBP_WeaponDetails_C_BndEvt__UnlockMilestonesButton_K2Node_ComponentBoundEvent_1_OnClicked__DelegateSignature_Params params {};
	params.Widget = Widget;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_WeaponDetails.WBP_WeaponDetails_C.FX_OnCustomizeContextAction
//		Flags  -> (Event, Public, BlueprintEvent)
void UWBP_WeaponDetails_C::FX_OnCustomizeContextAction()
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(88097);

	UWBP_WeaponDetails_C_FX_OnCustomizeContextAction_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_WeaponDetails.WBP_WeaponDetails_C.FX_OnViewMasteryRewards
//		Flags  -> (Event, Public, BlueprintEvent)
void UWBP_WeaponDetails_C::FX_OnViewMasteryRewards()
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(88096);

	UWBP_WeaponDetails_C_FX_OnViewMasteryRewards_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_WeaponDetails.WBP_WeaponDetails_C.ExecuteUbergraph_WBP_WeaponDetails
//		Flags  -> (Final, HasDefaults)
// Parameters:
//		int                                                EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWBP_WeaponDetails_C::ExecuteUbergraph_WBP_WeaponDetails(int EntryPoint)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(88095);

	UWBP_WeaponDetails_C_ExecuteUbergraph_WBP_WeaponDetails_Params params {};
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
