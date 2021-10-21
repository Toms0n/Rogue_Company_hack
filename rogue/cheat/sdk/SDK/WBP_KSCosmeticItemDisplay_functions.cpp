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
//		Name   -> Function WBP_KSCosmeticItemDisplay.WBP_KSCosmeticItemDisplay_C.SetMaterialUnderlay
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
//		class UPlatformInventoryItem*                      InventoryItem                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWBP_KSCosmeticItemDisplay_C::SetMaterialUnderlay(class UPlatformInventoryItem* InventoryItem)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(62764);

	UWBP_KSCosmeticItemDisplay_C_SetMaterialUnderlay_Params params {};
	params.InventoryItem = InventoryItem;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_KSCosmeticItemDisplay.WBP_KSCosmeticItemDisplay_C.SetFromRewardDisplayData
//		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
//		struct FWeaponMasteryRewardDisplayData             Display_Data                                               (BlueprintVisible, BlueprintReadOnly, Parm)
void UWBP_KSCosmeticItemDisplay_C::SetFromRewardDisplayData(const struct FWeaponMasteryRewardDisplayData& Display_Data)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(62763);

	UWBP_KSCosmeticItemDisplay_C_SetFromRewardDisplayData_Params params {};
	params.Display_Data = Display_Data;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_KSCosmeticItemDisplay.WBP_KSCosmeticItemDisplay_C.SetRarity
//		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
//		struct FGameplayTagContainer                       GameplayTag                                                (BlueprintVisible, BlueprintReadOnly, Parm)
void UWBP_KSCosmeticItemDisplay_C::SetRarity(const struct FGameplayTagContainer& GameplayTag)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(62762);

	UWBP_KSCosmeticItemDisplay_C_SetRarity_Params params {};
	params.GameplayTag = GameplayTag;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_KSCosmeticItemDisplay.WBP_KSCosmeticItemDisplay_C.SetHeaderSlot
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
void UWBP_KSCosmeticItemDisplay_C::SetHeaderSlot()
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(62761);

	UWBP_KSCosmeticItemDisplay_C_SetHeaderSlot_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_KSCosmeticItemDisplay.WBP_KSCosmeticItemDisplay_C.SetupPriceData
//		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
void UWBP_KSCosmeticItemDisplay_C::SetupPriceData()
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(62760);

	UWBP_KSCosmeticItemDisplay_C_SetupPriceData_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_KSCosmeticItemDisplay.WBP_KSCosmeticItemDisplay_C.SetIsOwned
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
//		bool                                               IsOwned                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UWBP_KSCosmeticItemDisplay_C::SetIsOwned(bool IsOwned)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(62759);

	UWBP_KSCosmeticItemDisplay_C_SetIsOwned_Params params {};
	params.IsOwned = IsOwned;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_KSCosmeticItemDisplay.WBP_KSCosmeticItemDisplay_C.SetQuantityText
//		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
void UWBP_KSCosmeticItemDisplay_C::SetQuantityText()
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(62758);

	UWBP_KSCosmeticItemDisplay_C_SetQuantityText_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_KSCosmeticItemDisplay.WBP_KSCosmeticItemDisplay_C.SetFreeLabel
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
void UWBP_KSCosmeticItemDisplay_C::SetFreeLabel()
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(62757);

	UWBP_KSCosmeticItemDisplay_C_SetFreeLabel_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_KSCosmeticItemDisplay.WBP_KSCosmeticItemDisplay_C.ReverseBackgroundHoverNoZoom
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
void UWBP_KSCosmeticItemDisplay_C::ReverseBackgroundHoverNoZoom()
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(62756);

	UWBP_KSCosmeticItemDisplay_C_ReverseBackgroundHoverNoZoom_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_KSCosmeticItemDisplay.WBP_KSCosmeticItemDisplay_C.BackgroundHoverNoZoom
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
void UWBP_KSCosmeticItemDisplay_C::BackgroundHoverNoZoom()
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(62755);

	UWBP_KSCosmeticItemDisplay_C_BackgroundHoverNoZoom_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_KSCosmeticItemDisplay.WBP_KSCosmeticItemDisplay_C.SetItemOwned
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
//		class UPUMG_StoreItem*                             StoreItem                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWBP_KSCosmeticItemDisplay_C::SetItemOwned(class UPUMG_StoreItem* StoreItem)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(62754);

	UWBP_KSCosmeticItemDisplay_C_SetItemOwned_Params params {};
	params.StoreItem = StoreItem;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_KSCosmeticItemDisplay.WBP_KSCosmeticItemDisplay_C.NavigateConfirm
