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
//		Name   -> Function WBP_LoginRewardItem.WBP_LoginRewardItem_C.SetRarity
//		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
//		struct FGameplayTagContainer                       GameplayTag                                                (BlueprintVisible, BlueprintReadOnly, Parm)
void UWBP_LoginRewardItem_C::SetRarity(const struct FGameplayTagContainer& GameplayTag)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(80174);

	UWBP_LoginRewardItem_C_SetRarity_Params params {};
	params.GameplayTag = GameplayTag;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_LoginRewardItem.WBP_LoginRewardItem_C.SetColor
//		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
//		struct FLinearColor                                RarityColor                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		struct FLinearColor                                RarityColorLight                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWBP_LoginRewardItem_C::SetColor(const struct FLinearColor& RarityColor, const struct FLinearColor& RarityColorLight)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(80173);

	UWBP_LoginRewardItem_C_SetColor_Params params {};
	params.RarityColor = RarityColor;
	params.RarityColorLight = RarityColorLight;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_LoginRewardItem.WBP_LoginRewardItem_C.SetCustomRarity
//		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
//		class UDataTable*                                  DataTable                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		class UPUMG_StoreItem*                             StoreItem                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWBP_LoginRewardItem_C::SetCustomRarity(class UDataTable* DataTable, class UPUMG_StoreItem* StoreItem)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(80172);

	UWBP_LoginRewardItem_C_SetCustomRarity_Params params {};
	params.DataTable = DataTable;
	params.StoreItem = StoreItem;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_LoginRewardItem.WBP_LoginRewardItem_C.GetCustomRarity
//		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
//		class UPUMG_StoreItem*                             StoreItem                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		bool                                               UseCustomRarity                                            (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
//		class UDataTable*                                  DataTable                                                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWBP_LoginRewardItem_C::GetCustomRarity(class UPUMG_StoreItem* StoreItem, bool* UseCustomRarity, class UDataTable** DataTable)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(80171);

	UWBP_LoginRewardItem_C_GetCustomRarity_Params params {};
	params.StoreItem = StoreItem;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (UseCustomRarity != nullptr)
		*UseCustomRarity = params.UseCustomRarity;
	if (DataTable != nullptr)
		*DataTable = params.DataTable;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_LoginRewardItem.WBP_LoginRewardItem_C.SetRewardItemVisualState
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
//		KillstreakUINew_ERewardState                       RewardState                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWBP_LoginRewardItem_C::SetRewardItemVisualState(KillstreakUINew_ERewardState RewardState)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(80170);

	UWBP_LoginRewardItem_C_SetRewardItemVisualState_Params params {};
	params.RewardState = RewardState;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_LoginRewardItem.WBP_LoginRewardItem_C.PopulateRewardItem
//		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
//		struct FLoginRewardItem                            RewardItem                                                 (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
void UWBP_LoginRewardItem_C::PopulateRewardItem(const struct FLoginRewardItem& RewardItem)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(80169);

	UWBP_LoginRewardItem_C_PopulateRewardItem_Params params {};
	params.RewardItem = RewardItem;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_LoginRewardItem.WBP_LoginRewardItem_C.SetRarityColorByInventoryItem
//		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
//		class UPlatformInventoryItem*                      InventoryItem                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWBP_LoginRewardItem_C::SetRarityColorByInventoryItem(class UPlatformInventoryItem* InventoryItem)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(80168);

	UWBP_LoginRewardItem_C_SetRarityColorByInventoryItem_Params params {};
	params.InventoryItem = InventoryItem;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_LoginRewardItem.WBP_LoginRewardItem_C.PlayClaimAnimation
//		Flags  -> (BlueprintCallable, BlueprintEvent)
void UWBP_LoginRewardItem_C::PlayClaimAnimation()
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(80167);

	UWBP_LoginRewardItem_C_PlayClaimAnimation_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_LoginRewardItem.WBP_LoginRewardItem_C.Construct
//		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
void UWBP_LoginRewardItem_C::Construct()
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(80166);

	UWBP_LoginRewardItem_C_Construct_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_LoginRewardItem.WBP_LoginRewardItem_C.HandleClaimAnimFinished
//		Flags  -> (BlueprintCallable, BlueprintEvent)
void UWBP_LoginRewardItem_C::HandleClaimAnimFinished()
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(80165);

	UWBP_LoginRewardItem_C_HandleClaimAnimFinished_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_LoginRewardItem.WBP_LoginRewardItem_C.BndEvt__HitTarget_K2Node_ComponentBoundEvent_3_OnButtonHoverEvent__DelegateSignature
