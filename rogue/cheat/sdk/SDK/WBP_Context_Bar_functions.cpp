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
//		Name   -> Function WBP_Context_Bar.WBP_Context_Bar_C.RefreshContextButtons
//		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
//		TArray<class UContextActionData*>                  ContextActions                                             (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, HasGetValueTypeHash)
//		bool                                               AlwaysShow                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
//		bool                                               ClearChildren                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UWBP_Context_Bar_C::RefreshContextButtons(TArray<class UContextActionData*>* ContextActions, bool AlwaysShow, bool ClearChildren)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(57528);

	UWBP_Context_Bar_C_RefreshContextButtons_Params params {};
	params.AlwaysShow = AlwaysShow;
	params.ClearChildren = ClearChildren;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (ContextActions != nullptr)
		*ContextActions = params.ContextActions;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_Context_Bar.WBP_Context_Bar_C.HandleInputStateChange
//		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
//		TEnumAsByte<PlatformGameFramework_EPGAME_INPUT_STATE> CurrentInputState                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWBP_Context_Bar_C::HandleInputStateChange(TEnumAsByte<PlatformGameFramework_EPGAME_INPUT_STATE> CurrentInputState)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(57527);

	UWBP_Context_Bar_C_HandleInputStateChange_Params params {};
	params.CurrentInputState = CurrentInputState;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_Context_Bar.WBP_Context_Bar_C.CanCloseOnLogout
//		Flags  -> (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
//		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
bool UWBP_Context_Bar_C::CanCloseOnLogout()
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(57526);

	UWBP_Context_Bar_C_CanCloseOnLogout_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_Context_Bar.WBP_Context_Bar_C.InitializeWidget
//		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
//		class APUMG_HUD*                                   HUD                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWBP_Context_Bar_C::InitializeWidget(class APUMG_HUD* HUD)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(57525);

	UWBP_Context_Bar_C_InitializeWidget_Params params {};
	params.HUD = HUD;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_Context_Bar.WBP_Context_Bar_C.UpdateContextActions
//		Flags  -> (Event, Public, HasOutParms, BlueprintEvent)
// Parameters:
//		TArray<class UContextActionData*>                  ContextActions                                             (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, HasGetValueTypeHash)
//		struct FName                                       CurrentRoute                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWBP_Context_Bar_C::UpdateContextActions(TArray<class UContextActionData*> ContextActions, const struct FName& CurrentRoute)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(57524);

	UWBP_Context_Bar_C_UpdateContextActions_Params params {};
	params.ContextActions = ContextActions;
	params.CurrentRoute = CurrentRoute;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_Context_Bar.WBP_Context_Bar_C.ExecuteUbergraph_WBP_Context_Bar
//		Flags  -> (Final, HasDefaults)
// Parameters:
//		int                                                EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWBP_Context_Bar_C::ExecuteUbergraph_WBP_Context_Bar(int EntryPoint)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(57523);

	UWBP_Context_Bar_C_ExecuteUbergraph_WBP_Context_Bar_Params params {};
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
