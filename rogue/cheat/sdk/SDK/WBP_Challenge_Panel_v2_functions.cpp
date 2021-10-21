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
//		Name   -> Function WBP_Challenge_Panel_v2.WBP_Challenge_Panel_v2_C.NavigateConfirm
//		Flags  -> (Event, Protected, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
//		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
bool UWBP_Challenge_Panel_v2_C::NavigateConfirm()
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(82442);

	UWBP_Challenge_Panel_v2_C_NavigateConfirm_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_Challenge_Panel_v2.WBP_Challenge_Panel_v2_C.GetNavigationWidgets
//		Flags  -> (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
//		TArray<class UPUMG_Widget*>                        Return_Value                                               (Parm, OutParm, ContainsInstancedReference, HasGetValueTypeHash)
void UWBP_Challenge_Panel_v2_C::GetNavigationWidgets(TArray<class UPUMG_Widget*>* Return_Value)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(82441);

	UWBP_Challenge_Panel_v2_C_GetNavigationWidgets_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Return_Value != nullptr)
		*Return_Value = params.Return_Value;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_Challenge_Panel_v2.WBP_Challenge_Panel_v2_C.GetChallengeCards
//		Flags  -> (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
//		TArray<class UWBP_ChallengeEntry_Daily_Truncated_C*> Return_Value                                               (Parm, OutParm, ContainsInstancedReference, HasGetValueTypeHash)
void UWBP_Challenge_Panel_v2_C::GetChallengeCards(TArray<class UWBP_ChallengeEntry_Daily_Truncated_C*>* Return_Value)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(82440);

	UWBP_Challenge_Panel_v2_C_GetChallengeCards_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Return_Value != nullptr)
		*Return_Value = params.Return_Value;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_Challenge_Panel_v2.WBP_Challenge_Panel_v2_C.PreConstruct
//		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
//		bool                                               IsDesignTime                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UWBP_Challenge_Panel_v2_C::PreConstruct(bool IsDesignTime)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(82439);

	UWBP_Challenge_Panel_v2_C_PreConstruct_Params params {};
	params.IsDesignTime = IsDesignTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_Challenge_Panel_v2.WBP_Challenge_Panel_v2_C.InitializeWidget
//		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
//		class APUMG_HUD*                                   HUD                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWBP_Challenge_Panel_v2_C::InitializeWidget(class APUMG_HUD* HUD)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(82438);

	UWBP_Challenge_Panel_v2_C_InitializeWidget_Params params {};
	params.HUD = HUD;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_Challenge_Panel_v2.WBP_Challenge_Panel_v2_C.BndEvt__HitTarget_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature
//		Flags  -> (BlueprintEvent)
void UWBP_Challenge_Panel_v2_C::BndEvt__HitTarget_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature()
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(82437);

	UWBP_Challenge_Panel_v2_C_BndEvt__HitTarget_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_Challenge_Panel_v2.WBP_Challenge_Panel_v2_C.BndEvt__HitTarget_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature
//		Flags  -> (BlueprintEvent)
void UWBP_Challenge_Panel_v2_C::BndEvt__HitTarget_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature()
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(82436);

	UWBP_Challenge_Panel_v2_C_BndEvt__HitTarget_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_Challenge_Panel_v2.WBP_Challenge_Panel_v2_C.InitializeWidgetNavigation
//		Flags  -> (Event, Public, BlueprintEvent)
void UWBP_Challenge_Panel_v2_C::InitializeWidgetNavigation()
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(82435);

	UWBP_Challenge_Panel_v2_C_InitializeWidgetNavigation_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_Challenge_Panel_v2.WBP_Challenge_Panel_v2_C.PopulateChallenges
//		Flags  -> (BlueprintCallable, BlueprintEvent)
void UWBP_Challenge_Panel_v2_C::PopulateChallenges()
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(82434);

	UWBP_Challenge_Panel_v2_C_PopulateChallenges_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_Challenge_Panel_v2.WBP_Challenge_Panel_v2_C.BndEvt__HitTarget_K2Node_ComponentBoundEvent_5_OnButtonClickedEvent__DelegateSignature
//		Flags  -> (BlueprintEvent)
void UWBP_Challenge_Panel_v2_C::BndEvt__HitTarget_K2Node_ComponentBoundEvent_5_OnButtonClickedEvent__DelegateSignature()
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(82433);

	UWBP_Challenge_Panel_v2_C_BndEvt__HitTarget_K2Node_ComponentBoundEvent_5_OnButtonClickedEvent__DelegateSignature_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_Challenge_Panel_v2.WBP_Challenge_Panel_v2_C.GamepadHover
//		Flags  -> (Event, Public, BlueprintEvent)
void UWBP_Challenge_Panel_v2_C::GamepadHover()
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(82432);

	UWBP_Challenge_Panel_v2_C_GamepadHover_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_Challenge_Panel_v2.WBP_Challenge_Panel_v2_C.GamepadUnhover
//		Flags  -> (Event, Public, BlueprintEvent)
void UWBP_Challenge_Panel_v2_C::GamepadUnhover()
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(82431);

	UWBP_Challenge_Panel_v2_C_GamepadUnhover_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_Challenge_Panel_v2.WBP_Challenge_Panel_v2_C.Force Click
//		Flags  -> (BlueprintCallable, BlueprintEvent)
void UWBP_Challenge_Panel_v2_C::Force_Click()
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(82430);

	UWBP_Challenge_Panel_v2_C_Force_Click_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_Challenge_Panel_v2.WBP_Challenge_Panel_v2_C.Handle View State Changed
//		Flags  -> (BlueprintCallable, BlueprintEvent)
// Parameters:
//		struct FName                                       CurrentRoute                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		struct FName                                       PreviousRoute                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		PlatformUMG_EViewManagerLayer                      Layer                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWBP_Challenge_Panel_v2_C::Handle_View_State_Changed(const struct FName& CurrentRoute, const struct FName& PreviousRoute, PlatformUMG_EViewManagerLayer Layer)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(82429);

	UWBP_Challenge_Panel_v2_C_Handle_View_State_Changed_Params params {};
	params.CurrentRoute = CurrentRoute;
	params.PreviousRoute = PreviousRoute;
	params.Layer = Layer;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_Challenge_Panel_v2.WBP_Challenge_Panel_v2_C.ExecuteUbergraph_WBP_Challenge_Panel_v2
//		Flags  -> (Final, HasDefaults)
// Parameters:
//		int                                                EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWBP_Challenge_Panel_v2_C::ExecuteUbergraph_WBP_Challenge_Panel_v2(int EntryPoint)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(82428);

	UWBP_Challenge_Panel_v2_C_ExecuteUbergraph_WBP_Challenge_Panel_v2_Params params {};
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
