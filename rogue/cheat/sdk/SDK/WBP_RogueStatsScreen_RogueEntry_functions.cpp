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
//		Name   -> Function WBP_RogueStatsScreen_RogueEntry.WBP_RogueStatsScreen_RogueEntry_C.TickAnchorAnim
//		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
//		float                                              DeltaTime                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWBP_RogueStatsScreen_RogueEntry_C::TickAnchorAnim(float DeltaTime)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(71921);

	UWBP_RogueStatsScreen_RogueEntry_C_TickAnchorAnim_Params params {};
	params.DeltaTime = DeltaTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_RogueStatsScreen_RogueEntry.WBP_RogueStatsScreen_RogueEntry_C.ResetState
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
void UWBP_RogueStatsScreen_RogueEntry_C::ResetState()
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(71920);

	UWBP_RogueStatsScreen_RogueEntry_C_ResetState_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_RogueStatsScreen_RogueEntry.WBP_RogueStatsScreen_RogueEntry_C.PlayShowAnimInternal
//		Flags  -> (Protected, BlueprintCallable, BlueprintEvent)
void UWBP_RogueStatsScreen_RogueEntry_C::PlayShowAnimInternal()
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(71919);

	UWBP_RogueStatsScreen_RogueEntry_C_PlayShowAnimInternal_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_RogueStatsScreen_RogueEntry.WBP_RogueStatsScreen_RogueEntry_C.PlayShowAnim
//		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
//		float                                              Delay                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWBP_RogueStatsScreen_RogueEntry_C::PlayShowAnim(float Delay)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(71918);

	UWBP_RogueStatsScreen_RogueEntry_C_PlayShowAnim_Params params {};
	params.Delay = Delay;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_RogueStatsScreen_RogueEntry.WBP_RogueStatsScreen_RogueEntry_C.UpdateValueText
//		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
//		bool                                               ShouldOverwriteValue                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
//		float                                              OverwriteValue                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWBP_RogueStatsScreen_RogueEntry_C::UpdateValueText(bool ShouldOverwriteValue, float OverwriteValue)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(71917);

	UWBP_RogueStatsScreen_RogueEntry_C_UpdateValueText_Params params {};
	params.ShouldOverwriteValue = ShouldOverwriteValue;
	params.OverwriteValue = OverwriteValue;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_RogueStatsScreen_RogueEntry.WBP_RogueStatsScreen_RogueEntry_C.UpdateRogueName
//		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
void UWBP_RogueStatsScreen_RogueEntry_C::UpdateRogueName()
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(71916);

	UWBP_RogueStatsScreen_RogueEntry_C_UpdateRogueName_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_RogueStatsScreen_RogueEntry.WBP_RogueStatsScreen_RogueEntry_C.UpdateRogueIcon
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
void UWBP_RogueStatsScreen_RogueEntry_C::UpdateRogueIcon()
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(71915);

	UWBP_RogueStatsScreen_RogueEntry_C_UpdateRogueIcon_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_RogueStatsScreen_RogueEntry.WBP_RogueStatsScreen_RogueEntry_C.Set Stat Data
//		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
//		float                                              MaxValue                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		class UKSStatWrapper*                              RogueStatWrapper                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		int64_t                                            JobId                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWBP_RogueStatsScreen_RogueEntry_C::Set_Stat_Data(float MaxValue, class UKSStatWrapper* RogueStatWrapper, int64_t JobId)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(71914);

	UWBP_RogueStatsScreen_RogueEntry_C_Set_Stat_Data_Params params {};
	params.MaxValue = MaxValue;
	params.RogueStatWrapper = RogueStatWrapper;
	params.JobId = JobId;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_RogueStatsScreen_RogueEntry.WBP_RogueStatsScreen_RogueEntry_C.Construct
//		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
void UWBP_RogueStatsScreen_RogueEntry_C::Construct()
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(71913);

	UWBP_RogueStatsScreen_RogueEntry_C_Construct_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_RogueStatsScreen_RogueEntry.WBP_RogueStatsScreen_RogueEntry_C.Tick
//		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
//		struct FGeometry                                   MyGeometry                                                 (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
//		float                                              InDeltaTime                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWBP_RogueStatsScreen_RogueEntry_C::Tick(const struct FGeometry& MyGeometry, float InDeltaTime)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(71912);

	UWBP_RogueStatsScreen_RogueEntry_C_Tick_Params params {};
	params.MyGeometry = MyGeometry;
	params.InDeltaTime = InDeltaTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_RogueStatsScreen_RogueEntry.WBP_RogueStatsScreen_RogueEntry_C.ExecuteUbergraph_WBP_RogueStatsScreen_RogueEntry
//		Flags  -> (Final, HasDefaults)
// Parameters:
//		int                                                EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWBP_RogueStatsScreen_RogueEntry_C::ExecuteUbergraph_WBP_RogueStatsScreen_RogueEntry(int EntryPoint)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(71911);

	UWBP_RogueStatsScreen_RogueEntry_C_ExecuteUbergraph_WBP_RogueStatsScreen_RogueEntry_Params params {};
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
