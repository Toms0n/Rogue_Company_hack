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
//		Name   -> Function WBP_StoreSection.WBP_StoreSection_C.OnStoreTimerTick
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
void UWBP_StoreSection_C::OnStoreTimerTick()
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(79713);

	UWBP_StoreSection_C_OnStoreTimerTick_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_StoreSection.WBP_StoreSection_C.ShowCTA
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
//		bool                                               ShowCTA                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UWBP_StoreSection_C::ShowCTA(bool ShowCTA)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(79712);

	UWBP_StoreSection_C_ShowCTA_Params params {};
	params.ShowCTA = ShowCTA;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_StoreSection.WBP_StoreSection_C.UpdateSectionTimer
//		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
void UWBP_StoreSection_C::UpdateSectionTimer()
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(79711);

	UWBP_StoreSection_C_UpdateSectionTimer_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_StoreSection.WBP_StoreSection_C.FindTaxInfo
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
//		class UKSStoreSection*                             StoreSection                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWBP_StoreSection_C::FindTaxInfo(class UKSStoreSection* StoreSection)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(79710);

	UWBP_StoreSection_C_FindTaxInfo_Params params {};
	params.StoreSection = StoreSection;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_StoreSection.WBP_StoreSection_C.SetItemSelected
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
//		int                                                SectionIndex                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		int                                                ItemIndex                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWBP_StoreSection_C::SetItemSelected(int SectionIndex, int ItemIndex)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(79709);

	UWBP_StoreSection_C_SetItemSelected_Params params {};
	params.SectionIndex = SectionIndex;
	params.ItemIndex = ItemIndex;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_StoreSection.WBP_StoreSection_C.SetupSectionNavigation
//		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
//		bool                                               SelectLast                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UWBP_StoreSection_C::SetupSectionNavigation(bool SelectLast)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(79708);

	UWBP_StoreSection_C_SetupSectionNavigation_Params params {};
	params.SelectLast = SelectLast;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_StoreSection.WBP_StoreSection_C.SetSectionData
//		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
//		class UKSStoreSection*                             SectionData                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWBP_StoreSection_C::SetSectionData(class UKSStoreSection* SectionData)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(79707);

	UWBP_StoreSection_C_SetSectionData_Params params {};
	params.SectionData = SectionData;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_StoreSection.WBP_StoreSection_C.ClearContents
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
void UWBP_StoreSection_C::ClearContents()
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(79706);

	UWBP_StoreSection_C_ClearContents_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_StoreSection.WBP_StoreSection_C.AddItemToSection
//		Flags  -> (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
//		class UKSStoreSectionItem*                         StoreItem                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		class UGridSlot*                                   NewSlot                                                    (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWBP_StoreSection_C::AddItemToSection(class UKSStoreSectionItem* StoreItem, class UGridSlot** NewSlot)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(79705);

	UWBP_StoreSection_C_AddItemToSection_Params params {};
	params.StoreItem = StoreItem;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (NewSlot != nullptr)
		*NewSlot = params.NewSlot;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_StoreSection.WBP_StoreSection_C.Construct
//		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
void UWBP_StoreSection_C::Construct()
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(79704);

	UWBP_StoreSection_C_Construct_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_StoreSection.WBP_StoreSection_C.Tick
//		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
//		struct FGeometry                                   MyGeometry                                                 (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
//		float                                              InDeltaTime                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWBP_StoreSection_C::Tick(const struct FGeometry& MyGeometry, float InDeltaTime)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(79703);

	UWBP_StoreSection_C_Tick_Params params {};
	params.MyGeometry = MyGeometry;
	params.InDeltaTime = InDeltaTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_StoreSection.WBP_StoreSection_C.ExecuteUbergraph_WBP_StoreSection
//		Flags  -> (Final, HasDefaults)
// Parameters:
//		int                                                EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWBP_StoreSection_C::ExecuteUbergraph_WBP_StoreSection(int EntryPoint)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(79702);

	UWBP_StoreSection_C_ExecuteUbergraph_WBP_StoreSection_Params params {};
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
