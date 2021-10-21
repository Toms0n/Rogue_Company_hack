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
//		Name   -> Function WBP_RadialMenuEntry_Divider_Highlight.WBP_RadialMenuEntry_Divider_Highlight_C.SetDisabledAppearance
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
//		bool                                               IsDisabled                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UWBP_RadialMenuEntry_Divider_Highlight_C::SetDisabledAppearance(bool IsDisabled)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(56318);

	UWBP_RadialMenuEntry_Divider_Highlight_C_SetDisabledAppearance_Params params {};
	params.IsDisabled = IsDisabled;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_RadialMenuEntry_Divider_Highlight.WBP_RadialMenuEntry_Divider_Highlight_C.OnInitialized
//		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
void UWBP_RadialMenuEntry_Divider_Highlight_C::OnInitialized()
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(56173);

	UWBP_RadialMenuEntry_Divider_Highlight_C_OnInitialized_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_RadialMenuEntry_Divider_Highlight.WBP_RadialMenuEntry_Divider_Highlight_C.ExecuteUbergraph_WBP_RadialMenuEntry_Divider_Highlight
//		Flags  -> (Final)
// Parameters:
//		int                                                EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWBP_RadialMenuEntry_Divider_Highlight_C::ExecuteUbergraph_WBP_RadialMenuEntry_Divider_Highlight(int EntryPoint)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(56172);

	UWBP_RadialMenuEntry_Divider_Highlight_C_ExecuteUbergraph_WBP_RadialMenuEntry_Divider_Highlight_Params params {};
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