//		Flags  -> (Event, Protected, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
//		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
bool UWBP_KSCosmeticItemDisplay_C::NavigateConfirm()
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(62753);

	UWBP_KSCosmeticItemDisplay_C_NavigateConfirm_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_KSCosmeticItemDisplay.WBP_KSCosmeticItemDisplay_C.ResetSlot
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
void UWBP_KSCosmeticItemDisplay_C::ResetSlot()
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(62752);

	UWBP_KSCosmeticItemDisplay_C_ResetSlot_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_KSCosmeticItemDisplay.WBP_KSCosmeticItemDisplay_C.SetWeaponSlot
//		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
void UWBP_KSCosmeticItemDisplay_C::SetWeaponSlot()
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(62751);

	UWBP_KSCosmeticItemDisplay_C_SetWeaponSlot_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_KSCosmeticItemDisplay.WBP_KSCosmeticItemDisplay_C.SetCornerIcon
//		Flags  -> (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
//		bool                                               bShowIcon                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
//		struct FSoftObjectPath                             Soft_Image_Path                                            (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, HasGetValueTypeHash)
void UWBP_KSCosmeticItemDisplay_C::SetCornerIcon(bool bShowIcon, struct FSoftObjectPath* Soft_Image_Path)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(62750);

	UWBP_KSCosmeticItemDisplay_C_SetCornerIcon_Params params {};
	params.bShowIcon = bShowIcon;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Soft_Image_Path != nullptr)
		*Soft_Image_Path = params.Soft_Image_Path;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_KSCosmeticItemDisplay.WBP_KSCosmeticItemDisplay_C.SetCosmeticSlot
//		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
void UWBP_KSCosmeticItemDisplay_C::SetCosmeticSlot()
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(62749);

	UWBP_KSCosmeticItemDisplay_C_SetCosmeticSlot_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_KSCosmeticItemDisplay.WBP_KSCosmeticItemDisplay_C.OnClickSound
//		Flags  -> (BlueprintCallable, BlueprintEvent)
void UWBP_KSCosmeticItemDisplay_C::OnClickSound()
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(62748);

	UWBP_KSCosmeticItemDisplay_C_OnClickSound_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_KSCosmeticItemDisplay.WBP_KSCosmeticItemDisplay_C.OnHoverSound
//		Flags  -> (BlueprintCallable, BlueprintEvent)
void UWBP_KSCosmeticItemDisplay_C::OnHoverSound()
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(62747);

	UWBP_KSCosmeticItemDisplay_C_OnHoverSound_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_KSCosmeticItemDisplay.WBP_KSCosmeticItemDisplay_C.PopulateSlot
//		Flags  -> (BlueprintCallable, BlueprintEvent)
// Parameters:
//		class UPlatformInventoryItem*                      PlatformItem                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		class UKSJobItem*                                  AssiocatedJobItem                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		class UPUMG_StoreItem*                             StoreItem                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWBP_KSCosmeticItemDisplay_C::PopulateSlot(class UPlatformInventoryItem* PlatformItem, class UKSJobItem* AssiocatedJobItem, class UPUMG_StoreItem* StoreItem)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(62746);

	UWBP_KSCosmeticItemDisplay_C_PopulateSlot_Params params {};
	params.PlatformItem = PlatformItem;
	params.AssiocatedJobItem = AssiocatedJobItem;
	params.StoreItem = StoreItem;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_KSCosmeticItemDisplay.WBP_KSCosmeticItemDisplay_C.Construct
