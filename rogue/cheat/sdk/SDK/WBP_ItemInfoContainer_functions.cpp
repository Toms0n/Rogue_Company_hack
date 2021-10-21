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
//		Name   -> Function WBP_ItemInfoContainer.WBP_ItemInfoContainer_C.SetDefault
//		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
//		struct FText                                       DefaultText                                                (BlueprintVisible, BlueprintReadOnly, Parm)
void UWBP_ItemInfoContainer_C::SetDefault(const struct FText& DefaultText)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(86580);

	UWBP_ItemInfoContainer_C_SetDefault_Params params {};
	params.DefaultText = DefaultText;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_ItemInfoContainer.WBP_ItemInfoContainer_C.SetAlignment
//		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
void UWBP_ItemInfoContainer_C::SetAlignment()
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(86579);

	UWBP_ItemInfoContainer_C_SetAlignment_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_ItemInfoContainer.WBP_ItemInfoContainer_C.SetItemRarityInfo
//		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
//		class UPlatformInventoryItem*                      CosmeticItem                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWBP_ItemInfoContainer_C::SetItemRarityInfo(class UPlatformInventoryItem* CosmeticItem)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(86578);

	UWBP_ItemInfoContainer_C_SetItemRarityInfo_Params params {};
	params.CosmeticItem = CosmeticItem;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_ItemInfoContainer.WBP_ItemInfoContainer_C.SetInfoFieldData
//		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
//		class UPlatformInventoryItem*                      CosmeticItem                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWBP_ItemInfoContainer_C::SetInfoFieldData(class UPlatformInventoryItem* CosmeticItem)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(86577);

	UWBP_ItemInfoContainer_C_SetInfoFieldData_Params params {};
	params.CosmeticItem = CosmeticItem;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_ItemInfoContainer.WBP_ItemInfoContainer_C.PreConstruct
//		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
//		bool                                               IsDesignTime                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UWBP_ItemInfoContainer_C::PreConstruct(bool IsDesignTime)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(86576);

	UWBP_ItemInfoContainer_C_PreConstruct_Params params {};
	params.IsDesignTime = IsDesignTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_ItemInfoContainer.WBP_ItemInfoContainer_C.Construct
//		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
void UWBP_ItemInfoContainer_C::Construct()
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(86575);

	UWBP_ItemInfoContainer_C_Construct_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_ItemInfoContainer.WBP_ItemInfoContainer_C.ExecuteUbergraph_WBP_ItemInfoContainer
//		Flags  -> (Final)
// Parameters:
//		int                                                EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWBP_ItemInfoContainer_C::ExecuteUbergraph_WBP_ItemInfoContainer(int EntryPoint)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(86574);

	UWBP_ItemInfoContainer_C_ExecuteUbergraph_WBP_ItemInfoContainer_Params params {};
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
