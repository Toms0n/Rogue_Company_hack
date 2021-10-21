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
//		Name   -> Function WBP_CosmeticItem_Banner.WBP_CosmeticItem_Banner_C.NavigateConfirm
//		Flags  -> (Event, Protected, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
//		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
bool UWBP_CosmeticItem_Banner_C::NavigateConfirm()
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(86263);

	UWBP_CosmeticItem_Banner_C_NavigateConfirm_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_CosmeticItem_Banner.WBP_CosmeticItem_Banner_C.SetBannerItemSlot
//		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
void UWBP_CosmeticItem_Banner_C::SetBannerItemSlot()
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(86262);

	UWBP_CosmeticItem_Banner_C_SetBannerItemSlot_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_CosmeticItem_Banner.WBP_CosmeticItem_Banner_C.OnHoverSound
//		Flags  -> (BlueprintCallable, BlueprintEvent)
void UWBP_CosmeticItem_Banner_C::OnHoverSound()
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(86261);

	UWBP_CosmeticItem_Banner_C_OnHoverSound_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_CosmeticItem_Banner.WBP_CosmeticItem_Banner_C.OnClickSound
//		Flags  -> (BlueprintCallable, BlueprintEvent)
void UWBP_CosmeticItem_Banner_C::OnClickSound()
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(86260);

	UWBP_CosmeticItem_Banner_C_OnClickSound_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_CosmeticItem_Banner.WBP_CosmeticItem_Banner_C.Construct
//		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
void UWBP_CosmeticItem_Banner_C::Construct()
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(86259);

	UWBP_CosmeticItem_Banner_C_Construct_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_CosmeticItem_Banner.WBP_CosmeticItem_Banner_C.PopulateSlot
//		Flags  -> (BlueprintCallable, BlueprintEvent)
void UWBP_CosmeticItem_Banner_C::PopulateSlot()
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(86258);

	UWBP_CosmeticItem_Banner_C_PopulateSlot_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_CosmeticItem_Banner.WBP_CosmeticItem_Banner_C.OnBannerHover
//		Flags  -> (BlueprintCallable, BlueprintEvent)
// Parameters:
//		bool                                               IsGamepad                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UWBP_CosmeticItem_Banner_C::OnBannerHover(bool IsGamepad)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(86257);

	UWBP_CosmeticItem_Banner_C_OnBannerHover_Params params {};
	params.IsGamepad = IsGamepad;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_CosmeticItem_Banner.WBP_CosmeticItem_Banner_C.OnBannerUnhover
//		Flags  -> (BlueprintCallable, BlueprintEvent)
void UWBP_CosmeticItem_Banner_C::OnBannerUnhover()
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(86256);

	UWBP_CosmeticItem_Banner_C_OnBannerUnhover_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_CosmeticItem_Banner.WBP_CosmeticItem_Banner_C.OnBannerClick
//		Flags  -> (BlueprintCallable, BlueprintEvent)
void UWBP_CosmeticItem_Banner_C::OnBannerClick()
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(86255);

	UWBP_CosmeticItem_Banner_C_OnBannerClick_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_CosmeticItem_Banner.WBP_CosmeticItem_Banner_C.GamepadHover
//		Flags  -> (Event, Public, BlueprintEvent)
void UWBP_CosmeticItem_Banner_C::GamepadHover()
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(86254);

	UWBP_CosmeticItem_Banner_C_GamepadHover_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_CosmeticItem_Banner.WBP_CosmeticItem_Banner_C.GamepadUnhover
//		Flags  -> (Event, Public, BlueprintEvent)
void UWBP_CosmeticItem_Banner_C::GamepadUnhover()
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(86253);

	UWBP_CosmeticItem_Banner_C_GamepadUnhover_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_CosmeticItem_Banner.WBP_CosmeticItem_Banner_C.SetBannerActive
//		Flags  -> (BlueprintCallable, BlueprintEvent)
// Parameters:
//		bool                                               IsActive                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UWBP_CosmeticItem_Banner_C::SetBannerActive(bool IsActive)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(86252);

	UWBP_CosmeticItem_Banner_C_SetBannerActive_Params params {};
	params.IsActive = IsActive;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_CosmeticItem_Banner.WBP_CosmeticItem_Banner_C.InitializeWidget
//		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
//		class APUMG_HUD*                                   HUD                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWBP_CosmeticItem_Banner_C::InitializeWidget(class APUMG_HUD* HUD)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(86251);

	UWBP_CosmeticItem_Banner_C_InitializeWidget_Params params {};
	params.HUD = HUD;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_CosmeticItem_Banner.WBP_CosmeticItem_Banner_C.ExecuteUbergraph_WBP_CosmeticItem_Banner
//		Flags  -> (Final, HasDefaults)
// Parameters:
//		int                                                EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWBP_CosmeticItem_Banner_C::ExecuteUbergraph_WBP_CosmeticItem_Banner(int EntryPoint)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(86250);

	UWBP_CosmeticItem_Banner_C_ExecuteUbergraph_WBP_CosmeticItem_Banner_Params params {};
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_CosmeticItem_Banner.WBP_CosmeticItem_Banner_C.OnItemClicked__DelegateSignature
//		Flags  -> (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
//		class UPlatformInventoryItem*                      PlatformItem                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		class UWidget*                                     Widget                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWBP_CosmeticItem_Banner_C::OnItemClicked__DelegateSignature(class UPlatformInventoryItem* PlatformItem, class UWidget* Widget)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(86249);

	UWBP_CosmeticItem_Banner_C_OnItemClicked__DelegateSignature_Params params {};
	params.PlatformItem = PlatformItem;
	params.Widget = Widget;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_CosmeticItem_Banner.WBP_CosmeticItem_Banner_C.OnItemUnhovered__DelegateSignature
//		Flags  -> (Public, Delegate, BlueprintCallable, BlueprintEvent)
void UWBP_CosmeticItem_Banner_C::OnItemUnhovered__DelegateSignature()
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(86248);

	UWBP_CosmeticItem_Banner_C_OnItemUnhovered__DelegateSignature_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_CosmeticItem_Banner.WBP_CosmeticItem_Banner_C.OnItemHovered__DelegateSignature
//		Flags  -> (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
//		class UPlatformInventoryItem*                      PlatformItem                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWBP_CosmeticItem_Banner_C::OnItemHovered__DelegateSignature(class UPlatformInventoryItem* PlatformItem)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(86247);

	UWBP_CosmeticItem_Banner_C_OnItemHovered__DelegateSignature_Params params {};
	params.PlatformItem = PlatformItem;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
