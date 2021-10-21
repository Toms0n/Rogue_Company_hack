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
//		Name   -> Function WBP_RewardListEntry.WBP_RewardListEntry_C.HandleGamepadAutoSelect
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
void UWBP_RewardListEntry_C::HandleGamepadAutoSelect()
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(81482);

	UWBP_RewardListEntry_C_HandleGamepadAutoSelect_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_RewardListEntry.WBP_RewardListEntry_C.GamepadHover
//		Flags  -> (Event, Public, BlueprintEvent)
void UWBP_RewardListEntry_C::GamepadHover()
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(81481);

	UWBP_RewardListEntry_C_GamepadHover_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_RewardListEntry.WBP_RewardListEntry_C.GamepadUnhover
//		Flags  -> (Event, Public, BlueprintEvent)
void UWBP_RewardListEntry_C::GamepadUnhover()
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(81480);

	UWBP_RewardListEntry_C_GamepadUnhover_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_RewardListEntry.WBP_RewardListEntry_C.BndEvt__HitTest_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature
//		Flags  -> (BlueprintEvent)
void UWBP_RewardListEntry_C::BndEvt__HitTest_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature()
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(81479);

	UWBP_RewardListEntry_C_BndEvt__HitTest_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_RewardListEntry.WBP_RewardListEntry_C.PlaySelected
//		Flags  -> (BlueprintCallable, BlueprintEvent)
void UWBP_RewardListEntry_C::PlaySelected()
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(81478);

	UWBP_RewardListEntry_C_PlaySelected_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_RewardListEntry.WBP_RewardListEntry_C.PlayUnselected
//		Flags  -> (BlueprintCallable, BlueprintEvent)
void UWBP_RewardListEntry_C::PlayUnselected()
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(81477);

	UWBP_RewardListEntry_C_PlayUnselected_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_RewardListEntry.WBP_RewardListEntry_C.PreConstruct
//		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
//		bool                                               IsDesignTime                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UWBP_RewardListEntry_C::PreConstruct(bool IsDesignTime)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(81476);

	UWBP_RewardListEntry_C_PreConstruct_Params params {};
	params.IsDesignTime = IsDesignTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_RewardListEntry.WBP_RewardListEntry_C.PopulateSlotWithStoreItem
//		Flags  -> (BlueprintCallable, BlueprintEvent)
// Parameters:
//		class UPUMG_StoreItem*                             StoreItem                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWBP_RewardListEntry_C::PopulateSlotWithStoreItem(class UPUMG_StoreItem* StoreItem)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(81475);

	UWBP_RewardListEntry_C_PopulateSlotWithStoreItem_Params params {};
	params.StoreItem = StoreItem;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_RewardListEntry.WBP_RewardListEntry_C.PopulateSlotWithActivityInfo
//		Flags  -> (BlueprintCallable, BlueprintEvent)
// Parameters:
//		class UKSActivityInstance*                         ActivityInstance                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		struct FActivityTier                               ActivityTier                                               (BlueprintVisible, BlueprintReadOnly, Parm)
void UWBP_RewardListEntry_C::PopulateSlotWithActivityInfo(class UKSActivityInstance* ActivityInstance, const struct FActivityTier& ActivityTier)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(81474);

	UWBP_RewardListEntry_C_PopulateSlotWithActivityInfo_Params params {};
	params.ActivityInstance = ActivityInstance;
	params.ActivityTier = ActivityTier;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_RewardListEntry.WBP_RewardListEntry_C.BndEvt__HitTest_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature
//		Flags  -> (BlueprintEvent)
void UWBP_RewardListEntry_C::BndEvt__HitTest_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature()
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(81473);

	UWBP_RewardListEntry_C_BndEvt__HitTest_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_RewardListEntry.WBP_RewardListEntry_C.BndEvt__HitTest_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature
//		Flags  -> (BlueprintEvent)
void UWBP_RewardListEntry_C::BndEvt__HitTest_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature()
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(81472);

	UWBP_RewardListEntry_C_BndEvt__HitTest_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_RewardListEntry.WBP_RewardListEntry_C.ExecuteUbergraph_WBP_RewardListEntry
//		Flags  -> (Final, HasDefaults)
// Parameters:
//		int                                                EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWBP_RewardListEntry_C::ExecuteUbergraph_WBP_RewardListEntry(int EntryPoint)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(81471);

	UWBP_RewardListEntry_C_ExecuteUbergraph_WBP_RewardListEntry_Params params {};
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_RewardListEntry.WBP_RewardListEntry_C.OnBtnUnhovered__DelegateSignature
//		Flags  -> (Public, Delegate, BlueprintCallable, BlueprintEvent)
void UWBP_RewardListEntry_C::OnBtnUnhovered__DelegateSignature()
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(81470);

	UWBP_RewardListEntry_C_OnBtnUnhovered__DelegateSignature_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_RewardListEntry.WBP_RewardListEntry_C.OnBtnHovered__DelegateSignature
//		Flags  -> (Public, Delegate, BlueprintCallable, BlueprintEvent)
void UWBP_RewardListEntry_C::OnBtnHovered__DelegateSignature()
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(81469);

	UWBP_RewardListEntry_C_OnBtnHovered__DelegateSignature_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_RewardListEntry.WBP_RewardListEntry_C.OnBtnClicked__DelegateSignature
//		Flags  -> (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
//		class UWBP_RewardListEntry_C*                      Widget                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		struct FCosmeticSlotDetails                        RewardSlotDetails                                          (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)
//		class UPUMG_StoreItem*                             StoreItem                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWBP_RewardListEntry_C::OnBtnClicked__DelegateSignature(class UWBP_RewardListEntry_C* Widget, const struct FCosmeticSlotDetails& RewardSlotDetails, class UPUMG_StoreItem* StoreItem)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(81468);

	UWBP_RewardListEntry_C_OnBtnClicked__DelegateSignature_Params params {};
	params.Widget = Widget;
	params.RewardSlotDetails = RewardSlotDetails;
	params.StoreItem = StoreItem;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