//		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
void UWBP_KSCosmeticItemDisplay_C::Construct()
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(62745);

	UWBP_KSCosmeticItemDisplay_C_Construct_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_KSCosmeticItemDisplay.WBP_KSCosmeticItemDisplay_C.OnHovered
//		Flags  -> (BlueprintCallable, BlueprintEvent)
// Parameters:
//		bool                                               IsGamepad                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UWBP_KSCosmeticItemDisplay_C::OnHovered(bool IsGamepad)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(62744);

	UWBP_KSCosmeticItemDisplay_C_OnHovered_Params params {};
	params.IsGamepad = IsGamepad;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_KSCosmeticItemDisplay.WBP_KSCosmeticItemDisplay_C.OnButtonUnhovered
//		Flags  -> (BlueprintCallable, BlueprintEvent)
void UWBP_KSCosmeticItemDisplay_C::OnButtonUnhovered()
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(62743);

	UWBP_KSCosmeticItemDisplay_C_OnButtonUnhovered_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_KSCosmeticItemDisplay.WBP_KSCosmeticItemDisplay_C.InitializeWidget
//		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
//		class APUMG_HUD*                                   HUD                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWBP_KSCosmeticItemDisplay_C::InitializeWidget(class APUMG_HUD* HUD)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(62742);

	UWBP_KSCosmeticItemDisplay_C_InitializeWidget_Params params {};
	params.HUD = HUD;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_KSCosmeticItemDisplay.WBP_KSCosmeticItemDisplay_C.PreConstruct
//		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
//		bool                                               IsDesignTime                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UWBP_KSCosmeticItemDisplay_C::PreConstruct(bool IsDesignTime)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(62741);

	UWBP_KSCosmeticItemDisplay_C_PreConstruct_Params params {};
	params.IsDesignTime = IsDesignTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_KSCosmeticItemDisplay.WBP_KSCosmeticItemDisplay_C.OnButtonClicked
//		Flags  -> (BlueprintCallable, BlueprintEvent)
void UWBP_KSCosmeticItemDisplay_C::OnButtonClicked()
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(62740);

	UWBP_KSCosmeticItemDisplay_C_OnButtonClicked_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_KSCosmeticItemDisplay.WBP_KSCosmeticItemDisplay_C.GamepadHover
//		Flags  -> (Event, Public, BlueprintEvent)
void UWBP_KSCosmeticItemDisplay_C::GamepadHover()
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(62739);

	UWBP_KSCosmeticItemDisplay_C_GamepadHover_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_KSCosmeticItemDisplay.WBP_KSCosmeticItemDisplay_C.GamepadUnhover
//		Flags  -> (Event, Public, BlueprintEvent)
void UWBP_KSCosmeticItemDisplay_C::GamepadUnhover()
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(62738);

	UWBP_KSCosmeticItemDisplay_C_GamepadUnhover_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_KSCosmeticItemDisplay.WBP_KSCosmeticItemDisplay_C.CallHovered
//		Flags  -> (BlueprintCallable, BlueprintEvent)
void UWBP_KSCosmeticItemDisplay_C::CallHovered()
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(62737);

	UWBP_KSCosmeticItemDisplay_C_CallHovered_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_KSCosmeticItemDisplay.WBP_KSCosmeticItemDisplay_C.CallUnhovered
//		Flags  -> (BlueprintCallable, BlueprintEvent)
void UWBP_KSCosmeticItemDisplay_C::CallUnhovered()
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(62736);

	UWBP_KSCosmeticItemDisplay_C_CallUnhovered_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_KSCosmeticItemDisplay.WBP_KSCosmeticItemDisplay_C.SetSlotActive
