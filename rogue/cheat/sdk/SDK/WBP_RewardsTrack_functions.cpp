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
//		Name   -> Function WBP_RewardsTrack.WBP_RewardsTrack_C.GetCurrentPosition
//		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
//		class URewardsTrackSavedPosition_C*                ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
class URewardsTrackSavedPosition_C* UWBP_RewardsTrack_C::GetCurrentPosition()
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(81421);

	UWBP_RewardsTrack_C_GetCurrentPosition_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_RewardsTrack.WBP_RewardsTrack_C.OnInputStateChanged
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
//		TEnumAsByte<PlatformGameFramework_EPGAME_INPUT_STATE> InputState                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWBP_RewardsTrack_C::OnInputStateChanged(TEnumAsByte<PlatformGameFramework_EPGAME_INPUT_STATE> InputState)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(81420);

	UWBP_RewardsTrack_C_OnInputStateChanged_Params params {};
	params.InputState = InputState;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_RewardsTrack.WBP_RewardsTrack_C.NavigatePageWithDirection
//		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
//		int                                                Direction                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		bool                                               DidNavigate                                                (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UWBP_RewardsTrack_C::NavigatePageWithDirection(int Direction, bool* DidNavigate)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(81419);

	UWBP_RewardsTrack_C_NavigatePageWithDirection_Params params {};
	params.Direction = Direction;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (DidNavigate != nullptr)
		*DidNavigate = params.DidNavigate;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_RewardsTrack.WBP_RewardsTrack_C.DisplayPage
//		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
//		int                                                Page                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWBP_RewardsTrack_C::DisplayPage(int Page)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(81418);

	UWBP_RewardsTrack_C_DisplayPage_Params params {};
	params.Page = Page;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_RewardsTrack.WBP_RewardsTrack_C.GetNavigationWidgets
//		Flags  -> (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
//		TArray<class UWBP_RewardListEntry_C*>              Widgets                                                    (Parm, OutParm, ContainsInstancedReference, HasGetValueTypeHash)
void UWBP_RewardsTrack_C::GetNavigationWidgets(TArray<class UWBP_RewardListEntry_C*>* Widgets)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(81417);

	UWBP_RewardsTrack_C_GetNavigationWidgets_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Widgets != nullptr)
		*Widgets = params.Widgets;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_RewardsTrack.WBP_RewardsTrack_C.InitializeWithActivityInstance
//		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
//		class UKSActivityInstance*                         ActivityInstance                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWBP_RewardsTrack_C::InitializeWithActivityInstance(class UKSActivityInstance* ActivityInstance)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(81416);

	UWBP_RewardsTrack_C_InitializeWithActivityInstance_Params params {};
	params.ActivityInstance = ActivityInstance;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_RewardsTrack.WBP_RewardsTrack_C.InitializeWithStoreItems
//		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
//		TArray<class UPUMG_StoreItem*>                     StoreItems                                                 (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, HasGetValueTypeHash)
void UWBP_RewardsTrack_C::InitializeWithStoreItems(TArray<class UPUMG_StoreItem*>* StoreItems)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(81415);

	UWBP_RewardsTrack_C_InitializeWithStoreItems_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (StoreItems != nullptr)
		*StoreItems = params.StoreItems;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_RewardsTrack.WBP_RewardsTrack_C.InitializeWithAcquisition
//		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
//		class UKSAcquisition*                              Acquisition                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWBP_RewardsTrack_C::InitializeWithAcquisition(class UKSAcquisition* Acquisition)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(81414);

	UWBP_RewardsTrack_C_InitializeWithAcquisition_Params params {};
	params.Acquisition = Acquisition;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_RewardsTrack.WBP_RewardsTrack_C.InitializeWidget
//		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
//		class APUMG_HUD*                                   HUD                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWBP_RewardsTrack_C::InitializeWidget(class APUMG_HUD* HUD)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(81413);

	UWBP_RewardsTrack_C_InitializeWidget_Params params {};
	params.HUD = HUD;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_RewardsTrack.WBP_RewardsTrack_C.OnEntryClicked
//		Flags  -> (BlueprintCallable, BlueprintEvent)
// Parameters:
//		class UWBP_RewardListEntry_C*                      Widget                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		struct FCosmeticSlotDetails                        RewardSlotDetails                                          (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)
//		class UPUMG_StoreItem*                             StoreItem                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWBP_RewardsTrack_C::OnEntryClicked(class UWBP_RewardListEntry_C* Widget, const struct FCosmeticSlotDetails& RewardSlotDetails, class UPUMG_StoreItem* StoreItem)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(81412);

	UWBP_RewardsTrack_C_OnEntryClicked_Params params {};
	params.Widget = Widget;
	params.RewardSlotDetails = RewardSlotDetails;
	params.StoreItem = StoreItem;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_RewardsTrack.WBP_RewardsTrack_C.OnClickedPageLeft
//		Flags  -> (BlueprintCallable, BlueprintEvent)
void UWBP_RewardsTrack_C::OnClickedPageLeft()
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(81411);

	UWBP_RewardsTrack_C_OnClickedPageLeft_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_RewardsTrack.WBP_RewardsTrack_C.OnClickedPageRight
//		Flags  -> (BlueprintCallable, BlueprintEvent)
void UWBP_RewardsTrack_C::OnClickedPageRight()
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(81410);

	UWBP_RewardsTrack_C_OnClickedPageRight_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_RewardsTrack.WBP_RewardsTrack_C.Construct
//		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
void UWBP_RewardsTrack_C::Construct()
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(81409);

	UWBP_RewardsTrack_C_Construct_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_RewardsTrack.WBP_RewardsTrack_C.ExecuteUbergraph_WBP_RewardsTrack
//		Flags  -> (Final)
// Parameters:
//		int                                                EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWBP_RewardsTrack_C::ExecuteUbergraph_WBP_RewardsTrack(int EntryPoint)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(81408);

	UWBP_RewardsTrack_C_ExecuteUbergraph_WBP_RewardsTrack_Params params {};
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_RewardsTrack.WBP_RewardsTrack_C.OnPageNavigated__DelegateSignature
//		Flags  -> (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
//		int                                                Direction                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWBP_RewardsTrack_C::OnPageNavigated__DelegateSignature(int Direction)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(81407);

	UWBP_RewardsTrack_C_OnPageNavigated__DelegateSignature_Params params {};
	params.Direction = Direction;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
