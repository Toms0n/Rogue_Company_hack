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
//		Name   -> Function WBP_TopNavBar.WBP_TopNavBar_C.UpdateArmoryNewIndicator
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
void UWBP_TopNavBar_C::UpdateArmoryNewIndicator()
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(58209);

	UWBP_TopNavBar_C_UpdateArmoryNewIndicator_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_TopNavBar.WBP_TopNavBar_C.Check Experiments
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
void UWBP_TopNavBar_C::Check_Experiments()
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(58208);

	UWBP_TopNavBar_C_Check_Experiments_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_TopNavBar.WBP_TopNavBar_C.UpdateBattlePassTabVisibility
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
void UWBP_TopNavBar_C::UpdateBattlePassTabVisibility()
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(58207);

	UWBP_TopNavBar_C_UpdateBattlePassTabVisibility_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_TopNavBar.WBP_TopNavBar_C.OnHasNewStoreItems
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
//		bool                                               HasNew                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UWBP_TopNavBar_C::OnHasNewStoreItems(bool HasNew)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(58206);

	UWBP_TopNavBar_C_OnHasNewStoreItems_Params params {};
	params.HasNew = HasNew;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_TopNavBar.WBP_TopNavBar_C.HandleViewRouteChanged
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
//		struct FName                                       CurrentRoute                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		struct FName                                       NextRoute                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		PlatformUMG_EViewManagerLayer                      Layer                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWBP_TopNavBar_C::HandleViewRouteChanged(const struct FName& CurrentRoute, const struct FName& NextRoute, PlatformUMG_EViewManagerLayer Layer)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(58205);

	UWBP_TopNavBar_C_HandleViewRouteChanged_Params params {};
	params.CurrentRoute = CurrentRoute;
	params.NextRoute = NextRoute;
	params.Layer = Layer;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_TopNavBar.WBP_TopNavBar_C.HandleInputStateChanged
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
//		TEnumAsByte<PlatformGameFramework_EPGAME_INPUT_STATE> InputState                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWBP_TopNavBar_C::HandleInputStateChanged(TEnumAsByte<PlatformGameFramework_EPGAME_INPUT_STATE> InputState)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(58204);

	UWBP_TopNavBar_C_HandleInputStateChanged_Params params {};
	params.InputState = InputState;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_TopNavBar.WBP_TopNavBar_C.HandleNavRight
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
void UWBP_TopNavBar_C::HandleNavRight()
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(58203);

	UWBP_TopNavBar_C_HandleNavRight_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_TopNavBar.WBP_TopNavBar_C.HandleNavLeft
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
void UWBP_TopNavBar_C::HandleNavLeft()
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(58202);

	UWBP_TopNavBar_C_HandleNavLeft_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_TopNavBar.WBP_TopNavBar_C.InitializeNavButtons
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
void UWBP_TopNavBar_C::InitializeNavButtons()
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(58201);

	UWBP_TopNavBar_C_InitializeNavButtons_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_TopNavBar.WBP_TopNavBar_C.InitializeTickAnimations
//		Flags  -> (Event, Protected, BlueprintEvent)
void UWBP_TopNavBar_C::InitializeTickAnimations()
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(58200);

	UWBP_TopNavBar_C_InitializeTickAnimations_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_TopNavBar.WBP_TopNavBar_C.ShowTopBarFinished
//		Flags  -> (BlueprintCallable, BlueprintEvent)
void UWBP_TopNavBar_C::ShowTopBarFinished()
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(58199);

	UWBP_TopNavBar_C_ShowTopBarFinished_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_TopNavBar.WBP_TopNavBar_C.ShowTopBarAnim
//		Flags  -> (BlueprintCallable, BlueprintEvent)
// Parameters:
//		float                                              ElapsedTime                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		float                                              ElapsedAlpha                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWBP_TopNavBar_C::ShowTopBarAnim(float ElapsedTime, float ElapsedAlpha)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(58198);

	UWBP_TopNavBar_C_ShowTopBarAnim_Params params {};
	params.ElapsedTime = ElapsedTime;
	params.ElapsedAlpha = ElapsedAlpha;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_TopNavBar.WBP_TopNavBar_C.StartShowAnim
//		Flags  -> (BlueprintCallable, BlueprintEvent)
void UWBP_TopNavBar_C::StartShowAnim()
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(58197);

	UWBP_TopNavBar_C_StartShowAnim_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_TopNavBar.WBP_TopNavBar_C.InitHideAnimation
//		Flags  -> (BlueprintCallable, BlueprintEvent)
void UWBP_TopNavBar_C::InitHideAnimation()
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(58196);

	UWBP_TopNavBar_C_InitHideAnimation_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_TopNavBar.WBP_TopNavBar_C.HideTopBarFinished
