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
//		Name   -> Function WBP_ListButton_Cosmetic.WBP_ListButton_Cosmetic_C.SetRewardFromDisplayData
//		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
//		struct FWeaponMasteryRewardDisplayData             Display_Data                                               (BlueprintVisible, BlueprintReadOnly, Parm)
void UWBP_ListButton_Cosmetic_C::SetRewardFromDisplayData(const struct FWeaponMasteryRewardDisplayData& Display_Data)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(69782);

	UWBP_ListButton_Cosmetic_C_SetRewardFromDisplayData_Params params {};
	params.Display_Data = Display_Data;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_ListButton_Cosmetic.WBP_ListButton_Cosmetic_C.SetRewardItem
//		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
//		struct FMasteryRewardData                          RewardItem                                                 (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
void UWBP_ListButton_Cosmetic_C::SetRewardItem(const struct FMasteryRewardData& RewardItem)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(69781);

	UWBP_ListButton_Cosmetic_C_SetRewardItem_Params params {};
	params.RewardItem = RewardItem;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_ListButton_Cosmetic.WBP_ListButton_Cosmetic_C.Construct
//		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
void UWBP_ListButton_Cosmetic_C::Construct()
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(69780);

	UWBP_ListButton_Cosmetic_C_Construct_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_ListButton_Cosmetic.WBP_ListButton_Cosmetic_C.BndEvt__HitTarget_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
//		Flags  -> (BlueprintEvent)
void UWBP_ListButton_Cosmetic_C::BndEvt__HitTarget_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature()
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(69779);

	UWBP_ListButton_Cosmetic_C_BndEvt__HitTarget_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_ListButton_Cosmetic.WBP_ListButton_Cosmetic_C.BndEvt__HitTarget_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature
//		Flags  -> (BlueprintEvent)
void UWBP_ListButton_Cosmetic_C::BndEvt__HitTarget_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature()
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(69778);

	UWBP_ListButton_Cosmetic_C_BndEvt__HitTarget_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_ListButton_Cosmetic.WBP_ListButton_Cosmetic_C.BndEvt__HitTarget_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature
//		Flags  -> (BlueprintEvent)
void UWBP_ListButton_Cosmetic_C::BndEvt__HitTarget_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature()
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(69777);

	UWBP_ListButton_Cosmetic_C_BndEvt__HitTarget_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_ListButton_Cosmetic.WBP_ListButton_Cosmetic_C.GamepadHover
//		Flags  -> (Event, Public, BlueprintEvent)
void UWBP_ListButton_Cosmetic_C::GamepadHover()
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(69776);

	UWBP_ListButton_Cosmetic_C_GamepadHover_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_ListButton_Cosmetic.WBP_ListButton_Cosmetic_C.GamepadUnhover
//		Flags  -> (Event, Public, BlueprintEvent)
void UWBP_ListButton_Cosmetic_C::GamepadUnhover()
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(69775);

	UWBP_ListButton_Cosmetic_C_GamepadUnhover_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_ListButton_Cosmetic.WBP_ListButton_Cosmetic_C.SetIsSelected
//		Flags  -> (BlueprintCallable, BlueprintEvent)
// Parameters:
//		bool                                               IsSelected                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UWBP_ListButton_Cosmetic_C::SetIsSelected(bool IsSelected)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(69774);

	UWBP_ListButton_Cosmetic_C_SetIsSelected_Params params {};
	params.IsSelected = IsSelected;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_ListButton_Cosmetic.WBP_ListButton_Cosmetic_C.ExecuteUbergraph_WBP_ListButton_Cosmetic
//		Flags  -> (Final, HasDefaults)
// Parameters:
//		int                                                EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWBP_ListButton_Cosmetic_C::ExecuteUbergraph_WBP_ListButton_Cosmetic(int EntryPoint)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(69773);

	UWBP_ListButton_Cosmetic_C_ExecuteUbergraph_WBP_ListButton_Cosmetic_Params params {};
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_ListButton_Cosmetic.WBP_ListButton_Cosmetic_C.OnRewardSelected__DelegateSignature
//		Flags  -> (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
//		struct FMasteryRewardData                          RewardItem                                                 (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
//		class UWBP_ListButton_Cosmetic_C*                  WidgetObject                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWBP_ListButton_Cosmetic_C::OnRewardSelected__DelegateSignature(const struct FMasteryRewardData& RewardItem, class UWBP_ListButton_Cosmetic_C* WidgetObject)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(69772);

	UWBP_ListButton_Cosmetic_C_OnRewardSelected__DelegateSignature_Params params {};
	params.RewardItem = RewardItem;
	params.WidgetObject = WidgetObject;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
