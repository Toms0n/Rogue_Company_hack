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
//		Name   -> Function WBP_BattlePassAcquisitionTitle.WBP_BattlePassAcquisitionTitle_C.SetPremiumUpsellState
//		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
//		int                                                PremiumItems                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWBP_BattlePassAcquisitionTitle_C::SetPremiumUpsellState(int PremiumItems)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(209799);

	UWBP_BattlePassAcquisitionTitle_C_SetPremiumUpsellState_Params params {};
	params.PremiumItems = PremiumItems;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_BattlePassAcquisitionTitle.WBP_BattlePassAcquisitionTitle_C.InitializeWithAcquisition
//		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
//		class UKSAcquisition*                              Acquisition                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWBP_BattlePassAcquisitionTitle_C::InitializeWithAcquisition(class UKSAcquisition* Acquisition)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(209798);

	UWBP_BattlePassAcquisitionTitle_C_InitializeWithAcquisition_Params params {};
	params.Acquisition = Acquisition;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_BattlePassAcquisitionTitle.WBP_BattlePassAcquisitionTitle_C.InitializeWidget
//		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
//		class APUMG_HUD*                                   HUD                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWBP_BattlePassAcquisitionTitle_C::InitializeWidget(class APUMG_HUD* HUD)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(209797);

	UWBP_BattlePassAcquisitionTitle_C_InitializeWidget_Params params {};
	params.HUD = HUD;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_BattlePassAcquisitionTitle.WBP_BattlePassAcquisitionTitle_C.ExecuteUbergraph_WBP_BattlePassAcquisitionTitle
//		Flags  -> (Final)
// Parameters:
//		int                                                EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWBP_BattlePassAcquisitionTitle_C::ExecuteUbergraph_WBP_BattlePassAcquisitionTitle(int EntryPoint)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(80480);

	UWBP_BattlePassAcquisitionTitle_C_ExecuteUbergraph_WBP_BattlePassAcquisitionTitle_Params params {};
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
