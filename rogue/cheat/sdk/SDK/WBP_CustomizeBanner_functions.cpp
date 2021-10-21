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
//		Name   -> Function WBP_CustomizeBanner.WBP_CustomizeBanner_C.OnSortRarityDescNameAsc
//		Flags  -> (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
//		class UWidget*                                     LHS                                                        (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		class UWidget*                                     RHS                                                        (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
bool UWBP_CustomizeBanner_C::OnSortRarityDescNameAsc(class UWidget* LHS, class UWidget* RHS)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(89833);

	UWBP_CustomizeBanner_C_OnSortRarityDescNameAsc_Params params {};
	params.LHS = LHS;
	params.RHS = RHS;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_CustomizeBanner.WBP_CustomizeBanner_C.NavigateBack
//		Flags  -> (Event, Protected, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
//		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
bool UWBP_CustomizeBanner_C::NavigateBack()
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(89832);

	UWBP_CustomizeBanner_C_NavigateBack_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_CustomizeBanner.WBP_CustomizeBanner_C.OnKeyDown
//		Flags  -> (BlueprintCosmetic, Event, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
//		struct FGeometry                                   MyGeometry                                                 (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
//		struct FKeyEvent                                   InKeyEvent                                                 (BlueprintVisible, BlueprintReadOnly, Parm)
//		struct FEventReply                                 ReturnValue                                                (Parm, OutParm, ReturnParm)
struct FEventReply UWBP_CustomizeBanner_C::OnKeyDown(const struct FGeometry& MyGeometry, const struct FKeyEvent& InKeyEvent)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(89831);

	UWBP_CustomizeBanner_C_OnKeyDown_Params params {};
	params.MyGeometry = MyGeometry;
	params.InKeyEvent = InKeyEvent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_CustomizeBanner.WBP_CustomizeBanner_C.AddEmptySlots
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
void UWBP_CustomizeBanner_C::AddEmptySlots()
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(89830);

	UWBP_CustomizeBanner_C_AddEmptySlots_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_CustomizeBanner.WBP_CustomizeBanner_C.SetActiveStates
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
//		class UWBP_CosmeticItem_Banner_C*                  ActiveWidget                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWBP_CustomizeBanner_C::SetActiveStates(class UWBP_CosmeticItem_Banner_C* ActiveWidget)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(89829);

	UWBP_CustomizeBanner_C_SetActiveStates_Params params {};
	params.ActiveWidget = ActiveWidget;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_CustomizeBanner.WBP_CustomizeBanner_C.RegisterNavigation
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
void UWBP_CustomizeBanner_C::RegisterNavigation()
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(89828);

	UWBP_CustomizeBanner_C_RegisterNavigation_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_CustomizeBanner.WBP_CustomizeBanner_C.IsBannerItemEquipped
//		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
//		class UKSItem*                                     KSItem                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		bool                                               IsEquipped                                                 (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UWBP_CustomizeBanner_C::IsBannerItemEquipped(class UKSItem* KSItem, bool* IsEquipped)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(89827);

	UWBP_CustomizeBanner_C_IsBannerItemEquipped_Params params {};
	params.KSItem = KSItem;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (IsEquipped != nullptr)
		*IsEquipped = params.IsEquipped;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_CustomizeBanner.WBP_CustomizeBanner_C.ResetBannerSelection
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
void UWBP_CustomizeBanner_C::ResetBannerSelection()
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(89826);

	UWBP_CustomizeBanner_C_ResetBannerSelection_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_CustomizeBanner.WBP_CustomizeBanner_C.SetContextBar
//		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
void UWBP_CustomizeBanner_C::SetContextBar()
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(89825);

	UWBP_CustomizeBanner_C_SetContextBar_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_CustomizeBanner.WBP_CustomizeBanner_C.SetBannerSelection
//		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
void UWBP_CustomizeBanner_C::SetBannerSelection()
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(89824);

	UWBP_CustomizeBanner_C_SetBannerSelection_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_CustomizeBanner.WBP_CustomizeBanner_C.InitializeWidget
