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
//		Name   -> Function BP_BrightLobbyHUD.BP_BrightLobbyHUD_C.Is in EOM View State
//		Flags  -> (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
//		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
bool ABP_BrightLobbyHUD_C::Is_in_EOM_View_State()
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(55462);

	ABP_BrightLobbyHUD_C_Is_in_EOM_View_State_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function BP_BrightLobbyHUD.BP_BrightLobbyHUD_C.Show Lobby Radial Select
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
void ABP_BrightLobbyHUD_C::Show_Lobby_Radial_Select()
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(55461);

	ABP_BrightLobbyHUD_C_Show_Lobby_Radial_Select_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function BP_BrightLobbyHUD.BP_BrightLobbyHUD_C.GetDefaultPlayerAccountItem
//		Flags  -> (Event, Protected, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
//		Killstreak_EPlayerAccountSlot                      ItemSlot                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		class UKSItem*                                     ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
class UKSItem* ABP_BrightLobbyHUD_C::GetDefaultPlayerAccountItem(Killstreak_EPlayerAccountSlot ItemSlot)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(55460);

	ABP_BrightLobbyHUD_C_GetDefaultPlayerAccountItem_Params params {};
	params.ItemSlot = ItemSlot;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function BP_BrightLobbyHUD.BP_BrightLobbyHUD_C.SetupQueueEvents
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
void ABP_BrightLobbyHUD_C::SetupQueueEvents()
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(55459);

	ABP_BrightLobbyHUD_C_SetupQueueEvents_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function BP_BrightLobbyHUD.BP_BrightLobbyHUD_C.CallRemoveTopViewRoute
//		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
//		bool                                               ForceTransition                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
//		bool                                               ViewChanged                                                (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
void ABP_BrightLobbyHUD_C::CallRemoveTopViewRoute(bool ForceTransition, bool* ViewChanged)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(55458);

	ABP_BrightLobbyHUD_C_CallRemoveTopViewRoute_Params params {};
	params.ForceTransition = ForceTransition;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (ViewChanged != nullptr)
		*ViewChanged = params.ViewChanged;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function BP_BrightLobbyHUD.BP_BrightLobbyHUD_C.CallAddViewRoute
//		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
//		struct FName                                       RouteName                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		bool                                               ClearRouteStack                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
//		bool                                               ForceTransition                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
//		bool                                               ViewChanged                                                (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
void ABP_BrightLobbyHUD_C::CallAddViewRoute(const struct FName& RouteName, bool ClearRouteStack, bool ForceTransition, bool* ViewChanged)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(55457);

	ABP_BrightLobbyHUD_C_CallAddViewRoute_Params params {};
	params.RouteName = RouteName;
	params.ClearRouteStack = ClearRouteStack;
	params.ForceTransition = ForceTransition;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (ViewChanged != nullptr)
		*ViewChanged = params.ViewChanged;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function BP_BrightLobbyHUD.BP_BrightLobbyHUD_C.SafeFrameSettingApplied
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
void ABP_BrightLobbyHUD_C::SafeFrameSettingApplied()
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(55456);

	ABP_BrightLobbyHUD_C_SafeFrameSettingApplied_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function BP_BrightLobbyHUD.BP_BrightLobbyHUD_C.BindSettingCallbacks
//		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
void ABP_BrightLobbyHUD_C::BindSettingCallbacks()
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(55455);

	ABP_BrightLobbyHUD_C_BindSettingCallbacks_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function BP_BrightLobbyHUD.BP_BrightLobbyHUD_C.InternalAddViewRoute
//		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
//		struct FName                                       RouteName                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		bool                                               ClearRouteStack                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
//		bool                                               ForceTransition                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
//		class UObject*                                     Data                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		bool                                               ViewChanged                                                (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
void ABP_BrightLobbyHUD_C::InternalAddViewRoute(const struct FName& RouteName, bool ClearRouteStack, bool ForceTransition, class UObject* Data, bool* ViewChanged)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(55454);

	ABP_BrightLobbyHUD_C_InternalAddViewRoute_Params params {};
	params.RouteName = RouteName;
	params.ClearRouteStack = ClearRouteStack;
	params.ForceTransition = ForceTransition;
	params.Data = Data;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (ViewChanged != nullptr)
		*ViewChanged = params.ViewChanged;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function BP_BrightLobbyHUD.BP_BrightLobbyHUD_C.OnAcquisition
