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
//		Name   -> Function WBP_Guided_Tutorial_Card.WBP_Guided_Tutorial_Card_C.SetCardData
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
//		struct FGuidedCalloutCardData                      CardData                                                   (BlueprintVisible, BlueprintReadOnly, Parm)
void UWBP_Guided_Tutorial_Card_C::SetCardData(const struct FGuidedCalloutCardData& CardData)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(61475);

	UWBP_Guided_Tutorial_Card_C_SetCardData_Params params {};
	params.CardData = CardData;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_Guided_Tutorial_Card.WBP_Guided_Tutorial_Card_C.PreConstruct
//		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
//		bool                                               IsDesignTime                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UWBP_Guided_Tutorial_Card_C::PreConstruct(bool IsDesignTime)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(61474);

	UWBP_Guided_Tutorial_Card_C_PreConstruct_Params params {};
	params.IsDesignTime = IsDesignTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_Guided_Tutorial_Card.WBP_Guided_Tutorial_Card_C.ExecuteUbergraph_WBP_Guided_Tutorial_Card
//		Flags  -> (Final, HasDefaults)
// Parameters:
//		int                                                EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWBP_Guided_Tutorial_Card_C::ExecuteUbergraph_WBP_Guided_Tutorial_Card(int EntryPoint)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(61473);

	UWBP_Guided_Tutorial_Card_C_ExecuteUbergraph_WBP_Guided_Tutorial_Card_Params params {};
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
