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
//		Name   -> Function WBP_ItemInfoContainer_Description.WBP_ItemInfoContainer_Description_C.SetInfoFieldDataFromInventoryItem
//		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
//		class UPlatformInventoryItem*                      InventoryItem                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWBP_ItemInfoContainer_Description_C::SetInfoFieldDataFromInventoryItem(class UPlatformInventoryItem* InventoryItem)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(67693);

	UWBP_ItemInfoContainer_Description_C_SetInfoFieldDataFromInventoryItem_Params params {};
	params.InventoryItem = InventoryItem;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_ItemInfoContainer_Description.WBP_ItemInfoContainer_Description_C.SetAlignment
//		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
void UWBP_ItemInfoContainer_Description_C::SetAlignment()
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(67692);

	UWBP_ItemInfoContainer_Description_C_SetAlignment_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_ItemInfoContainer_Description.WBP_ItemInfoContainer_Description_C.SetItemRarityInfo
//		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
//		class UPlatformInventoryItem*                      CosmeticItem                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWBP_ItemInfoContainer_Description_C::SetItemRarityInfo(class UPlatformInventoryItem* CosmeticItem)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(67691);

	UWBP_ItemInfoContainer_Description_C_SetItemRarityInfo_Params params {};
	params.CosmeticItem = CosmeticItem;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_ItemInfoContainer_Description.WBP_ItemInfoContainer_Description_C.SetInfoFieldData
//		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
//		class UPUMG_StoreItem*                             StoreItem                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		int                                                Quantity                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWBP_ItemInfoContainer_Description_C::SetInfoFieldData(class UPUMG_StoreItem* StoreItem, int Quantity)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(67690);

	UWBP_ItemInfoContainer_Description_C_SetInfoFieldData_Params params {};
	params.StoreItem = StoreItem;
	params.Quantity = Quantity;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_ItemInfoContainer_Description.WBP_ItemInfoContainer_Description_C.PreConstruct
//		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
//		bool                                               IsDesignTime                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UWBP_ItemInfoContainer_Description_C::PreConstruct(bool IsDesignTime)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(67689);

	UWBP_ItemInfoContainer_Description_C_PreConstruct_Params params {};
	params.IsDesignTime = IsDesignTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_ItemInfoContainer_Description.WBP_ItemInfoContainer_Description_C.Construct
//		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
void UWBP_ItemInfoContainer_Description_C::Construct()
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(67688);

	UWBP_ItemInfoContainer_Description_C_Construct_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_ItemInfoContainer_Description.WBP_ItemInfoContainer_Description_C.ExecuteUbergraph_WBP_ItemInfoContainer_Description
//		Flags  -> (Final)
// Parameters:
//		int                                                EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWBP_ItemInfoContainer_Description_C::ExecuteUbergraph_WBP_ItemInfoContainer_Description(int EntryPoint)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(62573);

	UWBP_ItemInfoContainer_Description_C_ExecuteUbergraph_WBP_ItemInfoContainer_Description_Params params {};
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