//		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
//		class APUMG_HUD*                                   HUD                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWBP_CustomizeBanner_C::InitializeWidget(class APUMG_HUD* HUD)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(89823);

	UWBP_CustomizeBanner_C_InitializeWidget_Params params {};
	params.HUD = HUD;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_CustomizeBanner.WBP_CustomizeBanner_C.OnShown
//		Flags  -> (Event, Public, BlueprintEvent)
void UWBP_CustomizeBanner_C::OnShown()
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(89822);

	UWBP_CustomizeBanner_C_OnShown_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_CustomizeBanner.WBP_CustomizeBanner_C.OnHide
//		Flags  -> (Event, Public, BlueprintEvent)
void UWBP_CustomizeBanner_C::OnHide()
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(89821);

	UWBP_CustomizeBanner_C_OnHide_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_CustomizeBanner.WBP_CustomizeBanner_C.InitializeWidgetNavigation
//		Flags  -> (Event, Public, BlueprintEvent)
void UWBP_CustomizeBanner_C::InitializeWidgetNavigation()
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(89820);

	UWBP_CustomizeBanner_C_InitializeWidgetNavigation_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_CustomizeBanner.WBP_CustomizeBanner_C.OnBackPrompt
//		Flags  -> (BlueprintCallable, BlueprintEvent)
void UWBP_CustomizeBanner_C::OnBackPrompt()
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(89819);

	UWBP_CustomizeBanner_C_OnBackPrompt_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_CustomizeBanner.WBP_CustomizeBanner_C.OnBannerHover
//		Flags  -> (BlueprintCallable, BlueprintEvent)
// Parameters:
//		class UPlatformInventoryItem*                      PlatformItem                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWBP_CustomizeBanner_C::OnBannerHover(class UPlatformInventoryItem* PlatformItem)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(89818);

	UWBP_CustomizeBanner_C_OnBannerHover_Params params {};
	params.PlatformItem = PlatformItem;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_CustomizeBanner.WBP_CustomizeBanner_C.OnBannerUnhover
//		Flags  -> (BlueprintCallable, BlueprintEvent)
void UWBP_CustomizeBanner_C::OnBannerUnhover()
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(89817);

	UWBP_CustomizeBanner_C_OnBannerUnhover_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_CustomizeBanner.WBP_CustomizeBanner_C.OnBannerSelected
//		Flags  -> (BlueprintCallable, BlueprintEvent)
// Parameters:
//		class UPlatformInventoryItem*                      PlatformItem                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		class UWidget*                                     Widget                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWBP_CustomizeBanner_C::OnBannerSelected(class UPlatformInventoryItem* PlatformItem, class UWidget* Widget)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(89816);

	UWBP_CustomizeBanner_C_OnBannerSelected_Params params {};
	params.PlatformItem = PlatformItem;
	params.Widget = Widget;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_CustomizeBanner.WBP_CustomizeBanner_C.OnBannerGamepadHover
//		Flags  -> (BlueprintCallable, BlueprintEvent)
// Parameters:
//		class UPUMG_Widget*                                Widget                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		bool                                               Hovered                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UWBP_CustomizeBanner_C::OnBannerGamepadHover(class UPUMG_Widget* Widget, bool Hovered)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(89815);

	UWBP_CustomizeBanner_C_OnBannerGamepadHover_Params params {};
	params.Widget = Widget;
	params.Hovered = Hovered;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_CustomizeBanner.WBP_CustomizeBanner_C.ExecuteUbergraph_WBP_CustomizeBanner
//		Flags  -> (Final)
// Parameters:
//		int                                                EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWBP_CustomizeBanner_C::ExecuteUbergraph_WBP_CustomizeBanner(int EntryPoint)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(89814);

	UWBP_CustomizeBanner_C_ExecuteUbergraph_WBP_CustomizeBanner_Params params {};
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
