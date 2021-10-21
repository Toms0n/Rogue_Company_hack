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
//		Name   -> Function WBP_WeaponHubStatsEntry.WBP_WeaponHubStatsEntry_C.Get Stat Bar Widget
//		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
//		class UWBP_ItemInfoPanel_StatBar_C*                Return_Value                                               (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWBP_WeaponHubStatsEntry_C::Get_Stat_Bar_Widget(class UWBP_ItemInfoPanel_StatBar_C** Return_Value)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(75968);

	UWBP_WeaponHubStatsEntry_C_Get_Stat_Bar_Widget_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Return_Value != nullptr)
		*Return_Value = params.Return_Value;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
