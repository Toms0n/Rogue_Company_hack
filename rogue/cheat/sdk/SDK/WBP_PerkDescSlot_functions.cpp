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
//		Name   -> Function WBP_PerkDescSlot.WBP_PerkDescSlot_C.Construct
//		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
void UWBP_PerkDescSlot_C::Construct()
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(79358);

	UWBP_PerkDescSlot_C_Construct_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_PerkDescSlot.WBP_PerkDescSlot_C.PopulateItemDescSlot
//		Flags  -> (BlueprintCallable, BlueprintEvent)
// Parameters:
//		class UKSItem*                                     KSItem                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWBP_PerkDescSlot_C::PopulateItemDescSlot(class UKSItem* KSItem)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(79357);

	UWBP_PerkDescSlot_C_PopulateItemDescSlot_Params params {};
	params.KSItem = KSItem;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_PerkDescSlot.WBP_PerkDescSlot_C.SetTextColors
//		Flags  -> (BlueprintCallable, BlueprintEvent)
// Parameters:
//		struct FLinearColor                                HeaderColor                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		struct FLinearColor                                HeadingColor                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		struct FLinearColor                                TextColor                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWBP_PerkDescSlot_C::SetTextColors(const struct FLinearColor& HeaderColor, const struct FLinearColor& HeadingColor, const struct FLinearColor& TextColor)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(79356);

	UWBP_PerkDescSlot_C_SetTextColors_Params params {};
	params.HeaderColor = HeaderColor;
	params.HeadingColor = HeadingColor;
	params.TextColor = TextColor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_PerkDescSlot.WBP_PerkDescSlot_C.PreConstruct
//		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
//		bool                                               IsDesignTime                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UWBP_PerkDescSlot_C::PreConstruct(bool IsDesignTime)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(79355);

	UWBP_PerkDescSlot_C_PreConstruct_Params params {};
	params.IsDesignTime = IsDesignTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_PerkDescSlot.WBP_PerkDescSlot_C.ExecuteUbergraph_WBP_PerkDescSlot
//		Flags  -> (Final, HasDefaults)
// Parameters:
//		int                                                EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWBP_PerkDescSlot_C::ExecuteUbergraph_WBP_PerkDescSlot(int EntryPoint)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(79354);

	UWBP_PerkDescSlot_C_ExecuteUbergraph_WBP_PerkDescSlot_Params params {};
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
