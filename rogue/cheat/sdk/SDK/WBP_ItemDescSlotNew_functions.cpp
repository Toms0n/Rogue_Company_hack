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
//		Name   -> Function WBP_ItemDescSlotNew.WBP_ItemDescSlotNew_C.Construct
//		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
void UWBP_ItemDescSlotNew_C::Construct()
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(60890);

	UWBP_ItemDescSlotNew_C_Construct_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_ItemDescSlotNew.WBP_ItemDescSlotNew_C.PopulateItemDescSlot
//		Flags  -> (BlueprintCallable, BlueprintEvent)
// Parameters:
//		class UKSItem*                                     KSItem                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWBP_ItemDescSlotNew_C::PopulateItemDescSlot(class UKSItem* KSItem)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(60889);

	UWBP_ItemDescSlotNew_C_PopulateItemDescSlot_Params params {};
	params.KSItem = KSItem;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_ItemDescSlotNew.WBP_ItemDescSlotNew_C.SetTextColors
//		Flags  -> (BlueprintCallable, BlueprintEvent)
// Parameters:
//		struct FLinearColor                                HeaderColor                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		struct FLinearColor                                HeadingColor                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		struct FLinearColor                                TextColor                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWBP_ItemDescSlotNew_C::SetTextColors(const struct FLinearColor& HeaderColor, const struct FLinearColor& HeadingColor, const struct FLinearColor& TextColor)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(60888);

	UWBP_ItemDescSlotNew_C_SetTextColors_Params params {};
	params.HeaderColor = HeaderColor;
	params.HeadingColor = HeadingColor;
	params.TextColor = TextColor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_ItemDescSlotNew.WBP_ItemDescSlotNew_C.PreConstruct
//		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
//		bool                                               IsDesignTime                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UWBP_ItemDescSlotNew_C::PreConstruct(bool IsDesignTime)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(60887);

	UWBP_ItemDescSlotNew_C_PreConstruct_Params params {};
	params.IsDesignTime = IsDesignTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_ItemDescSlotNew.WBP_ItemDescSlotNew_C.ExecuteUbergraph_WBP_ItemDescSlotNew
//		Flags  -> (Final, HasDefaults)
// Parameters:
//		int                                                EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWBP_ItemDescSlotNew_C::ExecuteUbergraph_WBP_ItemDescSlotNew(int EntryPoint)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(60886);

	UWBP_ItemDescSlotNew_C_ExecuteUbergraph_WBP_ItemDescSlotNew_Params params {};
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
