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
//		Name   -> Function WBP_CosmeticItem_Border.WBP_CosmeticItem_Border_C.NavigateConfirm
//		Flags  -> (Event, Protected, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
//		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
bool UWBP_CosmeticItem_Border_C::NavigateConfirm()
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(59717);

	UWBP_CosmeticItem_Border_C_NavigateConfirm_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_CosmeticItem_Border.WBP_CosmeticItem_Border_C.SetBorderItemSlot
//		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
void UWBP_CosmeticItem_Border_C::SetBorderItemSlot()
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(59716);

	UWBP_CosmeticItem_Border_C_SetBorderItemSlot_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_CosmeticItem_Border.WBP_CosmeticItem_Border_C.OnHoverSound
//		Flags  -> (BlueprintCallable, BlueprintEvent)
void UWBP_CosmeticItem_Border_C::OnHoverSound()
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(59715);

	UWBP_CosmeticItem_Border_C_OnHoverSound_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_CosmeticItem_Border.WBP_CosmeticItem_Border_C.OnClickSound
//		Flags  -> (BlueprintCallable, BlueprintEvent)
void UWBP_CosmeticItem_Border_C::OnClickSound()
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(59714);

	UWBP_CosmeticItem_Border_C_OnClickSound_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_CosmeticItem_Border.WBP_CosmeticItem_Border_C.Construct
//		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
void UWBP_CosmeticItem_Border_C::Construct()
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(59713);

	UWBP_CosmeticItem_Border_C_Construct_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_CosmeticItem_Border.WBP_CosmeticItem_Border_C.InitializeWidget
//		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
//		class APUMG_HUD*                                   HUD                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWBP_CosmeticItem_Border_C::InitializeWidget(class APUMG_HUD* HUD)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(59712);

	UWBP_CosmeticItem_Border_C_InitializeWidget_Params params {};
	params.HUD = HUD;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_CosmeticItem_Border.WBP_CosmeticItem_Border_C.PopulateSlot
//		Flags  -> (BlueprintCallable, BlueprintEvent)
void UWBP_CosmeticItem_Border_C::PopulateSlot()
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(59711);

	UWBP_CosmeticItem_Border_C_PopulateSlot_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_CosmeticItem_Border.WBP_CosmeticItem_Border_C.OnBorderHover
//		Flags  -> (BlueprintCallable, BlueprintEvent)
// Parameters:
//		bool                                               IsGamepad                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UWBP_CosmeticItem_Border_C::OnBorderHover(bool IsGamepad)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(59710);

	UWBP_CosmeticItem_Border_C_OnBorderHover_Params params {};
	params.IsGamepad = IsGamepad;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_CosmeticItem_Border.WBP_CosmeticItem_Border_C.OnBorderUnhover
//		Flags  -> (BlueprintCallable, BlueprintEvent)
void UWBP_CosmeticItem_Border_C::OnBorderUnhover()
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(59709);

	UWBP_CosmeticItem_Border_C_OnBorderUnhover_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_CosmeticItem_Border.WBP_CosmeticItem_Border_C.OnBorderClick
//		Flags  -> (BlueprintCallable, BlueprintEvent)
void UWBP_CosmeticItem_Border_C::OnBorderClick()
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(59708);

	UWBP_CosmeticItem_Border_C_OnBorderClick_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_CosmeticItem_Border.WBP_CosmeticItem_Border_C.GamepadHover
//		Flags  -> (Event, Public, BlueprintEvent)
void UWBP_CosmeticItem_Border_C::GamepadHover()
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(59707);

	UWBP_CosmeticItem_Border_C_GamepadHover_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_CosmeticItem_Border.WBP_CosmeticItem_Border_C.GamepadUnhover
//		Flags  -> (Event, Public, BlueprintEvent)
void UWBP_CosmeticItem_Border_C::GamepadUnhover()
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(59706);

	UWBP_CosmeticItem_Border_C_GamepadUnhover_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_CosmeticItem_Border.WBP_CosmeticItem_Border_C.SetBorderActive
//		Flags  -> (BlueprintCallable, BlueprintEvent)
// Parameters:
//		bool                                               IsActive                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UWBP_CosmeticItem_Border_C::SetBorderActive(bool IsActive)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(59705);

	UWBP_CosmeticItem_Border_C_SetBorderActive_Params params {};
	params.IsActive = IsActive;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_CosmeticItem_Border.WBP_CosmeticItem_Border_C.ExecuteUbergraph_WBP_CosmeticItem_Border
//		Flags  -> (Final, HasDefaults)
// Parameters:
//		int                                                EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWBP_CosmeticItem_Border_C::ExecuteUbergraph_WBP_CosmeticItem_Border(int EntryPoint)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(59704);

	UWBP_CosmeticItem_Border_C_ExecuteUbergraph_WBP_CosmeticItem_Border_Params params {};
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_CosmeticItem_Border.WBP_CosmeticItem_Border_C.OnItemClicked__DelegateSignature
//		Flags  -> (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
//		class UPlatformInventoryItem*                      PlatformItem                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		class UWidget*                                     Widget                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWBP_CosmeticItem_Border_C::OnItemClicked__DelegateSignature(class UPlatformInventoryItem* PlatformItem, class UWidget* Widget)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(59703);

	UWBP_CosmeticItem_Border_C_OnItemClicked__DelegateSignature_Params params {};
	params.PlatformItem = PlatformItem;
	params.Widget = Widget;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_CosmeticItem_Border.WBP_CosmeticItem_Border_C.OnItemUnhovered__DelegateSignature
//		Flags  -> (Public, Delegate, BlueprintCallable, BlueprintEvent)
void UWBP_CosmeticItem_Border_C::OnItemUnhovered__DelegateSignature()
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(59702);

	UWBP_CosmeticItem_Border_C_OnItemUnhovered__DelegateSignature_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_CosmeticItem_Border.WBP_CosmeticItem_Border_C.OnItemHovered__DelegateSignature
//		Flags  -> (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
//		class UPlatformInventoryItem*                      PlatformItem                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWBP_CosmeticItem_Border_C::OnItemHovered__DelegateSignature(class UPlatformInventoryItem* PlatformItem)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(59701);

	UWBP_CosmeticItem_Border_C_OnItemHovered__DelegateSignature_Params params {};
	params.PlatformItem = PlatformItem;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
