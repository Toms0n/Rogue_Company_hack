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
//		Name   -> Function WBP_PlayerIdentity_Title.WBP_PlayerIdentity_Title_C.SetTitle
//		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
//		class UKSTitle*                                    Title                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWBP_PlayerIdentity_Title_C::SetTitle(class UKSTitle* Title)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(67651);

	UWBP_PlayerIdentity_Title_C_SetTitle_Params params {};
	params.Title = Title;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_PlayerIdentity_Title.WBP_PlayerIdentity_Title_C.Construct
//		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
void UWBP_PlayerIdentity_Title_C::Construct()
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(67650);

	UWBP_PlayerIdentity_Title_C_Construct_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_PlayerIdentity_Title.WBP_PlayerIdentity_Title_C.ExecuteUbergraph_WBP_PlayerIdentity_Title
//		Flags  -> (Final)
// Parameters:
//		int                                                EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWBP_PlayerIdentity_Title_C::ExecuteUbergraph_WBP_PlayerIdentity_Title(int EntryPoint)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(64936);

	UWBP_PlayerIdentity_Title_C_ExecuteUbergraph_WBP_PlayerIdentity_Title_Params params {};
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
