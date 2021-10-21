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
//		Name   -> Function WBP_QuickPlay_MapThumbnail.WBP_QuickPlay_MapThumbnail_C.Construct
//		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
void UWBP_QuickPlay_MapThumbnail_C::Construct()
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(59759);

	UWBP_QuickPlay_MapThumbnail_C_Construct_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_QuickPlay_MapThumbnail.WBP_QuickPlay_MapThumbnail_C.SetMapInfo
//		Flags  -> (BlueprintCallable, BlueprintEvent)
// Parameters:
//		struct FUIMapInfo                                  UIMapInfo                                                  (BlueprintVisible, BlueprintReadOnly, Parm)
void UWBP_QuickPlay_MapThumbnail_C::SetMapInfo(const struct FUIMapInfo& UIMapInfo)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(59758);

	UWBP_QuickPlay_MapThumbnail_C_SetMapInfo_Params params {};
	params.UIMapInfo = UIMapInfo;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_QuickPlay_MapThumbnail.WBP_QuickPlay_MapThumbnail_C.SetMapDetail
//		Flags  -> (BlueprintCallable, BlueprintEvent)
// Parameters:
//		struct FMapDetail                                  MapDetail                                                  (BlueprintVisible, BlueprintReadOnly, Parm)
void UWBP_QuickPlay_MapThumbnail_C::SetMapDetail(const struct FMapDetail& MapDetail)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(59757);

	UWBP_QuickPlay_MapThumbnail_C_SetMapDetail_Params params {};
	params.MapDetail = MapDetail;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_QuickPlay_MapThumbnail.WBP_QuickPlay_MapThumbnail_C.ExecuteUbergraph_WBP_QuickPlay_MapThumbnail
//		Flags  -> (Final, HasDefaults)
// Parameters:
//		int                                                EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWBP_QuickPlay_MapThumbnail_C::ExecuteUbergraph_WBP_QuickPlay_MapThumbnail(int EntryPoint)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(59756);

	UWBP_QuickPlay_MapThumbnail_C_ExecuteUbergraph_WBP_QuickPlay_MapThumbnail_Params params {};
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
