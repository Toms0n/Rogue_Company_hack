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
//		Name   -> Function WBP_BattlePassEmblem.WBP_BattlePassEmblem_C.SetPremiumUpsellState
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
void UWBP_BattlePassEmblem_C::SetPremiumUpsellState()
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(87893);

	UWBP_BattlePassEmblem_C_SetPremiumUpsellState_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_BattlePassEmblem.WBP_BattlePassEmblem_C.SetBattlePassInfoExplicit
//		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
//		bool                                               HasPremium                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
//		int                                                Tier                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWBP_BattlePassEmblem_C::SetBattlePassInfoExplicit(bool HasPremium, int Tier)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(87892);

	UWBP_BattlePassEmblem_C_SetBattlePassInfoExplicit_Params params {};
	params.HasPremium = HasPremium;
	params.Tier = Tier;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_BattlePassEmblem.WBP_BattlePassEmblem_C.SetBattlePassInfoFromStoreItem
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
//		class UPUMG_StoreItem*                             StoreItem                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWBP_BattlePassEmblem_C::SetBattlePassInfoFromStoreItem(class UPUMG_StoreItem* StoreItem)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(87891);

	UWBP_BattlePassEmblem_C_SetBattlePassInfoFromStoreItem_Params params {};
	params.StoreItem = StoreItem;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_BattlePassEmblem.WBP_BattlePassEmblem_C.SetBattlePassInfoFromActivityInstance
//		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
//		class UKSActivityInstance*                         ActivityInstance                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWBP_BattlePassEmblem_C::SetBattlePassInfoFromActivityInstance(class UKSActivityInstance* ActivityInstance)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(87890);

	UWBP_BattlePassEmblem_C_SetBattlePassInfoFromActivityInstance_Params params {};
	params.ActivityInstance = ActivityInstance;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_BattlePassEmblem.WBP_BattlePassEmblem_C.InitializeBadgeTextures
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
void UWBP_BattlePassEmblem_C::InitializeBadgeTextures()
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(87889);

	UWBP_BattlePassEmblem_C_InitializeBadgeTextures_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_BattlePassEmblem.WBP_BattlePassEmblem_C.InitializeWidget
//		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
//		class APUMG_HUD*                                   HUD                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWBP_BattlePassEmblem_C::InitializeWidget(class APUMG_HUD* HUD)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(87888);

	UWBP_BattlePassEmblem_C_InitializeWidget_Params params {};
	params.HUD = HUD;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_BattlePassEmblem.WBP_BattlePassEmblem_C.ExecuteUbergraph_WBP_BattlePassEmblem
//		Flags  -> (Final)
// Parameters:
//		int                                                EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWBP_BattlePassEmblem_C::ExecuteUbergraph_WBP_BattlePassEmblem(int EntryPoint)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(87887);

	UWBP_BattlePassEmblem_C_ExecuteUbergraph_WBP_BattlePassEmblem_Params params {};
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
