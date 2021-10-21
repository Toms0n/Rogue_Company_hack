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
//		Name   -> Function WBP_Store.WBP_Store_C.ConvertStoreTime
//		Flags  -> (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
//		struct FText                                       Time                                                       (Parm, OutParm)
void UWBP_Store_C::ConvertStoreTime(struct FText* Time)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(88464);

	UWBP_Store_C_ConvertStoreTime_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Time != nullptr)
		*Time = params.Time;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_Store.WBP_Store_C.UpdateStoreTimer
//		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
void UWBP_Store_C::UpdateStoreTimer()
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(88463);

	UWBP_Store_C_UpdateStoreTimer_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_Store.WBP_Store_C.GetKSStoreItemHelper
//		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
//		class UKSStoreItemHelper*                          StoreItemHelper                                            (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWBP_Store_C::GetKSStoreItemHelper(class UKSStoreItemHelper** StoreItemHelper)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(88462);

	UWBP_Store_C_GetKSStoreItemHelper_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (StoreItemHelper != nullptr)
		*StoreItemHelper = params.StoreItemHelper;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_Store.WBP_Store_C.Set Initial Scroll Position
//		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
void UWBP_Store_C::Set_Initial_Scroll_Position()
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(88461);

	UWBP_Store_C_Set_Initial_Scroll_Position_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_Store.WBP_Store_C.OnKeyDown
//		Flags  -> (BlueprintCosmetic, Event, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
//		struct FGeometry                                   MyGeometry                                                 (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
//		struct FKeyEvent                                   InKeyEvent                                                 (BlueprintVisible, BlueprintReadOnly, Parm)
//		struct FEventReply                                 ReturnValue                                                (Parm, OutParm, ReturnParm)
struct FEventReply UWBP_Store_C::OnKeyDown(const struct FGeometry& MyGeometry, const struct FKeyEvent& InKeyEvent)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(88460);

	UWBP_Store_C_OnKeyDown_Params params {};
	params.MyGeometry = MyGeometry;
	params.InKeyEvent = InKeyEvent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_Store.WBP_Store_C.OnPrevSection
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
void UWBP_Store_C::OnPrevSection()
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(88459);

	UWBP_Store_C_OnPrevSection_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_Store.WBP_Store_C.OnNextSection
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
void UWBP_Store_C::OnNextSection()
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(88458);

	UWBP_Store_C_OnNextSection_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_Store.WBP_Store_C.OnStoreSectionSelected
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
//		int                                                Index                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWBP_Store_C::OnStoreSectionSelected(int Index)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(88457);

	UWBP_Store_C_OnStoreSectionSelected_Params params {};
	params.Index = Index;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_Store.WBP_Store_C.AddSectionsToStore
//		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
//		TArray<class UKSStoreSection*>                     StoreSection                                               (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, HasGetValueTypeHash)
void UWBP_Store_C::AddSectionsToStore(TArray<class UKSStoreSection*>* StoreSection)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(88456);

	UWBP_Store_C_AddSectionsToStore_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (StoreSection != nullptr)
		*StoreSection = params.StoreSection;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_Store.WBP_Store_C.NavigateBack
//		Flags  -> (Event, Protected, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
//		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
bool UWBP_Store_C::NavigateBack()
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(88455);

	UWBP_Store_C_NavigateBack_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_Store.WBP_Store_C.PopulateStore
//		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
void UWBP_Store_C::PopulateStore()
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(88454);

	UWBP_Store_C_PopulateStore_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_Store.WBP_Store_C.Tick
//		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
//		struct FGeometry                                   MyGeometry                                                 (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
//		float                                              InDeltaTime                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWBP_Store_C::Tick(const struct FGeometry& MyGeometry, float InDeltaTime)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(88453);

	UWBP_Store_C_Tick_Params params {};
	params.MyGeometry = MyGeometry;
	params.InDeltaTime = InDeltaTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_Store.WBP_Store_C.OnVendorsReceived
//		Flags  -> (Event, Public, HasOutParms, BlueprintEvent)
// Parameters:
//		int                                                GroupId                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		TArray<int>                                        VendorIds                                                  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, HasGetValueTypeHash)
void UWBP_Store_C::OnVendorsReceived(int GroupId, TArray<int> VendorIds)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(88452);

	UWBP_Store_C_OnVendorsReceived_Params params {};
	params.GroupId = GroupId;
	params.VendorIds = VendorIds;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_Store.WBP_Store_C.InitializeWidget
//		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
//		class APUMG_HUD*                                   HUD                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWBP_Store_C::InitializeWidget(class APUMG_HUD* HUD)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(88451);

	UWBP_Store_C_InitializeWidget_Params params {};
	params.HUD = HUD;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_Store.WBP_Store_C.OnBackPrompt
//		Flags  -> (BlueprintCallable, BlueprintEvent)
void UWBP_Store_C::OnBackPrompt()
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(88450);

	UWBP_Store_C_OnBackPrompt_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_Store.WBP_Store_C.InitializeWidgetNavigation
//		Flags  -> (Event, Public, BlueprintEvent)
void UWBP_Store_C::InitializeWidgetNavigation()
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(88449);

	UWBP_Store_C_InitializeWidgetNavigation_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_Store.WBP_Store_C.OnShown
//		Flags  -> (Event, Public, BlueprintEvent)
void UWBP_Store_C::OnShown()
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(88448);

	UWBP_Store_C_OnShown_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_Store.WBP_Store_C.OnHide
//		Flags  -> (Event, Public, BlueprintEvent)
void UWBP_Store_C::OnHide()
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(88447);

	UWBP_Store_C_OnHide_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_Store.WBP_Store_C.OnOpenCodeRedeem
//		Flags  -> (BlueprintCallable, BlueprintEvent)
void UWBP_Store_C::OnOpenCodeRedeem()
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(88446);

	UWBP_Store_C_OnOpenCodeRedeem_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_Store.WBP_Store_C.FocusGroupNavigateLeftFailure
//		Flags  -> (Event, Public, BlueprintEvent)
// Parameters:
//		int                                                FocusGroup                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWBP_Store_C::FocusGroupNavigateLeftFailure(int FocusGroup)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(88445);

	UWBP_Store_C_FocusGroupNavigateLeftFailure_Params params {};
	params.FocusGroup = FocusGroup;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_Store.WBP_Store_C.FocusGroupNavigateRightFailure
//		Flags  -> (Event, Public, BlueprintEvent)
// Parameters:
//		int                                                FocusGroup                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWBP_Store_C::FocusGroupNavigateRightFailure(int FocusGroup)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(88444);

	UWBP_Store_C_FocusGroupNavigateRightFailure_Params params {};
	params.FocusGroup = FocusGroup;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_Store.WBP_Store_C.OnPortalOffersReceived
//		Flags  -> (Event, Public, BlueprintEvent)
void UWBP_Store_C::OnPortalOffersReceived()
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(88443);

	UWBP_Store_C_OnPortalOffersReceived_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_Store.WBP_Store_C.OnPricePointsReveived
//		Flags  -> (Event, Public, BlueprintEvent)
void UWBP_Store_C::OnPricePointsReveived()
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(88442);

	UWBP_Store_C_OnPricePointsReveived_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_Store.WBP_Store_C.ExecuteUbergraph_WBP_Store
//		Flags  -> (Final, HasDefaults)
// Parameters:
//		int                                                EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWBP_Store_C::ExecuteUbergraph_WBP_Store(int EntryPoint)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(88441);

	UWBP_Store_C_ExecuteUbergraph_WBP_Store_Params params {};
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