//		Flags  -> (BlueprintCallable, BlueprintEvent)
// Parameters:
//		bool                                               Active                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UWBP_KSCosmeticItemDisplay_C::SetSlotActive(bool Active)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(62735);

	UWBP_KSCosmeticItemDisplay_C_SetSlotActive_Params params {};
	params.Active = Active;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_KSCosmeticItemDisplay.WBP_KSCosmeticItemDisplay_C.Event Dsiplay Selected
//		Flags  -> (BlueprintCallable, BlueprintEvent)
// Parameters:
//		bool                                               IsSelected                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UWBP_KSCosmeticItemDisplay_C::Event_Dsiplay_Selected(bool IsSelected)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(62734);

	UWBP_KSCosmeticItemDisplay_C_Event_Dsiplay_Selected_Params params {};
	params.IsSelected = IsSelected;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_KSCosmeticItemDisplay.WBP_KSCosmeticItemDisplay_C.Event Display Equipped
//		Flags  -> (BlueprintCallable, BlueprintEvent)
// Parameters:
//		bool                                               IsEquipped                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UWBP_KSCosmeticItemDisplay_C::Event_Display_Equipped(bool IsEquipped)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(62733);

	UWBP_KSCosmeticItemDisplay_C_Event_Display_Equipped_Params params {};
	params.IsEquipped = IsEquipped;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_KSCosmeticItemDisplay.WBP_KSCosmeticItemDisplay_C.ExecuteUbergraph_WBP_KSCosmeticItemDisplay
//		Flags  -> (Final, HasDefaults)
// Parameters:
//		int                                                EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWBP_KSCosmeticItemDisplay_C::ExecuteUbergraph_WBP_KSCosmeticItemDisplay(int EntryPoint)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(62732);

	UWBP_KSCosmeticItemDisplay_C_ExecuteUbergraph_WBP_KSCosmeticItemDisplay_Params params {};
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_KSCosmeticItemDisplay.WBP_KSCosmeticItemDisplay_C.OnCosmeticClicked__DelegateSignature
//		Flags  -> (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
//		class UWBP_KSCosmeticItemDisplay_C*                Widget                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		struct FCosmeticSlotDetails                        CosmeticSlotDetails                                        (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)
void UWBP_KSCosmeticItemDisplay_C::OnCosmeticClicked__DelegateSignature(class UWBP_KSCosmeticItemDisplay_C* Widget, const struct FCosmeticSlotDetails& CosmeticSlotDetails)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(62731);

	UWBP_KSCosmeticItemDisplay_C_OnCosmeticClicked__DelegateSignature_Params params {};
	params.Widget = Widget;
	params.CosmeticSlotDetails = CosmeticSlotDetails;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_KSCosmeticItemDisplay.WBP_KSCosmeticItemDisplay_C.OnUnhover__DelegateSignature
//		Flags  -> (Public, Delegate, BlueprintCallable, BlueprintEvent)
void UWBP_KSCosmeticItemDisplay_C::OnUnhover__DelegateSignature()
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(62730);

	UWBP_KSCosmeticItemDisplay_C_OnUnhover__DelegateSignature_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_KSCosmeticItemDisplay.WBP_KSCosmeticItemDisplay_C.OnHover__DelegateSignature
//		Flags  -> (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
//		struct FCosmeticSlotDetails                        CosmeticSlotDetails                                        (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)
//		bool                                               IsGamepad                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
//		class UWBP_KSCosmeticItemDisplay_C*                Widget                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWBP_KSCosmeticItemDisplay_C::OnHover__DelegateSignature(const struct FCosmeticSlotDetails& CosmeticSlotDetails, bool IsGamepad, class UWBP_KSCosmeticItemDisplay_C* Widget)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(62729);

	UWBP_KSCosmeticItemDisplay_C_OnHover__DelegateSignature_Params params {};
	params.CosmeticSlotDetails = CosmeticSlotDetails;
	params.IsGamepad = IsGamepad;
	params.Widget = Widget;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