//		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
//		class UKSAcquisition*                              Acquisition                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_BrightLobbyHUD_C::OnAcquisition(class UKSAcquisition* Acquisition)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(55453);

	ABP_BrightLobbyHUD_C_OnAcquisition_Params params {};
	params.Acquisition = Acquisition;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function BP_BrightLobbyHUD.BP_BrightLobbyHUD_C.GetContextBarWidget
//		Flags  -> (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
//		class UKSContextBarWidget*                         ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
class UKSContextBarWidget* ABP_BrightLobbyHUD_C::GetContextBarWidget()
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(55452);

	ABP_BrightLobbyHUD_C_GetContextBarWidget_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function BP_BrightLobbyHUD.BP_BrightLobbyHUD_C.SwapViewRoute
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
//		struct FName                                       RouteName                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		struct FName                                       SwapTargetRoute                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		bool                                               ForceTransition                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void ABP_BrightLobbyHUD_C::SwapViewRoute(const struct FName& RouteName, const struct FName& SwapTargetRoute, bool ForceTransition)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(55451);

	ABP_BrightLobbyHUD_C_SwapViewRoute_Params params {};
	params.RouteName = RouteName;
	params.SwapTargetRoute = SwapTargetRoute;
	params.ForceTransition = ForceTransition;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function BP_BrightLobbyHUD.BP_BrightLobbyHUD_C.Remove Top View Route
//		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
//		bool                                               ForceTransition                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
//		bool                                               ViewChanged                                                (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
void ABP_BrightLobbyHUD_C::Remove_Top_View_Route(bool ForceTransition, bool* ViewChanged)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(55450);

	ABP_BrightLobbyHUD_C_Remove_Top_View_Route_Params params {};
	params.ForceTransition = ForceTransition;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (ViewChanged != nullptr)
		*ViewChanged = params.ViewChanged;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function BP_BrightLobbyHUD.BP_BrightLobbyHUD_C.Add View Route
//		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
//		struct FName                                       RouteName                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		bool                                               ClearRouteStack                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
//		bool                                               ForceTransition                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
//		bool                                               ViewChanged                                                (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
void ABP_BrightLobbyHUD_C::Add_View_Route(const struct FName& RouteName, bool ClearRouteStack, bool ForceTransition, bool* ViewChanged)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(55449);

	ABP_BrightLobbyHUD_C_Add_View_Route_Params params {};
	params.RouteName = RouteName;
	params.ClearRouteStack = ClearRouteStack;
	params.ForceTransition = ForceTransition;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (ViewChanged != nullptr)
		*ViewChanged = params.ViewChanged;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function BP_BrightLobbyHUD.BP_BrightLobbyHUD_C.HandeEOMResults
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
//		bool                                               ForceTransition                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void ABP_BrightLobbyHUD_C::HandeEOMResults(bool ForceTransition)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(55448);

	ABP_BrightLobbyHUD_C_HandeEOMResults_Params params {};
	params.ForceTransition = ForceTransition;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function BP_BrightLobbyHUD.BP_BrightLobbyHUD_C.GetCurrentTransitionRoute
//		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
//		struct FName                                       Current_Route                                              (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_BrightLobbyHUD_C::GetCurrentTransitionRoute(struct FName* Current_Route)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(55447);

	ABP_BrightLobbyHUD_C_GetCurrentTransitionRoute_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Current_Route != nullptr)
		*Current_Route = params.Current_Route;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function BP_BrightLobbyHUD.BP_BrightLobbyHUD_C.GetLobbyWidget
//		Flags  -> (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
//		class UKSLobbyWidget*                              ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
class UKSLobbyWidget* ABP_BrightLobbyHUD_C::GetLobbyWidget()
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(55446);

	ABP_BrightLobbyHUD_C_GetLobbyWidget_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function BP_BrightLobbyHUD.BP_BrightLobbyHUD_C.Focus Home Screen
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
void ABP_BrightLobbyHUD_C::Focus_Home_Screen()
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(55445);

	ABP_BrightLobbyHUD_C_Focus_Home_Screen_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function BP_BrightLobbyHUD.BP_BrightLobbyHUD_C.Get Current View Route
