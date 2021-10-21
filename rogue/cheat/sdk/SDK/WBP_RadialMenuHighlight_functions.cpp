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
//		Name   -> Function WBP_RadialMenuHighlight.WBP_RadialMenuHighlight_C.SetDisabledAppearance
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
//		bool                                               IsDisabled                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UWBP_RadialMenuHighlight_C::SetDisabledAppearance(bool IsDisabled)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(56164);

	UWBP_RadialMenuHighlight_C_SetDisabledAppearance_Params params {};
	params.IsDisabled = IsDisabled;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_RadialMenuHighlight.WBP_RadialMenuHighlight_C.GetHighlightMat
//		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
//		class UMaterialInstanceDynamic*                    ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
class UMaterialInstanceDynamic* UWBP_RadialMenuHighlight_C::GetHighlightMat()
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(56163);

	UWBP_RadialMenuHighlight_C_GetHighlightMat_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_RadialMenuHighlight.WBP_RadialMenuHighlight_C.SetPosition
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
//		float                                              Position                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWBP_RadialMenuHighlight_C::SetPosition(float Position)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(56162);

	UWBP_RadialMenuHighlight_C_SetPosition_Params params {};
	params.Position = Position;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_RadialMenuHighlight.WBP_RadialMenuHighlight_C.SetWidth
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
//		float                                              Width                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWBP_RadialMenuHighlight_C::SetWidth(float Width)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(56161);

	UWBP_RadialMenuHighlight_C_SetWidth_Params params {};
	params.Width = Width;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
