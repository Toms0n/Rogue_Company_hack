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
//		Name   -> Function WBP_RegionSelectRedirect.WBP_RegionSelectRedirect_C.InitializeWidget
//		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
//		class APUMG_HUD*                                   HUD                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWBP_RegionSelectRedirect_C::InitializeWidget(class APUMG_HUD* HUD)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(63247);

	UWBP_RegionSelectRedirect_C_InitializeWidget_Params params {};
	params.HUD = HUD;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_RegionSelectRedirect.WBP_RegionSelectRedirect_C.Handle Region Selected
//		Flags  -> (BlueprintCallable, BlueprintEvent)
void UWBP_RegionSelectRedirect_C::Handle_Region_Selected()
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(63246);

	UWBP_RegionSelectRedirect_C_Handle_Region_Selected_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_RegionSelectRedirect.WBP_RegionSelectRedirect_C.Handle Region Select Entries Created
//		Flags  -> (BlueprintCallable, BlueprintEvent)
void UWBP_RegionSelectRedirect_C::Handle_Region_Select_Entries_Created()
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(63245);

	UWBP_RegionSelectRedirect_C_Handle_Region_Select_Entries_Created_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_RegionSelectRedirect.WBP_RegionSelectRedirect_C.InitializeWidgetNavigation
//		Flags  -> (Event, Public, BlueprintEvent)
void UWBP_RegionSelectRedirect_C::InitializeWidgetNavigation()
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(63244);

	UWBP_RegionSelectRedirect_C_InitializeWidgetNavigation_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_RegionSelectRedirect.WBP_RegionSelectRedirect_C.OnShown
//		Flags  -> (Event, Public, BlueprintEvent)
void UWBP_RegionSelectRedirect_C::OnShown()
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(63243);

	UWBP_RegionSelectRedirect_C_OnShown_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_RegionSelectRedirect.WBP_RegionSelectRedirect_C.ExecuteUbergraph_WBP_RegionSelectRedirect
//		Flags  -> (Final, HasDefaults)
// Parameters:
//		int                                                EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWBP_RegionSelectRedirect_C::ExecuteUbergraph_WBP_RegionSelectRedirect(int EntryPoint)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(63242);

	UWBP_RegionSelectRedirect_C_ExecuteUbergraph_WBP_RegionSelectRedirect_Params params {};
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