//		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
//		struct FName                                       Current_Route                                              (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_BrightLobbyHUD_C::Get_Current_View_Route(struct FName* Current_Route)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(55444);

	ABP_BrightLobbyHUD_C_Get_Current_View_Route_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Current_Route != nullptr)
		*Current_Route = params.Current_Route;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function BP_BrightLobbyHUD.BP_BrightLobbyHUD_C.Focus Sticky Loadout Panel
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
void ABP_BrightLobbyHUD_C::Focus_Sticky_Loadout_Panel()
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(55443);

	ABP_BrightLobbyHUD_C_Focus_Sticky_Loadout_Panel_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function BP_BrightLobbyHUD.BP_BrightLobbyHUD_C.Get Current Loadout Slot
//		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
//		unsigned char                                      Current_Loadout_Slot                                       (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_BrightLobbyHUD_C::Get_Current_Loadout_Slot(unsigned char* Current_Loadout_Slot)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(55442);

	ABP_BrightLobbyHUD_C_Get_Current_Loadout_Slot_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Current_Loadout_Slot != nullptr)
		*Current_Loadout_Slot = params.Current_Loadout_Slot;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function BP_BrightLobbyHUD.BP_BrightLobbyHUD_C.Cache Current Loadout Slot
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
//		unsigned char                                      Loadout_Slot_Edit                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_BrightLobbyHUD_C::Cache_Current_Loadout_Slot(unsigned char Loadout_Slot_Edit)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(55441);

	ABP_BrightLobbyHUD_C_Cache_Current_Loadout_Slot_Params params {};
	params.Loadout_Slot_Edit = Loadout_Slot_Edit;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function BP_BrightLobbyHUD.BP_BrightLobbyHUD_C.TempBootstrapFunctionality
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
void ABP_BrightLobbyHUD_C::TempBootstrapFunctionality()
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(55440);

	ABP_BrightLobbyHUD_C_TempBootstrapFunctionality_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function BP_BrightLobbyHUD.BP_BrightLobbyHUD_C.FallbackLogoutCleanup
//		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
void ABP_BrightLobbyHUD_C::FallbackLogoutCleanup()
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(55439);

	ABP_BrightLobbyHUD_C_FallbackLogoutCleanup_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function BP_BrightLobbyHUD.BP_BrightLobbyHUD_C.GetFocusableWidgetContainers
//		Flags  -> (Event, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
//		TArray<class UPanelWidget*>                        ReturnValue                                                (Parm, OutParm, ReturnParm, ContainsInstancedReference, HasGetValueTypeHash)
TArray<class UPanelWidget*> ABP_BrightLobbyHUD_C::GetFocusableWidgetContainers()
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(55438);

	ABP_BrightLobbyHUD_C_GetFocusableWidgetContainers_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function BP_BrightLobbyHUD.BP_BrightLobbyHUD_C.Handle Login State Change
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
//		PlatformUMG_EPUMG_LoginState                       Login_State                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_BrightLobbyHUD_C::Handle_Login_State_Change(PlatformUMG_EPUMG_LoginState Login_State)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(55437);

	ABP_BrightLobbyHUD_C_Handle_Login_State_Change_Params params {};
	params.Login_State = Login_State;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function BP_BrightLobbyHUD.BP_BrightLobbyHUD_C.GetPopupManager
//		Flags  -> (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
//		class UPUMG_PopupManager*                          ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
class UPUMG_PopupManager* ABP_BrightLobbyHUD_C::GetPopupManager()
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(55436);

	ABP_BrightLobbyHUD_C_GetPopupManager_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function BP_BrightLobbyHUD.BP_BrightLobbyHUD_C.Handle Party Invite Received
//		Flags  -> (BlueprintCallable, BlueprintEvent)
// Parameters:
//		class UPUMG_PlayerInfo*                            Inviter                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_BrightLobbyHUD_C::Handle_Party_Invite_Received(class UPUMG_PlayerInfo* Inviter)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(55435);

	ABP_BrightLobbyHUD_C_Handle_Party_Invite_Received_Params params {};
	params.Inviter = Inviter;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function BP_BrightLobbyHUD.BP_BrightLobbyHUD_C.ReceiveBeginPlay
//		Flags  -> (Event, Protected, BlueprintEvent)
void ABP_BrightLobbyHUD_C::ReceiveBeginPlay()
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(55434);

	ABP_BrightLobbyHUD_C_ReceiveBeginPlay_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function BP_BrightLobbyHUD.BP_BrightLobbyHUD_C.HandleOpenTextChat