//		Flags  -> (BlueprintCallable, BlueprintEvent)
void UWBP_TopNavBar_C::HideTopBarFinished()
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(58195);

	UWBP_TopNavBar_C_HideTopBarFinished_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_TopNavBar.WBP_TopNavBar_C.HideTopBarAnim
//		Flags  -> (BlueprintCallable, BlueprintEvent)
// Parameters:
//		float                                              ElapsedTime                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		float                                              ElapsedAlpha                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWBP_TopNavBar_C::HideTopBarAnim(float ElapsedTime, float ElapsedAlpha)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(58194);

	UWBP_TopNavBar_C_HideTopBarAnim_Params params {};
	params.ElapsedTime = ElapsedTime;
	params.ElapsedAlpha = ElapsedAlpha;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_TopNavBar.WBP_TopNavBar_C.StartHideAnim
//		Flags  -> (BlueprintCallable, BlueprintEvent)
void UWBP_TopNavBar_C::StartHideAnim()
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(58193);

	UWBP_TopNavBar_C_StartHideAnim_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_TopNavBar.WBP_TopNavBar_C.DisableTopBar
//		Flags  -> (BlueprintCallable, BlueprintEvent)
// Parameters:
//		bool                                               IsDisable                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UWBP_TopNavBar_C::DisableTopBar(bool IsDisable)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(58192);

	UWBP_TopNavBar_C_DisableTopBar_Params params {};
	params.IsDisable = IsDisable;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_TopNavBar.WBP_TopNavBar_C.InitializeWidget
//		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
//		class APUMG_HUD*                                   HUD                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWBP_TopNavBar_C::InitializeWidget(class APUMG_HUD* HUD)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(58191);

	UWBP_TopNavBar_C_InitializeWidget_Params params {};
	params.HUD = HUD;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_TopNavBar.WBP_TopNavBar_C.Construct
//		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
void UWBP_TopNavBar_C::Construct()
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(58190);

	UWBP_TopNavBar_C_Construct_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_TopNavBar.WBP_TopNavBar_C.StartShowSequence
//		Flags  -> (Event, Public, BlueprintEvent)
// Parameters:
//		struct FName                                       FromRoute                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		struct FName                                       ToRoute                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWBP_TopNavBar_C::StartShowSequence(const struct FName& FromRoute, const struct FName& ToRoute)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(58189);

	UWBP_TopNavBar_C_StartShowSequence_Params params {};
	params.FromRoute = FromRoute;
	params.ToRoute = ToRoute;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_TopNavBar.WBP_TopNavBar_C.StartHideSequence
//		Flags  -> (Event, Public, BlueprintEvent)
// Parameters:
//		struct FName                                       FromRoute                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		struct FName                                       ToRoute                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWBP_TopNavBar_C::StartHideSequence(const struct FName& FromRoute, const struct FName& ToRoute)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(58188);

	UWBP_TopNavBar_C_StartHideSequence_Params params {};
	params.FromRoute = FromRoute;
	params.ToRoute = ToRoute;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_TopNavBar.WBP_TopNavBar_C.Handle Login State Changed
//		Flags  -> (BlueprintCallable, BlueprintEvent)
// Parameters:
//		PlatformUMG_EPUMG_LoginState                       LoginState                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWBP_TopNavBar_C::Handle_Login_State_Changed(PlatformUMG_EPUMG_LoginState LoginState)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(58187);

	UWBP_TopNavBar_C_Handle_Login_State_Changed_Params params {};
	params.LoginState = LoginState;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_TopNavBar.WBP_TopNavBar_C.OnLocalSettingSaved_Event_1
//		Flags  -> (BlueprintCallable, BlueprintEvent)
// Parameters:
//		struct FName                                       SettingName                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWBP_TopNavBar_C::OnLocalSettingSaved_Event_1(const struct FName& SettingName)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(58186);

	UWBP_TopNavBar_C_OnLocalSettingSaved_Event_1_Params params {};
	params.SettingName = SettingName;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_TopNavBar.WBP_TopNavBar_C.OnPromptCycleAction
//		Flags  -> (BlueprintCallable, BlueprintEvent)
// Parameters:
//		bool                                               bNext                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UWBP_TopNavBar_C::OnPromptCycleAction(bool bNext)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(58185);

	UWBP_TopNavBar_C_OnPromptCycleAction_Params params {};
	params.bNext = bNext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_TopNavBar.WBP_TopNavBar_C.ExecuteUbergraph_WBP_TopNavBar
//		Flags  -> (Final)
// Parameters:
//		int                                                EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWBP_TopNavBar_C::ExecuteUbergraph_WBP_TopNavBar(int EntryPoint)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(58184);

	UWBP_TopNavBar_C_ExecuteUbergraph_WBP_TopNavBar_Params params {};
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
