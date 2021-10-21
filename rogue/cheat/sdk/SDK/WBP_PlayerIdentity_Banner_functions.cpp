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
//		Name   -> Function WBP_PlayerIdentity_Banner.WBP_PlayerIdentity_Banner_C.SetBorderFromIconInfo
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
//		class UIconInfo*                                   Icon_Info                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWBP_PlayerIdentity_Banner_C::SetBorderFromIconInfo(class UIconInfo* Icon_Info)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(62437);

	UWBP_PlayerIdentity_Banner_C_SetBorderFromIconInfo_Params params {};
	params.Icon_Info = Icon_Info;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_PlayerIdentity_Banner.WBP_PlayerIdentity_Banner_C.SetBannerFromIconInfo
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
//		class UIconInfo*                                   Icon_Info                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWBP_PlayerIdentity_Banner_C::SetBannerFromIconInfo(class UIconInfo* Icon_Info)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(62436);

	UWBP_PlayerIdentity_Banner_C_SetBannerFromIconInfo_Params params {};
	params.Icon_Info = Icon_Info;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_PlayerIdentity_Banner.WBP_PlayerIdentity_Banner_C.HideBorder
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
void UWBP_PlayerIdentity_Banner_C::HideBorder()
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(62435);

	UWBP_PlayerIdentity_Banner_C_HideBorder_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_PlayerIdentity_Banner.WBP_PlayerIdentity_Banner_C.SetBorder
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
void UWBP_PlayerIdentity_Banner_C::SetBorder()
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(62434);

	UWBP_PlayerIdentity_Banner_C_SetBorder_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_PlayerIdentity_Banner.WBP_PlayerIdentity_Banner_C.SetBanner
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
void UWBP_PlayerIdentity_Banner_C::SetBanner()
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(62433);

	UWBP_PlayerIdentity_Banner_C_SetBanner_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