//		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
//		bool                                               BeginChatCommand                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void ABP_BrightLobbyHUD_C::HandleOpenTextChat(bool BeginChatCommand)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(55433);

	ABP_BrightLobbyHUD_C_HandleOpenTextChat_Params params {};
	params.BeginChatCommand = BeginChatCommand;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function BP_BrightLobbyHUD.BP_BrightLobbyHUD_C.OpenTextChatToPlayer
//		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
//		class UPUMG_PlayerInfo*                            Player                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_BrightLobbyHUD_C::OpenTextChatToPlayer(class UPUMG_PlayerInfo* Player)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(55432);

	ABP_BrightLobbyHUD_C_OpenTextChatToPlayer_Params params {};
	params.Player = Player;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function BP_BrightLobbyHUD.BP_BrightLobbyHUD_C.ApplySafeFrameScale
//		Flags  -> (Event, Public, BlueprintEvent)
// Parameters:
//		float                                              SafeFrameScale                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_BrightLobbyHUD_C::ApplySafeFrameScale(float SafeFrameScale)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(55431);

	ABP_BrightLobbyHUD_C_ApplySafeFrameScale_Params params {};
	params.SafeFrameScale = SafeFrameScale;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function BP_BrightLobbyHUD.BP_BrightLobbyHUD_C.OnCustomQueueJoin
//		Flags  -> (BlueprintCallable, BlueprintEvent)
void ABP_BrightLobbyHUD_C::OnCustomQueueJoin()
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(55430);

	ABP_BrightLobbyHUD_C_OnCustomQueueJoin_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function BP_BrightLobbyHUD.BP_BrightLobbyHUD_C.EvaluateFocus
//		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
void ABP_BrightLobbyHUD_C::EvaluateFocus()
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(55429);

	ABP_BrightLobbyHUD_C_EvaluateFocus_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function BP_BrightLobbyHUD.BP_BrightLobbyHUD_C.HandleMatchStatusUpdated
//		Flags  -> (Event, Protected, BlueprintEvent)
// Parameters:
//		PlatformUMG_EPUMG_MatchStatus                      MatchStatus                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_BrightLobbyHUD_C::HandleMatchStatusUpdated(PlatformUMG_EPUMG_MatchStatus MatchStatus)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(55428);

	ABP_BrightLobbyHUD_C_HandleMatchStatusUpdated_Params params {};
	params.MatchStatus = MatchStatus;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function BP_BrightLobbyHUD.BP_BrightLobbyHUD_C.HandleRewardsReceived
//		Flags  -> (BlueprintCallable, BlueprintEvent)
// Parameters:
//		struct FPlayerRewardsSummary                       PlayerRewardsSummary                                       (BlueprintVisible, BlueprintReadOnly, Parm)
//		struct FScoreboardStats                            ScoreboardStats                                            (BlueprintVisible, BlueprintReadOnly, Parm)
void ABP_BrightLobbyHUD_C::HandleRewardsReceived(const struct FPlayerRewardsSummary& PlayerRewardsSummary, const struct FScoreboardStats& ScoreboardStats)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(55427);

	ABP_BrightLobbyHUD_C_HandleRewardsReceived_Params params {};
	params.PlayerRewardsSummary = PlayerRewardsSummary;
	params.ScoreboardStats = ScoreboardStats;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function BP_BrightLobbyHUD.BP_BrightLobbyHUD_C.ExecuteUbergraph_BP_BrightLobbyHUD
//		Flags  -> (Final, HasDefaults)
// Parameters:
//		int                                                EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_BrightLobbyHUD_C::ExecuteUbergraph_BP_BrightLobbyHUD(int EntryPoint)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(55426);

	ABP_BrightLobbyHUD_C_ExecuteUbergraph_BP_BrightLobbyHUD_Params params {};
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function BP_BrightLobbyHUD.BP_BrightLobbyHUD_C.Loadout Slot Change__DelegateSignature
//		Flags  -> (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
//		unsigned char                                      Loadout_Slot_Edit                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_BrightLobbyHUD_C::Loadout_Slot_Change__DelegateSignature(unsigned char Loadout_Slot_Edit)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(55425);

	ABP_BrightLobbyHUD_C_Loadout_Slot_Change__DelegateSignature_Params params {};
	params.Loadout_Slot_Edit = Loadout_Slot_Edit;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
