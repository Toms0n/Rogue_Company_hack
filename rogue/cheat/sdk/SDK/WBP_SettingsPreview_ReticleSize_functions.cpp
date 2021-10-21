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
//		Name   -> Function WBP_SettingsPreview_ReticleSize.WBP_SettingsPreview_ReticleSize_C.GetPreviewValue
//		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
//		int                                                Value                                                      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWBP_SettingsPreview_ReticleSize_C::GetPreviewValue(int* Value)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(45483);

	UWBP_SettingsPreview_ReticleSize_C_GetPreviewValue_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Value != nullptr)
		*Value = params.Value;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_SettingsPreview_ReticleSize.WBP_SettingsPreview_ReticleSize_C.PreConstruct
//		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
//		bool                                               IsDesignTime                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UWBP_SettingsPreview_ReticleSize_C::PreConstruct(bool IsDesignTime)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(45482);

	UWBP_SettingsPreview_ReticleSize_C_PreConstruct_Params params {};
	params.IsDesignTime = IsDesignTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_SettingsPreview_ReticleSize.WBP_SettingsPreview_ReticleSize_C.ExecuteUbergraph_WBP_SettingsPreview_ReticleSize
//		Flags  -> (Final)
// Parameters:
//		int                                                EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWBP_SettingsPreview_ReticleSize_C::ExecuteUbergraph_WBP_SettingsPreview_ReticleSize(int EntryPoint)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(45481);

	UWBP_SettingsPreview_ReticleSize_C_ExecuteUbergraph_WBP_SettingsPreview_ReticleSize_Params params {};
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
