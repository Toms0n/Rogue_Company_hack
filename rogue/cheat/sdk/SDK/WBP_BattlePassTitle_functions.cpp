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
//		Name   -> Function WBP_BattlePassTitle.WBP_BattlePassTitle_C.RefreshTimeRemaining
//		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
void UWBP_BattlePassTitle_C::RefreshTimeRemaining()
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(81241);

	UWBP_BattlePassTitle_C_RefreshTimeRemaining_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_BattlePassTitle.WBP_BattlePassTitle_C.InitializeWithActivityInstance
//		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
//		class UKSActivityInstance*                         ActivityInstance                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWBP_BattlePassTitle_C::InitializeWithActivityInstance(class UKSActivityInstance* ActivityInstance)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(81240);

	UWBP_BattlePassTitle_C_InitializeWithActivityInstance_Params params {};
	params.ActivityInstance = ActivityInstance;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_BattlePassTitle.WBP_BattlePassTitle_C.InitializeWidget
//		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
//		class APUMG_HUD*                                   HUD                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWBP_BattlePassTitle_C::InitializeWidget(class APUMG_HUD* HUD)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(81239);

	UWBP_BattlePassTitle_C_InitializeWidget_Params params {};
	params.HUD = HUD;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_BattlePassTitle.WBP_BattlePassTitle_C.ExecuteUbergraph_WBP_BattlePassTitle
//		Flags  -> (Final, HasDefaults)
// Parameters:
//		int                                                EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWBP_BattlePassTitle_C::ExecuteUbergraph_WBP_BattlePassTitle(int EntryPoint)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(81238);

	UWBP_BattlePassTitle_C_ExecuteUbergraph_WBP_BattlePassTitle_Params params {};
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
