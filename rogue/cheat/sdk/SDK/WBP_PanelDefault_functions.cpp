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
//		Name   -> Function WBP_PanelDefault.WBP_PanelDefault_C.SetContentPadding
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
//		struct FMargin                                     ContentPadding                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UWBP_PanelDefault_C::SetContentPadding(const struct FMargin& ContentPadding)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(61955);

	UWBP_PanelDefault_C_SetContentPadding_Params params {};
	params.ContentPadding = ContentPadding;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_PanelDefault.WBP_PanelDefault_C.SetPanelColor
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
//		struct FLinearColor                                PanelColor                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWBP_PanelDefault_C::SetPanelColor(const struct FLinearColor& PanelColor)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(61954);

	UWBP_PanelDefault_C_SetPanelColor_Params params {};
	params.PanelColor = PanelColor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_PanelDefault.WBP_PanelDefault_C.PreConstruct
//		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
//		bool                                               IsDesignTime                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UWBP_PanelDefault_C::PreConstruct(bool IsDesignTime)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(61953);

	UWBP_PanelDefault_C_PreConstruct_Params params {};
	params.IsDesignTime = IsDesignTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_PanelDefault.WBP_PanelDefault_C.Construct
//		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
void UWBP_PanelDefault_C::Construct()
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(61952);

	UWBP_PanelDefault_C_Construct_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_PanelDefault.WBP_PanelDefault_C.ExecuteUbergraph_WBP_PanelDefault
//		Flags  -> (Final)
// Parameters:
//		int                                                EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWBP_PanelDefault_C::ExecuteUbergraph_WBP_PanelDefault(int EntryPoint)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(61951);

	UWBP_PanelDefault_C_ExecuteUbergraph_WBP_PanelDefault_Params params {};
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
