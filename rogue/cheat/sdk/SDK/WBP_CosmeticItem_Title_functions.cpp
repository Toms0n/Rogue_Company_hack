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
//		Name   -> Function WBP_CosmeticItem_Title.WBP_CosmeticItem_Title_C.SetTitleItemSlot
//		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
void UWBP_CosmeticItem_Title_C::SetTitleItemSlot()
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(64903);

	UWBP_CosmeticItem_Title_C_SetTitleItemSlot_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_CosmeticItem_Title.WBP_CosmeticItem_Title_C.NavigateConfirm
//		Flags  -> (Event, Protected, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
//		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
bool UWBP_CosmeticItem_Title_C::NavigateConfirm()
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(64902);

	UWBP_CosmeticItem_Title_C_NavigateConfirm_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_CosmeticItem_Title.WBP_CosmeticItem_Title_C.OnHoverSound
//		Flags  -> (BlueprintCallable, BlueprintEvent)
void UWBP_CosmeticItem_Title_C::OnHoverSound()
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(64901);

	UWBP_CosmeticItem_Title_C_OnHoverSound_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_CosmeticItem_Title.WBP_CosmeticItem_Title_C.OnClickSound
//		Flags  -> (BlueprintCallable, BlueprintEvent)
void UWBP_CosmeticItem_Title_C::OnClickSound()
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(64900);

	UWBP_CosmeticItem_Title_C_OnClickSound_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_CosmeticItem_Title.WBP_CosmeticItem_Title_C.Construct
//		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
void UWBP_CosmeticItem_Title_C::Construct()
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(64899);

	UWBP_CosmeticItem_Title_C_Construct_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_CosmeticItem_Title.WBP_CosmeticItem_Title_C.PopulateSlot
//		Flags  -> (BlueprintCallable, BlueprintEvent)
void UWBP_CosmeticItem_Title_C::PopulateSlot()
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(64898);

	UWBP_CosmeticItem_Title_C_PopulateSlot_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_CosmeticItem_Title.WBP_CosmeticItem_Title_C.OnTitleHover
//		Flags  -> (BlueprintCallable, BlueprintEvent)
// Parameters:
//		bool                                               IsGamepad                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UWBP_CosmeticItem_Title_C::OnTitleHover(bool IsGamepad)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(64897);

	UWBP_CosmeticItem_Title_C_OnTitleHover_Params params {};
	params.IsGamepad = IsGamepad;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_CosmeticItem_Title.WBP_CosmeticItem_Title_C.OnTitleUnhover
//		Flags  -> (BlueprintCallable, BlueprintEvent)
void UWBP_CosmeticItem_Title_C::OnTitleUnhover()
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(64896);

	UWBP_CosmeticItem_Title_C_OnTitleUnhover_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_CosmeticItem_Title.WBP_CosmeticItem_Title_C.OnTitleClick
//		Flags  -> (BlueprintCallable, BlueprintEvent)
void UWBP_CosmeticItem_Title_C::OnTitleClick()
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(64895);

	UWBP_CosmeticItem_Title_C_OnTitleClick_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_CosmeticItem_Title.WBP_CosmeticItem_Title_C.GamepadHover
//		Flags  -> (Event, Public, BlueprintEvent)
void UWBP_CosmeticItem_Title_C::GamepadHover()
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(64894);

	UWBP_CosmeticItem_Title_C_GamepadHover_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_CosmeticItem_Title.WBP_CosmeticItem_Title_C.GamepadUnhover
//		Flags  -> (Event, Public, BlueprintEvent)
void UWBP_CosmeticItem_Title_C::GamepadUnhover()
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(64893);

	UWBP_CosmeticItem_Title_C_GamepadUnhover_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_CosmeticItem_Title.WBP_CosmeticItem_Title_C.SetTitleActive
//		Flags  -> (BlueprintCallable, BlueprintEvent)
// Parameters:
//		bool                                               IsActive                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UWBP_CosmeticItem_Title_C::SetTitleActive(bool IsActive)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(64892);

	UWBP_CosmeticItem_Title_C_SetTitleActive_Params params {};
	params.IsActive = IsActive;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_CosmeticItem_Title.WBP_CosmeticItem_Title_C.InitializeWidget
//		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
//		class APUMG_HUD*                                   HUD                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWBP_CosmeticItem_Title_C::InitializeWidget(class APUMG_HUD* HUD)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(64891);

	UWBP_CosmeticItem_Title_C_InitializeWidget_Params params {};
	params.HUD = HUD;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_CosmeticItem_Title.WBP_CosmeticItem_Title_C.ExecuteUbergraph_WBP_CosmeticItem_Title
//		Flags  -> (Final, HasDefaults)
// Parameters:
//		int                                                EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWBP_CosmeticItem_Title_C::ExecuteUbergraph_WBP_CosmeticItem_Title(int EntryPoint)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(64890);

	UWBP_CosmeticItem_Title_C_ExecuteUbergraph_WBP_CosmeticItem_Title_Params params {};
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_CosmeticItem_Title.WBP_CosmeticItem_Title_C.OnItemClicked__DelegateSignature
//		Flags  -> (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
//		class UPlatformInventoryItem*                      PlatformItem                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		class UWidget*                                     Widget                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWBP_CosmeticItem_Title_C::OnItemClicked__DelegateSignature(class UPlatformInventoryItem* PlatformItem, class UWidget* Widget)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(64889);

	UWBP_CosmeticItem_Title_C_OnItemClicked__DelegateSignature_Params params {};
	params.PlatformItem = PlatformItem;
	params.Widget = Widget;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_CosmeticItem_Title.WBP_CosmeticItem_Title_C.OnItemUnhovered__DelegateSignature
//		Flags  -> (Public, Delegate, BlueprintCallable, BlueprintEvent)
void UWBP_CosmeticItem_Title_C::OnItemUnhovered__DelegateSignature()
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(64888);

	UWBP_CosmeticItem_Title_C_OnItemUnhovered__DelegateSignature_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_CosmeticItem_Title.WBP_CosmeticItem_Title_C.OnItemHovered__DelegateSignature
//		Flags  -> (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
//		class UPlatformInventoryItem*                      PlatformItem                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWBP_CosmeticItem_Title_C::OnItemHovered__DelegateSignature(class UPlatformInventoryItem* PlatformItem)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(64887);

	UWBP_CosmeticItem_Title_C_OnItemHovered__DelegateSignature_Params params {};
	params.PlatformItem = PlatformItem;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
