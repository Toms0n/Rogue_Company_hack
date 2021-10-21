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
//		Name   -> Function WBP_StoreItemInterior.WBP_StoreItemInterior_C.GetStoreIconForSize
//		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
//		class UPlatformInventoryItem*                      InventoryItem                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		struct FSoftObjectPath                             ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash)
struct FSoftObjectPath UWBP_StoreItemInterior_C::GetStoreIconForSize(class UPlatformInventoryItem* InventoryItem)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(79795);

	UWBP_StoreItemInterior_C_GetStoreIconForSize_Params params {};
	params.InventoryItem = InventoryItem;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_StoreItemInterior.WBP_StoreItemInterior_C.SetRarityDisplay
//		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
//		class UPlatformInventoryItem*                      InventoryItem                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWBP_StoreItemInterior_C::SetRarityDisplay(class UPlatformInventoryItem* InventoryItem)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(79794);

	UWBP_StoreItemInterior_C_SetRarityDisplay_Params params {};
	params.InventoryItem = InventoryItem;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_StoreItemInterior.WBP_StoreItemInterior_C.SetStoreItem
//		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
//		class UKSStorePanelItem*                           StoreItem                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWBP_StoreItemInterior_C::SetStoreItem(class UKSStorePanelItem* StoreItem)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(79793);

	UWBP_StoreItemInterior_C_SetStoreItem_Params params {};
	params.StoreItem = StoreItem;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_StoreItemInterior.WBP_StoreItemInterior_C.PreConstruct
//		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
//		bool                                               IsDesignTime                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UWBP_StoreItemInterior_C::PreConstruct(bool IsDesignTime)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(79792);

	UWBP_StoreItemInterior_C_PreConstruct_Params params {};
	params.IsDesignTime = IsDesignTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_StoreItemInterior.WBP_StoreItemInterior_C.OnParentHovered
//		Flags  -> (BlueprintCallable, BlueprintEvent)
void UWBP_StoreItemInterior_C::OnParentHovered()
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(79791);

	UWBP_StoreItemInterior_C_OnParentHovered_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_StoreItemInterior.WBP_StoreItemInterior_C.OnParentUnhovered
//		Flags  -> (BlueprintCallable, BlueprintEvent)
void UWBP_StoreItemInterior_C::OnParentUnhovered()
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(79790);

	UWBP_StoreItemInterior_C_OnParentUnhovered_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_StoreItemInterior.WBP_StoreItemInterior_C.ExecuteUbergraph_WBP_StoreItemInterior
//		Flags  -> (Final)
// Parameters:
//		int                                                EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWBP_StoreItemInterior_C::ExecuteUbergraph_WBP_StoreItemInterior(int EntryPoint)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(79789);

	UWBP_StoreItemInterior_C_ExecuteUbergraph_WBP_StoreItemInterior_Params params {};
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