//		Flags  -> (BlueprintEvent)
void UWBP_LoginRewardItem_C::BndEvt__HitTarget_K2Node_ComponentBoundEvent_3_OnButtonHoverEvent__DelegateSignature()
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(80164);

	UWBP_LoginRewardItem_C_BndEvt__HitTarget_K2Node_ComponentBoundEvent_3_OnButtonHoverEvent__DelegateSignature_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_LoginRewardItem.WBP_LoginRewardItem_C.BndEvt__HitTarget_K2Node_ComponentBoundEvent_4_OnButtonHoverEvent__DelegateSignature
//		Flags  -> (BlueprintEvent)
void UWBP_LoginRewardItem_C::BndEvt__HitTarget_K2Node_ComponentBoundEvent_4_OnButtonHoverEvent__DelegateSignature()
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(80163);

	UWBP_LoginRewardItem_C_BndEvt__HitTarget_K2Node_ComponentBoundEvent_4_OnButtonHoverEvent__DelegateSignature_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_LoginRewardItem.WBP_LoginRewardItem_C.GamepadHover
//		Flags  -> (Event, Public, BlueprintEvent)
void UWBP_LoginRewardItem_C::GamepadHover()
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(80162);

	UWBP_LoginRewardItem_C_GamepadHover_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_LoginRewardItem.WBP_LoginRewardItem_C.GamepadUnhover
//		Flags  -> (Event, Public, BlueprintEvent)
void UWBP_LoginRewardItem_C::GamepadUnhover()
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(80161);

	UWBP_LoginRewardItem_C_GamepadUnhover_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_LoginRewardItem.WBP_LoginRewardItem_C.BndEvt__HitTarget_K2Node_ComponentBoundEvent_5_OnButtonClickedEvent__DelegateSignature
//		Flags  -> (BlueprintEvent)
void UWBP_LoginRewardItem_C::BndEvt__HitTarget_K2Node_ComponentBoundEvent_5_OnButtonClickedEvent__DelegateSignature()
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(80160);

	UWBP_LoginRewardItem_C_BndEvt__HitTarget_K2Node_ComponentBoundEvent_5_OnButtonClickedEvent__DelegateSignature_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_LoginRewardItem.WBP_LoginRewardItem_C.ExecuteUbergraph_WBP_LoginRewardItem
//		Flags  -> (Final, HasDefaults)
// Parameters:
//		int                                                EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWBP_LoginRewardItem_C::ExecuteUbergraph_WBP_LoginRewardItem(int EntryPoint)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(80159);

	UWBP_LoginRewardItem_C_ExecuteUbergraph_WBP_LoginRewardItem_Params params {};
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_LoginRewardItem.WBP_LoginRewardItem_C.OnRewardClicked__DelegateSignature
//		Flags  -> (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
//		struct FLoginRewardItem                            RewardItem                                                 (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
void UWBP_LoginRewardItem_C::OnRewardClicked__DelegateSignature(const struct FLoginRewardItem& RewardItem)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(80158);

	UWBP_LoginRewardItem_C_OnRewardClicked__DelegateSignature_Params params {};
	params.RewardItem = RewardItem;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_LoginRewardItem.WBP_LoginRewardItem_C.OnRewardUnhovered__DelegateSignature
//		Flags  -> (Public, Delegate, BlueprintCallable, BlueprintEvent)
void UWBP_LoginRewardItem_C::OnRewardUnhovered__DelegateSignature()
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(80157);

	UWBP_LoginRewardItem_C_OnRewardUnhovered__DelegateSignature_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_LoginRewardItem.WBP_LoginRewardItem_C.OnRewardHovered__DelegateSignature
//		Flags  -> (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
//		class UWBP_LoginRewardItem_C*                      Widget                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWBP_LoginRewardItem_C::OnRewardHovered__DelegateSignature(class UWBP_LoginRewardItem_C* Widget)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(80156);

	UWBP_LoginRewardItem_C_OnRewardHovered__DelegateSignature_Params params {};
	params.Widget = Widget;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_LoginRewardItem.WBP_LoginRewardItem_C.ClaimAnimationComplete__DelegateSignature
//		Flags  -> (Public, Delegate, BlueprintCallable, BlueprintEvent)
void UWBP_LoginRewardItem_C::ClaimAnimationComplete__DelegateSignature()
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(80155);

	UWBP_LoginRewardItem_C_ClaimAnimationComplete__DelegateSignature_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
