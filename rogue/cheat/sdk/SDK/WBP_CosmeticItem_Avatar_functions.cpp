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
//		Name   -> Function WBP_CosmeticItem_Avatar.WBP_CosmeticItem_Avatar_C.NavigateConfirm
//		Flags  -> (Event, Protected, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
//		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
bool UWBP_CosmeticItem_Avatar_C::NavigateConfirm()
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(86234);

	UWBP_CosmeticItem_Avatar_C_NavigateConfirm_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_CosmeticItem_Avatar.WBP_CosmeticItem_Avatar_C.SetAvatarItemSlot
//		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
void UWBP_CosmeticItem_Avatar_C::SetAvatarItemSlot()
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(86233);

	UWBP_CosmeticItem_Avatar_C_SetAvatarItemSlot_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_CosmeticItem_Avatar.WBP_CosmeticItem_Avatar_C.OnHoverSound
//		Flags  -> (BlueprintCallable, BlueprintEvent)
void UWBP_CosmeticItem_Avatar_C::OnHoverSound()
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(86232);

	UWBP_CosmeticItem_Avatar_C_OnHoverSound_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_CosmeticItem_Avatar.WBP_CosmeticItem_Avatar_C.OnClickSound
//		Flags  -> (BlueprintCallable, BlueprintEvent)
void UWBP_CosmeticItem_Avatar_C::OnClickSound()
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(86231);

	UWBP_CosmeticItem_Avatar_C_OnClickSound_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_CosmeticItem_Avatar.WBP_CosmeticItem_Avatar_C.Construct
//		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
void UWBP_CosmeticItem_Avatar_C::Construct()
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(86230);

	UWBP_CosmeticItem_Avatar_C_Construct_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_CosmeticItem_Avatar.WBP_CosmeticItem_Avatar_C.InitializeWidget
//		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
//		class APUMG_HUD*                                   HUD                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWBP_CosmeticItem_Avatar_C::InitializeWidget(class APUMG_HUD* HUD)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(86229);

	UWBP_CosmeticItem_Avatar_C_InitializeWidget_Params params {};
	params.HUD = HUD;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_CosmeticItem_Avatar.WBP_CosmeticItem_Avatar_C.PopulateSlot
//		Flags  -> (BlueprintCallable, BlueprintEvent)
void UWBP_CosmeticItem_Avatar_C::PopulateSlot()
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(86228);

	UWBP_CosmeticItem_Avatar_C_PopulateSlot_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_CosmeticItem_Avatar.WBP_CosmeticItem_Avatar_C.OnAvatarHover
//		Flags  -> (BlueprintCallable, BlueprintEvent)
// Parameters:
//		bool                                               IsGamepad                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UWBP_CosmeticItem_Avatar_C::OnAvatarHover(bool IsGamepad)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(86227);

	UWBP_CosmeticItem_Avatar_C_OnAvatarHover_Params params {};
	params.IsGamepad = IsGamepad;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_CosmeticItem_Avatar.WBP_CosmeticItem_Avatar_C.OnAvatarUnhover
//		Flags  -> (BlueprintCallable, BlueprintEvent)
void UWBP_CosmeticItem_Avatar_C::OnAvatarUnhover()
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(86226);

	UWBP_CosmeticItem_Avatar_C_OnAvatarUnhover_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_CosmeticItem_Avatar.WBP_CosmeticItem_Avatar_C.OnAvatarClick
//		Flags  -> (BlueprintCallable, BlueprintEvent)
void UWBP_CosmeticItem_Avatar_C::OnAvatarClick()
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(86225);

	UWBP_CosmeticItem_Avatar_C_OnAvatarClick_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_CosmeticItem_Avatar.WBP_CosmeticItem_Avatar_C.GamepadHover
//		Flags  -> (Event, Public, BlueprintEvent)
void UWBP_CosmeticItem_Avatar_C::GamepadHover()
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(86224);

	UWBP_CosmeticItem_Avatar_C_GamepadHover_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_CosmeticItem_Avatar.WBP_CosmeticItem_Avatar_C.GamepadUnhover
//		Flags  -> (Event, Public, BlueprintEvent)
void UWBP_CosmeticItem_Avatar_C::GamepadUnhover()
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(86223);

	UWBP_CosmeticItem_Avatar_C_GamepadUnhover_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_CosmeticItem_Avatar.WBP_CosmeticItem_Avatar_C.SetAvatarActive
//		Flags  -> (BlueprintCallable, BlueprintEvent)
// Parameters:
//		bool                                               IsActive                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UWBP_CosmeticItem_Avatar_C::SetAvatarActive(bool IsActive)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(86222);

	UWBP_CosmeticItem_Avatar_C_SetAvatarActive_Params params {};
	params.IsActive = IsActive;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_CosmeticItem_Avatar.WBP_CosmeticItem_Avatar_C.ExecuteUbergraph_WBP_CosmeticItem_Avatar
//		Flags  -> (Final, HasDefaults)
// Parameters:
//		int                                                EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWBP_CosmeticItem_Avatar_C::ExecuteUbergraph_WBP_CosmeticItem_Avatar(int EntryPoint)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(86221);

	UWBP_CosmeticItem_Avatar_C_ExecuteUbergraph_WBP_CosmeticItem_Avatar_Params params {};
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_CosmeticItem_Avatar.WBP_CosmeticItem_Avatar_C.OnItemClicked__DelegateSignature
//		Flags  -> (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
//		class UPlatformInventoryItem*                      PlatformItem                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		class UWidget*                                     Widget                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWBP_CosmeticItem_Avatar_C::OnItemClicked__DelegateSignature(class UPlatformInventoryItem* PlatformItem, class UWidget* Widget)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(86220);

	UWBP_CosmeticItem_Avatar_C_OnItemClicked__DelegateSignature_Params params {};
	params.PlatformItem = PlatformItem;
	params.Widget = Widget;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_CosmeticItem_Avatar.WBP_CosmeticItem_Avatar_C.OnItemUnhovered__DelegateSignature
//		Flags  -> (Public, Delegate, BlueprintCallable, BlueprintEvent)
void UWBP_CosmeticItem_Avatar_C::OnItemUnhovered__DelegateSignature()
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(86219);

	UWBP_CosmeticItem_Avatar_C_OnItemUnhovered__DelegateSignature_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_CosmeticItem_Avatar.WBP_CosmeticItem_Avatar_C.OnItemHovered__DelegateSignature
//		Flags  -> (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
//		class UPlatformInventoryItem*                      PlatformItem                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWBP_CosmeticItem_Avatar_C::OnItemHovered__DelegateSignature(class UPlatformInventoryItem* PlatformItem)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(86218);

	UWBP_CosmeticItem_Avatar_C_OnItemHovered__DelegateSignature_Params params {};
	params.PlatformItem = PlatformItem;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
