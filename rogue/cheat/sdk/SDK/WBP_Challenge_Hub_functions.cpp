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
//		Name   -> Function WBP_Challenge_Hub.WBP_Challenge_Hub_C.GetCurrentViewWidget
//		Flags  -> (Event, Protected, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
//		class UPUMG_Widget*                                ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
class UPUMG_Widget* UWBP_Challenge_Hub_C::GetCurrentViewWidget()
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(88415);

	UWBP_Challenge_Hub_C_GetCurrentViewWidget_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_Challenge_Hub.WBP_Challenge_Hub_C.GetAllViews
//		Flags  -> (Event, Protected, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
//		TArray<class UPUMG_Widget*>                        ReturnValue                                                (Parm, OutParm, ReturnParm, ContainsInstancedReference, HasGetValueTypeHash)
TArray<class UPUMG_Widget*> UWBP_Challenge_Hub_C::GetAllViews()
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(88414);

	UWBP_Challenge_Hub_C_GetAllViews_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_Challenge_Hub.WBP_Challenge_Hub_C.Set Context Bar Prompts
//		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
void UWBP_Challenge_Hub_C::Set_Context_Bar_Prompts()
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(88413);

	UWBP_Challenge_Hub_C_Set_Context_Bar_Prompts_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_Challenge_Hub.WBP_Challenge_Hub_C.NavigateBack
//		Flags  -> (Event, Protected, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
//		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
bool UWBP_Challenge_Hub_C::NavigateBack()
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(88412);

	UWBP_Challenge_Hub_C_NavigateBack_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_Challenge_Hub.WBP_Challenge_Hub_C.Bind Vertical Tab Group
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
void UWBP_Challenge_Hub_C::Bind_Vertical_Tab_Group()
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(88411);

	UWBP_Challenge_Hub_C_Bind_Vertical_Tab_Group_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_Challenge_Hub.WBP_Challenge_Hub_C.InitializeWidget
//		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
//		class APUMG_HUD*                                   HUD                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWBP_Challenge_Hub_C::InitializeWidget(class APUMG_HUD* HUD)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(88410);

	UWBP_Challenge_Hub_C_InitializeWidget_Params params {};
	params.HUD = HUD;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_Challenge_Hub.WBP_Challenge_Hub_C.InitializeWidgetNavigation
//		Flags  -> (Event, Public, BlueprintEvent)
void UWBP_Challenge_Hub_C::InitializeWidgetNavigation()
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(88409);

	UWBP_Challenge_Hub_C_InitializeWidgetNavigation_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_Challenge_Hub.WBP_Challenge_Hub_C.OnShown
//		Flags  -> (Event, Public, BlueprintEvent)
void UWBP_Challenge_Hub_C::OnShown()
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(88408);

	UWBP_Challenge_Hub_C_OnShown_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_Challenge_Hub.WBP_Challenge_Hub_C.OnBackPrompt
//		Flags  -> (BlueprintCallable, BlueprintEvent)
void UWBP_Challenge_Hub_C::OnBackPrompt()
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(88407);

	UWBP_Challenge_Hub_C_OnBackPrompt_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_Challenge_Hub.WBP_Challenge_Hub_C.AddView
//		Flags  -> (Event, Protected, BlueprintEvent)
// Parameters:
//		struct FName                                       ViewName                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		struct FOverlayTabViewRow                          ViewInfo                                                   (BlueprintVisible, BlueprintReadOnly, Parm)
void UWBP_Challenge_Hub_C::AddView(const struct FName& ViewName, const struct FOverlayTabViewRow& ViewInfo)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(88406);

	UWBP_Challenge_Hub_C_AddView_Params params {};
	params.ViewName = ViewName;
	params.ViewInfo = ViewInfo;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_Challenge_Hub.WBP_Challenge_Hub_C.ClearAllViews
//		Flags  -> (Event, Protected, BlueprintEvent)
void UWBP_Challenge_Hub_C::ClearAllViews()
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(88405);

	UWBP_Challenge_Hub_C_ClearAllViews_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_Challenge_Hub.WBP_Challenge_Hub_C.PreConstruct
//		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
//		bool                                               IsDesignTime                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UWBP_Challenge_Hub_C::PreConstruct(bool IsDesignTime)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(88404);

	UWBP_Challenge_Hub_C_PreConstruct_Params params {};
	params.IsDesignTime = IsDesignTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_Challenge_Hub.WBP_Challenge_Hub_C.SelectViewAndShow
//		Flags  -> (Event, Protected, BlueprintEvent)
// Parameters:
//		struct FName                                       ViewName                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWBP_Challenge_Hub_C::SelectViewAndShow(const struct FName& ViewName)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(88403);

	UWBP_Challenge_Hub_C_SelectViewAndShow_Params params {};
	params.ViewName = ViewName;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_Challenge_Hub.WBP_Challenge_Hub_C.OnTabsFocused
//		Flags  -> (Event, Protected, BlueprintEvent)
void UWBP_Challenge_Hub_C::OnTabsFocused()
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(88402);

	UWBP_Challenge_Hub_C_OnTabsFocused_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_Challenge_Hub.WBP_Challenge_Hub_C.OnViewFocused
//		Flags  -> (Event, Protected, BlueprintEvent)
void UWBP_Challenge_Hub_C::OnViewFocused()
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(88401);

	UWBP_Challenge_Hub_C_OnViewFocused_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_Challenge_Hub.WBP_Challenge_Hub_C.ExecuteUbergraph_WBP_Challenge_Hub
//		Flags  -> (Final, HasDefaults)
// Parameters:
//		int                                                EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWBP_Challenge_Hub_C::ExecuteUbergraph_WBP_Challenge_Hub(int EntryPoint)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(88400);

	UWBP_Challenge_Hub_C_ExecuteUbergraph_WBP_Challenge_Hub_Params params {};
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
