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
//		Name   -> Function WBP_ItemInfoPanel_StatBar.WBP_ItemInfoPanel_StatBar_C.Get Stat Value Text
//		Flags  -> (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
//		float                                              Stat_Value                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		struct FText                                       Value_Text                                                 (Parm, OutParm)
void UWBP_ItemInfoPanel_StatBar_C::Get_Stat_Value_Text(float Stat_Value, struct FText* Value_Text)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(75986);

	UWBP_ItemInfoPanel_StatBar_C_Get_Stat_Value_Text_Params params {};
	params.Stat_Value = Stat_Value;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Value_Text != nullptr)
		*Value_Text = params.Value_Text;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_ItemInfoPanel_StatBar.WBP_ItemInfoPanel_StatBar_C.Update Stat Values
//		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
//		struct FItemDisplayStat                            Current_Stat                                               (BlueprintVisible, BlueprintReadOnly, Parm)
//		struct FItemDisplayStat                            Upgrade_Stat                                               (BlueprintVisible, BlueprintReadOnly, Parm)
void UWBP_ItemInfoPanel_StatBar_C::Update_Stat_Values(const struct FItemDisplayStat& Current_Stat, const struct FItemDisplayStat& Upgrade_Stat)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(75985);

	UWBP_ItemInfoPanel_StatBar_C_Update_Stat_Values_Params params {};
	params.Current_Stat = Current_Stat;
	params.Upgrade_Stat = Upgrade_Stat;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_ItemInfoPanel_StatBar.WBP_ItemInfoPanel_StatBar_C.Refresh From Display Parameters
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
void UWBP_ItemInfoPanel_StatBar_C::Refresh_From_Display_Parameters()
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(75984);

	UWBP_ItemInfoPanel_StatBar_C_Refresh_From_Display_Parameters_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_ItemInfoPanel_StatBar.WBP_ItemInfoPanel_StatBar_C.PreConstruct
//		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
//		bool                                               IsDesignTime                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UWBP_ItemInfoPanel_StatBar_C::PreConstruct(bool IsDesignTime)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(75983);

	UWBP_ItemInfoPanel_StatBar_C_PreConstruct_Params params {};
	params.IsDesignTime = IsDesignTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_ItemInfoPanel_StatBar.WBP_ItemInfoPanel_StatBar_C.Construct
//		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
void UWBP_ItemInfoPanel_StatBar_C::Construct()
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(75982);

	UWBP_ItemInfoPanel_StatBar_C_Construct_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_ItemInfoPanel_StatBar.WBP_ItemInfoPanel_StatBar_C.ExecuteUbergraph_WBP_ItemInfoPanel_StatBar
//		Flags  -> (Final)
// Parameters:
//		int                                                EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWBP_ItemInfoPanel_StatBar_C::ExecuteUbergraph_WBP_ItemInfoPanel_StatBar(int EntryPoint)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(75981);

	UWBP_ItemInfoPanel_StatBar_C_ExecuteUbergraph_WBP_ItemInfoPanel_StatBar_Params params {};
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
